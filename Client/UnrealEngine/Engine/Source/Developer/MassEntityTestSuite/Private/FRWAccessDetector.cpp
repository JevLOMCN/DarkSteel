// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ReleaseReadAccess @ 14719a4f0

bool __thiscall FRWAccessDetector::ReleaseReadAccess(FRWAccessDetector *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  LOCK();
  aVar1 = this->AtomicValue;
  this->AtomicValue = (atomic<unsigned_int>)((int)this->AtomicValue + -1);
  UNLOCK();
  uVar4 = (uint)aVar1 & 0xfff00000;
  if ((uVar4 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return uVar4 == 0;
}

