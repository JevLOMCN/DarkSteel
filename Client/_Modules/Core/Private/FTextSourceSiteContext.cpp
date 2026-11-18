// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// StreamArchive @ 141712df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextSourceSiteContext::StreamArchive(FTextSourceSiteContext *this,FArchive *param_1)

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
  ::operator<<(*(FArchive **)(*(longlong *)FVar1 + 8),&this->KeyName);
  ::operator<<(*(FArchive **)(*(longlong *)FVar1 + 8),&this->SiteDescription);
  FBinaryArchiveFormatter::Serialize(*(FBinaryArchiveFormatter **)FVar1,&this->IsEditorOnly);
  FBinaryArchiveFormatter::Serialize(*(FBinaryArchiveFormatter **)FVar1,&this->IsOptional);
  ::operator<<(FVar1,&this->InfoMetaData);
  ::operator<<(FVar1,&this->KeyMetaData);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StreamStructuredArchive @ 141712f60

void __thiscall
FTextSourceSiteContext::StreamStructuredArchive
          (FTextSourceSiteContext *this,FStructuredArchiveSlot param_1)

{
  ::operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&this->KeyName);
  ::operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&this->SiteDescription);
  FBinaryArchiveFormatter::Serialize(*(FBinaryArchiveFormatter **)param_1,&this->IsEditorOnly);
  FBinaryArchiveFormatter::Serialize(*(FBinaryArchiveFormatter **)param_1,&this->IsOptional);
  ::operator<<(param_1,&this->InfoMetaData);
  ::operator<<(param_1,&this->KeyMetaData);
  return;
}

