// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 28

// StaticClass @ 14a783d00

UClass * __cdecl UCommonAnimatedSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonAnimatedSwitcher",
               &Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton,
               StaticRegisterNativesUCommonAnimatedSwitcher,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonAnimatedSwitcher>,
               InternalVTableHelperCtorCaller<UCommonAnimatedSwitcher>,local_res8,
               UWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton;
}

// UCommonAnimatedSwitcher @ 14a7abed0

UCommonAnimatedSwitcher * __thiscall
UCommonAnimatedSwitcher::UCommonAnimatedSwitcher
          (UCommonAnimatedSwitcher *this,FVTableHelper *param_1)

{
  UWidgetSwitcher::UWidgetSwitcher((UWidgetSwitcher *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnActiveWidgetIndexChanged = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransitioningChanged = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnActiveWidgetIndexChangedBP = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedBP).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedBP).field_0x10 = 0;
  this->TransitionFallbackStrategy = None;
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyInputGuard).Object = (SSpacer *)0x0;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MyAnimatedSwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
  (this->MyAnimatedSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bInstantTransition = false;
  this->bSetOnce = false;
  this->bCurrentlySwitching = false;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x18 = 2;
  return this;
}

// UCommonAnimatedSwitcher @ 14a7abfa0

UCommonAnimatedSwitcher * __thiscall
UCommonAnimatedSwitcher::UCommonAnimatedSwitcher
          (UCommonAnimatedSwitcher *this,FObjectInitializer *param_1)

{
  UWidgetSwitcher::UWidgetSwitcher((UWidgetSwitcher *)this,param_1);
  this->TransitionType = FadeOnly;
  this->TransitionCurveType = CubicInOut;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnActiveWidgetIndexChanged = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransitioningChanged = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnActiveWidgetIndexChangedBP = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedBP).field_0x8 = 0;
  *(undefined8 *)&(this->OnActiveWidgetIndexChangedBP).field_0x10 = 0;
  this->TransitionFallbackStrategy = None;
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyInputGuard).Object = (SSpacer *)0x0;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MyAnimatedSwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
  (this->MyAnimatedSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bInstantTransition = false;
  this->bSetOnce = false;
  this->bCurrentlySwitching = false;
  *(undefined8 *)&(this->OnActiveWidgetIndexChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnTransitioningChanged).field_0x18 = 2;
  this->TransitionDuration = 0.4;
  return this;
}

// ~UCommonAnimatedSwitcher @ 14a7b1f50

void __thiscall UCommonAnimatedSwitcher::~UCommonAnimatedSwitcher(UCommonAnimatedSwitcher *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAnimatedSwitcher).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyInputGuard).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyOverlay).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnActiveWidgetIndexChangedBP).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveWidgetIndexChangedBP);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTransitioningChanged).field_0x8,
             *(int *)&(this->OnTransitioningChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnTransitioningChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTransitioningChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActiveWidgetIndexChanged).field_0x8,
             *(int *)&(this->OnActiveWidgetIndexChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnActiveWidgetIndexChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActiveWidgetIndexChanged);
  UWidgetSwitcher::~UWidgetSwitcher((UWidgetSwitcher *)this);
  return;
}

// ActivateNextWidget @ 14a7bd6c0

void __thiscall
UCommonAnimatedSwitcher::ActivateNextWidget(UCommonAnimatedSwitcher *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this->_padding_;
  if (1 < iVar1) {
    iVar2 = (int)this->_padding_;
    if (iVar2 != iVar1 + -1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7bd6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x330))(this,iVar2 + 1);
      return;
    }
    if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7bd6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x330))(this,0);
      return;
    }
  }
  return;
}

// ActivatePreviousWidget @ 14a7bd700

void __thiscall
UCommonAnimatedSwitcher::ActivatePreviousWidget(UCommonAnimatedSwitcher *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this->_padding_;
  if (1 < iVar1) {
    iVar2 = (int)this->_padding_;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7bd730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x330))(this,iVar2 + -1);
      return;
    }
    if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7bd724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x330))(this,iVar1 + -1);
      return;
    }
  }
  return;
}

// GetPendingActiveWidget @ 14a7e4580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UCommonAnimatedSwitcher::GetPendingActiveWidget(UCommonAnimatedSwitcher *this)

{
  uint uVar1;
  SCommonAnimatedSwitcher *pSVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWidget *pUVar6;
  
  pSVar2 = (this->MyAnimatedSwitcher).Object;
  if ((pSVar2 == (SCommonAnimatedSwitcher *)0x0) ||
     (uVar1 = pSVar2->PendingActiveWidgetIndex, (int)uVar1 < 0)) {
    return (UWidget *)0x0;
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)this->_padding_)) {
    uVar5 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UWidget *)(*pcVar3)();
        return pUVar6;
      }
    }
    return *(UWidget **)(*(longlong *)(this->_padding_ + (longlong)(int)uVar1 * 8) + 0x30);
  }
  return (UWidget *)0x0;
}

// GetPendingActiveWidgetIndex @ 14a7e45b0

int __thiscall UCommonAnimatedSwitcher::GetPendingActiveWidgetIndex(UCommonAnimatedSwitcher *this)

{
  SCommonAnimatedSwitcher *pSVar1;
  
  pSVar1 = (this->MyAnimatedSwitcher).Object;
  if (pSVar1 != (SCommonAnimatedSwitcher *)0x0) {
    return pSVar1->PendingActiveWidgetIndex;
  }
  return -1;
}

// GetPrivateStaticClass @ 14a7e4c40

UClass * __cdecl UCommonAnimatedSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonAnimatedSwitcher",
               &Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton,
               StaticRegisterNativesUCommonAnimatedSwitcher,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonAnimatedSwitcher>,
               InternalVTableHelperCtorCaller<UCommonAnimatedSwitcher>,local_res8,
               UWidgetSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonAnimatedSwitcher.InnerSingleton;
}

// HandleOutgoingWidget @ 14a7ee290

void __thiscall UCommonAnimatedSwitcher::HandleOutgoingWidget(UCommonAnimatedSwitcher *this)

{
  return;
}

// HandleSlateActiveIndexChanged @ 14a7efcc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonAnimatedSwitcher::HandleSlateActiveIndexChanged(UCommonAnimatedSwitcher *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UWidget *pUVar10;
  uint uVar11;
  longlong lVar12;
  UWidget *local_58;
  int local_50;
  FDestructionSentinel local_48;
  
  iVar2 = (int)this->_padding_;
  if ((-1 < iVar2) && (iVar2 < (int)this->_padding_)) {
    pUVar10 = UWidgetSwitcher::GetWidgetAtIndex((UWidgetSwitcher *)this,iVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnActiveWidgetIndexChanged,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnActiveWidgetIndexChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar11 = *(int *)&(this->OnActiveWidgetIndexChanged).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&(this->OnActiveWidgetIndexChanged).field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnActiveWidgetIndexChanged).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar12) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar12), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,pUVar10,iVar2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(this->OnActiveWidgetIndexChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnActiveWidgetIndexChanged,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    iVar2 = (int)this->_padding_;
    local_58 = UWidgetSwitcher::GetWidgetAtIndex((UWidgetSwitcher *)this,iVar2);
    local_50 = iVar2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnActiveWidgetIndexChangedBP,&local_58);
  }
  return;
}

// HandleSlateIsTransitioningChanged @ 14a7eff30

void __thiscall
UCommonAnimatedSwitcher::HandleSlateIsTransitioningChanged
          (UCommonAnimatedSwitcher *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->MyInputGuard).Object == (SSpacer *)0x0) {
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
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_28.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->MyInputGuard).Object,&local_28);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnTransitioningChanged,param_1);
  return;
}

// HasWidgets @ 14a7f2080

bool __thiscall UCommonAnimatedSwitcher::HasWidgets(UCommonAnimatedSwitcher *this)

{
  return 0 < (int)this->_padding_;
}

// IsCurrentlySwitching @ 14a7f5290

bool __thiscall UCommonAnimatedSwitcher::IsCurrentlySwitching(UCommonAnimatedSwitcher *this)

{
  return this->bCurrentlySwitching;
}

// IsTransitionPlaying @ 14a7f72a0

bool __thiscall UCommonAnimatedSwitcher::IsTransitionPlaying(UCommonAnimatedSwitcher *this)

{
  SCommonAnimatedSwitcher *pSVar1;
  bool bVar2;
  
  pSVar1 = (this->MyAnimatedSwitcher).Object;
  if (pSVar1 != (SCommonAnimatedSwitcher *)0x0) {
    bVar2 = FCurveSequence::IsPlaying(&pSVar1->TransitionSequence);
    return bVar2;
  }
  return false;
}

// RebuildWidget @ 14a807290

TSharedRef<SWidget,1> * __thiscall
UCommonAnimatedSwitcher::RebuildWidget
          (UCommonAnimatedSwitcher *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SCommonAnimatedSwitcher,1> *pTVar1;
  int iVar2;
  int iVar3;
  UWidgetSwitcherSlot *this_00;
  TReferenceControllerBase<1> *pTVar4;
  SCommonAnimatedSwitcher *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TSharedRef<SCommonAnimatedSwitcher,1> *pTVar14;
  UClass *pUVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FArguments *pFVar17;
  FSlotArguments *pFVar18;
  FArguments *pFVar19;
  TSharedRef<SSpacer,1> *pTVar20;
  TSharedRef<SOverlay,1> *pTVar21;
  undefined8 *puVar22;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_918;
  FLLMScope local_914;
  FLLMScope local_910 [2];
  FMemScope local_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  SCommonAnimatedSwitcher *local_8f8;
  FSharedReferencer<1> local_8f0;
  SSpacer *local_8e8;
  FSharedReferencer<1> local_8e0;
  SCommonAnimatedSwitcher *local_8d8;
  FSharedReferencer<1> local_8d0;
  SCommonAnimatedSwitcher *local_8c8;
  FSharedReferencer<1> local_8c0;
  uchar local_8b8;
  undefined1 local_8b7;
  undefined1 local_8b0 [8];
  void *pvStack_8a8;
  undefined8 local_8a0;
  UCommonAnimatedSwitcher *local_898;
  UCommonAnimatedSwitcher *local_890;
  FName local_888;
  FMemScope local_880;
  FName local_878;
  FMemScope local_870;
  FName local_868;
  TSharedRef<SWidgetSwitcher,1> local_860;
  TSharedRef<SSpacer,1> local_850;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_840;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_828;
  SSpacer *local_810;
  TReferenceControllerBase<1> *pTStack_808;
  SOverlay *local_800;
  TReferenceControllerBase<1> *pTStack_7f8;
  FDestructionSentinel local_7f0;
  undefined1 *local_7d8;
  FDestructionSentinel local_7d0;
  undefined1 *local_7b8;
  TSharedRef<SCommonAnimatedSwitcher,1> local_7b0;
  TSharedRef<SOverlay,1> local_7a0;
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs> local_790;
  undefined1 local_778 [56];
  void *local_740;
  undefined1 local_718 [56];
  void *local_6e0;
  undefined1 local_6b8 [520];
  undefined1 local_4b0 [24];
  undefined1 local_498 [24];
  FArguments local_480;
  undefined1 local_278 [528];
  undefined1 local_68 [40];
  
  pFVar11 = SCommonAnimatedSwitcher::FArguments::FArguments((FArguments *)local_6b8);
  uStack_900 = 0;
  pFVar11->_InitialIndex = (int)this->_padding_;
  pFVar11->_TransitionCurveType = this->TransitionCurveType;
  pFVar11->_TransitionDuration = this->TransitionDuration;
  pFVar11->_TransitionType = this->TransitionType;
  pFVar11->_TransitionFallbackStrategy = this->TransitionFallbackStrategy;
  local_908 = (FMemScope)_vcall__832__flat______;
  uStack_8fc = local_850.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar11->_OnActiveIndexChanged,(FWriteAccessScope *)&local_7f0);
  local_7d8 = &(pFVar11->_OnActiveIndexChanged).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_7d8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_898 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_898);
    *(FMemScope *)(puVar12 + 4) = local_908;
    puVar12[5] = CONCAT44(uStack_8fc,uStack_900);
  }
  if (local_7f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f0.Accessor,&local_7f0);
  }
  uStack_900 = 0;
  local_908 = (FMemScope)_vcall__840__flat______;
  uStack_8fc = local_850.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar11->_OnIsTransitioningChanged,(FWriteAccessScope *)&local_7d0);
  local_7b8 = &(pFVar11->_OnIsTransitioningChanged).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_7b8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_890 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_890);
    *(FMemScope *)(puVar12 + 4) = local_908;
    puVar12[5] = CONCAT44(uStack_8fc,uStack_900);
  }
  if (local_7d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d0.Accessor,&local_7d0);
  }
  FLLMScope::FLLMScope(&local_918,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_888 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_880,&local_888,true);
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_790,"SCommonAnimatedSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonAnimatedSwitcher.cpp"
             ,0x73,local_res10);
  FMemScope::~FMemScope(&local_880);
  FLLMScope::~FLLMScope(&local_918);
  pTVar14 = TSlateDecl<SCommonAnimatedSwitcher,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_790,&local_7b0,pFVar11);
  local_8d0.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
  local_8d8 = pTVar14->Object;
  if (local_8d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_8d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyAnimatedSwitcher;
  if (pTVar1 != (TSharedPtr<SCommonAnimatedSwitcher,1> *)&local_8d8) {
    pTVar1->Object = local_8d8;
    local_8d8 = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAnimatedSwitcher).SharedReferenceCount,&local_8d0);
  }
  FVar9.ReferenceController = local_8d0.ReferenceController;
  local_8c0.ReferenceController =
       (this->MyAnimatedSwitcher).SharedReferenceCount.ReferenceController;
  local_8c8 = pTVar1->Object;
  if (local_8c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_8c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SCommonAnimatedSwitcher **)&this->_padding_ != &local_8c8) {
    this->_padding_ = (longlong)local_8c8;
    local_8c8 = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_8c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_790._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
  if ((void *)local_498._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_498._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_498);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b0);
  if ((void *)local_4b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4b0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_6b8);
  puVar22 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar12 = puVar22 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar22 == puVar12) break;
    this_00 = (UWidgetSwitcherSlot *)*puVar22;
    if (this_00 != (UWidgetSwitcherSlot *)0x0) {
      pUVar15 = Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();
      iVar3 = (int)pUVar15->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar15->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if (this->_padding_ == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
            return pTVar16;
          }
        }
        local_860.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)this->_padding_;
        local_860.Object = (SWidgetSwitcher *)this->_padding_;
        if (local_860.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_860.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_860.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_860.Object == (SWidgetSwitcher *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
            return pTVar16;
          }
        }
        UWidgetSwitcherSlot::BuildSlot(this_00,&local_860);
      }
    }
    puVar22 = puVar22 + 1;
  }
  pFVar17 = SOverlay::FArguments::FArguments(&local_480);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_718,0);
  if ((this->MyAnimatedSwitcher).Object == (SCommonAnimatedSwitcher *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  pTVar4 = (this->MyAnimatedSwitcher).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->MyAnimatedSwitcher).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (SCommonAnimatedSwitcher *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar16;
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8f8 = pSVar5;
  local_8f0.ReferenceController = pTVar4;
  if ((SCommonAnimatedSwitcher **)&pFVar18->_padding_ != &local_8f8) {
    pFVar18->_padding_ = (longlong)pSVar5;
    local_8f8 = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_8f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar18);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_778,0);
  pFVar19 = SSpacer::FArguments::FArguments((FArguments *)local_278);
  local_8b8 = (uchar)EVisibility::Collapsed.Value.Value;
  local_8b7 = 1;
  local_8a0 = 0;
  local_8b0 = (undefined1  [8])0x0;
  pvStack_8a8 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar19->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
  if (pvStack_8a8 != (void *)0x0) {
    FMemory::Free(pvStack_8a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b0);
  FLLMScope::FLLMScope(&local_914,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_878 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_870,&local_878,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_828,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonAnimatedSwitcher.cpp"
             ,0x8d,local_res18);
  FMemScope::~FMemScope(&local_870);
  FLLMScope::~FLLMScope(&local_914);
  local_810 = local_828._Widget.Object;
  pTStack_808 = local_828._Widget.SharedReferenceCount.ReferenceController;
  if (local_828._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_828._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_828._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar6 = (this->MyInputGuard).SharedReferenceCount.ReferenceController;
  (this->MyInputGuard).Object = local_828._Widget.Object;
  (this->MyInputGuard).SharedReferenceCount.ReferenceController =
       local_828._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar20 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_828,&local_850,pFVar19);
  pTVar6 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_8e8 = pTVar20->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8e0.ReferenceController = pTVar6;
  if ((SSpacer **)&pFVar18->_padding_ != &local_8e8) {
    pFVar18->_padding_ = (longlong)local_8e8;
    local_8e8 = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_8e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e0.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar18);
  FLLMScope::FLLMScope(local_910,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_868 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_908,&local_868,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_840,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonAnimatedSwitcher.cpp"
             ,0x86,local_res20);
  FMemScope::~FMemScope(&local_908);
  FLLMScope::~FLLMScope(local_910);
  local_800 = local_840._Widget.Object;
  pTStack_7f8 = local_840._Widget.SharedReferenceCount.ReferenceController;
  if (local_840._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_840._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_840._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar7 = (this->MyOverlay).SharedReferenceCount.ReferenceController;
  (this->MyOverlay).Object = local_840._Widget.Object;
  (this->MyOverlay).SharedReferenceCount.ReferenceController =
       local_840._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar21 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_840,&local_7a0,pFVar17);
  __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
  pTVar7 = (pTVar21->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_840._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_850.SharedReferenceCount.ReferenceController._4_4_,
                      local_850.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_278);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_778 + 0x30));
  if (local_740 != (void *)0x0) {
    FMemory::Free(local_740);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_778 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_778._16_8_);
  if ((undefined8 *)local_778._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_778._0_8_)(local_778._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_718 + 0x30));
  if (local_6e0 != (void *)0x0) {
    FMemory::Free(local_6e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_718 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_718._16_8_);
  if ((undefined8 *)local_718._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_718._0_8_)(local_718._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_480._Slots.AllocatorInstance.Data,local_480._Slots.ArrayNum);
  if ((FSlotArguments *)local_480._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_480._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_480);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811bc0

void __thiscall
UCommonAnimatedSwitcher::ReleaseSlateResources(UCommonAnimatedSwitcher *this,bool param_1)

{
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UWidgetSwitcher::ReleaseSlateResources((UWidgetSwitcher *)this,param_1);
  this->bSetOnce = false;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyOverlay != (TSharedPtr<SOverlay,1> *)&local_38) {
    (this->MyOverlay).Object = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyOverlay).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyInputGuard != (TSharedPtr<SSpacer,1> *)&local_28) {
    (this->MyInputGuard).Object = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyInputGuard).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyAnimatedSwitcher != (TSharedPtr<SCommonAnimatedSwitcher,1> *)&local_18) {
    (this->MyAnimatedSwitcher).Object = (SCommonAnimatedSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyAnimatedSwitcher).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetActiveWidget @ 14a816260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonAnimatedSwitcher::SetActiveWidget(UCommonAnimatedSwitcher *this,UWidget *param_1)

{
  int iVar1;
  
  iVar1 = UPanelWidget::GetChildIndex((UPanelWidget *)this,param_1);
  SetActiveWidgetIndex_Internal(this,iVar1);
  return;
}

// SetActiveWidgetIndex @ 14a816470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonAnimatedSwitcher::SetActiveWidgetIndex(UCommonAnimatedSwitcher *this,int param_1)

{
  TSharedPtr<SCommonAnimatedSwitcher,1> *this_00;
  bool bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  SCommonAnimatedSwitcher *this_01;
  int iVar5;
  longlong *plVar6;
  FFieldId FStack_38;
  
  bVar1 = this->bCurrentlySwitching;
  this->bCurrentlySwitching = true;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    if ((param_1 == (int)this->_padding_) && (this->bSetOnce != false)) {
      this->bCurrentlySwitching = bVar1;
    }
    else {
      (**(code **)(this->_padding_ + 0x350))();
      this_00 = &this->MyAnimatedSwitcher;
      if ((this->bSetOnce == false) &&
         ((this_00->Object == (SCommonAnimatedSwitcher *)0x0 ||
          (piVar4 = TAttribute<int>::Get((TAttribute<int> *)&this_00->Object->_padding_),
          param_1 == *piVar4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      plVar6 = &this->_padding_;
      if ((int)*plVar6 != param_1) {
        *(int *)plVar6 = param_1;
        FStack_38.FieldName =
             UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
        FStack_38.BitNumber =
             UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&FStack_38);
      }
      if (this_00->Object != (SCommonAnimatedSwitcher *)0x0) {
        iVar5 = (int)this->_padding_ + -1;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if ((int)*plVar6 < iVar5) {
          iVar5 = (int)*plVar6;
        }
        this_01 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(this_00);
        iVar2 = 0;
        if (0 < iVar5) {
          iVar2 = iVar5;
        }
        SCommonAnimatedSwitcher::TransitionToIndex(this_01,iVar2,this->bInstantTransition);
      }
      if (bVar3) {
        (**(code **)(this->_padding_ + 0x340))(this,(int)*plVar6);
      }
      this->bSetOnce = true;
      this->bCurrentlySwitching = bVar1;
    }
    return;
  }
  this->bCurrentlySwitching = bVar1;
  return;
}

// SetActiveWidgetIndex_Internal @ 14a816610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonAnimatedSwitcher::SetActiveWidgetIndex_Internal(UCommonAnimatedSwitcher *this,int param_1)

{
  TSharedPtr<SCommonAnimatedSwitcher,1> *this_00;
  bool bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  SCommonAnimatedSwitcher *this_01;
  int iVar5;
  longlong *plVar6;
  FFieldId local_38;
  
  bVar1 = this->bCurrentlySwitching;
  this->bCurrentlySwitching = true;
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    if ((param_1 == (int)this->_padding_) && (this->bSetOnce != false)) {
      this->bCurrentlySwitching = bVar1;
    }
    else {
      (**(code **)(this->_padding_ + 0x350))();
      this_00 = &this->MyAnimatedSwitcher;
      if ((this->bSetOnce == false) &&
         ((this_00->Object == (SCommonAnimatedSwitcher *)0x0 ||
          (piVar4 = TAttribute<int>::Get((TAttribute<int> *)&this_00->Object->_padding_),
          param_1 == *piVar4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      plVar6 = &this->_padding_;
      if ((int)*plVar6 != param_1) {
        *(int *)plVar6 = param_1;
        local_38.FieldName =
             UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
        local_38.BitNumber =
             UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_38);
      }
      if (this_00->Object != (SCommonAnimatedSwitcher *)0x0) {
        iVar5 = (int)this->_padding_ + -1;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if ((int)*plVar6 < iVar5) {
          iVar5 = (int)*plVar6;
        }
        this_01 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(this_00);
        iVar2 = 0;
        if (0 < iVar5) {
          iVar2 = iVar5;
        }
        SCommonAnimatedSwitcher::TransitionToIndex(this_01,iVar2,this->bInstantTransition);
      }
      if (bVar3) {
        (**(code **)(this->_padding_ + 0x340))(this,(int)*plVar6);
      }
      this->bSetOnce = true;
      this->bCurrentlySwitching = bVar1;
    }
    return;
  }
  this->bCurrentlySwitching = bVar1;
  return;
}

// SetDisableTransitionAnimation @ 14a817f20

void __thiscall
UCommonAnimatedSwitcher::SetDisableTransitionAnimation(UCommonAnimatedSwitcher *this,bool param_1)

{
  this->bInstantTransition = param_1;
  return;
}

// StaticRegisterNativesUCommonAnimatedSwitcher @ 14a81e340

void __cdecl UCommonAnimatedSwitcher::StaticRegisterNativesUCommonAnimatedSwitcher(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivateNextWidget @ 14a82ba00

void __cdecl
UCommonAnimatedSwitcher::execActivateNextWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  if (1 < *(int *)(param_1 + 0xb)) {
    if (*(int *)&param_1[0xb].field_0x10 == *(int *)(param_1 + 0xb) + -1) {
      if (local_res8[0] == 0) {
        return;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)&param_1[0xb].field_0x10 + 1;
    }
    (**(code **)(*(longlong *)param_1 + 0x330))(param_1,iVar2);
  }
  return;
}

// execActivatePreviousWidget @ 14a82bab0

void __cdecl
UCommonAnimatedSwitcher::execActivatePreviousWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((1 < *(int *)(param_1 + 0xb)) &&
     ((iVar1 = *(int *)&param_1[0xb].field_0x10, *(int *)&param_1[0xb].field_0x10 != 0 ||
      (iVar1 = *(int *)(param_1 + 0xb), local_res8[0] != 0)))) {
    (**(code **)(*(longlong *)param_1 + 0x330))(param_1,iVar1 + -1);
  }
  return;
}

// execHasWidgets @ 14a8300f0

void __cdecl UCommonAnimatedSwitcher::execHasWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)(param_1 + 0xb);
  return;
}

// execIsCurrentlySwitching @ 14a830390

void __cdecl
UCommonAnimatedSwitcher::execIsCurrentlySwitching(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xf].field_0x22;
  return;
}

// execIsTransitionPlaying @ 14a830750

void __cdecl
UCommonAnimatedSwitcher::execIsTransitionPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xf].field_0x10 != 0) {
    bVar1 = FCurveSequence::IsPlaying
                      ((FCurveSequence *)(*(longlong *)&param_1[0xf].field_0x10 + 0x2a8));
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetDisableTransitionAnimation @ 14a832da0

void __cdecl
UCommonAnimatedSwitcher::execSetDisableTransitionAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_1[0xf].field_0x20 = local_res8[0] != 0;
  return;
}

