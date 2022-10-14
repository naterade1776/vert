//VERT - a universal unit converter
#include <cstdio>
#include <cstdlib>
#include <iostream>

int comm;
double inp;
double res;

void ftc()
{
  std::cout << "FAHRENHEIT TO CELCIUS - INPUT VALUE IN F: "<< std::endl;
  std::cin>> inp;
  res = (inp - 32 * .55555);
  std::cout << "Celsius Value: " << res;
}
void ctf()
{
  std::cout << "CELSIUS TO FAHRENHEIT - INPUT VALUE IN C: " <<std::endl;
  std::cin >> inp;
  res = (inp * .55555 + 32);
  std::cout << "Fahrenheit Value: " << res;
}
void ftm()
{
  std::cout << "FEET TO METERS - INPUT VALUE IN FEET: " << std::endl;
  std::cin >> inp;
  res = (inp * .3048);
  std::cout << "Value in meters: " << res;
}
void mtf()
{
  std::cout << "METERS TO FEET - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp / .3048);
  std::cout << "Value in Feet: " << res;
}
void ptk()
{
  std::cout << "POUNDS TO KILOGRAMS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * .4535);
  std::cout << "Value in Kilograms: " << res;
}
void ktp()
{
  std::cout << "KILOGRAMS TO POUNDS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp / .4535);
  std::cout << "Value in Pounds: " << res;
}
void mphtkph()
{
  std::cout << "MPH TO KPH - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 1.61);
  std::cout << "Value in KPH: " << res;
}
void kphtmph()
{
  std::cout << "KPH TO MPH - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * .621);
  std::cout << "Value in MPH: " << res;
}
void mphtk()
{
  std::cout << "KNOTS TO MPH (BECAUSE WHAT THE HELL IS A KNOT?) - INPUT VALUE :" << std::endl;
  std::cin >> inp;
  res = (inp * 1.15);
  std::cout << res;
}
void mtk()
{
  std::cout << "MILES TO KILOMETERS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 1.61);
  std::cout << "Value in Kilometers: " << res;
}
void ktm()
{
  std::cout << "KILOMETERS TO MILES - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * .61);
  std::cout << "Value in Miles: " << res;
}
void mty()
{
  std::cout << "METERS TO YARDS - INPUT VALUE: "<< std::endl;
  std::cin >> res;
  res = (inp * 1.093);
  std::cout << "Value in Yards: " << res;
}
void ytm()
{
  std::cout << "YARDS TO METERS - INPUT VALUE: "<<std::endl;
  std::cin >> inp;
  res = (inp * .914);
  std::cout << "Value in Meters: " << res;
}
void itc()
{
  std::cout << "INCHES TO CENTIMETERS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 2.54);
  std::cout << "Value in Centimeters: " << res;
}
void cti()
{
  std::cout << "CENTIMETERS TO INCHES - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * .393);
  std::cout << "Value in Inches: " << res;
}
void gtl()
{
  std::cout << "GALLONS TO LITERS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 3.785);
  std::cout << "Value in Liters: " << res;
}
void ltg()
{
  std::cout << "LITERS TO GALLONS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * .2641);
  std::cout << "Value in Gallons: " << res;
}
void pto()
{
  std::cout << "US PINT TO US OUNCE - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 16);
  std::cout << "Value in US Ounces: " << res;
}
void otp()
{
  std::cout << "US OUNCE TO US PINT - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp / 16);
  std::cout << "Value in US Pint(s): " << res; 
}
void gto()
{
  std::cout << "US GALLONS TO US OUNCES - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp / 128);
  std::cout << "Value in US Ounces: " << res;
}
void otg()
{
  std::cout << "US OUNCES TO GALLONS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 128);
  std::cout << "Value in US Ounces: " << res;
}
void htg()
{
  std::cout << "HOGSHEADS TO US GALLONS - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 63);
  std::cout << "Value in Gallons: " << res;
}
void gth()
{
  std::cout << "US GALLONS TO HOGSHEADS: " << std::endl;
  std::cin >> inp;
  res = (inp / 63);
  std::cout << "Value in Hogsheads: " << res;
}
void sfta()
{
  std::cout << "SQUARE FEET TO ACRES - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp / 43560);
  std::cout << "Value in Acres: " << res;
}
void atsf()
{
  std::cout << "ACRES TO SQUARE FEET - INPUT VALUE: " << std::endl;
  std::cin >> inp;
  res = (inp * 43560);
  std::cout << "Value in Square Feet: " << res;
}

int main()
{
  std::cout << "   :::     ::: :::::::::: ::::::::: ::::::::::: " << std::endl;
  std::cout << "  :+:     :+: :+:        :+:    :+:    :+:   "    << std::endl;
  std::cout << " +:+     +:+ +:+        +:+    +:+    +:+     "   << std::endl;
  std::cout << "+#+     +:+ +#++:++#   +#++:++#:     +#+       "  << std::endl;
  std::cout << "+#+   +#+  +#+        +#+    +#+    +#+         " << std::endl;
  std::cout << "#+#+#+#   #+#        #+#    #+#    #+#          " << std::endl;
  std::cout << "###     ########## ###    ###    ###           " << std::endl;<<"VERT - A handy unit conversion tool. "<<std::endl;
  std::cout << "1. F° to C°"; << std::endl;
  std::cout << "2. F° to C°";<< std::endl;
  std::cout << "3. Feet to Meters";<< std::endl;
  std::cout << "4. Meters to Feet";<< std::endl;
  std::cout << "5. Pounds to Kilogrsams";<< std::endl;
  std::cout << "6. Kilograms to Pounds";<< std::endl;
  std::cout << "7. MPH to KPH";<< std::endl;
  std::cout << "8. KPH to MPH";<< std::endl;
  std::cout << "9. Knots to MPH";<< std::endl;
  std::cout << "10. Miles to Kilometers";<< std::endl;
  std::cout << "11. Kilometers to Miles";<< std::endl;
  std::cout << "12. Meters to Yards";<< std::endl;
  std::cout << "13. Inches to Centimeters";<< std::endl;
  std::cout << "14. Centimeters to Inches";<< std::endl;
  std::cout << "15. US Gallons to Liters";<< std::endl;
  std::cout << "16. Liters to US Gallons";<< std::endl;
  std::cout << "17. US Pints to US Ounces";<< std::endl;
  std::cout << "18. US Ounces to US Pints";<< std::endl;
  std::cout << "19. US Gallons to US Ounces";<< std::endl;
  std::cout << "20. US Ounces to US Gallons";<< std::endl;
  std::cout << "21. Hogsheads to Gallons";<< std::endl;
  std::cout << "22. Gallons to Hogsheads";<< std::endl;
  std::cout << "23. Square Feet to Acres";<< std::endl;
  std::cout << "24. Acres to Square Feet";<< std::endl;
  std::cout << "vert >> ";


