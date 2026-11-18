// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 21

// ~SSidebarDrawer @ 142d67810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSidebarDrawer::~SSidebarDrawer(SSidebarDrawer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateApplication *pFVar5;
  FSlateThrottleManager *pFVar6;
  
  this->_padding_ = (longlong)&___7SSidebarDrawer__6B_;
  pFVar5 = FSlateApplication::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar5->FocusChangingDelegate,
             this);
  pFVar6 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(pFVar6,&this->AnimationThrottle);
  pFVar6 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(pFVar6,&this->ResizeThrottleHandle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenCloseTimer).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&this->OpenCloseAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOpenAnimationFinish);
  pvVar3 = *(void **)&(this->OnOpenAnimationFinish).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpenAnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCloseAnimationFinish);
  pvVar3 = *(void **)&(this->OnCloseAnimationFinish).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCloseAnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerFocusLost);
  pvVar3 = *(void **)&(this->OnDrawerFocusLost).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerFocusLost);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerFocused);
  pvVar3 = *(void **)&(this->OnDrawerFocused).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerFocused);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerSizeChanged);
  pvVar3 = *(void **)&(this->OnDrawerSizeChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerSizeChanged);
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Close @ 142d75340

void __thiscall SSidebarDrawer::Close(SSidebarDrawer *this,bool param_1)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  bool bVar2;
  FThrottleRequest FVar3;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar4;
  TSharedRef<FActiveTimerHandle,1> *pTVar5;
  float fVar6;
  FActiveTimerHandle *local_58;
  FSharedReferencer<1> local_50;
  code *local_48;
  undefined8 uStack_40;
  TSharedRef<FActiveTimerHandle,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  if (!param_1) {
    fVar6 = this->TargetDrawerSize;
    if (0.0 <= fVar6) {
      fVar6 = 0.0;
    }
    if (fVar6 <= this->MinDrawerSize) {
      fVar6 = this->MinDrawerSize;
    }
    this->CurrentSize = fVar6;
    FCurveSequence::JumpToStart(&this->OpenCloseAnimation);
    return;
  }
  bVar2 = FCurveSequence::IsForward(&this->OpenCloseAnimation);
  if (bVar2) {
    FCurveSequence::Reverse(&this->OpenCloseAnimation);
  }
  pTVar1 = &this->OpenCloseTimer;
  if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
    this_00 = FSlateThrottleManager::Get();
    FVar3 = FSlateThrottleManager::EnterResponsiveMode(this_00);
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    (this->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar3.Index);
    local_48 = UpdateAnimation;
    pTVar4 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<SSidebarDrawer>(&local_28,this,(pmf_e3dee309 *)&local_48);
    pTVar5 = SWidget::RegisterActiveTimer((SWidget *)this,&local_38,0.0,pTVar4);
    local_50.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_58 = pTVar5->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_58) {
      pTVar1->Object = local_58;
      local_58 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenCloseTimer).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ComputeDesiredSize @ 142d768b0

TVector2<double> * __thiscall
SSidebarDrawer::ComputeDesiredSize
          (SSidebarDrawer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  ESidebarTabLocation EVar3;
  
  EVar3 = this->TabLocation;
  if ((EVar3 == Left) || (EVar3 == Right)) {
    fVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
    fVar2 = this->TargetDrawerSize;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 + fVar2);
    return __return_storage_ptr__;
  }
  if ((EVar3 != Top) && (EVar3 != Bottom)) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector;
    return __return_storage_ptr__;
  }
  fVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
  fVar2 = this->TargetDrawerSize;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 + fVar2);
  return __return_storage_ptr__;
}

// Construct @ 142d8b110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSidebarDrawer::Construct
          (SSidebarDrawer *this,FArguments *param_1,TSharedRef<FSidebarDrawer,1> *param_2,
          ESidebarTabLocation param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSidebarDrawer *pFVar8;
  SWidget *pSVar9;
  SBox *pSVar10;
  code *pcVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FCurveSequence *pFVar14;
  FSlateApplication *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SBox,1> *pTVar17;
  longlong *plVar18;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  T0RequiredArgs local_res20 [8];
  undefined1 local_498 [8];
  ForAnyElementType local_490;
  int local_488;
  SBox *local_480;
  TReferenceControllerBase<1> *pTStack_478;
  code *local_468;
  undefined8 uStack_460;
  FDestructionSentinel local_458;
  SWidget *local_438;
  TReferenceControllerBase<1> *pTStack_430;
  TSharedRef<SBox,1> local_428;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_418;
  FReadAccessScope local_400;
  FCurveSequence local_3e8;
  FArguments local_378;
  
  if ((param_2->Object->ContentWidget).Object == (SWidget *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InDrawer->ContentWidget.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawer.cpp"
                        ,0x14,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  (this->DrawerWeak).Object = param_2->Object;
  pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (this->DrawerWeak).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (this->DrawerWeak).WeakReferenceCount.ReferenceController = pTVar6;
  }
  this->TabLocation = param_3;
  fVar3 = param_1->_MinDrawerSize;
  this->MinDrawerSize = fVar3;
  fVar4 = param_1->_MaxDrawerSize;
  this->MaxDrawerSize = fVar4;
  fVar5 = param_1->_TargetDrawerSize;
  if (fVar4 <= param_1->_TargetDrawerSize) {
    fVar5 = fVar4;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  this->TargetDrawerSize = fVar5;
  (this->ShadowOffset).field0_0x0 = *(TVector2<float>_u_0 *)&param_1->_ShadowOffset;
  this->ExpanderHandleSize = param_1->_ExpanderHandleSize;
  if (&param_1->_OnDrawerSizeChanged != &this->OnDrawerSizeChanged) {
    local_498 = (undefined1  [8])0x0;
    local_490.Data = (FScriptContainerElement *)0x0;
    local_488 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnDrawerSizeChanged,&local_400);
    if ((*(int *)&(param_1->_OnDrawerSizeChanged).field_0x10 != 0) &&
       (plVar18 = *(longlong **)&(param_1->_OnDrawerSizeChanged).field_0x8,
       plVar18 != (longlong *)0x0)) {
      (**(code **)(*plVar18 + 0x50))(plVar18,local_498);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_400);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerSizeChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_498,
               (FWriteAccessScope *)&local_458);
    if ((local_488 != 0) && (local_490.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_490.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_490,0,0,0x10);
      local_488 = 0;
    }
    if (local_458.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
    }
    if (local_490.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_498);
  }
  TDelegate<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDrawerFocused,&param_1->_OnDrawerFocused);
  TDelegate<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDrawerFocusLost,&param_1->_OnDrawerFocusLost);
  TDelegate<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnCloseAnimationFinish,&param_1->_OnCloseAnimationFinish);
  TDelegate<void___cdecl(TSharedRef<SSidebarDrawer,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnOpenAnimationFinish,&param_1->_OnOpenAnimationFinish);
  pFVar14 = FCurveSequence::FCurveSequence(&local_3e8,0.0,__real_3e19999a,QuadOut);
  FCurveSequence::operator=(&this->OpenCloseAnimation,pFVar14);
  FCurveSequence::~FCurveSequence(&local_3e8);
  uStack_460 = (ulonglong)uStack_460._4_4_ << 0x20;
  local_468 = OnGlobalFocusChanging;
  pFVar15 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<SSidebarDrawer>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar15->FocusChangingDelegate,(SSidebarDrawer *)&stack0xfffffffffffffbc0,
             (pmf_7b6b112e *)this);
  pFVar16 = SBox::FArguments::FArguments(&local_378);
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 2) = 1;
  pFVar8 = param_2->Object;
  if ((pFVar8->ContentWidget).Object == (SWidget *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pSVar9 = (pFVar8->ContentWidget).Object;
  pTVar6 = (pFVar8->ContentWidget).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar9 == (SWidget *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_438 = (pFVar16->_Content).Widget.Object;
  pTStack_430 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = pSVar9;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_430);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_418,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawer.cpp"
             ,0x2b,local_res20);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar17 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_418,&local_428,pFVar16);
  plVar18 = &this->_padding_;
  pTVar7 = (pTVar17->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar17->Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar18);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar18);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar10;
  this->_padding_ = (longlong)pTVar7;
  local_480 = pSVar10;
  pTStack_478 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SBox::FArguments::~FArguments(&local_378);
  return;
}

// GetDrawer @ 142dac280

TSharedPtr<FSidebarDrawer,1> * __thiscall
SSidebarDrawer::GetDrawer(SSidebarDrawer *this,TSharedPtr<FSidebarDrawer,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FSidebarDrawer *)0x0;
  pTVar1 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->DrawerWeak).Object;
  }
  return __return_storage_ptr__;
}

// GetRenderTransformedGeometry @ 142db0140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometry * __thiscall
SSidebarDrawer::GetRenderTransformedGeometry
          (SSidebarDrawer *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  ESidebarTabLocation EVar1;
  FDeprecateVector2DParameter local_res8;
  FDeprecateSlateVector2D local_res20;
  FSlateLayoutTransform local_38;
  FSlateLayoutTransform local_2c;
  TTransform2<float> local_20;
  
  EVar1 = this->TabLocation;
  if (EVar1 == Left) {
    local_20.Trans.field0_0x0._s_0.X = this->CurrentSize - this->TargetDrawerSize;
  }
  else {
    if (EVar1 != Right) {
      if (EVar1 == Top) {
        local_20.Trans.field0_0x0._s_0.Y = this->CurrentSize - this->TargetDrawerSize;
      }
      else {
        if (EVar1 != Bottom) {
          FGeometry::FGeometry(__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        local_20.Trans.field0_0x0._s_0.Y = this->TargetDrawerSize - this->CurrentSize;
      }
      local_20.Trans.field0_0x0._s_0.X = 0.0;
      local_2c.Scale = param_1->Scale;
      goto LAB_142db0224;
    }
    local_20.Trans.field0_0x0._s_0.X = this->TargetDrawerSize - this->CurrentSize;
  }
  local_2c.Scale = param_1->Scale;
  local_20.Trans.field0_0x0._s_0.Y = 0.0;
LAB_142db0224:
  local_20.M.M[1] = _UNK_15076b188;
  local_20.M.M[0] = ___xmm_3f80000000000000000000003f800000;
  local_res8 = (FDeprecateVector2DParameter)0x3f0000003f000000;
  local_2c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
  local_res20 = param_1->Size;
  local_38._0_8_ = 0x3f800000;
  local_38.Translation.field0_0x0._s_0.Y = 0.0;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_res20,&local_38,&local_20,
             &local_res8,&local_2c,&param_1->AccumulatedRenderTransform);
  return __return_storage_ptr__;
}

// GetResizeHandleGeometry @ 142db0380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGeometry * __thiscall
SSidebarDrawer::GetResizeHandleGeometry
          (SSidebarDrawer *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  ESidebarTabLocation EVar1;
  undefined1 auStackY_b8 [32];
  FSlateLayoutTransform local_88;
  undefined8 local_78;
  FSlateLayoutTransform local_70;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  GetRenderTransformedGeometry(this,&local_60,param_1);
  EVar1 = this->TabLocation;
  if (EVar1 == Left) {
    local_88.Scale = this->ExpanderHandleSize;
    local_78._4_4_ = SUB84(param_1->Size,4);
    local_78._0_4_ = local_60.Size._0_4_;
    local_70.Translation.field0_0x0._s_0.X =
         (float)local_78 - (this->ShadowOffset).field0_0x0._s_0.X;
  }
  else {
    if (EVar1 != Right) {
      if (EVar1 == Top) {
        local_70.Translation.field0_0x0._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
        local_88.Scale = SUB84(param_1->Size,0);
        local_78._4_4_ = local_60.Size._4_4_;
        local_88.Scale =
             local_88.Scale -
             (local_70.Translation.field0_0x0._s_0.X + local_70.Translation.field0_0x0._s_0.X);
        local_88.Translation.field0_0x0._s_0.X = this->ExpanderHandleSize;
        local_70.Translation.field0_0x0._s_0.Y =
             local_78._4_4_ - (this->ShadowOffset).field0_0x0._s_0.Y;
      }
      else {
        local_70.Translation.field0_0x0._s_0.X = local_88.Scale;
        local_70.Translation.field0_0x0._s_0.Y = local_88.Scale;
        if (EVar1 == Bottom) {
          local_70.Translation.field0_0x0._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
          local_88.Translation.field0_0x0._s_0.X = this->ExpanderHandleSize;
          local_88.Scale = SUB84(param_1->Size,0);
          local_88.Scale =
               local_88.Scale -
               (local_70.Translation.field0_0x0._s_0.X + local_70.Translation.field0_0x0._s_0.X);
          local_70.Translation.field0_0x0._s_0.Y =
               (this->ShadowOffset).field0_0x0._s_0.Y - local_88.Translation.field0_0x0._s_0.X;
        }
      }
      goto LAB_142db04e9;
    }
    local_88.Scale = this->ExpanderHandleSize;
    local_70.Translation.field0_0x0._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X - local_88.Scale
    ;
    local_78._4_4_ = SUB84(param_1->Size,4);
  }
  local_70.Translation.field0_0x0._s_0.Y = (this->ShadowOffset).field0_0x0._s_0.Y;
  local_88.Translation.field0_0x0._s_0.X =
       local_78._4_4_ -
       (local_70.Translation.field0_0x0._s_0.Y + local_70.Translation.field0_0x0._s_0.Y);
LAB_142db04e9:
  local_78._4_4_ = local_88.Translation.field0_0x0._s_0.X;
  local_78._0_4_ = local_88.Scale;
  local_88.Translation.field0_0x0._s_0.X = local_60.AbsolutePosition.field0_0x0._0_4_;
  local_88.Translation.field0_0x0._s_0.Y = local_60.AbsolutePosition.field0_0x0._4_4_;
  local_88.Scale = local_60.Scale;
  local_70.Scale = 1.0;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_78,&local_70,&local_88,
             &local_60.AccumulatedRenderTransform,local_60.bHasRenderTransform);
  return __return_storage_ptr__;
}

// IsClosing @ 142db5560

bool __thiscall SSidebarDrawer::IsClosing(SSidebarDrawer *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (bVar1) {
    bVar1 = FCurveSequence::IsInReverse(&this->OpenCloseAnimation);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsOpen @ 142db6090

bool __thiscall SSidebarDrawer::IsOpen(SSidebarDrawer *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsAtStart(&this->OpenCloseAnimation);
  return !bVar1;
}

// OnArrangeChildren @ 142dbbdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SSidebarDrawer::OnArrangeChildren
          (SSidebarDrawer *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  ESidebarTabLocation EVar1;
  TVector2<float>_u_0_s_0 TVar2;
  TVector2<float>_u_0_s_0 TVar3;
  float fVar4;
  undefined1 auStackY_b8 [32];
  float local_88;
  float fStack_84;
  TVector2<float>_u_0_s_0 local_80;
  FSlateLayoutTransform local_78;
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)(this->_padding_ + 0x39)) == 0) {
    return;
  }
  EVar1 = this->TabLocation;
  if (EVar1 == Left) {
    fVar4 = (this->ShadowOffset).field0_0x0._s_0.Y;
    TVar3 = (TVector2<float>_u_0_s_0)((ulonglong)(uint)fVar4 << 0x20);
  }
  else {
    if (EVar1 != Right) {
      if (EVar1 == Top) {
        fVar4 = (this->ShadowOffset).field0_0x0._s_0.X;
        TVar3.Y = 0.0;
        TVar3.X = fVar4;
      }
      else {
        TVar3 = local_80;
        if (EVar1 != Bottom) goto LAB_142dbbef6;
        TVar3 = (this->ShadowOffset).field0_0x0._s_0;
        fVar4 = (this->ShadowOffset).field0_0x0._s_0.X;
      }
      local_80.X = SUB84(param_1->Size,0);
      local_88 = local_80.X - (fVar4 + fVar4);
      fStack_84 = this->TargetDrawerSize;
      goto LAB_142dbbef6;
    }
    TVar3 = (this->ShadowOffset).field0_0x0._s_0;
    fVar4 = (this->ShadowOffset).field0_0x0._s_0.Y;
  }
  local_88 = this->TargetDrawerSize;
  local_80.Y = SUB84(param_1->Size,4);
  fStack_84 = local_80.Y - (fVar4 + fVar4);
LAB_142dbbef6:
  local_80.X = TVar3.X;
  local_80.Y = TVar3.Y;
  TVar2.Y = fStack_84;
  TVar2.X = local_88;
  local_78.Translation.field0_0x0._s_0.X = local_80.X;
  local_78.Translation.field0_0x0._s_0.Y = local_80.Y;
  local_78.Scale = 1.0;
  local_80 = TVar2;
  FGeometry::MakeChild
            (param_1,&local_68,(TSharedRef<SWidget,1> *)&this->_padding_,
             (FDeprecateVector2DParameter *)&local_80,&local_78);
  FArrangedChildren::AddWidget(param_2,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// OnCursorQuery @ 142dbc870

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SSidebarDrawer::OnCursorQuery
          (SSidebarDrawer *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  ESidebarTabLocation EVar1;
  
  if ((this->bIsResizing != false) || (this->bIsResizeHandleHovered != false)) {
    EVar1 = this->TabLocation;
    if ((EVar1 == Left) || (EVar1 == Right)) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeLeftRight;
      return __return_storage_ptr__;
    }
    if ((EVar1 == Top) || (EVar1 == Bottom)) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeUpDown;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnGlobalFocusChanging @ 142dbedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142dbef7c) */
/* WARNING: Removing unreachable block (ram,0x000142dbef61) */
/* WARNING: Removing unreachable block (ram,0x000142dbefc7) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSidebarDrawer::OnGlobalFocusChanging
          (SSidebarDrawer *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSidebarDrawer *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  EVisibility EVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  atomic<int> aVar9;
  FSlateApplication *pFVar10;
  TSharedPtr<SWindow,1> *pTVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ForElementType<TSharedRef<SWidget,1>_> FVar13;
  ForElementType<FArrangedWidget> FVar14;
  FReadAccessScope *__return_storage_ptr__;
  ForElementType<TSharedRef<SWidget,1>_> FVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_318 [32];
  ForElementType<TSharedRef<SWidget,1>_> local_2f8;
  ForElementType<TSharedRef<SWidget,1>_> local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined1 local_2c8 [16];
  SWidget *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  TSharedPtr<SWidget,1> local_2a8;
  uchar local_298 [8];
  TSharedRef<SWidget_const_,1> local_290;
  TSharedPtr<SWindow,1> local_280;
  TSharedRef<SWindow,1> local_270;
  TSharedPtr<SWindow,1> local_260;
  TSharedRef<SWidget,1> local_250;
  TSharedRef<SWidget,1> local_240;
  SWidget *local_228;
  TReferenceControllerBase<1> *pTStack_220;
  FReadAccessScope local_218;
  FReadAccessScope local_200;
  ForElementType<TSharedRef<SWidget,1>_> local_1e8;
  int local_1a0;
  int local_19c;
  FWidgetPath local_198;
  ulonglong local_38;
  
  __return_storage_ptr__ = &local_218;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  local_298[0] = '\0';
  local_298[1] = '\0';
  local_298[2] = '\0';
  local_298[3] = '\0';
  if (bIsReEntrant) {
    return;
  }
  bIsReEntrant = true;
  pTVar1 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  pTVar16 = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) goto LAB_142dbee41;
  aVar5 = pTVar1->SharedReferenceCount;
  do {
    pTVar16 = pTVar17;
    if (aVar5 == (atomic<int>)0x0) goto LAB_142dbee41;
    LOCK();
    aVar9 = pTVar1->SharedReferenceCount;
    bVar19 = aVar5 == aVar9;
    if (bVar19) {
      pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar9 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar9;
  } while (!bVar19);
  pFVar2 = (this->DrawerWeak).Object;
  pTVar16 = pTVar1;
  if ((((pFVar2 == (FSidebarDrawer *)0x0) || ((pFVar2->State).bIsDocked != false)) ||
      ((pFVar2->State).bIsPinned != false)) || (pFVar2->bIsOpen == false)) goto LAB_142dbee41;
  if (GIsSlowTask == false) {
    pFVar10 = FSlateApplication::Get();
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000001;
    pTVar11 = FSlateApplication::GetActiveModalWindow(pFVar10,&local_260);
    if (pTVar11->Object != (SWindow *)0x0) goto LAB_142dbeed5;
    bVar19 = false;
  }
  else {
LAB_142dbeed5:
    bVar19 = true;
  }
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.SharedReferenceCount.ReferenceController);
  }
  if (bVar19) goto LAB_142dbee41;
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_250);
  local_2b8 = pTVar12->Object;
  pTStack_2b0 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (pTStack_2b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2b0->SharedReferenceCount = (atomic<int>)((int)pTStack_2b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  local_2c8._0_8_ = local_2b8;
  local_2c8._8_8_ = pTStack_2b0;
  local_1e8.SecondaryData = (ForElementType<TSharedRef<SWidget,1>_>)0x0;
  local_1a0 = 0;
  local_19c = 4;
  if (pTStack_2b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2b0->SharedReferenceCount = (atomic<int>)((int)pTStack_2b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((&local_1e8 <= (ForElementType<TSharedRef<SWidget,1>_> *)local_2c8) &&
     (local_2c8 < &local_1e8.SecondaryData)) {
    local_2e0 = 0;
    local_2f0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
    local_2d8 = 0x10;
    local_2f8 = (ForElementType<TSharedRef<SWidget,1>_>)local_2c8;
    local_2e8 = 4;
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar19) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_1a0 == local_19c) {
    local_1a0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                          (0x810,&local_1e8,&local_19c);
  }
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  pTVar12 = (TSharedRef<SWidget,1> *)((longlong)FVar15 + (longlong)local_1a0 * 0x10);
  local_1a0 = local_1a0 + 1;
  pTVar12->Object = (SWidget *)local_2c8._0_8_;
  (pTVar12->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)local_2c8._8_8_;
  if ((TReferenceControllerBase<1> *)local_2c8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_2c8._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_2c8._8_8_ + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c8._8_8_);
  plVar3 = &this->_padding_;
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  if ((ulonglong)FVar15 <= plVar3) {
    FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
      FVar15 = local_1e8.SecondaryData;
    }
    if (plVar3 < (TSharedRef<SWidget,1> *)((longlong)local_19c * 0x10 + (longlong)FVar15)) {
      local_2e0 = (longlong)local_1a0;
      local_2d8 = 0x10;
      local_2f0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
        local_2f0 = local_1e8.SecondaryData;
      }
      local_2f8 = (ForElementType<TSharedRef<SWidget,1>_>)plVar3;
      local_2e8 = (longlong)local_19c;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_1a0 == local_19c) {
    local_1a0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                          (0x810,&local_1e8,&local_19c);
  }
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  pTVar12 = (TSharedRef<SWidget,1> *)((longlong)FVar15 + (longlong)local_1a0 * 0x10);
  local_1a0 = local_1a0 + 1;
  pTVar12->Object = (SWidget *)*plVar3;
  pTVar17 = (TReferenceControllerBase<1> *)this->_padding_;
  (pTVar12->SharedReferenceCount).ReferenceController = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar13 = (ForElementType<TSharedRef<SWidget,1>_>)
           TSharedPtr<SWidget,1>::ToSharedRef(&pFVar2->ButtonWidget,&local_240);
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  if ((ulonglong)FVar15 <= (ulonglong)FVar13) {
    FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
    if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
      FVar15 = local_1e8.SecondaryData;
    }
    if ((ulonglong)FVar13 < (ulonglong)((longlong)local_19c * 0x10 + (longlong)FVar15)) {
      local_2e0 = (longlong)local_1a0;
      local_2d8 = 0x10;
      local_2f0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
      if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
        local_2f0 = local_1e8.SecondaryData;
      }
      local_2f8 = FVar13;
      local_2e8 = (longlong)local_19c;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar19) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_1a0 == local_19c) {
    local_1a0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                          (0x810,&local_1e8,&local_19c);
  }
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  pTVar12 = (TSharedRef<SWidget,1> *)((longlong)FVar15 + (longlong)local_1a0 * 0x10);
  local_1a0 = local_1a0 + 1;
  pTVar12->Object = *(SWidget **)FVar13;
  pTVar17 = ((FSharedReferencer<1> *)((longlong)FVar13 + 8))->ReferenceController;
  (pTVar12->SharedReferenceCount).ReferenceController = pTVar17;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.SharedReferenceCount.ReferenceController);
  lVar18 = (longlong)local_1a0;
  bVar19 = false;
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  if ((local_1a0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar13 = (ForElementType<TSharedRef<SWidget,1>_>)(lVar18 * 0x10 + (longlong)FVar15);
  for (; FVar15 != FVar13;
      FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)((longlong)FVar15 + 0x10)) {
    bVar8 = FWidgetPath::ContainsWidget(param_4,*(SWidget **)FVar15);
    if (bVar8) {
      bVar19 = IsClosing(this);
      if (bVar19) goto LAB_142dbf4d9;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerFocused,
                 __return_storage_ptr__);
      if ((*(int *)&(this->OnDrawerFocused).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnDrawerFocused).field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_2b8);
      }
      goto LAB_142dbf4d4;
    }
  }
  bVar8 = FWidgetPath::IsValid(param_4);
  if (bVar8) {
    FWidgetPath::GetWindow(param_4,&local_270);
    pFVar10 = FSlateApplication::Get();
    local_228 = local_2b8;
    pTStack_220 = pTStack_2b0;
    pcVar4 = *(code **)(*(longlong *)pFVar10 + 0x28);
    if (pTStack_2b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_2b0->SharedReferenceCount = (atomic<int>)((int)pTStack_2b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(pFVar10,&local_280,&local_228);
    bVar8 = SWindow::IsDescendantOf(local_270.Object,&local_280);
    if (!bVar8) {
      pFVar10 = FSlateApplication::Get();
      FSlateApplication::GetMenuHostWidget(pFVar10,&local_2a8);
      if (local_2a8.Object == (SWidget *)0x0) {
        bVar19 = true;
      }
      else {
        FWidgetPath::FWidgetPath(&local_198);
        pFVar10 = FSlateApplication::Get();
        EVar6 = EVisibility::Visible;
        if ((local_2a8.Object == (SWidget *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
        if ((ForElementType<TSharedRef<SWidget,1>_>)
            local_2a8.SharedReferenceCount.ReferenceController !=
            (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
          LOCK();
          (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2a8.Object == (SWidget *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_290.Object = local_2a8.Object;
        local_290.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
        if ((ForElementType<TSharedRef<SWidget,1>_>)FVar7.ReferenceController !=
            (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
          LOCK();
          (FVar7.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::GeneratePathToWidgetUnchecked(pFVar10,&local_290,&local_198,EVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        bVar19 = FWidgetPath::ContainsWidget(&local_198,(SWidget *)this->_padding_);
        bVar19 = !bVar19;
        if (local_198.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar14 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
        if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar14 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar14,local_198.Widgets.Array.ArrayNum);
        if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_280.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.SharedReferenceCount.ReferenceController);
    if (bVar19) goto LAB_142dbf49f;
  }
  else {
LAB_142dbf49f:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerFocusLost,
               &local_200);
    if ((*(int *)&(this->OnDrawerFocusLost).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnDrawerFocusLost).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_2b8);
    }
    __return_storage_ptr__ = &local_200;
LAB_142dbf4d4:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (__return_storage_ptr__);
  }
LAB_142dbf4d9:
  FVar15 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e8;
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar15 = local_1e8.SecondaryData;
  }
  DestructItems<TSharedRef<SWidget,1>,int>((TSharedRef<SWidget,1> *)FVar15,local_1a0);
  if (local_1e8.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FMemory::Free((void *)local_1e8.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2b0);
LAB_142dbee41:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  bIsReEntrant = false;
  return;
}

// OnMouseButtonDown @ 142dc2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSidebarDrawer::OnMouseButtonDown
          (SSidebarDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  SWidget *pSVar3;
  FThrottleRequest FVar4;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  bool bVar7;
  undefined1 auStack_158 [32];
  TSharedRef<SWidget,1> local_138;
  FReply local_128;
  FGeometry local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  FReply::FReply(__return_storage_ptr__,false);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar7) {
    GetResizeHandleGeometry(this,&local_70,param_1);
    local_138.Object = *(SWidget **)&param_2->ScreenSpacePosition;
    bVar7 = FGeometry::IsUnderLocation(&local_70,(FDeprecateVector2DParameter *)&local_138);
    if (bVar7) {
      this->bIsResizing = true;
      FGeometry::operator=(&this->InitialResizeGeometry,&local_70);
      this->InitialSizeAtResize = this->CurrentSize;
      this_00 = FSlateThrottleManager::Get();
      FVar4 = FSlateThrottleManager::EnterResponsiveMode(this_00);
      (this->ResizeThrottleHandle).Index = *(int *)CONCAT44(extraout_var,FVar4.Index);
      FReply::FReply(&local_128,true);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_138);
      pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar5->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_138.Object = pSVar3;
      local_138.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar6 = FReply::CaptureMouse(&local_128,&local_138);
      FReply::operator=(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_128);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142dc4080

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSidebarDrawer::OnMouseButtonUp
          (SSidebarDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  FName FVar4;
  longlong *plVar5;
  bool bVar6;
  FWeakReferencer<1> FVar7;
  FSlateThrottleManager *this_00;
  TSharedRef<SWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint uStackX_c;
  SWidget *local_f8;
  TReferenceControllerBase<1> *local_f0;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  bVar10 = false;
  if (this->bIsResizing == false) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    if (FVar4 == EKeys::LeftMouseButton.KeyName) {
      bVar6 = true;
      goto LAB_142dc40d8;
    }
  }
  bVar6 = false;
LAB_142dc40d8:
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar6) {
    this->bIsResizing = false;
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->ResizeThrottleHandle);
    fVar2 = this->TargetDrawerSize;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_e8);
    local_f8 = pTVar8->Object;
    local_f0 = (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8.DestructionSentinel.Accessor);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerSizeChanged,
               &local_e8);
    if ((*(int *)&(this->OnDrawerSizeChanged).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnDrawerSizeChanged).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,&local_f8,fVar2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    FReply::FReply(&local_d0,true);
    FVar7.ReferenceController = local_d0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_d0.MouseCaptor.Object = (SWidget *)0x0;
    local_d0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    local_d0.bUseHighPrecisionMouse = 0;
    local_d0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_d0);
    FReply::~FReply(&local_d0);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142dc4580

void __thiscall SSidebarDrawer::OnMouseLeave(SSidebarDrawer *this,FPointerEvent *param_1)

{
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  this->bIsResizeHandleHovered = false;
  return;
}

// OnMouseMove @ 142dc4790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSidebarDrawer::OnMouseMove
          (SSidebarDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  ESidebarTabLocation EVar1;
  bool bVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  TTransform2<float> local_80;
  FGeometry local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  GetResizeHandleGeometry(this,&local_68,param_1);
  local_88 = param_2->ScreenSpacePosition;
  bVar2 = FGeometry::IsUnderLocation(&local_68,(FDeprecateVector2DParameter *)&local_88);
  this->bIsResizeHandleHovered = bVar2;
  if (((this->bIsResizing == false) || (bVar2 = SWidget::HasMouseCapture((SWidget *)this), !bVar2))
     || ((*(float *)&param_2->CursorDelta == 0.0 &&
         (*(float *)&(param_2->CursorDelta).field_0x4 == 0.0)))) {
    bVar2 = false;
  }
  else {
    pTVar3 = Inverse<TTransform2<float>_>
                       (&local_80,&(this->InitialResizeGeometry).AccumulatedRenderTransform);
    local_88 = param_2->ScreenSpacePosition;
    EVar1 = this->TabLocation;
    fVar6 = local_88._4_4_ * (pTVar3->M).M[1][0] + (float)local_88 * (pTVar3->M).M[0][0] +
            (pTVar3->Trans).field0_0x0._s_0.X;
    fVar5 = (float)local_88 * (pTVar3->M).M[0][1] + local_88._4_4_ * (pTVar3->M).M[1][1] +
            (pTVar3->Trans).field0_0x0._s_0.Y;
    if (EVar1 != Left) {
      if (EVar1 == Right) {
        fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
      }
      else {
        fVar6 = fVar5;
        if ((EVar1 != Top) && (fVar6 = 0.0, EVar1 == Bottom)) {
          fVar6 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
        }
      }
    }
    fVar6 = fVar6 + this->InitialSizeAtResize;
    fVar5 = this->MinDrawerSize;
    bVar2 = true;
    fVar4 = this->MaxDrawerSize;
    if (fVar6 <= this->MaxDrawerSize) {
      fVar4 = fVar6;
    }
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    this->TargetDrawerSize = fVar4;
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    this->CurrentSize = fVar4;
  }
  FReply::FReply(__return_storage_ptr__,bVar2);
  return __return_storage_ptr__;
}

// OnPaint @ 142dc6ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSidebarDrawer::OnPaint
          (SSidebarDrawer *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESidebarTabLocation EVar1;
  ESlateColorStylingMode EVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSidebarDrawer *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  FName FVar12;
  atomic<int> aVar13;
  TVector2<float> TVar14;
  FNameEntryId FVar15;
  undefined4 uVar16;
  uint uVar17;
  atomic<int> aVar18;
  FSlateBrush *pFVar19;
  FSlateColor *pFVar20;
  FGeometry *pFVar21;
  TTransform2<float> *pTVar22;
  longlong lVar23;
  FSlateClippingZone *pFVar24;
  ISlateStyle *pIVar25;
  FName *pFVar26;
  FSplitterStyle *pFVar27;
  wchar_t *pwVar28;
  FSlateBrush *pFVar29;
  byte bVar30;
  SWidget *pSVar31;
  SWidget *this_00;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_348 [32];
  undefined8 local_308;
  undefined8 local_300;
  float local_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  FLinearColor_u_0 local_2e8;
  TVector2<float>_u_0 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  FName local_2c0;
  FSlateRect *local_2b8;
  FName local_2b0;
  undefined8 uStack_2a8;
  TVector2<float>_u_0 local_278;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  FNameEntryId FStack_264;
  float fStack_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  TVector2<float>_u_0 local_24c;
  byte local_244;
  TVector2<float>_u_0 local_240;
  float local_238;
  FName local_234;
  TTransform2<float> local_224;
  byte local_20c;
  TVector2<float>_u_0 local_208;
  float local_200;
  undefined8 local_1fc;
  TVector2<float>_u_0 local_1f4;
  float local_1ec [2];
  float afStack_1e4 [2];
  TVector2<float>_u_0 local_1dc;
  byte local_1d4;
  TVector2<float>_u_0 local_1d0;
  float local_1c8;
  TVector2<float>_u_0 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  TVector2<float>_u_0 local_1a4;
  byte local_19c;
  TVector2<float>_u_0 local_198;
  float local_190;
  undefined8 local_18c;
  undefined8 local_184;
  TVector2<float>_u_0 local_17c;
  byte local_164;
  TVector2<float>_u_0 local_160;
  float local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  TVector2<float>_u_0 local_134;
  byte local_12c;
  TVector2<float>_u_0 local_128;
  float local_120;
  undefined8 local_11c;
  TVector2<float>_u_0 local_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  TVector2<float>_u_0 local_fc;
  byte local_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_348;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  _local_2f8 = param_2;
  local_2c0 = (FName)param_1;
  local_2b8 = param_3;
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar25 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar25 + 0x50);
    pFVar26 = ::FName::FName((FName *)&local_308,L"Docking.Sidebar.DrawerBackground");
    BackgroundBrush = (FSlateBrush *)(*pcVar6)(pIVar25,*pFVar26,0,0);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar25 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar25 + 0x50);
    pFVar26 = ::FName::FName((FName *)&local_308,L"Docking.Sidebar.DrawerShadow");
    ShadowBrush = (FSlateBrush *)(*pcVar6)(pIVar25,*pFVar26,0,0);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar25 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar25 + 0x50);
    pFVar26 = ::FName::FName((FName *)&local_308,L"Docking.Sidebar.Border");
    BorderBrush = (FSlateBrush *)(*pcVar6)(pIVar25,*pFVar26,0,0);
    _Init_thread_footer(&::_TSS2);
  }
  EVar1 = this->TabLocation;
  if (EVar1 == Left) {
    pIVar25 = FAppStyle::Get();
    pwVar28 = L"Docking.Sidebar.Border_SquareLeft";
LAB_142dc6fa9:
    pcVar6 = *(code **)((longlong)*pIVar25 + 0x50);
    pFVar26 = ::FName::FName((FName *)&local_308,pwVar28);
    pFVar19 = (FSlateBrush *)(*pcVar6)(pIVar25,*pFVar26,0,0);
LAB_142dc6fcb:
    BorderSquareEdgeBrush = pFVar19;
  }
  else {
    if (EVar1 == Right) {
      pIVar25 = FAppStyle::Get();
      pwVar28 = L"Docking.Sidebar.Border_SquareRight";
      goto LAB_142dc6fa9;
    }
    pFVar19 = BorderBrush;
    if ((EVar1 == Top) || (EVar1 == Bottom)) goto LAB_142dc6fcb;
  }
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pIVar25 = FAppStyle::Get();
    pFVar26 = ::FName::FName((FName *)&local_308,L"Splitter");
    pFVar27 = (FSplitterStyle *)
              (**(code **)((longlong)*pIVar25 + 0xa0))(pIVar25,FSplitterStyle::TypeName,*pFVar26,0);
    if (pFVar27 == (FSplitterStyle *)0x0) {
      pFVar27 = FSplitterStyle::GetDefault();
    }
    SplitterStyle = pFVar27;
    _Init_thread_footer(&::_TSS3);
  }
  pSVar31 = (SWidget *)0x0;
  if ((*(int *)(lVar23 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pIVar25 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar25 + 0x40);
    pFVar26 = ::FName::FName((FName *)&local_308,L"Colors.Foldout");
    (*pcVar6)(pIVar25,&ShadowColor,*pFVar26,0);
    _Init_thread_footer(&::_TSS4);
  }
  uVar3 = _local_2f8;
  GetRenderTransformedGeometry(this,(FGeometry *)&local_240._s_0,(FGeometry *)_local_2f8);
  GetResizeHandleGeometry(this,(FGeometry *)&local_1d0._s_0,(FGeometry *)uVar3);
  local_190 = local_238;
  uVar3 = *(undefined8 *)uVar3;
  EVar1 = this->TabLocation;
  local_2c8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  if (EVar1 == Left) {
    fVar33 = (this->ShadowOffset).field0_0x0._s_0.Y;
    local_300 = (TVector2<float>_u_0)((ulonglong)(uint)fVar33 << 0x20);
    local_2d0 = local_300;
LAB_142dc70a7:
    local_2c8._0_4_ = this->TargetDrawerSize;
    local_2c8._4_4_ = local_2c8._4_4_ - (fVar33 + fVar33);
  }
  else {
    if (EVar1 == Right) {
      fVar33 = (this->ShadowOffset).field0_0x0._s_0.Y;
      local_2d0 = *(TVector2<float>_u_0 *)&(this->ShadowOffset).field0_0x0._s_0;
      goto LAB_142dc70a7;
    }
    if ((EVar1 != Top) && (EVar1 != Bottom)) goto LAB_142dc70d5;
    local_2c8._0_4_ = (float)uVar3;
    fVar33 = (this->ShadowOffset).field0_0x0._s_0.X;
    local_2d0 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(this->ShadowOffset).field0_0x0._s_0;
    local_2c8._0_4_ = (float)local_2c8 - (fVar33 + fVar33);
    local_2c8._4_4_ = this->TargetDrawerSize;
  }
  local_300 = (TVector2<float>_u_0)CONCAT44(local_2c8._4_4_,(float)local_2c8);
LAB_142dc70d5:
  uVar11 = local_300;
  local_2e8._s_0.G = (float)local_234.ComparisonIndex.Value;
  local_2e8._s_0.B = (float)local_234.Number;
  bVar30 = local_20c & 1;
  local_308._0_4_ = (undefined4)local_2d0;
  local_308._4_4_ = local_2d0._4_4_;
  fStack_2f4 = (float)local_308._4_4_ * local_238 + local_2e8._s_0.B;
  local_2f8 = (float)(undefined4)local_308 * local_238 + local_2e8._s_0.G;
  local_2e8._s_0.R = __xmm_3f80000000000000000000003f800000._0_4_;
  local_2e8._s_0.G = __xmm_3f80000000000000000000003f800000._4_4_;
  local_2e8._s_0.B = (float)_UNK_15076b188;
  local_2e8._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  local_308 = local_2d0;
  local_2d8 = local_2d0;
  local_2c8 = uVar3;
  Concatenate<TTransform2<float>_>
            ((TTransform2<float> *)&local_278._s_0,(TTransform2<float> *)&local_2e8._s_0,&local_224)
  ;
  pFVar27 = SplitterStyle;
  local_198 = (TVector2<float>_u_0)_local_2f8;
  local_164 = local_164 & 0xfc | bVar30 * '\x02';
  local_18c = 0;
  local_17c = local_278;
  local_184 = uVar11;
  if ((this->bIsResizing != false) || (this->bIsResizeHandleHovered != false)) {
    EVar2 = (SplitterStyle->HandleHighlightBrush).TintColor.ColorUseRule;
    pFVar20 = &(SplitterStyle->HandleHighlightBrush).TintColor;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    uVar3 = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
    local_278 = local_1c4;
    FStack_264.Value = (uint)local_1d0._s_0.X;
    fStack_260 = local_1d0._s_0.Y;
    local_2e8._s_0.R = (float)uVar3;
    local_2e8._s_0.G = (float)((ulonglong)uVar3 >> 0x20);
    local_2e8._s_0.B = (float)uVar11;
    local_2e8._s_0.A = (float)((ulonglong)uVar11 >> 0x20);
    uStack_26c = 0;
    fStack_268 = 0.0;
    local_244 = (local_19c & 1) * '\x02' | local_244 & 0xfc;
    fStack_270 = local_1c8;
    local_25c = local_1b4;
    uStack_254 = uStack_1ac;
    local_24c = local_1a4;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_278._s_0,&pFVar27->HandleHighlightBrush,None
               ,(FLinearColor *)&local_2e8._s_0);
  }
  EVar2 = (ShadowBrush->TintColor).ColorUseRule;
  pFVar20 = &ShadowBrush->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  _local_2f8 = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
  uStack_2f0 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
  local_208._s_0.X = (float)local_234.ComparisonIndex.Value;
  local_208._s_0.Y = (float)local_234.Number;
  local_1f4 = local_240;
  local_1fc = 0;
  local_1d4 = (local_20c & 1) * '\x02' | local_1d4 & 0xfc;
  local_200 = local_238;
  local_1ec[0] = local_224.M.M[0][0];
  local_1ec[1] = local_224.M.M[0][1];
  afStack_1e4[0] = local_224.M.M[1][0];
  afStack_1e4[1] = local_224.M.M[1][1];
  local_1dc = local_224.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_208._s_0,ShadowBrush,None,
             (FLinearColor *)&local_2f8);
  EVar2 = (BackgroundBrush->TintColor).ColorUseRule;
  pFVar20 = &BackgroundBrush->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  uVar3 = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
  uVar11 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
  local_2e8._s_0.R = (float)uVar3;
  local_2e8._s_0.G = (float)((ulonglong)uVar3 >> 0x20);
  local_2e8._s_0.B = (float)uVar11;
  local_2e8._s_0.A = (float)((ulonglong)uVar11 >> 0x20);
  FSlateDrawElement::MakeBox
            (param_4,param_5 + 1,(FPaintGeometry *)&local_198._s_0,BackgroundBrush,None,
             (FLinearColor *)&local_2e8._s_0);
  uVar17 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,(FPaintArgs *)local_2c0,(FGeometry *)&local_240._s_0,
                      local_2b8,param_4,param_5 + 2,param_6,param_7);
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  this_00 = pSVar31;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar13 = pTVar4->SharedReferenceCount;
    do {
      if (aVar13 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_142dc7c6d;
      }
      LOCK();
      aVar18 = pTVar4->SharedReferenceCount;
      bVar32 = aVar13 == aVar18;
      if (bVar32) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar13 + 1);
        aVar18 = aVar13;
      }
      UNLOCK();
      aVar13 = aVar18;
    } while (!bVar32);
    pFVar5 = (this->DrawerWeak).Object;
    if (pFVar5 != (FSidebarDrawer *)0x0) {
      pSVar31 = (SWidget *)(pFVar5->ButtonWidget).SharedReferenceCount.ReferenceController;
      this_00 = (pFVar5->ButtonWidget).Object;
      if (pSVar31 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar31->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar31->_padding_ + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (this_00 != (SWidget *)0x0) {
    EVar1 = this->TabLocation;
    if ((EVar1 == Left) || (EVar1 == Right)) {
      pFVar21 = SWidget::GetPaintSpaceGeometry(this_00);
      TVar14 = UE::Math::TVector2<float>::ZeroVector;
      _local_2f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uVar3 = _local_2f8;
      local_2f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      FVar12 = *(FName *)&pFVar21->Size;
      uStack_2a8 = *(undefined8 *)&pFVar21->Scale;
      fStack_2f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      fVar33 = (pFVar21->AccumulatedRenderTransform).M.M[0][0];
      fVar7 = (pFVar21->AccumulatedRenderTransform).M.M[0][1];
      fVar8 = (pFVar21->AccumulatedRenderTransform).M.M[1][0];
      fVar9 = (pFVar21->AccumulatedRenderTransform).M.M[1][1];
      fVar10 = (pFVar21->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      fVar38 = (float)*(undefined8 *)
                       ((longlong)&(pFVar21->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      local_308._0_4_ = FVar12.ComparisonIndex.Value;
      FVar15.Value = (undefined4)local_308;
      fVar36 = local_2f8 * (float)(undefined4)local_308;
      local_308._4_4_ = FVar12.Number;
      fVar35 = (float)local_308._4_4_;
      fVar34 = fStack_2f4 * (float)local_308._4_4_;
      local_308 = (TVector2<float>_u_0)FVar12;
      _local_2f8 = uVar3;
      local_2b0 = FVar12;
      pTVar22 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_278._s_0,&local_224);
      fVar39 = (BorderBrush->OutlineSettings).Width * __real_3f000000;
      _local_2f8 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      uVar3 = _local_2f8;
      local_2f8 = UE::Math::TVector2<float>::UnitVector.field0_0x0._0_4_;
      fStack_2f4 = UE::Math::TVector2<float>::UnitVector.field0_0x0._4_4_;
      fVar37 = local_2f8 * (float)FVar15.Value;
      fVar34 = (fVar9 * fVar34 + fVar7 * fVar36 + fVar38) * (pTVar22->M).M[1][1] +
               (fVar8 * fVar34 + fVar33 * fVar36 + fVar10) * (pTVar22->M).M[0][1] +
               (pTVar22->Trans).field0_0x0._s_0.Y + fVar39;
      fVar35 = fStack_2f4 * fVar35;
      local_308 = (TVector2<float>_u_0)FVar12;
      _local_2f8 = uVar3;
      pTVar22 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_278._s_0,&local_224);
      local_120 = local_238;
      fVar39 = ((fVar9 * fVar35 + fVar7 * fVar37 + fVar38) * (pTVar22->M).M[1][1] +
                (fVar8 * fVar35 + fVar33 * fVar37 + fVar10) * (pTVar22->M).M[0][1] +
               (pTVar22->Trans).field0_0x0._s_0.Y) - fVar39;
      _local_2f8 = TVar14;
      if (this->TabLocation == Left) {
        fStack_2f4 = -0.0;
        local_2f8 = (float)(FVar15.Value ^ __xmm_80000000800000008000000080000000);
      }
      local_2e8._s_0.G = (float)local_234.ComparisonIndex.Value;
      local_2e8._s_0.B = (float)local_234.Number;
      bVar30 = local_20c & 1;
      fStack_268 = (float)(undefined4)local_2d0 + local_2f8;
      FStack_264.Value = (uint)((float)local_2d0._4_4_ + fStack_2f4);
      local_2d0._4_4_ = local_300._4_4_;
      local_2d0._0_4_ = FVar15.Value + (float)(undefined4)local_300;
      local_2f8 = fStack_268;
      fStack_2f4 = (float)FStack_264.Value;
      local_308._4_4_ = (float)FStack_264.Value * local_238 + local_2e8._s_0.B;
      local_308._0_4_ = fStack_268 * local_238 + local_2e8._s_0.G;
      local_278 = ___xmm_3f80000000000000000000003f800000;
      fStack_270 = (float)_UNK_15076b188;
      uStack_26c = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
      local_2c0 = FVar12;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_2e8._s_0,(TTransform2<float> *)&local_278._s_0,
                 &local_224);
      fVar33 = local_238;
      local_10c = CONCAT44(local_2e8._s_0.G,local_2e8._s_0.R);
      uStack_104 = CONCAT44(local_2e8._s_0.A,local_2e8._s_0.B);
      local_128 = local_308;
      uVar16 = (float)local_2c8;
      local_114 = local_2d0;
      local_f4 = local_f4 & 0xfc | bVar30 * '\x02';
      bVar30 = local_20c & 1;
      local_2e8._s_0.G = (float)local_234.ComparisonIndex.Value;
      local_2e8._s_0.B = (float)local_234.Number;
      _local_2f8 = 0;
      local_11c = 0;
      local_300._4_4_ = fVar34;
      local_300._0_4_ = (float)local_2c8;
      local_fc = local_2d8;
      fStack_268 = 0.0;
      FStack_264.Value = 0;
      local_308._4_4_ = local_238 * 0.0 + local_2e8._s_0.B;
      local_308._0_4_ = local_238 * 0.0 + local_2e8._s_0.G;
      local_278 = ___xmm_3f80000000000000000000003f800000;
      fStack_270 = (float)_UNK_15076b188;
      uStack_26c = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_2e8._s_0,(TTransform2<float> *)&local_278._s_0,
                 &local_224);
      fVar8 = local_238;
      local_1ec[1] = local_2e8._s_0.G;
      local_1ec[0] = local_2e8._s_0.R;
      afStack_1e4[1] = local_2e8._s_0.A;
      afStack_1e4[0] = local_2e8._s_0.B;
      local_208 = local_308;
      local_1f4 = local_300;
      local_200 = fVar33;
      local_1fc = 0;
      local_1d4 = local_1d4 & 0xfc | bVar30 * '\x02';
      bVar30 = local_20c & 1;
      local_2e8._s_0.G = (float)local_234.ComparisonIndex.Value;
      local_2e8._s_0.B = (float)local_234.Number;
      _local_2f8 = (ulonglong)(uint)fVar34 << 0x20;
      fStack_268 = 0.0;
      local_300 = (TVector2<float>_u_0)CONCAT44(fVar39 - fVar34,uVar16);
      local_1dc = local_2d8;
      local_308._4_4_ = fVar34 * local_238 + local_2e8._s_0.B;
      local_308._0_4_ = local_238 * 0.0 + local_2e8._s_0.G;
      local_278 = ___xmm_3f80000000000000000000003f800000;
      fStack_270 = (float)_UNK_15076b188;
      uStack_26c = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
      FStack_264.Value = (uint)fVar34;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_2e8._s_0,(TTransform2<float> *)&local_278._s_0,
                 &local_224);
      local_144 = CONCAT44(local_2e8._s_0.G,local_2e8._s_0.R);
      uStack_13c = CONCAT44(local_2e8._s_0.A,local_2e8._s_0.B);
      local_160 = local_308;
      local_14c = local_300;
      local_12c = local_12c & 0xfc | bVar30 * '\x02';
      fVar7 = local_2c8._4_4_;
      local_2e8._s_0.G = (float)local_234.ComparisonIndex.Value;
      local_2e8._s_0.B = (float)local_234.Number;
      _local_2f8 = (ulonglong)(uint)fVar39 << 0x20;
      local_300 = (TVector2<float>_u_0)CONCAT44(local_2c8._4_4_ - fVar39,uVar16);
      fStack_268 = 0.0;
      local_158 = fVar8;
      local_154 = 0;
      local_134 = local_2d8;
      local_308._4_4_ = fVar39 * local_238 + local_2e8._s_0.B;
      local_308._0_4_ = local_238 * 0.0 + local_2e8._s_0.G;
      local_278 = ___xmm_3f80000000000000000000003f800000;
      fStack_270 = (float)_UNK_15076b188;
      uStack_26c = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
      FStack_264.Value = (uint)fVar39;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_2e8._s_0,(TTransform2<float> *)&local_278._s_0,
                 &local_224);
      fVar33 = (this->ShadowOffset).field0_0x0._s_0.Y;
      local_1b4 = CONCAT44(local_2e8._s_0.G,local_2e8._s_0.R);
      uStack_1ac = CONCAT44(local_2e8._s_0.A,local_2e8._s_0.B);
      local_1d0 = local_308;
      local_1bc = local_300;
      local_1a4 = local_2d8;
      local_19c = local_19c & 0xfc | (local_20c & 1) * '\x02';
      local_1c8 = local_238;
      local_1c4 = (TVector2<float>_u_0)0x0;
      pFVar19 = BorderBrush;
      if ((double)fVar34 <
          (double)fVar33 +
          *(double *)
           ((longlong)&(BorderBrush->OutlineSettings).CornerRadii.field0_0x0 +
           (ulonglong)(-(uint)(this->TabLocation != Left) & 8))) {
        pFVar19 = BorderSquareEdgeBrush;
      }
      lVar23 = 0x10;
      if (this->TabLocation == Left) {
        lVar23 = 0x18;
      }
      pFVar29 = BorderBrush;
      if ((double)(fVar7 - fVar33) -
          *(double *)((longlong)&(BorderBrush->OutlineSettings).CornerRadii.field0_0x0 + lVar23) <
          (double)fVar39) {
        pFVar29 = BorderSquareEdgeBrush;
      }
      pFVar24 = FSlateClippingZone::FSlateClippingZone
                          ((FSlateClippingZone *)&local_278._s_0,(FPaintGeometry *)&local_208._s_0);
      FSlateWindowElementList::PushClip(param_4,pFVar24);
      EVar2 = (pFVar19->TintColor).ColorUseRule;
      pFVar20 = &pFVar19->TintColor;
      if (EVar2 != UseColor_Specified) {
        if (EVar2 == UseColor_ColorTable) {
          pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
        }
        else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
          pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      uVar3 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
      local_2e8._s_0.R = (float)*(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
      local_2e8._s_0.G =
           (float)((ulonglong)*(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0 >> 0x20);
      local_2e8._s_0.B = (float)uVar3;
      local_2e8._s_0.A = (float)((ulonglong)uVar3 >> 0x20);
      FSlateDrawElement::MakeBox
                (param_4,uVar17,(FPaintGeometry *)&local_198._s_0,pFVar19,None,
                 (FLinearColor *)&local_2e8._s_0);
      FSlateWindowElementList::PopClip(param_4);
      pFVar24 = FSlateClippingZone::FSlateClippingZone
                          ((FSlateClippingZone *)&local_278._s_0,(FPaintGeometry *)&local_160._s_0);
      FSlateWindowElementList::PushClip(param_4,pFVar24);
      EVar2 = (BorderSquareEdgeBrush->TintColor).ColorUseRule;
      pFVar20 = &BorderSquareEdgeBrush->TintColor;
      if (EVar2 != UseColor_Specified) {
        if (EVar2 == UseColor_ColorTable) {
          pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
        }
        else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
          pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      uVar3 = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
      uVar11 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
      local_2e8._s_0.R = (float)uVar3;
      local_2e8._s_0.G = (float)((ulonglong)uVar3 >> 0x20);
      local_2e8._s_0.B = (float)uVar11;
      local_2e8._s_0.A = (float)((ulonglong)uVar11 >> 0x20);
      FSlateDrawElement::MakeBox
                (param_4,uVar17,(FPaintGeometry *)&local_128._s_0,BorderSquareEdgeBrush,None,
                 (FLinearColor *)&local_2e8._s_0);
      FSlateWindowElementList::PopClip(param_4);
      pFVar24 = FSlateClippingZone::FSlateClippingZone
                          ((FSlateClippingZone *)&local_278._s_0,(FPaintGeometry *)&local_1d0._s_0);
      FSlateWindowElementList::PushClip(param_4,pFVar24);
      EVar2 = (pFVar29->TintColor).ColorUseRule;
      pFVar20 = &pFVar29->TintColor;
      if (EVar2 != UseColor_Specified) {
        if (EVar2 == UseColor_ColorTable) {
          pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
        }
        else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
          pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      uVar3 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
      local_2e8._s_0.R = (float)*(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
      local_2e8._s_0.G =
           (float)((ulonglong)*(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0 >> 0x20);
      local_2e8._s_0.B = (float)uVar3;
      local_2e8._s_0.A = (float)((ulonglong)uVar3 >> 0x20);
      FSlateDrawElement::MakeBox
                (param_4,uVar17,(FPaintGeometry *)&local_198._s_0,pFVar29,None,
                 (FLinearColor *)&local_2e8._s_0);
      FSlateWindowElementList::PopClip(param_4);
    }
    else if ((EVar1 == Top) || (EVar1 == Bottom)) {
      EVar2 = (BorderBrush->TintColor).ColorUseRule;
      pFVar20 = &BorderBrush->TintColor;
      if (EVar2 != UseColor_Specified) {
        if (EVar2 == UseColor_ColorTable) {
          pFVar20 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar20);
        }
        else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
          pFVar20 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar20 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      uVar3 = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
      uVar11 = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
      local_2e8._s_0.R = (float)uVar3;
      local_2e8._s_0.G = (float)((ulonglong)uVar3 >> 0x20);
      local_2e8._s_0.B = (float)uVar11;
      local_2e8._s_0.A = (float)((ulonglong)uVar11 >> 0x20);
      FSlateDrawElement::MakeBox
                (param_4,uVar17,(FPaintGeometry *)&local_198._s_0,BorderBrush,None,
                 (FLinearColor *)&local_2e8._s_0);
    }
  }
LAB_142dc7c6d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar31);
  return uVar17 + 1;
}

// Open @ 142dcad50

void __thiscall SSidebarDrawer::Open(SSidebarDrawer *this,bool param_1)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  bool bVar2;
  FThrottleRequest FVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar5;
  TSharedRef<FActiveTimerHandle,1> *pTVar6;
  float fVar7;
  FActiveTimerHandle *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<FActiveTimerHandle,1> local_48;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_38 [2];
  
  if (!param_1) {
    fVar7 = this->TargetDrawerSize;
    if (this->TargetDrawerSize <= this->MinDrawerSize) {
      fVar7 = this->MinDrawerSize;
    }
    this->CurrentSize = fVar7;
    FCurveSequence::JumpToEnd(&this->OpenCloseAnimation);
    return;
  }
  bVar2 = FCurveSequence::IsInReverse(&this->OpenCloseAnimation);
  if (bVar2) {
    FCurveSequence::Reverse(&this->OpenCloseAnimation);
  }
  fVar7 = FCurveSequence::GetSequenceTime(&this->OpenCloseAnimation);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
  FCurveSequence::Play(&this->OpenCloseAnimation,pTVar4,false,fVar7,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar1 = &this->OpenCloseTimer;
  if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
    this_00 = FSlateThrottleManager::Get();
    FVar3 = FSlateThrottleManager::EnterResponsiveMode(this_00);
    local_58.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    (this->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar3.Index);
    local_58.Object = (SWidget *)UpdateAnimation;
    pTVar5 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<SSidebarDrawer>(local_38,this,(pmf_e3dee309 *)&local_58);
    pTVar6 = SWidget::RegisterActiveTimer((SWidget *)this,&local_48,0.0,pTVar5);
    local_60.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_68 = pTVar6->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_68) {
      pTVar1->Object = local_68;
      local_68 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenCloseTimer).SharedReferenceCount,&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetCurrentSize @ 142dd8580

void __thiscall SSidebarDrawer::SetCurrentSize(SSidebarDrawer *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->TargetDrawerSize;
  if (param_1 <= this->TargetDrawerSize) {
    fVar1 = param_1;
  }
  if (fVar1 <= this->MinDrawerSize) {
    fVar1 = this->MinDrawerSize;
  }
  this->CurrentSize = fVar1;
  return;
}

// SupportsKeyboardFocus @ 142dda660

bool __thiscall SSidebarDrawer::SupportsKeyboardFocus(SSidebarDrawer *this)

{
  return true;
}

// UpdateAnimation @ 142ddc670

EActiveTimerReturnType __thiscall
SSidebarDrawer::UpdateAnimation(SSidebarDrawer *this,double param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FSlateThrottleManager *this_00;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FReadAccessScope local_28;
  
  fVar5 = FCurveSequence::GetLerp(&this->OpenCloseAnimation);
  fVar1 = this->TargetDrawerSize;
  fVar6 = fVar1 * fVar5;
  if (fVar1 <= fVar1 * fVar5) {
    fVar6 = fVar1;
  }
  if (fVar6 <= this->MinDrawerSize) {
    fVar6 = this->MinDrawerSize;
  }
  this->CurrentSize = fVar6;
  bVar2 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (bVar2) {
    return Continue;
  }
  bVar2 = FCurveSequence::IsAtStart(&this->OpenCloseAnimation);
  if (bVar2) {
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_28);
    local_48 = pTVar3->Object;
    local_40 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnCloseAnimationFinish,&local_28);
    if (*(int *)&(this->OnCloseAnimationFinish).field_0x10 != 0) {
      plVar4 = *(longlong **)&(this->OnCloseAnimationFinish).field_0x8;
LAB_142ddc788:
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x68))(plVar4,&local_48);
      }
    }
  }
  else {
    bVar2 = FCurveSequence::IsAtEnd(&this->OpenCloseAnimation);
    if (!bVar2) goto LAB_142ddc7ac;
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_28);
    local_48 = pTVar3->Object;
    local_40 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnOpenAnimationFinish,&local_28);
    if (*(int *)&(this->OnOpenAnimationFinish).field_0x10 != 0) {
      plVar4 = *(longlong **)&(this->OnOpenAnimationFinish).field_0x8;
      goto LAB_142ddc788;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
LAB_142ddc7ac:
  this_00 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->AnimationThrottle);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OpenCloseTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_38) {
    (this->OpenCloseTimer).Object = (FActiveTimerHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OpenCloseTimer).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return Stop;
}

