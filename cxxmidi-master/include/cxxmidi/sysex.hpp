/* *****************************************************************************
Copyright (c) 2018 Stan Chlebicki

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
***************************************************************************** */

#ifndef INCLUDE_CXXMIDI_SYSEX_HPP_
#define INCLUDE_CXXMIDI_SYSEX_HPP_

namespace cxxmidi {

class Sysex {
  enum VendorId {
    // Special
    kExtended = 0,

    // Japan
    kKawaiMusicalInstrumentsMFGCOLtd = 0x40,
    kRolandCorporation = 0x41,
    kKorgInc = 0x42,
    kYamahaCorporation = 0x43,
    kCasioComputerCoLtd = 0x44,
    kKamiyaStudioCoLtd = 0x46,
    kAkaiElectricCoLtd = 0x47,
    kVictorCompanyofJapanLtd = 0x48,
    kFujitsuLimited = 0x4B,
    kSonyCorporation = 0x4C,
    kTeacCorporation = 0x4E,
    kMatsushitaElectricIndustrialCoLtd = 0x50,
    kFostexCorporation = 0x51,
    kZoomCorporation = 0x52,
    kMatsushitaCommunicationIndustrialCoLtd = 0x54,
    kSuzukiMusicalInstrumentsMFGCoLtd = 0x55,
    kFujiSoundCorporationLtd = 0x56,
    kAcousticTechnicalLaboratoryInc = 0x57,
    kFaithInc = 0x59,
    kInternetCorporation = 0x5A,
    kSeekersCoLtd = 0x5C,
    kSDCardAssociation = 0x5F,

    // Other
    kEducational = 0x7D
  };

  enum ExtendedVendorId {
    // North American Group
    kTaHorngMusicalInstrument = 0x000074,
    keTekLabsForteTech = 0x000075,
    kElectroVoice = 0x000076,
    kMidisoftCorporation = 0x000077,
    kQSoundLabs = 0x000078,
    kWestrex = 0x000079,
    kNvidia = 0x00007A,
    kESSTechnology = 0x00007B,
    kMediaTrixPeripherals = 0x00007C,
    kBrooktreeCorp = 0x00007D,
    kOtariCorp = 0x00007E,
    kKeyElectronicsInc = 0x00007F,
    kShureIncorporated = 0x000100,
    kAuraSound = 0x000101,
    kCrystalSemiconductor = 0x000102,
    kConexantRockwell = 0x000103,
    kSiliconGraphics = 0x000104,
    kMAudioMidiman = 0x000105,
    kPreSonus = 0x000106,
    kTopazEnterprises = 0x000108,
    kCastLighting = 0x000109,
    kMicrosoft = 0x00010A,
    kSonicFoundry = 0x00010B,
    kLine6FastForwardYamaha = 0x00010C,
    kBeatnikInc = 0x00010D,
    kVanKoeveringCompany = 0x00010E,
    kAltechSystems = 0x00010F,
    kSNSResearch = 0x000110,
    kVLSITechnology = 0x000111,
    kChromaticResearch = 0x000112,
    kSapphire = 0x000113,
    kIDRC = 0x000114,
    kJustonicTuning = 0x000115,
    kTorCompResearchInc = 0x000116,
    kNewtekInc = 0x000117,
    kSoundSculpture = 0x000118,
    kWalkerTechnical = 0x000119,
    kDigitalHarmonyPAVO = 0x00011A,
    kInVisionInteractive = 0x00011B,
    kTSquareDesign = 0x00011C,
    kNemesysMusicTechnology = 0x00011D,
    kDBXProfessionalHarmanIntl = 0x00011E,
    kSyndyneCorporation = 0x00011F,
    kBitheadz = 0x000120,
    kCakewalkMusicSoftwareGibson = 0x000121,
    kAnalogDevices = 0x000122,
    kNationalSemiconductor = 0x000123,
    kBoomTheoryAdinolfiAlternativePercussion = 0x000124,
    kVirtualDSPCorporation = 0x000125,
    kAntaresSystems = 0x000126,
    kAngelSoftware = 0x000127,
    kStLouisMusic = 0x000128,
    kPassportMusicSoftwareLlcGvox = 0x000129,
    kAshleyAudioInc = 0x00012A,
    kVariLiteInc = 0x00012B,
    kSummitAudioInc = 0x00012C,
    kAurealSemiconductorInc = 0x00012D,
    kSeaSoundLlc = 0x00012E,
    kUSRobotics = 0x00012F,
    kAurisisResearch = 0x000130,
    kNearfieldResearch = 0x000131,
    kFM7Inc = 0x000132,
    kSwivelSystems = 0x000133,
    kHyperactiveAudioSystems = 0x000134,
    kMidiLiteCastleStudiosProductions = 0x000135,
    kRadikalTechnologies = 0x000136,
    kRogerLinnDesign = 0x000137,
    kTCHeliconVocalTechnologies = 0x000138,
    kEventElectronics = 0x000139,
    kSonicNetworkInc = 0x00013A,
    kRealtimeMusicSolutions = 0x00013B,
    kApogeeDigital = 0x00013C,
    kClassicalOrgansInc = 0x00013D,
    kMicrotoolsInc = 0x00013E,
    kNumarkIndustries = 0x00013F,
    kFrontierDesignGroupLlc = 0x000140,
    kRecordareLlc = 0x000141,
    kStarrLabs = 0x000142,
    kVoyagerSoundInc = 0x000143,
    kManifoldLabs = 0x000144,
    kAviomInc = 0x000145,
    kMixmeisterTechnology = 0x000146,
    kNotationSoftware = 0x000147,
    kMercurialCommunications = 0x000148,
    kWaveArts = 0x000149,
    kLogicSequencingDevices = 0x00014A,
    kAxessElectronics = 0x00014B,
    kMuseResearch = 0x00014C,
    kOpenLabs = 0x00014D,
    kGuillemotCorp = 0x00014E,
    kSamsonTechnologies = 0x00014F,
    kElectronicTheatreControls = 0x000150,
    kBlackberryRIM = 0x000151,
    kMobileer = 0x000152,
    kSynthogy = 0x000153,
    kLynxStudioTechnologyInc = 0x000154,
    kDamageControlEngineeringLlc = 0x000155,
    kYostEngineeringInc = 0x000156,
    kBrooksNForsmanDesignsLlcDrumLite = 0x000157,
    kInfiniteResponse = 0x000158,
    kGarritanCorp = 0x000159,
    kPlogueArtetTechnologieInc = 0x00015A,
    kRJMMusicTechnology = 0x00015B,
    kCustomSolutionsSoftware = 0x00015C,
    kSonarcanaLlcHighlyLiquid = 0x00015D,
    kCentrance = 0x00015E,
    kKesumoLlc = 0x00015F,
    kStantonGibson = 0x000160,
    kLividInstruments = 0x000161,
    kFirstAct745Media = 0x000162,
    kPygraphicsInc = 0x000163,
    kPanadigmInnovationsLtd = 0x000164,
    kAvedisZildjianCo = 0x000165,
    kAuvitalMusicCorp = 0x000166,
    kYouRockGuitarInspiredInstruments = 0x000167,
    kChrisGriggDesigns = 0x000168,
    kSlateDigitalLlc = 0x000169,
    kMixware = 0x00016A,
    kSocialEntropy = 0x00016B,
    kSourceAudioLlc = 0x00016C,
    kErnieBallMusicMan = 0x00016D,
    kFishman = 0x00016E,
    kCustomAudioElectronics = 0x00016F,
    kAmericanAudioDJ = 0x000170,
    kMegaControlSystems = 0x000171,
    kKilpatrickAudio = 0x000172,
    kiConnectivity = 0x000173,
    kFractalAudio = 0x000174,
    kNetLogicMicrosystems = 0x000175,
    kMusicComputing = 0x000176,
    kNektarTechnologyInc = 0x000177,
    kZenphSoundInnovations = 0x000178,
    kDJTechToolscom = 0x000179,
    kRezonanceLabs = 0x00017A,
    kDecibelEleven = 0x00017B,
    kCNMAT = 0x00017C,
    kMediaOverkill = 0x00017D,
    kConfusionStudios = 0x00017E,
    kmoForteInc = 0x00017F,
    kMiseluInc = 0x000200,
    kAmeliasCompassLlc = 0x000201,
    kZivixLlc = 0x000202,
    kArtiphon = 0x000203,
    kSynclavierDigital = 0x000204,
    kLightNSoundControlDevicesLlc = 0x000205,
    kRetronymsInc = 0x000206,
    kJSTechnologies = 0x000207,
    kQuiccoSound = 0x000208,
    kADesignsAudio = 0x000209,
    kMcCarthyMusicCorp = 0x00020A,
    kDenonDJ = 0x00020B,
    kKeithRobertMurray = 0x00020C,
    kGoogle = 0x00020D,
    kISPTechnologies = 0x00020E,
    kAbstraktInstrumentsLlc = 0x00020F,
    kMerisLlc = 0x000210,
    kSensorpointLlc = 0x000211,
    kHiZLabs = 0x000212,
    kImitone = 0x000213,
    kIntellijelDesignsInc = 0x000214,
    kDaszInstrumentsInc = 0x000215,
    kRemidi = 0x000216,
    kDisasterAreaDesignsLlc = 0x000217,
    kUniversalAudio = 0x000218,
    kCarterDuncanCorp = 0x000219,
    kEssentialTechnology = 0x00021A,
    kCantuxResearchLlc = 0x00021B,
    kHummelTechnologies = 0x00021C,
    kSenselInc = 0x00021D,
    kDBMLGroup = 0x00021E,
    kMadronaLabs = 0x00021F,

    // Europe and other group
    kFocusriteNovation = 0x002029,
    kSamkyungMechatronics = 0x00202A,
    kMedeliElectronicsCo = 0x00202B,
    kCharlieLabSRL = 0x00202C,
    kBlueChipMusicTechnology = 0x00202D,
    kBEEOHCorp = 0x00202E,
    kLGSemiconAmerica = 0x00202F,
    kTESI = 0x002030,
    kEMAGIC = 0x002031,
    kBehringerGmbH = 0x002032,
    kAccessMusicElectronics = 0x002033,
    kSynoptic = 0x002034,
    kHanmesoft = 0x002035,
    kTerratecElectronicGmbH = 0x002036,
    kProelSpA = 0x002037,
    kIBKMIDI = 0x002038,
    kIRCAM = 0x002039,
    kPropellerheadSoftware = 0x00203A,
    kRedSoundSystemsLtd = 0x00203B,
    kElektronESIAB = 0x00203C,
    kSintefexAudio = 0x00203D,
    kMAMMusicandMore = 0x00203E,
    kAmsaroGmbH = 0x00203F,
    kCDSAdvancedTechnologyBVLanbox = 0x002040,
    kModeMachinesTouchedBySoundGmbH = 0x002041,
    kDSPArts = 0x002042,
    kPhilReesMusicTech = 0x002043,
    kStamerMusikanlagenGmbH = 0x002044,
    kMusicalMuntanerSAdbaSoundart = 0x002045,
    kCMexxSoftware = 0x002046,
    kKlavisTechnologies = 0x002047,
    kNoteheadsAB = 0x002048,
    kAlgorithmix = 0x002049,
    kSkrydstrupRND = 0x00204A,
    kProfessionalAudioCompany = 0x00204B,
    kNewWaveLabsMadWaves = 0x00204C,
    kVermona = 0x00204D,
    kNokia = 0x00204E,
    kWaveIdea = 0x00204F,
    kHartmannGmbH = 0x002050,
    kLionsTracs = 0x002051,
    kAnalogueSystems = 0x002052,
    kFocalJMlab = 0x002053,
    kRingwayElectronicsChangZhouCoLtd = 0x002054,
    kFaithTechnologiesDigiplug = 0x002055,
    kShowworks = 0x002056,
    kManikinElectronic = 0x002057,
    kA1ComeTech = 0x002058,
    kPhonicCorp = 0x002059,
    kDolbyAustraliaLake = 0x00205A,
    kSilansysTechnologies = 0x00205B,
    kWinbondElectronics = 0x00205C,
    kCinetixMedienundInterfaceGmbH = 0x00205D,
    kANGSoluzioniDigitali = 0x00205E,
    kSequentixMusicSystems = 0x00205F,
    kOramProAudio = 0x002060,
    kBe4Ltd = 0x002061,
    kInfectionMusic = 0x002062,
    kCentralMusicCoCME = 0x002063,
    kgenoQsMachinesGmbH = 0x002064,
    kMedialon = 0x002065,
    kWavesAudioLtd = 0x002066,
    kJerashLabs = 0x002067,
    kDaFact = 0x002068,
    kElbyDesigns = 0x002069,
    kSpectralAudio = 0x00206A,
    kArturia = 0x00206B,
    kVixid = 0x00206C,
    kCThruMusic = 0x00206D,
    kYaHorngElectronicCoLTD = 0x00206E,
    kSMProAudio = 0x00206F,
    kOTOMACHINES = 0x002070,
    kELZABSAGLAB = 0x002071,
    kBlackstarAmplificationLtd = 0x002072,
    kM3iTechnologiesGmbH = 0x002073,
    kGemaltofromXiring = 0x002074,
    kProstageSL = 0x002075,
    kTeenageEngineering = 0x002076,
    kTobiasErichsenConsulting = 0x002077,
    kNixerLtd = 0x002078,
    kHanpinElectronCoLtd = 0x002079,
    kMIDIhardwareRSowa = 0x00207A,
    kBeyondMusicIndustrialLtd = 0x00207B,
    kKissBoxBV = 0x00207C,
    kMisaDigitalTechnologiesLtd = 0x00207D,
    kAIMusicsTechnologyInc = 0x00207E,
    kSeratoIncLP = 0x00207F,
    kLimex = 0x002100,
    kKyoddayTokai = 0x002101,
    kMutableInstruments = 0x002102,
    kPreSonusSoftwareLtd = 0x002103,
    kIngenicoXiring = 0x002104,
    kFairlightInstrumentsPtyLtd = 0x002105,
    kMusicomLab = 0x002106,
    kModalElectronicsModulusVacoLoco = 0x002107,
    kRWAHongKongLimited = 0x002108,
    kNativeInstruments = 0x002109,
    kNaonext = 0x00210A,
    kMFB = 0x00210B,
    kTeknelResearch = 0x00210C,
    kPloytecGmbH = 0x00210D,
    kSurfinKangarooStudio = 0x00210E,
    kPhilipsElectronicsHKLtd = 0x00210F,
    kROLILtd = 0x002110,
    kPandaAudioLtd = 0x002111,
    kBauMSoftware = 0x002112,
    kMachinewerksLtd = 0x002113,
    kXiamenElaneElectronics = 0x002114,
    kMarshallAmplificationPLC = 0x002115,
    kKiwitechnicsLtd = 0x002116,
    kRobPapen = 0x002117,
    kSpicetoneOU = 0x002118,
    kV3Sound = 0x002119,
    kIKMultimedia = 0x00211A,
    kNovaliaLtd = 0x00211B,
    kModorMusic = 0x00211C,
    kAbleton = 0x00211D,
    kDtronics = 0x00211E,
    kZAQAudio = 0x00211F,
    kMuabaobaoEducationTechnologyCoLtd = 0x002120,
    kFluxEffects = 0x002121,
    kAudiothingiesMCDA = 0x002122,
    kRetrokits = 0x002123,
    kMorningstarFXPteLtd = 0x002124,
    kHotoneAudio = 0x002125,
    kExpressive = 0x002126,
    kExpertSleepersLtd = 0x002127,
    kTimecodeVisionTechnology = 0x002128,
    kHornbergResearchGbR = 0x002129,
    kSonicPotions = 0x00212A,
    kAudiofront = 0x00212B,
    kFredsLab = 0x00212C,

    // Japan
    kCrimsonTechnologyInc = 0x004000,
    kSoftbankMobileCorp = 0x004001,
    kDNMHoldingsInc = 0x004003
  };
};

}  // namespace cxxmidi

#endif  // INCLUDE_CXXMIDI_SYSEX_HPP_