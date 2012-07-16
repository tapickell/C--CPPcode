using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Xml.Linq;
using Microsoft.Office.Tools.Excel;
using Microsoft.VisualStudio.Tools.Applications.Runtime;
using Excel = Microsoft.Office.Interop.Excel;
using Office = Microsoft.Office.Core;

namespace ExcelWorkbook2
{
    public partial class Sheet1
    {
        private void Sheet1_Startup(object sender, System.EventArgs e)
        {
            this.button1.Click += new EventHandler(button1_Click);
            this.button2.Click += new EventHandler(button2_Click);
            this.button3.Click += new EventHandler(button3_Click);
            this.button4.Click += new EventHandler(button4_Click);
            this.button5.Click += new EventHandler(button5_Click);
            this.button6.Click += new EventHandler(button6_Click);
            this.button7.Click += new EventHandler(button7_Click);
            this.button8.Click += new EventHandler(button8_Click);
        }

        private void Sheet1_Shutdown(object sender, System.EventArgs e)
        {
        }

        #region VSTO Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InternalStartup()
        {
            this.button1.Click += new System.EventHandler(this.button1_Click);
            this.button2.Click += new System.EventHandler(this.button2_Click);
            this.button3.Click += new System.EventHandler(this.button3_Click);
            this.button4.Click += new System.EventHandler(this.button4_Click);
            this.button5.Click += new System.EventHandler(this.button5_Click);
            this.button6.Click += new System.EventHandler(this.button6_Click);
            this.button7.Click += new System.EventHandler(this.button7_Click);
            this.button8.Click += new System.EventHandler(this.button8_Click);
            this.Startup += new System.EventHandler(this.Sheet1_Startup);
            this.Shutdown += new System.EventHandler(this.Sheet1_Shutdown);

        }

        #endregion



        private void button1_Click(object sender, EventArgs e)
        {
            answer.Text = "Light Survival Kit";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            answer.Text = "Standard Survival Kit";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            answer.Text = "Standard Survival Kit";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            answer.Text = "Deluxe Survival Kit";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            answer.Text = "Deluxe Survival Kit";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            answer.Text = "Pampered Survival Kit";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            answer.Text = "Pampered Survival Kit";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            answer.Text = "CALL AN EXORCIST!!!";
        }

    }
}
