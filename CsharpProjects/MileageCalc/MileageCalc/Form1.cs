using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace MileageCalc
{
    public partial class Form1 : Form
    {
        int startMil;
        int endMil;
        double totalMil;
        double travelMil;
        double reimbvRate;
        double amountOwed;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            startMil = (int)numericUpDown1.Value;
            endMil = (int)numericUpDown2.Value;
            totalMil = endMil - startMil;
            reimbvRate = (double) numericUpDown3.Value;

            if (startMil <= endMil)
            {
                travelMil = endMil - startMil;
                amountOwed = travelMil * reimbvRate;
                label4.Text = "$" + amountOwed;
                label6.Text = " " + totalMil + " mi";
            }
            else
            {
                MessageBox.Show("The starting mileage must be less than ending mileage", "Cannot Calculate");
            }
        }

    }
}
