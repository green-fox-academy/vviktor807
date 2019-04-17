#include <iostream>
#include "BlogPost.h"
int main()
{
    BlogPost bo("John Doe", "\"Lorem Ipsum\"", "Lorem ipsum dolor sit amet.", "\"2000.05.04.\"");
    std::cout << bo.getTitle() << " titled by " << bo.getName() << " at " << bo.getDate() << std::endl;
    std::cout << bo.getText() << "\n" << std::endl;

    BlogPost bo1 (" Tim Urban", "\"Wait but why\"",
            "A popular long-form, stick-figure-illustrated blog about almost everything.","\"2010.10.10.\"");
    std::cout << bo1.getTitle() << " titled by " << bo1.getName() << " at " << bo1.getDate() << std::endl;
    std::cout << bo1.getText() << "\n" << std::endl;

    BlogPost bo2 ("William Turton", "\"One Engineer Is Trying to Get IBM to Reckon With Trump\"",
            "Daniel Hanley, a cybersecurity engineer at IBM's doesn't want to be the center of attention.\ "
            "When I asked to take his \npicture outside one of IBM's New York City offices,\ "
            "he told me that he wasn't really into the whole organizer \nprofile thing.", "\"2017.03.28.\"");
    std::cout << bo2.getTitle() << " titled by " << bo2.getName() << " at " << bo2.getDate() << std::endl;
    std::cout << bo2.getText() << "\n" << std::endl;
    return 0;
}