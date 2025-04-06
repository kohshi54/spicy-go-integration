#include "spicy_http.hpp"

int main(int argc, char** argv) {
	hilti::rt::init();
	spicy::rt::init();
	SpicyHTTPParser(std::cin);
	spicy::rt::done();
	hilti::rt::done();
	return 0;
}

/*
from https://www.rfc-editor.org/rfc/rfc9112.html
"The normal procedure for parsing an HTTP message is 
to read the start-line into a structure, 
read each header field line into a hash table by field name until the empty line, 
and then use the parsed data to determine if a message body is expected. 
If a message body has been indicated, then it is read as a stream 
until an amount of octets equal to the message body length 
is read or the connection is closed."

HTTP-message  = start-line CRLF
				*( field-line CRLF )
				CRLF
				[ message-body ]
start-line    = request-line / status-line

HTTP-version  = HTTP-name "/" DIGIT "." DIGIT
HTTP-name     = %s"HTTP"
request-line  = method SP request-target SP HTTP-version
field-line    = field-name ":" OWS field-value OWS
field-name    = token //https://www.rfc-editor.org/rfc/rfc9110#section-5.5
field-value   = *field-content 
field-content = field-vchar [ 1*( SP / HTAB / field-vchar ) field-vchar ]
field-vchar   = VCHAR / obs-text
obs-text      = %x80-FF

token         = 1*tchar   5.6.2. Tokens https://www.rfc-editor.org/rfc/rfc9110#fields.names
tchar         = "!" / "#" / "$" / "%" / "&" / "'" / "*"
				/ "+" / "-" / "." / "^" / "_" / "`" / "|" / "~"
				/ DIGIT / ALPHA
				; any VCHAR, except delimiters

message-body  = *OCTET
*/
