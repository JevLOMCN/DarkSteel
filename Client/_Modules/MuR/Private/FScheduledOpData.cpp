// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FScheduledOpData @ 14a976c10

FScheduledOpData * __thiscall
UE::Mutable::Private::CodeRunner::FScheduledOpData::FScheduledOpData
          (FScheduledOpData *this,FScheduledOpData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->field0_0x0).MultiLayer = (param_1->field0_0x0).MultiLayer;
  (this->field0_0x0).Interpolate.Max = (param_1->field0_0x0).Interpolate.Max;
  (this->field0_0x0).MultiLayer = (param_1->field0_0x0).MultiLayer;
  (this->field0_0x0).MultiLayer = (param_1->field0_0x0).MultiLayer;
  (this->field0_0x0).MultiLayer = (param_1->field0_0x0).MultiLayer;
  (this->field0_0x0).Interpolate.Max = (param_1->field0_0x0).Interpolate.Max;
  (this->Resource).Object = (param_1->Resource).Object;
  pTVar1 = (param_1->Resource).SharedReferenceCount.ReferenceController;
  (this->Resource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

