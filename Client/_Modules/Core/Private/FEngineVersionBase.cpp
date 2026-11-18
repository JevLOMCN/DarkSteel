// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FEngineVersionBase @ 1418bb270

FEngineVersionBase * __thiscall
FEngineVersionBase::FEngineVersionBase
          (FEngineVersionBase *this,ushort param_1,ushort param_2,ushort param_3,uint param_4)

{
  this->Changelist = param_4;
  this->Major = param_1;
  this->Minor = param_2;
  this->Patch = param_3;
  return this;
}

// EncodeLicenseeChangelist @ 1418d7510

uint __cdecl FEngineVersionBase::EncodeLicenseeChangelist(uint param_1)

{
  return param_1 | 0x80000000;
}

// GetChangelist @ 1418dda00

uint __thiscall FEngineVersionBase::GetChangelist(FEngineVersionBase *this)

{
  return this->Changelist & 0x7fffffff;
}

// GetNewest @ 1418e01b0

EVersionComparison __cdecl
FEngineVersionBase::GetNewest
          (FEngineVersionBase *param_1,FEngineVersionBase *param_2,EVersionComponent *param_3)

{
  uint uVar1;
  EVersionComponent *pEVar2;
  uint uVar3;
  EVersionComponent local_res8 [8];
  
  pEVar2 = local_res8;
  if (param_3 != (EVersionComponent *)0x0) {
    pEVar2 = param_3;
  }
  if (param_1->Major != param_2->Major) {
    *pEVar2 = Major;
    return Second - (param_2->Major < param_1->Major);
  }
  if (param_1->Minor != param_2->Minor) {
    *pEVar2 = Minor;
    return Second - (param_2->Minor < param_1->Minor);
  }
  if (param_1->Patch != param_2->Patch) {
    *pEVar2 = Patch;
    return Second - (param_2->Patch < param_1->Patch);
  }
  if (((((byte)(param_1->Changelist >> 0x1f) == (byte)(param_2->Changelist >> 0x1f)) &&
       (uVar1 = param_1->Changelist & 0x7fffffff, uVar1 != 0)) &&
      (uVar3 = param_2->Changelist & 0x7fffffff, uVar3 != 0)) && (uVar1 != uVar3)) {
    *pEVar2 = Changelist;
    return Second - ((param_2->Changelist & 0x7fffffff) < (param_1->Changelist & 0x7fffffff));
  }
  return Neither;
}

// HasChangelist @ 1418e2230

bool __thiscall FEngineVersionBase::HasChangelist(FEngineVersionBase *this)

{
  return (this->Changelist & 0x7fffffff) != 0;
}

// IsEmpty @ 1418e2ce0

bool __thiscall FEngineVersionBase::IsEmpty(FEngineVersionBase *this)

{
  if (((this->Major == 0) && (this->Minor == 0)) && (this->Patch == 0)) {
    return true;
  }
  return false;
}

// IsLicenseeVersion @ 1418e32f0

bool __thiscall FEngineVersionBase::IsLicenseeVersion(FEngineVersionBase *this)

{
  return SUB41(this->Changelist >> 0x1f,0);
}

