namespace N {

        class TrieClass {
                public:
                        //variables of the TrieNode
                        char symbol;
                        int wordEnd;
                        int wordCount;
                        int leafCount;
                        int *children[26];
        };
}
