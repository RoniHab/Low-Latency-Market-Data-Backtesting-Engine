#include <iostream>
#include <boost/asio.hpp>

int main() {
    boost::asio::io_context io;
    boost::asio::steady_timer t(io, boost::asio::chrono::seconds(1));
    t.wait();
    std::cout << "Hello, World! (after 1 second delay)" << std::endl;
    return 0;
}
