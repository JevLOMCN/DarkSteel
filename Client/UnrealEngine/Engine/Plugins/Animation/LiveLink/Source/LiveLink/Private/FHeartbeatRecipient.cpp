// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// operator== @ 14d018510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkHeartbeatEmitter::FHeartbeatRecipient::operator==
          (FHeartbeatRecipient *this,FHeartbeatRecipient *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakPtr<FMessageEndpoint,1>::UEOpEquals<FMessageEndpoint>
                    (&param_1->MessageEndpoint,&this->MessageEndpoint);
  if ((bVar1) &&
     ((((param_1->ConnectionAddress).UniqueId.D == (this->ConnectionAddress).UniqueId.D &&
       (param_1->ConnectionAddress).UniqueId.C == (this->ConnectionAddress).UniqueId.C) &&
      (param_1->ConnectionAddress).UniqueId.B == (this->ConnectionAddress).UniqueId.B) &&
      (param_1->ConnectionAddress).UniqueId.A == (this->ConnectionAddress).UniqueId.A)) {
    return true;
  }
  return false;
}

