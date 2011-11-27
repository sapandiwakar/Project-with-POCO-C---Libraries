#include "Poco/SAX/SAXParser.h"
#include "Poco/SAX/ContentHandler.h"
#include "Poco/SAX/LexicalHandler.h"
#include "Poco/SAX/Attributes.h"
#include "Poco/SAX/Locator.h"
#include "Poco/Exception.h"
#include "Contact.h"
#include "Lot.h"
#include <iostream>
#include <map>
#include <list>

bool ParsePPE(const std::string &_strXML, std::map<std::string, std::string> &_generalData, 
	std::map<std::string, MaPPE::Contact> &_contacts, std::list<MaPPE::Lot> &_lots);