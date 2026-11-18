// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AcquireReadAccess @ 1418c5c00

bool __thiscall
FRWFullyRecursiveAccessDetector::AcquireReadAccess(FRWFullyRecursiveAccessDetector *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  DWORD DVar5;
  
  DVar5 = GetCurrentThreadId();
  if (*(DWORD *)&this->field_0x4 == DVar5) {
    return true;
  }
  LOCK();
  uVar1 = *(uint *)this;
  *(int *)this = *(int *)this + 1;
  UNLOCK();
  if (((uVar1 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (uVar1 & 0xfff00000) == 0;
}

// ReleaseReadAccess @ 1418f24a0

bool __thiscall
FRWFullyRecursiveAccessDetector::ReleaseReadAccess(FRWFullyRecursiveAccessDetector *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  DWORD DVar5;
  
  DVar5 = GetCurrentThreadId();
  if (*(DWORD *)&this->field_0x4 == DVar5) {
    return true;
  }
  LOCK();
  uVar1 = *(uint *)this;
  *(int *)this = *(int *)this + -1;
  UNLOCK();
  if (((uVar1 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (uVar1 & 0xfff00000) == 0;
}

