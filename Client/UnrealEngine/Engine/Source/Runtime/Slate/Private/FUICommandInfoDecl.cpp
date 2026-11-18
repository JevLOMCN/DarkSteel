// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// FUICommandInfoDecl @ 1426fe1f0

FUICommandInfoDecl * __thiscall
FUICommandInfoDecl::FUICommandInfoDecl
          (FUICommandInfoDecl *this,TSharedRef<FBindingContext,1> *param_1,FName param_2,
          FText *param_3,FText *param_4,FName param_5)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FUICommandInfo *pFVar5;
  FUICommandInfo *pFVar6;
  FUICommandInfoDecl *pFVar7;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  TRawPtrProxy<FUICommandInfo> local_38;
  FMemScope local_30;
  
  this->Context = param_1;
  pFVar6 = (FUICommandInfo *)0x0;
  (this->Info).Object = (FUICommandInfo *)0x0;
  (this->Info).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_30,&local_res20,true);
  pFVar5 = ::operator_new(0x88);
  if (pFVar5 != (FUICommandInfo *)0x0) {
    pFVar6 = FUICommandInfo::FUICommandInfo(pFVar5,param_1->Object->ContextName);
  }
  local_38.Object = pFVar6;
  TSharedPtr<FUICommandInfo,1>::operator=<FUICommandInfo>(&this->Info,&local_38);
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUICommandInfoDecl *)(*pcVar3)();
      return pFVar7;
    }
  }
  ((this->Info).Object)->CommandName = param_2;
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUICommandInfoDecl *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar5 = (this->Info).Object;
  pIVar1 = (param_3->TextData).Reference;
  pIVar2 = (pFVar5->Label).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (pFVar5->Label).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (pFVar5->Label).Flags = param_3->Flags;
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUICommandInfoDecl *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar5 = (this->Info).Object;
  pIVar1 = (pFVar5->Description).TextData.Reference;
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (pFVar5->Description).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (pFVar5->Description).Flags = param_4->Flags;
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FUICommandInfoDecl *)(*pcVar3)();
      return pFVar7;
    }
  }
  ((this->Info).Object)->Bundle = param_5;
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// operator_TSharedPtr<FUICommandInfo,1> @ 142703440

TSharedPtr<FUICommandInfo,1> * __thiscall
FUICommandInfoDecl::operator_TSharedPtr<FUICommandInfo,1>
          (FUICommandInfoDecl *this,TSharedPtr<FUICommandInfo,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FInputBindingManager *this_00;
  TSharedRef<FUICommandInfo,1> *pTVar2;
  TSharedRef<FUICommandInfo,1> local_18;
  
  this_00 = FInputBindingManager::Get();
  pTVar2 = TSharedPtr<FUICommandInfo,1>::ToSharedRef(&this->Info,&local_18);
  FInputBindingManager::CreateInputCommand(this_00,this->Context,pTVar2);
  __return_storage_ptr__->Object = (this->Info).Object;
  pTVar1 = (this->Info).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator_TSharedRef<FUICommandInfo,1> @ 1427034b0

TSharedRef<FUICommandInfo,1> * __thiscall
FUICommandInfoDecl::operator_TSharedRef<FUICommandInfo,1>
          (FUICommandInfoDecl *this,TSharedRef<FUICommandInfo,1> *__return_storage_ptr__)

{
  FInputBindingManager *this_00;
  TSharedRef<FUICommandInfo,1> *pTVar1;
  TSharedRef<FUICommandInfo,1> local_18;
  
  this_00 = FInputBindingManager::Get();
  pTVar1 = TSharedPtr<FUICommandInfo,1>::ToSharedRef(&this->Info,&local_18);
  FInputBindingManager::CreateInputCommand(this_00,this->Context,pTVar1);
  TSharedPtr<FUICommandInfo,1>::ToSharedRef(&this->Info,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DefaultChord @ 14272a7f0

FUICommandInfoDecl * __thiscall
FUICommandInfoDecl::DefaultChord
          (FUICommandInfoDecl *this,FInputChord *param_1,EMultipleKeyBindingIndex param_2)

{
  FUICommandInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  FUICommandInfoDecl *pFVar4;
  
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUICommandInfoDecl *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Info).Object;
  if ((pFVar1->DefaultChords).ArrayNum <= (int)(uint)param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUICommandInfoDecl *)(*pcVar2)();
      return pFVar4;
    }
  }
  FInputChord::operator=
            ((FInputChord *)
             ((pFVar1->DefaultChords).AllocatorInstance.Data + (ulonglong)param_2 * 0x20),param_1);
  return this;
}

// Description @ 14272a8b0

FUICommandInfoDecl * __thiscall
FUICommandInfoDecl::Description(FUICommandInfoDecl *this,FText *param_1)

{
  FUICommandInfo *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FUICommandInfoDecl *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FUICommandInfoDecl *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Info).Object;
  pIVar2 = (param_1->TextData).Reference;
  pIVar3 = (pFVar1->Description).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (pFVar1->Description).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (pFVar1->Description).Flags = param_1->Flags;
  return this;
}

// Icon @ 1427490b0

FUICommandInfoDecl * __thiscall
FUICommandInfoDecl::Icon(FUICommandInfoDecl *this,FSlateIcon *param_1)

{
  FUICommandInfo *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  FUICommandInfoDecl *pFVar10;
  
  uVar3 = (param_1->StyleSetName).ComparisonIndex.Value;
  uVar4 = (param_1->StyleSetName).Number;
  uVar5 = (param_1->StyleName).ComparisonIndex.Value;
  uVar6 = (param_1->StyleName).Number;
  FVar7 = param_1->SmallStyleName;
  FVar8 = param_1->StatusOverlayStyleName;
  if (((this->Info).Object == (FUICommandInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FUICommandInfoDecl *)(*pcVar2)();
    return pFVar10;
  }
  pFVar1 = (this->Info).Object;
  (pFVar1->Icon).StyleSetName.ComparisonIndex.Value = uVar3;
  (pFVar1->Icon).StyleSetName.Number = uVar4;
  (pFVar1->Icon).StyleName.ComparisonIndex.Value = uVar5;
  (pFVar1->Icon).StyleName.Number = uVar6;
  (pFVar1->Icon).SmallStyleName = FVar7;
  (pFVar1->Icon).StatusOverlayStyleName = FVar8;
  return this;
}

// UserInterfaceType @ 142794290

FUICommandInfoDecl * __thiscall
FUICommandInfoDecl::UserInterfaceType(FUICommandInfoDecl *this,EUserInterfaceActionType param_1)

{
  code *pcVar1;
  bool bVar2;
  FUICommandInfoDecl *pFVar3;
  
  if ((this->Info).Object == (FUICommandInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUICommandInfoDecl *)(*pcVar1)();
      return pFVar3;
    }
  }
  ((this->Info).Object)->UserInterfaceType = param_1;
  return this;
}

