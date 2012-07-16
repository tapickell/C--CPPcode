using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace mYClassTest
{
    class talker
    {
        public static int BlahBlah(string thingToSay, int numOfTimes)
        {
            string finalString = "";
            for (int count = 1; count <= numOfTimes; count++)
            {
                finalString += thingToSay + "\n";
            }
            MessageBox.Show(finalString);
            return finalString.Length;
        }
    }
}
