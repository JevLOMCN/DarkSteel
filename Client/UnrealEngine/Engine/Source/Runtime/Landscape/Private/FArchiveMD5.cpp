// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// operator<< @ 145f047b0

FArchive * __thiscall FArchiveMD5::operator<<(FArchiveMD5 *this,UObject **param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ArchiveMD5.h"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchive *)(*pcVar1)();
    return pFVar3;
  }
  return (FArchive *)this;
}

// operator<< @ 145f047f0

FArchive * __thiscall FArchiveMD5::operator<<(FArchiveMD5 *this,FName *param_1)

{
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// Reset @ 145f1d190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FArchiveMD5::Reset(FArchiveMD5 *this)

{
  undefined8 uVar1;
  FMD5 *pFVar2;
  undefined1 auStack_98 [32];
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FArchiveState::Reset((FArchiveState *)this);
  pFVar2 = FMD5::FMD5(&local_78);
  uVar1 = *(undefined8 *)((pFVar2->Context).state + 2);
  *(undefined8 *)(this->MD5).Context.state = *(undefined8 *)(pFVar2->Context).state;
  *(undefined8 *)((this->MD5).Context.state + 2) = uVar1;
  uVar1 = *(undefined8 *)(pFVar2->Context).buffer;
  *(undefined8 *)(this->MD5).Context.count = *(undefined8 *)(pFVar2->Context).count;
  *(undefined8 *)(this->MD5).Context.buffer = uVar1;
  uVar1 = *(undefined8 *)((pFVar2->Context).buffer + 0x10);
  *(undefined8 *)((this->MD5).Context.buffer + 8) = *(undefined8 *)((pFVar2->Context).buffer + 8);
  *(undefined8 *)((this->MD5).Context.buffer + 0x10) = uVar1;
  uVar1 = *(undefined8 *)((pFVar2->Context).buffer + 0x20);
  *(undefined8 *)((this->MD5).Context.buffer + 0x18) =
       *(undefined8 *)((pFVar2->Context).buffer + 0x18);
  *(undefined8 *)((this->MD5).Context.buffer + 0x20) = uVar1;
  uVar1 = *(undefined8 *)((pFVar2->Context).buffer + 0x30);
  *(undefined8 *)((this->MD5).Context.buffer + 0x28) =
       *(undefined8 *)((pFVar2->Context).buffer + 0x28);
  *(undefined8 *)((this->MD5).Context.buffer + 0x30) = uVar1;
  *(undefined8 *)((this->MD5).Context.buffer + 0x38) =
       *(undefined8 *)((pFVar2->Context).buffer + 0x38);
  FMD5::~FMD5(&local_78);
  return;
}

// Serialize @ 145f1d6c0

void __thiscall FArchiveMD5::Serialize(FArchiveMD5 *this,void *param_1,long64 param_2)

{
  FMD5::Update(&this->MD5,param_1,param_2);
  return;
}

