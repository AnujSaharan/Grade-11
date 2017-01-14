//Lab Exercise 13.5
/*Program to calculate revenue earned from ads*/
//Anuj Saharan

#include <iostream.h>

struct advertisement
{
unsigned int ad_counter;
float click_percentage;
float average_payout;
} advertisement_1={0,0,0};

void advertisement_structure_input(struct advertisement &ad) //Obtains the input
{
cout<<"Enter the number of ads shown: ";
cin>>ad.ad_counter;
cout<<"Enter the percentage of users that clicked on the ad: ";
cin>>ad.click_percentage;
cout<<"Enter the average payout of each click: ";
cin>>ad.average_payout;
}

void advertisement_structure_output(struct advertisement ad) //Obtains the output
{
cout<<"\nNumber of ads shown: "<<ad.ad_counter;
cout<<"\nPercentage of users that clicked on the ad: "<<ad.click_percentage;
cout<<"\nAverage payout of each click: "<<ad.average_payout<<"\n";
}

int main()
{
advertisement_structure_input(advertisement_1);

cout<<"\nAdvertisement 1:\n";
advertisement_structure_output(advertisement_1);

cout<<"\nTotal payout: "<<advertisement_1.ad_counter*advertisement_1.click_percentage*advertisement_1.average_payout;

return 0;
}