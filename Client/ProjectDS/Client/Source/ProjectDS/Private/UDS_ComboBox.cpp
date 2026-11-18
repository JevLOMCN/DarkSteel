// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b457620

UClass * __cdecl UDS_ComboBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComboBox",
               &Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton,
               StaticRegisterNativesUDS_ComboBox,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ComboBox>,InternalVTableHelperCtorCaller<UDS_ComboBox>,
               local_res8,UComboBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton;
}

// UDS_ComboBox @ 14b45c870

UDS_ComboBox * __thiscall UDS_ComboBox::UDS_ComboBox(UDS_ComboBox *this,FVTableHelper *param_1)

{
  UComboBox::UComboBox((UComboBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_ComboBox @ 14b45d0d0

void __thiscall UDS_ComboBox::~UDS_ComboBox(UDS_ComboBox *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UComboBox::~UComboBox((UComboBox *)this);
  return;
}

// GetPrivateStaticClass @ 14b45ea40

UClass * __cdecl UDS_ComboBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ComboBox",
               &Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton,
               StaticRegisterNativesUDS_ComboBox,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ComboBox>,InternalVTableHelperCtorCaller<UDS_ComboBox>,
               local_res8,UComboBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ComboBox.InnerSingleton;
}

// StaticRegisterNativesUDS_ComboBox @ 14b45f250

void __cdecl UDS_ComboBox::StaticRegisterNativesUDS_ComboBox(void)

{
  return;
}

// UDS_ComboBox @ 14bc83410

UDS_ComboBox * __thiscall UDS_ComboBox::UDS_ComboBox(UDS_ComboBox *this,FObjectInitializer *param_1)

{
  UComboBox::UComboBox((UComboBox *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ComboBox::BeginDestroy(UDS_ComboBox *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3b30

void __thiscall UDS_ComboBox::ReleaseSlateResources(UDS_ComboBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  uStack_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x830 != &uStack_18) {
    *(undefined8 *)&this->field_0x830 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x838,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SynchronizeProperties @ 14bcca660

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ComboBox::SynchronizeProperties(UDS_ComboBox *this)

{
  byte bVar1;
  FName FVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EVisibility EVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UFunction *pUVar15;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar16;
  FDelegateToolTip *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  TAttribute<FText> *pTVar20;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar21;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_878;
  FDelegateAllocation FStack_870;
  TSharedPtr<SWidget,1> TStack_860;
  SWidget *pSStack_850;
  TReferenceControllerBase<1> *pTStack_848;
  undefined1 uStack_840;
  undefined1 uStack_83f;
  undefined1 auStack_838 [8];
  ForAnyElementType FStack_830;
  ulonglong uStack_828;
  byte bStack_820;
  undefined1 uStack_81f;
  undefined1 auStack_818 [8];
  ForAnyElementType FStack_810;
  ulonglong uStack_808;
  undefined2 uStack_800;
  undefined1 auStack_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 uStack_7e0;
  undefined1 auStack_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 uStack_7c0;
  undefined1 auStack_7b8 [8];
  void *pvStack_7b0;
  int iStack_7a8;
  undefined1 auStack_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_788;
  ForAnyElementType FStack_780;
  ulonglong uStack_778;
  undefined1 auStack_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_758;
  ForAnyElementType FStack_750;
  ulonglong uStack_748;
  code *pcStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool bStack_728;
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [8];
  void *pvStack_700;
  undefined8 uStack_6f8;
  UObject *pUStack_6f0;
  UDS_ComboBox *pUStack_6e8;
  code *pcStack_6e0;
  TRawPtrProxy<FDelegateToolTip> TStack_6d8;
  UObject *pUStack_6d0;
  FMemScope FStack_6c8;
  FName FStack_6c0;
  FName FStack_6b8;
  undefined1 auStack_6b0 [8];
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  TVector2<double>_u_0 TStack_670;
  undefined1 uStack_660;
  undefined1 auStack_658 [8];
  void *pvStack_650;
  undefined8 uStack_648;
  TSharedRef<FDelegateToolTip,1> TStack_640;
  TSharedRef<SToolTip,1> TStack_630;
  TSharedRef<SWidget,1> TStack_620;
  TAttribute<FSlateBrush_const_*> TStack_610;
  FDestructionSentinel FStack_5e8;
  FDestructionSentinel FStack_5d0;
  FDestructionSentinel FStack_5b8;
  FDestructionSentinel FStack_5a0;
  FDestructionSentinel FStack_588;
  FDestructionSentinel FStack_570;
  FDelegateAllocation *pFStack_558;
  FDestructionSentinel FStack_550;
  FDelegateAllocation *pFStack_538;
  FDestructionSentinel FStack_530;
  FDelegateAllocation *pFStack_518;
  TAttribute<FMargin> TStack_510;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_4d8;
  SWidget *pSStack_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> TStack_4b0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  FReadAccessScope FStack_438;
  FReadAccessScope FStack_420;
  FReadAccessScope FStack_408;
  TAttribute<FText> TStack_3f0;
  TAttribute<FText> TStack_3c0;
  FArguments FStack_390;
  
  auStackX_8[0] = Visible;
  auStackX_8[1] = false;
  auStackX_8._2_2_ = 0;
  this->field_0x1a8 = 1;
  UWidget::GetCachedWidget((UWidget *)this,&TStack_860);
  pSVar5 = TStack_860.Object;
  if (TStack_860.Object != (SWidget *)0x0) {
    if ((this->field_0xf9 & 8) != 0) {
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_718._0_4_ = ZEXT14((byte)this->field_0xfb);
      auStack_718[4] = true;
      uStack_6f8 = 0;
      auStack_718[8] = true;
      auStack_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar5,(TAttribute<TOptional<EMouseCursor::Type>_> *)auStack_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_708);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x38,
                 &FStack_408);
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x48;
      FVar2.Number = *(uint *)&this->field_0x4c;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_408);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
      uStack_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      auStack_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7f8,
                 (FWriteAccessScope *)&FStack_570);
      pFStack_558 = &FStack_7f0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6d0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6d0);
        if ((FVar2 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar2);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_570.Accessor,&FStack_570);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8;
      bVar7 = false;
      bVar10 = true;
      auStack_6b0[0] = (byte)uStack_800;
      auStack_6b0[1] = uStack_800._1_1_;
    }
    else {
      auStack_6b0[1] = 1;
      auStack_6b0[0] = (byte)this->field_0xf9 >> 2 & 1;
      uStack_81f = 1;
      bVar7 = true;
      bVar10 = false;
      uStack_808 = 0;
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_818;
      auStack_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      bStack_820 = auStack_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8,pTVar21);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->EnabledStateAttribute,pSVar5,(TAttribute<bool> *)auStack_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8);
    if ((void *)auStack_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_6a8);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_818,
                 (FWriteAccessScope *)&FStack_5b8);
      if (((int)uStack_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        uStack_808 = uStack_808 & 0xffffffff00000000;
      }
      if (FStack_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5b8.Accessor,&FStack_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_818);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7f8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcStack_6e0 = *(code **)(pSVar5->_padding_ + 0x1c8);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x98,
                 &FStack_438);
      FVar3.ComparisonIndex.Value = *(uint *)&this->field_0xa8;
      FVar3.Number = *(uint *)&this->field_0xac;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_438);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
      uStack_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      auStack_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7d8,
                 (FWriteAccessScope *)&FStack_550);
      pFStack_538 = &FStack_7d0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6f0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6f0);
        if ((FVar3 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar3);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_550.Accessor,&FStack_550);
      }
      pcStack_738 = UWidget::ConvertVisibility;
      uStack_72c = TStack_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      TStack_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_530);
      pFStack_518 = &FStack_870;
      puVar13 = UE::Core::Private::DelegateAllocate(0x48,&FStack_870);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar13 + 1) = (undefined1)uStack_7e0;
        *(undefined1 *)((longlong)puVar13 + 9) = uStack_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar13 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[5] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[6] = 0;
        pUStack_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 6),(FObjectPtr)&pUStack_6e8);
        puVar13[7] = pcStack_738;
        puVar13[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (FStack_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_530.Accessor,&FStack_530);
      }
      uStack_7c0 = 0x119;
      auStack_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&pcStack_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)FStack_870.DelegateAllocator;
      iStack_7a8 = FStack_870.DelegateSize;
      FStack_870.DelegateSize = 0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&pcStack_738);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar10 = false;
      uStack_4e0 = (undefined1)uStack_7c0;
      uStack_4df = uStack_7c0._1_1_;
    }
    else {
      uStack_690 = this->field_0xfd;
      uStack_68f = 1;
      uStack_678 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      EVar11 = UWidget::ConvertVisibility
                         ((UWidget *)this,(TAttribute<ESlateVisibility> *)auStackX_8);
      uStack_4df = 1;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar10 = true;
      uStack_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar11.Value.Value);
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_838;
      uStack_828 = 0;
      uStack_83f = 1;
      auStack_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      uStack_840 = uStack_4e0;
    }
    pFVar17 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&TStack_4d8,pTVar21);
    (*pcStack_6e0)(pSVar5,&uStack_4e0);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_838,
                 (FWriteAccessScope *)&FStack_5a0);
      if (((int)uStack_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        uStack_828 = uStack_828 & 0xffffffff00000000;
      }
      if (FStack_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5a0.Accessor,&FStack_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_838);
    }
    if (bVar7) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7b8);
    }
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_5d0);
      if ((FStack_870.DelegateSize != 0) &&
         (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_870,0,0,0x10);
        FStack_870.DelegateSize = 0;
      }
      if (FStack_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5d0.Accessor,&FStack_5d0);
      }
      if (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_878.AccessDetector);
    }
    if (bVar9) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7d8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetClipping(pSVar5,this->field_0xfc);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar5,this->field_0xfe);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pSVar5->FlowDirectionPreference != this->field_0xf8) {
      pSVar5->FlowDirectionPreference = this->field_0xf8;
      SWidget::Invalidate(pSVar5,Paint);
    }
    bVar1 = pSVar5->field_0x30;
    if (((bVar1 ^ this->field_0xf9) >> 4 & 1) != 0) {
      pSVar5->field_0x30 = (this->field_0xf9 & 0xf0 ^ bVar1) & 0x10 ^ bVar1;
      SWidget::Invalidate(pSVar5,PaintAndVolatility);
    }
    if (*(float *)&this->field_0x100 != pSVar5->RenderOpacity) {
      pSVar5->RenderOpacity = *(float *)&this->field_0x100;
      SWidget::Invalidate(pSVar5,Paint);
    }
    UWidget::UpdateRenderTransform((UWidget *)this);
    TStack_670._s_0.X = (double)*(undefined8 *)&this->field_0xe8;
    TStack_670._s_0.Y = (double)*(undefined8 *)&this->field_0xf0;
    uStack_660 = 1;
    uStack_648 = 0;
    auStack_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->RenderTransformPivotAttribute,pSVar5,
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_658);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
    if (bVar10) {
      pFVar16 = ::operator_new(0x30);
      if (pFVar16 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar16->ToolTipWidgetDelegate = 0;
        pFVar16->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar16->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar16->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar17 = pFVar16;
      }
      TStack_6d8.Object = pFVar17;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&TStack_640,&TStack_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(TStack_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
      auStack_7a0._0_8_ = TStack_640.Object;
      auStack_7a0._8_8_ = TStack_640.SharedReferenceCount.ReferenceController;
      if (TStack_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_7a0[0x10] = true;
      uStack_778 = 0;
      TStack_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar5,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_788,(FWriteAccessScope *)&FStack_588);
      if (((int)uStack_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        uStack_778 = uStack_778 & 0xffffffff00000000;
      }
      if (FStack_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_588.Accessor,&FStack_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_640.SharedReferenceCount.ReferenceController);
    }
    else if (*(longlong *)&this->field_0x78 == 0) {
      bVar10 = FText::IsEmpty((FText *)&this->field_0x68);
      if ((!bVar10) ||
         (bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50),
         bVar10)) {
        bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
        if (!bVar10) {
          pTVar20 = TAttribute<FText>::TAttribute<FText><FText>
                              (&TStack_3f0,(FText *)&this->field_0x68);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x50,
                     &FStack_420);
          FStack_6c0.ComparisonIndex.Value = *(uint *)&this->field_0x60;
          FStack_6c0.Number = *(uint *)&this->field_0x64;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_420);
          pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
          pTVar20 = TAttribute<FText>::Create<UObject>(&TStack_3c0,pUVar12,&FStack_6c0);
        }
        SWidget::SetToolTipText(pSVar5,pTVar20);
        if (bVar10) {
          TAttribute<FText>::~TAttribute<FText>(&TStack_3c0);
        }
      }
    }
    else {
      pFVar18 = SToolTip::FArguments::FArguments(&FStack_390);
      TStack_510.bIsSet = true;
      TStack_510.Getter._16_8_ = 0;
      TStack_510.Value.Left = 0.0;
      TStack_510.Value.Top = 0.0;
      TStack_510.Value.Right = 0.0;
      TStack_510.Value.Bottom = 0.0;
      TStack_510.Getter._0_8_ = 0;
      TStack_510.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::TextMargin(pFVar18,&TStack_510);
      TStack_610.Value = (FSlateBrush *)0x0;
      TStack_610.bIsSet = true;
      TStack_610.Getter._16_8_ = 0;
      TStack_610.Getter._0_8_ = 0;
      TStack_610.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::BorderImage(pFVar18,&TStack_610);
      pTVar19 = UWidget::TakeWidget(*(UWidget **)&this->field_0x78,&TStack_620);
      pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar19->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSStack_4c0 = (pFVar18->_Content).Widget.Object;
      pTStack_4b8 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar18->_Content).Widget.Object = pSVar5;
      (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (aFStackX_18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      FStack_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&FStack_6c8,&FStack_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&TStack_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(auStackX_8 + 8));
      FMemScope::~FMemScope(&FStack_6c8);
      FLLMScope::~FLLMScope(aFStackX_18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                (&TStack_4b0,&TStack_630,pFVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(TStack_620.SharedReferenceCount.ReferenceController._4_4_,
                          TStack_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&FStack_390);
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_770._8_8_ = TStack_630.SharedReferenceCount.ReferenceController;
      auStack_770._0_8_ = &(TStack_630.Object)->_padding_;
      if (TStack_630.Object == (SToolTip *)0x0) {
        auStack_770._0_8_ = pFVar17;
      }
      if (TStack_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_770[0x10] = true;
      uStack_748 = 0;
      TStack_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(TStack_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_758,(FWriteAccessScope *)&FStack_5e8);
      if (((int)uStack_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        uStack_748 = uStack_748 & 0xffffffff00000000;
      }
      if (FStack_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5e8.Accessor,&FStack_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_630.SharedReferenceCount.ReferenceController);
    }
    if (*(longlong *)&this->field_0x108 != 0) {
      (**(code **)(*(longlong *)this + 0x308))(this,&pSStack_850);
      if (pSStack_850 != (SWidget *)0x0) {
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_498);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x29),pTVar20,
                   Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_480);
        if ((void *)auStack_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_480);
        if ((ITextData *)auStack_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_498._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_468);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x2a),pTVar20,
                   Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_450);
        if ((void *)auStack_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_450);
        if ((ITextData *)auStack_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_468._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible
                  (pSStack_850,*(bool *)(*(longlong *)&this->field_0x108 + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_848);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_860.SharedReferenceCount.ReferenceController);
  return;
}

