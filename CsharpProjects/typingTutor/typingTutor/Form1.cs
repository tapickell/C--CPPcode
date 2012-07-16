using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace typingTutor
{
    public partial class Form1 : Form
    {
        Random random = new Random();
        Stats stats = new Stats();

        public Form1()
        {
            InitializeComponent();
        }
        
        private void timer1_Tick(object sender, EventArgs e)
        {
            // Add a random key to the ListBox
            listBox1.Items.Add((Keys)random.Next(65, 90));
            debugLabel.Text = "random started";
            if (listBox1.Items.Count > 70)
            {
                listBox1.Items.Clear();
                listBox1.Items.Add("Game Over!");
                timer1.Stop();
            }
            debugLabel.Text = "after if items count";
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            debugLabel.Text = "key down recieved";
            // If the user pressed a key that's in the list box
            // remove then make game a little faster
            if (listBox1.Items.Contains(e.KeyCode))
            {
                debugLabel.Text = "listBox1 contains";
                listBox1.Items.Remove(e.KeyCode);
                debugLabel.Text = "listBox1 removed";
                listBox1.Refresh();
                if (timer1.Interval > 400)
                    timer1.Interval -= 10;
                if (timer1.Interval > 250)
                    timer1.Interval -= 7;
                if (timer1.Interval > 100)
                    timer1.Interval -= 2;
                difficultyProgressBar.Value = 800 - timer1.Interval;

                // The user pressed a correct key, so update the stats object
                //by calling its update() method with the arg true
                stats.Update(true);
            }
            else
            {
                debugLabel.Text = "listBox1 else";
                // The user pressed an incorrect key, so update the stats object
                //by calling its update() method with the arg false
                stats.Update(false);
            }

            // Update the labels on the status strip
            correctLabel.Text = "Correct: " + stats.Correct;
            missedLabel.Text = "Missed: " + stats.Missed;
            totalLabel.Text = "Total: " + stats.Total;
            accuracyLabel.Text = "Accuracy: " + stats.Accuracy + "%";
        }
    }
}
