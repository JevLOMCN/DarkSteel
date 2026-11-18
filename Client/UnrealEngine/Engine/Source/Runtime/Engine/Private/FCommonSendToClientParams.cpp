// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FCommonSendToClientParams @ 148088d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

FCommonSendToClientParams * __thiscall
StatelessConnectHandlerComponent::FCommonSendToClientParams::FCommonSendToClientParams
          (FCommonSendToClientParams *this,TSharedPtr<FInternetAddr_const_,1> *param_1,
          EHandshakeVersion param_2,uint param_3)

{
  this->ClientAddress = param_1;
  this->HandshakeVersion = param_2;
  this->ClientID = param_3;
  return this;
}

