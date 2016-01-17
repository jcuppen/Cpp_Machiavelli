#ifndef ENUMSTATE
#define ENUMSTATE

#include <map>
#include "EnumCharacter.h"

enum class EnumState {
	UNSTARTED,
	SETUP_CHOOSE,
	SETUP_DISCARD,
	ASSASSIN_STATE,
	THIEF_STATE,
	MAGICIAN_STATE,
	KING_STATE,
	BISHOP_STATE,
	MERCHANT_STATE,
	ARCHITECT_STATE,
	WARLORD_STATE,
	END
};

const std::map<EnumState, EnumCharacter> stateToCharacter{
	{EnumState::ASSASSIN_STATE, EnumCharacter::ASSASSIN},
	{EnumState::THIEF_STATE, EnumCharacter::THIEF},
	{EnumState::MAGICIAN_STATE, EnumCharacter::MAGICIAN},
	{EnumState::KING_STATE, EnumCharacter::KING},
	{EnumState::BISHOP_STATE, EnumCharacter::BISHOP},
	{EnumState::MERCHANT_STATE, EnumCharacter::MERCHANT},
	{EnumState::ARCHITECT_STATE, EnumCharacter::ARCHITECT },
	{EnumState::WARLORD_STATE, EnumCharacter::WARLORD}
};

const std::map<EnumState, EnumState> nextState = {
	{EnumState::ASSASSIN_STATE, EnumState::THIEF_STATE},
	{EnumState::THIEF_STATE, EnumState::MAGICIAN_STATE},
	{EnumState::MAGICIAN_STATE, EnumState::KING_STATE},
	{EnumState::KING_STATE, EnumState::BISHOP_STATE},
	{EnumState::BISHOP_STATE, EnumState::MERCHANT_STATE},
	{EnumState::MERCHANT_STATE, EnumState::ARCHITECT_STATE},
	{EnumState::ARCHITECT_STATE, EnumState::WARLORD_STATE},
	{EnumState::WARLORD_STATE, EnumState::END}
};

const std::map<EnumState, std::string> convertFromEnumState={
	{EnumState::ASSASSIN_STATE, "moordenaar"},
	{EnumState::THIEF_STATE, "dief"},
	{EnumState::MAGICIAN_STATE, "magier"},
	{EnumState::KING_STATE, "koning"},
	{EnumState::BISHOP_STATE, "prediker"},
	{EnumState::MERCHANT_STATE, "koopman"},
	{EnumState::ARCHITECT_STATE, "bouwmeester"},
	{EnumState::WARLORD_STATE, "condottiere"},
};

#endif
