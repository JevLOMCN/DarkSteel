// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// FMenuSection @ 142c37d00

FMenuSection * __thiscall
UE::ToolMenus::FMenuSection::FMenuSection
          (FMenuSection *this,FName param_1,
          TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *pTVar4;
  
  pTVar1 = &this->Entries;
  piVar2 = &(this->Entries).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Name = param_1;
  (this->Label).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Label).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Label).field0_0x0 + 0xc) = 0xffffffff;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  pTVar4 = (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)(param_2->AllocatorInstance).Data;
  (this->Entries).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return this;
}

// ~FMenuSection @ 142c3bf70

void __thiscall UE::ToolMenus::FMenuSection::~FMenuSection(FMenuSection *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((*(int *)((longlong)&(this->Label).field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (this->Label).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142c3bfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

