#ifndef MORALE_SYSTEM_H
#define MORALE_SYSTEM_H

#include <string>
#include <vector>

class Player {
private:
    std::string name;
    int confidence;

public:
    Player(const std::string& name, int initialConfidence);
    
    void adjustConfidence(int delta);
    void updateStats();
    
    int getConfidence() const;
    std::string getName() const;
};

class Coach {
private:
    std::string name;

public:
    Coach(const std::string& name);

    void giveHalftimeSpeech();
    void makeSubstitution(Player& outPlayer, Player& inPlayer);
    
    std::string getName() const;
};

class FanBase {
private:
    int supportLevel;

public:
    FanBase(int initialSupport);

    void cheer();
    void boo();

    int getSupportLevel() const;
};

class Media {
private:
    std::string narrative;

public:
    Media(const std::string& initialNarrative);

    void setNarrative(const std::string& newNarrative);
    std::string getNarrative() const;

    void impactMorale(int& teamMorale);
};

class GameEvent {
private:
    std::string eventType;

public:
    GameEvent(const std::string& type);

    void affectMorale(int& teamMorale);
    std::string getEventType() const;
};

class Team {
private:
    std::string name;
    int morale;
    std::vector<Player> players;
    Coach* coach;
    FanBase* fanBase;

public:
    Team(const std::string& name, Coach* coach, FanBase* fanBase);

    void updateMorale();
    void calculateTeamMorale();
    void addPlayer(const Player& player);

    int getMorale() const;
    std::string getName() const;
    std::vector<Player>& getPlayers();
};

class MoraleSystem {
public:
    void adjustTeamMorale(Team& team, const GameEvent& event, const Media& media);
    void logMoraleChanges(const Team& team);
    void generatePostGameReport(const Team& team);
};

#endif // The header file (MORALE_SYSTEM_H) ends here,
