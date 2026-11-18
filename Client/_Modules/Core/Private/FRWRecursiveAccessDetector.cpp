// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AcquireWriteAccess @ 1418c5c80

bool __thiscall FRWRecursiveAccessDetector::AcquireWriteAccess(FRWRecursiveAccessDetector *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  DWORD DVar5;
  
  DVar5 = GetCurrentThreadId();
  if (this->WriterThreadID != DVar5) {
    LOCK();
    iVar1 = this->_padding_;
    this->_padding_ = this->_padding_ + 0x100000;
    UNLOCK();
    if (iVar1 != 0) {
      if (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
        ;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return false;
    }
    if (this->RecursiveDepth != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecursiveDepth == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0xb4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this->WriterThreadID = DVar5;
  }
  this->RecursiveDepth = this->RecursiveDepth + 1;
  return true;
}

// ReleaseWriteAccess @ 1418f2610

bool __thiscall FRWRecursiveAccessDetector::ReleaseWriteAccess(FRWRecursiveAccessDetector *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  DWORD DVar7;
  
  DVar7 = GetCurrentThreadId();
  if (this->WriterThreadID != DVar7) {
    LOCK();
    iVar2 = this->_padding_;
    this->_padding_ = this->_padding_ + -0x100000;
    UNLOCK();
    bVar4 = iVar2 == 0x100000;
    if ((!bVar4) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    return bVar4;
  }
  if (this->RecursiveDepth < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecursiveDepth > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0xc5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  piVar1 = &this->RecursiveDepth;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    this->WriterThreadID = 0xffffffff;
    bVar4 = FRWAccessDetector::ReleaseWriteAccess((FRWAccessDetector *)this);
    return bVar4;
  }
  return true;
}

