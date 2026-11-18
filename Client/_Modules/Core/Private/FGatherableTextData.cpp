// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// StreamArchive @ 141712cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGatherableTextData::StreamArchive(FGatherableTextData *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  FVar1 = *(FStructuredArchiveSlot *)FVar1;
  ::operator<<(*(FArchive **)(*(longlong *)FVar1 + 8),&this->NamespaceName);
  ::operator<<(*(FArchive **)(*(longlong *)FVar1 + 8),&(this->SourceData).SourceString);
  ::operator<<(FVar1,&(this->SourceData).SourceStringMetaData);
  operator<<<FTextSourceSiteContext>(FVar1,&this->SourceSiteContexts);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StreamStructuredArchive @ 141712eb0

void __thiscall
FGatherableTextData::StreamStructuredArchive
          (FGatherableTextData *this,FStructuredArchiveSlot param_1)

{
  ::operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&this->NamespaceName);
  ::operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&(this->SourceData).SourceString);
  ::operator<<(param_1,&(this->SourceData).SourceStringMetaData);
  operator<<<FTextSourceSiteContext>(param_1,&this->SourceSiteContexts);
  return;
}

