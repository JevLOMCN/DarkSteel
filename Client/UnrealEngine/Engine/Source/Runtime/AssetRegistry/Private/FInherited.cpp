// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// FInherited @ 142ad68c0

FInherited * __thiscall
UE::AssetDataGather::Private::FScanDir::FInherited::FInherited
          (FInherited *this,FInherited *param_1,FInherited *param_2)

{
  bool bVar1;
  
  if ((param_1->bIsOnAllowList == false) && (param_2->bIsOnAllowList == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bIsOnAllowList = bVar1;
  if ((param_1->bMatchesDenyList == false) && (param_2->bMatchesDenyList == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bMatchesDenyList = bVar1;
  if ((param_1->bIgnoreDenyList == false) && (param_2->bIgnoreDenyList == false)) {
    this->bIgnoreDenyList = false;
    return this;
  }
  this->bIgnoreDenyList = true;
  return this;
}

// HasSetting @ 142b00da0

bool __thiscall UE::AssetDataGather::Private::FScanDir::FInherited::HasSetting(FInherited *this)

{
  if (((this->bIsOnAllowList == false) && (this->bMatchesDenyList == false)) &&
     (this->bIgnoreDenyList == false)) {
    return false;
  }
  return true;
}

// IsMonitored @ 142b04d00

bool __thiscall UE::AssetDataGather::Private::FScanDir::FInherited::IsMonitored(FInherited *this)

{
  if ((this->bIsOnAllowList != false) &&
     ((this->bMatchesDenyList == false || (this->bIgnoreDenyList != false)))) {
    return true;
  }
  return false;
}

// IsOnAllowList @ 142b05150

bool __thiscall UE::AssetDataGather::Private::FScanDir::FInherited::IsOnAllowList(FInherited *this)

{
  return this->bIsOnAllowList;
}

// IsOnDenyList @ 142b05510

bool __thiscall UE::AssetDataGather::Private::FScanDir::FInherited::IsOnDenyList(FInherited *this)

{
  if ((this->bMatchesDenyList != false) && (this->bIgnoreDenyList == false)) {
    return true;
  }
  return false;
}

