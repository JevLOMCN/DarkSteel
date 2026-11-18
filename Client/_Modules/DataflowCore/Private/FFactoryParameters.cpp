// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// FFactoryParameters @ 144431660

FFactoryParameters * __thiscall
UE::Dataflow::FFactoryParameters::FFactoryParameters
          (FFactoryParameters *this,FFactoryParameters *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->TypeName = param_1->TypeName;
  this->DisplayName = param_1->DisplayName;
  this->Category = param_1->Category;
  ::FString::FString(&this->Tags,&param_1->Tags);
  ::FString::FString(&this->ToolTip,&param_1->ToolTip);
  this->bIsDeprecated = param_1->bIsDeprecated;
  this->bIsExperimental = param_1->bIsExperimental;
  this->NodeVersion = param_1->NodeVersion;
  (this->DefaultNodeObject).Object = (param_1->DefaultNodeObject).Object;
  pTVar1 = (param_1->DefaultNodeObject).SharedReferenceCount.ReferenceController;
  (this->DefaultNodeObject).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// IsValid @ 1444518c0

bool __thiscall UE::Dataflow::FFactoryParameters::IsValid(FFactoryParameters *this)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  bVar1 = false;
  pFVar3 = ::FName::ToString(&this->TypeName,&local_18);
  if ((pFVar3->Data).ArrayNum < 2) {
LAB_144451906:
    bVar4 = false;
    bVar2 = false;
    if (!bVar1) goto LAB_14445191d;
  }
  else {
    bVar1 = true;
    pFVar3 = ::FName::ToString(&this->DisplayName,&local_28);
    if ((pFVar3->Data).ArrayNum < 2) goto LAB_144451906;
    bVar2 = true;
  }
  bVar4 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14445191d:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

