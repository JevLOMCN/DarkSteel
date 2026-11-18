// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 38

// ToolTipText<SDockTab> @ 1426f4cc0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
TSlateBaseNamedArgs<SHorizontalBox>::ToolTipText<SDockTab>
          (TSlateBaseNamedArgs<SHorizontalBox> *this,SDockTab *param_1,pmf_b5ac6a49 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x10 = 1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x20;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return (FArguments *)this;
}

// Visibility<SDockingTabStack> @ 1426f5100

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Visibility<SDockingTabStack>
          (TSlateBaseNamedArgs<SButton> *this,SDockingTabStack *param_1,pmf_395bb40a *param_2)

{
  pmf_395bb40a local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<SDockingTabStack>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// Visibility<UE::Slate::Private::SPanelDrawerArea> @ 1426f5140

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
TSlateBaseNamedArgs<SBox>::Visibility<UE::Slate::Private::SPanelDrawerArea>
          (TSlateBaseNamedArgs<SBox> *this,SPanelDrawerArea *param_1,pmf_a3f8a404 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x89 = 1;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x98;
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSPanelDrawerArea_Private_Slate_UE___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return (FArguments *)this;
}

// Visibility<STabDrawerButton> @ 1426f5280

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
TSlateBaseNamedArgs<SComplexGradient>::Visibility<STabDrawerButton>
          (TSlateBaseNamedArgs<SComplexGradient> *this,STabDrawerButton *param_1,
          pmf_17a327a0 *param_2)

{
  pmf_17a327a0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<STabDrawerButton>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// AccessibleText @ 142709e20

FArguments * __thiscall
TSlateBaseNamedArgs<SImage>::AccessibleText
          (TSlateBaseNamedArgs<SImage> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)&this->field_0x1b8,&param_1->Value);
  this->field_0x1c8 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x1d0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// AddMetaData @ 14270b100

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::AddMetaData
          (TSlateBaseNamedArgs<SButton> *this,TSharedRef<ISlateMetaData,1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  
  puVar1 = &this->field_0x1e8;
  if ((*(TSharedRef<ISlateMetaData,1> **)puVar1 <= param_1) &&
     (param_1 < *(TSharedRef<ISlateMetaData,1> **)puVar1 + *(int *)&this->field_0x1f4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArguments *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = *(int *)&this->field_0x1f0;
  if (iVar5 == *(int *)&this->field_0x1f4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)&this->field_0x1f4);
  }
  *(int *)&this->field_0x1f0 = iVar5 + 1;
  puVar7 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  puVar7[1] = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (FArguments *)this;
}

// Cursor @ 14272a770

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Cursor
          (TSlateBaseNamedArgs<SButton> *this,TAttribute<TOptional<EMouseCursor::Type>_> *param_1)

{
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != (TAttribute<TOptional<EMouseCursor::Type>_> *)&this->field_0x60) {
    if ((param_1->Value).bIsSet == false) {
      if (this->field_0x64 != '\0') {
        this->field_0x64 = 0;
      }
    }
    else {
      *(Type *)&this->field_0x60 = (param_1->Value).TypedValue;
      this->field_0x64 = 1;
    }
  }
  this_00 = &param_1->Getter;
  this->field_0x68 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// IsEnabled @ 14274cff0

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::IsEnabled
          (TSlateBaseNamedArgs<SButton> *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0xa8 = param_1->Value;
  this->field_0xa9 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// ToolTipText @ 14278e3e0

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::ToolTipText
          (TSlateBaseNamedArgs<SButton> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)this,&param_1->Value);
  this->field_0x10 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// ToolTipText @ 14278e460

FArguments * __thiscall
TSlateBaseNamedArgs<SImage>::ToolTipText
          (TSlateBaseNamedArgs<SImage> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)this,&param_1->Value);
  this->field_0x10 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// Visibility @ 1427942f0

FArguments * __thiscall
TSlateBaseNamedArgs<SBorder>::Visibility
          (TSlateBaseNamedArgs<SBorder> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 142794360

FArguments * __thiscall
TSlateBaseNamedArgs<SBox>::Visibility
          (TSlateBaseNamedArgs<SBox> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 1427943d0

FArguments * __thiscall
TSlateBaseNamedArgs<SDockingTarget>::Visibility
          (TSlateBaseNamedArgs<SDockingTarget> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 142794440

FArguments * __thiscall
TSlateBaseNamedArgs<SHorizontalBox>::Visibility
          (TSlateBaseNamedArgs<SHorizontalBox> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 1427944b0

FArguments * __thiscall
TSlateBaseNamedArgs<STabSidebar>::Visibility
          (TSlateBaseNamedArgs<STabSidebar> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// AddMetaData<FTagMetaData,FTagMetaData> @ 142797240

FArguments * __thiscall
TSlateBaseNamedArgs<SHorizontalBox>::AddMetaData<FTagMetaData,FTagMetaData>
          (TSlateBaseNamedArgs<SHorizontalBox> *this,FTagMetaData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<FTagMetaData,1> *pTVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  FTagMetaData *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FTagMetaData,1> local_18;
  
  puVar1 = &this->field_0x1e8;
  pTVar5 = MakeShared<FTagMetaData,1,FTagMetaData_&>(&local_18,param_1);
  local_28 = pTVar5->Object;
  local_20 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((*(FTagMetaData ***)puVar1 <= &local_28) &&
     (&local_28 < *(FTagMetaData ***)puVar1 + (longlong)*(int *)&this->field_0x1f4 * 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FArguments *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = *(int *)&this->field_0x1f0;
  if (iVar4 == *(int *)&this->field_0x1f4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)&this->field_0x1f4);
  }
  puVar7 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar4 * 0x10);
  *(int *)&this->field_0x1f0 = iVar4 + 1;
  *puVar7 = local_28;
  puVar7[1] = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  param_1->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  return (FArguments *)this;
}

// IsEnabled<SToolBarButtonBlock> @ 1427a3430

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::IsEnabled<SToolBarButtonBlock>
          (TSlateBaseNamedArgs<SCheckBox> *this,SToolBarButtonBlock *param_1,pmf_9fa8a0bd *param_2)

{
  pmf_9fa8a0bd local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<bool>::Bind<SToolBarButtonBlock>
            ((TAttribute<bool> *)&this->field_0xa8,param_1,&local_18);
  return (FArguments *)this;
}

// IsEnabled<SToolBarComboButtonBlock> @ 1427a3470

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::IsEnabled<SToolBarComboButtonBlock>
          (TSlateBaseNamedArgs<SCheckBox> *this,SToolBarComboButtonBlock *param_1,
          pmf_2619bd21 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar7 = (TStatId *)0x0;
  this->field_0xa9 = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0xb0,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0xb8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar6 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar6 = pTVar7;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSToolBarComboButtonBlock___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar6;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return (FArguments *)this;
}

// Visibility<SButtonRowBlock,bool> @ 1427a8ed0

FArguments * __thiscall
TSlateBaseNamedArgs<SImage>::Visibility<SButtonRowBlock,bool>
          (TSlateBaseNamedArgs<SImage> *this,SButtonRowBlock *param_1,pmf_ecaaedc9 *param_2,
          bool param_3)

{
  bool local_res20 [8];
  pmf_ecaaedc9 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res20[0] = param_3;
  TAttribute<EVisibility>::Bind<SButtonRowBlock,bool_&>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18,local_res20);
  return (FArguments *)this;
}

// Cursor @ 142800970

FArguments * __thiscall
TSlateBaseNamedArgs<SComboButton>::Cursor
          (TSlateBaseNamedArgs<SComboButton> *this,
          TAttribute<TOptional<EMouseCursor::Type>_> *param_1)

{
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != (TAttribute<TOptional<EMouseCursor::Type>_> *)&this->field_0x60) {
    if ((param_1->Value).bIsSet == false) {
      if (this->field_0x64 != '\0') {
        this->field_0x64 = 0;
      }
    }
    else {
      *(Type *)&this->field_0x60 = (param_1->Value).TypedValue;
      this->field_0x64 = 1;
    }
  }
  this_00 = &param_1->Getter;
  this->field_0x68 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// ToolTip @ 142837960

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::ToolTip
          (TSlateBaseNamedArgs<SButton> *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  void *pvVar2;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  pFVar1 = &(param_1->Value).SharedReferenceCount;
  if ((TAttribute<TSharedPtr<IToolTip,1>_> *)&this->field_0x30 != param_1) {
    *(IToolTip **)&this->field_0x30 = (param_1->Value).Object;
    (param_1->Value).Object = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x38,pFVar1);
  }
  this_00 = &param_1->Getter;
  this->field_0x40 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return (FArguments *)this;
}

// ToolTip @ 142837a00

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::ToolTip
          (TSlateBaseNamedArgs<SCheckBox> *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  void *pvVar2;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  pFVar1 = &(param_1->Value).SharedReferenceCount;
  if ((TAttribute<TSharedPtr<IToolTip,1>_> *)&this->field_0x30 != param_1) {
    *(IToolTip **)&this->field_0x30 = (param_1->Value).Object;
    (param_1->Value).Object = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x38,pFVar1);
  }
  this_00 = &param_1->Getter;
  this->field_0x40 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return (FArguments *)this;
}

// ToolTip @ 142837aa0

FArguments * __thiscall
TSlateBaseNamedArgs<SHorizontalBox>::ToolTip
          (TSlateBaseNamedArgs<SHorizontalBox> *this,TAttribute<TSharedPtr<IToolTip,1>_> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  void *pvVar2;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  pFVar1 = &(param_1->Value).SharedReferenceCount;
  if ((TAttribute<TSharedPtr<IToolTip,1>_> *)&this->field_0x30 != param_1) {
    *(IToolTip **)&this->field_0x30 = (param_1->Value).Object;
    (param_1->Value).Object = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x38,pFVar1);
  }
  this_00 = &param_1->Getter;
  this->field_0x40 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x48,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return (FArguments *)this;
}

// ToolTipText @ 142837b40

FArguments * __thiscall
TSlateBaseNamedArgs<SComboButton>::ToolTipText
          (TSlateBaseNamedArgs<SComboButton> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)this,&param_1->Value);
  this->field_0x10 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// Visibility @ 14283b750

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::Visibility
          (TSlateBaseNamedArgs<SCheckBox> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 14283b7c0

FArguments * __thiscall
TSlateBaseNamedArgs<SImage>::Visibility
          (TSlateBaseNamedArgs<SImage> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 14283b830

FArguments * __thiscall
TSlateBaseNamedArgs<STextBlock>::Visibility
          (TSlateBaseNamedArgs<STextBlock> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// ToolTipText<SComboButton,TAttribute<FText>_> @ 142841f10

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::ToolTipText<SComboButton,TAttribute<FText>_>
          (TSlateBaseNamedArgs<SButton> *this,SComboButton *param_1,pmf_e056f93f *param_2,
          TAttribute<FText> *param_3)

{
  SWidget *pSVar1;
  ITextData *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget_const_,1> *pTVar10;
  ulong64 uVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res8 = 0;
  uVar4 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)&param_2->field_0x8;
  this->field_0x10 = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (FWriteAccessScope *)&local_48);
  local_30 = &this->field_0x20;
  puVar9 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)local_30);
  if (puVar9 == (undefined8 *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar10->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText______6B_
    ;
    puVar9[1] = 0;
    pIVar2 = (param_3->Value).TextData.Reference;
    puVar9[1] = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    *(uint *)(puVar9 + 2) = (param_3->Value).Flags;
    *(bool *)(puVar9 + 3) = param_3->bIsSet;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar9 + 4),
               &param_3->Getter);
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[7] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSComboButton___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText______6B_
    ;
    puVar9[8] = pSVar1;
    puVar9[9] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar9[10] = uVar4;
    puVar9[0xb] = uVar5;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_3->Getter);
  pvVar3 = *(void **)&(param_3->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_3->Getter);
  pIVar2 = (param_3->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// AddMetaData<FTagMetaData,wchar_t_const_*> @ 1428a1280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::AddMetaData<FTagMetaData,wchar_t_const_*>
          (TSlateBaseNamedArgs<SButton> *this,wchar_t *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  FNameEntryId FVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName *pFVar8;
  FArguments *pFVar9;
  longlong *plVar10;
  FName local_res8;
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  puVar1 = &this->field_0x1e8;
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTagMetaData___00_SharedPointerInternals__6B_;
    pFVar8 = ::FName::FName(&local_res8,param_1);
    local_28 = pTVar7 + 1;
    FVar3.Value = (pFVar8->ComparisonIndex).Value;
    uVar4 = pFVar8->Number;
    pTVar7[1]._padding_ = (longlong)&___7FTagMetaData__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)FVar3.Value;
    pTVar7[1].WeakReferenceCount = (atomic<int>)uVar4;
    if (local_28 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FArguments *)(*pcVar2)();
        return pFVar9;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_20 = pTVar7;
  }
  if ((*(TReferenceControllerBase<1> ***)puVar1 <= &local_28) &&
     (&local_28 <
      *(TReferenceControllerBase<1> ***)puVar1 + (longlong)*(int *)&this->field_0x1f4 * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FArguments *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar6 = *(int *)&this->field_0x1f0;
  if (iVar6 == *(int *)&this->field_0x1f4) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)&this->field_0x1f4);
  }
  *(int *)&this->field_0x1f0 = iVar6 + 1;
  plVar10 = (longlong *)(*(longlong *)puVar1 + (longlong)iVar6 * 0x10);
  *plVar10 = (longlong)local_28;
  plVar10[1] = (longlong)pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (FArguments *)this;
}

// Visibility<SSearchBox> @ 1428ae490

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Visibility<SSearchBox>
          (TSlateBaseNamedArgs<SButton> *this,SSearchBox *param_1,pmf_b801044b *param_2)

{
  pmf_b801044b local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<SSearchBox>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// Visibility @ 1429b09a0

FArguments * __thiscall
TSlateBaseNamedArgs<SEditableText>::Visibility
          (TSlateBaseNamedArgs<SEditableText> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// ToolTipText<SNotificationItemImpl> @ 1429b5d70

FArguments * __thiscall
TSlateBaseNamedArgs<SHyperlink>::ToolTipText<SNotificationItemImpl>
          (TSlateBaseNamedArgs<SHyperlink> *this,SNotificationItemImpl *param_1,
          pmf_90a3390d *param_2)

{
  pmf_90a3390d local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SNotificationItemImpl>((TAttribute<FText> *)this,param_1,&local_18);
  return (FArguments *)this;
}

// Visibility<SNotificationItemImpl> @ 1429b5da0

FArguments * __thiscall
TSlateBaseNamedArgs<SCheckBox>::Visibility<SNotificationItemImpl>
          (TSlateBaseNamedArgs<SCheckBox> *this,SNotificationItemImpl *param_1,pmf_fa4416ac *param_2
          )

{
  pmf_fa4416ac local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<SNotificationItemImpl>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// Visibility<SNotificationItemImpl> @ 1429b5de0

FArguments * __thiscall
TSlateBaseNamedArgs<SHyperlink>::Visibility<SNotificationItemImpl>
          (TSlateBaseNamedArgs<SHyperlink> *this,SNotificationItemImpl *param_1,
          pmf_fa4416ac *param_2)

{
  pmf_fa4416ac local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<EVisibility>::Bind<SNotificationItemImpl>
            ((TAttribute<EVisibility> *)&this->field_0x88,param_1,&local_18);
  return (FArguments *)this;
}

// ToolTipText @ 142a10500

FArguments * __thiscall
TSlateBaseNamedArgs<STextBlock>::ToolTipText
          (TSlateBaseNamedArgs<STextBlock> *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=((FText *)this,&param_1->Value);
  this->field_0x10 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x18,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return (FArguments *)this;
}

// Visibility_Lambda @ 142a15030

FArguments * __thiscall
TSlateBaseNamedArgs<STextBlock>::Visibility_Lambda
          (TSlateBaseNamedArgs<STextBlock> *this,TFunction<EVisibility___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->field_0x89 = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x98;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return (FArguments *)this;
}

// Cursor @ 142a26690

FArguments * __thiscall
TSlateBaseNamedArgs<SBorder>::Cursor
          (TSlateBaseNamedArgs<SBorder> *this,TAttribute<TOptional<EMouseCursor::Type>_> *param_1)

{
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != (TAttribute<TOptional<EMouseCursor::Type>_> *)&this->field_0x60) {
    if ((param_1->Value).bIsSet == false) {
      if (this->field_0x64 != '\0') {
        this->field_0x64 = 0;
      }
    }
    else {
      *(Type *)&this->field_0x60 = (param_1->Value).TypedValue;
      this->field_0x64 = 1;
    }
  }
  this_00 = &param_1->Getter;
  this->field_0x68 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x70,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

// Visibility @ 142a38410

FArguments * __thiscall
TSlateBaseNamedArgs<SSpacer>::Visibility
          (TSlateBaseNamedArgs<SSpacer> *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return (FArguments *)this;
}

