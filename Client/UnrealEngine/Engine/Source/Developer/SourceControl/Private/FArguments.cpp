// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 9

// Image_Static<> @ 146af9aa0

FArguments * __thiscall
SImage::FArguments::Image_Static<>(FArguments *this,_func___cdecl_FSlateBrush_ptr *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FArguments *pFVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_Image).Getter.field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_FSlateBrush_ptr *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArguments *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked<SSourceControlLogin> @ 146afa650

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SSourceControlLogin>
          (FArguments *this,SSourceControlLogin *param_1,pmf_3289367e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SSourceControlProgress> @ 146afa780

FArguments * __thiscall
SButton::FArguments::OnClicked<SSourceControlProgress>
          (FArguments *this,SSourceControlProgress *param_1,pmf_b8defd44 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlProgress___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked_Static<FReply_(__cdecl*)(void)> @ 146afa8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked_Static<FReply_(__cdecl*)(void)>
          (FArguments *this,_func___cdecl_FReply *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FArguments *pFVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_FReply *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArguments *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// Text_Static<> @ 146afaca0

FArguments * __thiscall
STextBlock::FArguments::Text_Static<>(FArguments *this,_func___cdecl_FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FArguments *pFVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_Text).Getter.field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_FText *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArguments *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// FArguments @ 146afbb80

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall SSourceControlLogin::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ParentWindow).Object = (SWindow *)0x0;
  (this->_ParentWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->_OnSourceControlLoginClosed = 0;
  *(undefined8 *)&(this->_OnSourceControlLoginClosed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnSourceControlLoginClosed).field_0x10 = 0;
  return this;
}

// FArguments @ 146afbbd0

FArguments * __thiscall SSourceControlPicker::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 146afbbf0

FArguments * __thiscall SSourceControlProgress::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnCancelled = 0;
  *(undefined8 *)&(this->_OnCancelled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCancelled).field_0x10 = 0;
  return this;
}

// TextStyle @ 146b282e0

FArguments * __thiscall
SButton::FArguments::TextStyle(FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FTextBlockStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FTextBlockStyle *)(*pcVar1)(param_1,FTextBlockStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FTextBlockStyle *)0x0) {
    pFVar4 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar4;
  return this;
}

