#ifndef Identifier_h
#define Identifier_h

#ifdef LINKED_TESTS
#define Identifier(IDENTIFIER) LINKED_##IDENTIFIER
#elif defined(UNLINKED_TESTS)
#define Identifier(IDENTIFIER) UNLINKED_##IDENTIFIER
#endif

#endif /* Identifier_h */
