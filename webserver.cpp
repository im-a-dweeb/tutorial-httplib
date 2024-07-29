#include <iostream>
#include "httplib.h"

using namespace std;

int main() {
	httplib::Server srv;
	srv.Get("/test", [](const httplib::Request& req, httplib::Response& res) {
		res.set_content("Testing tutorial", "text/plain");
		cout << "A request has been made! woohoo!" << endl;
	});
	srv.listen("0.0.0.0", 3303);
	return 0;
}
