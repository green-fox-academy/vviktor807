//
// Created by Viktor on 2019. 04. 17..
//

#include "BlogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate)
{
    setName(authorName);
    setTitle(title);
    setText(text);
    setDate(publicationDate);
}

void BlogPost::setName(std::string authorName)
{
    _authorName = authorName;
}

void BlogPost::setTitle(std::string title)
{
    _title = title;
}

void BlogPost::setText(std::string text)
{
    _text = text;
}

void BlogPost::setDate(std::string publicationDate)
{
    _publicationDate = publicationDate;
}

std::string BlogPost::getName()
{
    return _authorName;
}

std::string BlogPost::getTitle()
{
    return _title;
}

std::string BlogPost::getText()
{
    return _text;
}

std::string BlogPost::getDate()
{
    return _publicationDate;
}

