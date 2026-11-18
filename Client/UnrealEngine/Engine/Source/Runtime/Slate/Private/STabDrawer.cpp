// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// ~STabDrawer @ 1427025b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawer::~STabDrawer(STabDrawer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FSlateThrottleManager *pFVar5;
  
  this->_padding_ = (longlong)&___7STabDrawer__6B_;
  pFVar5 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(pFVar5,&this->AnimationThrottle);
  pFVar5 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(pFVar5,&this->ResizeThrottleHandle);
  FCurveSequence::~FCurveSequence(&this->OpenCloseAnimation);
  pTVar3 = (this->TabButton).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ForTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenCloseTimer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerClosed);
  pvVar4 = *(void **)&(this->OnDrawerClosed).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrawerFocusLost);
  pvVar4 = *(void **)&(this->OnDrawerFocusLost).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrawerFocusLost);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTargetDrawerSizeChanged);
  pvVar4 = *(void **)&(this->OnTargetDrawerSizeChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetDrawerSizeChanged);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Close @ 142712ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawer::Close(STabDrawer *this)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  SDockTab *pSVar3;
  atomic<int> aVar4;
  bool bVar5;
  FThrottleRequest FVar6;
  atomic<int> aVar7;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar8;
  TSharedRef<FActiveTimerHandle,1> *pTVar9;
  TSharedRef<FGlobalTabmanager,1> *pTVar10;
  SDockTab *pSVar11;
  SDockTab *pSVar12;
  FActiveTimerHandle *local_58;
  FSharedReferencer<1> local_50;
  code *local_48;
  undefined8 uStack_40;
  TSharedPtr<SDockTab,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  bVar5 = FCurveSequence::IsForward(&this->OpenCloseAnimation);
  if (bVar5) {
    FCurveSequence::Reverse(&this->OpenCloseAnimation);
  }
  pTVar1 = &this->OpenCloseTimer;
  pSVar12 = (SDockTab *)0x0;
  if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
    this_00 = FSlateThrottleManager::Get();
    FVar6 = FSlateThrottleManager::EnterResponsiveMode(this_00);
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    (this->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar6.Index);
    local_48 = UpdateAnimation;
    pTVar8 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<STabDrawer>(&local_28,this,(pmf_9082d6d0 *)&local_48);
    pTVar9 = SWidget::RegisterActiveTimer
                       ((SWidget *)this,(TSharedRef<FActiveTimerHandle,1> *)&local_38,0.0,pTVar8);
    local_50.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_58 = pTVar9->Object;
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
  pTVar10 = FGlobalTabmanager::Get();
  pFVar2 = pTVar10->Object;
  pSVar3 = (SDockTab *)(pFVar2->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  pSVar11 = pSVar3;
  if (pSVar3 != (SDockTab *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar11 = pSVar12;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142712fb7;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    pSVar12 = (pFVar2->ActiveTabPtr).Object;
    pSVar11 = pSVar3;
  }
LAB_142712fb7:
  pSVar3 = (this->ForTab).Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  if (pSVar12 == pSVar3) {
    local_38.Object = (SDockTab *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = FGlobalTabmanager::Get();
    FGlobalTabmanager::SetActiveTab(pTVar10->Object,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// ComputeDesiredSize @ 1427156f0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
STabDrawer::ComputeDesiredSize
          (STabDrawer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = this->TargetDrawerSize;
  if (this->OpenDirection == Bottom) {
    dVar2 = (this->ShadowOffset).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 + dVar2;
    return __return_storage_ptr__;
  }
  dVar2 = (this->ShadowOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1 + dVar2;
  return __return_storage_ptr__;
}

// Construct @ 14271b650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawer::Construct
          (STabDrawer *this,FArguments *param_1,TSharedRef<SDockTab,1> *param_2,
          TWeakPtr<SWidget,1> *param_3,ETabDrawerOpenDirection param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SWidget *pSVar6;
  code *pcVar7;
  FMemScope FVar8;
  TReferenceControllerBase<1> *pTVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FCurveSequence *pFVar15;
  ISlateStyle *pIVar16;
  FName *pFVar17;
  FSplitterStyle *pFVar18;
  FSlateBrush *pFVar19;
  FSlateApplication *pFVar20;
  TSharedRef<FGlobalTabmanager,1> *pTVar21;
  undefined8 *puVar22;
  TSharedRef<SWidget,1> *pTVar23;
  ulong64 uVar24;
  FArguments *pFVar25;
  TSharedRef<SBox,1> *pTVar26;
  char *pcVar27;
  FName FVar28;
  longlong *plVar29;
  TReferenceControllerBase<1> *pTVar30;
  undefined1 local_res8 [8];
  FName local_res10;
  TReferenceControllerBase<1> *local_res18;
  TWeakPtr<SWidget,1> *local_res20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_488;
  FMemScope local_468;
  undefined8 uStack_460;
  FDestructionSentinel local_458;
  SDockTab *local_440;
  FSharedReferencer<1> local_438;
  TSharedRef<SBox,1> local_430;
  FDestructionSentinel local_420;
  FSharedReferencer<1> *local_408;
  FCurveSequence local_400;
  FArguments local_390;
  
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  local_res8 = (undefined1  [8])((ulonglong)local_res8 & 0xffffffff00000000);
  this->OpenDirection = param_4;
  local_438.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_440 = param_2->Object;
  if (local_438.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_438.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_438.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  local_res20 = param_3;
  if (&this->ForTab != (TSharedPtr<SDockTab,1> *)&local_440) {
    (this->ForTab).Object = local_440;
    local_440 = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ForTab).SharedReferenceCount,&local_438);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_438.ReferenceController);
  pTVar30 = (param_3->WeakReferenceCount).ReferenceController;
  pSVar6 = param_3->Object;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->TabButton).WeakReferenceCount.ReferenceController;
  (this->TabButton).Object = pSVar6;
  (this->TabButton).WeakReferenceCount.ReferenceController = pTVar30;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  pFVar15 = FCurveSequence::FCurveSequence(&local_400,0.0,__real_3e19999a,QuadOut);
  FCurveSequence::operator=(&this->OpenCloseAnimation,pFVar15);
  FCurveSequence::~FCurveSequence(&local_400);
  this->CurrentSize = 0.0;
  dVar10 = (param_1->_ShadowOffset).field0_0x0._s_0.X;
  dVar11 = (param_1->_ShadowOffset).field0_0x0._s_0.Y;
  this->ExpanderSize = 5.0;
  (this->ShadowOffset).field0_0x0._s_0.X = dVar10;
  (this->ShadowOffset).field0_0x0._s_0.Y = dVar11;
  pIVar16 = FAppStyle::Get();
  pFVar17 = ::FName::FName((FName *)local_res8,"Splitter");
  pFVar18 = (FSplitterStyle *)
            (**(code **)((longlong)*pIVar16 + 0xa0))(pIVar16,FSplitterStyle::TypeName,*pFVar17,0,1);
  if (pFVar18 == (FSplitterStyle *)0x0) {
    pFVar18 = FSplitterStyle::GetDefault();
  }
  this->SplitterStyle = pFVar18;
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
  if (&param_1->_OnTargetDrawerSizeChanged != &this->OnTargetDrawerSizeChanged) {
    local_488._Widget.Object = (SBox *)0x0;
    local_488._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_488._RequiredArgs._0_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnTargetDrawerSizeChanged,(FReadAccessScope *)&local_458);
    if ((*(int *)&(param_1->_OnTargetDrawerSizeChanged).field_0x10 != 0) &&
       (plVar29 = *(longlong **)&(param_1->_OnTargetDrawerSizeChanged).field_0x8,
       plVar29 != (longlong *)0x0)) {
      (**(code **)(*plVar29 + 0x50))(plVar29,&local_488);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_458);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTargetDrawerSizeChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_488);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_488,
               (FWriteAccessScope *)&local_458);
    if (((int)local_488._RequiredArgs != 0) &&
       (local_488._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(local_488._Widget.SharedReferenceCount.ReferenceController)->_padding_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_488._Widget.SharedReferenceCount,0,0,0x10);
      local_488._RequiredArgs._0_4_ = 0;
    }
    if (local_458.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
    }
    if (local_488._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_488._Widget.SharedReferenceCount.ReferenceController);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_488);
  }
  TDelegate<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDrawerFocusLost,&param_1->_OnDrawerFocusLost);
  TDelegate<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDrawerClosed,&param_1->_OnDrawerClosed);
  pIVar16 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName((FName *)local_res8,"Docking.Sidebar.DrawerBackground");
  pFVar19 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar17,0,0);
  this->BackgroundBrush = pFVar19;
  pIVar16 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName((FName *)local_res8,"Docking.Sidebar.DrawerShadow");
  pFVar19 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar17,0,0);
  this->ShadowBrush = pFVar19;
  pIVar16 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName((FName *)local_res8,"Docking.Sidebar.Border");
  pFVar19 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar17,0,0);
  this->BorderBrush = pFVar19;
  if (this->OpenDirection == Left) {
    pIVar16 = FAppStyle::Get();
    pcVar27 = "Docking.Sidebar.Border_SquareLeft";
  }
  else {
    if (this->OpenDirection != Right) goto LAB_14271b9fc;
    pIVar16 = FAppStyle::Get();
    pcVar27 = "Docking.Sidebar.Border_SquareRight";
  }
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName((FName *)local_res8,pcVar27);
  pFVar19 = (FSlateBrush *)(*pcVar7)(pIVar16,*pFVar17,0,0);
LAB_14271b9fc:
  this->BorderSquareEdgeBrush = pFVar19;
  uStack_460 = (TReferenceControllerBase<1> *)((ulonglong)uStack_460._4_4_ << 0x20);
  local_468 = (FMemScope)OnGlobalFocusChanging;
  pFVar20 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<STabDrawer>((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                       *)&pFVar20->FocusChangingDelegate,(STabDrawer *)local_res8,
                      (pmf_a4f3a5f5 *)this);
  pTVar21 = FGlobalTabmanager::Get();
  FVar28 = (FName)pTVar21->Object;
  local_488._Widget.Object = (SBox *)0x0;
  local_488._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_488._RequiredArgs._0_4_ = 0;
  local_res8 = (undefined1  [8])FVar28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_488,
             (FWriteAccessScope *)&local_420);
  local_408 = &local_488._Widget.SharedReferenceCount;
  puVar22 = UE::Core::Private::DelegateAllocate
                      (0x38,(FDelegateAllocation *)&local_488._Widget.SharedReferenceCount);
  pTVar30 = local_res18;
  if (puVar22 != (undefined8 *)0x0) {
    local_468 = (FMemScope)OnActiveTabChanged;
    uStack_460 = (TReferenceControllerBase<1> *)
                 ((ulonglong)local_430.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_458);
    pTVar30 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar23->Object;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VSDockTab___00__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTabDrawer___00__A6AXV__TSharedPtr_VSDockTab___00__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar6;
    puVar22[4] = pTVar30;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    *(FMemScope *)(puVar22 + 5) = local_468;
    puVar22[6] = uStack_460;
    FVar28 = (FName)local_res8;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_458.Accessor);
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
         *)((longlong)FVar28 + 0x268),
        (TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_488,
             (FWriteAccessScope *)&local_458);
  if (((int)local_488._RequiredArgs != 0) &&
     (local_488._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(local_488._Widget.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_488._Widget.SharedReferenceCount,0,0,0x10);
    local_488._RequiredArgs._0_4_ = 0;
  }
  if (local_458.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
  }
  if (local_488._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_488._Widget.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_488);
  this->bIsResizing = false;
  this->bIsResizeHandleHovered = false;
  pFVar25 = SBox::FArguments::FArguments(&local_390);
  *(undefined1 *)((longlong)&pFVar25->_padding_ + 2) = 1;
  pTVar30 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_Content).Widget.Object;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = pSVar6;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope
            ((FLLMScope *)local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_468,&local_res10,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_488,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabDrawer.cpp"
             ,0x47,(T0RequiredArgs *)&param_4);
  FMemScope::~FMemScope(&local_468);
  FLLMScope::~FLLMScope((FLLMScope *)local_res8);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_488,&local_430,pFVar25);
  plVar29 = &this->_padding_;
  pTVar30 = (pTVar26->SharedReferenceCount).ReferenceController;
  FVar8 = (FMemScope)pTVar26->Object;
  if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar29);
  }
  else {
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar29);
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar8;
  this->_padding_ = (longlong)pTVar30;
  local_468 = FVar8;
  uStack_460 = pTVar30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_430.SharedReferenceCount.ReferenceController._4_4_,
                      local_430.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_390);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)&local_res18->SharedReferenceCount)->ReferenceController);
  pTVar30 = (local_res20->WeakReferenceCount).ReferenceController;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar30->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar30->_padding_ + 8))(pTVar30,1);
    }
  }
  return;
}

// GetRenderTransformedGeometry @ 142743960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall
STabDrawer::GetRenderTransformedGeometry
          (STabDrawer *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  FDeprecateVector2DParameter *pFVar1;
  FDeprecateVector2DParameter *pFVar2;
  float fVar3;
  FDeprecateVector2DParameter local_48;
  FSlateLayoutTransform local_40;
  FDeprecateVector2DParameter local_34;
  FSlateLayoutTransform local_2c;
  TTransform2<float> local_20;
  
  local_48 = (FDeprecateVector2DParameter)0x3f0000003f000000;
  local_20.M.M[0] = ___xmm_3f80000000000000000000003f800000;
  local_20.M.M[1] = _UNK_15076b188;
  if (this->OpenDirection == Left) {
    pFVar2 = &local_34;
    local_2c.Scale = param_1->Scale;
    local_34 = *(FDeprecateVector2DParameter *)&param_1->Size;
    local_2c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
    pFVar1 = &local_48;
    local_20.Trans.field0_0x0._s_0.Y = 0.0;
    local_20.Trans.field0_0x0._s_0.X = this->CurrentSize - this->TargetDrawerSize;
  }
  else {
    local_48 = *(FDeprecateVector2DParameter *)&param_1->Size;
    fVar3 = this->TargetDrawerSize - this->CurrentSize;
    local_2c.Scale = param_1->Scale;
    local_2c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
    local_34 = (FDeprecateVector2DParameter)0x3f0000003f000000;
    pFVar1 = &local_34;
    pFVar2 = &local_48;
    if (this->OpenDirection == Right) {
      local_20.Trans.field0_0x0._s_0.Y = 0.0;
      local_20.Trans.field0_0x0._s_0.X = fVar3;
    }
    else {
      local_20.Trans.field0_0x0._s_0.X = 0.0;
      local_20.Trans.field0_0x0._s_0.Y = fVar3;
    }
  }
  local_40._0_8_ = 0x3f800000;
  local_40.Translation.field0_0x0._s_0.Y = 0.0;
  FGeometry::FGeometry
            (__return_storage_ptr__,pFVar2,&local_40,&local_20,pFVar1,&local_2c,
             &param_1->AccumulatedRenderTransform);
  return __return_storage_ptr__;
}

// GetResizeHandleGeometry @ 142743aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall
STabDrawer::GetResizeHandleGeometry
          (STabDrawer *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  double dVar1;
  double dVar2;
  float local_78;
  float fStack_74;
  FSlateLayoutTransform local_70;
  FSlateLayoutTransform local_64;
  float local_58 [2];
  float local_50;
  TVector2<float>_u_0 local_4c;
  TTransform2<float> local_3c;
  byte local_24;
  
  GetRenderTransformedGeometry(this,(FGeometry *)local_58,param_1);
  dVar2 = (this->ShadowOffset).field0_0x0._s_0.Y;
  local_70.Translation.field0_0x0._s_0.Y = local_4c._s_0.Y;
  if (this->OpenDirection == Left) {
    local_70.Translation.field0_0x0._s_0.X = SUB84(param_1->Size,4);
    dVar1 = (double)local_58[0] - (this->ShadowOffset).field0_0x0._s_0.X;
    fStack_74 = (float)((double)local_70.Translation.field0_0x0._s_0.X - (dVar2 + dVar2));
    local_78 = this->ExpanderSize;
  }
  else {
    local_78 = this->ExpanderSize;
    dVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
    local_70.Scale = SUB84(param_1->Size,0);
    local_70.Translation.field0_0x0._s_0.X = SUB84(param_1->Size,4);
    if (this->OpenDirection == Right) {
      dVar1 = dVar1 - (double)local_78;
      fStack_74 = (float)((double)local_70.Translation.field0_0x0._s_0.X - (dVar2 + dVar2));
    }
    else {
      dVar2 = dVar2 - (double)local_78;
      fStack_74 = local_78;
      local_78 = (float)((double)local_70.Scale - (dVar1 + dVar1));
    }
  }
  local_64.Translation.field0_0x0._s_0.Y = (float)dVar2;
  local_64.Translation.field0_0x0._s_0.X = (float)dVar1;
  local_70.Translation.field0_0x0._s_0.X = local_4c._s_0.X;
  local_70.Scale = local_50;
  local_64.Scale = 1.0;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_78,&local_64,&local_70,
             &local_3c,(bool)(local_24 & 1));
  return __return_storage_ptr__;
}

// GetTab @ 1427442b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
STabDrawer::GetTab(STabDrawer *this,TSharedRef<SDockTab,1> *__return_storage_ptr__)

{
  TSharedPtr<SDockTab,1>::ToSharedRef(&this->ForTab,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsClosing @ 14274cd20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabDrawer::IsClosing(STabDrawer *this)

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

// IsOpen @ 14274d360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabDrawer::IsOpen(STabDrawer *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsAtStart(&this->OpenCloseAnimation);
  return !bVar1;
}

// OnActiveTabChanged @ 142760af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawer::OnActiveTabChanged
          (STabDrawer *this,TSharedPtr<SDockTab,1> *param_1,TSharedPtr<SDockTab,1> *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<STabDrawer,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if ((param_1->Object == (this->ForTab).Object) && (param_2->Object != (SDockTab *)0x0)) {
    pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    local_28.Object = (STabDrawer *)pTVar1->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    TDelegate<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnDrawerFocusLost,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnArrangeChildren @ 142761050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawer::OnArrangeChildren(STabDrawer *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  double dVar1;
  undefined1 auStackY_b8 [32];
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  undefined1 local_78 [16];
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)(this->_padding_ + 0x39)) != 0) {
    local_88._4_4_ = SUB84(param_1->Size,4);
    if (this->OpenDirection == Left) {
      dVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
      local_80 = this->TargetDrawerSize;
      local_78._0_8_ = 0x3f800000;
      fStack_7c = (float)((double)local_88._4_4_ - (dVar1 + dVar1));
      local_78._8_4_ = (undefined4)dVar1;
    }
    else if (this->OpenDirection == Right) {
      local_80 = this->TargetDrawerSize;
      dVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
      fStack_7c = (float)((double)local_88._4_4_ - (dVar1 + dVar1));
      local_78._4_4_ = (float)(this->ShadowOffset).field0_0x0._s_0.X;
      local_78._0_4_ = 1.0;
      local_78._8_4_ = (undefined4)(this->ShadowOffset).field0_0x0._s_0.Y;
    }
    else {
      dVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
      local_88._0_4_ = SUB84(param_1->Size,0);
      local_80 = (float)((double)(float)local_88 - (dVar1 + dVar1));
      fStack_7c = this->TargetDrawerSize;
      local_78._8_4_ = (undefined4)(this->ShadowOffset).field0_0x0._s_0.Y;
      local_78._4_4_ = (float)dVar1;
      local_78._0_4_ = 1.0;
    }
    local_88._4_4_ = fStack_7c;
    local_88._0_4_ = local_80;
    FGeometry::MakeChild
              (param_1,&local_68,(TSharedRef<SWidget,1> *)&this->_padding_,
               (FDeprecateVector2DParameter *)&local_88,(FSlateLayoutTransform *)local_78);
    FArrangedChildren::AddWidget(param_2,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCursorQuery @ 142761300

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
STabDrawer::OnCursorQuery
          (STabDrawer *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Type *pTVar5;
  int iVar6;
  int iVar7;
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  Type local_60 [2];
  undefined1 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  Type local_20 [2];
  
  iVar7 = 0;
  if ((this->bIsResizing == false) && (this->bIsResizeHandleHovered == false)) {
    local_58 = 0;
    puVar2 = &local_50;
    puVar3 = &local_40;
    local_50 = 0;
    pTStack_48 = (TReferenceControllerBase<1> *)0x0;
    local_20[0] = Default;
    uVar1 = 0;
    local_40 = 0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    puVar4 = &local_30;
    local_30 = 0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = local_20;
    iVar6 = iVar7;
    iVar7 = 1;
  }
  else {
    puVar3 = &local_80;
    puVar2 = &local_90;
    puVar4 = &local_70;
    pTVar5 = local_60;
    local_60[0] = (this->OpenDirection == Bottom) + ResizeLeftRight;
    uVar1 = 1;
    local_90 = 0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    iVar6 = 2;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = uVar1;
  __return_storage_ptr__->_padding_ = puVar2[1];
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar3[1];
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar4[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  __return_storage_ptr__->MouseCursor = *pTVar5;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  }
  if (iVar7 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  }
  return __return_storage_ptr__;
}

// OnGlobalFocusChanging @ 142765230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142765325) */
/* WARNING: Removing unreachable block (ram,0x00014276530a) */
/* WARNING: Removing unreachable block (ram,0x000142765358) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabDrawer::OnGlobalFocusChanging
          (STabDrawer *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  STabDrawer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  EVisibility EVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  bool bVar11;
  atomic<int> aVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FSlateApplication *pFVar14;
  TSharedPtr<SWindow,1> *pTVar15;
  TSharedRef<FGlobalTabmanager,1> *pTVar16;
  ForElementType<FArrangedWidget> FVar17;
  TReferenceControllerBase<1> *pTVar18;
  ForElementType<TSharedRef<SWidget,1>_> FVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  ForElementType<TSharedRef<SWidget,1>_> FVar22;
  undefined1 auStack_2d8 [32];
  TSharedRef<SWidget,1> *local_2b8;
  ForElementType<TSharedRef<SWidget,1>_> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined1 local_288 [16];
  TSharedRef<SWidget,1> local_278;
  TSharedPtr<SWidget,1> local_268;
  uchar local_258 [8];
  TSharedRef<SWidget,1> local_250;
  STabDrawer *local_240;
  TReferenceControllerBase<1> *local_238;
  TSharedRef<SWidget_const_,1> local_230;
  TSharedPtr<SWindow,1> local_220;
  TSharedRef<SWindow,1> local_210;
  TSharedRef<STabDrawer,1> local_200;
  TSharedPtr<SWindow,1> local_1f0;
  ForElementType<TSharedRef<SWidget,1>_> local_1e0;
  int local_198;
  int local_194;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_258[0] = '\0';
  local_258[1] = '\0';
  local_258[2] = '\0';
  local_258[3] = '\0';
  if (bIsRentrant) {
    return;
  }
  bIsRentrant = true;
  pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_250);
  pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
  pSVar3 = (STabDrawer *)pTVar13->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_250.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_250.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_194 = 4;
  local_198 = 0;
  local_1e0.SecondaryData = (ForElementType<TSharedRef<SWidget,1>_>)0x0;
  local_288._0_8_ = pSVar3;
  local_288._8_8_ = pTVar2;
  if ((&local_1e0 <= (ForElementType<TSharedRef<SWidget,1>_> *)local_288) &&
     (local_288 < &local_1e0.SecondaryData)) {
    local_2a0 = 0;
    local_2b0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
    local_298 = 0x10;
    local_2b8 = (TSharedRef<SWidget,1> *)local_288;
    local_2a8 = 4;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (local_198 == local_194) {
    local_198 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                          (0x810,&local_1e0,&local_194);
  }
  FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
  if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar19 = local_1e0.SecondaryData;
  }
  pTVar13 = (TSharedRef<SWidget,1> *)((longlong)FVar19 + (longlong)local_198 * 0x10);
  local_198 = local_198 + 1;
  pTVar13->Object = (SWidget *)local_288._0_8_;
  (pTVar13->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)local_288._8_8_;
  if ((TReferenceControllerBase<1> *)local_288._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_288._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_288._8_8_ + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_288._8_8_);
  plVar1 = &this->_padding_;
  FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
  if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar19 = local_1e0.SecondaryData;
  }
  if ((ulonglong)FVar19 <= plVar1) {
    FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
    if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
      FVar19 = local_1e0.SecondaryData;
    }
    if (plVar1 < (TSharedRef<SWidget,1> *)((longlong)local_194 * 0x10 + (longlong)FVar19)) {
      local_2a0 = (longlong)local_198;
      local_298 = 0x10;
      local_2b0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
      if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
        local_2b0 = local_1e0.SecondaryData;
      }
      local_2b8 = (TSharedRef<SWidget,1> *)plVar1;
      local_2a8 = (longlong)local_194;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  if (local_198 == local_194) {
    local_198 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                          (0x810,&local_1e0,&local_194);
  }
  FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
  if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar19 = local_1e0.SecondaryData;
  }
  pTVar13 = (TSharedRef<SWidget,1> *)((longlong)FVar19 + (longlong)local_198 * 0x10);
  local_198 = local_198 + 1;
  pTVar13->Object = (SWidget *)*plVar1;
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  (pTVar13->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TabButton).WeakReferenceCount.ReferenceController;
  pTVar18 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar4->SharedReferenceCount;
    do {
      pTVar18 = pTVar20;
      if (aVar7 == (atomic<int>)0x0) goto LAB_142765501;
      LOCK();
      aVar12 = pTVar4->SharedReferenceCount;
      bVar10 = aVar7 == aVar12;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar12 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar12;
    } while (!bVar10);
    pSVar5 = (this->TabButton).Object;
    pTVar18 = pTVar4;
    if (pSVar5 != (SWidget *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_278.Object = pSVar5;
      local_278.SharedReferenceCount.ReferenceController = pTVar4;
      if ((pSVar5 == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
      if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
        FVar19 = local_1e0.SecondaryData;
      }
      if ((ulonglong)FVar19 <= &local_278) {
        FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
        if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
          FVar19 = local_1e0.SecondaryData;
        }
        if (&local_278 < (TSharedRef<SWidget,1> *)((longlong)local_194 * 0x10 + (longlong)FVar19)) {
          local_2a0 = (longlong)local_198;
          local_298 = 0x10;
          local_2b8 = &local_278;
          local_2b0 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
          if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
            local_2b0 = local_1e0.SecondaryData;
          }
          local_2a8 = (longlong)local_194;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      if (local_198 == local_194) {
        local_198 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
                              (0x810,&local_1e0,&local_194);
      }
      FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
      if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
        FVar19 = local_1e0.SecondaryData;
      }
      pTVar13 = (TSharedRef<SWidget,1> *)((longlong)FVar19 + (longlong)local_198 * 0x10);
      local_198 = local_198 + 1;
      pTVar13->Object = local_278.Object;
      (pTVar13->SharedReferenceCount).ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142765501:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  bVar10 = false;
  if (GIsSlowTask == false) {
    pFVar14 = FSlateApplication::Get();
    pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000001;
    pTVar15 = FSlateApplication::GetActiveModalWindow(pFVar14,&local_1f0);
    if (pTVar15->Object != (SWindow *)0x0) goto LAB_142765681;
    bVar11 = true;
  }
  else {
LAB_142765681:
    bVar11 = false;
  }
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.SharedReferenceCount.ReferenceController);
  }
  if (bVar11) {
    lVar21 = (longlong)local_198;
    FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
    if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
      FVar19 = local_1e0.SecondaryData;
    }
    if ((local_198 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar22 = (ForElementType<TSharedRef<SWidget,1>_>)(lVar21 * 0x10 + (longlong)FVar19);
    for (; FVar19 != FVar22;
        FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)((longlong)FVar19 + 0x10)) {
      bVar11 = FWidgetPath::ContainsWidget(param_4,*(SWidget **)FVar19);
      if (bVar11) {
        bVar10 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
        if ((!bVar10) || (bVar10 = FCurveSequence::IsInReverse(&this->OpenCloseAnimation), !bVar10))
        {
          pTVar16 = FGlobalTabmanager::Get();
          FGlobalTabmanager::SetActiveTab(pTVar16->Object,&this->ForTab);
        }
        goto LAB_14276590a;
      }
    }
    bVar11 = FWidgetPath::IsValid(param_4);
    if (bVar11) {
      FWidgetPath::GetWindow(param_4,&local_210);
      pFVar14 = FSlateApplication::Get();
      pcVar6 = *(code **)(*(longlong *)pFVar14 + 0x28);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_240 = pSVar3;
      local_238 = pTVar2;
      (*pcVar6)(pFVar14,&local_220,&local_240);
      bVar11 = SWindow::IsDescendantOf(local_210.Object,&local_220);
      if (!bVar11) {
        pFVar14 = FSlateApplication::Get();
        FSlateApplication::GetMenuHostWidget(pFVar14,&local_268);
        if (local_268.Object == (SWidget *)0x0) {
          bVar10 = true;
        }
        else {
          FWidgetPath::FWidgetPath(&local_190);
          pFVar14 = FSlateApplication::Get();
          EVar8 = EVisibility::Visible;
          if ((local_268.Object == (SWidget *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar9.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
          if (local_268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_268.Object == (SWidget *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_230.Object = local_268.Object;
          local_230.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
          if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar9.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          FSlateApplication::GeneratePathToWidgetUnchecked(pFVar14,&local_230,&local_190,EVar8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar9.ReferenceController);
          bVar10 = FWidgetPath::ContainsWidget(&local_190,(SWidget *)this->_padding_);
          bVar10 = !bVar10;
          if (local_190.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar17 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
          if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar17 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar17,local_190.Widgets.Array.ArrayNum);
          if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_268.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_210.SharedReferenceCount.ReferenceController);
      if (!bVar10) goto LAB_14276590a;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_200.Object = pSVar3;
    local_200.SharedReferenceCount.ReferenceController = pTVar2;
    TDelegate<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnDrawerFocusLost,&local_200);
  }
LAB_14276590a:
  FVar19 = (ForElementType<TSharedRef<SWidget,1>_>)&local_1e0;
  if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FVar19 = local_1e0.SecondaryData;
  }
  DestructItems<TSharedRef<SWidget,1>,int>((TSharedRef<SWidget,1> *)FVar19,local_198);
  if (local_1e0.SecondaryData != (ForElementType<TSharedRef<SWidget,1>_>)0x0) {
    FMemory::Free((void *)local_1e0.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bIsRentrant = false;
  return;
}

// OnMouseButtonDown @ 142766180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STabDrawer::OnMouseButtonDown
          (STabDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

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
  undefined1 auStack_1c8 [32];
  TSharedRef<SWidget,1> local_1a8;
  TVector2<float>_u_0 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  FSlateRotatedRect local_180;
  FGeometry local_168;
  FReply local_130;
  FGeometry local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
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
    GetRenderTransformedGeometry(this,&local_168,param_1);
    GetResizeHandleGeometry(this,&local_78,param_1);
    local_1a8.Object = (SWidget *)local_78.Size;
    pSVar3 = local_1a8.Object;
    local_1a8.Object._0_4_ = local_78.Size._0_4_;
    local_1a8.Object._4_4_ = local_78.Size._4_4_;
    local_190 = local_1a8.Object._0_4_;
    local_184 = local_1a8.Object._4_4_;
    local_198 = (TVector2<float>_u_0)0x0;
    local_18c = 0;
    local_1a8.Object = pSVar3;
    TransformRect<TTransform2<float>_>
              (&local_180,&local_78.AccumulatedRenderTransform,(FSlateRotatedRect *)&local_198._s_0)
    ;
    bVar7 = FSlateRotatedRect::IsUnderLocation
                      (&local_180,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    if (bVar7) {
      this->bIsResizing = true;
      FGeometry::operator=(&this->InitialResizeGeometry,&local_78);
      this->InitialSizeAtResize = this->CurrentSize;
      this_00 = FSlateThrottleManager::Get();
      FVar4 = FSlateThrottleManager::EnterResponsiveMode(this_00);
      (this->ResizeThrottleHandle).Index = *(int *)CONCAT44(extraout_var,FVar4.Index);
      FReply::FReply(&local_130,true);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1a8);
      pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar5->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1a8.Object = pSVar3;
      local_1a8.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar6 = FReply::CaptureMouse(&local_130,&local_1a8);
      FReply::operator=(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_130);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142766cb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STabDrawer::OnMouseButtonUp
          (STabDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  float fVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  longlong lVar7;
  FWeakReferencer<1> FVar8;
  FSlateThrottleManager *this_00;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  TSharedRef<SWidget,1> local_108;
  FReadAccessScope local_f8;
  FReply local_e0;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 == EKeys::LeftMouseButton.KeyName) && (this->bIsResizing == true)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    this->bIsResizing = false;
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->ResizeThrottleHandle);
    fVar1 = this->TargetDrawerSize;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_108);
    pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar9->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTargetDrawerSizeChanged,&local_f8);
    if ((*(int *)&(this->OnTargetDrawerSizeChanged).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(this->OnTargetDrawerSizeChanged).field_0x8,
       plVar6 != (longlong *)0x0)) {
      lVar7 = *plVar6;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      local_108.Object = pSVar5;
      local_108.SharedReferenceCount.ReferenceController = pTVar4;
      (**(code **)(lVar7 + 0x68))(plVar6,&local_108,fVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FReply::FReply(&local_e0,true);
    FVar8.ReferenceController = local_e0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_e0.MouseCaptor.Object = (SWidget *)0x0;
    local_e0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &(FVar8.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
      }
    }
    local_e0.bUseHighPrecisionMouse = 0;
    local_e0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_e0);
    FReply::~FReply(&local_e0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142767060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawer::OnMouseLeave(STabDrawer *this,FPointerEvent *param_1)

{
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  this->bIsResizeHandleHovered = false;
  return;
}

// OnMouseMove @ 142767110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STabDrawer::OnMouseMove
          (STabDrawer *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  float fVar1;
  FDeprecateSlateVector2D FVar2;
  bool bVar3;
  TTransform2<float> *pTVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  TVector2<float>_u_0 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  FSlateRotatedRect local_88;
  FGeometry local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  GetResizeHandleGeometry(this,&local_70,param_1);
  local_a8 = local_70.Size;
  FVar2 = local_a8;
  local_a8._0_4_ = local_70.Size._0_4_;
  local_98 = (float)local_a8;
  local_a8._4_4_ = local_70.Size._4_4_;
  local_8c = local_a8._4_4_;
  local_a0 = (TVector2<float>_u_0)0x0;
  local_94 = 0;
  local_a8 = FVar2;
  TransformRect<TTransform2<float>_>
            (&local_88,&local_70.AccumulatedRenderTransform,(FSlateRotatedRect *)&local_a0._s_0);
  bVar3 = FSlateRotatedRect::IsUnderLocation
                    (&local_88,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
  this->bIsResizeHandleHovered = bVar3;
  if (this->bIsResizing != false) {
    bVar3 = SWidget::HasMouseCapture((SWidget *)this);
    if ((bVar3) &&
       ((*(float *)&param_2->CursorDelta != 0.0 ||
        (*(float *)&(param_2->CursorDelta).field_0x4 != 0.0)))) {
      pTVar4 = &(this->InitialResizeGeometry).AccumulatedRenderTransform;
      local_a8 = param_2->ScreenSpacePosition;
      if (this->OpenDirection == Left) {
        pTVar4 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_88,pTVar4);
        fVar6 = local_a8._4_4_ * (pTVar4->M).M[1][0] + (float)local_a8 * (pTVar4->M).M[0][0] +
                (pTVar4->Trans).field0_0x0._s_0.X;
      }
      else {
        if (this->OpenDirection == Right) {
          pTVar4 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_88,pTVar4);
          fVar6 = local_a8._4_4_ * (pTVar4->M).M[1][0] + (float)local_a8 * (pTVar4->M).M[0][0] +
                  (pTVar4->Trans).field0_0x0._s_0.X;
        }
        else {
          pTVar4 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_88,pTVar4);
          fVar6 = (float)local_a8 * (pTVar4->M).M[0][1] + local_a8._4_4_ * (pTVar4->M).M[1][1] +
                  (pTVar4->Trans).field0_0x0._s_0.Y;
        }
        fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
      }
      fVar6 = fVar6 + this->InitialSizeAtResize;
      fVar1 = this->MinDrawerSize;
      bVar3 = true;
      fVar5 = this->MaxDrawerSize;
      if (fVar6 <= this->MaxDrawerSize) {
        fVar5 = fVar6;
      }
      if (fVar5 <= fVar1) {
        fVar5 = fVar1;
      }
      this->TargetDrawerSize = fVar5;
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      if (fVar5 <= fVar1) {
        fVar5 = fVar1;
      }
      this->CurrentSize = fVar5;
      goto LAB_1427672d6;
    }
  }
  bVar3 = false;
LAB_1427672d6:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnPaint @ 142768fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STabDrawer::OnPaint(STabDrawer *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                   FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  FSplitterStyle *pFVar2;
  SWidget *pSVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  atomic<int> aVar8;
  float fVar9;
  TVector2<float>_u_0_s_0 TVar10;
  uint uVar11;
  atomic<int> aVar12;
  FGeometry *pFVar13;
  TTransform2<float> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  FSlateClippingZone *pFVar17;
  FSlateColor *pFVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  byte bVar21;
  FSlateBrush *pFVar22;
  SWidget *pSVar23;
  SWidget *this_00;
  FSlateBrush *pFVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined1 auStackY_558 [32];
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4e0;
  FLinearColor_u_0 local_4d8;
  undefined4 local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  float local_4b0;
  undefined8 local_4a8;
  TVector2<float>_u_0_s_0 local_49c;
  TVector2<float>_u_0_s_0 local_490;
  TVector2<float>_u_0_s_0 local_484;
  FName local_478;
  FLinearColor_u_0 local_470;
  FLinearColor_u_0 local_460;
  TTransform2<float> local_450;
  TTransform2<float> local_438;
  TTransform2<float> local_420;
  TTransform2<float> local_408;
  TTransform2<float> local_3f0;
  TTransform2<float> local_3d8;
  TTransform2<float> local_3c0;
  TTransform2<float> local_3a8;
  TTransform2<float> local_390;
  TTransform2<float> local_378;
  FSlateClippingZone local_360;
  FDeprecateSlateVector2D local_338;
  undefined8 uStack_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  TTransform2<float> local_300;
  TVector2<float>_u_0 local_2e8;
  float local_2e0;
  TVector2<float>_u_0_s_0 local_2dc;
  TTransform2<float> local_2cc;
  byte local_2b4;
  TVector2<float>_u_0 local_2b0;
  float local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  float local_294 [2];
  float afStack_28c [2];
  TVector2<float>_u_0 local_284;
  byte local_27c;
  TVector2<float>_u_0 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  TVector2<float>_u_0 local_264;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  byte local_244;
  TVector2<float>_u_0 local_240;
  float local_238;
  undefined8 local_234;
  TVector2<float>_u_0 local_22c;
  float local_224 [2];
  float afStack_21c [2];
  TVector2<float>_u_0 local_214;
  byte local_20c;
  TVector2<float>_u_0 local_208;
  float local_200;
  undefined8 local_1fc;
  undefined8 local_1f4;
  float local_1ec [2];
  float afStack_1e4 [2];
  TVector2<float>_u_0 local_1dc;
  byte local_1d4;
  TVector2<float>_u_0 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  float local_1b4 [2];
  float afStack_1ac [2];
  TVector2<float>_u_0 local_1a4;
  byte local_19c;
  TVector2<float>_u_0 local_198;
  float local_190;
  undefined8 local_18c;
  undefined8 local_184;
  float local_17c [2];
  float afStack_174 [2];
  TVector2<float>_u_0 local_16c;
  byte local_164;
  TVector2<float>_u_0 local_160;
  float local_158;
  undefined8 local_154;
  undefined8 local_14c;
  float local_144 [2];
  float afStack_13c [2];
  TVector2<float>_u_0 local_134;
  byte local_12c;
  TVector2<float>_u_0 local_128;
  undefined4 local_120;
  TVector2<float>_u_0 local_11c;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  byte local_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_558;
  this_00 = (SWidget *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar19 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar19 + 0x40);
    pFVar20 = ::FName::FName(&local_478,"Colors.Foldout");
    (*pcVar4)(pIVar19,&ShadowColor,*pFVar20,0);
    _Init_thread_footer(&::_TSS0);
  }
  GetRenderTransformedGeometry(this,(FGeometry *)&local_2e8._s_0,param_2);
  GetResizeHandleGeometry(this,(FGeometry *)&local_128._s_0,param_2);
  local_2a8 = local_2e0;
  local_4a8 = param_2->Size;
  fVar9 = (float)local_4a8;
  local_4b8 = (double)local_4a8._4_4_;
  if (this->OpenDirection == Left) {
    dVar32 = (this->ShadowOffset).field0_0x0._s_0.Y;
    local_4c8 = 0;
    fStack_4c4 = 0.0;
    fStack_4c0 = 0.0;
    uStack_4bc = 0;
    dVar33 = (double)this->TargetDrawerSize;
    dVar31 = local_4b8 - (dVar32 + dVar32);
    fVar40 = SUB84(dVar32,0);
    uVar41 = (int)((ulonglong)dVar32 >> 0x20);
  }
  else {
    local_4c8 = *(undefined4 *)&(this->ShadowOffset).field0_0x0;
    fStack_4c4 = *(float *)((longlong)&(this->ShadowOffset).field0_0x0 + 4);
    fStack_4c0 = *(float *)((longlong)&(this->ShadowOffset).field0_0x0 + 8);
    uStack_4bc = *(undefined4 *)((longlong)&(this->ShadowOffset).field0_0x0 + 0xc);
    fVar40 = fStack_4c0;
    uVar41 = uStack_4bc;
    if (this->OpenDirection == Right) {
      dVar31 = (this->ShadowOffset).field0_0x0._s_0.Y;
      dVar33 = (double)this->TargetDrawerSize;
      dVar31 = local_4b8 - (dVar31 + dVar31);
    }
    else {
      dVar33 = (this->ShadowOffset).field0_0x0._s_0.X;
      dVar31 = (double)this->TargetDrawerSize;
      dVar33 = (double)(float)local_4a8 - (dVar33 + dVar33);
    }
  }
  local_49c = local_2dc;
  TVar10 = local_49c;
  bVar21 = local_2b4 & 1;
  local_518._4_4_ = (float)(double)CONCAT44(uVar41,fVar40);
  local_518._0_4_ = (float)(double)CONCAT44(fStack_4c4,local_4c8);
  local_508 = (TVector2<float>_u_0)CONCAT44((float)dVar31,(float)dVar33);
  local_450.Trans.field0_0x0 = local_518;
  local_49c.X = local_2dc.X;
  fVar26 = (float)(double)CONCAT44(fStack_4c4,local_4c8) * local_2e0 + local_49c.X;
  local_49c.Y = local_2dc.Y;
  fVar27 = (float)(double)CONCAT44(uVar41,fVar40) * local_2e0 + local_49c.Y;
  local_450.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_450.M.M[0][1] = _UNK_15076b184;
  local_450.M.M[1][0] = _UNK_15076b188;
  local_450.M.M[1][1] = _UNK_15076b18c;
  local_49c = TVar10;
  Concatenate<TTransform2<float>_>(&local_438,&local_450,&local_2cc);
  local_2b0._s_0.Y = fVar27;
  local_2b0._s_0.X = fVar26;
  local_29c = local_508;
  local_27c = local_27c & 0xfc | bVar21 * '\x02';
  local_2a4 = 0;
  local_294[0] = local_438.M.M[0][0];
  local_294[1] = local_438.M.M[0][1];
  afStack_28c[0] = local_438.M.M[1][0];
  afStack_28c[1] = local_438.M.M[1][1];
  local_284 = local_438.Trans.field0_0x0;
  if ((this->bIsResizing != false) || (this->bIsResizeHandleHovered != false)) {
    pFVar2 = this->SplitterStyle;
    EVar1 = (pFVar2->HandleHighlightBrush).TintColor.ColorUseRule;
    pFVar18 = &(pFVar2->HandleHighlightBrush).TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_470._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
    local_470._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
    local_278 = local_11c;
    local_264 = local_128;
    local_26c = 0;
    local_244 = (local_f4 & 1) * '\x02' | local_244 & 0xfc;
    local_270 = local_120;
    local_25c = local_10c;
    uStack_254 = uStack_104;
    local_24c = local_fc;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_278._s_0,&pFVar2->HandleHighlightBrush,None,
               (FLinearColor *)&local_470._s_0);
  }
  EVar1 = (this->ShadowBrush->TintColor).ColorUseRule;
  pFVar18 = &this->ShadowBrush->TintColor;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_460._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
  local_460._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
  local_240._s_0 = local_2dc;
  local_22c = local_2e8;
  local_234 = 0;
  local_20c = (local_2b4 & 1) * '\x02' | local_20c & 0xfc;
  local_238 = local_2e0;
  local_224[0] = local_2cc.M.M[0][0];
  local_224[1] = local_2cc.M.M[0][1];
  afStack_21c[0] = local_2cc.M.M[1][0];
  afStack_21c[1] = local_2cc.M.M[1][1];
  local_214 = local_2cc.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_240._s_0,this->ShadowBrush,None,
             (FLinearColor *)&local_460._s_0);
  EVar1 = (this->BackgroundBrush->TintColor).ColorUseRule;
  pFVar18 = &this->BackgroundBrush->TintColor;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_4d8._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
  local_4d8._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_2b0._s_0,this->BackgroundBrush,None,
             (FLinearColor *)&local_4d8._s_0);
  uVar11 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,param_1,(FGeometry *)&local_2e8._s_0,param_3,param_4,
                      param_5,param_6,param_7);
  pSVar3 = (SWidget *)(this->TabButton).WeakReferenceCount.ReferenceController;
  pSVar23 = pSVar3;
  if (pSVar3 != (SWidget *)0x0) {
    aVar8 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar23 = this_00;
      if (aVar8 == (atomic<int>)0x0) goto LAB_142769497;
      LOCK();
      aVar12 = *(atomic<int> *)&pSVar3->_padding_;
      bVar25 = aVar8 == aVar12;
      if (bVar25) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar8 + 1);
        aVar12 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar12;
    } while (!bVar25);
    this_00 = (this->TabButton).Object;
    pSVar23 = pSVar3;
  }
LAB_142769497:
  if ((this->OpenDirection == Bottom) || (this_00 == (SWidget *)0x0)) {
    EVar1 = (this->BorderBrush->TintColor).ColorUseRule;
    pFVar18 = &this->BorderBrush->TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_4d8._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
    local_4d8._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
    FSlateDrawElement::MakeBox
              (param_4,uVar11,(FPaintGeometry *)&local_2b0._s_0,this->BorderBrush,None,
               (FLinearColor *)&local_4d8._s_0);
  }
  else {
    pFVar13 = SWidget::GetPaintSpaceGeometry(this_00);
    fVar34 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    local_338 = pFVar13->Size;
    uStack_330 = *(undefined8 *)&pFVar13->Scale;
    local_328 = (pFVar13->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_324 = (pFVar13->Position).field0_0x0._s_0.X;
    fStack_320 = (pFVar13->Position).field0_0x0._s_0.Y;
    fVar26 = (pFVar13->AccumulatedRenderTransform).M.M[0][0];
    fVar27 = (pFVar13->AccumulatedRenderTransform).M.M[0][1];
    fVar5 = (pFVar13->AccumulatedRenderTransform).M.M[1][0];
    fVar6 = (pFVar13->AccumulatedRenderTransform).M.M[1][1];
    fVar7 = (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uVar28 = *(undefined8 *)((longlong)&(pFVar13->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar39 = (float)uVar28;
    fVar36 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    local_518._0_4_ = local_338._0_4_;
    local_518._4_4_ = local_338._4_4_;
    fStack_31c = fVar26;
    local_318 = fVar27;
    fStack_314 = fVar5;
    fStack_310 = fVar6;
    fStack_30c = fVar7;
    pTVar14 = Inverse<TTransform2<float>_>(&local_300,&local_2cc);
    fVar38 = (this->BorderBrush->OutlineSettings).Width * __real_3f000000;
    fVar35 = (float)UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
    fVar37 = (float)UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
    fVar34 = (fVar36 * (float)local_518._4_4_ * fVar6 +
              fVar34 * (float)(undefined4)local_518 * fVar27 + fVar39) * (pTVar14->M).M[1][1] +
             (fVar36 * (float)local_518._4_4_ * fVar5 +
              fVar34 * (float)(undefined4)local_518 * fVar26 + fVar7) * (pTVar14->M).M[0][1] +
             (pTVar14->Trans).field0_0x0._s_0.Y + fVar38;
    local_308 = uVar28;
    pTVar14 = Inverse<TTransform2<float>_>((TTransform2<float> *)&local_360,&local_2cc);
    local_190 = local_2e0;
    fVar38 = ((fVar37 * (float)local_518._4_4_ * fVar6 +
               fVar35 * (float)(undefined4)local_518 * fVar27 + fVar39) * (pTVar14->M).M[1][1] +
              (fVar37 * (float)local_518._4_4_ * fVar5 +
               fVar35 * (float)(undefined4)local_518 * fVar26 + fVar7) * (pTVar14->M).M[0][1] +
             (pTVar14->Trans).field0_0x0._s_0.Y) - fVar38;
    dVar32 = (double)(float)(undefined4)local_518;
    if (this->OpenDirection == Left) {
      uVar29 = (undefined4)__real_8000000000000000;
      uVar30 = (undefined4)((ulonglong)__real_8000000000000000 >> 0x20);
      uVar28 = CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar32,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    else {
      uVar29 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar30 = (undefined4)
               ((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    }
    local_490 = local_2dc;
    TVar10 = local_490;
    local_500._0_4_ = (undefined4)((double)uVar28 + (double)CONCAT44(fStack_4c4,local_4c8));
    bVar21 = local_2b4 & 1;
    local_500._4_4_ =
         (undefined4)((double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar41,fVar40));
    local_420.Trans.field0_0x0 = local_500;
    local_510 = (TVector2<float>_u_0)CONCAT44((float)dVar31,(float)(dVar33 + dVar32));
    local_490.X = local_2dc.X;
    local_490.Y = local_2dc.Y;
    local_508._4_4_ = (float)local_500._4_4_ * local_2e0 + local_490.Y;
    local_508._0_4_ = (float)(undefined4)local_500 * local_2e0 + local_490.X;
    local_420.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_420.M.M[0][1] = _UNK_15076b184;
    local_420.M.M[1][0] = _UNK_15076b188;
    local_420.M.M[1][1] = _UNK_15076b18c;
    local_490 = TVar10;
    Concatenate<TTransform2<float>_>(&local_408,&local_420,&local_2cc);
    fVar40 = local_2e0;
    local_198 = local_508;
    local_17c[0] = local_408.M.M[0][0];
    local_17c[1] = local_408.M.M[0][1];
    afStack_174[0] = local_408.M.M[1][0];
    afStack_174[1] = local_408.M.M[1][1];
    local_184 = local_510;
    local_164 = local_164 & 0xfc | bVar21 * '\x02';
    bVar21 = local_2b4 & 1;
    local_484 = local_2dc;
    TVar10 = local_484;
    local_18c = 0;
    local_3f0.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    local_484.X = local_2dc.X;
    local_16c = local_408.Trans.field0_0x0;
    local_484.Y = local_2dc.Y;
    local_510._4_4_ = local_2e0 * 0.0 + local_484.Y;
    local_510._0_4_ = local_2e0 * 0.0 + local_484.X;
    local_3f0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_3f0.M.M[0][1] = _UNK_15076b184;
    local_3f0.M.M[1][0] = _UNK_15076b188;
    local_3f0.M.M[1][1] = _UNK_15076b18c;
    local_484 = TVar10;
    Concatenate<TTransform2<float>_>(&local_3d8,&local_3f0,&local_2cc);
    fVar26 = local_2e0;
    local_208 = local_510;
    local_200 = fVar40;
    local_1fc = 0;
    local_1d4 = local_1d4 & 0xfc | bVar21 * '\x02';
    local_1ec[0] = local_3d8.M.M[0][0];
    local_1ec[1] = local_3d8.M.M[0][1];
    afStack_1e4[0] = local_3d8.M.M[1][0];
    afStack_1e4[1] = local_3d8.M.M[1][1];
    bVar21 = local_2b4 & 1;
    fStack_4c4 = local_2dc.X;
    fStack_4c0 = local_2dc.Y;
    local_508 = (TVector2<float>_u_0)((ulonglong)(uint)fVar34 << 0x20);
    local_3c0.Trans.field0_0x0 = local_508;
    local_1dc = local_3d8.Trans.field0_0x0;
    local_518._4_4_ = fVar34 * local_2e0 + fStack_4c0;
    local_518._0_4_ = local_2e0 * 0.0 + fStack_4c4;
    local_3c0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_3c0.M.M[0][1] = _UNK_15076b184;
    local_3c0.M.M[1][0] = _UNK_15076b188;
    local_3c0.M.M[1][1] = _UNK_15076b18c;
    local_1f4 = CONCAT44(fVar34,fVar9);
    Concatenate<TTransform2<float>_>(&local_3a8,&local_3c0,&local_2cc);
    dVar31 = local_4b8;
    local_1d0 = local_518;
    local_1bc = CONCAT44(fVar38 - fVar34,fVar9);
    local_1b4[0] = local_3a8.M.M[0][0];
    local_1b4[1] = local_3a8.M.M[0][1];
    afStack_1ac[0] = local_3a8.M.M[1][0];
    afStack_1ac[1] = local_3a8.M.M[1][1];
    local_19c = local_19c & 0xfc | bVar21 * '\x02';
    local_510 = (TVector2<float>_u_0)((ulonglong)(uint)fVar38 << 0x20);
    local_1c4 = 0;
    local_4b8._4_4_ = local_2dc.X;
    local_4b0 = local_2dc.Y;
    local_1c8 = fVar26;
    local_1a4 = local_3a8.Trans.field0_0x0;
    local_4e0._4_4_ = fVar38 * local_2e0 + local_4b0;
    local_4e0._0_4_ = local_2e0 * 0.0 + local_4b8._4_4_;
    local_390.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_390.M.M[0][1] = _UNK_15076b184;
    local_390.M.M[1][0] = _UNK_15076b188;
    local_390.M.M[1][1] = _UNK_15076b18c;
    local_390.Trans.field0_0x0 = local_510;
    Concatenate<TTransform2<float>_>(&local_378,&local_390,&local_2cc);
    pFVar24 = this->BorderBrush;
    local_160 = local_4e0;
    local_134 = local_378.Trans.field0_0x0;
    dVar33 = (this->ShadowOffset).field0_0x0._s_0.Y;
    local_12c = local_12c & 0xfc | (local_2b4 & 1) * '\x02';
    local_158 = local_2e0;
    local_144[0] = local_378.M.M[0][0];
    local_144[1] = local_378.M.M[0][1];
    afStack_13c[0] = local_378.M.M[1][0];
    afStack_13c[1] = local_378.M.M[1][1];
    local_154 = 0;
    lVar15 = 0x50;
    if (this->OpenDirection == Left) {
      lVar15 = 0x58;
    }
    lVar16 = 0x40;
    if (this->OpenDirection != Left) {
      lVar16 = 0x48;
    }
    pFVar22 = pFVar24;
    if ((double)fVar34 < dVar33 + *(double *)((longlong)&pFVar24->_padding_ + lVar16)) {
      pFVar22 = this->BorderSquareEdgeBrush;
    }
    if ((dVar31 - dVar33) - *(double *)((longlong)&pFVar24->_padding_ + lVar15) < (double)fVar38) {
      pFVar24 = this->BorderSquareEdgeBrush;
    }
    local_14c = CONCAT44((float)(dVar31 - (double)fVar38),fVar9);
    pFVar17 = FSlateClippingZone::FSlateClippingZone(&local_360,(FPaintGeometry *)&local_208._s_0);
    FSlateWindowElementList::PushClip(param_4,pFVar17);
    EVar1 = (pFVar22->TintColor).ColorUseRule;
    pFVar18 = &pFVar22->TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_4d8._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
    local_4d8._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
    FSlateDrawElement::MakeBox
              (param_4,uVar11,(FPaintGeometry *)&local_2b0._s_0,pFVar22,None,
               (FLinearColor *)&local_4d8._s_0);
    FSlateWindowElementList::PopClip(param_4);
    pFVar17 = FSlateClippingZone::FSlateClippingZone(&local_360,(FPaintGeometry *)&local_1d0._s_0);
    FSlateWindowElementList::PushClip(param_4,pFVar17);
    EVar1 = (this->BorderSquareEdgeBrush->TintColor).ColorUseRule;
    pFVar18 = &this->BorderSquareEdgeBrush->TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_4d8._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
    local_4d8._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
    FSlateDrawElement::MakeBox
              (param_4,uVar11,(FPaintGeometry *)&local_198._s_0,this->BorderSquareEdgeBrush,None,
               (FLinearColor *)&local_4d8._s_0);
    FSlateWindowElementList::PopClip(param_4);
    pFVar17 = FSlateClippingZone::FSlateClippingZone(&local_360,(FPaintGeometry *)&local_160._s_0);
    FSlateWindowElementList::PushClip(param_4,pFVar17);
    EVar1 = (pFVar24->TintColor).ColorUseRule;
    pFVar18 = &pFVar24->TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar18 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar18);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar18 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar18 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_4d8._0_8_ = *(undefined8 *)&(pFVar18->SpecifiedColor).field0_0x0;
    local_4d8._8_8_ = *(undefined8 *)((longlong)&(pFVar18->SpecifiedColor).field0_0x0 + 8);
    FSlateDrawElement::MakeBox
              (param_4,uVar11,(FPaintGeometry *)&local_2b0._s_0,pFVar24,None,
               (FLinearColor *)&local_4d8._s_0);
    FSlateWindowElementList::PopClip(param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar23);
  return uVar11 + 1;
}

// Open @ 14276cea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawer::Open(STabDrawer *this,bool param_1)

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
  bVar2 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (bVar2) {
    fVar7 = FCurveSequence::GetSequenceTime(&this->OpenCloseAnimation);
  }
  else {
    fVar7 = 0.0;
  }
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
             ::CreateSP<STabDrawer>(local_38,this,(pmf_9082d6d0 *)&local_58);
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

// SetCurrentSize @ 142784530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabDrawer::SetCurrentSize(STabDrawer *this,float param_1)

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

// SupportsKeyboardFocus @ 14278c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabDrawer::SupportsKeyboardFocus(STabDrawer *this)

{
  return true;
}

// UpdateAnimation @ 142790a90

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STabDrawer::UpdateAnimation(STabDrawer *this,double param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FSlateThrottleManager *this_00;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<STabDrawer,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  fVar4 = FCurveSequence::GetLerp(&this->OpenCloseAnimation);
  fVar1 = this->TargetDrawerSize;
  fVar5 = fVar1 * fVar4;
  if (fVar1 <= fVar1 * fVar4) {
    fVar5 = fVar1;
  }
  if (fVar5 <= this->MinDrawerSize) {
    fVar5 = this->MinDrawerSize;
  }
  this->CurrentSize = fVar5;
  bVar2 = FCurveSequence::IsPlaying(&this->OpenCloseAnimation);
  if (!bVar2) {
    bVar2 = FCurveSequence::IsAtStart(&this->OpenCloseAnimation);
    if (bVar2) {
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      local_28.Object = (STabDrawer *)pTVar3->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      TDelegate<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnDrawerClosed,&local_28);
    }
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
  return Continue;
}

