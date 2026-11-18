// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ReleaseWriteAccess @ 1418f25b0

bool __thiscall FRWAccessDetector::ReleaseWriteAccess(FRWAccessDetector *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  LOCK();
  aVar1 = this->AtomicValue;
  this->AtomicValue = (atomic<unsigned_int>)((int)this->AtomicValue + -0x100000);
  UNLOCK();
  bVar5 = aVar1 == (atomic<unsigned_int>)0x100000;
  if ((!bVar5) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return bVar5;
}

