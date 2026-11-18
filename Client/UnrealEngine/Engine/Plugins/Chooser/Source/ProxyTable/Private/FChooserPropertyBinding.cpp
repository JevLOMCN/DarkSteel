// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 2

// GetValuePtr<UProxyTable_*> @ 14cf26160

bool __thiscall
FChooserPropertyBinding::GetValuePtr<UProxyTable_*>
          (FChooserPropertyBinding *this,FChooserEvaluationContext *param_1,UProxyTable ***param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,this,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = (UProxyTable **)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// operator= @ 14cf26ac0

FChooserPropertyBinding * __thiscall
FChooserPropertyBinding::operator=(FChooserPropertyBinding *this,FChooserPropertyBinding *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar5;
  FCompiledBinding *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pTVar1 = &this->PropertyBindingChain;
  if (pTVar1 != &param_1->PropertyBindingChain) {
    iVar3 = (this->PropertyBindingChain).ArrayMax;
    piVar2 = &(this->PropertyBindingChain).ArrayMax;
    iVar4 = (param_1->PropertyBindingChain).ArrayNum;
    _Src = (param_1->PropertyBindingChain).AllocatorInstance.Data;
    (this->PropertyBindingChain).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->ContextIndex = param_1->ContextIndex;
  this->IsBoundToRoot = param_1->IsBoundToRoot;
  pTVar5 = (param_1->CompiledBinding).SharedReferenceCount.ReferenceController;
  pFVar6 = (param_1->CompiledBinding).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->CompiledBinding).SharedReferenceCount.ReferenceController;
  (this->CompiledBinding).Object = pFVar6;
  (this->CompiledBinding).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

