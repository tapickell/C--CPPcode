using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace elephants
{
    class Elefant
    {
        public int earSize;
        public string name;

        public void whoAmI()
        {
            MessageBox.Show("My ears are " + earSize + " in long.", name + " says...");
        }
    }
}
