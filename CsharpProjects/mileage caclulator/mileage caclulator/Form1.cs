using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace mileage_caclulator
{
    public partial class Form1 : Form
    {
        int startMil;
        int endMil;
        double travelMil;
        double reimbrRate = .39;
        double amountOwed;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            startMil = (int) numericUpDown1.Value;
            endMil = (int)numericUpDown2.Value;

            if (startMil < endMil)
            {

            }
            else
            {
                MessageBox.Show("The starting mileage must be less than ending mileage");
            }

        }

       
    }
}
