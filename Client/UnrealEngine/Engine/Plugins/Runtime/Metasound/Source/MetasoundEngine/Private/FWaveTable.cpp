// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FWaveTable @ 14b34bef0

FWaveTable * __thiscall WaveTable::FWaveTable::FWaveTable(FWaveTable *this,FWaveTable *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Samples).ArrayMax;
  iVar2 = (param_1->Samples).ArrayNum;
  _Src = (param_1->Samples).AllocatorInstance.Data;
  (this->Samples).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Samples).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->FinalValue = param_1->FinalValue;
  return this;
}

