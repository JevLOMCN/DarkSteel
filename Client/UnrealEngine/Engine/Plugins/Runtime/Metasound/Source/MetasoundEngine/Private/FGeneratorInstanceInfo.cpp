// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FGeneratorInstanceInfo @ 14b3462a0

FGeneratorInstanceInfo * __thiscall
Metasound::FGeneratorInstanceInfo::FGeneratorInstanceInfo
          (FGeneratorInstanceInfo *this,ulong64 param_1,ulong64 param_2,
          TWeakPtr<Metasound::FMetasoundGenerator,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->AudioComponentID = param_1;
  this->InstanceID = param_2;
  (this->Generator).Object = param_3->Object;
  pTVar3 = (param_3->WeakReferenceCount).ReferenceController;
  (this->Generator).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_3->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

