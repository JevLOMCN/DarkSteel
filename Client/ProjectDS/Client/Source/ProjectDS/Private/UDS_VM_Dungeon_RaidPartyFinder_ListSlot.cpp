// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetEventMembersMouseEnter_WrapperImpl @ 14b637620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetEventMembersMouseEnter_WrapperImpl
          (void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float fStack_2a8;
  float fStack_2a4;
  undefined1 auStack_298 [8];
  FDelegateAllocation FStack_290;
  FWeakObjectPtr FStack_280;
  FDeprecateSlateVector2D FStack_278;
  UDS_WindowManager *pUStack_270;
  void *apvStack_268 [2];
  code *pcStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 TStack_248;
  FDestructionSentinel FStack_238;
  FDestructionSentinel FStack_220;
  FDelegateAllocation *pFStack_208;
  TVector2<double>_u_0 TStack_200;
  TVector2<double> TStack_1f0;
  FDeprecateSlateVector2D FStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> TStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_188;
  ulonglong uStack_68;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUStack_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FStack_280.ObjectIndex = 0;
  FStack_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FWeakObjectPtr::operator=(&FStack_280,(FObjectPtr)&pUStack_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_188,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseEnter",
                 0x41,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_188.Ptr,0x35,L"windowManager is nullptr.");
      if ((void *)TStack_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_188._padding_);
      }
    }
  }
  else if (*(UWidget **)param_2 != (UWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
    fStack_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uStack_1b0 = *(undefined8 *)
                  ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)uStack_1b0;
    FStack_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    fStack_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    fStack_2a8 = FStack_278._0_4_;
    fStack_2a4 = FStack_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * fStack_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = fStack_1c0 * fStack_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    fStack_2a8 = fStack_2a8 * __real_3f000000;
    FStack_1e0 = FStack_278;
    pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8185792016420962238>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_ListSlot.cpp"
                         ,0x42,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TStack_248._s_0.X = (double)fVar10;
      TStack_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&TStack_248._s_0,&TStack_1f0,
                 (TVector2<double> *)&TStack_200._s_0);
      uStack_250 = 0;
      pcStack_258 = OpenPlayerTooltip;
      uStack_24c = TStack_1f0.field0_0x0._12_4_;
      auStack_298 = (undefined1  [8])0x0;
      FStack_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_220);
      pFStack_208 = &FStack_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&FStack_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = TStack_200._s_0.X;
        puVar6[2] = TStack_200._s_0.Y;
        puVar6[3] = (double)fStack_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar6[6] = 0;
        apvStack_268[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)apvStack_268);
        puVar6[7] = pcStack_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (FStack_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_220.Accessor,&FStack_220);
      }
      this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&TStack_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_298);
      UDS_WindowManager::OpenWindow(this,RaidPartyMemberTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_238);
      if ((FStack_290.DelegateSize != 0) &&
         (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_290,0,0,0x10);
        FStack_290.DelegateSize = 0;
      }
      if (FStack_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_238.Accessor,&FStack_238);
      }
      if (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_298);
    }
  }
  return;
}

// SetEventMembersMouseLeave_WrapperImpl @ 14b637630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetEventMembersMouseLeave_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  FWeakObjectPtr FVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  ulonglong auStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FStack_158.ObjectIndex = 0;
  FStack_158.ObjectSerialNumber = 0;
  auStack_148[0] = 0;
  FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)auStack_148);
  *(FWeakObjectPtr *)((longlong)param_1 + 0x5d0) = FStack_158;
  FVar2 = (FWeakObjectPtr)UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FStack_150.ObjectIndex = 0;
  FStack_150.ObjectSerialNumber = 0;
  FStack_158 = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(&FStack_150,(FObjectPtr)&FStack_158);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_150,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseLeave",
                 0x41,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x55,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_150);
    auStack_148[0] = auStack_148[0] & 0xffffffff00000000;
    FStack_158 = (FWeakObjectPtr)((ulonglong)FStack_158 & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow
              (this,RaidPartyMemberTooltip,(uint *)&FStack_158,(float *)auStack_148);
  }
  return;
}

// SetEventDungeonNameMouseEnter_WrapperImpl @ 14b637640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetEventDungeonNameMouseEnter_WrapperImpl
          (void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float fStack_2a8;
  float fStack_2a4;
  undefined1 auStack_298 [8];
  FDelegateAllocation FStack_290;
  FWeakObjectPtr FStack_280;
  FDeprecateSlateVector2D FStack_278;
  UDS_WindowManager *pUStack_270;
  void *apvStack_268 [2];
  code *pcStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 TStack_248;
  FDestructionSentinel FStack_238;
  FDestructionSentinel FStack_220;
  FDelegateAllocation *pFStack_208;
  TVector2<double>_u_0 TStack_200;
  TVector2<double> TStack_1f0;
  FDeprecateSlateVector2D FStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> TStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_188;
  ulonglong uStack_68;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUStack_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FStack_280.ObjectIndex = 0;
  FStack_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_270);
  }
  FWeakObjectPtr::operator=(&FStack_280,(FObjectPtr)&pUStack_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_188,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseEnter"
                 ,0x45,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_188.Ptr,0x61,L"windowManager is nullptr.");
      if ((void *)TStack_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_188._padding_);
      }
    }
  }
  else if (*(UWidget **)param_2 != (UWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
    fStack_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uStack_1b0 = *(undefined8 *)
                  ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)uStack_1b0;
    FStack_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    fStack_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    fStack_2a8 = FStack_278._0_4_;
    fStack_2a4 = FStack_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * fStack_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = fStack_1c0 * fStack_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    fStack_2a8 = fStack_2a8 * __real_3f000000;
    FStack_1e0 = FStack_278;
    pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8185792016420962194>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_ListSlot.cpp"
                         ,0x6e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TStack_248._s_0.X = (double)fVar10;
      TStack_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&TStack_248._s_0,&TStack_1f0,
                 (TVector2<double> *)&TStack_200._s_0);
      uStack_250 = 0;
      pcStack_258 = OpenDungeonTooltip;
      uStack_24c = TStack_1f0.field0_0x0._12_4_;
      auStack_298 = (undefined1  [8])0x0;
      FStack_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_220);
      pFStack_208 = &FStack_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&FStack_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = TStack_200._s_0.X;
        puVar6[2] = TStack_200._s_0.Y;
        puVar6[3] = (double)fStack_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar6[6] = 0;
        apvStack_268[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)apvStack_268);
        puVar6[7] = pcStack_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (FStack_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_220.Accessor,&FStack_220);
      }
      this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&TStack_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_298);
      UDS_WindowManager::OpenWindow(this,RaidPartyDungeonTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_298,
                 (FWriteAccessScope *)&FStack_238);
      if ((FStack_290.DelegateSize != 0) &&
         (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_290,0,0,0x10);
        FStack_290.DelegateSize = 0;
      }
      if (FStack_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_238.Accessor,&FStack_238);
      }
      if (FStack_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_298);
    }
  }
  return;
}

// SetEventDungeonNameMouseLeave_WrapperImpl @ 14b637650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetEventDungeonNameMouseLeave_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  float afStack_150 [2];
  UDS_WindowManager *apUStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  apUStack_148[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStack_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStack_148[0]);
  }
  FStack_158.ObjectIndex = 0;
  FStack_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStack_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStack_148[0]);
  }
  FWeakObjectPtr::operator=(&FStack_158,(FObjectPtr)apUStack_148);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&FStack_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseLeave"
                 ,0x45,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x7f,L"windowManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this = (UDS_WindowManager *)FWeakObjectPtr::Get(&FStack_158);
    afStack_150[0] = 0.0;
    apUStack_148[0] = (UDS_WindowManager *)((ulonglong)apUStack_148[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this,RaidPartyDungeonTooltip,(uint *)apUStack_148,afStack_150);
  }
  return;
}

// SetClickJoin_WrapperImpl @ 14b637660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetClickJoin_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_DungeonManager *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FString *pFVar6;
  undefined1 auStackY_248 [32];
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_218 [8];
  FDelegateAllocation FStack_210;
  FDestructionSentinel FStack_1f8;
  void *pvStack_1d8;
  FDestructionSentinel FStack_1d0;
  FDelegateAllocation *pFStack_1b8;
  void *pvStack_1b0;
  undefined1 *puStack_1a8;
  long64 lStack_1a0;
  FDS_RaidPartySimpleInfo FStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (*(longlong *)((longlong)param_1 + 0x5c0) < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"RaidPartyUID is not valid.";
    uVar7 = 0x109;
  }
  else {
    bVar1 = FDS_RaidPartyService::IsRaidPlaying();
    if (bVar1) {
      auStack_218 = (undefined1  [8])0x0;
      FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_210.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x347e6,Complete_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)auStack_218);
      return;
    }
    this = UDS_DungeonManager::GetInst();
    if (this != (UDS_DungeonManager *)0x0) {
      UDS_DungeonManager::GetRaidPartySimpleInfo
                (this,&FStack_198,*(long64 *)((longlong)param_1 + 0x5c0));
      if (FStack_198.RaidPartyUID == *(longlong *)((longlong)param_1 + 0x5c0)) {
        bVar1 = UDS_DungeonManager::IsDungeonEnterCondition(this,FStack_198.DungeonId,RaidPartyJoin)
        ;
        if (bVar1) {
          FStack_1f8._0_8_ = JoinPartyProcess;
          FStack_1f8.Accessor._0_4_ = 0;
          auStack_218 = (undefined1  [8])0x0;
          FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_210.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                     (FWriteAccessScope *)&FStack_1d0);
          pFStack_1b8 = &FStack_210;
          puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_210);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar4 = FDelegateHandle::GenerateNewID();
            puVar3[2] = uVar4;
            *puVar3 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            puVar3[3] = 0;
            pvStack_1b0 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStack_1b0);
            puVar3[4] = FStack_1f8._0_8_;
            puVar3[5] = CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_);
          }
          if (FStack_1d0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1d0.Accessor,&FStack_1d0);
          }
          puStack_1a8 = &DAT_00033493;
          lStack_1a0 = 0x33492;
          pvStack_1d8 = (void *)0x3348d;
          bVar1 = FDS_RaidPartyService::IsPartyStateCheckLeave
                            ((long64 *)&pvStack_1d8,&lStack_1a0,(long64 *)&puStack_1a8,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_218
                            );
          if (bVar1) {
            if (FStack_198.IsPassword == true) {
              this_00 = UDS_WindowManager::GetInst();
              if (this_00 == (UDS_WindowManager *)0x0) {
                pUVar2 = UDS_LogManager::GetInst();
                if (pUVar2 != (UDS_LogManager *)0x0) {
                  pUVar2 = UDS_LogManager::GetInst();
                  TStack_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess"
                             ,0x39,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar2,1,Warning,TStack_148.Ptr,0x132,L"windowManager is nullptr.");
                  if ((UDS_DungeonManager *)TStack_148._padding_ != (UDS_DungeonManager *)0x0) {
                    FMemory::Free((void *)TStack_148._padding_);
                  }
                }
              }
              else {
                FStack_1f8.Accessor._0_4_ = 0;
                FStack_1f8._0_8_ = OpenJoinPasswordPopup;
                auStack_218 = (undefined1  [8])0x0;
                FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                FStack_210.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                           (FWriteAccessScope *)&FStack_1d0);
                pFStack_1b8 = &FStack_210;
                puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_210);
                if (puVar3 != (undefined8 *)0x0) {
                  *puVar3 = &
                            ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar4 = FDelegateHandle::GenerateNewID();
                  puVar3[2] = uVar4;
                  *puVar3 = &
                            ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(param_1);
                  }
                  puVar3[3] = 0;
                  pvStack_1d8 = param_1;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(param_1);
                  }
                  FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStack_1d8)
                  ;
                  puVar3[4] = FStack_1f8._0_8_;
                  puVar3[5] = CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_);
                }
                if (FStack_1d0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1d0.Accessor,&FStack_1d0);
                }
                pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                         TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                   ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)&FStack_1f8,
                                    (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)auStack_218);
                UDS_WindowManager::OpenWindow(this_00,RaidPartyInputPopup,pTVar5);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                           (FWriteAccessScope *)&FStack_1f8);
                if ((FStack_210.DelegateSize != 0) &&
                   (FStack_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)FStack_210.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&FStack_210,0,0,0x10);
                  FStack_210.DelegateSize = 0;
                }
                if (FStack_1f8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                            ((FMRSWRecursiveAccessDetector *)
                             CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_),
                             &FStack_1f8);
                }
                if (FStack_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)FStack_210.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)auStack_218);
              }
            }
            else {
              pFVar6 = ::FString::FString((FString *)&FStack_1f8,L"");
              FDS_RaidPartyService::RequestRaidPartyJoin
                        (FStack_198.RaidPartyUID,pFVar6,FStack_198.DungeonId);
            }
          }
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,TStack_148.Ptr,0x11d,L"raidPartySimpleInfo is not valid.");
          if ((UDS_DungeonManager *)TStack_148._padding_ != (UDS_DungeonManager *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      if (FStack_198.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_198.LeaderNickName.Data.AllocatorInstance.Data);
      }
      goto LAB_14be28932;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"dungeonManager is nullptr.";
    uVar7 = 0x116;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_148.Ptr,uVar7,pwVar8);
  FStack_198.PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_148._padding_
  ;
LAB_14be28932:
  if ((UDS_DungeonManager *)FStack_198.PartyName.Data.AllocatorInstance.Data !=
      (UDS_DungeonManager *)0x0) {
    FMemory::Free(FStack_198.PartyName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickSlot_WrapperImpl @ 14b637670

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetClickSlot_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  FDS_RaidPartyRepo *pFVar2;
  FName FStack_18;
  int iStack_10;
  
  if (0 < *(longlong *)((longlong)param_1 + 0x5c0)) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if ((pFVar2->RaidPartyInfo).RaidPartyUID != *(longlong *)((longlong)param_1 + 0x5c0)) {
      cVar1 = *(char *)((longlong)param_1 + 0x518);
      if ((bool)cVar1 != (cVar1 == '\0')) {
        *(bool *)((longlong)param_1 + 0x518) = cVar1 == '\0';
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
      }
    }
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b637680

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0x518) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x518) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b637690

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_ListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_ListSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_ListSlot,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_ListSlot>
               ,InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_ListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder_ListSlot @ 14b63c290

UDS_VM_Dungeon_RaidPartyFinder_ListSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::UDS_VM_Dungeon_RaidPartyFinder_ListSlot
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->MsgDel = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_ListSlot__6B_;
  *(undefined8 *)&(this->MsgDel).field_0x8 = 0;
  *(undefined4 *)&(this->MsgDel).field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMembersMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMembersMouseLeave);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventDungeonNameMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventDungeonNameMouseLeave);
  (this->ClickJoin)._padding_ = '\0';
  (this->ClickJoin).bIsCustomSelected = false;
  (this->ClickJoin).bIsLacked = false;
  (this->ClickJoin).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoin).Delegate = 0;
  *(undefined8 *)&(this->ClickJoin).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoin).Delegate.field_0x10 = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Join).StringTableType = StringUi;
  (this->FixedText_Btn_Join).StringTableID = 0x33482;
  (this->FixedText_Btn_Join).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Join).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Join).DateTime.Ticks = 0;
  (this->FixedText_Btn_Join).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Join).TimeExpressionType = None;
  (this->FixedText_Btn_Join).IsExpression = false;
  (this->FixedText_Btn_Join).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Join).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Join).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Join).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Join).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Join).FormatArgs.ArrayMax = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x334ae;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->TooltipWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_ListSlot @ 14b63c400

UDS_VM_Dungeon_RaidPartyFinder_ListSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::UDS_VM_Dungeon_RaidPartyFinder_ListSlot
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->MsgDel = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_ListSlot__6B_;
  *(undefined8 *)&(this->MsgDel).field_0x8 = 0;
  *(undefined4 *)&(this->MsgDel).field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMembersMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMembersMouseLeave);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventDungeonNameMouseEnter);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventDungeonNameMouseLeave);
  (this->ClickJoin)._padding_ = '\0';
  (this->ClickJoin).bIsCustomSelected = false;
  (this->ClickJoin).bIsLacked = false;
  (this->ClickJoin).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoin).Delegate = 0;
  *(undefined8 *)&(this->ClickJoin).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoin).Delegate.field_0x10 = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Join).StringTableType = StringUi;
  (this->FixedText_Btn_Join).StringTableID = 0x33482;
  (this->FixedText_Btn_Join).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Join).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Join).DateTime.Ticks = 0;
  (this->FixedText_Btn_Join).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Join).TimeExpressionType = None;
  (this->FixedText_Btn_Join).IsExpression = false;
  (this->FixedText_Btn_Join).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Join).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Join).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Join).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Join).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Join).FormatArgs.ArrayMax = 0;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x334ae;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->TooltipWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_ListSlot @ 14b63d530

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::~UDS_VM_Dungeon_RaidPartyFinder_ListSlot
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_ListSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Join).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Join).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Join).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Join).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlot).Delegate);
  pvVar2 = *(void **)&(this->ClickSlot).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlot).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickJoin).Delegate);
  pvVar2 = *(void **)&(this->ClickJoin).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickJoin).Delegate);
  FKeyEvent::~FKeyEvent(&(this->EventDungeonNameMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventDungeonNameMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventDungeonNameMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventDungeonNameMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMembersMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMembersMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMembersMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMembersMouseEnter).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MsgDel);
  pvVar2 = *(void **)&(this->MsgDel).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MsgDel);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63fae0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_ListSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640990

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_ListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_ListSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_ListSlot,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_ListSlot>
               ,InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_ListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_ListSlot @ 14b640c70

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::
StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_ListSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b641950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_ListSlot__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[1]._padding_);
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[2].Visibility);
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[4]._padding_);
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[6]._padding_);
    *(undefined4 *)&this[7].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[7].Visibility = Visible;
    *(undefined3 *)&this[7].field_0x81 = 0;
    this[7].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[7].VMName.Number = 0;
    *(undefined4 *)&this[7].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[7].TextPropertyIDList.ArrayNum = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
    *(undefined1 *)&this[8]._padding_ = 2;
    this[8]._padding_ = 0x33482;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined4 *)&this[8]._padding_ = 0;
    *(undefined1 *)((longlong)&this[8]._padding_ + 4) = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    *(undefined1 *)&this[8].ViewModelContext.Object = 2;
    this[8].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x334ae;
    this[8].Visibility = Visible;
    *(undefined3 *)&this[8].field_0x81 = 0;
    this[8].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[8].VMName.Number = 0;
    this[8].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[8].TextPropertyIDList.ArrayNum = 0;
    *(undefined1 *)&this[8].TextPropertyIDList.ArrayMax = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execRaidPartyJoinSwitcher @ 14b641cb0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::execRaidPartyJoinSwitcher
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = RaidPartyJoinSwitcher((UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BindTooltipContext @ 14be138f0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::BindTooltipContext
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_RaidPartyInfo *pFVar2;
  FDS_ViewModelContext_Dungeon *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_68;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_58;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  bVar4 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->TooltipWidget,(void *)0x0);
  if (!bVar4) {
    MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_68);
    pFVar2 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xd9;
    local_38.Object = (FDS_ViewModelContext *)local_68.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    pFVar2->RaidPartyUID = this->RaidPartyUID;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)(this->TooltipWidget).WeakPtr,
               &local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_58);
    pFVar2 = local_58.Object;
    if (local_58.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xf6;
    local_28.Object = (FDS_ViewModelContext *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    pFVar2->RaidPartyUID = this->RaidPartyUID;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)(this->TooltipWidget).WeakPtr,
               &local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_48);
    pFVar3 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0xcc;
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    pFVar3->DungeonId = this->DungeonId;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)(this->TooltipWidget).WeakPtr,
               &local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// JoinPartyProcess @ 14be283e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_DungeonManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_WindowManager *this_01;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FString *pFVar6;
  undefined1 auStackY_248 [32];
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  FDestructionSentinel local_1f8;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *local_1d8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *local_1b0;
  undefined1 *local_1a8;
  long64 local_1a0;
  FDS_RaidPartySimpleInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (this->RaidPartyUID < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"RaidPartyUID is not valid.";
    uVar7 = 0x109;
  }
  else {
    bVar1 = FDS_RaidPartyService::IsRaidPlaying();
    if (bVar1) {
      local_218 = (undefined1  [8])0x0;
      local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_210.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x347e6,Complete_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_218);
      return;
    }
    this_00 = UDS_DungeonManager::GetInst();
    if (this_00 != (UDS_DungeonManager *)0x0) {
      UDS_DungeonManager::GetRaidPartySimpleInfo(this_00,&local_198,this->RaidPartyUID);
      if (local_198.RaidPartyUID == this->RaidPartyUID) {
        bVar1 = UDS_DungeonManager::IsDungeonEnterCondition
                          (this_00,local_198.DungeonId,RaidPartyJoin);
        if (bVar1) {
          local_1f8._0_8_ = JoinPartyProcess;
          local_1f8.Accessor._0_4_ = 0;
          local_218 = (undefined1  [8])0x0;
          local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_210.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                     (FWriteAccessScope *)&local_1d0);
          local_1b8 = &local_210;
          puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_210);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar4 = FDelegateHandle::GenerateNewID();
            puVar3[2] = uVar4;
            *puVar3 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar3[3] = 0;
            local_1b0 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_1b0);
            puVar3[4] = local_1f8._0_8_;
            puVar3[5] = CONCAT44(local_1f8.Accessor._4_4_,local_1f8.Accessor._0_4_);
          }
          if (local_1d0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
          }
          local_1a8 = &DAT_00033493;
          local_1a0 = 0x33492;
          local_1d8 = (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x3348d;
          bVar1 = FDS_RaidPartyService::IsPartyStateCheckLeave
                            ((long64 *)&local_1d8,&local_1a0,(long64 *)&local_1a8,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_218);
          if (bVar1) {
            if (local_198.IsPassword == true) {
              this_01 = UDS_WindowManager::GetInst();
              if (this_01 == (UDS_WindowManager *)0x0) {
                pUVar2 = UDS_LogManager::GetInst();
                if (pUVar2 != (UDS_LogManager *)0x0) {
                  pUVar2 = UDS_LogManager::GetInst();
                  local_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",
                             0x39,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar2,1,Warning,local_148.Ptr,0x132,L"windowManager is nullptr.");
                  if ((UDS_DungeonManager *)local_148._padding_ != (UDS_DungeonManager *)0x0) {
                    FMemory::Free((void *)local_148._padding_);
                  }
                }
              }
              else {
                local_1f8.Accessor._0_4_ = 0;
                local_1f8._0_8_ = OpenJoinPasswordPopup;
                local_218 = (undefined1  [8])0x0;
                local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_210.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                           (FWriteAccessScope *)&local_1d0);
                local_1b8 = &local_210;
                puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_210);
                if (puVar3 != (undefined8 *)0x0) {
                  *puVar3 = &
                            ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar4 = FDelegateHandle::GenerateNewID();
                  puVar3[2] = uVar4;
                  *puVar3 = &
                            ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  puVar3[3] = 0;
                  local_1d8 = this;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_1d8);
                  puVar3[4] = local_1f8._0_8_;
                  puVar3[5] = CONCAT44(local_1f8.Accessor._4_4_,local_1f8.Accessor._0_4_);
                }
                if (local_1d0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
                }
                pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                         TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                   ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)&local_1f8,
                                    (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)local_218);
                UDS_WindowManager::OpenWindow(this_01,RaidPartyInputPopup,pTVar5);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                           (FWriteAccessScope *)&local_1f8);
                if ((local_210.DelegateSize != 0) &&
                   (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_210,0,0,0x10);
                  local_210.DelegateSize = 0;
                }
                if (local_1f8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                            ((FMRSWRecursiveAccessDetector *)
                             CONCAT44(local_1f8.Accessor._4_4_,local_1f8.Accessor._0_4_),&local_1f8)
                  ;
                }
                if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_210.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)local_218);
              }
            }
            else {
              pFVar6 = ::FString::FString((FString *)&local_1f8,L"");
              FDS_RaidPartyService::RequestRaidPartyJoin
                        (local_198.RaidPartyUID,pFVar6,local_198.DungeonId);
            }
          }
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes
                    );
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,local_148.Ptr,0x11d,L"raidPartySimpleInfo is not valid.");
          if ((UDS_DungeonManager *)local_148._padding_ != (UDS_DungeonManager *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      if (local_198.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.LeaderNickName.Data.AllocatorInstance.Data);
      }
      goto LAB_14be28932;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"dungeonManager is nullptr.";
    uVar7 = 0x116;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar7,pwVar8);
  local_198.PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
LAB_14be28932:
  if ((UDS_DungeonManager *)local_198.PartyName.Data.AllocatorInstance.Data !=
      (UDS_DungeonManager *)0x0) {
    FMemory::Free(local_198.PartyName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCheckEnterPopupResult @ 14be2bdf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnCheckEnterPopupResult
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  UDS_WindowManager *this_00;
  float local_18;
  uint local_14 [3];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    if (param_2) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(param_3);
    }
    local_18 = 0.0;
    local_14[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_14,&local_18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// OnClickJoin @ 14be2c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnClickJoin
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_DungeonManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_WindowManager *this_01;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FString *pFVar6;
  undefined1 auStackY_248 [32];
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_218 [8];
  FDelegateAllocation FStack_210;
  FDestructionSentinel FStack_1f8;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *pUStack_1d8;
  FDestructionSentinel FStack_1d0;
  FDelegateAllocation *pFStack_1b8;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *pUStack_1b0;
  undefined1 *puStack_1a8;
  long64 lStack_1a0;
  FDS_RaidPartySimpleInfo FStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (this->RaidPartyUID < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"RaidPartyUID is not valid.";
    uVar7 = 0x109;
  }
  else {
    bVar1 = FDS_RaidPartyService::IsRaidPlaying();
    if (bVar1) {
      auStack_218 = (undefined1  [8])0x0;
      FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_210.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x347e6,Complete_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)auStack_218);
      return;
    }
    this_00 = UDS_DungeonManager::GetInst();
    if (this_00 != (UDS_DungeonManager *)0x0) {
      UDS_DungeonManager::GetRaidPartySimpleInfo(this_00,&FStack_198,this->RaidPartyUID);
      if (FStack_198.RaidPartyUID == this->RaidPartyUID) {
        bVar1 = UDS_DungeonManager::IsDungeonEnterCondition
                          (this_00,FStack_198.DungeonId,RaidPartyJoin);
        if (bVar1) {
          FStack_1f8._0_8_ = JoinPartyProcess;
          FStack_1f8.Accessor._0_4_ = 0;
          auStack_218 = (undefined1  [8])0x0;
          FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_210.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                     (FWriteAccessScope *)&FStack_1d0);
          pFStack_1b8 = &FStack_210;
          puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_210);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar4 = FDelegateHandle::GenerateNewID();
            puVar3[2] = uVar4;
            *puVar3 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar3[3] = 0;
            pUStack_1b0 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pUStack_1b0);
            puVar3[4] = FStack_1f8._0_8_;
            puVar3[5] = CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_);
          }
          if (FStack_1d0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1d0.Accessor,&FStack_1d0);
          }
          puStack_1a8 = &DAT_00033493;
          lStack_1a0 = 0x33492;
          pUStack_1d8 = (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x3348d;
          bVar1 = FDS_RaidPartyService::IsPartyStateCheckLeave
                            ((long64 *)&pUStack_1d8,&lStack_1a0,(long64 *)&puStack_1a8,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_218
                            );
          if (bVar1) {
            if (FStack_198.IsPassword == true) {
              this_01 = UDS_WindowManager::GetInst();
              if (this_01 == (UDS_WindowManager *)0x0) {
                pUVar2 = UDS_LogManager::GetInst();
                if (pUVar2 != (UDS_LogManager *)0x0) {
                  pUVar2 = UDS_LogManager::GetInst();
                  TStack_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess"
                             ,0x39,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar2,1,Warning,TStack_148.Ptr,0x132,L"windowManager is nullptr.");
                  if ((UDS_DungeonManager *)TStack_148._padding_ != (UDS_DungeonManager *)0x0) {
                    FMemory::Free((void *)TStack_148._padding_);
                  }
                }
              }
              else {
                FStack_1f8.Accessor._0_4_ = 0;
                FStack_1f8._0_8_ = OpenJoinPasswordPopup;
                auStack_218 = (undefined1  [8])0x0;
                FStack_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                FStack_210.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                           (FWriteAccessScope *)&FStack_1d0);
                pFStack_1b8 = &FStack_210;
                puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_210);
                if (puVar3 != (undefined8 *)0x0) {
                  *puVar3 = &
                            ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar4 = FDelegateHandle::GenerateNewID();
                  puVar3[2] = uVar4;
                  *puVar3 = &
                            ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  puVar3[3] = 0;
                  pUStack_1d8 = this;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pUStack_1d8)
                  ;
                  puVar3[4] = FStack_1f8._0_8_;
                  puVar3[5] = CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_);
                }
                if (FStack_1d0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1d0.Accessor,&FStack_1d0);
                }
                pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                         TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                   ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)&FStack_1f8,
                                    (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                     *)auStack_218);
                UDS_WindowManager::OpenWindow(this_01,RaidPartyInputPopup,pTVar5);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_218,
                           (FWriteAccessScope *)&FStack_1f8);
                if ((FStack_210.DelegateSize != 0) &&
                   (FStack_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)FStack_210.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&FStack_210,0,0,0x10);
                  FStack_210.DelegateSize = 0;
                }
                if (FStack_1f8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                            ((FMRSWRecursiveAccessDetector *)
                             CONCAT44(FStack_1f8.Accessor._4_4_,FStack_1f8.Accessor._0_4_),
                             &FStack_1f8);
                }
                if (FStack_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)FStack_210.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)auStack_218);
              }
            }
            else {
              pFVar6 = ::FString::FString((FString *)&FStack_1f8,L"");
              FDS_RaidPartyService::RequestRaidPartyJoin
                        (FStack_198.RaidPartyUID,pFVar6,FStack_198.DungeonId);
            }
          }
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Warning,TStack_148.Ptr,0x11d,L"raidPartySimpleInfo is not valid.");
          if ((UDS_DungeonManager *)TStack_148._padding_ != (UDS_DungeonManager *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      if (FStack_198.LeaderNickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_198.LeaderNickName.Data.AllocatorInstance.Data);
      }
      goto LAB_14be28932;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::JoinPartyProcess",0x39,Yes);
    pwVar8 = L"dungeonManager is nullptr.";
    uVar7 = 0x116;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_148.Ptr,uVar7,pwVar8);
  FStack_198.PartyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)TStack_148._padding_
  ;
LAB_14be28932:
  if ((UDS_DungeonManager *)FStack_198.PartyName.Data.AllocatorInstance.Data !=
      (UDS_DungeonManager *)0x0) {
    FMemory::Free(FStack_198.PartyName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickSlot @ 14be2cae0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnClickSlot
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FName local_18;
  int local_10;
  
  if (0 < this->RaidPartyUID) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if ((pFVar2->RaidPartyInfo).RaidPartyUID != this->RaidPartyUID) {
      bVar1 = this->bIsSelected;
      if (bVar1 != (bVar1 == false)) {
        this->bIsSelected = bVar1 == false;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// OnEventDungeonNameMouseEnter @ 14be2de20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseEnter
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float local_2a8;
  float fStack_2a4;
  undefined1 local_298 [8];
  FDelegateAllocation local_290;
  FWeakObjectPtr local_280;
  FDeprecateSlateVector2D local_278;
  UDS_WindowManager *local_270;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *local_268 [2];
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 local_248;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  TVector2<double>_u_0 local_200;
  TVector2<double> local_1f0;
  FDeprecateSlateVector2D local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseEnter",
                 0x45,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_188.Ptr,0x61,L"windowManager is nullptr.");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else if (param_1->TargetWidget != (UDS_UserWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
    local_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_1b0 = *(undefined8 *)
                 ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)local_1b0;
    local_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    local_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    local_2a8 = local_278._0_4_;
    fStack_2a4 = local_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * local_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = local_1c0 * local_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    local_2a8 = local_2a8 * __real_3f000000;
    local_1e0 = local_278;
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8185792016420962194>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_ListSlot.cpp"
                         ,0x6e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_248._s_0.X = (double)fVar10;
      local_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&local_248._s_0,&local_1f0,
                 (TVector2<double> *)&local_200._s_0);
      uStack_250 = 0;
      local_258 = OpenDungeonTooltip;
      uStack_24c = local_1f0.field0_0x0._12_4_;
      local_298 = (undefined1  [8])0x0;
      local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_220);
      local_208 = &local_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = local_200._s_0.X;
        puVar6[2] = local_200._s_0.Y;
        puVar6[3] = (double)local_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[6] = 0;
        local_268[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)local_268);
        puVar6[7] = local_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&local_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_298);
      UDS_WindowManager::OpenWindow(this_00,RaidPartyDungeonTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_238);
      if ((local_290.DelegateSize != 0) &&
         (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_290,0,0,0x10);
        local_290.DelegateSize = 0;
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_298);
    }
  }
  return;
}

// OnEventDungeonNameMouseLeave @ 14be2e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseLeave
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  float local_150 [2];
  UDS_WindowManager *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventDungeonNameMouseLeave",
                 0x45,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x7f,L"windowManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_158);
    local_150[0] = 0.0;
    local_148[0] = (UDS_WindowManager *)((ulonglong)local_148[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_00,RaidPartyDungeonTooltip,(uint *)local_148,local_150);
  }
  return;
}

// OnEventMembersMouseEnter @ 14be2e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseEnter
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_2d8 [32];
  float local_2a8;
  float fStack_2a4;
  undefined1 local_298 [8];
  FDelegateAllocation local_290;
  FWeakObjectPtr local_280;
  FDeprecateSlateVector2D local_278;
  UDS_WindowManager *local_270;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *local_268 [2];
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TVector2<double>_u_0 local_248;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  TVector2<double>_u_0 local_200;
  TVector2<double> local_1f0;
  FDeprecateSlateVector2D local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_270 = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_270 != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_270);
  }
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_270);
  bVar2 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_280,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseEnter",0x41
                 ,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_188.Ptr,0x35,L"windowManager is nullptr.");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else if (param_1->TargetWidget != (UDS_UserWidget *)0x0) {
    pFVar4 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
    local_1c0 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
    fStack_1bc = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
    fStack_1b8 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
    fStack_1b4 = (pFVar4->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_1b0 = *(undefined8 *)
                 ((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)local_1b0;
    local_278 = pFVar4->Size;
    uStack_1d8 = *(undefined8 *)&pFVar4->Scale;
    local_1d0 = (pFVar4->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_1cc = (pFVar4->Position).field0_0x0._s_0.X;
    fStack_1c8 = (pFVar4->Position).field0_0x0._s_0.Y;
    fStack_1c4 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
    local_2a8 = local_278._0_4_;
    fStack_2a4 = local_278._4_4_;
    fVar10 = fStack_1bc * fStack_2a4 * __real_3f000000 + fStack_1c4 * local_2a8 * __real_3f000000 +
             fStack_1b4;
    fVar9 = fStack_1b8 * fStack_2a4 * __real_3f000000;
    fVar11 = local_1c0 * local_2a8 * __real_3f000000;
    fStack_2a4 = fStack_2a4 * __real_3f000000;
    local_2a8 = local_2a8 * __real_3f000000;
    local_1e0 = local_278;
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8185792016420962238>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DungeonFinder\\DS_VM_Dungeon_RaidPartyFinder_ListSlot.cpp"
                         ,0x42,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_248._s_0.X = (double)fVar10;
      local_248._s_0.Y = (double)(fVar9 + fVar11 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar5,(TVector2<double> *)&local_248._s_0,&local_1f0,
                 (TVector2<double> *)&local_200._s_0);
      uStack_250 = 0;
      local_258 = OpenPlayerTooltip;
      uStack_24c = local_1f0.field0_0x0._12_4_;
      local_298 = (undefined1  [8])0x0;
      local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_220);
      local_208 = &local_290;
      puVar6 = UE::Core::Private::DelegateAllocate(0x48,&local_290);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar6[1] = local_200._s_0.X;
        puVar6[2] = local_200._s_0.Y;
        puVar6[3] = (double)local_2a8;
        puVar6[4] = (double)fStack_2a4;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[5] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[6] = 0;
        local_268[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 6),(FObjectPtr)local_268);
        puVar6[7] = local_258;
        puVar6[8] = CONCAT44(uStack_24c,uStack_250);
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_280);
      pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (&local_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_298);
      UDS_WindowManager::OpenWindow(this_00,RaidPartyMemberTooltip,pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_238);
      if ((local_290.DelegateSize != 0) &&
         (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_290,0,0,0x10);
        local_290.DelegateSize = 0;
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_298);
    }
  }
  return;
}

// OnEventMembersMouseLeave @ 14be2e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseLeave
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,FDS_WidgetPointerEventField *param_1)

{
  bool bVar1;
  FWeakObjectPtr FVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  ulonglong local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  local_148[0] = 0;
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  (this->TooltipWidget).WeakPtr = local_158;
  FVar2 = (FWeakObjectPtr)UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_158 = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_158);
  bVar1 = TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowManager,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnEventMembersMouseLeave",0x41
                 ,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x55,L"windowManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_150);
    local_148[0] = local_148[0] & 0xffffffff00000000;
    local_158 = (FWeakObjectPtr)((ulonglong)local_158 & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow
              (this_00,RaidPartyMemberTooltip,(uint *)&local_158,(float *)local_148);
  }
  return;
}

// OnRaidPartyListDetailInfo @ 14be32730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnRaidPartyListDetailInfo
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,ServerMessagesTwoway *param_1)

{
  UDS_DungeonManager *this_00;
  UDS_LogManager *pUVar1;
  GetRaidPartyInfoResponseDefaultTypeInternal *pGVar2;
  RaidPartyInfo *pRVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((param_1->_impl_)._oneof_case_[0] == 0x51b3) {
    pGVar2 = (GetRaidPartyInfoResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pGVar2 = &server_msg_twoway::_GetRaidPartyInfoResponse_default_instance_;
  }
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnRaidPartyListDetailInfo",
                 0x42,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xbf,L"dungeonManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pRVar3 = &ds_proto::_RaidPartyInfo_default_instance_._instance;
    if (*(RaidPartyInfo **)&((Message *)((longlong)pGVar2 + 0x10))->field_0x8 !=
        (RaidPartyInfo *)0x0) {
      pRVar3 = *(RaidPartyInfo **)&((Message *)((longlong)pGVar2 + 0x10))->field_0x8;
    }
    UDS_DungeonManager::AddRaidPartyListDetailMap(this_00,this->RaidPartyUID,pRVar3);
    BindTooltipContext(this);
  }
  return;
}

// OnSetViewModel @ 14be340b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_178;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyInfo>(&local_178,&local_148);
  if (local_178.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OnSetViewModel",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x22,L"raidPartyInfoContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_178.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->RaidPartyUID = (local_178.Object)->RaidPartyUID;
    this->DungeonId = (local_178.Object)->DungeonId;
    iVar4 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != false) {
      this->bIsSelected = false;
      local_160 = iVar4;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    local_150 = FFieldNotificationClassDescriptor::RaidPartyJoinSwitcher.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::RaidPartyJoinSwitcher.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenDungeonTooltip @ 14be45770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenDungeonTooltip
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,UDS_UserWidget *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_Dungeon *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FMargin *pFVar5;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1c8;
  UDS_UserWidget *local_1c0;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_1b8;
  TVector2<double>_u_0 local_1a8;
  FMargin local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FMargin local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenDungeonTooltip",0x3b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x14d,L"InWidget is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_1a8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    pFVar5 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_158);
    local_188._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_188._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_198.Left = pFVar5->Left;
    local_198.Top = pFVar5->Top;
    local_198.Right = pFVar5->Right;
    local_198.Bottom = pFVar5->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_178,(TVector2<double> *)&local_188._s_0,&local_198,
               (TVector2<double> *)&local_1a8._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_178);
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_1b8);
    pFVar2 = local_1b8.Object;
    if (local_1b8.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xcc;
    local_168.Object = (FDS_ViewModelContext *)local_1b8.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_1b8.SharedReferenceCount.ReferenceController;
    pFVar2->DungeonId = this->DungeonId;
    if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1c0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1c0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1c8,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OpenJoinPasswordPopup @ 14be45980

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenJoinPasswordPopup
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_RaidPartyInfo *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    FDS_StringUiTableRow::GetRef(0x3347b,true);
    MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xda;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->RaidPartyUID = this->RaidPartyUID;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OpenPlayerTooltip @ 14be45a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenPlayerTooltip
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,UDS_UserWidget *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  UDS_LogManager *pUVar1;
  FMargin *pFVar2;
  UDS_DungeonManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  undefined1 auStackY_258 [32];
  FMargin local_228;
  code *local_218 [2];
  undefined1 local_208 [12];
  float fStack_1fc;
  bool local_1f8;
  undefined1 *local_1f0;
  TVector2<double>_u_0 local_1e8;
  TVector2<double> local_1d8;
  RaidPartyInfo local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenPlayerTooltip",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_168.Ptr,0x9e,L"InWidget is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    local_218[0] = (code *)(param_3->field0_0x0)._s_0.X;
    local_218[1] = (code *)(param_3->field0_0x0)._s_0.Y;
    pFVar2 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,(FMargin *)local_208);
    local_1e8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_1e8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_228.Left = pFVar2->Left;
    local_228.Top = pFVar2->Top;
    local_228.Right = pFVar2->Right;
    local_228.Bottom = pFVar2->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_1d8,(TVector2<double> *)&local_1e8._s_0,&local_228,
               (TVector2<double> *)local_218,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_1d8);
    local_228._0_8_ = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->TooltipWidget).WeakPtr,(FObjectPtr)&local_228);
    this_00 = UDS_DungeonManager::GetInst();
    if (this_00 == (UDS_DungeonManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_Dungeon_RaidPartyFinder_ListSlot::OpenPlayerTooltip",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_168.Ptr,0xa9,L"dungeonManager is nullptr.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MsgDel);
      local_218[0] = OnRaidPartyListDetailInfo;
      local_218[1] = (code *)((ulonglong)(uint)fStack_1fc << 0x20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MsgDel,
                 (FWriteAccessScope *)local_208);
      local_1f0 = &(this->MsgDel).field_0x8;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1f0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dungeon_RaidPartyFinder_ListSlot____A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_228._0_8_ = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_228);
        puVar3[4] = local_218[0];
        puVar3[5] = local_218[1];
      }
      if (local_1f8 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_1fc,local_208._8_4_),
                   (FDestructionSentinel *)local_208);
      }
      pTVar5 = TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
               ::
               TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                           *)local_208,&this->MsgDel);
      UDS_DungeonManager::GetRaidPartyListDetailInfo(this_00,&local_1c8,this->RaidPartyUID,pTVar5);
      if (local_1c8._impl_.raid_party_uid_ == this->RaidPartyUID) {
        BindTooltipContext(this);
      }
      ds_proto::RaidPartyInfo::~RaidPartyInfo(&local_1c8);
    }
  }
  return;
}

// RaidPartyJoinSwitcher @ 14be46260

int __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::RaidPartyJoinSwitcher
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (!bVar1) {
    return (int)(this->RaidPartyUID < 1);
  }
  return 0;
}

// SetIsSelected @ 14be4cbc0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_ListSlot::SetIsSelected
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != *param_1) {
    this->bIsSelected = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

