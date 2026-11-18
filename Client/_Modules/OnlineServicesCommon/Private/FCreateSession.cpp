// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// Params @ 14ee0f020

Params * __thiscall UE::Online::FCreateSession::Params::Params(Params *this,Params *param_1)

{
  (this->LocalAccountId).Value = (param_1->LocalAccountId).Value;
  this->SessionName = param_1->SessionName;
  (this->SessionIdOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionIdOverride).Data.AllocatorInstance.Data =
       (param_1->SessionIdOverride).Data.AllocatorInstance.Data;
  (param_1->SessionIdOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionIdOverride).Data.ArrayNum = (param_1->SessionIdOverride).Data.ArrayNum;
  (this->SessionIdOverride).Data.ArrayMax = (param_1->SessionIdOverride).Data.ArrayMax;
  (param_1->SessionIdOverride).Data.ArrayNum = 0;
  (param_1->SessionIdOverride).Data.ArrayMax = 0;
  this->bPresenceEnabled = param_1->bPresenceEnabled;
  this->bIsLANSession = param_1->bIsLANSession;
  this->bAllowSanctionedPlayers = param_1->bAllowSanctionedPlayers;
  this->bAntiCheatProtected = param_1->bAntiCheatProtected;
  (this->SessionSettings).SchemaName = (param_1->SessionSettings).SchemaName;
  (this->SessionSettings).NumMaxConnections = (param_1->SessionSettings).NumMaxConnections;
  (this->SessionSettings).JoinPolicy = (param_1->SessionSettings).JoinPolicy;
  (this->SessionSettings).bAllowNewMembers = (param_1->SessionSettings).bAllowNewMembers;
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
              *)&(this->SessionSettings).CustomSettings,
             (TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
              *)&(param_1->SessionSettings).CustomSettings);
  return this;
}

