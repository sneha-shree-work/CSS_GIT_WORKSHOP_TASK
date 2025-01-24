#ifndef STRING_UTILS_H
#define STRING_UTILS_H

char* reverse_string(const char* str);
char* to_uppercase(const char* str);
char* to_lowercase(const char* str);
int substring_search(const char* str, const char* sub);
int count_number_of_vowels(const char* str);
int count_number_of_consonants(const char* str);
int count_number_of_words(const char* str);
int count_number_of_sentences(const char* str);
int count_number_of_occurrences(const char* str, const char* sub);
int is_palindrome(const char* str);
int is_anagram(const char* str1, const char* str2);
int is_pangram(const char* str);
int is_isogram(const char* str);
int is_valid_ip_address(const char* str);
int is_valid_email(const char* str);
int is_valid_date(const char* str);

#endif
