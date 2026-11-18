// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetEventMouseEnter_WrapperImpl @ 14b6e2520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_StatusCategorySlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_2e8 [32];
  float fStack_2b8;
  float fStack_2b4;
  undefined1 auStack_2a8 [8];
  FDelegateAllocation FStack_2a0;
  FDeprecateSlateVector2D FStack_290;
  FWeakObjectPtr FStack_288;
  void *pvStack_280;
  code *pcStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TVector2<double>_u_0 TStack_268;
  FDestructionSentinel FStack_258;
  FDestructionSentinel FStack_240;
  FDelegateAllocation *pFStack_228;
  TVector2<double>_u_0 TStack_220;
  TVector2<double> TStack_210;
  FDeprecateSlateVector2D FStack_200;
  undefined8 uStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> TStack_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_1a8;
  ulonglong uStack_88;
  
  uStack_88 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_1a8,"UDS_VM_StatusCategorySlot::OnEventMouseEnter",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_1a8.Ptr,0x4e,L"windowMng is nullptr");
      if ((void *)TStack_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_1a8._padding_);
      }
    }
  }
  else {
    UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStack_288);
    bVar2 = FWeakObjectPtr::IsValid(&FStack_288);
    if ((bVar2) && (*(UWidget **)param_2 != (UWidget *)0x0)) {
      pFVar4 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
      fStack_1e0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
      fStack_1dc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
      fStack_1d8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
      fStack_1d4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      uStack_1d0 = *(undefined8 *)
                    ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      fVar13 = (float)uStack_1d0;
      FStack_290 = pFVar4->Size;
      uStack_1f8 = *(undefined8 *)&pFVar4->Scale;
      fStack_1f0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
      fStack_1ec = (pFVar4->Position).field0_0x0._s_0.X;
      fStack_1e8 = (pFVar4->Position).field0_0x0._s_0.Y;
      fStack_1e4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
      fStack_2b8 = FStack_290._0_4_;
      fStack_2b4 = FStack_290._4_4_;
      fVar11 = fStack_2b8 * __real_3f000000 * fStack_1e0;
      fVar9 = fStack_2b4 * __real_3f000000;
      fVar10 = fStack_2b4 * __real_3f000000 * fStack_1dc + fStack_2b8 * __real_3f000000 * fStack_1e4
               + fStack_1d4;
      fVar12 = fStack_2b4 * __real_3f000000 * fStack_1d8;
      fStack_2b8 = fStack_2b8 * __real_3f000000;
      FStack_200 = FStack_290;
      pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      if (pUVar5 == (UObject *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4494977755401683038>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_StatusCategorySlot.cpp"
                           ,0x5e,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        TStack_268._s_0.X = (double)fVar10;
        TStack_268._s_0.Y = (double)(fVar12 + fVar11 + fVar13);
        USlateBlueprintLibrary::AbsoluteToViewport
                  (pUVar5,(TVector2<double> *)&TStack_268._s_0,&TStack_210,
                   (TVector2<double> *)&TStack_220._s_0);
        pcStack_278 = OnOpenContentsTooltip;
        uStack_26c = TStack_210.field0_0x0._12_4_;
        uStack_270 = 0;
        auStack_2a8 = (undefined1  [8])0x0;
        FStack_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        FStack_2a0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_2a8,
                   (FWriteAccessScope *)&FStack_240);
        pFStack_228 = &FStack_2a0;
        puVar6 = UE::Core::Private::DelegateAllocate(0x48,&FStack_2a0);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
          ;
          puVar6[1] = TStack_220._s_0.X;
          puVar6[2] = TStack_220._s_0.Y;
          puVar6[3] = (double)fStack_2b8;
          puVar6[4] = (double)fVar9;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[5] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_StatusCategorySlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          puVar6[6] = 0;
          pvStack_280 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)&pvStack_280);
          puVar6[7] = pcStack_278;
          puVar6[8] = CONCAT44(uStack_26c,uStack_270);
        }
        if (FStack_240.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_240.Accessor,&FStack_240);
        }
        pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           (&TStack_1c8,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            auStack_2a8);
        UDS_WindowManager::OpenWindow(this,StatusToolTip,pTVar8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_2a8,
                   (FWriteAccessScope *)&FStack_258);
        if ((FStack_2a0.DelegateSize != 0) &&
           (FStack_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_2a0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_2a0,0,0,0x10);
          FStack_2a0.DelegateSize = 0;
        }
        if (FStack_258.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_258.Accessor,&FStack_258);
        }
        if (FStack_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_2a0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_2a8);
      }
    }
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b6e2530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_StatusCategorySlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  afStackX_18[0] = 0.0;
  auStackX_20[0] = 0;
  UDS_WindowManager::CloseWindow(this,StatusToolTip,auStackX_20,afStackX_18);
  return;
}

// StaticClass @ 14b6e2540

UClass * __cdecl UDS_VM_StatusCategorySlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategorySlot",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategorySlot,0x2c8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_StatusCategorySlot>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategorySlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton;
}

// UDS_VM_StatusCategorySlot @ 14b6e62f0

UDS_VM_StatusCategorySlot * __thiscall
UDS_VM_StatusCategorySlot::UDS_VM_StatusCategorySlot
          (UDS_VM_StatusCategorySlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_StatusInfo).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategorySlot__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  this->PlayerEntityID = 0;
  this->CharID = 0;
  return this;
}

// UDS_VM_StatusCategorySlot @ 14b6e6370

UDS_VM_StatusCategorySlot * __thiscall
UDS_VM_StatusCategorySlot::UDS_VM_StatusCategorySlot
          (UDS_VM_StatusCategorySlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_StatusInfo).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategorySlot__6B_;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  this->PlayerEntityID = 0;
  this->CharID = 0;
  return this;
}

// ~UDS_VM_StatusCategorySlot @ 14b6e74e0

void __thiscall
UDS_VM_StatusCategorySlot::~UDS_VM_StatusCategorySlot(UDS_VM_StatusCategorySlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StatusCategorySlot__6B_;
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9a60

IClassDescriptor * __thiscall
UDS_VM_StatusCategorySlot::GetFieldNotificationDescriptor(UDS_VM_StatusCategorySlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StatusCategorySlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea6c0

UClass * __cdecl UDS_VM_StatusCategorySlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StatusCategorySlot",
               &Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_StatusCategorySlot,0x2c8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_StatusCategorySlot>,
               InternalVTableHelperCtorCaller<UDS_VM_StatusCategorySlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StatusCategorySlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_StatusCategorySlot @ 14b6eacc0

void __cdecl UDS_VM_StatusCategorySlot::StaticRegisterNativesUDS_VM_StatusCategorySlot(void)

{
  return;
}

// OnEventMouseEnter @ 14be2f9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategorySlot::OnEventMouseEnter
          (UDS_VM_StatusCategorySlot *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_2e8 [32];
  float local_2b8;
  float fStack_2b4;
  undefined1 local_2a8 [8];
  FDelegateAllocation local_2a0;
  FDeprecateSlateVector2D local_290;
  FWeakObjectPtr local_288;
  UDS_VM_StatusCategorySlot *local_280;
  code *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TVector2<double>_u_0 local_268;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDelegateAllocation *local_228;
  TVector2<double>_u_0 local_220;
  TVector2<double> local_210;
  FDeprecateSlateVector2D local_200;
  undefined8 uStack_1f8;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_VM_StatusCategorySlot::OnEventMouseEnter",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_1a8.Ptr,0x4e,L"windowMng is nullptr");
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
    }
  }
  else {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_288);
    bVar2 = FWeakObjectPtr::IsValid(&local_288);
    if ((bVar2) && (param_1->TargetWidget != (UDS_UserWidget *)0x0)) {
      pFVar4 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
      local_1e0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
      fStack_1dc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
      fStack_1d8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
      fStack_1d4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      local_1d0 = *(undefined8 *)
                   ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      fVar13 = (float)local_1d0;
      local_290 = pFVar4->Size;
      uStack_1f8 = *(undefined8 *)&pFVar4->Scale;
      local_1f0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
      fStack_1ec = (pFVar4->Position).field0_0x0._s_0.X;
      fStack_1e8 = (pFVar4->Position).field0_0x0._s_0.Y;
      fStack_1e4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
      local_2b8 = local_290._0_4_;
      fStack_2b4 = local_290._4_4_;
      fVar11 = local_2b8 * __real_3f000000 * local_1e0;
      fVar9 = fStack_2b4 * __real_3f000000;
      fVar10 = fStack_2b4 * __real_3f000000 * fStack_1dc + local_2b8 * __real_3f000000 * fStack_1e4
               + fStack_1d4;
      fVar12 = fStack_2b4 * __real_3f000000 * fStack_1d8;
      local_2b8 = local_2b8 * __real_3f000000;
      local_200 = local_290;
      pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
      if (pUVar5 == (UObject *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4494977755401683038>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_StatusCategorySlot.cpp"
                           ,0x5e,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        local_268._s_0.X = (double)fVar10;
        local_268._s_0.Y = (double)(fVar12 + fVar11 + fVar13);
        USlateBlueprintLibrary::AbsoluteToViewport
                  (pUVar5,(TVector2<double> *)&local_268._s_0,&local_210,
                   (TVector2<double> *)&local_220._s_0);
        local_278 = OnOpenContentsTooltip;
        uStack_26c = local_210.field0_0x0._12_4_;
        uStack_270 = 0;
        local_2a8 = (undefined1  [8])0x0;
        local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2a0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
                   (FWriteAccessScope *)&local_240);
        local_228 = &local_2a0;
        puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_2a0);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
          ;
          puVar6[1] = local_220._s_0.X;
          puVar6[2] = local_220._s_0.Y;
          puVar6[3] = (double)local_2b8;
          puVar6[4] = (double)fVar9;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[5] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_StatusCategorySlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[6] = 0;
          local_280 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)&local_280);
          puVar6[7] = local_278;
          puVar6[8] = CONCAT44(uStack_26c,uStack_270);
        }
        if (local_240.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
        }
        pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           (&local_1c8,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_2a8);
        UDS_WindowManager::OpenWindow(this_00,StatusToolTip,pTVar8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
                   (FWriteAccessScope *)&local_258);
        if ((local_2a0.DelegateSize != 0) &&
           (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2a0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2a0,0,0,0x10);
          local_2a0.DelegateSize = 0;
        }
        if (local_258.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
        }
        if (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2a0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_2a8);
      }
    }
  }
  return;
}

// OnEventMouseLeave @ 14be300a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategorySlot::OnEventMouseLeave
          (UDS_VM_StatusCategorySlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,StatusToolTip,local_res20,local_res18);
  return;
}

// OnOpenContentsTooltip @ 14be31770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategorySlot::OnOpenContentsTooltip
          (UDS_VM_StatusCategorySlot *this,UDS_UserWidget *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FMargin *pFVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  UDS_UserWidget *local_1d0;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TVector2<double>_u_0 local_1a8;
  FMargin local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double> local_178;
  FMargin local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_StatusCategorySlot::OnOpenContentsTooltip",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x7a,L"InWidget is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    local_1a8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    pFVar4 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_168);
    local_188._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_188._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    pFVar8 = (FDS_ViewModelContext *)0x0;
    local_198.Left = pFVar4->Left;
    local_198.Top = pFVar4->Top;
    local_198.Right = pFVar4->Right;
    local_198.Bottom = pFVar4->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_178,(TVector2<double> *)&local_188._s_0,&local_198,
               (TVector2<double> *)&local_1a8._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_178);
    pFVar5 = ::operator_new(0x30);
    pFVar7 = pFVar8;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      ((atomic<int> *)&pFVar5[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_ContentsStatus__6B_;
      pFVar5[1]._padding_ = 0;
      *(atomic<int> *)&pFVar5[1].DerivedStaticStruct = (atomic<int>)0x0;
      pFVar7 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ContentsStatus__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
      pFVar8 = pFVar5;
    }
    if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_ContentsStatus::StaticStruct();
    *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1c8.Object = pFVar7;
      local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
    }
    pFVar7->ViewModelTemplateKey = ContentsStatus;
    pFVar7[1]._padding_ = this->PlayerEntityID;
    *(int *)&pFVar7[1].DerivedStaticStruct = this->CharID;
    ((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1] = (atomic<int>)this->StatusType;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1b8.Object = pFVar7;
    local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1d8.ObjectIndex = 0;
    local_1d8.ObjectSerialNumber = 0;
    local_1d0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1d0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1d8,&local_1b8,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  return;
}

// OnSetViewModel @ 14be407c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_StatusCategorySlot::OnSetViewModel
          (UDS_VM_StatusCategorySlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FDS_StatusTableRow *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_W_StatusUpgradeInfo *pUVar9;
  UDS_CharStatusData *pUVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStackY_5e8 [32];
  FWeakObjectPtr local_5a8;
  FWeakObjectPtr local_5a0;
  TSharedPtr<FDS_ViewModelContext_StatusCategorySlot,1> local_598;
  undefined8 local_588;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_578;
  FName local_568;
  int local_560;
  TSharedPtr<FDS_ViewModelContext,1> local_558;
  TSharedPtr<FDS_ViewModelContext,1> local_548;
  undefined1 local_538 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_558.Object = param_1->Object;
  local_558.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_558.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_StatusCategorySlot>(&local_598,&local_558);
  if (local_598.Object == (FDS_ViewModelContext_StatusCategorySlot *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_VM_StatusCategorySlot::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4b8.Ptr,0x15,L"context is Invalid.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_598.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_598.Object == (FDS_ViewModelContext_StatusCategorySlot *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->PlayerEntityID = (local_598.Object)->PlayerEntityID;
    this->CharID = (local_598.Object)->CharID;
    this->StatusType = (local_598.Object)->StatusType;
    UDS_PlayerData::GetData((ulong64)&local_5a8,(local_598.Object)->PlayerEntityID,false);
    bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_5a8,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_StatusCategorySlot::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_398.Ptr,0x20,
                   L"playerData is nullptr. PlayerEntityID : %llu");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_598.SharedReferenceCount.ReferenceController);
    }
    else {
      FWeakObjectPtr::Get(&local_5a8);
      UDS_CharStatusData::GetData((ulong64)&local_5a0);
      bVar4 = FWeakObjectPtr::IsValid(&local_5a0);
      if (bVar4) {
        this_00 = FDS_StatusTableRow::GetRef((longlong)(int)this->StatusType,true);
        bVar4 = FDS_StatusTableRow::IsValid(this_00);
        if (bVar4) {
          if ((this->VM_StatusInfo).field0_0x0.DebugPtr == (UDS_VM_W_StatusUpgradeInfo *)0x0) {
            local_588 = 0;
            pUVar7 = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar8 = Z_Construct_UClass_UDS_VM_W_StatusUpgradeInfo_NoRegister();
            CheckIsClassChildOf_Internal(pUVar8,pUVar7);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_538,pUVar7);
            local_538._48_8_ = (FObjectInstancingGraph *)0x0;
            local_538._56_8_ = (UPackage *)0x0;
            local_538._16_4_ = 0;
            local_538._20_4_ = 0;
            local_538._24_4_ = RF_Transient;
            local_538._40_8_ = (UObject *)0x0;
            local_538[0x20] = false;
            local_538._8_8_ = this;
            pUVar9 = (UDS_VM_W_StatusUpgradeInfo *)
                     StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_538);
            if (local_538._64_8_ != 0) {
              plVar11 = (longlong *)(local_538 + 0x50);
              if ((longlong *)local_538._104_8_ != (longlong *)0x0) {
                plVar11 = (longlong *)local_538._104_8_;
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            if (pUVar9 != (UDS_VM_W_StatusUpgradeInfo *)0x0) {
              *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar9 != (UDS_VM_W_StatusUpgradeInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            (this->VM_StatusInfo).field0_0x0.DebugPtr = pUVar9;
          }
          MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_578);
          pFVar3 = local_578.Object;
          if (local_578.Object != (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
            if ((local_578.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)&pFVar3->_padding_ = 0x1b9;
            pFVar3->StatusIconID = this_00->ID_StatusIcon;
            pFVar3->StatusNameID = (this_00->ID_StatusName).ID;
            pFVar3->IsUpagade = false;
            pFVar3->IsPlus = true;
            pFVar3->BeforeStatusValue = 0;
            pUVar10 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_5a0);
            fVar12 = UDS_CharStatusData::GetMaxStatus(pUVar10,this->StatusType);
            pFVar3->AfterStatusValue = (int)fVar12;
            pUVar10 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_5a0);
            iVar5 = UDS_CharStatusData::GetCharacterContentsStatus(pUVar10,this->StatusType);
            pFVar3->PlusStatusValue = iVar5;
            pFVar3->FormatType = this_00->InfoViewValueFormat;
            pUVar9 = (this->VM_StatusInfo).field0_0x0.DebugPtr;
            local_548.Object = (FDS_ViewModelContext *)local_578.Object;
            local_548.SharedReferenceCount.ReferenceController =
                 local_578.SharedReferenceCount.ReferenceController;
            if (local_578.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_548);
            local_560 = FFieldNotificationClassDescriptor::VM_StatusInfo.BitNumber;
            local_568 = FFieldNotificationClassDescriptor::VM_StatusInfo.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_568);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_578.SharedReferenceCount.ReferenceController);
        }
        else {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_StatusCategorySlot::OnSetViewModel",0x29,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_158.Ptr,0x2e,
                       L"statusTableRow is Invalid. StatusType : %d");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_598.SharedReferenceCount.ReferenceController);
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          FWeakObjectPtr::Get(&local_5a8);
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_VM_StatusCategorySlot::OnSetViewModel",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_278.Ptr,0x27,
                     L"charStatusData is Invalid. CharEntityID : %llu");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_598.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

