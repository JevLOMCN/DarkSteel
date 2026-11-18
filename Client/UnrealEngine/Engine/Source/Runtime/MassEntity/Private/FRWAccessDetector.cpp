// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// AcquireReadAccess @ 1471eb370

bool __thiscall FRWAccessDetector::AcquireReadAccess(FRWAccessDetector *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  LOCK();
  aVar1 = this->AtomicValue;
  this->AtomicValue = (atomic<unsigned_int>)((int)this->AtomicValue + 1);
  UNLOCK();
  uVar4 = (uint)aVar1 & 0xfff00000;
  if ((uVar4 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return uVar4 == 0;
}

// AcquireWriteAccess @ 1471eb3d0

bool __thiscall FRWAccessDetector::AcquireWriteAccess(FRWAccessDetector *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  LOCK();
  aVar1 = this->AtomicValue;
  this->AtomicValue = (atomic<unsigned_int>)((int)this->AtomicValue + 0x100000);
  UNLOCK();
  bVar5 = aVar1 == (atomic<unsigned_int>)0x0;
  if ((!bVar5) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return bVar5;
}

