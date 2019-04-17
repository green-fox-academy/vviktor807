//
// Created by Viktor on 2019. 04. 17..
//

#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

#include <iostream>
#include <string>

class BlogPost {
public:
    BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::string &publicationDate);

    void setName(std::string authorName);
    void setTitle(std::string title);
    void setText(std::string text);
    void setDate(std::string publicationDate);
    std::string getName();
    std::string getTitle();
    std::string getText();
    std::string getDate();
private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOG_POST_BLOGPOST_H
