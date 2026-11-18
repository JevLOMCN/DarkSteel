// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 75

// StaticClass @ 14453b630

UClass * __cdecl UTypedElementSelectionSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionSet",
               &Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionSet,0x8c0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementSelectionSet>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton;
}

// UTypedElementSelectionSet @ 14453ef60

UTypedElementSelectionSet * __thiscall
UTypedElementSelectionSet::UTypedElementSelectionSet
          (UTypedElementSelectionSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
  ::
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization><>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
              *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>__
  ;
  *(undefined8 *)&this->OnPreSelectionChange = 0;
  *(undefined8 *)&(this->OnPreSelectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreSelectionChange).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChange = 0;
  *(undefined8 *)&(this->OnSelectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChange).field_0x10 = 0;
  (this->ElementList).Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  (this->ElementList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnPreChangeDelegate = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  this->bIsRestoringState = false;
  (this->PendingUndoRedoState).Ptr = (FTypedElementSelectionSetState *)0x0;
  (this->ListNameForTedsIntegration).ComparisonIndex = 0;
  (this->ListNameForTedsIntegration).Number = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  return this;
}

// UTypedElementSelectionSet @ 14453f040

UTypedElementSelectionSet * __thiscall
UTypedElementSelectionSet::UTypedElementSelectionSet(UTypedElementSelectionSet *this)

{
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UTypedElementRegistry *pUVar4;
  UTypedElementSelectionSet *pUVar5;
  TTypedElementList<FTypedElementHandle> *local_98;
  FSharedReferencer<1> local_90;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_88;
  code *local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  UObject::UObject((UObject *)this);
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
  ::
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization><>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
              *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pTVar1 = &this->ElementList;
  *(undefined8 *)&this->OnPreSelectionChange = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>__
  ;
  *(undefined8 *)&(this->OnPreSelectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreSelectionChange).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChange = 0;
  *(undefined8 *)&(this->OnSelectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChange).field_0x10 = 0;
  pTVar1->Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  (this->ElementList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnPreChangeDelegate = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  this->bIsRestoringState = false;
  (this->PendingUndoRedoState).Ptr = (FTypedElementSelectionSetState *)0x0;
  (this->ListNameForTedsIntegration).ComparisonIndex = 0;
  (this->ListNameForTedsIntegration).Number = 0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar4 = UTypedElementRegistry::GetInstance();
    local_88.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_88.Object = (TTypedElementList<FTypedElementHandle> *)OnElementReplaced;
    lStack_60 = (ulonglong)local_88.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_68 = OnElementReplaced;
    TMulticastDelegateRegistration<void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
    ::AddUObject<UTypedElementSelectionSet>
              ((TMulticastDelegateRegistration<void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
                *)&pUVar4->OnElementReplacedDelegate,(UTypedElementSelectionSet *)&stack0x00000008,
               (pmf_0f18f2ba *)this);
    local_88.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_88.Object = (TTypedElementList<FTypedElementHandle> *)OnElementUpdated;
    lStack_50 = (ulonglong)local_88.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_58 = OnElementUpdated;
    TMulticastDelegateRegistration<void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
    ::AddUObject<UTypedElementSelectionSet>
              ((TMulticastDelegateRegistration<void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
                *)&pUVar4->OnElementUpdatedDelegate,(UTypedElementSelectionSet *)&stack0x00000010,
               (pmf_4f0add2c *)this);
    TTypedElementList<FTypedElementHandle>::Private_CreateElementList(&local_88,pUVar4);
    local_90.ReferenceController =
         (TReferenceControllerBase<1> *)
         CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                  local_88.SharedReferenceCount.ReferenceController._0_4_);
    local_98 = local_88.Object;
    if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *)&local_98) {
      pTVar1->Object = local_88.Object;
      local_98 = (TTypedElementList<FTypedElementHandle> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ElementList).SharedReferenceCount,&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_));
    if (pTVar1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UTypedElementSelectionSet *)(*pcVar2)();
        return pUVar5;
      }
    }
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = OnElementListPreChange;
    TMulticastDelegateRegistration<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UTypedElementSelectionSet>
              ((TMulticastDelegateRegistration<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                *)&pTVar1->Object->OnPreChangeDelegate,(UTypedElementSelectionSet *)&stack0x00000018
               ,(pmf_1edc9468 *)this);
    if (pTVar1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UTypedElementSelectionSet *)(*pcVar2)();
        return pUVar5;
      }
    }
    local_78 = OnElementListChanged;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    local_48 = OnElementListChanged;
    uStack_40 = uStack_70;
    TMulticastDelegateRegistration<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UTypedElementSelectionSet>
              ((TMulticastDelegateRegistration<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                *)&pTVar1->Object->OnChangedDelegate,(UTypedElementSelectionSet *)&stack0x00000020,
               (pmf_1edc9468 *)this);
  }
  return this;
}

// ~UTypedElementSelectionSet @ 14453f410

void __thiscall
UTypedElementSelectionSet::~UTypedElementSelectionSet(UTypedElementSelectionSet *this)

{
  FTypedElementSelectionSetState *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>__
  ;
  pFVar1 = (this->PendingUndoRedoState).Ptr;
  if (pFVar1 != (FTypedElementSelectionSetState *)0x0) {
    DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
              ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                *)(pFVar1->TransactedElements).AllocatorInstance.Data,
               (pFVar1->TransactedElements).ArrayNum);
    pFVar2 = (pFVar1->TransactedElements).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDelegate).field_0x8,*(int *)&(this->OnChangedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnChangedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreChangeDelegate).field_0x8,*(int *)&(this->OnPreChangeDelegate).field_0x10
            );
  pvVar3 = *(void **)&(this->OnPreChangeDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreChangeDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ElementList).SharedReferenceCount.ReferenceController);
  pvVar3 = *(void **)&(this->OnSelectionChange).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChange);
  pvVar3 = *(void **)&(this->OnPreSelectionChange).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreSelectionChange);
  TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
  ::
  ~TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementSelectionCustomization,FTypedElementSelectionCustomization>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14453f780

/* WARNING: Removing unreachable block (ram,0x00014453f81a) */

bool __thiscall
`UTypedElementSelectionSet::GetCurrentSelectionState'::__l2::<lambda_1>::operator()
          (void *this,TTypedElement<ITypedElementSelectionInterface> *param_1)

{
  longlong lVar1;
  int iVar2;
  FTypedElementId *pFVar3;
  longlong *local_res10 [3];
  
  (**(code **)(**(longlong **)&param_1->field_0x10 + 0x88))
            (*(longlong **)&param_1->field_0x10,local_res10);
  if (local_res10[0] != (longlong *)0x0) {
    if (*(longlong *)param_1 == 0) {
      pFVar3 = &FTypedElementId::Unset;
    }
    else {
      pFVar3 = (FTypedElementId *)(*(longlong *)param_1 + 8);
    }
    *(byte *)(local_res10[0] + 1) = (pFVar3->field0_0x0)._s_0.TypeId;
    (**(code **)(*local_res10[0] + 0x18))(local_res10[0],param_1);
    if (local_res10[0] != (longlong *)0x0) {
      lVar1 = *(longlong *)this;
      iVar2 = *(int *)(lVar1 + 0x10);
      if (iVar2 == *(int *)(lVar1 + 0x14)) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar1 + 8),(int *)(lVar1 + 0x14));
      }
      *(int *)(lVar1 + 0x10) = iVar2 + 1;
      *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 8) = local_res10[0];
    }
  }
  return true;
}

// operator() @ 14453f840

bool __thiscall
`UTypedElementSelectionSet::GetNormalizedElementList'::__l2::<lambda_1>::operator()
          (void *this,TTypedElement<ITypedElementSelectionInterface> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  FTypedElementId *pFVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  atomic<int> *paVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  FTypedElementInternalData *local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  TReferenceControllerBase<1> *local_38;
  longlong *local_30;
  
  if (*(longlong *)param_1 == 0) {
    pFVar10 = &FTypedElementId::Unset;
  }
  else {
    pFVar10 = (FTypedElementId *)(*(longlong *)param_1 + 8);
  }
  plVar18 = *(longlong **)
             (*(longlong *)this + 0x30 + (ulonglong)(pFVar10->field0_0x0)._s_0.TypeId * 8);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = *(longlong **)(*(longlong *)this + 0x30);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  lVar15 = *(longlong *)((longlong)this + 8);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  this_00 = *(FTypedElementInternalData **)param_1;
  local_50 = -1;
  local_58 = (FTypedElementInternalData *)0x0;
  if (this_00 != (FTypedElementInternalData *)0x0) {
    local_50 = FTypedElementInternalData::AddRef(this_00,true);
    local_58 = this_00;
  }
  local_48 = *(longlong *)&param_1->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  local_40 = lVar15;
  local_38 = pTVar1;
  local_30 = plVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (((((local_58 == (FTypedElementInternalData *)0x0) || (local_48 == 0)) || (local_40 == 0)) ||
      (local_30 == (longlong *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectionSetElement.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                         ,0x1ab,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  plVar18 = local_30;
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  local_78 = *(undefined8 *)((longlong)this + 0x20);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    lVar15 = *local_30;
    uVar19 = *(undefined8 *)((longlong)this + 0x18);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    uVar19 = *(undefined8 *)((longlong)this + 0x18);
    lVar15 = *local_30;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar4 = *(code **)(lVar15 + 0x40);
  local_70 = pTVar1;
  if ((local_40 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pTVar7 = local_38;
  lVar15 = local_40;
  if (local_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_40 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  local_68 = lVar15;
  local_60 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(plVar18,&local_58,&local_68,uVar19,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  iVar6 = local_50;
  if (local_58 != (FTypedElementInternalData *)0x0) {
    lVar15 = (longlong)local_50;
    LOCK();
    local_58->RefCount = local_58->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_58->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar2 = *(longlong *)&lpCriticalSection->References;
      puVar13 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar17 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      puVar16 = puVar13;
      if (puVar3 != (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      lVar12 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5);
      if (((*(uint *)(puVar16 + lVar12 * 4) & uVar17) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar2) =
             iVar6;
      }
      uVar11 = 0xffffffff;
      *(undefined4 *)(lVar15 * 0x108 + lVar2) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar15 * 0x108 + 4 + lVar2) = uVar11;
      puVar3 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar3 != (undefined1 *)0x0) {
        puVar13 = puVar3;
      }
      *(uint *)(puVar13 + lVar12 * 4) = *(uint *)(puVar13 + lVar12 * 4) & ~uVar17;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return true;
}

// AllowSelectionModifiers @ 144540700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::AllowSelectionModifiers
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  code *pcVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  FTypedElementHandle local_88;
  TTypedElementList<FTypedElementHandle> *local_78;
  TReferenceControllerBase<1> *local_70;
  FTypedElementSelectionSetElement local_68;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar16 = 0xffffffff;
  local_88.DataPtr = (FTypedElementInternalData *)0x0;
  local_88.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_88.DataPtr = this_00;
    local_88.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_88.DataPtr != (FTypedElementInternalData *)0x0) {
      ResolveSelectionSetElement(this,&local_68,&local_88);
      FVar8.ReferenceController = local_68.ElementList.SharedReferenceCount.ReferenceController;
      if (((((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_ ==
             (FTypedElementInternalData *)0x0) || (local_68.ElementSelectionHandle._16_8_ == 0)) ||
          (local_68.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
         (local_68.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0)) {
LAB_1445407fe:
        bVar9 = false;
      }
      else {
        pcVar4 = *(code **)((longlong)*local_68.SelectionCustomization + 0x30);
        if (local_68.ElementList.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_68.ElementList.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.ElementList.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_68.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
        local_78 = local_68.ElementList.Object;
        local_70 = FVar8.ReferenceController;
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar11 = (*pcVar4)(local_68.SelectionCustomization,&local_68,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        if (cVar11 == '\0') goto LAB_1445407fe;
        bVar9 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.ElementList.SharedReferenceCount.ReferenceController);
      if ((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_ !=
          (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_,
                   local_68.ElementSelectionHandle._8_4_);
      }
      local_68.ElementSelectionHandle._16_8_ = 0;
      local_68.ElementSelectionHandle._0_8_ = (FTypedElementInternalData *)0x0;
      local_68.ElementSelectionHandle._8_4_ = -1;
      goto LAB_144540841;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  bVar9 = false;
LAB_144540841:
  iVar7 = local_88.ReferenceId;
  if (local_88.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar14 = (longlong)local_88.ReferenceId;
    LOCK();
    (local_88.DataPtr)->RefCount = (local_88.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_88.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_88.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      puVar13 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      if ((*(uint *)(puVar13 + lVar2) & uVar15) == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar7;
      }
      *(undefined4 *)(lVar14 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar16 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar14 * 0x108 + 4 + lVar5) = uVar16;
      puVar13 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar13 = *(int *)puVar13 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      puVar13 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      *(uint *)(puVar13 + lVar2) = *(uint *)(puVar13 + lVar2) & ~uVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar9;
}

// AllowSelectionModifiers @ 1445409c0

bool __thiscall
UTypedElementSelectionSet::AllowSelectionModifiers
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *local_40;
  FTypedElementInternalData *local_38;
  int local_30;
  longlong local_28;
  TTypedElementList<FTypedElementHandle> *local_20;
  FSharedReferencer<1> local_18;
  FTypedElementSelectionCustomization *local_10;
  
  ResolveSelectionSetElement(this,(FTypedElementSelectionSetElement *)&local_38,param_1);
  FVar2.ReferenceController = local_18.ReferenceController;
  if ((((local_38 != (FTypedElementInternalData *)0x0) && (local_28 != 0)) &&
      (local_20 != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     (local_10 != (FTypedElementSelectionCustomization *)0x0)) {
    pcVar1 = *(code **)((longlong)*local_10 + 0x30);
    if (local_18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_18.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_20 == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_48 = local_20;
    local_40 = FVar2.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar5 = (*pcVar1)(local_10,&local_38,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (cVar5 != '\0') {
      bVar3 = true;
      goto LAB_144540a9d;
    }
  }
  bVar3 = false;
LAB_144540a9d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  if (local_38 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_38,local_30);
  }
  return bVar3;
}

// BeginDestroy @ 144540ad0

void __thiscall UTypedElementSelectionSet::BeginDestroy(UTypedElementSelectionSet *this)

{
  TTypedElementList<FTypedElementHandle> *this_00;
  
  this_00 = (this->ElementList).Object;
  if (this_00 != (TTypedElementList<FTypedElementHandle> *)0x0) {
    TTypedElementList<FTypedElementHandle>::Empty(this_00,0);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanDeselectElement @ 144540f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::CanDeselectElement
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  FTypedElementHandle local_78;
  undefined8 local_68;
  FName FStack_60;
  FTypedElementSelectionSetElement local_58;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_78.DataPtr = (FTypedElementInternalData *)0x0;
  local_78.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_78.DataPtr = this_00;
    local_78.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_78.DataPtr != (FTypedElementInternalData *)0x0) {
      local_68._0_1_ = param_2->bAllowHidden;
      local_68._1_1_ = param_2->bAllowGroups;
      local_68._2_1_ = param_2->bAllowLegacyNotifications;
      local_68._3_1_ = param_2->bWarnIfLocked;
      local_68._4_1_ = param_2->bAllowSubRootSelection;
      local_68._5_1_ = param_2->ChildElementInclusionMethod;
      local_68._6_2_ = *(undefined2 *)&param_2->field_0x6;
      FStack_60 = param_2->TEDSIntegrationSelectionSetName;
      ResolveSelectionSetElement(this,&local_58,&local_78);
      if (((((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ ==
             (FTypedElementInternalData *)0x0) || (local_58.ElementSelectionHandle._16_8_ == 0)) ||
          (local_58.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
         (local_58.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0)) {
LAB_144541024:
        bVar14 = false;
      }
      else {
        cVar8 = (**(code **)((longlong)*local_58.SelectionCustomization + 0x18))
                          (local_58.SelectionCustomization,&local_58,&local_68);
        if (cVar8 == '\0') goto LAB_144541024;
        bVar14 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ElementList.SharedReferenceCount.ReferenceController);
      if ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ !=
          (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_,
                   local_58.ElementSelectionHandle._8_4_);
      }
      local_58.ElementSelectionHandle._16_8_ = 0;
      local_58.ElementSelectionHandle._0_8_ = (FTypedElementInternalData *)0x0;
      local_58.ElementSelectionHandle._8_4_ = -1;
      goto LAB_144541070;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  bVar14 = false;
LAB_144541070:
  iVar7 = local_78.ReferenceId;
  if (local_78.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_78.ReferenceId;
    LOCK();
    (local_78.DataPtr)->RefCount = (local_78.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_78.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_78.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if ((*(uint *)(puVar11 + lVar2) & uVar15) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar12;
      puVar11 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar14;
}

// CanDeselectElement @ 144541210

bool __thiscall
UTypedElementSelectionSet::CanDeselectElement
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  char cVar1;
  bool bVar2;
  FTypedElementInternalData *local_38;
  int local_30;
  longlong local_28;
  TTypedElementList<FTypedElementHandle> *local_20;
  FSharedReferencer<1> local_18;
  FTypedElementSelectionCustomization *local_10;
  
  ResolveSelectionSetElement(this,(FTypedElementSelectionSetElement *)&local_38,param_1);
  if ((((local_38 != (FTypedElementInternalData *)0x0) && (local_28 != 0)) &&
      (local_20 != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     (local_10 != (FTypedElementSelectionCustomization *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_10 + 0x18))(local_10,&local_38,param_2);
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_144541260;
    }
  }
  bVar2 = false;
LAB_144541260:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  if (local_38 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_38,local_30);
  }
  return bVar2;
}

// CanSelectElement @ 1445414b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::CanSelectElement
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  FTypedElementHandle local_78;
  undefined8 local_68;
  FName FStack_60;
  FTypedElementSelectionSetElement local_58;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_78.DataPtr = (FTypedElementInternalData *)0x0;
  local_78.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_78.DataPtr = this_00;
    local_78.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_78.DataPtr != (FTypedElementInternalData *)0x0) {
      local_68._0_1_ = param_2->bAllowHidden;
      local_68._1_1_ = param_2->bAllowGroups;
      local_68._2_1_ = param_2->bAllowLegacyNotifications;
      local_68._3_1_ = param_2->bWarnIfLocked;
      local_68._4_1_ = param_2->bAllowSubRootSelection;
      local_68._5_1_ = param_2->ChildElementInclusionMethod;
      local_68._6_2_ = *(undefined2 *)&param_2->field_0x6;
      FStack_60 = param_2->TEDSIntegrationSelectionSetName;
      ResolveSelectionSetElement(this,&local_58,&local_78);
      if (((((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ ==
             (FTypedElementInternalData *)0x0) || (local_58.ElementSelectionHandle._16_8_ == 0)) ||
          (local_58.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
         (local_58.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0)) {
LAB_144541554:
        bVar14 = false;
      }
      else {
        cVar8 = (**(code **)((longlong)*local_58.SelectionCustomization + 0x10))
                          (local_58.SelectionCustomization,&local_58,&local_68);
        if (cVar8 == '\0') goto LAB_144541554;
        bVar14 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ElementList.SharedReferenceCount.ReferenceController);
      if ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ !=
          (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_,
                   local_58.ElementSelectionHandle._8_4_);
      }
      local_58.ElementSelectionHandle._16_8_ = 0;
      local_58.ElementSelectionHandle._0_8_ = (FTypedElementInternalData *)0x0;
      local_58.ElementSelectionHandle._8_4_ = -1;
      goto LAB_1445415a0;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  bVar14 = false;
LAB_1445415a0:
  iVar7 = local_78.ReferenceId;
  if (local_78.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_78.ReferenceId;
    LOCK();
    (local_78.DataPtr)->RefCount = (local_78.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_78.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_78.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if ((*(uint *)(puVar11 + lVar2) & uVar15) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar12;
      puVar11 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar14;
}

// CanSelectElement @ 144541740

bool __thiscall
UTypedElementSelectionSet::CanSelectElement
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  char cVar1;
  bool bVar2;
  FTypedElementInternalData *local_38;
  int local_30;
  longlong local_28;
  TTypedElementList<FTypedElementHandle> *local_20;
  FSharedReferencer<1> local_18;
  FTypedElementSelectionCustomization *local_10;
  
  ResolveSelectionSetElement(this,(FTypedElementSelectionSetElement *)&local_38,param_1);
  if ((((local_38 != (FTypedElementInternalData *)0x0) && (local_28 != 0)) &&
      (local_20 != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     (local_10 != (FTypedElementSelectionCustomization *)0x0)) {
    cVar1 = (**(code **)((longlong)*local_10 + 0x10))(local_10,&local_38,param_2);
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_144541790;
    }
  }
  bVar2 = false;
LAB_144541790:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  if (local_38 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_38,local_30);
  }
  return bVar2;
}

// ClearSelection @ 1445417f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UTypedElementSelectionSet::ClearSelection
          (UTypedElementSelectionSet *this,FTypedElementSelectionOptions *param_1)

{
  uint uVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  ForElementType<FTypedElementHandle> FVar13;
  ForElementType<FTypedElementHandle> FVar14;
  bool bVar15;
  longlong lVar16;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  ForElementType<FTypedElementHandle> *local_130;
  TObjectPtr<UClass>_u_0 local_128;
  code *local_120;
  ForElementType<FTypedElementHandle> **local_118;
  FTypedElementSelectionOptions local_108;
  FTypedElementSelectionOptions local_f8;
  FLegacySyncScopedBatch local_e8;
  ForElementType<FTypedElementHandle> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined1 uVar5;
  undefined2 uVar6;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar15 = param_1->bAllowLegacyNotifications;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_e8,(this->ElementList).Object,bVar15);
  local_4c = 8;
  bVar15 = false;
  local_d8.SecondaryData = (ForElementType<FTypedElementHandle>)0x0;
  local_50 = 0;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pTVar2 = (this->ElementList).Object;
  local_128.DebugPtr = (UClass *)0x0;
  if (local_4c < 0) {
    FVar14 = (ForElementType<FTypedElementHandle>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
      FVar14 = local_d8.SecondaryData;
    }
    DestructItems<FTypedElementHandle,int>((FTypedElementHandle *)FVar14,local_50);
    local_50 = 0;
    if (local_4c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
                (0x10,8,0,&local_d8,0,&local_4c);
    }
  }
  else {
    FVar14 = (ForElementType<FTypedElementHandle>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
      FVar14 = local_d8.SecondaryData;
    }
    DestructItems<FTypedElementHandle,int>((FTypedElementHandle *)FVar14,local_50);
    local_50 = 0;
  }
  uVar1 = (pTVar2->ElementHandles).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (local_4c < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
              (0x10,8,uVar1,&local_d8,local_50,&local_4c);
  }
  local_130 = &local_d8;
  local_118 = &local_130;
  local_120 = UE::Core::Private::Function::
              TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::GetElementHandles<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
              ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElementHandle
            (pTVar2,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_120,
             (TSubclassOf<UInterface> *)&local_128.ObjectPtr);
  iVar10 = local_50;
  uVar4._0_1_ = param_1->bAllowHidden;
  uVar4._1_1_ = param_1->bAllowGroups;
  uVar4._2_1_ = param_1->bAllowLegacyNotifications;
  uVar4._3_1_ = param_1->bWarnIfLocked;
  uVar4._4_1_ = param_1->bAllowSubRootSelection;
  uVar5 = param_1->ChildElementInclusionMethod;
  uVar6 = *(undefined2 *)&param_1->field_0x6;
  uVar4._5_3_ = CONCAT21(uVar6,uVar5);
  FVar7 = param_1->TEDSIntegrationSelectionSetName;
  lVar16 = (longlong)local_50;
  FVar14 = (ForElementType<FTypedElementHandle>)&local_d8;
  if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
    FVar14 = local_d8.SecondaryData;
  }
  local_108._0_4_ = SUB84(uVar4,0);
  uVar8 = local_108._0_4_;
  local_108.bAllowSubRootSelection = true;
  local_108._5_3_ = uVar4._5_3_;
  FVar13 = (ForElementType<FTypedElementHandle>)&local_d8;
  if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
    FVar13 = local_d8.SecondaryData;
  }
  local_108.TEDSIntegrationSelectionSetName = FVar7;
  while( true ) {
    if (local_50 != iVar10) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    uVar9 = local_108._0_8_;
    if (FVar14 == (ForElementType<FTypedElementHandle>)(lVar16 * 0x10 + (longlong)FVar13)) break;
    local_108.bAllowHidden = SUB41(uVar8,0);
    local_108.bAllowGroups = SUB41(uVar8,1);
    local_108.bAllowLegacyNotifications = SUB41(uVar8,2);
    local_108.bWarnIfLocked = SUB41(uVar8,3);
    local_108._6_2_ = SUB32((uint3)uVar4._5_3_ >> 8,0);
    local_f8.bAllowHidden = local_108.bAllowHidden;
    local_f8.bAllowGroups = local_108.bAllowGroups;
    local_f8.bAllowLegacyNotifications = local_108.bAllowLegacyNotifications;
    local_f8.bWarnIfLocked = local_108.bWarnIfLocked;
    local_f8.bAllowSubRootSelection = true;
    local_f8.ChildElementInclusionMethod = uVar5;
    local_f8._6_2_ = local_108._6_2_;
    local_108._0_8_ = uVar9;
    local_f8.TEDSIntegrationSelectionSetName = FVar7;
    bVar11 = DeselectElement(this,(FTypedElementHandle *)FVar14,&local_f8);
    bVar15 = (bool)(bVar15 | bVar11);
    FVar14 = (ForElementType<FTypedElementHandle>)((longlong)FVar14 + 0x10);
  }
  FVar14 = (ForElementType<FTypedElementHandle>)&local_d8;
  if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
    FVar14 = local_d8.SecondaryData;
  }
  DestructItems<FTypedElementHandle,int>((FTypedElementHandle *)FVar14,local_50);
  if (local_d8.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
    FMemory::Free((void *)local_d8.SecondaryData);
  }
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pTVar2 = (this->ElementList).Object;
  if (0 < (pTVar2->ElementHandles).ArrayNum) {
    bVar15 = true;
    if ((pTVar2 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    TTypedElementList<FTypedElementHandle>::Reset((this->ElementList).Object);
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_e8)
  ;
  return bVar15;
}

// DeselectElement @ 1445425a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::DeselectElement
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  FTypedElementHandle local_48;
  FTypedElementSelectionOptions local_38;
  
  bVar8 = false;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar13 = 0xffffffff;
  local_48.DataPtr = (FTypedElementInternalData *)0x0;
  local_48.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_48.DataPtr = this_00;
    local_48.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
      local_38.bAllowHidden = param_2->bAllowHidden;
      local_38.bAllowGroups = param_2->bAllowGroups;
      local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
      local_38.bWarnIfLocked = param_2->bWarnIfLocked;
      local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
      local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
      local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
      local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
      bVar8 = DeselectElement(this,&local_48,&local_38);
      goto LAB_14454261e;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_14454261e:
  iVar7 = local_48.ReferenceId;
  if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_48.ReferenceId;
    LOCK();
    (local_48.DataPtr)->RefCount = (local_48.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_48.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_48.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if ((*(uint *)(puVar11 + lVar2) & uVar14) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar13 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar4) = uVar13;
      puVar11 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar8;
}

// DeselectElement @ 1445427b0

bool __thiscall
UTypedElementSelectionSet::DeselectElement
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  FName FVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar11;
  UTypedElementRegistry *pUVar12;
  FTypedElementHandle *pFVar13;
  FTypedElementHandle *pFVar14;
  undefined1 local_res20 [8];
  FTypedElementHandle *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  FTypedElementSelectionSetElement local_a0;
  TObjectPtr<UClass>_u_0 local_70;
  undefined4 local_68;
  undefined1 uStack_64;
  ETypedElementChildInclusionMethod EStack_63;
  undefined2 uStack_62;
  FNameEntryId FStack_60;
  uint uStack_5c;
  FTypedElementSelectionOptions local_58;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_48 [2];
  
  bVar8 = 0;
  ResolveSelectionSetElement(this,&local_a0,param_1);
  if (((((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_ !=
         (FTypedElementInternalData *)0x0) && (local_a0.ElementSelectionHandle._16_8_ != 0)) &&
      (local_a0.ElementList.Object != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     ((local_a0.SelectionCustomization != (FTypedElementSelectionCustomization *)0x0 &&
      (cVar7 = (**(code **)((longlong)*local_a0.SelectionCustomization + 0x18))
                         (local_a0.SelectionCustomization,&local_a0,param_2), cVar7 != '\0')))) {
    pcVar1 = *(code **)((longlong)*local_a0.SelectionCustomization + 0x28);
    pTVar11 = TSharedPtr<TTypedElementList<FTypedElementHandle>,1>::ToSharedRef
                        (&local_a0.ElementList,local_48);
    bVar8 = (*pcVar1)(local_a0.SelectionCustomization,&local_a0,pTVar11,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ElementList.SharedReferenceCount.ReferenceController);
  if ((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_ !=
      (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              ((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_,
               local_a0.ElementSelectionHandle._8_4_);
  }
  local_a0.ElementSelectionHandle._8_4_ = 0xffffffff;
  local_a0.ElementSelectionHandle._16_8_ = 0;
  local_a0.ElementSelectionHandle._0_8_ = 0;
  if (param_2->ChildElementInclusionMethod != None) {
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    pUVar12 = (UTypedElementRegistry *)
              FWeakObjectPtr::Get(&(((this->ElementList).Object)->Registry).WeakPtr);
    local_b8._0_8_ = (FTypedElementInternalData *)0x0;
    local_b8._8_4_ = -1;
    local_a8 = (longlong *)0x0;
    local_70.DebugPtr = UTypedElementHierarchyInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_70.DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar12,param_1,(TSubclassOf<UInterface> *)&local_70.ObjectPtr,
               (TTypedElement<void> *)local_b8);
    if ((FTypedElementInternalData *)local_b8._0_8_ != (FTypedElementInternalData *)0x0) {
      if (local_a8 != (longlong *)0x0) {
        local_68._0_1_ = param_2->bAllowHidden;
        local_68._1_1_ = param_2->bAllowGroups;
        local_68._2_1_ = param_2->bAllowLegacyNotifications;
        local_68._3_1_ = param_2->bWarnIfLocked;
        uVar2 = param_2->bAllowSubRootSelection;
        uVar3 = *(undefined2 *)&param_2->field_0x6;
        FStack_60.Value = (param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
        uStack_5c = (param_2->TEDSIntegrationSelectionSetName).Number;
        local_c8 = (FTypedElementHandle *)0x0;
        local_c0 = 0;
        EStack_63 = None;
        if (param_2->ChildElementInclusionMethod != Immediate) {
          EStack_63 = param_2->ChildElementInclusionMethod;
        }
        uStack_64 = uVar2;
        uStack_62 = uVar3;
        (**(code **)(*local_a8 + 0x28))(local_a8,local_b8,&local_c8,0);
        iVar6 = (int)local_c0;
        uVar4._4_1_ = (bool)uStack_64;
        uVar4._0_1_ = (bool)(undefined1)local_68;
        uVar4._1_1_ = (bool)local_68._1_1_;
        uVar4._2_1_ = (bool)local_68._2_1_;
        uVar4._3_1_ = (bool)local_68._3_1_;
        uVar4._5_1_ = EStack_63;
        uVar4._6_2_ = uStack_62;
        FVar5.Number = uStack_5c;
        FVar5.ComparisonIndex.Value = FStack_60.Value;
        pFVar14 = local_c8 + (int)local_c0;
        pFVar13 = local_c8;
        while( true ) {
          if ((int)local_c0 != iVar6) {
            `TCheckedPointerIterator<FTypedElementHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar13 == pFVar14) break;
          local_58._0_8_ = uVar4;
          local_58.TEDSIntegrationSelectionSetName = FVar5;
          bVar9 = DeselectElement(this,pFVar13,&local_58);
          bVar8 = bVar8 | bVar9;
          pFVar13 = pFVar13 + 1;
        }
        DestructItems<FTypedElementHandle,int>(local_c8,(int)local_c0);
        if (local_c8 != (FTypedElementHandle *)0x0) {
          FMemory::Free(local_c8);
        }
      }
      if ((FTypedElementInternalData *)local_b8._0_8_ != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_b8._0_8_,local_b8._8_4_);
      }
    }
  }
  return (bool)bVar8;
}

// DeselectElements @ 1445429f0

bool __thiscall
UTypedElementSelectionSet::DeselectElements
          (UTypedElementSelectionSet *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FTypedElementHandle *pFVar8;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FTypedElementSelectionOptions local_28;
  FLegacySyncScopedBatch local_18;
  
  TypedElementUtil::ConvertToNativeElementArray(&local_48,param_1);
  FVar6.Data = local_48.AllocatorInstance.Data;
  local_38._0_1_ = param_2->bAllowHidden;
  local_38._1_1_ = param_2->bAllowGroups;
  local_38._2_1_ = param_2->bAllowLegacyNotifications;
  local_38._3_1_ = param_2->bWarnIfLocked;
  uStack_34._0_1_ = param_2->bAllowSubRootSelection;
  uStack_34._1_1_ = param_2->ChildElementInclusionMethod;
  uStack_34._2_2_ = *(undefined2 *)&param_2->field_0x6;
  uStack_30 = (param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
  uStack_2c = (param_2->TEDSIntegrationSelectionSetName).Number;
  lVar7 = (longlong)local_48.ArrayNum;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar2 = local_38;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_18,(this->ElementList).Object,SUB41((uint)uVar2 >> 0x10,0));
  bVar3 = false;
  pFVar8 = (FTypedElementHandle *)(FVar6.Data + lVar7 * 0x10);
  for (; (FTypedElementHandle *)FVar6.Data != pFVar8; FVar6.Data = FVar6.Data + 0x10) {
    local_28.bAllowSubRootSelection = (bool)(char)uStack_34;
    local_28.ChildElementInclusionMethod = (char)((uint)uStack_34 >> 8);
    local_28._6_2_ = (short)((uint)uStack_34 >> 0x10);
    local_28.bAllowHidden = (bool)(char)local_38;
    local_28.bAllowGroups = (bool)(char)((uint)local_38 >> 8);
    local_28.bAllowLegacyNotifications = (bool)(char)((uint)local_38 >> 0x10);
    local_28.bWarnIfLocked = (bool)(char)((uint)local_38 >> 0x18);
    local_28.TEDSIntegrationSelectionSetName.Number = uStack_2c;
    local_28.TEDSIntegrationSelectionSetName.ComparisonIndex.Value = uStack_30;
    bVar5 = DeselectElement(this,(FTypedElementHandle *)FVar6.Data,&local_28);
    bVar3 = (bool)(bVar3 | bVar5);
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18)
  ;
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FTypedElementHandle *)local_48.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar3;
}

// DeselectElements @ 144542b30

bool __thiscall
UTypedElementSelectionSet::DeselectElements
          (UTypedElementSelectionSet *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FTypedElementHandle *pFVar9;
  FTypedElementHandle *pFVar10;
  FTypedElementSelectionOptions local_28;
  FLegacySyncScopedBatch local_18;
  
  uVar3 = param_2->bAllowLegacyNotifications;
  uVar4._0_1_ = param_2->bAllowHidden;
  uVar4._1_1_ = param_2->bAllowGroups;
  uVar4._2_1_ = param_2->bAllowLegacyNotifications;
  uVar4._3_1_ = param_2->bWarnIfLocked;
  uVar4._4_1_ = param_2->bAllowSubRootSelection;
  uVar4._5_1_ = param_2->ChildElementInclusionMethod;
  uVar4._6_2_ = *(undefined2 *)&param_2->field_0x6;
  FVar5 = param_2->TEDSIntegrationSelectionSetName;
  iVar1 = param_1->ArrayNum;
  pFVar9 = (FTypedElementHandle *)(param_1->AllocatorInstance).Data;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_18,(this->ElementList).Object,(bool)uVar3);
  bVar6 = false;
  pFVar10 = pFVar9 + iVar1;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 1) {
    local_28._0_8_ = uVar4;
    local_28.TEDSIntegrationSelectionSetName = FVar5;
    bVar8 = DeselectElement(this,pFVar9,&local_28);
    bVar6 = (bool)(bVar6 | bVar8);
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18)
  ;
  return bVar6;
}

// DeselectElements @ 144542c40

bool __thiscall
UTypedElementSelectionSet::DeselectElements
          (UTypedElementSelectionSet *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTypedElementHandle *pFVar4;
  FTypedElementHandle *pFVar5;
  bool bVar6;
  FTypedElementSelectionOptions local_28;
  FLegacySyncScopedBatch local_18;
  
  bVar6 = param_2->bAllowLegacyNotifications;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_18,(this->ElementList).Object,bVar6);
  pFVar4 = param_1->DataPtr;
  bVar6 = false;
  pFVar5 = pFVar4 + param_1->ArrayNum;
  for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 1) {
    local_28.bAllowHidden = param_2->bAllowHidden;
    local_28.bAllowGroups = param_2->bAllowGroups;
    local_28.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
    local_28.bWarnIfLocked = param_2->bWarnIfLocked;
    local_28.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
    local_28.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
    local_28._6_2_ = *(undefined2 *)&param_2->field_0x6;
    local_28.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
    bVar2 = DeselectElement(this,pFVar4,&local_28);
    bVar6 = (bool)(bVar6 | bVar2);
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18)
  ;
  return bVar6;
}

// DeselectElements @ 144542d30

bool __thiscall
UTypedElementSelectionSet::DeselectElements
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res10;
  code *local_58;
  UTypedElementSelectionSet **local_50;
  FLegacySyncScopedBatch local_48;
  UTypedElementSelectionSet *local_38;
  undefined1 *local_30;
  FTypedElementSelectionOptions *local_28;
  
  bVar1 = param_2->bAllowLegacyNotifications;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_48,(this->ElementList).Object,bVar1);
  local_30 = local_res8;
  local_50 = &local_38;
  local_res8[0] = 0;
  local_res10.DebugPtr = (UClass *)0x0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UTypedElementSelectionSet::DeselectElements'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
             ::Call;
  local_38 = this;
  local_28 = param_2;
  TTypedElementList<FTypedElementHandle>::ForEachElementHandle
            (param_1->Object,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_58,
             (TSubclassOf<UInterface> *)&local_res10.ObjectPtr);
  uVar4 = local_res8[0];
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_48)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar4;
}

// FOnChangeDynamic_DelegateWrapper @ 144543490

void __cdecl
UTypedElementSelectionSet::FOnChangeDynamic_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UTypedElementSelectionSet *param_2)

{
  UTypedElementSelectionSet *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnPreChangeDynamic_DelegateWrapper @ 1445434b0

void __cdecl
UTypedElementSelectionSet::FOnPreChangeDynamic_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UTypedElementSelectionSet *param_2)

{
  UTypedElementSelectionSet *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetCurrentSelectionState @ 1445441d0

FTypedElementSelectionSetState * __thiscall
UTypedElementSelectionSet::GetCurrentSelectionState
          (UTypedElementSelectionSet *this,FTypedElementSelectionSetState *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FTypedElementSelectionSetState *pFVar5;
  UTypedElementSelectionSet *local_res8;
  FTypedElementSelectionSetState *local_res10;
  code *local_28;
  FTypedElementSelectionSetState **local_20;
  
  piVar1 = &(__return_storage_ptr__->TransactedElements).ArrayMax;
  (__return_storage_ptr__->CreatedFromSelectionSet).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->TransactedElements).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TransactedElements).ArrayNum = 0;
  *piVar1 = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UTypedElementSelectionSet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTypedElementSelectionSetState *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar2 = (((this->ElementList).Object)->ElementHandles).ArrayNum;
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(__return_storage_ptr__->TransactedElements).AllocatorInstance,
                 (__return_storage_ptr__->TransactedElements).ArrayNum,piVar1);
    }
    if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTypedElementSelectionSetState *)(*pcVar3)();
        return pFVar5;
      }
    }
    local_20 = &local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTypedElementSelectionSet::GetCurrentSelectionState'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementSelectionInterface>_const_&>
               ::Call;
    local_res10 = __return_storage_ptr__;
    TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementSelectionInterface>
              ((this->ElementList).Object,
               (TFunctionRef<bool___cdecl(TTypedElement<ITypedElementSelectionInterface>_const_&)> *
               )&local_28);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetNormalizedElementList @ 144544460

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
UTypedElementSelectionSet::GetNormalizedElementList
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          FTypedElementSelectionNormalizationOptions *param_2)

{
  UTypedElementRegistry *pUVar1;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_28;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_18;
  
  pUVar1 = UTypedElementRegistry::GetInstance();
  TTypedElementList<FTypedElementHandle>::Private_CreateElementList(__return_storage_ptr__,pUVar1);
  local_28.Object = __return_storage_ptr__->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GetNormalizedElementList(this,&local_18,param_2,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetNormalizedElementList @ 144544500

void __thiscall
UTypedElementSelectionSet::GetNormalizedElementList
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          FTypedElementSelectionNormalizationOptions *param_2,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_3)

{
  code *local_48;
  UTypedElementSelectionSet **local_40;
  UTypedElementSelectionSet *local_38;
  TTypedElementList<FTypedElementHandle> *local_30;
  TReferenceControllerBase<1> *local_28;
  FTypedElementSelectionNormalizationOptions *local_20;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  TTypedElementList<FTypedElementHandle>::Reset(param_3->Object);
  local_28 = (param_1->SharedReferenceCount).ReferenceController;
  local_30 = param_1->Object;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_3->Object;
  local_10 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UTypedElementSelectionSet::GetNormalizedElementList'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementSelectionInterface>_const_&>
             ::Call;
  local_38 = this;
  local_20 = param_2;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementSelectionInterface>
            (local_30,(TFunctionRef<bool___cdecl(TTypedElement<ITypedElementSelectionInterface>_const_&)>
                       *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// GetNormalizedSelection @ 144544ce0

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
UTypedElementSelectionSet::GetNormalizedSelection
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          FTypedElementSelectionNormalizationOptions *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  TTypedElementList<FTypedElementHandle> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar7;
  UTypedElementRegistry *pUVar8;
  FTypedElementSelectionNormalizationOptions local_48;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_38;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  uVar1._0_1_ = param_1->bExpandGroups;
  uVar1._1_1_ = param_1->bFollowAttachment;
  uVar1._2_2_ = *(undefined2 *)&param_1->field_0x2;
  uVar1._4_4_ = (param_1->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
  uVar2 = (param_1->TEDSIntegrationSelectionSetName).Number;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar3 = (this->ElementList).SharedReferenceCount.ReferenceController;
  pTVar4 = (this->ElementList).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar4 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48._0_8_ = uVar1;
  local_48.TEDSIntegrationSelectionSetName.Number = uVar2;
  pUVar8 = UTypedElementRegistry::GetInstance();
  TTypedElementList<FTypedElementHandle>::Private_CreateElementList(__return_storage_ptr__,pUVar8);
  local_38.Object = __return_storage_ptr__->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar4;
  local_28.SharedReferenceCount.ReferenceController = pTVar3;
  GetNormalizedElementList(this,&local_28,&local_48,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetNormalizedSelection @ 144544e20

void __thiscall
UTypedElementSelectionSet::GetNormalizedSelection
          (UTypedElementSelectionSet *this,FTypedElementSelectionNormalizationOptions *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_28;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_18;
  
  local_28.Object = param_2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = (this->ElementList).SharedReferenceCount.ReferenceController;
  pTVar2 = (this->ElementList).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pTVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  GetNormalizedElementList(this,&local_18,param_1,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 144545dd0

UClass * __cdecl UTypedElementSelectionSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionSet",
               &Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionSet,0x8c0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementSelectionSet>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionSet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionSet.InnerSingleton;
}

// GetSelectionElement @ 144546470

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
UTypedElementSelectionSet::GetSelectionElement
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          ETypedElementSelectionMethod param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  FScriptTypedElementHandle FVar8;
  UTypedElementRegistry *this_01;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined7 in_register_00000081;
  ETypedElementSelectionMethod in_R9B;
  undefined4 uVar12;
  FTypedElementHandle local_48;
  FTypedElementHandle local_38;
  
  uVar12 = 0xffffffff;
  local_48.DataPtr = (FTypedElementInternalData *)0x0;
  local_48.ReferenceId = -1;
  if (((*(undefined8 **)CONCAT71(in_register_00000081,param_2) == (undefined8 *)0x0) ||
      (this_00 = (FTypedElementInternalData *)
                 **(undefined8 **)CONCAT71(in_register_00000081,param_2),
      this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_48.DataPtr = this_00,
     local_48.ReferenceId = FTypedElementInternalData::AddRef(this_00,true),
     local_48.DataPtr == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
    (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  }
  else {
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
      return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
    }
    this_01 = (UTypedElementRegistry *)
              FWeakObjectPtr::Get(&(((this->ElementList).Object)->Registry).WeakPtr);
    GetSelectionElement(this,&local_38,&local_48,in_R9B);
    UTypedElementRegistry::CreateScriptHandle(this_01,(FTypedElementId *)param_1);
    if (local_38.DataPtr != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef(local_38.DataPtr,local_38.ReferenceId);
    }
    local_38.DataPtr = (FTypedElementInternalData *)0x0;
    local_38.ReferenceId = -1;
  }
  iVar6 = local_48.ReferenceId;
  if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_48.ReferenceId;
    LOCK();
    (local_48.DataPtr)->RefCount = (local_48.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_48.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_48.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar10 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if (((*(uint *)(puVar9 + lVar2) & uVar10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
             iVar6;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar3) = uVar12;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      *(uint *)(puVar9 + lVar2) = *(uint *)(puVar9 + lVar2) & ~uVar10;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
}

// GetSelectionElement @ 144546700

FTypedElementHandle * __thiscall
UTypedElementSelectionSet::GetSelectionElement
          (UTypedElementSelectionSet *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,ETypedElementSelectionMethod param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FTypedElementHandle *pFVar4;
  FTypedElementInternalData *local_88;
  int local_80;
  TTypedElementList<FTypedElementHandle> *local_78;
  TReferenceControllerBase<1> *local_70;
  FTypedElementInternalData *local_58;
  int local_50;
  longlong local_48;
  TTypedElementList<FTypedElementHandle> *local_40;
  FSharedReferencer<1> local_38;
  FTypedElementSelectionCustomization *local_30;
  
  ResolveSelectionSetElement(this,(FTypedElementSelectionSetElement *)&local_58,param_1);
  FVar2.ReferenceController = local_38.ReferenceController;
  if ((((local_58 == (FTypedElementInternalData *)0x0) || (local_48 == 0)) ||
      (local_40 == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
     (local_30 == (FTypedElementSelectionCustomization *)0x0)) {
    __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
    __return_storage_ptr__->ReferenceId = -1;
  }
  else {
    pcVar1 = *(code **)((longlong)*local_30 + 0x38);
    if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_40 == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTypedElementHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_78 = local_40;
    local_70 = FVar2.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar1)(local_30,&local_88,&local_58,&local_78,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    __return_storage_ptr__->DataPtr = local_88;
    __return_storage_ptr__->ReferenceId = local_80;
    local_80 = -1;
    local_88 = (FTypedElementInternalData *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ReferenceController);
  if (local_58 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_58,local_50);
  }
  return __return_storage_ptr__;
}

// IsElementSelected @ 1445473d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::IsElementSelected
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          FTypedElementIsSelectedOptions *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  code *pcVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 local_98;
  uint local_90;
  FTypedElementHandle local_88;
  TTypedElementList<FTypedElementHandle> *local_78;
  TReferenceControllerBase<1> *local_70;
  FTypedElementSelectionSetElement local_68;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar16 = 0xffffffff;
  local_88.DataPtr = (FTypedElementInternalData *)0x0;
  local_88.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_88.DataPtr = this_00;
    local_88.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_88.DataPtr != (FTypedElementInternalData *)0x0) {
      local_98._0_1_ = param_2->bAllowIndirect;
      local_98._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_98._4_4_ = (param_2->TEDSIntegrationSelectionSetName).ComparisonIndex;
      local_90 = (param_2->TEDSIntegrationSelectionSetName).Number;
      ResolveSelectionSetElement(this,&local_68,&local_88);
      FVar8.ReferenceController = local_68.ElementList.SharedReferenceCount.ReferenceController;
      if (((((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_ ==
             (FTypedElementInternalData *)0x0) || (local_68.ElementSelectionHandle._16_8_ == 0)) ||
          (local_68.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
         (local_68.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0)) {
LAB_1445474e7:
        bVar9 = false;
      }
      else {
        pcVar4 = *(code **)((longlong)*local_68.SelectionCustomization + 8);
        if (local_68.ElementList.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_68.ElementList.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.ElementList.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_68.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
        local_78 = local_68.ElementList.Object;
        local_70 = FVar8.ReferenceController;
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar11 = (*pcVar4)(local_68.SelectionCustomization,&local_68,&local_78,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        if (cVar11 == '\0') goto LAB_1445474e7;
        bVar9 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.ElementList.SharedReferenceCount.ReferenceController);
      if ((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_ !=
          (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_68.ElementSelectionHandle._0_8_,
                   local_68.ElementSelectionHandle._8_4_);
      }
      local_68.ElementSelectionHandle._16_8_ = 0;
      local_68.ElementSelectionHandle._0_8_ = (FTypedElementInternalData *)0x0;
      local_68.ElementSelectionHandle._8_4_ = -1;
      goto LAB_14454752a;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  bVar9 = false;
LAB_14454752a:
  iVar7 = local_88.ReferenceId;
  if (local_88.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar14 = (longlong)local_88.ReferenceId;
    LOCK();
    (local_88.DataPtr)->RefCount = (local_88.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_88.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_88.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      puVar13 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      if ((*(uint *)(puVar13 + lVar2) & uVar15) == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar7;
      }
      *(undefined4 *)(lVar14 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar16 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar14 * 0x108 + 4 + lVar5) = uVar16;
      puVar13 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar13 = *(int *)puVar13 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      puVar13 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      *(uint *)(puVar13 + lVar2) = *(uint *)(puVar13 + lVar2) & ~uVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar9;
}

// IsElementSelected @ 1445476b0

bool __thiscall
UTypedElementSelectionSet::IsElementSelected
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1,
          FTypedElementIsSelectedOptions *param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *local_40;
  FTypedElementInternalData *local_38;
  int local_30;
  longlong local_28;
  TTypedElementList<FTypedElementHandle> *local_20;
  FSharedReferencer<1> local_18;
  FTypedElementSelectionCustomization *local_10;
  
  ResolveSelectionSetElement(this,(FTypedElementSelectionSetElement *)&local_38,param_1);
  FVar2.ReferenceController = local_18.ReferenceController;
  if ((((local_38 != (FTypedElementInternalData *)0x0) && (local_28 != 0)) &&
      (local_20 != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     (local_10 != (FTypedElementSelectionCustomization *)0x0)) {
    pcVar1 = *(code **)((longlong)*local_10 + 8);
    if (local_18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_18.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_20 == (TTypedElementList<FTypedElementHandle> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_48 = local_20;
    local_40 = FVar2.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar5 = (*pcVar1)(local_10,&local_38,&local_48,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (cVar5 != '\0') {
      bVar3 = true;
      goto LAB_14454779b;
    }
  }
  bVar3 = false;
LAB_14454779b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  if (local_38 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_38,local_30);
  }
  return bVar3;
}

// K2_GetSelectedElementHandles @ 144547840

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementSelectionSet::K2_GetSelectedElementHandles
          (UTypedElementSelectionSet *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UInterface> param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  UTypedElementRegistry *pUVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  TTypedElementList<FTypedElementHandle>::GetElementHandles
            ((this->ElementList).Object,&local_18,(TSubclassOf<UInterface> *)&local_res8.ObjectPtr);
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pUVar4 = (UTypedElementRegistry *)
           FWeakObjectPtr::Get(&(((this->ElementList).Object)->Registry).WeakPtr);
  TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,&local_18,pUVar4);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FTypedElementHandle *)local_18.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnElementListChanged @ 144547940

void __thiscall
UTypedElementSelectionSet::OnElementListChanged
          (UTypedElementSelectionSet *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UTypedElementSelectionSet *local_res8 [4];
  
  if (param_1 != (this->ElementList).Object) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InElementList == ElementList.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(UTypedElementSelectionSet_const_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(UTypedElementSelectionSet_const_*),FDefaultDelegateUserPolicy>
             *)&this->OnChangedDelegate,this);
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectionChange,
             local_res8);
  return;
}

// OnElementListPreChange @ 1445479b0

void __thiscall
UTypedElementSelectionSet::OnElementListPreChange
          (UTypedElementSelectionSet *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UTypedElementSelectionSet *local_res8 [4];
  
  if (param_1 != (this->ElementList).Object) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InElementList == ElementList.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                       ,0x23c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(UTypedElementSelectionSet_const_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(UTypedElementSelectionSet_const_*),FDefaultDelegateUserPolicy>
             *)&this->OnPreChangeDelegate,this);
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPreSelectionChange,
             local_res8);
  return;
}

// OnElementReplaced @ 144547a20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UTypedElementSelectionSet::OnElementReplaced
          (UTypedElementSelectionSet *this,
          TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int> *param_1)

{
  code *pcVar1;
  FTypedElementSelectionCustomization *pFVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar6;
  FTypedElementId *pFVar7;
  TTuple<FTypedElementHandle,FTypedElementHandle> *pTVar8;
  TTuple<FTypedElementHandle,FTypedElementHandle> *pTVar9;
  FScopedClearNewPendingChange local_res8;
  FTypedElementSelectionOptions local_98;
  FTypedElementSelectionOptions local_88;
  FLegacySyncScopedBatch local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_68;
  FTypedElementSelectionSetElement local_58;
  
  local_98.bAllowHidden = true;
  local_98.bAllowGroups = false;
  local_98.bAllowLegacyNotifications = false;
  local_98.bWarnIfLocked = false;
  local_98.bAllowSubRootSelection = false;
  local_98.ChildElementInclusionMethod = None;
  local_98._6_2_ = 0;
  local_98.TEDSIntegrationSelectionSetName.ComparisonIndex.Value = 0;
  local_98.TEDSIntegrationSelectionSetName.Number = 0;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TTypedElementList<FTypedElementHandle>::GetScopedClearNewPendingChange((this->ElementList).Object)
  ;
  bVar3 = local_98.bAllowLegacyNotifications;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_78,(this->ElementList).Object,bVar3);
  pTVar8 = param_1->DataPtr;
  pTVar9 = pTVar8 + param_1->ArrayNum;
  for (; pTVar8 != pTVar9; pTVar8 = pTVar8 + 1) {
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((this->ElementList).Object)->ElementHandles).ArrayNum == 0) break;
    ResolveSelectionSetElement(this,&local_58,(FTypedElementHandle *)pTVar8);
    if (((((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ ==
           (FTypedElementInternalData *)0x0) || (local_58.ElementSelectionHandle._16_8_ == 0)) ||
        (local_58.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
       ((local_58.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0 ||
        (cVar5 = (**(code **)((longlong)*local_58.SelectionCustomization + 0x18))
                           (local_58.SelectionCustomization,&local_58,&local_98),
        pFVar2 = local_58.SelectionCustomization, cVar5 == '\0')))) {
      if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = &(*(FTypedElementInternalData **)&pTVar8->field_0x0)->Id;
      if (*(FTypedElementInternalData **)&pTVar8->field_0x0 == (FTypedElementInternalData *)0x0) {
        pFVar7 = &FTypedElementId::Unset;
      }
      cVar5 = TTypedElementList<FTypedElementHandle>::RemoveElementImpl
                        ((this->ElementList).Object,pFVar7);
    }
    else {
      pcVar1 = *(code **)((longlong)*local_58.SelectionCustomization + 0x28);
      pTVar6 = TSharedPtr<TTypedElementList<FTypedElementHandle>,1>::ToSharedRef
                         (&local_58.ElementList,&local_68);
      cVar5 = (*pcVar1)(pFVar2,&local_58,pTVar6,&local_98);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.ElementList.SharedReferenceCount.ReferenceController);
    if ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ !=
        (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef
                ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_,
                 local_58.ElementSelectionHandle._8_4_);
    }
    local_58.ElementSelectionHandle._16_8_ = 0;
    local_58.ElementSelectionHandle._0_8_ = (FTypedElementInternalData *)0x0;
    local_58.ElementSelectionHandle._8_4_ = -1;
    if ((cVar5 != '\0') && (*(longlong *)&pTVar8->field_0x10 != 0)) {
      local_88.bAllowHidden = local_98.bAllowHidden;
      local_88.bAllowGroups = local_98.bAllowGroups;
      local_88.bAllowLegacyNotifications = local_98.bAllowLegacyNotifications;
      local_88.bWarnIfLocked = local_98.bWarnIfLocked;
      local_88.bAllowSubRootSelection = local_98.bAllowSubRootSelection;
      local_88.ChildElementInclusionMethod = local_98.ChildElementInclusionMethod;
      local_88._6_2_ = local_98._6_2_;
      local_88.TEDSIntegrationSelectionSetName = local_98.TEDSIntegrationSelectionSetName;
      SelectElement(this,(FTypedElementHandle *)&pTVar8->field_0x10,&local_88);
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_78)
  ;
  TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::
  ~FScopedClearNewPendingChange(&local_res8);
  return;
}

// OnElementUpdated @ 144547ca0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UTypedElementSelectionSet::OnElementUpdated
          (UTypedElementSelectionSet *this,TArrayView<FTypedElementHandle_const_,int> *param_1)

{
  TTypedElementList<FTypedElementHandle> *pTVar1;
  code *pcVar2;
  FTypedElementSelectionCustomization *pFVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar7;
  FTypedElementId *pFVar8;
  FTypedElementHandle *pFVar9;
  FTypedElementHandle *pFVar10;
  FScopedClearNewPendingChange local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  FLegacySyncScopedBatch local_88;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_68;
  FTypedElementSelectionSetElement local_58;
  
  local_98 = 1;
  uStack_90 = 0;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (this->ElementList).Object;
  if ((pTVar1->ElementHandles).ArrayNum != 0) {
    if ((pTVar1 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TTypedElementList<FTypedElementHandle>::GetScopedClearNewPendingChange
              ((this->ElementList).Object);
    bVar4 = local_98._2_1_;
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
              (&local_88,(this->ElementList).Object,bVar4);
    pFVar9 = param_1->DataPtr;
    pFVar10 = pFVar9 + param_1->ArrayNum;
    for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 1) {
      ResolveSelectionSetElement(this,&local_58,pFVar9);
      if (((((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ ==
             (FTypedElementInternalData *)0x0) || (local_58.ElementSelectionHandle._16_8_ == 0)) ||
          (local_58.ElementList.Object == (TTypedElementList<FTypedElementHandle> *)0x0)) ||
         ((local_58.SelectionCustomization == (FTypedElementSelectionCustomization *)0x0 ||
          (cVar6 = (**(code **)((longlong)*local_58.SelectionCustomization + 0x18))
                             (local_58.SelectionCustomization,&local_58,&local_98),
          pFVar3 = local_58.SelectionCustomization, cVar6 == '\0')))) {
        if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = &pFVar9->DataPtr->Id;
        if (pFVar9->DataPtr == (FTypedElementInternalData *)0x0) {
          pFVar8 = &FTypedElementId::Unset;
        }
        cVar6 = TTypedElementList<FTypedElementHandle>::RemoveElementImpl
                          ((this->ElementList).Object,pFVar8);
      }
      else {
        pcVar2 = *(code **)((longlong)*local_58.SelectionCustomization + 0x28);
        pTVar7 = TSharedPtr<TTypedElementList<FTypedElementHandle>,1>::ToSharedRef
                           (&local_58.ElementList,&local_78);
        cVar6 = (*pcVar2)(pFVar3,&local_58,pTVar7,&local_98);
      }
      if ((cVar6 != '\0') &&
         (cVar6 = (**(code **)((longlong)*local_58.SelectionCustomization + 0x10))
                            (local_58.SelectionCustomization,&local_58,&local_98),
         pFVar3 = local_58.SelectionCustomization, cVar6 != '\0')) {
        pcVar2 = *(code **)((longlong)*local_58.SelectionCustomization + 0x20);
        pTVar7 = TSharedPtr<TTypedElementList<FTypedElementHandle>,1>::ToSharedRef
                           (&local_58.ElementList,&local_68);
        (*pcVar2)(pFVar3,&local_58,pTVar7,&local_98);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ElementList.SharedReferenceCount.ReferenceController);
      if ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_ !=
          (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_58.ElementSelectionHandle._0_8_,
                   local_58.ElementSelectionHandle._8_4_);
      }
    }
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
              (&local_88);
    TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::
    ~FScopedClearNewPendingChange(&local_res8);
  }
  return;
}

// ResolveSelectionSetElement @ 144548110

/* WARNING: Removing unreachable block (ram,0x000144548283) */
/* WARNING: Removing unreachable block (ram,0x000144548246) */
/* WARNING: Removing unreachable block (ram,0x000144548257) */
/* WARNING: Removing unreachable block (ram,0x00014454825f) */
/* WARNING: Removing unreachable block (ram,0x000144548289) */
/* WARNING: Removing unreachable block (ram,0x0001445482ae) */
/* WARNING: Removing unreachable block (ram,0x0001445482af) */
/* WARNING: Removing unreachable block (ram,0x0001445482b9) */
/* WARNING: Removing unreachable block (ram,0x0001445482bd) */
/* WARNING: Removing unreachable block (ram,0x0001445482d1) */
/* WARNING: Removing unreachable block (ram,0x0001445482f6) */
/* WARNING: Removing unreachable block (ram,0x0001445482f7) */
/* WARNING: Removing unreachable block (ram,0x000144548301) */
/* WARNING: Removing unreachable block (ram,0x00014454830f) */
/* WARNING: Removing unreachable block (ram,0x000144548327) */
/* WARNING: Removing unreachable block (ram,0x000144548322) */
/* WARNING: Removing unreachable block (ram,0x000144548329) */
/* WARNING: Removing unreachable block (ram,0x000144548337) */
/* WARNING: Removing unreachable block (ram,0x00014454833d) */
/* WARNING: Removing unreachable block (ram,0x000144548362) */
/* WARNING: Removing unreachable block (ram,0x000144548363) */
/* WARNING: Removing unreachable block (ram,0x000144548370) */
/* WARNING: Removing unreachable block (ram,0x000144548374) */

FTypedElementSelectionSetElement * __thiscall
UTypedElementSelectionSet::ResolveSelectionSetElement
          (UTypedElementSelectionSet *this,FTypedElementSelectionSetElement *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  FTypedElementSelectionSetElement *pFVar10;
  UTypedElementRegistry *pUVar11;
  FTypedElementInternalData *pFVar12;
  FTypedElementInternalData **ppFVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  TObjectPtr<UClass>_u_0 local_res20;
  FTypedElementInternalData *local_b8;
  int local_b0;
  undefined8 local_a8;
  FTypedElementInternalData *local_a0;
  int local_98;
  undefined8 local_90;
  TTypedElementList<FTypedElementHandle> *local_88;
  TReferenceControllerBase<1> *local_80;
  longlong local_78;
  FTypedElementInternalData *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 uStack_48;
  
  pFVar12 = (FTypedElementInternalData *)0x0;
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    bVar7 = false;
    local_64 = 0;
    local_68 = -1;
    ppFVar13 = &local_70;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (TReferenceControllerBase<1> *)0x0;
    uStack_48 = 0;
    bVar9 = true;
  }
  else {
    lVar15 = (&this->_padding_)[(param_1->DataPtr->Id).field0_0x0._s_0.TypeId];
    if (lVar15 == 0) {
      lVar15 = this->_padding_;
    }
    pTVar1 = (this->ElementList).SharedReferenceCount.ReferenceController;
    pTVar2 = (this->ElementList).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FTypedElementSelectionSetElement *)(*pcVar5)();
      return pFVar10;
    }
    pUVar11 = (UTypedElementRegistry *)
              FWeakObjectPtr::Get(&(((this->ElementList).Object)->Registry).WeakPtr);
    local_b0 = -1;
    local_b8 = (FTypedElementInternalData *)0x0;
    local_a8 = 0;
    local_res20.DebugPtr = UTypedElementSelectionInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar11,param_1,(TSubclassOf<UInterface> *)&local_res20.ObjectPtr,
               (TTypedElement<void> *)&local_b8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_90 = local_a8;
    local_98 = local_b0;
    local_a0 = local_b8;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    local_b8 = (FTypedElementInternalData *)0x0;
    local_88 = pTVar2;
    local_80 = pTVar1;
    local_78 = lVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    ppFVar13 = &local_a0;
    bVar9 = false;
    bVar7 = true;
    pFVar12 = local_a0;
  }
  uVar14 = 0xffffffff;
  *(FTypedElementInternalData **)&__return_storage_ptr__->ElementSelectionHandle = pFVar12;
  *(undefined4 *)&(__return_storage_ptr__->ElementSelectionHandle).field_0x8 =
       *(undefined4 *)(ppFVar13 + 1);
  *(FTypedElementInternalData **)&(__return_storage_ptr__->ElementSelectionHandle).field_0x10 =
       ppFVar13[2];
  (__return_storage_ptr__->ElementList).Object =
       (TTypedElementList<FTypedElementHandle> *)ppFVar13[3];
  (__return_storage_ptr__->ElementList).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)ppFVar13[4];
  *ppFVar13 = (FTypedElementInternalData *)0x0;
  *(undefined4 *)(ppFVar13 + 1) = 0xffffffff;
  ppFVar13[2] = (FTypedElementInternalData *)0x0;
  ppFVar13[4] = (FTypedElementInternalData *)0x0;
  ppFVar13[3] = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->SelectionCustomization =
       (FTypedElementSelectionCustomization *)ppFVar13[5];
  if ((bVar9) &&
     (SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50),
     iVar8 = local_68, local_70 != (FTypedElementInternalData *)0x0)) {
    LOCK();
    local_70->RefCount = local_70->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_70->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) &&
       (lVar15 = (longlong)local_68, local_68 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&(lpCriticalSection->References).field_0x0;
      bVar6 = (byte)iVar8 & 0x1f;
      uVar17 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      puVar18 = &(lpCriticalSection->References).field_0x10;
      if (((iVar8 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FTypedElementSelectionSetElement *)(*pcVar5)();
        return pFVar10;
      }
      puVar4 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      puVar16 = puVar18;
      if (puVar4 != (undefined1 *)0x0) {
        puVar16 = puVar4;
      }
      if (((*(uint *)(puVar16 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
           uVar17) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FTypedElementSelectionSetElement *)(*pcVar5)();
        return pFVar10;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
             iVar8;
      }
      *(undefined4 *)(lVar15 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar14 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar15 * 0x108 + 4 + lVar3) = uVar14;
      puVar4 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FTypedElementSelectionSetElement *)(*pcVar5)();
        return pFVar10;
      }
      puVar4 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar18 = puVar4;
      }
      *(uint *)(puVar18 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) =
           *(uint *)(puVar18 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4) &
           ~uVar17;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  if ((bVar7) &&
     (SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80),
     local_a0 != (FTypedElementInternalData *)0x0)) {
    FTypedElementInternalData::ReleaseRef(local_a0,local_98);
  }
  return __return_storage_ptr__;
}

// RestoreSelectionState @ 1445485d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTypedElementSelectionSet::RestoreSelectionState
          (UTypedElementSelectionSet *this,FTypedElementSelectionSetState *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  ForElementType<FTypedElementHandle> FVar16;
  FTypedElementHandle *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_1128 [32];
  undefined1 local_10d8 [8];
  FTypedElementHandle local_10d0;
  undefined8 local_10c0;
  FName FStack_10b8;
  ForElementType<FTypedElementHandle> local_10a8;
  int iStack_10a0;
  undefined4 uStack_109c;
  FTypedElementSelectionOptions local_1098;
  FTypedElementSelectionOptions local_1088;
  TArrayView<FTypedElementHandle_const_,int> local_1078;
  FLegacySyncScopedBatch local_1068;
  ForElementType<FTypedElementHandle> local_1058;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1128;
  bVar14 = TWeakObjectPtr<UTypedElementSelectionSet_const_,FWeakObjectPtr>::
           UEOpEquals<UTypedElementSelectionSet,bool>(&param_1->CreatedFromSelectionSet,this);
  if (bVar14) {
    uVar2 = (param_1->TransactedElements).ArrayNum;
    local_1058.SecondaryData = (ForElementType<FTypedElementHandle>)0x0;
    local_50 = 0;
    local_4c = 0x100;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0x100 < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
                (0x10,8,uVar2,&local_1058,0,&local_4c);
    }
    pFVar18 = (param_1->TransactedElements).AllocatorInstance.Data;
    iVar3 = (param_1->TransactedElements).ArrayNum;
    pFVar1 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->TransactedElements).ArrayNum != iVar3) {
        local_10d8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_10d8);
      }
      iVar13 = local_50;
      if (pFVar18 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar18 + 0x10))(*(longlong **)pFVar18,&local_10d0);
      if (local_10d0.DataPtr != (FTypedElementInternalData *)0x0) {
        FVar16 = (ForElementType<FTypedElementHandle>)&local_1058;
        if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
          FVar16 = local_1058.SecondaryData;
        }
        if ((ulonglong)FVar16 <= &local_10d0) {
          FVar16 = (ForElementType<FTypedElementHandle>)&local_1058;
          if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
            FVar16 = local_1058.SecondaryData;
          }
          if ((&local_10d0 < (FTypedElementHandle *)((longlong)local_4c * 0x10 + (longlong)FVar16))
             && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
                               (0x810,&local_1058,&local_4c);
        }
        FVar16 = (ForElementType<FTypedElementHandle>)&local_1058;
        if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
          FVar16 = local_1058.SecondaryData;
        }
        pFVar17 = (FTypedElementHandle *)((longlong)FVar16 + (longlong)local_50 * 0x10);
        pFVar17->DataPtr = local_10d0.DataPtr;
        pFVar17->ReferenceId = local_10d0.ReferenceId;
        local_50 = local_50 + 1;
      }
      local_10d0.DataPtr = (FTypedElementInternalData *)0x0;
      pFVar18 = pFVar18 + 8;
      local_10d0.ReferenceId = -1;
    }
    bVar14 = this->bIsRestoringState;
    this->bIsRestoringState = true;
    FStack_10b8 = this->ListNameForTedsIntegration;
    local_10c0 = 1;
    uVar5 = (undefined1)FStack_10b8.ComparisonIndex.Value;
    uVar6 = FStack_10b8.ComparisonIndex.Value._1_1_;
    uVar7 = FStack_10b8.ComparisonIndex.Value._2_1_;
    uVar8 = FStack_10b8.ComparisonIndex.Value._3_1_;
    uVar9 = (undefined1)FStack_10b8.Number;
    uVar10 = FStack_10b8.Number._1_1_;
    uVar11 = FStack_10b8.Number._2_1_;
    uVar12 = FStack_10b8.Number._3_1_;
    local_10a8 = (ForElementType<FTypedElementHandle>)&local_1058;
    if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
      local_10a8 = local_1058.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_10a0 = iVar13;
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
              (&local_1068,(this->ElementList).Object,false);
    local_1098.bAllowHidden = true;
    local_1098.bAllowGroups = false;
    local_1098.bAllowLegacyNotifications = false;
    local_1098.bWarnIfLocked = false;
    local_1098.bAllowSubRootSelection = false;
    local_1098.ChildElementInclusionMethod = None;
    local_1098._6_1_ = 0;
    local_1098._7_1_ = 0;
    local_1098.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar5;
    local_1098.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar6;
    local_1098.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar7;
    local_1098.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar8;
    local_1098.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar9;
    local_1098.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar10;
    local_1098.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar11;
    local_1098.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar12;
    ClearSelection(this,&local_1098);
    local_1078._12_4_ = uStack_109c;
    local_1078.ArrayNum = iStack_10a0;
    local_1078.DataPtr = (FTypedElementHandle *)local_10a8;
    local_1088.bAllowHidden = true;
    local_1088.bAllowGroups = false;
    local_1088.bAllowLegacyNotifications = false;
    local_1088.bWarnIfLocked = false;
    local_1088.bAllowSubRootSelection = false;
    local_1088.ChildElementInclusionMethod = None;
    local_1088._6_1_ = 0;
    local_1088._7_1_ = 0;
    local_1088.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar5;
    local_1088.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar6;
    local_1088.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar7;
    local_1088.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar8;
    local_1088.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar9;
    local_1088.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar10;
    local_1088.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar11;
    local_1088.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar12;
    SelectElements(this,&local_1078,&local_1088);
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
              (&local_1068);
    this->bIsRestoringState = bVar14;
    FVar16 = (ForElementType<FTypedElementHandle>)&local_1058;
    if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
      FVar16 = local_1058.SecondaryData;
    }
    DestructItems<FTypedElementHandle,int>((FTypedElementHandle *)FVar16,local_50);
    if (local_1058.SecondaryData != (ForElementType<FTypedElementHandle>)0x0) {
      FMemory::Free((void *)local_1058.SecondaryData);
    }
  }
  return;
}

// SelectElement @ 144548e40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementSelectionSet::SelectElement
          (UTypedElementSelectionSet *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  FTypedElementHandle local_48;
  FTypedElementSelectionOptions local_38;
  
  bVar8 = false;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar13 = 0xffffffff;
  local_48.DataPtr = (FTypedElementInternalData *)0x0;
  local_48.ReferenceId = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_48.DataPtr = this_00;
    local_48.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
    if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
      local_38.bAllowHidden = param_2->bAllowHidden;
      local_38.bAllowGroups = param_2->bAllowGroups;
      local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
      local_38.bWarnIfLocked = param_2->bWarnIfLocked;
      local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
      local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
      local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
      local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
      bVar8 = SelectElement(this,&local_48,&local_38);
      goto LAB_144548ebe;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144548ebe:
  iVar7 = local_48.ReferenceId;
  if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_48.ReferenceId;
    LOCK();
    (local_48.DataPtr)->RefCount = (local_48.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_48.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_48.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if ((*(uint *)(puVar11 + lVar2) & uVar14) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar13 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar4) = uVar13;
      puVar11 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      puVar11 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar8;
}

// SelectElement @ 144549050

bool __thiscall
UTypedElementSelectionSet::SelectElement
          (UTypedElementSelectionSet *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  FName FVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar11;
  UTypedElementRegistry *pUVar12;
  FTypedElementHandle *pFVar13;
  FTypedElementHandle *pFVar14;
  undefined1 local_res20 [8];
  FTypedElementHandle *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  FTypedElementSelectionSetElement local_a0;
  TObjectPtr<UClass>_u_0 local_70;
  undefined4 local_68;
  undefined1 uStack_64;
  ETypedElementChildInclusionMethod EStack_63;
  undefined2 uStack_62;
  FNameEntryId FStack_60;
  uint uStack_5c;
  FTypedElementSelectionOptions local_58;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_48 [2];
  
  bVar8 = 0;
  ResolveSelectionSetElement(this,&local_a0,param_1);
  if (((((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_ !=
         (FTypedElementInternalData *)0x0) && (local_a0.ElementSelectionHandle._16_8_ != 0)) &&
      (local_a0.ElementList.Object != (TTypedElementList<FTypedElementHandle> *)0x0)) &&
     ((local_a0.SelectionCustomization != (FTypedElementSelectionCustomization *)0x0 &&
      (cVar7 = (**(code **)((longlong)*local_a0.SelectionCustomization + 0x10))
                         (local_a0.SelectionCustomization,&local_a0,param_2), cVar7 != '\0')))) {
    pcVar1 = *(code **)((longlong)*local_a0.SelectionCustomization + 0x20);
    pTVar11 = TSharedPtr<TTypedElementList<FTypedElementHandle>,1>::ToSharedRef
                        (&local_a0.ElementList,local_48);
    bVar8 = (*pcVar1)(local_a0.SelectionCustomization,&local_a0,pTVar11,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ElementList.SharedReferenceCount.ReferenceController);
  if ((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_ !=
      (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              ((FTypedElementInternalData *)local_a0.ElementSelectionHandle._0_8_,
               local_a0.ElementSelectionHandle._8_4_);
  }
  local_a0.ElementSelectionHandle._8_4_ = 0xffffffff;
  local_a0.ElementSelectionHandle._16_8_ = 0;
  local_a0.ElementSelectionHandle._0_8_ = 0;
  if (param_2->ChildElementInclusionMethod != None) {
    if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    pUVar12 = (UTypedElementRegistry *)
              FWeakObjectPtr::Get(&(((this->ElementList).Object)->Registry).WeakPtr);
    local_b8._0_8_ = (FTypedElementInternalData *)0x0;
    local_b8._8_4_ = -1;
    local_a8 = (longlong *)0x0;
    local_70.DebugPtr = UTypedElementHierarchyInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_70.DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar12,param_1,(TSubclassOf<UInterface> *)&local_70.ObjectPtr,
               (TTypedElement<void> *)local_b8);
    if ((FTypedElementInternalData *)local_b8._0_8_ != (FTypedElementInternalData *)0x0) {
      if (local_a8 != (longlong *)0x0) {
        local_68._0_1_ = param_2->bAllowHidden;
        local_68._1_1_ = param_2->bAllowGroups;
        local_68._2_1_ = param_2->bAllowLegacyNotifications;
        local_68._3_1_ = param_2->bWarnIfLocked;
        uVar2 = param_2->bAllowSubRootSelection;
        uVar3 = *(undefined2 *)&param_2->field_0x6;
        FStack_60.Value = (param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
        uStack_5c = (param_2->TEDSIntegrationSelectionSetName).Number;
        local_c8 = (FTypedElementHandle *)0x0;
        local_c0 = 0;
        EStack_63 = None;
        if (param_2->ChildElementInclusionMethod != Immediate) {
          EStack_63 = param_2->ChildElementInclusionMethod;
        }
        uStack_64 = uVar2;
        uStack_62 = uVar3;
        (**(code **)(*local_a8 + 0x28))(local_a8,local_b8,&local_c8,1);
        iVar6 = (int)local_c0;
        uVar4._4_1_ = (bool)uStack_64;
        uVar4._0_1_ = (bool)(undefined1)local_68;
        uVar4._1_1_ = (bool)local_68._1_1_;
        uVar4._2_1_ = (bool)local_68._2_1_;
        uVar4._3_1_ = (bool)local_68._3_1_;
        uVar4._5_1_ = EStack_63;
        uVar4._6_2_ = uStack_62;
        FVar5.Number = uStack_5c;
        FVar5.ComparisonIndex.Value = FStack_60.Value;
        pFVar14 = local_c8 + (int)local_c0;
        pFVar13 = local_c8;
        while( true ) {
          if ((int)local_c0 != iVar6) {
            `TCheckedPointerIterator<FTypedElementHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar13 == pFVar14) break;
          local_58._0_8_ = uVar4;
          local_58.TEDSIntegrationSelectionSetName = FVar5;
          bVar9 = SelectElement(this,pFVar13,&local_58);
          bVar8 = bVar8 | bVar9;
          pFVar13 = pFVar13 + 1;
        }
        DestructItems<FTypedElementHandle,int>(local_c8,(int)local_c0);
        if (local_c8 != (FTypedElementHandle *)0x0) {
          FMemory::Free(local_c8);
        }
      }
      if ((FTypedElementInternalData *)local_b8._0_8_ != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_b8._0_8_,local_b8._8_4_);
      }
    }
  }
  return (bool)bVar8;
}

// SelectElements @ 144549290

bool __thiscall
UTypedElementSelectionSet::SelectElements
          (UTypedElementSelectionSet *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_58;
  FTypedElementHandle *local_48;
  int iStack_40;
  FTypedElementSelectionOptions local_38;
  TArrayView<FTypedElementHandle_const_,int> local_28 [2];
  
  TypedElementUtil::ConvertToNativeElementArray(&local_58,param_1);
  iStack_40 = local_58.ArrayNum;
  local_38.bAllowHidden = param_2->bAllowHidden;
  local_38.bAllowGroups = param_2->bAllowGroups;
  local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
  local_38.bWarnIfLocked = param_2->bWarnIfLocked;
  local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
  local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
  local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
  local_48 = (FTypedElementHandle *)local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28[0].DataPtr = local_48;
  bVar2 = SelectElements(this,local_28,&local_38);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FTypedElementHandle *)local_58.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar2;
}

// SelectElements @ 144549350

bool __thiscall
UTypedElementSelectionSet::SelectElements
          (UTypedElementSelectionSet *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  int iVar1;
  FTypedElementHandle *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uStack_3c;
  FTypedElementSelectionOptions local_38;
  TArrayView<FTypedElementHandle_const_,int> local_28 [2];
  
  pFVar2 = (FTypedElementHandle *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  uVar4._0_1_ = param_2->bAllowHidden;
  uVar4._1_1_ = param_2->bAllowGroups;
  uVar4._2_1_ = param_2->bAllowLegacyNotifications;
  uVar4._3_1_ = param_2->bWarnIfLocked;
  uVar4._4_1_ = param_2->bAllowSubRootSelection;
  uVar4._5_1_ = param_2->ChildElementInclusionMethod;
  uVar4._6_2_ = *(undefined2 *)&param_2->field_0x6;
  FVar5 = param_2->TEDSIntegrationSelectionSetName;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iVar1;
  local_38._0_8_ = uVar4;
  local_38.TEDSIntegrationSelectionSetName = FVar5;
  local_28[0].DataPtr = pFVar2;
  bVar6 = SelectElements(this,local_28,&local_38);
  return bVar6;
}

// SelectElements @ 1445493e0

bool __thiscall
UTypedElementSelectionSet::SelectElements
          (UTypedElementSelectionSet *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  int iVar1;
  TTypedElementList<FTypedElementHandle> *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTypedElementHandle *pFVar5;
  bool bVar6;
  FTypedElementHandle *pFVar7;
  FTypedElementSelectionOptions local_38;
  FLegacySyncScopedBatch local_28;
  
  bVar6 = param_2->bAllowLegacyNotifications;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_28,(this->ElementList).Object,bVar6);
  bVar6 = false;
  if (((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = (this->ElementList).Object;
  if ((this_00 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar1 = param_1->ArrayNum;
  TTypedElementList<FTypedElementHandle>::Reserve
            (this_00,(((this->ElementList).Object)->ElementHandles).ArrayNum + iVar1);
  pFVar7 = param_1->DataPtr;
  pFVar5 = pFVar7 + iVar1;
  for (; pFVar7 != pFVar5; pFVar7 = pFVar7 + 1) {
    local_38.bAllowHidden = param_2->bAllowHidden;
    local_38.bAllowGroups = param_2->bAllowGroups;
    local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
    local_38.bWarnIfLocked = param_2->bWarnIfLocked;
    local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
    local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
    local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
    local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
    bVar3 = SelectElement(this,pFVar7,&local_38);
    bVar6 = (bool)(bVar6 | bVar3);
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_28)
  ;
  return bVar6;
}

// SelectElements @ 144549540

bool __thiscall
UTypedElementSelectionSet::SelectElements
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  TTypedElementList<FTypedElementHandle> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res10;
  code *local_58;
  UTypedElementSelectionSet **local_50;
  FLegacySyncScopedBatch local_48;
  UTypedElementSelectionSet *local_38;
  undefined1 *local_30;
  FTypedElementSelectionOptions *local_28;
  
  bVar4 = param_2->bAllowLegacyNotifications;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_48,(this->ElementList).Object,bVar4);
  local_res8[0] = 0;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (this->ElementList).Object;
  if (this_00 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TTypedElementList<FTypedElementHandle>::Reserve
            (this_00,(param_1->Object->ElementHandles).ArrayNum +
                     (((this->ElementList).Object)->ElementHandles).ArrayNum);
  local_30 = local_res8;
  local_50 = &local_38;
  local_res10.DebugPtr = (UClass *)0x0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UTypedElementSelectionSet::SelectElements'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
             ::Call;
  local_38 = this;
  local_28 = param_2;
  TTypedElementList<FTypedElementHandle>::ForEachElementHandle
            (param_1->Object,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_58,
             (TSubclassOf<UInterface> *)&local_res10.ObjectPtr);
  uVar3 = local_res8[0];
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_48)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar3;
}

// Serialize @ 1445496b0

void __thiscall
UTypedElementSelectionSet::Serialize(UTypedElementSelectionSet *this,FArchive *param_1)

{
  TArray<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uchar uVar5;
  TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_> TVar6;
  bool bVar7;
  int iVar8;
  FTypedElementSelectionSetState *pFVar9;
  UTypedElementRegistry *this_00;
  UObject *this_01;
  UClass *pUVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_98 [2];
  TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
  local_90;
  UTypedElementSelectionSet *local_88;
  TObjectPtr<UClass>_u_0 local_80;
  FTypedElementSelectionSetState local_78;
  FTypedElementSelectionSetState local_60;
  longlong *plVar14;
  
  if ((((param_1->field_0x29 & 1) != 0) && ((this->_padding_ & 0x10) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsPersistent() || this->HasAnyFlags(RF_ClassDefaultObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                         ,0x74,
                         L"UTypedElementSelectionSet can only be serialized by transient archives!")
     , bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78.CreatedFromSelectionSet.WeakPtr.ObjectIndex = 0;
  local_78.CreatedFromSelectionSet.WeakPtr.ObjectSerialNumber = 0;
  local_78.TransactedElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.TransactedElements.ArrayNum = 0;
  local_78.TransactedElements.ArrayMax = 0;
  local_88 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_78,(FObjectPtr)&local_88);
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      this_00 = UTypedElementRegistry::GetInstance();
      plVar14 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = 0;
      if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar14;
        *plVar14 = *plVar14 + 4;
      }
      uVar13 = local_res20[0];
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if (local_78.TransactedElements.ArrayMax < (int)local_res20[0]) {
        DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
                  ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                    *)local_78.TransactedElements.AllocatorInstance.Data,
                   local_78.TransactedElements.ArrayNum);
        uVar4 = local_78.TransactedElements.ArrayMax;
        local_78.TransactedElements._8_8_ = local_78.TransactedElements._8_8_ & 0xffffffff00000000;
        if (uVar4 != uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,&local_78.TransactedElements.AllocatorInstance,0,
                     &local_78.TransactedElements.ArrayMax);
        }
      }
      else {
        DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
                  ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                    *)local_78.TransactedElements.AllocatorInstance.Data,
                   local_78.TransactedElements.ArrayNum);
        local_78.TransactedElements._8_8_ = local_78.TransactedElements._8_8_ & 0xffffffff00000000;
      }
      plVar14 = (longlong *)0x0;
      if (0 < (int)local_res20[0]) {
        do {
          plVar11 = *(longlong **)&param_1->field_0x8;
          local_res8[0] = '\0';
          if ((uchar *)plVar11[1] < (uchar *)*plVar11 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
          }
          else {
            local_res8[0] = *(uchar *)*plVar11;
            *plVar11 = *plVar11 + 1;
          }
          uVar5 = local_res8[0];
          local_80.DebugPtr = UTypedElementSelectionInterface::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_80.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_80.DebugPtr);
          }
          this_01 = UTypedElementRegistry::GetElementInterfaceImpl
                              (this_00,uVar5,(TSubclassOf<UInterface> *)&local_80.ObjectPtr);
          plVar11 = (longlong *)0x0;
          if (this_01 == (UObject *)0x0) {
LAB_1445499fe:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementTypeSelectionInterface",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                               ,0x9d,
                               L"Failed to find selection interface for a previously transacted element type!"
                              );
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pUVar10 = UTypedElementSelectionInterface::StaticClass();
            plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar10)
            ;
            if (plVar11 == (longlong *)0x0) goto LAB_1445499fe;
          }
          uVar5 = local_res8[0];
          (**(code **)(*plVar11 + 0x88))(plVar11,&local_90);
          if (((local_90.Ptr == (ITypedElementTransactedElement *)0x0) ||
              ((local_90.Ptr)->TypeId = uVar5, local_90.Ptr == (ITypedElementTransactedElement *)0x0
              )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TransactedElement",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                                        ,0xa0,
                                        L"Failed to allocate a transacted element for a previously transacted element type!"
                                       ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TVar6.Ptr = local_90.Ptr;
          if (((param_1->field_0x29 & 1) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!InArchive.IsPersistent()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Public\\Elements\\Interfaces\\TypedElementSelectionInterface.h"
                                 ,0x95,
                                 L"ITypedElementTransactedElement can only be serialized by transient archives!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)((TVar6.Ptr)->_padding_ + 0x20))(TVar6.Ptr,param_1);
          iVar8 = local_78.TransactedElements.ArrayNum;
          if (local_78.TransactedElements.ArrayNum == local_78.TransactedElements.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_78.TransactedElements.AllocatorInstance,
                               &local_78.TransactedElements.ArrayMax);
          }
          uVar13 = (int)plVar14 + 1;
          plVar14 = (longlong *)(ulonglong)uVar13;
          local_78.TransactedElements.ArrayNum = iVar8 + 1;
          *(ITypedElementTransactedElement **)
           (local_78.TransactedElements.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_90.Ptr
          ;
          local_90.Ptr = (ITypedElementTransactedElement *)0x0;
        } while ((int)uVar13 < (int)local_res20[0]);
      }
      if ((this->ElementList).Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
        RestoreSelectionState(this,&local_78);
      }
    }
  }
  else {
    if ((this->ElementList).Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      pFVar9 = GetCurrentSelectionState(this,&local_60);
      local_78.CreatedFromSelectionSet.WeakPtr = (pFVar9->CreatedFromSelectionSet).WeakPtr;
      pTVar1 = &pFVar9->TransactedElements;
      if (&local_78.TransactedElements != pTVar1) {
        DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
                  ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                    *)local_78.TransactedElements.AllocatorInstance.Data,
                   local_78.TransactedElements.ArrayNum);
        if (local_78.TransactedElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.TransactedElements.AllocatorInstance.Data);
        }
        local_78.TransactedElements.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_78.TransactedElements.ArrayNum = (pFVar9->TransactedElements).ArrayNum;
        local_78.TransactedElements.ArrayMax = (pFVar9->TransactedElements).ArrayMax;
        (pFVar9->TransactedElements).ArrayNum = 0;
        (pFVar9->TransactedElements).ArrayMax = 0;
      }
      DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
                ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
                  *)local_60.TransactedElements.AllocatorInstance.Data,
                 local_60.TransactedElements.ArrayNum);
      if (local_60.TransactedElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.TransactedElements.AllocatorInstance.Data);
      }
    }
    plVar14 = *(longlong **)&param_1->field_0x8;
    local_98[0] = local_78.TransactedElements.ArrayNum;
    if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_98);
      }
    }
    else {
      local_98[0] = *(uint *)*plVar14;
      *plVar14 = *plVar14 + 4;
    }
    iVar8 = local_78.TransactedElements.ArrayNum;
    pFVar2 = local_78.TransactedElements.AllocatorInstance.Data +
             (longlong)local_78.TransactedElements.ArrayNum * 8;
    FVar12.Data = local_78.TransactedElements.AllocatorInstance.Data;
    while( true ) {
      if (local_78.TransactedElements.ArrayNum != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar12.Data == pFVar2) break;
      local_res10[0] = *(uchar *)(*(longlong *)FVar12.Data + 8);
      plVar14 = *(longlong **)&param_1->field_0x8;
      if ((uchar *)plVar14[1] < (uchar *)*plVar14 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      }
      else {
        local_res10[0] = *(uchar *)*plVar14;
        *plVar14 = *plVar14 + 1;
      }
      plVar14 = *(longlong **)FVar12.Data;
      if (((param_1->field_0x29 & 1) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InArchive.IsPersistent()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Public\\Elements\\Interfaces\\TypedElementSelectionInterface.h"
                             ,0x95,
                             L"ITypedElementTransactedElement can only be serialized by transient archives!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar14 + 0x20))(plVar14,param_1);
      FVar12.Data = FVar12.Data + 8;
    }
  }
  DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
            ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
              *)local_78.TransactedElements.AllocatorInstance.Data,
             local_78.TransactedElements.ArrayNum);
  if (local_78.TransactedElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.TransactedElements.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 144549b60

void __thiscall
UTypedElementSelectionSet::Serialize
          (UTypedElementSelectionSet *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetNameForTedsIntegration @ 14454a000

void __thiscall
UTypedElementSelectionSet::SetNameForTedsIntegration(UTypedElementSelectionSet *this,FName param_1)

{
  this->ListNameForTedsIntegration = param_1;
  return;
}

// SetSelection @ 14454a010

bool __thiscall
UTypedElementSelectionSet::SetSelection
          (UTypedElementSelectionSet *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ETypedElementChildInclusionMethod EVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_78;
  FTypedElementHandle *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FTypedElementSelectionOptions local_58;
  FTypedElementSelectionOptions local_48;
  TArrayView<FTypedElementHandle_const_,int> local_38;
  FLegacySyncScopedBatch local_28 [2];
  
  TypedElementUtil::ConvertToNativeElementArray(&local_78,param_1);
  iStack_60 = local_78.ArrayNum;
  local_68 = (FTypedElementHandle *)local_78.AllocatorInstance.Data;
  bVar18 = param_2->bAllowHidden;
  bVar2 = param_2->bAllowGroups;
  bVar3 = param_2->bAllowLegacyNotifications;
  bVar4 = param_2->bWarnIfLocked;
  bVar5 = param_2->bAllowSubRootSelection;
  EVar6 = param_2->ChildElementInclusionMethod;
  uVar17 = param_2->field_0x6;
  uVar7 = param_2->field_0x7;
  uVar8 = (undefined1)(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
  uVar9 = *(undefined1 *)
           ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 1);
  uVar10 = *(undefined1 *)
            ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 2);
  uVar11 = *(undefined1 *)
            ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 3);
  uVar12 = (undefined1)(param_2->TEDSIntegrationSelectionSetName).Number;
  uVar13 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 1);
  uVar14 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 2);
  uVar15 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 3);
  if (local_78.ArrayNum < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      uVar17 = (*pcVar1)();
      return (bool)uVar17;
    }
  }
  uStack_5c = local_28[0]._12_4_;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      uVar17 = (*pcVar1)();
      return (bool)uVar17;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (local_28,(this->ElementList).Object,bVar3);
  local_58.bAllowHidden = bVar18;
  local_58.bAllowGroups = bVar2;
  local_58.bAllowLegacyNotifications = bVar3;
  local_58.bWarnIfLocked = bVar4;
  local_58.bAllowSubRootSelection = bVar5;
  local_58.ChildElementInclusionMethod = EVar6;
  local_58._6_1_ = uVar17;
  local_58._7_1_ = uVar7;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar8;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar9;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar10;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar11;
  local_58.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar12;
  local_58.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar13;
  local_58.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar14;
  local_58.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar15;
  bVar16 = ClearSelection(this,&local_58);
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iStack_60;
  local_38.DataPtr = local_68;
  local_48.bAllowHidden = bVar18;
  local_48.bAllowGroups = bVar2;
  local_48.bAllowLegacyNotifications = bVar3;
  local_48.bWarnIfLocked = bVar4;
  local_48.bAllowSubRootSelection = bVar5;
  local_48.ChildElementInclusionMethod = EVar6;
  local_48._6_1_ = uVar17;
  local_48._7_1_ = uVar7;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar8;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar9;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar10;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar11;
  local_48.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar12;
  local_48.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar13;
  local_48.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar14;
  local_48.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar15;
  bVar18 = SelectElements(this,&local_38,&local_48);
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(local_28);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FTypedElementHandle *)local_78.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar18 || bVar16;
}

// SetSelection @ 14454a160

bool __thiscall
UTypedElementSelectionSet::SetSelection
          (UTypedElementSelectionSet *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  int iVar1;
  FTypedElementHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ETypedElementChildInclusionMethod EVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  bool bVar18;
  undefined1 uVar19;
  bool bVar20;
  FTypedElementSelectionOptions local_58;
  FTypedElementSelectionOptions local_48;
  TArrayView<FTypedElementHandle_const_,int> local_38;
  FLegacySyncScopedBatch local_28 [2];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FTypedElementHandle *)(param_1->AllocatorInstance).Data;
  bVar20 = param_2->bAllowHidden;
  bVar4 = param_2->bAllowGroups;
  bVar5 = param_2->bAllowLegacyNotifications;
  bVar6 = param_2->bWarnIfLocked;
  bVar7 = param_2->bAllowSubRootSelection;
  EVar8 = param_2->ChildElementInclusionMethod;
  uVar19 = param_2->field_0x6;
  uVar9 = param_2->field_0x7;
  uVar10 = (undefined1)(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
  uVar11 = *(undefined1 *)
            ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 1);
  uVar12 = *(undefined1 *)
            ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 2);
  uVar13 = *(undefined1 *)
            ((longlong)&(param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value + 3);
  uVar14 = (undefined1)(param_2->TEDSIntegrationSelectionSetName).Number;
  uVar15 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 1);
  uVar16 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 2);
  uVar17 = *(undefined1 *)((longlong)&(param_2->TEDSIntegrationSelectionSetName).Number + 3);
  if (iVar1 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      uVar19 = (*pcVar3)();
      return (bool)uVar19;
    }
  }
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      uVar19 = (*pcVar3)();
      return (bool)uVar19;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (local_28,(this->ElementList).Object,bVar5);
  local_58.bAllowHidden = bVar20;
  local_58.bAllowGroups = bVar4;
  local_58.bAllowLegacyNotifications = bVar5;
  local_58.bWarnIfLocked = bVar6;
  local_58.bAllowSubRootSelection = bVar7;
  local_58.ChildElementInclusionMethod = EVar8;
  local_58._6_1_ = uVar19;
  local_58._7_1_ = uVar9;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar10;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar11;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar12;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar13;
  local_58.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar14;
  local_58.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar15;
  local_58.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar16;
  local_58.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar17;
  bVar18 = ClearSelection(this,&local_58);
  local_38._12_4_ = local_28[0]._12_4_;
  local_38.ArrayNum = iVar1;
  local_48.bAllowHidden = bVar20;
  local_48.bAllowGroups = bVar4;
  local_48.bAllowLegacyNotifications = bVar5;
  local_48.bWarnIfLocked = bVar6;
  local_48.bAllowSubRootSelection = bVar7;
  local_48.ChildElementInclusionMethod = EVar8;
  local_48._6_1_ = uVar19;
  local_48._7_1_ = uVar9;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar10;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar11;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar12;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar13;
  local_48.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar14;
  local_48.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar15;
  local_48.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar16;
  local_48.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar17;
  local_38.DataPtr = pFVar2;
  bVar20 = SelectElements(this,&local_38,&local_48);
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(local_28);
  return bVar20 || bVar18;
}

// SetSelection @ 14454a280

bool __thiscall
UTypedElementSelectionSet::SetSelection
          (UTypedElementSelectionSet *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FTypedElementSelectionOptions local_48;
  FTypedElementSelectionOptions local_38;
  TArrayView<FTypedElementHandle_const_,int> local_28;
  FLegacySyncScopedBatch local_18;
  
  bVar4 = param_2->bAllowLegacyNotifications;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_18,(this->ElementList).Object,bVar4);
  local_48.bAllowHidden = param_2->bAllowHidden;
  local_48.bAllowGroups = param_2->bAllowGroups;
  local_48.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
  local_48.bWarnIfLocked = param_2->bWarnIfLocked;
  local_48.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
  local_48.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
  local_48._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_48.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
  bVar4 = ClearSelection(this,&local_48);
  local_38.bAllowHidden = param_2->bAllowHidden;
  local_38.bAllowGroups = param_2->bAllowGroups;
  local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
  local_38.bWarnIfLocked = param_2->bWarnIfLocked;
  local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
  local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
  local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar2 = SelectElements(this,&local_28,&local_38);
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18)
  ;
  return bVar2 || bVar4;
}

// SetSelection @ 14454a360

bool __thiscall
UTypedElementSelectionSet::SetSelection
          (UTypedElementSelectionSet *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_48;
  FTypedElementSelectionOptions local_38;
  FTypedElementSelectionOptions local_28;
  FLegacySyncScopedBatch local_18;
  
  bVar4 = param_2->bAllowLegacyNotifications;
  if ((this->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (&local_18,(this->ElementList).Object,bVar4);
  local_38.bAllowHidden = param_2->bAllowHidden;
  local_38.bAllowGroups = param_2->bAllowGroups;
  local_38.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
  local_38.bWarnIfLocked = param_2->bWarnIfLocked;
  local_38.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
  local_38.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
  local_38._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_38.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
  bVar4 = ClearSelection(this,&local_38);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.bAllowHidden = param_2->bAllowHidden;
  local_28.bAllowGroups = param_2->bAllowGroups;
  local_28.bAllowLegacyNotifications = param_2->bAllowLegacyNotifications;
  local_28.bWarnIfLocked = param_2->bWarnIfLocked;
  local_28.bAllowSubRootSelection = param_2->bAllowSubRootSelection;
  local_28.ChildElementInclusionMethod = param_2->ChildElementInclusionMethod;
  local_28._6_2_ = *(undefined2 *)&param_2->field_0x6;
  local_28.TEDSIntegrationSelectionSetName = param_2->TEDSIntegrationSelectionSetName;
  bVar2 = SelectElements(this,&local_48,&local_28);
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2 || bVar4;
}

// StaticRegisterNativesUTypedElementSelectionSet @ 14454a7c0

void __cdecl UTypedElementSelectionSet::StaticRegisterNativesUTypedElementSelectionSet(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x16;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementSelectionSet_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllowSelectionModifiers @ 14454af50

void __cdecl
UTypedElementSelectionSet::execAllowSelectionModifiers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementInternalDataPtr *pFVar3;
  FScriptTypedElementInternalDataPtr local_res10;
  
  local_res10.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FScriptTypedElementInternalDataPtr *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementInternalDataPtr *)0x0) {
    pFVar3 = (FScriptTypedElementInternalDataPtr *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AllowSelectionModifiers
                    ((UTypedElementSelectionSet *)param_1,(FScriptTypedElementHandle *)pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_res10.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    (local_res10.ControlBlock)->WeakRefCount = (local_res10.ControlBlock)->WeakRefCount + -1;
    if ((local_res10.ControlBlock)->WeakRefCount == 0) {
      ::operator_delete(local_res10.ControlBlock,0x10);
    }
  }
  return;
}

// execCanDeselectElement @ 14454b150

void __cdecl
UTypedElementSelectionSet::execCanDeselectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementHandle *pFVar3;
  FScriptTypedElementHandle local_res10;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  FName FStack_30;
  FTypedElementSelectionOptions local_28;
  
  local_res10.InternalData.ControlBlock =
       (FScriptTypedElementInternalDataPtr)(FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = 0x10100;
  uStack_34 = 0;
  pFVar3 = &local_res10;
  if ((FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle *)0x0) {
    pFVar3 = (FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress;
  }
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_34;
  local_28.ChildElementInclusionMethod = uStack_34._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_38;
  local_28.bAllowGroups = (bool)local_38._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_38._2_1_;
  local_28.bWarnIfLocked = (bool)local_38._3_1_;
  local_28._6_2_ = uStack_32;
  local_28.TEDSIntegrationSelectionSetName = FStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanDeselectElement((UTypedElementSelectionSet *)param_1,pFVar3,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_res10.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res10.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res10.InternalData.ControlBlock,0x10);
    }
  }
  return;
}

// execCanSelectElement @ 14454b3b0

void __cdecl
UTypedElementSelectionSet::execCanSelectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementHandle *pFVar3;
  FScriptTypedElementHandle local_res10;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  FName FStack_30;
  FTypedElementSelectionOptions local_28;
  
  local_res10.InternalData.ControlBlock =
       (FScriptTypedElementInternalDataPtr)(FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = 0x10100;
  uStack_34 = 0;
  pFVar3 = &local_res10;
  if ((FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle *)0x0) {
    pFVar3 = (FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress;
  }
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_34;
  local_28.ChildElementInclusionMethod = uStack_34._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_38;
  local_28.bAllowGroups = (bool)local_38._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_38._2_1_;
  local_28.bWarnIfLocked = (bool)local_38._3_1_;
  local_28._6_2_ = uStack_32;
  local_28.TEDSIntegrationSelectionSetName = FStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanSelectElement((UTypedElementSelectionSet *)param_1,pFVar3,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_res10.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res10.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res10.InternalData.ControlBlock,0x10);
    }
  }
  return;
}

// execClearSelection @ 14454b4e0

void __cdecl
UTypedElementSelectionSet::execClearSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  FName FStack_20;
  FTypedElementSelectionOptions local_18;
  
  local_28 = 0x10100;
  FStack_20.ComparisonIndex.Value = 0;
  FStack_20.Number = 0;
  uStack_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.bAllowSubRootSelection = (bool)(undefined1)uStack_24;
  local_18.ChildElementInclusionMethod = uStack_24._1_1_;
  local_18.bAllowHidden = (bool)(undefined1)local_28;
  local_18.bAllowGroups = (bool)local_28._1_1_;
  local_18.bAllowLegacyNotifications = (bool)local_28._2_1_;
  local_18.bWarnIfLocked = (bool)local_28._3_1_;
  local_18._6_2_ = uStack_22;
  local_18.TEDSIntegrationSelectionSetName = FStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ClearSelection((UTypedElementSelectionSet *)param_1,&local_18);
  *(bool *)param_3 = bVar2;
  return;
}

// execCountSelectedElements @ 14454b5a0

void __cdecl
UTypedElementSelectionSet::execCountSelectedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.DebugPtr = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = TTypedElementList<FTypedElementHandle>::CountElements
                    (*(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10,
                     (TSubclassOf<UInterface> *)&local_res10.ObjectPtr);
  *(int *)param_3 = iVar4;
  return;
}

// execCountSelectedObjects @ 14454b680

void __cdecl
UTypedElementSelectionSet::execCountSelectedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTypedElementList<FTypedElementHandle> *this;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined4 *local_res18 [2];
  code *local_58;
  undefined4 **local_50;
  code **local_48;
  undefined8 local_40;
  code *local_38;
  code ***local_30;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = *(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10;
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0x35].field_0x18;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8[0] = 0;
  local_res18[0] = local_res8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::CountObjects'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  local_48 = &local_58;
  local_40 = uVar5;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::ForEachObject'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementObjectInterface>_const_&>
             ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementObjectInterface>
            (this,(TFunctionRef<bool___cdecl(TTypedElement<ITypedElementObjectInterface>_const_&)> *
                  )&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar4 = local_res8[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execDeselectElement @ 14454b9e0

void __cdecl
UTypedElementSelectionSet::execDeselectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementHandle *pFVar3;
  FScriptTypedElementHandle local_res10;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  FName FStack_30;
  FTypedElementSelectionOptions local_28;
  
  local_res10.InternalData.ControlBlock =
       (FScriptTypedElementInternalDataPtr)(FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = 0x10100;
  uStack_34 = 0;
  pFVar3 = &local_res10;
  if ((FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle *)0x0) {
    pFVar3 = (FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress;
  }
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_34;
  local_28.ChildElementInclusionMethod = uStack_34._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_38;
  local_28.bAllowGroups = (bool)local_38._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_38._2_1_;
  local_28.bWarnIfLocked = (bool)local_38._3_1_;
  local_28._6_2_ = uStack_32;
  local_28.TEDSIntegrationSelectionSetName = FStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = DeselectElement((UTypedElementSelectionSet *)param_1,pFVar3,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_res10.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res10.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res10.InternalData.ControlBlock,0x10);
    }
  }
  return;
}

// execDeselectElements @ 14454bb10

void __cdecl
UTypedElementSelectionSet::execDeselectElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ETypedElementChildInclusionMethod EVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  ForAnyElementType FVar18;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  FTypedElementHandle *pFVar21;
  byte bVar22;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_68;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_58;
  FTypedElementSelectionOptions local_48;
  FLegacySyncScopedBatch local_38 [2];
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = 0x10100;
  uStack_74 = 0;
  pTVar19 = &local_68;
  if ((TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar19 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  uStack_70 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  uVar3 = (undefined1)local_78;
  uVar4 = local_78._1_1_;
  bVar5 = local_78._2_1_;
  uVar6 = local_78._3_1_;
  uVar7 = (undefined1)uStack_74;
  EVar8 = uStack_74._1_1_;
  uVar9 = (undefined1)uStack_70;
  uVar10 = uStack_70._1_1_;
  uVar11 = uStack_70._2_1_;
  uVar12 = uStack_70._3_1_;
  uVar13 = uStack_70._4_1_;
  uVar14 = uStack_70._5_1_;
  uVar15 = uStack_70._6_1_;
  uVar16 = uStack_70._7_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TypedElementUtil::ConvertToNativeElementArray(&local_58,pTVar19);
  FVar18.Data = local_58.AllocatorInstance.Data;
  lVar20 = (longlong)local_58.ArrayNum;
  if ((local_58.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (local_38,*(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10,bVar5);
  bVar22 = 0;
  pFVar21 = (FTypedElementHandle *)(FVar18.Data + lVar20 * 0x10);
  for (; (FTypedElementHandle *)FVar18.Data != pFVar21; FVar18.Data = FVar18.Data + 0x10) {
    local_48.bAllowHidden = (bool)uVar3;
    local_48.bAllowGroups = (bool)uVar4;
    local_48.bAllowLegacyNotifications = bVar5;
    local_48.bWarnIfLocked = (bool)uVar6;
    local_48.bAllowSubRootSelection = (bool)uVar7;
    local_48.ChildElementInclusionMethod = EVar8;
    local_48._6_1_ = uStack_72;
    local_48._7_1_ = uStack_71;
    local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar9;
    local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar10;
    local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar11;
    local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar12;
    local_48.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar13;
    local_48.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar14;
    local_48.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar15;
    local_48.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar16;
    bVar17 = DeselectElement((UTypedElementSelectionSet *)param_1,(FTypedElementHandle *)FVar18.Data
                             ,&local_48);
    bVar22 = bVar22 | bVar17;
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(local_38);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FTypedElementHandle *)local_58.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  *(byte *)param_3 = bVar22;
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetBottomSelectedObject @ 14454c170

void __cdecl
UTypedElementSelectionSet::execGetBottomSelectedObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTypedElementList<FTypedElementHandle> *pTVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *local_res8;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0x35].field_0x18;
  pTVar3 = *(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar3;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  pUVar7 = TypedElementListObjectUtil::GetBottomObject(&local_28,pUVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(UObject **)param_3 = pUVar7;
  return;
}

// execGetCurrentSelectionState @ 14454c430

void __cdecl
UTypedElementSelectionSet::execGetCurrentSelectionState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FTypedElementSelectionSetState *pFVar1;
  FTypedElementSelectionSetState local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetCurrentSelectionState((UTypedElementSelectionSet *)param_1,&local_28);
  FTypedElementSelectionSetState::operator=(param_3,pFVar1);
  DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
            ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
              *)local_28.TransactedElements.AllocatorInstance.Data,
             local_28.TransactedElements.ArrayNum);
  if (local_28.TransactedElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.TransactedElements.AllocatorInstance.Data);
  }
  return;
}

// execGetNumSelectedElements @ 14454c730

void __cdecl
UTypedElementSelectionSet::execGetNumSelectedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x35].field_0x10 + 0x70);
  return;
}

// execGetSelectedObjects @ 14454ca80

void __cdecl
UTypedElementSelectionSet::execGetSelectedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TTypedElementList<FTypedElementHandle> *this;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_res8;
  ForAnyElementType *local_res10;
  ForAnyElementType local_68;
  undefined8 local_60;
  code *local_58;
  ForAnyElementType **local_50;
  code **local_48;
  undefined8 local_40;
  code *local_38;
  code ***local_30;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1[0x35].field_0x18;
  this = *(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar1 = (this->ElementHandles).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_res10 = &local_68;
  local_50 = &local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::GetObjects'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = &local_58;
  local_40 = uVar5;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::ForEachObject'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementObjectInterface>_const_&>
             ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementObjectInterface>
            (this,(TFunctionRef<bool___cdecl(TTypedElement<ITypedElementObjectInterface>_const_&)> *
                  )&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetSelectionElement @ 14454ce50

void __cdecl
UTypedElementSelectionSet::execGetSelectionElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptTypedElementHandle FVar2;
  void **ppvVar3;
  undefined1 local_res10 [8];
  void *local_res18;
  FScriptTypedElementHandle local_res20;
  
  local_res18 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  ppvVar3 = &local_res18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = GetSelectionElement((UTypedElementSelectionSet *)param_1,&local_res20,
                              (ETypedElementSelectionMethod)ppvVar3);
  *(undefined8 *)param_3 = *(undefined8 *)FVar2.InternalData.ControlBlock;
  *(undefined8 *)FVar2.InternalData.ControlBlock = 0;
  if (local_res20.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res20.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res20.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res20.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res20.InternalData.ControlBlock,0x10);
    }
  }
  if (local_res18 != (void *)0x0) {
    *(int *)((longlong)local_res18 + 8) = *(int *)((longlong)local_res18 + 8) + -1;
    if (*(int *)((longlong)local_res18 + 8) == 0) {
      ::operator_delete(local_res18,0x10);
    }
  }
  return;
}

// execGetTopSelectedObject @ 14454cf80

void __cdecl
UTypedElementSelectionSet::execGetTopSelectedObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTypedElementList<FTypedElementHandle> *pTVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *local_res8;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0x35].field_0x18;
  pTVar3 = *(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar3;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  pUVar7 = TypedElementListObjectUtil::GetTopObject(&local_28,pUVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(UObject **)param_3 = pUVar7;
  return;
}

// execHasSelectedElements @ 14454d0b0

void __cdecl
UTypedElementSelectionSet::execHasSelectedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.DebugPtr = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = TTypedElementList<FTypedElementHandle>::HasElements
                    (*(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10,
                     (TSubclassOf<UInterface> *)&local_res10.ObjectPtr);
  *(bool *)param_3 = bVar3;
  return;
}

// execHasSelectedObjects @ 14454d190

void __cdecl
UTypedElementSelectionSet::execHasSelectedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTypedElementList<FTypedElementHandle> *this;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 *local_res18 [2];
  code *local_58;
  undefined1 **local_50;
  code **local_48;
  undefined8 local_40;
  code *local_38;
  code ***local_30;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0x35].field_0x18;
  this = *(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8[0] = 0;
  local_res18[0] = local_res8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::HasObjects'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  local_48 = &local_58;
  local_40 = uVar5;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TypedElementListObjectUtil::ForEachObject'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementObjectInterface>_const_&>
             ::Call;
  TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementObjectInterface>
            (this,(TFunctionRef<bool___cdecl(TTypedElement<ITypedElementObjectInterface>_const_&)> *
                  )&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar4 = local_res8[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined1 *)param_3 = uVar4;
  return;
}

// execIsElementSelected @ 14454d4f0

void __cdecl
UTypedElementSelectionSet::execIsElementSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementHandle *pFVar3;
  FScriptTypedElementHandle local_res10;
  uint local_38;
  FNameEntryId FStack_34;
  uint uStack_30;
  FTypedElementIsSelectedOptions local_28;
  
  local_res10.InternalData.ControlBlock =
       (FScriptTypedElementInternalDataPtr)(FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = local_38 & 0xffffff00;
  FStack_34.Value = 0;
  uStack_30 = 0;
  pFVar3 = &local_res10;
  if ((FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle *)0x0) {
    pFVar3 = (FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.TEDSIntegrationSelectionSetName.ComparisonIndex.Value = FStack_34.Value;
  local_28._0_4_ = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.TEDSIntegrationSelectionSetName.Number = uStack_30;
  bVar2 = IsElementSelected((UTypedElementSelectionSet *)param_1,pFVar3,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_res10.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res10.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res10.InternalData.ControlBlock,0x10);
    }
  }
  return;
}

// execK2_GetSelectedElementHandles @ 14454d620

void __cdecl
UTypedElementSelectionSet::execK2_GetSelectedElementHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UClass *pUVar3;
  bool bVar4;
  UTypedElementRegistry *pUVar5;
  UClass *local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_38;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_res10.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TTypedElementList<FTypedElementHandle>::GetElementHandles
            (*(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10,&local_28,
             (TSubclassOf<UInterface> *)&local_res10.ObjectPtr);
  if ((*(longlong *)&param_1[0x35].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = (UTypedElementRegistry *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_1[0x35].field_0x10 + 0x10));
  TypedElementUtil::ConvertToScriptElementArray(&local_38,&local_28,pUVar5);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FTypedElementHandle *)local_28.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (param_3 != &local_38) {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execRestoreSelectionState @ 14454d800

void __cdecl
UTypedElementSelectionSet::execRestoreSelectionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTypedElementSelectionSetState *pFVar2;
  FTypedElementSelectionSetState local_28;
  
  local_28.CreatedFromSelectionSet.WeakPtr.ObjectIndex = 0;
  local_28.CreatedFromSelectionSet.WeakPtr.ObjectSerialNumber = 0;
  local_28.TransactedElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.TransactedElements.ArrayNum = 0;
  local_28.TransactedElements.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FTypedElementSelectionSetState *)param_2->MostRecentPropertyAddress !=
      (FTypedElementSelectionSetState *)0x0) {
    pFVar2 = (FTypedElementSelectionSetState *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RestoreSelectionState((UTypedElementSelectionSet *)param_1,pFVar2);
  DestructItems<TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>,int>
            ((TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
              *)local_28.TransactedElements.AllocatorInstance.Data,
             local_28.TransactedElements.ArrayNum);
  if (local_28.TransactedElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.TransactedElements.AllocatorInstance.Data);
  }
  return;
}

// execSelectElement @ 14454da60

void __cdecl
UTypedElementSelectionSet::execSelectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FScriptTypedElementHandle *pFVar3;
  FScriptTypedElementHandle local_res10;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  FName FStack_30;
  FTypedElementSelectionOptions local_28;
  
  local_res10.InternalData.ControlBlock =
       (FScriptTypedElementInternalDataPtr)(FScriptTypedElementInternalDataControlBlock *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = 0x10100;
  uStack_34 = 0;
  pFVar3 = &local_res10;
  if ((FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle *)0x0) {
    pFVar3 = (FScriptTypedElementHandle *)param_2->MostRecentPropertyAddress;
  }
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_34;
  local_28.ChildElementInclusionMethod = uStack_34._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_38;
  local_28.bAllowGroups = (bool)local_38._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_38._2_1_;
  local_28.bWarnIfLocked = (bool)local_38._3_1_;
  local_28._6_2_ = uStack_32;
  local_28.TEDSIntegrationSelectionSetName = FStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SelectElement((UTypedElementSelectionSet *)param_1,pFVar3,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_res10.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) =
         *(int *)((longlong)local_res10.InternalData.ControlBlock + 8) + -1;
    if (*(int *)((longlong)local_res10.InternalData.ControlBlock + 8) == 0) {
      ::operator_delete((void *)local_res10.InternalData.ControlBlock,0x10);
    }
  }
  return;
}

// execSelectElements @ 14454db90

void __cdecl
UTypedElementSelectionSet::execSelectElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  bool bVar5;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  FName FStack_80;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_78;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_68;
  FTypedElementHandle *local_58;
  int iStack_50;
  FTypedElementSelectionOptions local_48;
  TArrayView<FTypedElementHandle_const_,int> local_38 [2];
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88 = 0x10100;
  uStack_84 = 0;
  pTVar6 = &local_78;
  if ((TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FVar4 = FStack_80;
  uVar3._4_1_ = (bool)(undefined1)uStack_84;
  uVar3._5_1_ = uStack_84._1_1_;
  uVar3._0_1_ = (bool)(undefined1)local_88;
  uVar3._1_1_ = (bool)local_88._1_1_;
  uVar3._2_1_ = (bool)local_88._2_1_;
  uVar3._3_1_ = (bool)local_88._3_1_;
  uVar3._6_2_ = uStack_82;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TypedElementUtil::ConvertToNativeElementArray(&local_68,pTVar6);
  iStack_50 = local_68.ArrayNum;
  local_58 = (FTypedElementHandle *)local_68.AllocatorInstance.Data;
  if (local_68.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38[0].DataPtr = local_58;
  local_48.TEDSIntegrationSelectionSetName = FVar4;
  local_48._0_8_ = uVar3;
  bVar5 = SelectElements((UTypedElementSelectionSet *)param_1,local_38,&local_48);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FTypedElementHandle *)local_68.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar5;
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execSetSelection @ 14454e2c0

void __cdecl
UTypedElementSelectionSet::execSetSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ETypedElementChildInclusionMethod EVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_98;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_88;
  FTypedElementHandle *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FTypedElementSelectionOptions local_68;
  FTypedElementSelectionOptions local_58;
  TArrayView<FTypedElementHandle_const_,int> local_48;
  FLegacySyncScopedBatch local_38 [2];
  
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8 = 0x10100;
  uStack_a4 = 0;
  pTVar18 = &local_98;
  if ((TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar18 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  uStack_a0 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  uVar3 = (undefined1)local_a8;
  uVar4 = local_a8._1_1_;
  bVar17 = local_a8._2_1_;
  uVar5 = local_a8._3_1_;
  uVar6 = (undefined1)uStack_a4;
  EVar7 = uStack_a4._1_1_;
  uVar8 = (undefined1)uStack_a0;
  uVar9 = uStack_a0._1_1_;
  uVar10 = uStack_a0._2_1_;
  uVar11 = uStack_a0._3_1_;
  uVar12 = uStack_a0._4_1_;
  uVar13 = uStack_a0._5_1_;
  uVar14 = uStack_a0._6_1_;
  uVar15 = uStack_a0._7_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TypedElementUtil::ConvertToNativeElementArray(&local_88,pTVar18);
  iStack_70 = local_88.ArrayNum;
  local_78 = (FTypedElementHandle *)local_88.AllocatorInstance.Data;
  if (local_88.ArrayNum < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_6c = local_38[0]._12_4_;
  if (*(longlong *)&param_1[0x35].field_0x10 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
            (local_38,*(TTypedElementList<FTypedElementHandle> **)&param_1[0x35].field_0x10,bVar17);
  local_68.bAllowHidden = (bool)uVar3;
  local_68.bAllowGroups = (bool)uVar4;
  local_68.bAllowLegacyNotifications = bVar17;
  local_68.bWarnIfLocked = (bool)uVar5;
  local_68.bAllowSubRootSelection = (bool)uVar6;
  local_68.ChildElementInclusionMethod = EVar7;
  local_68._6_1_ = uStack_a2;
  local_68._7_1_ = uStack_a1;
  local_68.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar8;
  local_68.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar9;
  local_68.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar10;
  local_68.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar11;
  local_68.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar12;
  local_68.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar13;
  local_68.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar14;
  local_68.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar15;
  bVar16 = ClearSelection((UTypedElementSelectionSet *)param_1,&local_68);
  local_48._12_4_ = uStack_6c;
  local_48.ArrayNum = iStack_70;
  local_48.DataPtr = local_78;
  local_58.bAllowHidden = (bool)uVar3;
  local_58.bAllowGroups = (bool)uVar4;
  local_58.bAllowLegacyNotifications = bVar17;
  local_58.bWarnIfLocked = (bool)uVar5;
  local_58.bAllowSubRootSelection = (bool)uVar6;
  local_58.ChildElementInclusionMethod = EVar7;
  local_58._6_1_ = uStack_a2;
  local_58._7_1_ = uStack_a1;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._0_1_ = uVar8;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._1_1_ = uVar9;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._2_1_ = uVar10;
  local_58.TEDSIntegrationSelectionSetName.ComparisonIndex.Value._3_1_ = uVar11;
  local_58.TEDSIntegrationSelectionSetName.Number._0_1_ = uVar12;
  local_58.TEDSIntegrationSelectionSetName.Number._1_1_ = uVar13;
  local_58.TEDSIntegrationSelectionSetName.Number._2_1_ = uVar14;
  local_58.TEDSIntegrationSelectionSetName.Number._3_1_ = uVar15;
  bVar17 = SelectElements((UTypedElementSelectionSet *)param_1,&local_48,&local_58);
  TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch(local_38);
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FTypedElementHandle *)local_88.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar17 || bVar16;
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

