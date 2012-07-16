using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace sloppyJoe
{
    class menuMaker
    {
        public Random randomizer;

        string[] Meats = { "Roast Beef", "Salami", "Turkey", "Ham", "Pastrami" };
        string[] Condiments = { "Yellow Mustard", "Brown Mustard", "Honey Mustard", "Mayo", "Relish", "French Dressing" };
        string[] Breads = { "Rye", "White", "Wheat", "Pumpernikel", "Italian", "a roll" };

        public string GetMenuItem()
        {
            string randomMeat = Meats[randomizer.Next(Meats.Length)];
            string randomCondiment = Condiments[randomizer.Next(Condiments.Length)];
            string randomBread = Breads[randomizer.Next(Breads.Length)];
            return randomMeat + " with " + randomCondiment + " on " + randomBread;

        }
    }
}
