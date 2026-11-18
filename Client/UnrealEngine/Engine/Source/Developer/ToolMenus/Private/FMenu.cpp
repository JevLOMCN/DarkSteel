// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// FMenu @ 142c377e0

FMenu * __thiscall
UE::ToolMenus::FMenu::FMenu
          (FMenu *this,FName param_1,
          TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedRef<UE::ToolMenus::FMenuSection,1> *pTVar4;
  
  this->_padding_ = (longlong)param_1;
  *(undefined1 *)&this->_padding_ = 3;
  pTVar1 = &this->Sections;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FMenu_ToolMenus_UE__6B_;
  piVar2 = &(this->Sections).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar3 = param_2->ArrayNum;
  pTVar4 = (TSharedRef<UE::ToolMenus::FMenuSection,1> *)(param_2->AllocatorInstance).Data;
  (this->Sections).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return this;
}

// ~FMenu @ 142c3bd20

void __thiscall UE::ToolMenus::FMenu::~FMenu(FMenu *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)(this->Sections).AllocatorInstance.Data,
             (this->Sections).ArrayNum);
  pFVar3 = (this->Sections).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142c3bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetTypeName @ 142c60700

FName __thiscall UE::ToolMenus::FMenu::GetTypeName(FMenu *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

