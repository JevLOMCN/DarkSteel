// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 26

// StaticClass @ 14a786720

UClass * __cdecl UCommonLoadGuard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLoadGuard",
               &Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton,
               StaticRegisterNativesUCommonLoadGuard,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonLoadGuard>,
               InternalVTableHelperCtorCaller<UCommonLoadGuard>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton;
}

// GuardAndLoadAsset<UObject> @ 14a79b540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCommonLoadGuard::GuardAndLoadAsset<UObject>
          (UCommonLoadGuard *this,TSoftObjectPtr<UObject> *param_1,
          TFunction<void___cdecl(UObject_*)> *param_2)

{
  SLoadGuard *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    local_b8 = *(longlong *)param_2;
    local_90 = (longlong *)0x0;
    if (local_b8 != 0) {
      puVar1 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,local_a8);
    }
    local_68 = local_b8;
    local_40 = (longlong *)0x0;
    if (local_b8 != 0) {
      plVar3 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar3 = local_90;
      }
      (**(code **)*plVar3)(plVar3,&local_58);
    }
    local_d8 = (undefined1  [8])0x0;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_d0;
    puVar1 = UE::Core::Private::DelegateAllocate(0x50,&local_d0);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____GuardAndLoadAsset_VUObject___SLoadGuard__QEAAXAEBU__TSoftObjectPtr_VUObject____V__TFunction___A6AXPEAVUObject___Z___Z___V__6B_
      ;
      puVar1[4] = local_68;
      puVar1[9] = local_40;
      local_40 = (longlong *)0x0;
      puVar1[6] = local_58;
      puVar1[7] = uStack_50;
      puVar1[8] = local_48;
      if (puVar1[4] != 0) {
        local_68 = 0;
      }
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    SLoadGuard::GuardAndLoadAsset
              (this_00,param_1,
               (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_d8);
    if (local_68 != 0) {
      plVar3 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar3 = local_40;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8 != 0) {
      plVar3 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar3 = local_90;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// UCommonLoadGuard @ 14a7ae040

UCommonLoadGuard * __thiscall
UCommonLoadGuard::UCommonLoadGuard(UCommonLoadGuard *this,FVTableHelper *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  (this->ThrobberPadding).Left = 0.0;
  (this->ThrobberPadding).Top = 0.0;
  (this->ThrobberPadding).Right = 0.0;
  (this->ThrobberPadding).Bottom = 0.0;
  FText::FText(&this->LoadingText);
  (this->TextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->SpinnerMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SpinnerMaterialPath).AssetPath.PackageName.Number = 0;
  (this->SpinnerMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SpinnerMaterialPath).AssetPath.AssetName.Number = 0;
  (this->SpinnerMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpinnerMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->SpinnerMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  return this;
}

// UCommonLoadGuard @ 14a7ae120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonLoadGuard * __thiscall
UCommonLoadGuard::UCommonLoadGuard(UCommonLoadGuard *this,FObjectInitializer *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  (this->ThrobberAlignment).Value = '\x02';
  (this->ThrobberPadding).Left = 0.0;
  (this->ThrobberPadding).Top = 0.0;
  (this->ThrobberPadding).Right = 0.0;
  (this->ThrobberPadding).Bottom = 0.0;
  FText::AsLocalizable_Advanced_LocText(&this->LoadingText,L"LoadGuard",L"Loading",L"Loading...");
  (this->TextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->SpinnerMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SpinnerMaterialPath).AssetPath.PackageName.Number = 0;
  (this->SpinnerMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SpinnerMaterialPath).AssetPath.AssetName.Number = 0;
  (this->SpinnerMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpinnerMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->SpinnerMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  (this->LoadingBackgroundBrush).DrawAs.Value = '\0';
  (this->LoadingThrobberBrush).DrawAs.Value = '\0';
  return this;
}

// ~UCommonLoadGuard @ 14a7b2fe0

void __thiscall UCommonLoadGuard::~UCommonLoadGuard(UCommonLoadGuard *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadingStateChangedEvent).field_0x8,
             *(int *)&(this->OnLoadingStateChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnLoadingStateChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadingStateChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyLoadGuard).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SpinnerMaterialPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->BP_OnLoadingStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnLoadingStateChanged);
  pIVar3 = (this->LoadingText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pTVar4 = (this->LoadingThrobberBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->LoadingThrobberBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (this->LoadingBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->LoadingBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  return;
}

// BP_GuardAndLoadAsset @ 14a7c0ba0

void __thiscall
UCommonLoadGuard::BP_GuardAndLoadAsset
          (UCommonLoadGuard *this,TSoftObjectPtr<UObject> *param_1,FOnAssetLoaded *param_2)

{
  undefined8 *puVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FReadAccessScope local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
  local_60 = *(undefined8 *)&param_2->field_0x8;
  local_58 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  local_38[0] = (code *)0x0;
  puVar1 = FMemory::Malloc(0x20,8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[3] = 0;
  local_10 = puVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_50);
  puVar1[2] = local_60;
  puVar1[3] = local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,void,UObject_*>
                  ::Call;
  }
  GuardAndLoadAsset<UObject>(this,param_1,(TFunction<void___cdecl(UObject_*)> *)local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// FOnAssetLoaded_DelegateWrapper @ 14a7db370

void __cdecl
UCommonLoadGuard::FOnAssetLoaded_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14a7e5bc0

UClass * __cdecl UCommonLoadGuard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLoadGuard",
               &Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton,
               StaticRegisterNativesUCommonLoadGuard,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonLoadGuard>,
               InternalVTableHelperCtorCaller<UCommonLoadGuard>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLoadGuard.InnerSingleton;
}

// GetSlotClass @ 14a7e8700

UClass * __thiscall UCommonLoadGuard::GetSlotClass(UCommonLoadGuard *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"LoadGuardSlot",
               &Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton,
               ULoadGuardSlot::StaticRegisterNativesULoadGuardSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULoadGuardSlot>,
               InternalVTableHelperCtorCaller<ULoadGuardSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton;
}

// HandleLoadingStateChanged @ 14a7ed9d0

void __thiscall UCommonLoadGuard::HandleLoadingStateChanged(UCommonLoadGuard *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLoadingStateChangedEvent,param_1);
  return;
}

// IsLoading @ 14a7f62c0

bool __thiscall UCommonLoadGuard::IsLoading(UCommonLoadGuard *this)

{
  SLoadGuard *pSVar1;
  
  pSVar1 = (this->MyLoadGuard).Object;
  if ((pSVar1 != (SLoadGuard *)0x0) && (pSVar1->bIsShowingSpinner != false)) {
    return true;
  }
  return false;
}

// OnSlotAdded @ 14a7fede0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonLoadGuard::OnSlotAdded(UCommonLoadGuard *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SLoadGuard,1> *pTVar3;
  TSharedRef<SLoadGuard,1> local_18;
  
  if ((this->MyLoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  if (param_1 != (UPanelSlot *)0x0) {
    pUVar2 = ULoadGuardSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14a7fee24;
  }
  param_1 = (UPanelSlot *)0x0;
LAB_14a7fee24:
  pTVar3 = TSharedPtr<SLoadGuard,1>::ToSharedRef(&this->MyLoadGuard,&local_18);
  ULoadGuardSlot::BuildSlot((ULoadGuardSlot *)param_1,pTVar3);
  return;
}

// OnSlotRemoved @ 14a7ff210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonLoadGuard::OnSlotRemoved(UCommonLoadGuard *this,UPanelSlot *param_1)

{
  SLoadGuard *pSVar1;
  SBorder *pSVar2;
  code *pcVar3;
  bool bVar4;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (this->MyLoadGuard).Object;
  if (pSVar1 != (SLoadGuard *)0x0) {
    if ((pSVar1->ContentBorder).Object == (SBorder *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (pSVar1->ContentBorder).Object;
    pcVar3 = *(code **)(pSVar2->_padding_ + 0x248);
    local_18 = SNullWidget::NullWidget.Object;
    local_10 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(pSVar2,&local_18);
  }
  return;
}

// PostLoad @ 14a802710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonLoadGuard::PostLoad(UCommonLoadGuard *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EHorizontalAlignment EVar6;
  EVerticalAlignment EVar7;
  USizeBoxSlot *this_00;
  UClass *pUVar8;
  ULoadGuardSlot *this_01;
  FMargin *pFVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  FGuid local_c8;
  FMargin local_b8;
  FMargin local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  local_c8 = ECommonUIObjectVersion::Guid;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_c8);
  if ((iVar5 < 1) &&
     (this_00 = (USizeBoxSlot *)UContentWidget::GetContentSlot((UContentWidget *)this),
     this_00 != (USizeBoxSlot *)0x0)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = ULoadGuardSlot::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar8);
    local_98._8_8_ = this;
    this_01 = (ULoadGuardSlot *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this_00->_padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00->_padding_);
    }
    lVar1 = this_00->_padding_;
    this_01->_padding_ = lVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    *(ULoadGuardSlot **)(lVar1 + 0x30) = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLoadGuard *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    this_01->_padding_ = (longlong)this;
    pUVar8 = Z_Construct_UClass_USizeBoxSlot_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) {
      pFVar9 = USizeBoxSlot::GetPadding(this_00,&local_a8);
      local_b8.Left = pFVar9->Left;
      local_b8.Top = pFVar9->Top;
      local_b8.Right = pFVar9->Right;
      local_b8.Bottom = pFVar9->Bottom;
      ULoadGuardSlot::SetPadding(this_01,&local_b8);
      EVar6 = USizeBoxSlot::GetHorizontalAlignment(this_00);
      ULoadGuardSlot::SetHorizontalAlignment(this_01,EVar6);
      EVar7 = USizeBoxSlot::GetVerticalAlignment(this_00);
      ULoadGuardSlot::SetVerticalAlignment(this_01,EVar7);
    }
    if (*(int *)&this->field_0x1b8 < 1) {
      local_d8 = 0;
      local_d0 = (longlong)*(int *)&this->field_0x1b8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined8 **)&this->field_0x1b0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    *puVar2 = this_01;
  }
  return;
}

// RebuildWidget @ 14a80a9c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonLoadGuard::RebuildWidget
          (UCommonLoadGuard *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SLoadGuard,1> *this_00;
  uint uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  SLoadGuard *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FArguments *pFVar13;
  FArguments *pFVar14;
  TSharedRef<SImage,1> *pTVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  TSharedRef<SLoadGuard,1> *pTVar18;
  SImage *pSVar19;
  UClass *pUVar20;
  TSharedRef<SWidget,1> *pTVar21;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FMemScope local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  TSharedPtr<SLoadGuard,1> local_658;
  undefined1 local_648 [4];
  undefined1 local_644 [4];
  FName local_640;
  FMemScope local_638;
  UCommonLoadGuard *local_630;
  FName local_628;
  SWidget *local_620;
  TReferenceControllerBase<1> *pTStack_618;
  TAttribute<FSlateBrush_const_*> local_610;
  undefined8 local_5e8;
  TReferenceControllerBase<1> *local_5e0;
  undefined8 local_5d8;
  TReferenceControllerBase<1> *local_5d0;
  TSharedRef<SImage,1> local_5c8;
  FDestructionSentinel local_5b8;
  undefined1 *local_5a0;
  TSharedRef<SLoadGuard,1> local_598;
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs> local_588;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_570;
  TSharedRef<SLoadGuard,1> local_558;
  undefined1 local_548 [576];
  undefined1 local_308 [24];
  FArguments local_2f0;
  
  local_res8[0] = 0;
  pFVar13 = SLoadGuard::FArguments::FArguments((FArguments *)local_548);
  pIVar2 = (this->LoadingText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_648);
  }
  pIVar3 = (pFVar13->_GuardText).TextData.Reference;
  uVar1 = (this->LoadingText).Flags;
  if (pIVar3 != pIVar2) {
    (pFVar13->_GuardText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_644);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (pFVar13->_GuardText).Flags = uVar1;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  pUVar20 = (this->TextStyle).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar20 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar20);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar20);
    }
  }
  (pFVar13->_GuardTextStyle).Class.field0_0x0.DebugPtr = pUVar20;
  pFVar13->_GuardBackgroundBrush = &this->LoadingBackgroundBrush;
  if ((this->LoadingThrobberBrush).DrawAs.Value == '\0') {
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar11 = true;
    local_5e0 = (TReferenceControllerBase<1> *)0x0;
    puVar16 = &local_5e8;
    pSVar19 = (SImage *)0x0;
  }
  else {
    pFVar14 = SImage::FArguments::FArguments(&local_2f0);
    local_610.Value = &this->LoadingThrobberBrush;
    local_610.bIsSet = true;
    local_610.Getter._0_8_ = 0;
    local_610.Getter._8_8_ = 0;
    local_610.Getter._16_8_ = 0;
    pFVar14 = SImage::FArguments::Image(pFVar14,&local_610);
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar11 = false;
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_640 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_638,&local_640,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_570,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
               ,0x181,(T0RequiredArgs *)local_res8);
    FMemScope::~FMemScope(&local_638);
    FLLMScope::~FLLMScope(local_res18);
    pTVar15 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_570,&local_5c8,pFVar14);
    local_5d0 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar19 = pTVar15->Object;
    if (local_5d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_5d0->SharedReferenceCount = (atomic<int>)((int)local_5d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar16 = &local_5d8;
  }
  pTVar4 = (TReferenceControllerBase<1> *)puVar16[1];
  puVar16[1] = 0;
  *puVar16 = 0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_620 = (pFVar13->_Throbber).Object;
  pTStack_618 = (pFVar13->_Throbber).SharedReferenceCount.ReferenceController;
  (pFVar13->_Throbber).Object = (SWidget *)pSVar19;
  (pFVar13->_Throbber).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_618);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar13->_ThrobberHAlign = (uint)(this->ThrobberAlignment).Value;
  uStack_660 = 0;
  local_668 = (FMemScope)HandleLoadingStateChanged;
  uStack_65c = local_5c8.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar13->_OnLoadingStateChanged,(FWriteAccessScope *)&local_5b8);
  local_5a0 = &(pFVar13->_OnLoadingStateChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5a0);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLoadGuard____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar16[3] = 0;
    local_630 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_630);
    *(FMemScope *)(puVar16 + 4) = local_668;
    puVar16[5] = CONCAT44(uStack_65c,uStack_660);
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_628 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_668,&local_628,true);
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>
            (&local_588,"SLoadGuard",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x17d,local_res10);
  FMemScope::~FMemScope(&local_668);
  FLLMScope::~FLLMScope(local_res20);
  pTVar18 = TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_588,&local_598,pFVar13);
  local_658.SharedReferenceCount.ReferenceController =
       (pTVar18->SharedReferenceCount).ReferenceController;
  local_658.Object = pTVar18->Object;
  if (local_658.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MyLoadGuard;
  if (this_00 != &local_658) {
    this_00->Object = local_658.Object;
    local_658.Object = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&local_658.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588._Widget.SharedReferenceCount.ReferenceController);
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e0);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d0);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_5c8.SharedReferenceCount.ReferenceController._4_4_,
                        local_5c8.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_570._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar10) {
    SImage::FArguments::~FArguments(&local_2f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_308);
  if ((void *)local_308._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_308._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_308);
  if ((ITextData *)local_548._544_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_548._544_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_548._536_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_548._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_548);
  iVar12 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar12 < 1) goto LAB_14a80aecd;
  pSVar19 = (SImage *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (pSVar19 == (SImage *)0x0) {
LAB_14a80aeb3:
    pSVar19 = (SImage *)0x0;
  }
  else {
    pUVar20 = ULoadGuardSlot::StaticClass();
    iVar12 = (int)pUVar20->_padding_;
    if ((*(int *)(pSVar19->_padding_ + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pSVar19->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a80aeb3;
  }
  pTVar18 = TSharedPtr<SLoadGuard,1>::ToSharedRef(this_00,&local_558);
  ULoadGuardSlot::BuildSlot((ULoadGuardSlot *)pSVar19,pTVar18);
LAB_14a80aecd:
  if (this_00->Object == (SLoadGuard *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar21;
    }
  }
  pSVar5 = this_00->Object;
  pTVar4 = (this->MyLoadGuard).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (SLoadGuard *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar21;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811f00

void __thiscall UCommonLoadGuard::ReleaseSlateResources(UCommonLoadGuard *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyLoadGuard != (TSharedPtr<SLoadGuard,1> *)&local_18) {
    (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Serialize @ 14a8158b0

void __thiscall UCommonLoadGuard::Serialize(UCommonLoadGuard *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a8158d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&ECommonUIObjectVersion::Guid);
  return;
}

// Serialize @ 14a8158e0

void __thiscall UCommonLoadGuard::Serialize(UCommonLoadGuard *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&ECommonUIObjectVersion::Guid);
  return;
}

// SetIsLoading @ 14a8194b0

void __thiscall UCommonLoadGuard::SetIsLoading(UCommonLoadGuard *this,bool param_1)

{
  SLoadGuard *this_00;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = param_1;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// SetLoadingText @ 14a819f00

void __thiscall UCommonLoadGuard::SetLoadingText(UCommonLoadGuard *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  SLoadGuard *this_00;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->LoadingText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->LoadingText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->LoadingText).Flags = param_1->Flags;
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    SLoadGuard::SetGuardText(this_00,&this->LoadingText);
  }
  return;
}

// StaticRegisterNativesUCommonLoadGuard @ 14a81e6a0

void __cdecl UCommonLoadGuard::StaticRegisterNativesUCommonLoadGuard(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UCommonLoadGuard_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonLoadGuard::SynchronizeProperties(UCommonLoadGuard *this)

{
  byte bVar1;
  int iVar2;
  SLoadGuard *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UCommonTextStyle *pUVar8;
  FArguments *pFVar9;
  TSharedRef<SImage,1> *pTVar10;
  UClass *pUVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<SWidget,1> local_668;
  undefined2 local_657;
  undefined1 local_655;
  TSharedPtr<SWidget,1> local_650;
  TAttribute<FSlateBrush_const_*> local_640;
  TAttribute<FSlateBrush_const_*> local_618;
  TSharedRef<SImage,1> local_5f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_5e0;
  undefined1 local_5c8 [128];
  float local_548;
  FLinearColor_u_0 local_544 [14];
  FSlateBrush local_458 [2];
  FArguments local_2e8;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyLoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  pUVar11 = (this->TextStyle).Class.field0_0x0.DebugPtr;
  if ((pUVar11 == (UClass *)0x0) ||
     (pUVar7 = UCommonTextStyle::StaticClass(), pUVar7 == (UClass *)0x0)) goto LAB_14a8204e6;
  iVar2 = (int)pUVar7->_padding_;
  if (((int)pUVar11->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((!bVar6) || (pUVar11 = (this->TextStyle).Class.field0_0x0.DebugPtr, pUVar11 == (UClass *)0x0))
  goto LAB_14a8204e6;
  pUVar7 = UCommonTextStyle::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
LAB_14a8203c5:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar11->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14a8203c5;
    pUVar11 = (this->TextStyle).Class.field0_0x0.DebugPtr;
  }
  pUVar8 = GetDefault<UCommonTextStyle>(pUVar11);
  if (pUVar8 != (UCommonTextStyle *)0x0) {
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_5c8);
    FSlateFontInfo::operator=((FSlateFontInfo *)(local_5c8 + 8),&pUVar8->Font);
    local_668.Object = *(SWidget **)&(pUVar8->Color).field0_0x0;
    local_668.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)&(pUVar8->Color).field0_0x0 + 8);
    local_5c8[0x78] = UseColor_Specified;
    local_5c8._121_2_ = local_657;
    local_5c8[0x7b] = local_655;
    local_5c8._104_8_ = local_668.Object;
    local_5c8._112_8_ = local_668.SharedReferenceCount.ReferenceController;
    FSlateBrush::operator=(local_458,&pUVar8->StrikeBrush);
    if (pUVar8->bUsesDropShadow != false) {
      local_5c8._124_4_ = (undefined4)(pUVar8->ShadowOffset).field0_0x0._s_0.X;
      local_548 = (float)(pUVar8->ShadowOffset).field0_0x0._s_0.Y;
      local_544[0]._0_8_ = *(undefined8 *)&(pUVar8->ShadowColor).field0_0x0;
      local_544[0]._8_8_ = *(undefined8 *)((longlong)&(pUVar8->ShadowColor).field0_0x0 + 8);
    }
    if (((this->MyLoadGuard).Object == (SLoadGuard *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar3 = (this->MyLoadGuard).Object;
    if (((pSVar3->GuardTextBlock).Object == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    STextBlock::SetTextStyle((pSVar3->GuardTextBlock).Object,(FTextBlockStyle *)local_5c8);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_5c8);
  }
LAB_14a8204e6:
  if (((this->MyLoadGuard).Object == (SLoadGuard *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SLoadGuard::SetGuardText((this->MyLoadGuard).Object,&this->LoadingText);
  if (((this->MyLoadGuard).Object == (SLoadGuard *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar3 = (this->MyLoadGuard).Object;
  if ((this->LoadingThrobberBrush).DrawAs.Value == '\0') {
    local_668.Object = (SWidget *)0x0;
    local_668.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SLoadGuard::SetThrobber(pSVar3,&local_668);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar9 = SImage::FArguments::FArguments(&local_2e8);
    local_640.Getter._16_8_ = 0;
    local_640.bIsSet = true;
    local_640.Getter._0_8_ = 0;
    local_640.Getter._8_8_ = 0;
    local_640.Value = &this->LoadingThrobberBrush;
    pFVar9 = SImage::FArguments::Image(pFVar9,&local_640);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_5e0,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
               ,0x19b,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5e0,&local_5f0,pFVar9);
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_650.Object = (SWidget *)pTVar10->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_650.SharedReferenceCount.ReferenceController = pTVar4;
    SLoadGuard::SetThrobber(pSVar3,&local_650);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e0._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_2e8);
  }
  if (((this->MyLoadGuard).Object == (SLoadGuard *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar3 = (this->MyLoadGuard).Object;
  bVar1 = (this->ThrobberAlignment).Value;
  if (((pSVar3->GuardBorder).Object == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SBorder::SetHAlign((pSVar3->GuardBorder).Object,(uint)bVar1);
  if (((this->MyLoadGuard).Object == (SLoadGuard *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pSVar3 = (this->MyLoadGuard).Object;
  if (((pSVar3->GuardBorder).Object == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_618.Value = &this->LoadingBackgroundBrush;
  local_618.bIsSet = true;
  local_618.Getter._16_8_ = 0;
  local_618.Getter._0_8_ = 0;
  local_618.Getter._8_8_ = 0;
  SBorder::SetBorderImage((pSVar3->GuardBorder).Object,&local_618);
  return;
}

// execBP_GuardAndLoadAsset @ 14a82c590

void __cdecl
UCommonLoadGuard::execBP_GuardAndLoadAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  TSoftObjectPtr<UObject> *pTVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  FUtf8String local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  atomic<unsigned___int64> local_78;
  atomic<unsigned___int64> local_70;
  FReadAccessScope local_68;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_a8._0_8_ = 0;
  local_a8._16_8_ = 0;
  local_a8._8_8_ = 0;
  FUtf8String::Reset(&local_90,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0 = 0;
  pTVar3 = (TSoftObjectPtr<UObject> *)local_a8;
  if ((TSoftObjectPtr<UObject> *)param_2->MostRecentPropertyAddress !=
      (TSoftObjectPtr<UObject> *)0x0) {
    pTVar3 = (TSoftObjectPtr<UObject> *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  this = &local_d8;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_c0);
  local_78 = this[1].AccessDetector.State;
  local_70 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_c0);
  local_c0._0_8_ = (atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_80,&local_68);
  local_c0._8_8_ = local_78;
  local_c0._16_8_ = local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  local_48[0] = (code *)0x0;
  puVar2 = FMemory::Malloc(0x20,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UCommonLoadGuard::BP_GuardAndLoadAsset'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[3] = 0;
  local_20 = puVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,&local_68);
  *(undefined8 *)(puVar2 + 2) = local_c0._8_8_;
  *(undefined8 *)(puVar2 + 3) = local_c0._16_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCommonLoadGuard::BP_GuardAndLoadAsset'::__l2::<lambda_1>,void,UObject_*>
                  ::Call;
  }
  GuardAndLoadAsset<UObject>
            ((UCommonLoadGuard *)param_1,pTVar3,(TFunction<void___cdecl(UObject_*)> *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsLoading @ 14a830590

void __cdecl UCommonLoadGuard::execIsLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 0x17) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x17) + 0x331) != '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetIsLoading @ 14a833a10

void __cdecl UCommonLoadGuard::execSetIsLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SLoadGuard *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SLoadGuard **)(param_1 + 0x17);
  if (this != (SLoadGuard *)0x0) {
    this->bForceShowSpinner = local_res8[0] != 0;
    SLoadGuard::UpdateLoadingAppearance(this);
  }
  return;
}

// execSetLoadingText @ 14a834600

void __cdecl UCommonLoadGuard::execSetLoadingText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar4 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = (pFVar4->TextData).Reference;
  pIVar3 = *(ITextData **)(param_1 + 0x15);
  if (pIVar3 != pIVar2) {
    *(ITextData **)(param_1 + 0x15) = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&param_1[0x15].field_0x8 = pFVar4->Flags;
  if (*(SLoadGuard **)(param_1 + 0x17) != (SLoadGuard *)0x0) {
    SLoadGuard::SetGuardText(*(SLoadGuard **)(param_1 + 0x17),(FText *)(param_1 + 0x15));
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

