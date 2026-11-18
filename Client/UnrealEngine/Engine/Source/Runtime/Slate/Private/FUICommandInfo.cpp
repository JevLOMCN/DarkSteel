// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// FUICommandInfo @ 1426fddd0

FUICommandInfo * __thiscall FUICommandInfo::FUICommandInfo(FUICommandInfo *this,FName param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  FUICommandInfo *pFVar8;
  FName FVar9;
  FName *pFVar10;
  FName FVar11;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FInputChord local_58;
  
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  piVar1 = &(this->ActiveChords).ArrayMax;
  (this->ActiveChords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveChords).ArrayNum = 0;
  *piVar1 = 0;
  FText::FText(&this->Label);
  FText::FText(&this->Description);
  (this->DefaultChords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultChords).ArrayNum = 0;
  (this->DefaultChords).ArrayMax = 0;
  FSlateIcon::FSlateIcon(&this->Icon);
  (this->UIStyle).ComparisonIndex = 0;
  (this->UIStyle).Number = 0;
  (this->CommandName).ComparisonIndex = 0;
  (this->CommandName).Number = 0;
  this->BindingContext = param_1;
  (this->Bundle).ComparisonIndex = 0;
  (this->Bundle).Number = 0;
  this->UserInterfaceType = Button;
  this->bUseLongDisplayName = true;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  DestructItems<TSharedRef<FInputChord,1>,int>
            ((TSharedRef<FInputChord,1> *)(this->ActiveChords).AllocatorInstance.Data,
             (this->ActiveChords).ArrayNum);
  (this->ActiveChords).ArrayNum = 0;
  if (*piVar1 != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,(ForAnyElementType *)this,0,piVar1);
  }
  FVar7 = (FName)::operator_new(0x20);
  FVar11 = FVar9;
  if (FVar7 != (FName)0x0) {
    *(FName *)FVar7 = EKeys::Invalid.KeyName;
    *(FKeyDetails **)((longlong)FVar7 + 8) = EKeys::Invalid.KeyDetails.Object;
    FVar4 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
    *(TReferenceControllerBase<1> **)((longlong)FVar7 + 0x10) =
         EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar4.ReferenceController)->SharedReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    (((FName *)((longlong)FVar7 + 0x18))->ComparisonIndex).Value =
         (((FName *)((longlong)FVar7 + 0x18))->ComparisonIndex).Value & 0xfffffff0;
    FVar11 = FVar7;
  }
  local_78 = FVar11;
  FVar7 = (FName)::operator_new(0x18);
  local_70 = FVar9;
  if (FVar7 != (FName)0x0) {
    (((FName *)((longlong)FVar7 + 8))->ComparisonIndex).Value = 1;
    *(uint *)((longlong)FVar7 + 0xc) = 1;
    *(undefined ***)FVar7 =
         &
         ___7__TReferenceControllerWithDeleter_UFInputChord__U__DefaultDeleter_UFInputChord___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FName *)((longlong)FVar7 + 0x10) = FVar11;
    local_70 = FVar7;
  }
  if ((FVar11 == (FName)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUICommandInfo *)(*pcVar3)();
    return pFVar8;
  }
  pFVar10 = (FName *)(this->ActiveChords).AllocatorInstance.Data;
  if (((pFVar10 <= &local_78) && (&local_78 < pFVar10 + (longlong)*piVar1 * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUICommandInfo *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (this->ActiveChords).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  pFVar10 = (FName *)((this->ActiveChords).AllocatorInstance.Data + (longlong)iVar6 * 0x10);
  (this->ActiveChords).ArrayNum = iVar6 + 1;
  *pFVar10 = local_78;
  pFVar10[1] = local_70;
  if (local_70 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_70 + 8) = *(int *)((longlong)local_70 + 8) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70);
  FVar7 = (FName)::operator_new(0x20);
  FVar11 = FVar9;
  if (FVar7 != (FName)0x0) {
    *(FName *)FVar7 = EKeys::Invalid.KeyName;
    *(FKeyDetails **)((longlong)FVar7 + 8) = EKeys::Invalid.KeyDetails.Object;
    FVar4 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
    *(TReferenceControllerBase<1> **)((longlong)FVar7 + 0x10) =
         EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar4.ReferenceController)->SharedReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    (((FName *)((longlong)FVar7 + 0x18))->ComparisonIndex).Value =
         (((FName *)((longlong)FVar7 + 0x18))->ComparisonIndex).Value & 0xfffffff0;
    FVar11 = FVar7;
  }
  local_68 = FVar11;
  FVar7 = (FName)::operator_new(0x18);
  if (FVar7 != (FName)0x0) {
    (((FName *)((longlong)FVar7 + 8))->ComparisonIndex).Value = 1;
    *(uint *)((longlong)FVar7 + 0xc) = 1;
    *(undefined ***)FVar7 =
         &
         ___7__TReferenceControllerWithDeleter_UFInputChord__U__DefaultDeleter_UFInputChord___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FName *)((longlong)FVar7 + 0x10) = FVar11;
    FVar9 = FVar7;
  }
  local_60 = FVar9;
  if ((FVar11 == (FName)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUICommandInfo *)(*pcVar3)();
    return pFVar8;
  }
  pFVar10 = (FName *)(this->ActiveChords).AllocatorInstance.Data;
  if (((pFVar10 <= &local_68) && (&local_68 < pFVar10 + (longlong)*piVar1 * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FUICommandInfo *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (this->ActiveChords).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  pFVar10 = (FName *)((this->ActiveChords).AllocatorInstance.Data + (longlong)iVar6 * 0x10);
  (this->ActiveChords).ArrayNum = iVar6 + 1;
  *pFVar10 = local_68;
  pFVar10[1] = local_60;
  if (local_60 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_60 + 8) = *(int *)((longlong)local_60 + 8) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60);
  local_58.Key.KeyDetails.SharedReferenceCount = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  local_58.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_58.Key.KeyName = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.bCmd = 0;
  local_58.bAlt = 0;
  local_58.bCtrl = 0;
  local_58.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  TArray<FInputChord,TSizedDefaultAllocator<32>_>::Init(&this->DefaultChords,&local_58,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// GetInputText @ 14273f080

FText * __thiscall FUICommandInfo::GetInputText(FUICommandInfo *this,FText *__return_storage_ptr__)

{
  FKey *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FInputChord *this_01;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FScriptContainerElement *pFVar5;
  
  if ((this->ActiveChords).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = *(FKey **)(this->ActiveChords).AllocatorInstance.Data;
  bVar3 = FKey::IsValid(this_00);
  if (bVar3) {
    bVar3 = FKey::IsModifierKey(this_00);
    if (!bVar3) {
      if ((this->ActiveChords).ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FText *)(*pcVar2)();
          return pFVar4;
        }
      }
      pFVar5 = (this->ActiveChords).AllocatorInstance.Data;
      goto LAB_14273f174;
    }
  }
  if ((this->ActiveChords).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = (this->ActiveChords).AllocatorInstance.Data + 0x10;
LAB_14273f174:
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
  this_01 = *(FInputChord **)pFVar5;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInputChord::GetInputText(this_01,__return_storage_ptr__,this->bUseLongDisplayName);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// MakeCommandInfo @ 1427526a0

void __cdecl
FUICommandInfo::MakeCommandInfo
          (TSharedRef<FBindingContext,1> *param_1,TSharedPtr<FUICommandInfo,1> *param_2,
          FName param_3,FText *param_4,FText *param_5,FSlateIcon *param_6,
          EUserInterfaceActionType param_7,FInputChord *param_8,FInputChord *param_9,FName param_10)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FUICommandInfo *pFVar5;
  FInputBindingManager *this;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  FName local_74;
  TRawPtrProxy<FUICommandInfo> local_68;
  FMemScope local_60;
  TSharedRef<FUICommandInfo,1> local_58;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FName local_38;
  FName FStack_30;
  
  bVar4 = FText::IsEmpty(param_4);
  if (bVar4) {
    local_res10[0] = 0;
    `FUICommandInfo::MakeCommandInfo'::__l2::<lambda_1>::operator()(local_res10);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_74 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_60,&local_74,true);
  pFVar5 = ::operator_new(0x88);
  local_68.Object = (FUICommandInfo *)0x0;
  if (pFVar5 != (FUICommandInfo *)0x0) {
    local_68.Object = FUICommandInfo(pFVar5,param_1->Object->ContextName);
  }
  TSharedPtr<FUICommandInfo,1>::operator=<FUICommandInfo>(param_2,&local_68);
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->Object->CommandName = param_3;
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = param_2->Object;
  pIVar1 = (param_4->TextData).Reference;
  pIVar2 = (pFVar5->Label).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (pFVar5->Label).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (pFVar5->Label).Flags = param_4->Flags;
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = param_2->Object;
  pIVar1 = (pFVar5->Description).TextData.Reference;
  pIVar2 = (param_5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (pFVar5->Description).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_78);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (pFVar5->Description).Flags = param_5->Flags;
  local_48 = (param_6->StyleSetName).ComparisonIndex.Value;
  uStack_44 = (param_6->StyleSetName).Number;
  uStack_40 = (param_6->StyleName).ComparisonIndex.Value;
  uStack_3c = (param_6->StyleName).Number;
  local_38 = param_6->SmallStyleName;
  FStack_30 = param_6->StatusOverlayStyleName;
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = param_2->Object;
  (pFVar5->Icon).StyleSetName.ComparisonIndex.Value = local_48;
  (pFVar5->Icon).StyleSetName.Number = uStack_44;
  (pFVar5->Icon).StyleName.ComparisonIndex.Value = uStack_40;
  (pFVar5->Icon).StyleName.Number = uStack_3c;
  (pFVar5->Icon).SmallStyleName = local_38;
  (pFVar5->Icon).StatusOverlayStyleName = FStack_30;
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->Object->UserInterfaceType = param_7;
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = param_2->Object;
  if (((pFVar5->DefaultChords).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FInputChord::operator=((FInputChord *)(pFVar5->DefaultChords).AllocatorInstance.Data,param_8);
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = param_2->Object;
  if (((pFVar5->DefaultChords).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FInputChord::operator=
            ((FInputChord *)((pFVar5->DefaultChords).AllocatorInstance.Data + 0x20),param_9);
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->Object->Bundle = param_10;
  this = FInputBindingManager::Get();
  if ((param_2->Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_58.Object = param_2->Object;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_58.Object == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FInputBindingManager::CreateInputCommand(this,param_1,&local_58);
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// MakeTooltip @ 142759e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SToolTip,1> * __thiscall
FUICommandInfo::MakeTooltip
          (FUICommandInfo *this,TSharedRef<SToolTip,1> *__return_storage_ptr__,
          TAttribute<FText> *param_1,TAttribute<EVisibility> *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FKey *this_00;
  TReferenceControllerBase<1> *pTVar5;
  FInputChord *this_01;
  TReferenceControllerBase<1> *pTVar6;
  SVerticalBox *pSVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  SToolTip *pSVar13;
  FSharedReferencer<1> FVar14;
  FSlotArguments *pFVar15;
  char cVar16;
  bool bVar17;
  byte bVar18;
  FArguments *pFVar19;
  FSlot *pFVar20;
  FSlot *pFVar21;
  FArguments *pFVar22;
  ISlateStyle *pIVar23;
  FSlateFontInfo *pFVar24;
  TAttribute<FSlateFontInfo> *pTVar25;
  TSharedRef<STextBlock,1> *pTVar26;
  TSharedRef<SToolTip,1> *pTVar27;
  FScriptContainerElement *pFVar28;
  FArguments *pFVar29;
  TSharedRef<SVerticalBox,1> *pTVar30;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar31;
  uint *puVar32;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar33;
  undefined1 *puVar34;
  undefined4 local_res8 [2];
  TSharedRef<SToolTip,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1768 [4];
  FLLMScope local_1764;
  FLLMScope local_1760;
  FLLMScope local_175c;
  FLLMScope local_1758 [2];
  FArguments *local_1750;
  STextBlock *local_1748;
  FSharedReferencer<1> local_1740;
  uchar local_1738;
  undefined1 local_1737;
  undefined1 local_1730 [8];
  ForAnyElementType FStack_1728;
  ulonglong local_1720;
  ITextData *local_1718;
  uint local_1710 [2];
  undefined1 local_1708 [8];
  undefined1 local_1700 [8];
  ForAnyElementType FStack_16f8;
  ulonglong local_16f0;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_16e8;
  ITextData *local_16d0;
  uint local_16c8 [2];
  undefined1 local_16c0 [8];
  undefined1 local_16b8 [8];
  ForAnyElementType FStack_16b0;
  int local_16a8;
  FSlotArguments *local_16a0;
  SWidget *local_1698;
  TReferenceControllerBase<1> *pTStack_1690;
  undefined8 local_1688;
  FSharedReferencer<1> local_1680;
  uchar local_1678;
  undefined1 local_1677;
  undefined1 local_1670 [24];
  uchar local_1658;
  undefined1 local_1657;
  undefined1 local_1650 [24];
  undefined1 local_1638 [4];
  undefined1 local_1634 [4];
  undefined1 local_1630 [8];
  FSlot *local_1628;
  FName local_1620;
  FMemScope local_1618;
  FName local_1610;
  FMemScope local_1608;
  FArguments *local_1600;
  FName local_15f8;
  FMemScope local_15f0;
  FName local_15e8;
  FMemScope local_15e0;
  FText local_15d8;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined4 local_15b8;
  undefined8 local_15b4;
  undefined8 uStack_15ac;
  undefined4 local_15a4;
  FDestructionSentinel local_15a0;
  FDestructionSentinel local_1588;
  FDestructionSentinel local_1570;
  FLinearColor_u_0 local_1558;
  undefined4 local_1548;
  undefined1 local_1544;
  undefined8 local_1540;
  undefined8 uStack_1538;
  undefined8 local_1530;
  TAttribute<FText> local_1528;
  FLinearColor_u_0 local_14f8;
  undefined4 local_14e8;
  undefined1 local_14e4;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined8 local_14d0;
  TAttribute<FText> local_14c8;
  FReadAccessScope local_1498;
  FReadAccessScope local_1480;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1468;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1450;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1438;
  TSharedRef<STextBlock,1> local_1420;
  TSharedRef<SVerticalBox,1> local_1410;
  FName local_1400;
  FName local_13f8;
  TSharedRef<STextBlock,1> local_13f0;
  undefined8 *local_13e0;
  STextBlock *local_13d8;
  FSharedReferencer<1> local_13d0 [4];
  undefined1 local_13b0 [40];
  FSlotArgumentsMixin local_1388;
  undefined8 *local_12f8 [2];
  TReferenceControllerBase<1> *local_12e8;
  undefined1 local_12e0 [24];
  undefined1 local_12c8 [40];
  FSlotArgumentsMixin local_12a0;
  undefined1 local_1210 [528];
  undefined1 local_1000 [32];
  FSharedReferencer<1> local_fe0;
  FSharedReferencer<1> local_fa0;
  undefined1 local_f70 [48];
  undefined1 local_f40 [40];
  undefined1 local_f18 [32];
  undefined1 local_ef8 [24];
  undefined1 local_ee0 [24];
  undefined1 local_ec8 [56];
  TReferenceControllerBase<1> *local_e90;
  undefined1 local_e68 [56];
  TReferenceControllerBase<1> *local_e30;
  FArguments local_e08;
  TAttribute<FSlateFontInfo> local_c00;
  TAttribute<FSlateFontInfo> local_b80;
  FArguments local_b00;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142759e23;
  pFVar21 = (FSlot *)0x0;
  local_res8[0] = 0;
  local_res10 = __return_storage_ptr__;
  pFVar19 = SToolTip::FArguments::FArguments((FArguments *)local_1210);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_1498)
  ;
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar16 = (**(code **)(*plVar2 + 0x38))(), cVar16 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1498);
    local_1738 = (uchar)EVisibility::Visible.Value.Value;
    local_1657 = 1;
    local_1720 = 0;
    pTVar31 = (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1730;
    local_1737 = 1;
    bVar11 = false;
    bVar10 = true;
    local_1730 = (undefined1  [8])0x0;
    FStack_1728.Data = (FScriptContainerElement *)0x0;
    bVar12 = false;
    bVar17 = true;
    local_1658 = (uchar)EVisibility::Visible;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1498);
    local_1678 = (param_2->Value).Value.Value;
    local_1677 = param_2->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1670,
               &param_2->Getter);
    pTVar31 = (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1670;
    bVar11 = true;
    bVar10 = false;
    bVar12 = true;
    bVar17 = false;
    local_1657 = local_1677;
    local_1658 = local_1678;
  }
  bVar9 = true;
  bVar8 = false;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1650,pTVar31);
  *(uchar *)&pFVar19->_padding_ = local_1658;
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 1) = local_1657;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  if ((void *)local_1650._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1650._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1650);
  local_1750 = SVerticalBox::FArguments::FArguments(&local_e08);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pFVar21 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  local_1628 = pFVar21;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_12f8,(FSlot *)&local_1628);
  local_16a0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_12e0,0.0,0.0,0.0,__real_40800000);
  pFVar22 = STextBlock::FArguments::FArguments(&local_5a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_1480)
  ;
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar16 = (**(code **)(*plVar2 + 0x38))(), cVar16 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1480);
    local_1718 = (this->Description).TextData.Reference;
    if (local_1718 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1718 + 8))(local_1718,local_1634);
    }
    puVar32 = local_1710;
    local_1710[0] = (this->Description).Flags;
    puVar34 = local_1708;
    local_1708[0] = 1;
    bVar9 = false;
    bVar8 = true;
    local_16f0 = 0;
    local_1700 = (undefined1  [8])0x0;
    FStack_16f8.Data = (FScriptContainerElement *)0x0;
    pTVar33 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1700;
    local_14c8.Value.TextData.Reference = local_1718;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1480);
    local_16d0 = (param_1->Value).TextData.Reference;
    if (local_16d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_16d0 + 8))(local_16d0,local_1638);
    }
    local_16c8[0] = (param_1->Value).Flags;
    local_16c0[0] = param_1->bIsSet;
    local_16b8 = (undefined1  [8])0x0;
    FStack_16b0.Data = (FScriptContainerElement *)0x0;
    local_16a8 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_16b8,
               &param_1->Getter);
    puVar32 = local_16c8;
    puVar34 = local_16c0;
    pTVar33 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_16b8;
    local_14c8.Value.TextData.Reference = local_16d0;
    bVar10 = bVar17;
    bVar11 = bVar12;
  }
  if (local_14c8.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14c8.Value.TextData.Reference + 8))
              (local_14c8.Value.TextData.Reference,local_1630);
  }
  local_14c8.Value.Flags = *puVar32;
  local_14c8.bIsSet = (bool)*puVar34;
  local_14c8.Getter._0_8_ = 0;
  local_14c8.Getter._8_8_ = 0;
  local_14c8.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_14c8.Getter,pTVar33);
  pFVar22 = STextBlock::FArguments::Text(pFVar22,&local_14c8);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x88);
  ::FName::FName(&local_13f8,"ToolTip.Font");
  pFVar24 = (FSlateFontInfo *)(*pcVar3)(pIVar23,local_e68);
  pTVar25 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_c00,pFVar24);
  pFVar22 = STextBlock::FArguments::Font(pFVar22,pTVar25);
  local_15a4 = CONCAT22(local_15a4._2_2_,2);
  pFVar21 = (FSlot *)0x0;
  local_1548 = local_15a4;
  local_15b4 = ___xmm_3f8000003f800000000000003f800000;
  uStack_15ac = _UNK_15090c6d8;
  local_1544 = 1;
  local_1558._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1558._8_8_ = _UNK_15090c6d8;
  local_1530 = 0;
  local_1540 = 0;
  uStack_1538 = 0;
  pFVar22 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar22,(TAttribute<FSlateColor> *)&local_1558._s_0);
  FLLMScope::FLLMScope(&local_1764,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1620 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1618,&local_1620,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1438,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandInfo.cpp"
             ,0xb3,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_1618);
  FLLMScope::~FLLMScope(&local_1764);
  pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1438,&local_13f0,pFVar22);
  pFVar15 = local_16a0;
  local_1748 = pTVar26->Object;
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1740.ReferenceController = pTVar4;
  if ((STextBlock **)&local_16a0->field_0x8 != &local_1748) {
    *(STextBlock **)&local_16a0->field_0x8 = local_1748;
    local_1748 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_16a0->field_0x10,&local_1740);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1740.ReferenceController);
  local_1600 = SVerticalBox::FArguments::operator+(local_1750,pFVar15);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pFVar21 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  local_1750 = (FArguments *)pFVar21;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_13e0,(FSlot *)&local_1750);
  pFVar22 = STextBlock::FArguments::FArguments(&local_b00);
  if (((this->ActiveChords).ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  this_00 = *(FKey **)(this->ActiveChords).AllocatorInstance.Data;
  bVar17 = FKey::IsValid(this_00);
  if ((!bVar17) || (bVar17 = FKey::IsModifierKey(this_00), bVar17)) {
    if (((this->ActiveChords).ArrayNum < 2) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar3 = (code *)swi(3);
      pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
      return pTVar27;
    }
    pFVar28 = (this->ActiveChords).AllocatorInstance.Data + 0x10;
  }
  else {
    if (((this->ActiveChords).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar3 = (code *)swi(3);
      pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
      return pTVar27;
    }
    pFVar28 = (this->ActiveChords).AllocatorInstance.Data;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar28 + 8);
  this_01 = *(FInputChord **)pFVar28;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInputChord::GetInputText(this_01,&local_15d8,this->bUseLongDisplayName);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_1528.Value.TextData.Reference = local_15d8.TextData.Reference;
  if (local_15d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_15d8.TextData.Reference + 8))
              (local_15d8.TextData.Reference,&local_16a0);
  }
  local_1528.Value.Flags = local_15d8.Flags;
  local_1528.bIsSet = true;
  local_1528.Getter._16_8_ = 0;
  local_1528.Getter._0_8_ = 0;
  local_1528.Getter._8_8_ = 0;
  pFVar22 = STextBlock::FArguments::Text(pFVar22,&local_1528);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x88);
  ::FName::FName(&local_1400,"ToolTip.Font");
  pFVar24 = (FSlateFontInfo *)(*pcVar3)(pIVar23,local_ec8);
  pTVar25 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(&local_b80,pFVar24);
  pFVar22 = STextBlock::FArguments::Font(pFVar22,pTVar25);
  local_15b8 = CONCAT22(local_15b8._2_2_,3);
  local_14e8 = local_15b8;
  local_15c8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_15c0 = _UNK_15090c6d8;
  local_14e4 = 1;
  local_14f8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_14f8._8_8_ = _UNK_15090c6d8;
  local_14d0 = 0;
  local_14e0 = 0;
  uStack_14d8 = 0;
  pFVar22 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar22,(TAttribute<FSlateColor> *)&local_14f8._s_0);
  FLLMScope::FLLMScope(&local_1760,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1610 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1608,&local_1610,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1450,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandInfo.cpp"
             ,0xba,local_res18);
  FMemScope::~FMemScope(&local_1608);
  FLLMScope::~FLLMScope(&local_1760);
  pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1450,&local_1420,pFVar22);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_13d8 = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1688 = 0;
  local_1680.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_13d0,&local_1680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1680.ReferenceController);
  pFVar29 = SVerticalBox::FArguments::operator+(local_1600,(FSlotArguments *)&local_13e0);
  FLLMScope::FLLMScope(&local_175c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_15f0,&local_15f8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1468,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandInfo.cpp"
             ,0xaf,local_res20);
  FMemScope::~FMemScope(&local_15f0);
  FLLMScope::~FLLMScope(&local_175c);
  pTVar30 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1468,&local_1410,pFVar29);
  pTVar6 = (pTVar30->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar30->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1698 = (pFVar19->_Content).Widget.Object;
  pTStack_1690 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar19->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1690);
  FLLMScope::FLLMScope(local_1758,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_15e0,&local_15e8,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (&local_16e8,"SToolTip",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandInfo.cpp"
             ,0xab,local_1768);
  FMemScope::~FMemScope(&local_15e0);
  FLLMScope::~FLLMScope(local_1758);
  pSVar13 = local_16e8._Widget.Object;
  if ((local_16e8._Widget.Object == (SToolTip *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  SWidget::SWidgetConstruct((SWidget *)local_16e8._Widget.Object,(FSlateBaseNamedArgs *)pFVar19);
  SToolTip::Construct(local_16e8._Widget.Object,pFVar19);
  if ((local_16e8._Widget.Object == (SToolTip *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  if (((local_16e8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_16e8._Widget.Object)->_padding_ + 0x228))
                       (local_16e8._Widget.Object);
    bVar18 = 0;
    if (cVar16 == '\0') goto LAB_14275a813;
  }
  bVar18 = 0x20;
LAB_14275a813:
  *(byte *)&(local_16e8._Widget.Object)->_padding_ =
       (byte)(local_16e8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_16e8._Widget.Object)->_padding_ =
       (byte)(local_16e8._Widget.Object)->_padding_ | bVar18;
  if ((local_16e8._Widget.Object == (SToolTip *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  pbVar1 = (byte *)((longlong)&(local_16e8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_16e8._Widget.Object == (SToolTip *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  FVar14.ReferenceController = local_16e8._Widget.SharedReferenceCount.ReferenceController;
  pTVar27 = local_res10;
  local_16e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_16e8._Widget.Object = (SToolTip *)0x0;
  local_res10->Object = pSVar13;
  (local_res10->SharedReferenceCount).ReferenceController = FVar14.ReferenceController;
  if ((pSVar13 == (SToolTip *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar27 = (TSharedRef<SToolTip,1> *)(*pcVar3)();
    return pTVar27;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1410.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1468._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1420.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1450._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e90);
  if (local_15d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_15d8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_b00);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1388);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_13b0);
  if ((void *)local_13b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_13b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d0[0].ReferenceController);
  if (local_13e0 != (undefined8 *)0x0) {
    (**(code **)*local_13e0)(local_13e0,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1438._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e30);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1700,
               (FWriteAccessScope *)&local_15a0);
    if (((int)local_16f0 != 0) && (FStack_16f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_16f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_16f8,0,0,0x10);
      local_16f0 = local_16f0 & 0xffffffff00000000;
    }
    if (local_15a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15a0.Accessor,&local_15a0);
    }
    if (FStack_16f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_16f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1700);
    if (local_1718 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1718 + 0x10))();
    }
  }
  if (bVar9) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16b8,
               (FWriteAccessScope *)&local_1588);
    if ((local_16a8 != 0) && (FStack_16b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_16b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_16b0,0,0,0x10);
      local_16a8 = 0;
    }
    if (local_1588.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1588.Accessor,&local_1588);
    }
    if (FStack_16b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_16b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_16b8);
    if (local_16d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_16d0 + 0x10))();
    }
  }
  STextBlock::FArguments::~FArguments(&local_5a8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_12a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12c8);
  if ((void *)local_12c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_12e8);
  if (local_12f8[0] != (undefined8 *)0x0) {
    (**(code **)*local_12f8[0])(local_12f8[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e08._Slots.AllocatorInstance.Data,local_e08._Slots.ArrayNum);
  if ((FSlotArguments *)local_e08._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e08._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e08);
  if (bVar10) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1730,
               (FWriteAccessScope *)&local_1570);
    if (((int)local_1720 != 0) && (FStack_1728.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1728.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1728,0,0,0x10);
      local_1720 = local_1720 & 0xffffffff00000000;
    }
    if (local_1570.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1570.Accessor,&local_1570);
    }
    if (FStack_1728.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1728.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1730);
  }
  if (bVar11) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
    if ((void *)local_1670._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1670._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1670);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee0);
  if ((void *)local_ee0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ee0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ee0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef8);
  if ((void *)local_ef8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ef8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ef8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
  if ((void *)local_f18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f40);
  if ((void *)local_f40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f70);
  if ((void *)local_f70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1000);
  if ((void *)local_1000._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1000._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1000);
  if ((ITextData *)local_1210._504_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1210._504_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1210);
  return pTVar27;
}

// RemoveActiveChord @ 14277af80

void __thiscall
FUICommandInfo::RemoveActiveChord(FUICommandInfo *this,EMultipleKeyBindingIndex param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  FInputBindingManager *pFVar5;
  TRawPtrProxy<FInputChord> local_res8;
  
  local_res8.Object = ::operator_new(0x20);
  if (local_res8.Object != (FInputChord *)0x0) {
    ((local_res8.Object)->Key).KeyName = EKeys::Invalid.KeyName;
    ((local_res8.Object)->Key).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
    FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
    ((local_res8.Object)->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    (local_res8.Object)->bShift = 0;
    (local_res8.Object)->bCmd = 0;
    (local_res8.Object)->bAlt = 0;
    (local_res8.Object)->bCtrl = 0;
  }
  if ((this->ActiveChords).ArrayNum <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  TSharedRef<FInputChord,1>::operator=<FInputChord>
            ((TSharedRef<FInputChord,1> *)
             ((this->ActiveChords).AllocatorInstance.Data + (ulonglong)param_1 * 0x10),&local_res8);
  pFVar5 = FInputBindingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar5->_padding_ + 8);
                    /* WARNING: Could not recover jumptable at 0x00014277b03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar5,this,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// SetActiveChord @ 142783d30

void __thiscall
FUICommandInfo::SetActiveChord
          (FUICommandInfo *this,FInputChord *param_1,EMultipleKeyBindingIndex param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FInputBindingManager *pFVar2;
  
  if ((this->ActiveChords).ArrayNum <= (int)(uint)param_2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FInputChord::operator=
            (*(FInputChord **)
              ((this->ActiveChords).AllocatorInstance.Data + (ulonglong)param_2 * 0x10),param_1);
  pFVar2 = FInputBindingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 8);
                    /* WARNING: Could not recover jumptable at 0x000142783dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar2,this,(ulonglong)param_2,UNRECOVERED_JUMPTABLE);
  return;
}

// UnregisterCommandInfo @ 142790790

void __cdecl
FUICommandInfo::UnregisterCommandInfo
          (TSharedRef<FBindingContext,1> *param_1,TSharedRef<FUICommandInfo,1> *param_2)

{
  FInputBindingManager *this;
  TSharedRef<FUICommandInfo,1> local_18;
  
  this = FInputBindingManager::Get();
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_18.Object = param_2->Object;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInputBindingManager::RemoveInputCommand(this,param_1,&local_18);
  return;
}

// operator() @ 150492f80

bool __thiscall `FUICommandInfo::MakeCommandInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6918228596209221504>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6918228596209221504>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

