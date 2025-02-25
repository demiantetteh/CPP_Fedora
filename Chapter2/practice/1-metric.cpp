// You have an infinite loop for when the weight exceeds a ton by some
// decimals... fix it and add some new line chars for some neatness

#include <iostream>

const double CONV_OUNCES = 35273.92;

int main()
{
    // 1 metric ton = 35273.92 ounces

    int cnt = 0;
    char ans;
    double ounce_pack, ton_pack, need_to_ton_weight, need_to_ton_package;

    do
    {
        std::cout
            << "Enter the weight(in ounces) of your favourite cereal package: ";
        std::cin >> ounce_pack;

        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::fixed);
        std::cout.precision(2);

        if (ounce_pack >= 0)
        {
            ton_pack = ounce_pack / CONV_OUNCES;

            std::cout << "The weight of your cereal package(in metric tons) is "
                      << ton_pack << " metric tons\n";

            // calculations to get need_to_ton(weight & package)
            need_to_ton_weight = CONV_OUNCES - ounce_pack;
            double temp_need_to_weight = need_to_ton_weight;

            if (need_to_ton_weight < 0)
            {
                while (need_to_ton_weight <= 0)
                {
                    cnt++;
                    temp_need_to_weight += CONV_OUNCES;
                }
            }

            if ((need_to_ton_weight == 0) && (cnt == 0))
            {
                // exactly 1 ton
                need_to_ton_weight = 0;
                std::cout << "You need " << need_to_ton_weight
                          << " to make a ton";
            }
            else if ((temp_need_to_weight == 0) && (cnt != 0))
            {
                need_to_ton_weight = (cnt * CONV_OUNCES) - ounce_pack;
            }

            if (need_to_ton_weight > 0)
            {
                // had been positive from the start || the conditional on line
                // 50
                std::cout << "You'll need " << need_to_ton_weight << " i.e ("
                          << (need_to_ton_weight / CONV_OUNCES)
                          << ") ton(s) to make the nearest metric ton"
                          << std::endl;

                need_to_ton_package = (need_to_ton_weight / ounce_pack);

                std::cout << "\nWhich is " << need_to_ton_package
                          << " packages of your cereal\n";
            }
        }
        else
        {
            std::cout << "You CANNOT have a negative weight :)" << std::endl;
        }

        std::cout << "Do you want to restart this program? (Y)es, (N)o:  ";
        std::cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    std::cout << "Thanks for using this console :))";

    return (0);
}
