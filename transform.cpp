void show_binary( int dec )
{
    std::cout << "decimal = " << dec << "\n";

    std::string bin{};

    while( dec > 0 ) {
        if( dec % 2 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );

        dec >>= 1;
    }

    std::cout << "binary = " << bin << "\n";
}
0

int main() {
    int dec = 75;
    show_binary(dec);
    return 0;
}