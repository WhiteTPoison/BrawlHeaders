#pragma once

enum GameMode {
    Game_Mode_Melee = 0x0,
    Game_Mode_Tournament = 0x1,
    Game_Mode_Simple = 0x2,
    Game_Mode_Simple_Target = 0x3,
    Game_Mode_AllStar = 0x4,
    Game_Mode_Rest = 0x5,
    Game_Mode_Adventure = 0x6,
    Game_Mode_Event = 0x7,
    Game_Mode_Target = 0x8,
    Game_Mode_Homerun = 0x9,
    Game_Mode_Kumite = 0xA,

    Game_Mode_Training = 0xD,
    Game_Mode_Net_Friend = 0xE,
    Game_Mode_Net_Friend_Practice = 0xF,
    Game_Mode_Net_Kumite = 0x10,
    Game_Mode_Net_Kumite_Practice = 0x11,
    Game_Mode_Net_Homerun = 0x12,
    Game_Mode_Net_Homerun_Practice = 0x13,

    Game_Mode_Net_Watch = 0x17,
    Game_Mode_Net_Okiraku = 0x18,
    Game_Mode_Net_Okiraku_Practice = 0x19,

    Game_Mode_Net_Team = 0x1C,
    Game_Mode_Net_Team_Practice = 0x1D,

    Game_Mode_Button = 0x1F,
    Game_Mode_Result = 0x20,
    Game_Mode_Demo = 0x21,


};

enum GameRule {
    Game_Rule_Time = 0x0,
    Game_Rule_Stock = 0x1,
    Game_Rule_Coin = 0x2
};

enum gmCharacterKind {
    Character_Mario = 0x0,
    Character_DonkeyKong = 0x1, Character_Donkey = 0x1,
    Character_Link = 0x2,
    Character_Samus = 0x3,
    Character_ZeroSuitSamus = 0x4, Character_SZeroSuit = 0x4,
    Character_Yoshi = 0x5,
    Character_Kirby = 0x6,
    Character_Fox = 0x7,
    Character_Pikachu = 0x8,
    Character_Luigi = 0x9,
    Character_CaptainFalcon = 0xa, Character_Captain = 0xa,
    Character_Ness = 0xb,
    Character_Bowser = 0xc, Character_Koopa = 0xc,
    Character_Peach = 0xd,
    Character_Zelda = 0xe,
    Character_Sheik = 0xf,
    Character_IceClimbers = 0x10, Character_IceClimber = 0x10,
    Character_IceClimbers_Popo = 0x11, Character_IceClimber_Popo = 0x11,
    Character_IceClimbers_Nana = 0x12, Character_IceClimber_Nana = 0x12,
    Character_Marth = 0x13,
    Character_MrGameAndWatch = 0x14, Character_GameWatch = 0x14,
    Character_Falco = 0x15,
    Character_Ganondorf = 0x16, Character_Ganon = 0x16,
    Character_Wario = 0x17,
    Character_MetaKnight = 0x18,
    Character_Pit = 0x19,
    Character_Olimar = 0x1a, Character_Pikmin = 0x1a,
    Character_Lucas = 0x1b,
    Character_DiddyKong = 0x1c, Character_Diddy = 0x1c,
    Character_PokeLizardon_Trainer = 0x1d, Character_Charizard_Trainer = 0x1d,
    Character_PokeLizardon_Solo = 0x1e, Character_Charizard_Solo = 0x1e,
    Character_PokeZenigame_Trainer = 0x1f, Character_Squirtle_Trainer = 0x1f,
    Character_PokeZenigame_Solo = 0x20, Character_Squirtle_Solo = 0x20,
    Character_PokeFushigisou_Trainer = 0x21, Character_Ivysaur_Trainer = 0x21,
    Character_PokeFushigisou_Solo = 0x22, Character_Ivysaur_Solo = 0x22,
    Character_KingDedede = 0x23, Character_Dedede = 0x23,
    Character_Lucario = 0x24,
    Character_Ike = 0x25,
    Character_ROB = 0x26, Character_Robot = 0x26,
    Character_Jigglypuff = 0x27, Character_Purin = 0x27,
    Character_ToonLink = 0x28,
    Character_Wolf = 0x29,
    Character_Snake = 0x2a,
    Character_Sonic = 0x2b,
    Character_GigaBowser = 0x2c, Character_GKoopa = 0x2c,
    Character_WarioMan = 0x2d,
    Character_Alloy_Red = 0x2e, Character_Zako_Boy = 0x2e,
    Character_Alloy_Blue = 0x2f, Character_Zako_Girl = 0x2f,
    Character_Alloy_Yellow = 0x30, Character_Zako_Child = 0x30,
    Character_Alloy_Green = 0x31, Character_Zako_Ball = 0x31,
    Character_MarioD = 0x32,
    Character_Boss_PeteyPiranha = 0x33, Character_Boss_BossPackun = 0x33,
    Character_Boss_Rayquaza = 0x34,
    Character_Boss_PorkyStatue = 0x35,
    Character_Boss_Porky = 0x36,
    Character_Boss_Galloem = 0x37,
    Character_Boss_Ridley = 0x38,
    Character_Boss_Duon = 0x39,
    Character_Boss_MetaRidley = 0x3a,
    Character_Boss_Tabuu = 0x3b, Character_Boss_Taboo = 0x3b,
    Character_Boss_MasterHand = 0x3c,
    Character_Boss_CrazyHand = 0x3d,
    Character_SelectNone = 0x3e,
    Character_PokemonTrainer = 0x48, Character_PokeTrainer = 0x48,
    Character_SamusSZeroSuit = 0x49,
    Character_ZeldaShiek = 0x4a,
    Character_Invalid = 0xff,
};

namespace Stages {
    enum srStageKind {
        BattleField = 0x01,
        Battle = 0x01,
        FinalDestination = 0x02,
        Final = 0x02,
        DelfinoPlaza = 0x03,
        Dolpic = 0x03,
        LuigiMansion = 0x04,
        Mansion = 0x04,
        MushroomyKingdom = 0x05,
        MarioPast = 0x05,
        MarioCircuit = 0x06,
        Kart = 0x06,
        _75m = 0x07,
        Donkey = 0x07,
        RumbleFalls = 0x08,
        Jungle = 0x08,
        PirateShip = 0x09,
        Pirates = 0x09,
        Norfair = 0x0B,
        FrigateOrpheon = 0x0C,
        Orpheon = 0x0C,
        YoshiIsland = 0x0D,
        Crayon = 0x0D,
        Halberd = 0x0E,
        LylatCruise = 0x13,
        StarFox = 0x13,
        PokemonStadium2 = 0x14,
        Stadium = 0x14,
        SpearPillar = 0x15,
        Tengan = 0x15,
        PortTown = 0x16,
        FZero = 0x16,
        Summit = 0x17,
        Ice = 0x17,
        FlatZone2 = 0x18,
        GW = 0x18,
        CastleSiege = 0x19,
        Emblem = 0x19,
        WarioWare = 0x1C,
        Madein = 0x1C,
        DistantPlanet = 0x1D,
        Earth = 0x1D,
        Skyworld = 0x1E,
        Palutena = 0x1E,
        MarioBros = 0x1F,
        Famicom = 0x1F,
        NewPorkCity = 0x20,
        NewPork = 0x20,
        Smashville = 0x21,
        Village = 0x21,
        ShadowMoses = 0x22,
        MetalGear = 0x22,
        GreenHillZone = 0x23,
        GreenHill = 0x23,
        PictoChat = 0x24,
        PictChat = 0x24,
        Hanenbow = 0x25,
        Plankton = 0x25,
        Config = 0x26,
        Result = 0x28,
        Temple = 0x29,
        DxShrine = 0x29,
        YoshiIslandMelee = 0x2A,
        DxYorster = 0x2A,
        JungleJapes = 0x2B,
        DxGarden = 0x2B,
        Onett = 0x2C,
        DxOnett = 0x2C,
        GreenGreens = 0x2D,
        DxGreens = 0x2D,
        PokemonStadium = 0x2E,
        DxPStadium = 0x2E,
        RainbowCruise = 0x2F,
        DxCruise = 0x2F,
        Corneria = 0x30,
        DxCorneria = 0x30,
        BigBlue = 0x31,
        DxBigBlue = 0x31,
        Brinstar = 0x32,
        DxZebes = 0x32,
        BridgeOfEldin = 0x33,
        Oldin = 0x33,
        HomeRunContest = 0x34,
        Homerun = 0x34,
        Builder = 0x35,
        Edit = 0x35,
        RestArea = 0x36,
        Heal = 0x36,
        OnlineTraining = 0x37,
        OTrain = 0x37,
        TargetSmash = 0x38,
        Target = 0x38,
        TargetBreak = 0x38,
        TBreak = 0x38,
        CharacterRoll = 0x39,
        CharaRoll = 0x39,
        CRoll = 0x39,
        Subspace = 0x3d,
        Adventure = 0x3d,
        BattleFieldS = 0x41,
        BattleS = 0x41
    };
}; // namespace Stages

typedef Stages::srStageKind srStageKind;