// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FCombinedNavGridData @ 146f91000

FCombinedNavGridData * __thiscall
FCombinedNavGridData::FCombinedNavGridData(FCombinedNavGridData *this,FCombinedNavGridData *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FNavLocalGridData::FNavLocalGridData((FNavLocalGridData *)this,(FNavLocalGridData *)param_1);
  pTVar2 = &this->SourceIds;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceIds).ArrayMax;
  iVar3 = (param_1->SourceIds).ArrayNum;
  _Src = (param_1->SourceIds).AllocatorInstance.Data;
  (this->SourceIds).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

