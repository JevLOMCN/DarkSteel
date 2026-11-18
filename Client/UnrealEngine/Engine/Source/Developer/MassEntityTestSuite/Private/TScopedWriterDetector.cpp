// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// TScopedWriterDetector<FRWAccessDetector> @ 1470f2070

TScopedWriterDetector<FRWAccessDetector> * __thiscall
TScopedWriterDetector<FRWAccessDetector>::TScopedWriterDetector<FRWAccessDetector>
          (TScopedWriterDetector<FRWAccessDetector> *this,FRWAccessDetector *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  TScopedWriterDetector<FRWAccessDetector> *pTVar4;
  
  this->AccessDetector = param_1;
  LOCK();
  aVar1 = param_1->AtomicValue;
  param_1->AtomicValue = (atomic<unsigned_int>)((int)param_1->AtomicValue + 0x100000);
  UNLOCK();
  if ((aVar1 != (atomic<unsigned_int>)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TScopedWriterDetector<FRWAccessDetector> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

