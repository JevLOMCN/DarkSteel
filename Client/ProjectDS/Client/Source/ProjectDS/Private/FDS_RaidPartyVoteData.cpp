// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// AddRaidPartyVoteData @ 14b8b4ec0

void __thiscall
FDS_RaidPartyVoteData::AddRaidPartyVoteData
          (FDS_RaidPartyVoteData *this,RaidPartyKickVoteNotify *param_1)

{
  this->RaidPartyUID = (param_1->_impl_).raid_party_uid_;
  this->PlayerUID = (param_1->_impl_).vote_player_uid_;
  this->AgreementCount = (param_1->_impl_).agreement_count_;
  this->RejectCount = (param_1->_impl_).reject_count_;
  server_msg::RaidPartyKickVoteNotify::~RaidPartyKickVoteNotify(param_1);
  return;
}

// Clear @ 14b8b89c0

void __thiscall FDS_RaidPartyVoteData::Clear(FDS_RaidPartyVoteData *this)

{
  this->RaidPartyUID = 0;
  this->PlayerUID = 0;
  this->AgreementCount = 0;
  this->RejectCount = 0;
  this->VoteProposerUID = 0;
  return;
}

