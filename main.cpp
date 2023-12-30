#include <iostream>

int main()
{
    int image_width = 256;
    int image_height = 256;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int y = 0; y < image_height; y++) {
        std::clog << "\rScanelines remaining: " << (image_height - y) << ' ' << std::flush;
        for (int x = 0; x < image_width; x++) {
            auto r = double(x) / (image_width - 1);
            auto g = double(y) / (image_height - 1);
            auto b = 0;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(225.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::clog << "\rDone.               \n";
}
