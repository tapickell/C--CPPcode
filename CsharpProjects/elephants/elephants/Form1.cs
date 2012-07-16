using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace elephants
{
    public partial class Form1 : Form
    {
        Elefant lucinda;
        Elefant lloyd;
        
        public Form1()
        {
            InitializeComponent();
            lucinda = new Elefant() { name = "Lucinda", earSize = 33 };
            lloyd = new Elefant() { name = "Lloyd", earSize = 40 };

        }

        private void button1_Click(object sender, EventArgs e)
        {
            lloyd.whoAmI();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            lucinda.whoAmI();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Elefant holder;
            holder = lloyd;
            lloyd = lucinda;
            lucinda = holder;
            MessageBox.Show("Objects Swapped!");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            lloyd = lucinda;
            lloyd.earSize = 4321;
            lloyd.whoAmI();
        }
    }
}
