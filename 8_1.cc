/* Design the data structures for a generic deck of cards. Explain how you would
 * subclass the data structures to implement blackjack.
 */
 
enum Suit {
  Heart,
  Jack,
  Spades,
  Club
};

class Card(Suit suit, size_t number) {
 public:
   Suit suit() { return suit_; }  
   size_t number() { return number_; }
   
 private:
   Suit suit_;
   size_t number_;
}

class Deck() {
 public:
  vector<Card>& cards() { return cards_; }
  
  void Shuffle();
  void Draw();
  size_t CardsLeft() const;  
  // REMEMBER: const after the method means it doesn't alter the object!!!!
 private:
  std::vector<Card>& cards; 
  size_t cards_left;
}

// Unfortunately I don't know how to play blackjack orz


