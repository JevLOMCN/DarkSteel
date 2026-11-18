// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// TScopedReaderAccessDetector<FRWAccessDetector_const_> @ 1470f2010

TScopedReaderAccessDetector<FRWAccessDetector_const_> * __thiscall
TScopedReaderAccessDetector<FRWAccessDetector_const_>::
TScopedReaderAccessDetector<FRWAccessDetector_const_>
          (TScopedReaderAccessDetector<FRWAccessDetector_const_> *this,FRWAccessDetector *param_1)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  bool bVar3;
  TScopedReaderAccessDetector<FRWAccessDetector_const_> *pTVar4;
  
  this->AccessDetector = param_1;
  LOCK();
  aVar1 = param_1->AtomicValue;
  param_1->AtomicValue = (atomic<unsigned_int>)((int)param_1->AtomicValue + 1);
  UNLOCK();
  if ((((uint)aVar1 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TScopedReaderAccessDetector<FRWAccessDetector_const_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

