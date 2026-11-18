// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FChaosDDContext @ 1436f5500

FChaosDDContext * __thiscall
ChaosDD::Private::FChaosDDContext::FChaosDDContext(FChaosDDContext *this)

{
  DWORD DVar1;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFChaosDDContext_Private_ChaosDD____6B_;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)&this->_padding_ = DVar1;
  this->_padding_ = (longlong)&___7FChaosDDContext_Private_ChaosDD__6B_;
  (this->Frame).Object = (FChaosDDFrame *)0x0;
  (this->Frame).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CreateGlobalFrame @ 1436fd650

void __cdecl ChaosDD::Private::FChaosDDContext::CreateGlobalFrame(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FChaosDDFrame *pFVar8;
  FSharedReferencer<1> local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  undefined8 uStack_10;
  
  if (!bChaosDebugDraw_EnableGlobalQueue) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  pTVar6 = ::operator_new(0xf8);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FChaosDDFrame *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChaosDDGlobalFrame_Private_ChaosDD___00_SharedPointerInternals__6B_
    ;
    iVar2 = GlobalCommandBudget;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uStack_1c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&___7FChaosDDFrame_Private_ChaosDD__6B_;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    *(undefined4 *)&pTVar6[5]._padding_ = local_28;
    *(undefined4 *)((longlong)&pTVar6[5]._padding_ + 4) = uStack_24;
    pTVar6[5].SharedReferenceCount = (atomic<int>)uStack_20;
    pTVar6[5].WeakReferenceCount = (atomic<int>)uStack_1c;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = (longlong)local_18;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    *(int *)&pTVar6[7]._padding_ = iVar2;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[9]._padding_ = 0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[7]._padding_ + 4) = 0;
    uStack_10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6[10].SharedReferenceCount,4000)
    ;
    FChaosDDFrame::BuildName((FChaosDDFrame *)(pTVar6 + 1));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar6[1]._padding_ = (longlong)&___7FChaosDDGlobalFrame_Private_ChaosDD__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 0xd),4000);
    pFVar8 = (FChaosDDFrame *)(pTVar6 + 1);
    pTVar7 = pTVar6;
    if (pFVar8 == (FChaosDDFrame *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1436fd816;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1436fd816:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  GlobalFrame.Object = pFVar8;
  local_30.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&GlobalFrame.SharedReferenceCount,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  return;
}

// ExtractGlobalFrame @ 1436ff1e0

TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> * __cdecl
ChaosDD::Private::FChaosDDContext::ExtractGlobalFrame
          (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar3;
  FSharedReferencer<1> local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  if ((bChaosDebugDraw_EnableGlobalQueue == false) && (GlobalFrame.Object != (FChaosDDFrame *)0x0))
  {
    local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    GlobalFrame.Object = (FChaosDDFrame *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&GlobalFrame.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  if (GlobalFrame.Object == (FChaosDDFrame *)0x0) {
    __return_storage_ptr__->Object = (FChaosDDFrame *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (GlobalFrame.Object == (FChaosDDFrame *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (**(code **)((GlobalFrame.Object)->_padding_ + 0x18))(GlobalFrame.Object,__return_storage_ptr__)
    ;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  return __return_storage_ptr__;
}

// GetGlobalFrame @ 1436ffab0

TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> * __cdecl
ChaosDD::Private::FChaosDDContext::GetGlobalFrame(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  if (GlobalFrame.Object == (FChaosDDFrame *)0x0) {
    CreateGlobalFrame();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  return &GlobalFrame;
}

// SetGlobalCommandBudget @ 143704040

void __cdecl ChaosDD::Private::FChaosDDContext::SetGlobalCommandBudget(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  GlobalCommandBudget = param_1;
  if (GlobalFrame.Object != (FChaosDDFrame *)0x0) {
    if ((GlobalFrame.Object == (FChaosDDFrame *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (GlobalFrame.Object)->CommandBudget = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437040ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  return;
}

// SetGlobalDrawRegion @ 1437040c0

void __cdecl ChaosDD::Private::FChaosDDContext::SetGlobalDrawRegion(TSphere<double> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  FChaosDDFrame *pFVar6;
  bool bVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  if (GlobalFrame.Object != (FChaosDDFrame *)0x0) {
    if ((GlobalFrame.Object == (FChaosDDFrame *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = GlobalFrame.Object;
    uVar2 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 4);
    uVar3 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 8);
    uVar4 = *(undefined4 *)((longlong)&(param_1->Center).field0_0x0 + 0xc);
    *(undefined4 *)&((GlobalFrame.Object)->DrawRegion).Center.field0_0x0 =
         *(undefined4 *)&(param_1->Center).field0_0x0;
    *(undefined4 *)((longlong)&(pFVar6->DrawRegion).Center.field0_0x0 + 4) = uVar2;
    *(undefined4 *)((longlong)&(pFVar6->DrawRegion).Center.field0_0x0 + 8) = uVar3;
    *(undefined4 *)((longlong)&(pFVar6->DrawRegion).Center.field0_0x0 + 0xc) = uVar4;
    dVar5 = param_1->W;
    (pFVar6->DrawRegion).Center.field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    (pFVar6->DrawRegion).W = dVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x000143704134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GlobalFrameCS);
  return;
}

// GetWriter @ 143a70fa0

FChaosDDFrameWriter * __cdecl
ChaosDD::Private::FChaosDDContext::GetWriter(FChaosDDFrameWriter *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosDDFrame *pFVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar5;
  FTlsAutoCleanup FVar6;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (bDebugDrawEnabled) {
    puVar3 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
    FVar6 = pFVar4[2];
    pTVar5 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar4 + 2);
    if (FVar6 == (FTlsAutoCleanup)0x0) {
      pTVar5 = GetGlobalFrame();
      FVar6 = (FTlsAutoCleanup)pTVar5->Object;
    }
    (__return_storage_ptr__->Frame).Object = (FChaosDDFrame *)FVar6;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->Frame).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2 = (__return_storage_ptr__->Frame).Object;
    if (pFVar2 != (FChaosDDFrame *)0x0) {
      (**(code **)(pFVar2->_padding_ + 8))();
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->Frame).Object = (FChaosDDFrame *)0x0;
    (__return_storage_ptr__->Frame).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

