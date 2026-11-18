// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// FValidInteractionSearch @ 14a91a170

FValidInteractionSearch * __thiscall
UE::PoseSearch::FValidInteractionSearch::FValidInteractionSearch
          (FValidInteractionSearch *this,FValidInteractionSearch *param_1)

{
  int *piVar1;
  TArray<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FInteractionSearchContextBase::FInteractionSearchContextBase
            (&this->SearchContext,&param_1->SearchContext);
  pTVar2 = &this->DisabledCollisions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DisabledCollisions).ArrayMax;
  iVar3 = (param_1->DisabledCollisions).ArrayNum;
  _Src = (param_1->DisabledCollisions).AllocatorInstance.Data;
  (this->DisabledCollisions).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

