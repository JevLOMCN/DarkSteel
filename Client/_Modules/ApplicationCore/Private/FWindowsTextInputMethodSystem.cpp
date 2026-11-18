// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 21

// ~FWindowsTextInputMethodSystem @ 1423c7350

void __thiscall
FWindowsTextInputMethodSystem::~FWindowsTextInputMethodSystem(FWindowsTextInputMethodSystem *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FTSFActivationProxy *pFVar3;
  ITfDocumentMgr *pIVar4;
  ITfThreadMgr *pIVar5;
  ITfInputProcessorProfileMgr *pIVar6;
  ITfInputProcessorProfiles *pIVar7;
  
  this->_padding_ = (longlong)&___7FWindowsTextInputMethodSystem__6B_;
  (this->KnownWindows).HashSize = 0;
  FVar1 = (this->KnownWindows).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KnownWindows).Elements);
  *(undefined4 *)&(this->ContextToInternalContextMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ContextToInternalContextMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContextToInternalContextMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveContext).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->TSFActivationProxy).RawPointer;
  if (pFVar3 != (FTSFActivationProxy *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x10))();
  }
  pIVar4 = (this->TSFDisabledDocumentManager).RawPointer;
  if (pIVar4 != (ITfDocumentMgr *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->TSFThreadManager).RawPointer;
  if (pIVar5 != (ITfThreadMgr *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar6 = (this->TSFInputProcessorProfileManager).RawPointer;
  if (pIVar6 != (ITfInputProcessorProfileMgr *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pIVar7 = (this->TSFInputProcessorProfiles).RawPointer;
  if (pIVar7 != (ITfInputProcessorProfiles *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  this->_padding_ = (longlong)&___7ITextInputMethodSystem__6B_;
  return;
}

// ActivateContext @ 1423ceef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::ActivateContext
          (FWindowsTextInputMethodSystem *this,TSharedRef<ITextInputMethodContext,1> *param_1)

{
  int *piVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITfThreadMgr *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FWindowsTextInputMethodSystem *pFVar9;
  bool bVar10;
  uint uVar11;
  BOOL BVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsActivateContext> FVar15;
  FInternalContext *pFVar16;
  HWND pHVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  atomic<int> *paVar18;
  FNameEntryId FVar19;
  FName FVar20;
  undefined1 auStackY_938 [32];
  LARGE_INTEGER local_8d8;
  FColor_u_0 local_8d0 [2];
  FName local_8c8;
  ITextInputMethodContext *local_8c0;
  FSharedReferencer<1> local_8b8;
  TWeakPtr<ITextInputMethodContext_const_,1> local_8b0;
  TWeakPtr<ITextInputMethodContext_const_,1> local_8a0;
  FName local_890;
  longlong *local_880;
  TReferenceControllerBase<1> *local_878;
  FWindowsTextInputMethodSystem *local_870;
  FStatMessage local_868;
  FName local_858;
  undefined1 local_850 [8];
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_938;
  FVar15 = StatPtr_STAT_IMEWindowsActivateContext;
  local_870 = this;
  if (StatPtr_STAT_IMEWindowsActivateContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsActivateContext>)0x0) {
    pFVar14 = ::FName::FName(&local_858,"STAT_IMEWindowsActivateContext");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsActivateContext>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsActivateContext,
                        *pFVar14,L"IME ActivateContext","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar6 = false;
  bVar8 = false;
  local_890.ComparisonIndex.Value = 0;
  local_890.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar11 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar11 == 0)) {
LAB_1423cf045:
    bVar7 = false;
    FVar20 = local_890;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_8d0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_8d0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_8c8.ComparisonIndex.Value = FVar19.Value;
        local_8c8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_8c8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x349);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1423cf045;
    local_8d8.s.LowPart = FVar19.Value;
    local_8d8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar7 = true;
  }
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  local_8b8.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_8c0 = param_1->Object;
  if (local_8b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_8b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ActiveContext != (TSharedPtr<ITextInputMethodContext,1> *)&local_8c0) {
    (this->ActiveContext).Object = local_8c0;
    local_8c0 = (ITextInputMethodContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveContext).SharedReferenceCount,&local_8b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b8.ReferenceController);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_8b0.Object = param_1->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar18 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    paVar18 = &pTVar3->WeakReferenceCount;
  }
  uVar11 = ((uint)((ulonglong)local_8b0.Object >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_8b0.Object >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_8d8.s.LowPart = uVar11 >> 0x10 ^ uVar11;
  local_8b0.WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
LAB_1423cf141:
    local_8d8.s.LowPart =
         TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
         ::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                   ((TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                     *)&this->ContextToInternalContextMap,local_8d8.s.LowPart,&local_8b0);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) goto LAB_1423cf19a;
  }
  else {
    LOCK();
    aVar2 = *paVar18;
    *paVar18 = (atomic<int>)((int)*paVar18 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_1423cf141;
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    local_8d8.s.LowPart =
         TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
         ::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                   ((TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                     *)&this->ContextToInternalContextMap,local_8d8.s.LowPart,&local_8b0);
  }
  LOCK();
  paVar18 = &pTVar3->WeakReferenceCount;
  aVar2 = *paVar18;
  *paVar18 = (atomic<int>)((int)*paVar18 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
  }
  LOCK();
  paVar18 = &pTVar3->WeakReferenceCount;
  aVar2 = *paVar18;
  *paVar18 = (atomic<int>)((int)*paVar18 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
  }
LAB_1423cf19a:
  if ((local_8d8.s.LowPart == 0xffffffff) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContextToInternalContextMap.Contains(Context)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                          ,0x350,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_8a0.Object = param_1->Object;
  local_8a0.WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_8a0);
  }
  else {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_8a0);
    LOCK();
    paVar18 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar18;
    *paVar18 = (atomic<int>)((int)*paVar18 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  (**(code **)((longlong)*param_1->Object + 0x58))(param_1->Object,&local_880);
  if (local_880 == (longlong *)0x0) {
    pFVar16->WindowHandle = (HWND__ *)0x0;
  }
  else {
    if ((local_880 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pHVar17 = (HWND)(**(code **)(*local_880 + 0xc0))();
    pFVar16->WindowHandle = (HWND__ *)pHVar17;
    if ((pHVar17 != (HWND)0x0) &&
       (BVar12 = IsWindowEnabled(pHVar17), pFVar9 = local_870, BVar12 != 0)) {
      pHVar17 = (HWND)pFVar16->WindowHandle;
      (pFVar16->IMMContext).IsComposing = false;
      (pFVar16->IMMContext).IsDeactivating = false;
      ImmAssociateContext(pHVar17,(HIMC)local_870->IMMContextId);
      if (((pFVar9->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar4 = (pFVar9->TSFThreadManager).RawPointer;
      pcVar5 = *(code **)((longlong)*pIVar4 + 0x48);
      if (((pFVar16->TSFContext).RawPointer == (FTextStoreACP *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = (*pcVar5)(pIVar4,pFVar16->WindowHandle,
                         (((pFVar16->TSFContext).RawPointer)->TSFDocumentManager).RawPointer,
                         local_850);
      if ((iVar13 < 0) &&
         (FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,iVar13),
         1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
      if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_878);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_868.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_868.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_8d8);
      local_868.StatData.Pad[4] = '\0';
      local_868.StatData.Pad[5] = '\0';
      local_868.StatData.Pad[6] = '\0';
      local_868.StatData.Pad[7] = '\0';
      local_868.StatData.Pad[0] = local_8d8.s.LowPart._0_1_;
      local_868.StatData.Pad[1] = local_8d8.s.LowPart._1_1_;
      local_868.StatData.Pad[2] = local_8d8.s.LowPart._2_1_;
      local_868.StatData.Pad[3] = local_8d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_868);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplyDefaults @ 1423d08e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::ApplyDefaults
          (FWindowsTextInputMethodSystem *this,TSharedRef<FGenericWindow,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  ITfThreadMgr *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsApplyDefaults> FVar12;
  HWND pHVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  HIMC__ *pHVar17;
  undefined1 auStackY_1108 [32];
  undefined1 local_10a8 [8];
  FColor local_10a0 [2];
  ITfDocumentMgr *local_1098;
  FName local_1090;
  FName local_1088;
  LARGE_INTEGER local_1078;
  FGenericWindow *local_1070;
  TReferenceControllerBase<1> *local_1068;
  FStatMessage local_1060;
  FName local_1050;
  undefined1 local_1048 [16];
  wchar_t local_1038 [1024];
  wchar_t local_838 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1423d0904;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1108;
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pHVar17 = (HIMC__ *)0x0;
  FVar12 = StatPtr_STAT_IMEWindowsApplyDefaults;
  if (StatPtr_STAT_IMEWindowsApplyDefaults ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsApplyDefaults>)0x0) {
    pFVar11 = ::FName::FName(&local_1050,"STAT_IMEWindowsApplyDefaults");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsApplyDefaults>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsApplyDefaults,*pFVar11,
                        L"IME ApplyDefaults","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_1088.ComparisonIndex.Value = 0;
  local_1088.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_10a0[0].field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(local_10a0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1090.ComparisonIndex.Value = FVar15.Value;
        local_1090.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1090,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x2c2);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_10a8._0_4_ = FVar15.Value;
      local_10a8._4_4_ = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_1423d0a5d;
    }
  }
  bVar7 = false;
  FVar16 = local_1088;
LAB_1423d0a5d:
  ClearStaleWindowHandles(this);
  local_1070 = param_1->Object;
  local_1068 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_1068 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1068->WeakReferenceCount = (atomic<int>)((int)local_1068->WeakReferenceCount + 1);
    UNLOCK();
  }
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  ::Emplace<TWeakPtr<FGenericWindow,1>_>
            (&this->KnownWindows,(TWeakPtr<FGenericWindow,1> *)local_10a8,(bool *)&local_1070);
  if (local_1068 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_1068->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_1068->_padding_ + 8))(local_1068,1);
    }
  }
  pHVar13 = (HWND)(**(code **)(param_1->Object->_padding_ + 0xc0))();
  local_1098 = (this->TSFDisabledDocumentManager).RawPointer;
  if ((this->ActiveContext).Object != (ITextInputMethodContext *)0x0) {
    if ((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar4 = (this->TSFThreadManager).RawPointer;
    iVar10 = (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,&local_1098);
    if (iVar10 < 0) {
      local_1098 = (this->TSFDisabledDocumentManager).RawPointer;
      FWindowsPlatformMisc::GetSystemErrorMessage(local_1038,0x400,iVar10);
      if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
    }
    pHVar17 = this->IMMContextId;
  }
  if ((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar4 = (this->TSFThreadManager).RawPointer;
  iVar10 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,pHVar13,local_1098,local_1048);
  if (iVar10 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_838,0x400,iVar10);
    if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
  }
  ImmAssociateContext(pHVar13,(HIMC)pHVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1060.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_1060.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1078);
      local_1060.StatData.Pad[4] = '\0';
      local_1060.StatData.Pad[5] = '\0';
      local_1060.StatData.Pad[6] = '\0';
      local_1060.StatData.Pad[7] = '\0';
      local_1060.StatData.Pad[0] = local_1078.s.LowPart._0_1_;
      local_1060.StatData.Pad[1] = local_1078.s.LowPart._1_1_;
      local_1060.StatData.Pad[2] = local_1078.s.LowPart._2_1_;
      local_1060.StatData.Pad[3] = local_1078.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1060);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// BeginIMMComposition @ 1423d11d0

void __thiscall
FWindowsTextInputMethodSystem::BeginIMMComposition(FWindowsTextInputMethodSystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextInputMethodContext *pIVar4;
  code *pcVar5;
  bool bVar6;
  FInternalContext *pFVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  TWeakPtr<ITextInputMethodContext_const_,1> local_28;
  
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveContext.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                       ,0x1b6,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (this->ActiveContext).SharedReferenceCount.ReferenceController;
  local_28.Object = (this->ActiveContext).Object;
  local_28.WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_28);
  }
  else {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    pFVar7 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_28);
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  (pFVar7->IMMContext).IsComposing = true;
  (pFVar7->IMMContext).IsDeactivating = false;
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (**(code **)((longlong)*(this->ActiveContext).Object + 0x60))();
  local_res10[0] = 1;
  local_res8[0] = 0;
  local_res18[0] = 0;
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar4 = (this->ActiveContext).Object;
  (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,local_res8,local_res18,local_res10);
  (pFVar7->IMMContext).CompositionBeginIndex = local_res8[0];
  (pFVar7->IMMContext).CompositionLength = 0;
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar4 = (this->ActiveContext).Object;
  (**(code **)((longlong)*pIVar4 + 0x68))
            (pIVar4,(pFVar7->IMMContext).CompositionBeginIndex,
             (pFVar7->IMMContext).CompositionLength);
  return;
}

// CancelIMMComposition @ 1423d2300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::CancelIMMComposition(FWindowsTextInputMethodSystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  ITextInputMethodContext *pIVar6;
  code *pcVar7;
  bool bVar8;
  FInternalContext *pFVar9;
  TWeakPtr<ITextInputMethodContext_const_,1> local_28;
  FString local_18;
  
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveContext.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                       ,0x1d7,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pTVar5 = (this->ActiveContext).SharedReferenceCount.ReferenceController;
  local_28.Object = (this->ActiveContext).Object;
  local_28.WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_28);
  }
  else {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
    pFVar9 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_28);
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  uVar3 = (pFVar9->IMMContext).CompositionLength;
  iVar4 = (pFVar9->IMMContext).CompositionBeginIndex;
  (pFVar9->IMMContext).CompositionLength = 0;
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar6 = (this->ActiveContext).Object;
  (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,(pFVar9->IMMContext).CompositionBeginIndex,0);
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar6 = (this->ActiveContext).Object;
  (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,(pFVar9->IMMContext).CompositionBeginIndex,0,0);
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar6 = (this->ActiveContext).Object;
  pcVar7 = *(code **)((longlong)*pIVar6 + 0x38);
  ::FString::FString(&local_18,L"");
  (*pcVar7)(pIVar6,iVar4,uVar3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  EndIMMComposition(this);
  return;
}

// ClearStaleWindowHandles @ 1423d27f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsTextInputMethodSystem::ClearStaleWindowHandles(FWindowsTextInputMethodSystem *this)

{
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong *puVar1;
  ulonglong uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  atomic<int> aVar7;
  byte bVar8;
  longlong lVar9;
  atomic<int> *paVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  TWeakPtr<FGenericWindow_const_,1> local_c8;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_5c = 0x80;
  this_00 = &this->KnownWindows;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar13 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
               *)local_88,this_00);
  uVar15 = local_60;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = uVar13;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar12 = *puVar14;
    local_e0 = 0;
    uVar13 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)(int)uVar13;
      local_e0 = local_e0 + 0x20;
      uVar13 = uVar13 + 1;
      uStack_e4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_1423d28e1;
      uVar12 = (puVar14 + 1)[lVar9];
    }
    uStack_f4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d0 = (int)lVar9;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_1423d28e1:
  local_100 = (longlong *)local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar12 = local_60 & 0xffffffe0;
  iStack_d8 = local_88._8_4_ - local_54;
  uStack_e8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_e4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_f4,uVar13);
  iVar11 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_e4;
  TStack_b0.BaseBitIndex = local_e0;
  uStack_90 = CONCAT44(uStack_d4,iStack_d8);
  bVar8 = (byte)local_60;
  uStack_f8 = uVar13;
  uStack_dc = uStack_e4;
  local_b8 = local_100;
  TStack_b0.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar15 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar13 = -1 << (bVar8 & 0x1f) & puVar14[iVar11];
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1423d29ec;
      uVar13 = (puVar14 + 1)[lVar9];
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar15 = (int)lVar9 + -1 + uVar12;
    if ((int)local_60 < (int)uVar15) {
      uVar15 = local_60;
    }
  }
LAB_1423d29ec:
  do {
    plVar5 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_b0.CurrentBitIndex == uVar15) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar11 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar11 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (uint *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return;
    }
    lVar9 = *plVar5;
    puVar1 = (ulonglong *)(lVar9 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    if (((*(longlong *)(lVar9 + (longlong)TStack_b0.CurrentBitIndex * 0x18) == 0) ||
        (puVar1[1] == 0)) || (*(int *)(puVar1[1] + 8) < 1)) {
      pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
      local_c8.Object = (FGenericWindow *)*puVar1;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_0000000c;
      }
      else {
        paVar10 = &pTVar3->WeakReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      local_c8.WeakReferenceCount.ReferenceController = pTVar3;
      if (*(int *)&(this->KnownWindows).Elements.field_0x8 ==
          *(int *)&(this->KnownWindows).Elements.field_0x34) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          aVar7 = *paVar10;
          *paVar10 = (atomic<int>)((int)*paVar10 + -1);
          UNLOCK();
          goto LAB_1423d2b23;
        }
      }
      else {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        uVar13 = ((uint)((ulonglong)local_c8.Object >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_c8.Object >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar13 = uVar13 >> 0x10 ^ uVar13;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          aVar7 = *paVar10;
          *paVar10 = (atomic<int>)((int)*paVar10 + -1);
          UNLOCK();
          if (aVar7 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
            TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TWeakPtr<FGenericWindow_const_,1>_>(this_00,uVar13,&local_c8);
            LOCK();
            paVar10 = &pTVar3->WeakReferenceCount;
            aVar7 = *paVar10;
            *paVar10 = (atomic<int>)((int)*paVar10 + -1);
            UNLOCK();
            goto LAB_1423d2b23;
          }
        }
        TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakPtr<FGenericWindow_const_,1>_>(this_00,uVar13,&local_c8);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar10 = &pTVar3->WeakReferenceCount;
          aVar7 = *paVar10;
          *paVar10 = (atomic<int>)((int)*paVar10 + -1);
          UNLOCK();
LAB_1423d2b23:
          if (aVar7 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3);
          }
        }
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// DeactivateContext @ 1423d77a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::DeactivateContext
          (FWindowsTextInputMethodSystem *this,TSharedRef<ITextInputMethodContext,1> *param_1)

{
  atomic<int> *paVar1;
  ulonglong uVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  ITfThreadMgr *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsDeactivateContext> FVar17;
  FInternalContext *pFVar18;
  HIMC pHVar19;
  longlong lVar20;
  FName FVar21;
  uint uVar22;
  int iVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_100;
  FName local_f8;
  TWeakPtr<ITextInputMethodContext_const_,1> local_f0;
  FName local_e0;
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58;
  undefined1 local_50 [16];
  
  FVar17 = StatPtr_STAT_IMEWindowsDeactivateContext;
  if (StatPtr_STAT_IMEWindowsDeactivateContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsDeactivateContext>)0x0) {
    pFVar16 = ::FName::FName(&local_58,"STAT_IMEWindowsDeactivateContext");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsDeactivateContext>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsDeactivateContext,
                        *pFVar16,L"IME DeactivateContext","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar17;
  bVar8 = false;
  bVar11 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar13 = false;
  bVar9 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) ||
     (bVar7 = bVar8, bVar10 = bVar11, FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar11 = true;
      bVar13 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_100.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x36e);
        bVar8 = true;
        bVar11 = true;
        bVar13 = true;
        bVar9 = true;
      }
    }
    bVar7 = bVar8;
    bVar10 = bVar11;
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar13 = true;
      bVar9 = true;
      goto LAB_1423d78fd;
    }
  }
  bVar11 = bVar9;
  bVar8 = bVar13;
  bVar13 = false;
  bVar9 = false;
  local_f8 = local_e0;
  FVar21 = local_e0;
LAB_1423d78fd:
  pTVar24 = (param_1->SharedReferenceCount).ReferenceController;
  local_f0.Object = param_1->Object;
  uVar14 = 1;
  local_f0.WeakReferenceCount.ReferenceController = pTVar24;
  if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_f0);
  }
  else {
    LOCK();
    pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
    UNLOCK();
    pFVar18 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_f0);
    LOCK();
    paVar1 = &pTVar24->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar24->_padding_ + 8))(pTVar24,1);
    }
  }
  if (pFVar18->WindowHandle != (HWND__ *)0x0) {
    if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
    pHVar19 = ImmGetContext((HWND)pFVar18->WindowHandle);
    (pFVar18->IMMContext).IsDeactivating = true;
    ImmNotifyIME(pHVar19,0x15,1,0);
    ImmReleaseContext((HWND)pFVar18->WindowHandle,pHVar19);
    ClearStaleWindowHandles(this);
    local_c0 = &(this->KnownWindows).Elements.field_0x10;
    iStack_c8 = 0;
    iVar23 = *(int *)&(this->KnownWindows).Elements.field_0x28;
    local_d0 = &this->KnownWindows;
    local_b0 = 0;
    iStack_b4 = 0;
    if (iVar23 != 0) {
      puVar26 = *(uint **)&(this->KnownWindows).Elements.field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)local_c0;
      }
      uVar22 = *puVar26;
      while (uVar22 == 0) {
        lVar20 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar23;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1423d7a3e;
        uVar22 = puVar26[lVar20 + 1];
      }
      uVar14 = -uVar22 & uVar22;
      uVar2 = (ulonglong)uVar14 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_a0 = (int)lVar20;
      iStack_b4 = local_a0 + -1 + local_b0;
      if (iVar23 < iStack_b4) {
        iStack_b4 = iVar23;
      }
    }
LAB_1423d7a3e:
    iStack_a8 = *(int *)&(this->KnownWindows).Elements.field_0x8 -
                *(int *)&(this->KnownWindows).Elements.field_0x34;
    uVar22 = *(uint *)&(this->KnownWindows).Elements.field_0x28;
    uStack_b8 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_b4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uVar14,iStack_c8);
    uVar27 = uVar22 & 0xffffffe0;
    iVar23 = (int)uVar22 >> 5;
    TStack_80._28_4_ = iStack_b4;
    TStack_80.BaseBitIndex = local_b0;
    uStack_60 = CONCAT44(uStack_a4,iStack_a8);
    uStack_c4 = uVar14;
    iStack_ac = iStack_b4;
    local_88 = local_d0;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if (((int)uVar22 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar14 = *(uint *)&(this->KnownWindows).Elements.field_0x28;
    if (uVar22 != uVar14) {
      puVar25 = *(undefined1 **)&(this->KnownWindows).Elements.field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = &(this->KnownWindows).Elements.field_0x10;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar23 * 4);
      while (uVar22 == 0) {
        lVar20 = (longlong)iVar23;
        uVar27 = uVar27 + 0x20;
        iVar23 = iVar23 + 1;
        uVar22 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_1423d7b4f;
        uVar22 = *(uint *)(puVar25 + lVar20 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_9c = (int)lVar20;
      uVar22 = local_9c + -1 + uVar27;
      if ((int)uVar14 < (int)uVar22) {
        uVar22 = uVar14;
      }
    }
LAB_1423d7b4f:
    while( true ) {
      pTVar12 = local_88;
      if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
          (int)uStack_60) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_80.CurrentBitIndex == uVar22) &&
          (TStack_80.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->KnownWindows).Elements.field_0x10)) &&
         (FVar21 = local_f8, bVar7 = bVar8, bVar13 = bVar9, bVar10 = bVar11,
         pTVar12 == &this->KnownWindows)) break;
      lVar20 = *(longlong *)&pTVar12->Elements;
      pTVar24 = *(TReferenceControllerBase<1> **)
                 (lVar20 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar24->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar24 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1423d7bd0;
          }
          LOCK();
          aVar15 = pTVar24->SharedReferenceCount;
          bVar13 = aVar3 == aVar15;
          if (bVar13) {
            pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar15 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar15;
        } while (!bVar13);
        plVar4 = *(longlong **)(lVar20 + (longlong)TStack_80.CurrentBitIndex * 0x18);
        if ((plVar4 != (longlong *)0x0) && (lVar20 = (**(code **)(*plVar4 + 0xc0))(), lVar20 != 0))
        {
          if (((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pIVar5 = (this->TSFThreadManager).RawPointer;
          (**(code **)((longlong)*pIVar5 + 0x48))
                    (pIVar5,lVar20,(this->TSFDisabledDocumentManager).RawPointer,local_50);
          ImmAssociateContext((HWND)pFVar18->WindowHandle,(HIMC)0x0);
        }
      }
LAB_1423d7bd0:
      if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  local_98 = 0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActiveContext != (TSharedPtr<ITextInputMethodContext,1> *)&local_98) {
    (this->ActiveContext).Object = (ITextInputMethodContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveContext).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// EndIMMComposition @ 1423db060

void __thiscall
FWindowsTextInputMethodSystem::EndIMMComposition(FWindowsTextInputMethodSystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FInternalContext *pFVar6;
  TWeakPtr<ITextInputMethodContext_const_,1> local_18;
  
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveContext.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                       ,0x1cd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (this->ActiveContext).SharedReferenceCount.ReferenceController;
  local_18.Object = (this->ActiveContext).Object;
  local_18.WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar6 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_18);
  }
  else {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    pFVar6 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
             ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                            *)&this->ContextToInternalContextMap,&local_18);
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  (pFVar6->IMMContext).IsComposing = false;
  (pFVar6->IMMContext).IsDeactivating = false;
  if ((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001423db13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->ActiveContext).Object + 0x70))();
  return;
}

// Initialize @ 1423e7f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsTextInputMethodSystem::Initialize(FWindowsTextInputMethodSystem *this)

{
  ForElementType<HKL___*> FVar1;
  ITfInputProcessorProfileMgr *pIVar2;
  HKL__ *pHVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UINT UVar11;
  HIMC pHVar12;
  HKL pHVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<FSetElementId> FVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<HKL___*> FVar21;
  undefined1 auStackY_cc8 [32];
  undefined1 local_c78;
  undefined1 local_c77 [7];
  ForAnyElementType local_c70;
  undefined8 local_c68;
  uint local_c60 [2];
  longlong *local_c58;
  undefined1 local_c50 [8];
  HKL__ *local_c48;
  FString local_c40;
  FString local_c30;
  ForElementType<HKL___*> local_c20;
  int local_bf8 [4];
  TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator> local_be8;
  int local_b98;
  undefined1 local_b38 [80];
  byte abStack_ae8 [2736];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_cc8;
  this->CurrentAPI = Unknown;
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pHVar12 = ImmCreateContext();
  this->IMMContextId = (HIMC__ *)pHVar12;
  pHVar13 = GetKeyboardLayout(0);
  DVar7 = ImmGetProperty(pHVar13,4);
  this->IMMProperties = DVar7;
  if (this->IMMContextId == (HIMC__ *)0x0) {
    if ((2 < (byte)LogWindowsTextInputMethodSystem._0_1_) && (GIsBuildMachine == false)) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
  }
  else {
    if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
    bVar5 = InitializeTSF(this);
    if (bVar5) {
      local_c70.Data = (FScriptContainerElement *)0x0;
      local_c68 = 0;
      local_be8.Elements._0_8_ = 0;
      local_be8.Elements._8_8_ = 0;
      local_be8.Elements._32_8_ = 0;
      local_be8.Elements._40_4_ = 0;
      local_be8.Elements._44_4_ = 0x80;
      local_be8.Elements._48_4_ = 0xffffffff;
      local_be8.Elements._52_4_ = 0;
      local_be8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_be8.HashSize = 0;
      local_c58 = (longlong *)0x0;
      if (((this->TSFInputProcessorProfileManager).RawPointer == (ITfInputProcessorProfileMgr *)0x0)
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
      iVar8 = (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,0,&local_c58);
      if (-1 < iVar8) {
        local_c60[0] = 0;
        while( true ) {
          if ((local_c58 == (longlong *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("RawPointer != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                 ,0x9f,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = (**(code **)(*local_c58 + 0x20))(local_c58,0x20,local_b38,local_c60);
          if ((iVar8 < 0) || (uVar20 = 0, local_c60[0] == 0)) break;
          do {
            lVar15 = uVar20 * 0x58;
            if (((TF_INPUTPROCESSORPROFILE *)(local_b38 + lVar15))->dwProfileType == 2) {
              TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator>::
              Emplace<HKL___*_const_&>
                        (&local_be8,(HKL__ **)local_c50,(bool *)(local_b38 + lVar15 + 0x48));
            }
            if ((abStack_ae8[lVar15] & 2) != 0) {
              pFVar14 = (FScriptContainerElement *)
                        ::`anonymous_namespace'::GetTSFInputMethodAsFString
                                  (&local_c40,(TF_INPUTPROCESSORPROFILE *)(local_b38 + lVar15),
                                   (this->TSFInputProcessorProfiles).RawPointer);
              if (((local_c70.Data <= pFVar14) &&
                  (pFVar14 < local_c70.Data + (longlong)local_c68._4_4_ * 0x10)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar8 = (int)local_c68;
              if ((int)local_c68 == local_c68._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_c70,(int *)((longlong)&local_c68 + 4));
              }
              local_c68 = CONCAT44(local_c68._4_4_,iVar8 + 1);
              pFVar16 = local_c70.Data + (longlong)iVar8 * 0x10;
              *(undefined8 *)pFVar16 = 0;
              *(undefined8 *)pFVar16 = *(undefined8 *)pFVar14;
              *(undefined8 *)pFVar14 = 0;
              *(int *)(pFVar16 + 8) = *(int *)(pFVar14 + 8);
              *(int *)(pFVar16 + 0xc) = *(int *)(pFVar14 + 0xc);
              *(undefined8 *)(pFVar14 + 8) = 0;
              if (local_c40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c40.Data.AllocatorInstance.Data);
              }
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while (uVar19 < local_c60[0]);
        }
      }
      if (local_c58 != (longlong *)0x0) {
        (**(code **)(*local_c58 + 0x10))();
      }
      iVar8 = GetKeyboardLayoutList(0,(HKL *)0x0);
      local_c20.SecondaryData = (ForElementType<HKL___*>)0x0;
      local_bf8[0] = 0;
      local_bf8[1] = 4;
      iVar9 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<HKL___*>_>
                        (8,8,iVar8,&local_c20,local_bf8,local_bf8 + 1);
      FVar21 = (ForElementType<HKL___*>)&local_c20;
      if (local_c20.SecondaryData != (ForElementType<HKL___*>)0x0) {
        FVar21 = local_c20.SecondaryData;
      }
      memset((HKL *)((longlong)FVar21 + (longlong)iVar9 * 8),0,(longlong)iVar8 << 3);
      FVar21 = (ForElementType<HKL___*>)&local_c20;
      if (local_c20.SecondaryData != (ForElementType<HKL___*>)0x0) {
        FVar21 = local_c20.SecondaryData;
      }
      iVar10 = GetKeyboardLayoutList(local_bf8[0],(HKL *)FVar21);
      iVar9 = local_bf8[0];
      if (iVar10 == iVar8) {
        FVar21 = (ForElementType<HKL___*>)&local_c20;
        if (local_c20.SecondaryData != (ForElementType<HKL___*>)0x0) {
          FVar21 = local_c20.SecondaryData;
        }
        FVar1 = (ForElementType<HKL___*>)((longlong)FVar21 + (longlong)local_bf8[0] * 8);
        while( true ) {
          if (local_bf8[0] != iVar9) {
            local_c78 = 0;
            `TCheckedPointerIterator<HKL___*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_c78);
          }
          if (FVar21 == FVar1) break;
          pHVar3 = *(HKL__ **)FVar21;
          uVar19 = ((uint)((ulonglong)pHVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pHVar3 >> 4)) *
                   -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          local_c48 = pHVar3;
          if (local_be8.Elements._8_4_ != local_be8.Elements._52_4_) {
            FVar17 = (ForElementType<FSetElementId>)&local_be8.Hash;
            if (local_be8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar17 = local_be8.Hash.SecondaryData;
            }
            for (iVar8 = *(int *)((longlong)FVar17 +
                                 (ulonglong)(local_be8.HashSize - 1U & (uVar19 >> 0x10 ^ uVar19)) *
                                 4); iVar8 != -1;
                iVar8 = *(int *)(local_be8.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
              if (*(HKL__ **)(local_be8.Elements._0_8_ + (longlong)iVar8 * 0x10) == pHVar3)
              goto LAB_1423e84aa;
            }
          }
          TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator>::Emplace<HKL___*_const_&>
                    (&local_be8,(HKL__ **)(local_c50 + 4),(bool *)&local_c48);
          pFVar14 = (FScriptContainerElement *)
                    ::`anonymous_namespace'::GetHKLDescriptionAsFString(&local_c30,pHVar3);
          if (((local_c70.Data <= pFVar14) &&
              (pFVar14 < local_c70.Data + (longlong)local_c68._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = (int)local_c68;
          if ((int)local_c68 == local_c68._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_c70,(int *)((longlong)&local_c68 + 4));
          }
          local_c68 = CONCAT44(local_c68._4_4_,iVar8 + 1);
          pFVar16 = local_c70.Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar16 = 0;
          *(undefined8 *)pFVar16 = *(undefined8 *)pFVar14;
          *(undefined8 *)pFVar14 = 0;
          *(int *)(pFVar16 + 8) = *(int *)(pFVar14 + 8);
          *(int *)(pFVar16 + 0xc) = *(int *)(pFVar14 + 0xc);
          *(undefined8 *)(pFVar14 + 8) = 0;
          if (local_c30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c30.Data.AllocatorInstance.Data);
          }
LAB_1423e84aa:
          FVar21 = (ForElementType<HKL___*>)((longlong)FVar21 + 8);
        }
      }
      if (local_c20.SecondaryData != (ForElementType<HKL___*>)0x0) {
        FMemory::Free((void *)local_c20.SecondaryData);
      }
      if (4 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
      iVar8 = (int)local_c68;
      pFVar14 = local_c70.Data + (longlong)(int)local_c68 * 0x10;
      FVar18.Data = local_c70.Data;
      while( true ) {
        if ((int)local_c68 != iVar8) {
          local_c77[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_c77);
        }
        if (FVar18.Data == pFVar14) break;
        if (4 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
      local_be8.HashSize = 0;
      if (local_be8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_be8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<HKL___*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<HKL___*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_be8.Elements);
      DestructItems<FString,int>((FString *)local_c70.Data,(int)local_c68);
      if (local_c70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c70.Data);
      }
      if (((this->TSFInputProcessorProfileManager).RawPointer == (ITfInputProcessorProfileMgr *)0x0)
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar8 = (**(code **)((longlong)*(this->TSFInputProcessorProfileManager).RawPointer + 0x50))();
      if ((-1 < iVar8) && (local_b98 == 1)) {
        this->CurrentAPI = TSF;
        LogActiveInputMethod(this);
        return true;
      }
      pHVar13 = GetKeyboardLayout(0);
      UVar11 = ImmGetIMEFileNameW(pHVar13,(LPWSTR)0x0,0);
      if (UVar11 != 0) {
        this->CurrentAPI = IMM;
      }
      LogActiveInputMethod(this);
      return true;
    }
  }
  return false;
}

// InitializeIMM @ 1423e9070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsTextInputMethodSystem::InitializeIMM(FWindowsTextInputMethodSystem *this)

{
  DWORD DVar1;
  HIMC pHVar2;
  HKL pHVar3;
  
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pHVar2 = ImmCreateContext();
  this->IMMContextId = (HIMC__ *)pHVar2;
  pHVar3 = GetKeyboardLayout(0);
  DVar1 = ImmGetProperty(pHVar3,4);
  this->IMMProperties = DVar1;
  if (this->IMMContextId == (HIMC__ *)0x0) {
    if ((2 < (byte)LogWindowsTextInputMethodSystem._0_1_) && (GIsBuildMachine == false)) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
    return false;
  }
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  return true;
}

// InitializeTSF @ 1423e9120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsTextInputMethodSystem::InitializeTSF(FWindowsTextInputMethodSystem *this)

{
  ITfInputProcessorProfiles *pIVar1;
  ITfInputProcessorProfileMgr *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  HRESULT HVar7;
  int iVar8;
  ITfThreadMgr *pIVar9;
  FTSFActivationProxy *pFVar10;
  FTSFActivationProxy *pFVar11;
  undefined1 auStackY_4088 [32];
  longlong *local_4058;
  TComPtr<ITfInputProcessorProfiles> local_4050;
  TComPtr<ITfThreadMgr> local_4048 [2];
  wchar_t local_4038 [1024];
  wchar_t local_3838 [1024];
  wchar_t local_3038 [1024];
  wchar_t local_2838 [1024];
  wchar_t local_2038 [1024];
  wchar_t local_1838 [1024];
  wchar_t local_1038 [1024];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4088;
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  HVar7 = CoCreateInstance((IID *)&CLSID_TF_InputProcessorProfiles,(LPUNKNOWN)0x0,1,
                           (IID *)&IID_ITfInputProcessorProfiles,&local_4050.RawPointer);
  if (HVar7 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_4038,0x400,HVar7);
    if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      return false;
    }
  }
  else {
    pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
    if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    (this->TSFInputProcessorProfiles).RawPointer = local_4050.RawPointer;
    pFVar11 = (FTSFActivationProxy *)0x0;
    pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
    if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (this->TSFInputProcessorProfileManager).RawPointer = (ITfInputProcessorProfileMgr *)0x0;
    }
    iVar8 = (**(code **)*local_4050.RawPointer)
                      (local_4050.RawPointer,&IID_ITfInputProcessorProfileMgr,
                       &this->TSFInputProcessorProfileManager);
    if (iVar8 < 0) {
      FWindowsPlatformMisc::GetSystemErrorMessage(local_3838,0x400,iVar8);
      if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
      pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
      if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
        (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
        return false;
      }
    }
    else {
      HVar7 = CoCreateInstance((IID *)&CLSID_TF_ThreadMgr,(LPUNKNOWN)0x0,1,(IID *)&IID_ITfThreadMgr,
                               &local_4048[0].RawPointer);
      if (HVar7 < 0) {
        if ((GIsBuildMachine == false) &&
           (FWindowsPlatformMisc::GetSystemErrorMessage(local_3038,0x400,HVar7),
           2 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
        pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
        if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
          (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
        }
        pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
        if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))();
          (this->TSFInputProcessorProfileManager).RawPointer = (ITfInputProcessorProfileMgr *)0x0;
          return false;
        }
      }
      else {
        pIVar9 = (this->TSFThreadManager).RawPointer;
        if (pIVar9 != (ITfThreadMgr *)0x0) {
          (**(code **)((longlong)*pIVar9 + 0x10))();
        }
        (this->TSFThreadManager).RawPointer = local_4048[0].RawPointer;
        pIVar9 = TComPtr<ITfThreadMgr>::operator->(&this->TSFThreadManager);
        iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,&this->TSFClientId);
        if (iVar8 < 0) {
          FWindowsPlatformMisc::GetSystemErrorMessage(local_2838,0x400,iVar8);
          if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
          }
          pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
          if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
            (**(code **)((longlong)*pIVar1 + 0x10))();
            (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
          }
          pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
          if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))();
            (this->TSFInputProcessorProfileManager).RawPointer = (ITfInputProcessorProfileMgr *)0x0;
          }
          pIVar9 = (this->TSFThreadManager).RawPointer;
          if (pIVar9 != (ITfThreadMgr *)0x0) {
            (**(code **)((longlong)*pIVar9 + 0x10))();
            (this->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
            return false;
          }
        }
        else {
          pIVar9 = (this->TSFThreadManager).RawPointer;
          local_4058 = (longlong *)0x0;
          iVar8 = (**(code **)*pIVar9)(pIVar9,&IID_ITfSource,&local_4058);
          if (iVar8 < 0) {
            FWindowsPlatformMisc::GetSystemErrorMessage(local_2038,0x400,iVar8);
            if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
            if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
              (**(code **)((longlong)*pIVar1 + 0x10))();
              (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
            }
            pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
            if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
              (this->TSFInputProcessorProfileManager).RawPointer =
                   (ITfInputProcessorProfileMgr *)0x0;
            }
            pIVar9 = (this->TSFThreadManager).RawPointer;
            if (pIVar9 != (ITfThreadMgr *)0x0) {
              (**(code **)((longlong)*pIVar9 + 0x10))();
              (this->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
            }
          }
          else {
            pFVar10 = ::operator_new(0x28);
            if (pFVar10 != (FTSFActivationProxy *)0x0) {
              pFVar10->TSFProfileCookie = 0xffffffff;
              pFVar10->TSFLanguageCookie = 0xffffffff;
              pFVar10->_padding_ =
                   (longlong)
                   &FTSFActivationProxy::_vftable__for__ITfInputProcessorProfileActivationSink__;
              pFVar10->_padding_ =
                   (longlong)
                   &FTSFActivationProxy::_vftable__for__ITfActiveLanguageProfileNotifySink__;
              pFVar10->Owner = this;
              pFVar10->ReferenceCount = 1;
              pFVar11 = pFVar10;
            }
            if ((this->TSFActivationProxy).RawPointer != pFVar11) {
              if (pFVar11 != (FTSFActivationProxy *)0x0) {
                (**(code **)(pFVar11->_padding_ + 8))(pFVar11);
              }
              pFVar10 = (this->TSFActivationProxy).RawPointer;
              if (pFVar10 != (FTSFActivationProxy *)0x0) {
                (**(code **)(pFVar10->_padding_ + 0x10))();
              }
              (this->TSFActivationProxy).RawPointer = pFVar11;
            }
            ::GetVersion();
            if ((local_4058 == (longlong *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RawPointer != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                   ,0x9f,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            plVar4 = local_4058;
            pcVar3 = *(code **)(*local_4058 + 0x18);
            if (((this->TSFActivationProxy).RawPointer == (FTSFActivationProxy *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RawPointer != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                   ,0x9f,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pFVar11 = (this->TSFActivationProxy).RawPointer;
            iVar8 = (*pcVar3)(plVar4,&IID_ITfInputProcessorProfileActivationSink,pFVar11,
                              &pFVar11->TSFProfileCookie);
            if (-1 < iVar8) {
              if (local_4058 != (longlong *)0x0) {
                (**(code **)(*local_4058 + 0x10))();
              }
              if (((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RawPointer != 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                     ,0x9f,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pIVar9 = (this->TSFThreadManager).RawPointer;
              iVar8 = (**(code **)((longlong)*pIVar9 + 0x28))
                                (pIVar9,&this->TSFDisabledDocumentManager);
              if (iVar8 < 0) {
                FWindowsPlatformMisc::GetSystemErrorMessage(local_1038,0x400,iVar8);
                if (2 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
                }
              }
              else {
                if (((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("RawPointer != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                       ,0x9f,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                pIVar9 = (this->TSFThreadManager).RawPointer;
                iVar8 = (**(code **)((longlong)*pIVar9 + 0x40))
                                  (pIVar9,(this->TSFDisabledDocumentManager).RawPointer);
                if (-1 < iVar8) {
                  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
                  }
                  return true;
                }
                FWindowsPlatformMisc::GetSystemErrorMessage(local_838,0x400,iVar8);
                if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
                }
              }
              pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
              if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
                (**(code **)((longlong)*pIVar1 + 0x10))();
                (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
              }
              pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
              if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
                (**(code **)((longlong)*pIVar2 + 0x10))();
                (this->TSFInputProcessorProfileManager).RawPointer =
                     (ITfInputProcessorProfileMgr *)0x0;
              }
              pIVar9 = (this->TSFThreadManager).RawPointer;
              if (pIVar9 != (ITfThreadMgr *)0x0) {
                (**(code **)((longlong)*pIVar9 + 0x10))();
                (this->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
              }
              pFVar11 = (this->TSFActivationProxy).RawPointer;
              if (pFVar11 == (FTSFActivationProxy *)0x0) {
                return false;
              }
              (**(code **)(pFVar11->_padding_ + 0x10))();
              (this->TSFActivationProxy).RawPointer = (FTSFActivationProxy *)0x0;
              return false;
            }
            FWindowsPlatformMisc::GetSystemErrorMessage(local_1838,0x400,iVar8);
            if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)&PTR_u_Initialization__1508e10c8,
                         (FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            pIVar1 = (this->TSFInputProcessorProfiles).RawPointer;
            if (pIVar1 != (ITfInputProcessorProfiles *)0x0) {
              (**(code **)((longlong)*pIVar1 + 0x10))();
              (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
            }
            pIVar2 = (this->TSFInputProcessorProfileManager).RawPointer;
            if (pIVar2 != (ITfInputProcessorProfileMgr *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
              (this->TSFInputProcessorProfileManager).RawPointer =
                   (ITfInputProcessorProfileMgr *)0x0;
            }
            pIVar9 = (this->TSFThreadManager).RawPointer;
            if (pIVar9 != (ITfThreadMgr *)0x0) {
              (**(code **)((longlong)*pIVar9 + 0x10))();
              (this->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
            }
            pFVar11 = (this->TSFActivationProxy).RawPointer;
            if (pFVar11 != (FTSFActivationProxy *)0x0) {
              (**(code **)(pFVar11->_padding_ + 0x10))();
              (this->TSFActivationProxy).RawPointer = (FTSFActivationProxy *)0x0;
            }
          }
          if (local_4058 != (longlong *)0x0) {
            (**(code **)(*local_4058 + 0x10))();
            return false;
          }
        }
      }
    }
  }
  return false;
}

// IsActiveContext @ 1423ea360

bool __thiscall
FWindowsTextInputMethodSystem::IsActiveContext
          (FWindowsTextInputMethodSystem *this,TSharedRef<ITextInputMethodContext,1> *param_1)

{
  ITextInputMethodContext *pIVar1;
  
  pIVar1 = (this->ActiveContext).Object;
  if ((pIVar1 != (ITextInputMethodContext *)0x0) && (pIVar1 == param_1->Object)) {
    return true;
  }
  return false;
}

// LogActiveInputMethod @ 1423eba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::LogActiveInputMethod(FWindowsTextInputMethodSystem *this)

{
  ITfInputProcessorProfileMgr *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  HKL pHVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FString local_98;
  FString local_88;
  TF_INPUTPROCESSORPROFILE local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar7 = (FScriptContainerElement *)0x0;
  if (this->CurrentAPI == TSF) {
    if (((this->TSFInputProcessorProfileManager).RawPointer == (ITfInputProcessorProfileMgr *)0x0)
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->TSFInputProcessorProfileManager).RawPointer;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,&GUID_TFCAT_TIP_KEYBOARD,&local_78);
    pFVar8 = pFVar7;
    if ((iVar4 < 0) || (pFVar8 = (FScriptContainerElement *)0x0, local_78.dwProfileType != 1))
    goto LAB_1423ebb01;
    pFVar5 = ::`anonymous_namespace'::GetTSFInputMethodAsFString
                       (&local_a8,&local_78,(this->TSFInputProcessorProfiles).RawPointer);
    local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (&local_98 != pFVar5) {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
  }
  else {
    pHVar6 = GetKeyboardLayout(0);
    pFVar5 = ::`anonymous_namespace'::GetHKLDescriptionAsFString(&local_88,(HKL__ *)pHVar6);
    if (&local_98 != pFVar5) {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
  }
  pFVar8 = pFVar7;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1423ebb01:
  if (4 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// OnIMEActivationStateChanged @ 1423f0540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::OnIMEActivationStateChanged
          (FWindowsTextInputMethodSystem *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UINT UVar8;
  DWORD DVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsOnIMEActivationStateChanged> FVar11;
  HKL pHVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c8 [2];
  LARGE_INTEGER local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a0;
  FName local_90;
  int local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar11 = StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged;
  if (StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsOnIMEActivationStateChanged>)0x0) {
    pFVar10 = ::FName::FName(&local_90,"STAT_IMEWindowsOnIMEActivationStateChanged");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsOnIMEActivationStateChanged>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_IMEWindowsOnIMEActivationStateChanged,*pFVar10,
                        L"IME OnIMEActivationStateChanged","STATGROUP_IMEWindows","STATCAT_Advanced"
                        ,L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_1423f0697:
    bVar4 = false;
    FVar15 = local_b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar14.Value;
        local_b8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x39e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1423f0697;
    local_c0.s.LowPart = FVar14.Value;
    local_c0.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar4 = true;
  }
  if (param_1) {
    pHVar12 = GetKeyboardLayout(0);
    if ((this->TSFInputProcessorProfileManager).RawPointer == (ITfInputProcessorProfileMgr *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar7 = (**(code **)((longlong)*(this->TSFInputProcessorProfileManager).RawPointer + 0x50))();
    if ((-1 < iVar7) && (local_88 == 1)) {
      this->CurrentAPI = TSF;
      goto LAB_1423f073a;
    }
    UVar8 = ImmGetIMEFileNameW(pHVar12,(LPWSTR)0x0,0);
    if (UVar8 != 0) {
      this->CurrentAPI = IMM;
      DVar9 = ImmGetProperty(pHVar12,4);
      this->IMMProperties = DVar9;
      goto LAB_1423f073a;
    }
  }
  this->CurrentAPI = Unknown;
LAB_1423f073a:
  LogActiveInputMethod(this);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ProcessMessage @ 1423f6ff0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsTextInputMethodSystem::ProcessMessage
          (FWindowsTextInputMethodSystem *this,HWND__ *param_1,uint param_2,ulong64 param_3,
          long64 param_4)

{
  atomic<int> *paVar1;
  TSharedPtr<ITextInputMethodContext,1> *this_00;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  DWORD DVar11;
  LONG LVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsProcessMessage> FVar15;
  FInternalContext *pFVar16;
  ITextInputMethodContext *pIVar17;
  LRESULT LVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar19;
  FInternalContext *pFVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  TSharedPtr<ITextInputMethodContext,1> *this_03;
  int local_e8 [2];
  FInternalContext *local_e0;
  FName local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  FColor_u_0 local_c0 [2];
  ulonglong local_b8;
  LARGE_INTEGER local_b0;
  FString local_a8;
  FName local_98;
  TSharedPtr<ITextInputMethodContext,1> *local_90;
  FStatMessage local_88;
  TWeakPtr<ITextInputMethodContext_const_,1> local_78;
  FString local_68;
  FName local_58;
  FString local_48;
  FName local_38 [2];
  
  uVar22 = 0;
  FVar15 = StatPtr_STAT_IMEWindowsProcessMessage;
  if (StatPtr_STAT_IMEWindowsProcessMessage ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsProcessMessage>)0x0) {
    pFVar14 = ::FName::FName(local_38,"STAT_IMEWindowsProcessMessage");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsProcessMessage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsProcessMessage,*pFVar14
                        ,L"IME ProcessMessage","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_1423f713d:
    bVar8 = false;
    FVar19 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_98.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x3c2);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1423f713d;
    local_d8 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  if (this->CurrentAPI == IMM) {
    uVar13 = (uint)param_4;
    if (param_2 < 0x110) {
      if (param_2 == 0x10f) {
        pIVar17 = (this->ActiveContext).Object;
        local_90 = &this->ActiveContext;
        if (pIVar17 != (ITextInputMethodContext *)0x0) {
          pTVar4 = (this->ActiveContext).SharedReferenceCount.ReferenceController;
          local_78.Object = pIVar17;
          local_78.WeakReferenceCount.ReferenceController = pTVar4;
          if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
            pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                      ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                                     *)&this->ContextToInternalContextMap,&local_78);
          }
          else {
            LOCK();
            pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
            UNLOCK();
            pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                      ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                                     *)&this->ContextToInternalContextMap,&local_78);
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              local_e0 = pFVar16;
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
          local_e0 = pFVar16;
          if ((pFVar16->IMMContext).IsComposing == false) {
            BeginIMMComposition(this);
          }
          local_d8 = (FName)ImmGetContext((HWND)param_1);
          UpdateIMMWindowPositions(this,(HIMC__ *)local_d8);
          local_b8 = (ulonglong)(uVar13 & 8);
          pFVar21 = (FScriptContainerElement *)(ulonglong)(uVar13 & 0x800);
          local_88.StatData.Pad._0_4_ = uVar13 & 0x4000;
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_b0._0_4_ = uVar13 & 0x80;
          local_b0.s.HighPart = 0;
          local_48.Data.AllocatorInstance.Data = pFVar21;
          if (param_4 == 0) {
            CancelIMMComposition(this);
          }
          this_00 = &this->ActiveContext;
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            local_c8 = 0;
            local_cc = 0;
            local_d0 = 1;
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
            (**(code **)((longlong)*pIVar17 + 0x20))(pIVar17,&local_c8,&local_cc,&local_d0);
            ::`anonymous_namespace'::GetIMMStringAsFString(&local_68,(HIMC__ *)local_d8,0x800);
            if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
            (**(code **)((longlong)*pIVar17 + 0x38))
                      (pIVar17,(pFVar16->IMMContext).CompositionBeginIndex,
                       (pFVar16->IMMContext).CompositionLength,&local_68);
            if ((pFVar16->IMMContext).IsDeactivating == false) {
              pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
              iVar10 = local_68.Data.ArrayNum + -1 + (pFVar16->IMMContext).CompositionBeginIndex;
              if (local_68.Data.ArrayNum == 0) {
                iVar10 = (pFVar16->IMMContext).CompositionBeginIndex;
              }
            }
            else {
              pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
              iVar10 = local_c8;
            }
            (**(code **)((longlong)*pIVar17 + 0x28))(pIVar17,iVar10);
            EndIMMComposition(this);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          this_03 = local_90;
          if (local_b8 != 0) {
            ::`anonymous_namespace'::GetIMMStringAsFString(&local_a8,(HIMC__ *)local_d8,8);
            if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            iVar10 = local_a8.Data.ArrayNum + -1;
            if (local_a8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            if ((iVar10 == 0) &&
               (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)) {
              CancelIMMComposition(this);
            }
            local_c4 = 0;
            local_e8[0] = 0;
            local_b8 = CONCAT44(local_b8._4_4_,1);
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
            (**(code **)((longlong)*pIVar17 + 0x20))(pIVar17,&local_c4,local_e8,&local_b8);
            pFVar20 = pFVar16;
            if (local_e8[0] != 0) {
              pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_00);
              pcVar5 = *(code **)((longlong)*pIVar17 + 0x38);
              ::FString::FString(&local_48,L"");
              (*pcVar5)(pIVar17,local_c4,local_e8[0],&local_48);
              pFVar20 = local_e0;
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
                pFVar20 = local_e0;
              }
            }
            if ((pFVar20->IMMContext).IsComposing == false) {
              BeginIMMComposition(this);
            }
            this_03 = local_90;
            pFVar16 = local_e0;
            iVar10 = (pFVar20->IMMContext).CompositionBeginIndex;
            uVar13 = local_a8.Data.ArrayNum - 1;
            if (local_a8.Data.ArrayNum == 0) {
              uVar13 = 0;
            }
            (local_e0->IMMContext).CompositionLength = uVar13;
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(local_90);
            (**(code **)((longlong)*pIVar17 + 0x68))
                      (pIVar17,(pFVar16->IMMContext).CompositionBeginIndex,
                       (pFVar16->IMMContext).CompositionLength);
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_03);
            (**(code **)((longlong)*pIVar17 + 0x38))(pIVar17,iVar10);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          if ((local_88.StatData.Pad == (uchar  [8])0x0) && (local_b0.QuadPart != 0)) {
            LVar12 = ImmGetCompositionStringW((HIMC)local_d8,0x80,(LPVOID)0x0,0);
            if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            pIVar17 = TSharedPtr<ITextInputMethodContext,1>::operator->(this_03);
            (**(code **)((longlong)*pIVar17 + 0x28))
                      (pIVar17,(pFVar16->IMMContext).CompositionBeginIndex + (int)(short)LVar12,0,1)
            ;
          }
          ImmReleaseContext((HWND)param_1,(HIMC)local_d8);
          if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
          }
        }
        param_2 = 0x10f;
        goto LAB_1423f714a;
      }
      if ((param_2 == 0x50) || (param_2 == 0x51)) {
        DVar11 = ImmGetProperty((HKL)param_4,4);
        this->IMMProperties = DVar11;
      }
      else if (param_2 == 0x10d) {
        if (((this->ActiveContext).Object != (ITextInputMethodContext *)0x0) &&
           (BeginIMMComposition(this), 5 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
        param_2 = 0x10d;
      }
      else if (param_2 == 0x10e) {
        if (((this->ActiveContext).Object != (ITextInputMethodContext *)0x0) &&
           (EndIMMComposition(this), 5 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
        param_2 = 0x10e;
      }
      else {
LAB_1423f7652:
        if (2 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
      }
    }
    else if (param_2 == 0x281) {
      if ((this->ActiveContext).Object != (ITextInputMethodContext *)0x0) {
        if ((param_3 != 0) && ((this->IMMProperties & 0x30000) == 0x10000)) {
          param_4 = (long64)(uVar13 & 0x7fffffff);
        }
        if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
      }
      param_2 = 0x281;
    }
    else if (param_2 == 0x282) {
      param_2 = 0x282;
    }
    else {
      if (param_2 == 0x286) {
        if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
        }
        goto LAB_1423f771e;
      }
      if (param_2 != 0x288) goto LAB_1423f7652;
      param_2 = 0x288;
    }
    LVar18 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
    uVar13 = IntCastChecked<int,__int64>(LVar18);
    uVar22 = (ulonglong)uVar13;
  }
  else {
LAB_1423f714a:
    uVar22 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
    if ((uVar22 != (longlong)(int)uVar22) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9))
    {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
  }
LAB_1423f771e:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_88.StatData.Pad = (uchar  [8])(local_b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_88);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (int)uVar22;
}

// RegisterContext @ 1423fe180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ITextInputMethodChangeNotifier,1> * __thiscall
FWindowsTextInputMethodSystem::RegisterContext
          (FWindowsTextInputMethodSystem *this,
          TSharedPtr<ITextInputMethodChangeNotifier,1> *__return_storage_ptr__,
          TSharedRef<ITextInputMethodContext,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  ITfThreadMgr *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ITextInputMethodChangeNotifier IVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsRegisterContext> FVar16;
  undefined8 *puVar17;
  TSharedPtr<ITextInputMethodChangeNotifier,1> *pTVar18;
  ITfDocumentMgr *pIVar19;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar20;
  ITextInputMethodChangeNotifier *pIVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  FStatMessage *pFVar24;
  FNameEntryId FVar25;
  uint uVar26;
  FName FVar27;
  longlong lVar28;
  undefined1 auStackY_2178 [32];
  TKeyInitializer<TWeakPtr<ITextInputMethodContext,1>_&&> local_2118;
  FColor_u_0 local_2110 [2];
  FName local_2108;
  FName local_2100;
  ITextInputMethodContext **local_20f0;
  FWindowsTextInputMethodSystem *local_20e8;
  LARGE_INTEGER local_20e0;
  TSharedRef<ITextInputMethodContext,1> *local_20d8;
  LARGE_INTEGER local_20d0;
  LARGE_INTEGER local_20c8;
  LARGE_INTEGER local_20c0;
  LARGE_INTEGER local_20b8;
  ITextInputMethodContext *local_20b0;
  TReferenceControllerBase<1> *local_20a8;
  FStatMessage local_20a0;
  FStatMessage local_2090;
  FStatMessage local_2080;
  FStatMessage local_2070;
  FStatMessage local_2060;
  FName local_2050;
  wchar_t local_2048 [1024];
  wchar_t local_1848 [1024];
  wchar_t local_1048 [1024];
  wchar_t local_848 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1423fe1a2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2178;
  FVar16 = StatPtr_STAT_IMEWindowsRegisterContext;
  local_20e8 = this;
  local_20d8 = param_1;
  if (StatPtr_STAT_IMEWindowsRegisterContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsRegisterContext>)0x0) {
    pFVar15 = ::FName::FName(&local_2050,"STAT_IMEWindowsRegisterContext");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsRegisterContext>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsRegisterContext,
                        *pFVar15,L"IME RegisterContext","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar16;
  bVar10 = false;
  bVar12 = false;
  local_2100.ComparisonIndex.Value = 0;
  local_2100.Number = 0;
  FVar25 = FVar27.ComparisonIndex.Value;
  uVar26 = FVar27.Number;
  if ((FVar25.Value == 0) && (uVar26 == 0)) {
LAB_1423fe2e3:
    bVar11 = false;
    FVar27 = local_2100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2110[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2108.ComparisonIndex.Value = FVar25.Value;
        local_2108.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2108,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x2ee);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1423fe2e3;
    local_2118.Key._0_4_ = FVar25.Value;
    local_2118.Key._4_4_ = uVar26;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar11 = true;
  }
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  local_20b0 = param_1->Object;
  local_20a8 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20a8->WeakReferenceCount = (atomic<int>)((int)local_20a8->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_20f0 = &local_20b0;
  TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakPtr<ITextInputMethodContext,1>_&&>_>
            ((TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
              *)&this->ContextToInternalContextMap,&local_2118,(bool *)&local_20f0);
  lVar28 = (longlong)(int)local_2118.Key._0_4_ * 0x38 +
           *(longlong *)&this->ContextToInternalContextMap;
  if (local_20a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_20a8->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_20a8->_padding_ + 8))(local_20a8,1);
    }
  }
  puVar17 = ::operator_new(0x80);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar17 + 2) = 1;
    *puVar17 = &FTextStoreACP::_vftable__for__ITextStoreACP__;
    puVar17[1] = &FTextStoreACP::_vftable__for__ITfContextOwnerCompositionSink__;
    puVar17[3] = param_1->Object;
    pTVar23 = (param_1->SharedReferenceCount).ReferenceController;
    puVar17[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar17[5] = 0;
    puVar17[6] = 0;
    *(undefined4 *)(puVar17 + 7) = 0;
    *(undefined1 *)((longlong)puVar17 + 0x3c) = 0;
    puVar17[8] = 0;
    puVar17[9] = 0;
    *(undefined4 *)(puVar17 + 10) = 0;
    puVar17[0xb] = 0;
    puVar17[0xc] = 0;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0;
    *(undefined4 *)(puVar17 + 0xf) = 0;
  }
  if (*(longlong **)(lVar28 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar28 + 0x18) + 0x10))();
  }
  *(undefined8 **)(lVar28 + 0x18) = puVar17;
  if (((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
    return pTVar18;
  }
  pIVar4 = (this->TSFThreadManager).RawPointer;
  pcVar9 = *(code **)((longlong)*pIVar4 + 0x28);
  if ((*(longlong *)(lVar28 + 0x18) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
    return pTVar18;
  }
  iVar14 = (*pcVar9)(pIVar4,*(longlong *)(lVar28 + 0x18) + 0x60);
  FVar25 = FVar27.ComparisonIndex.Value;
  uVar26 = FVar27.Number;
  if (-1 < iVar14) {
    if ((*(longlong *)(lVar28 + 0x18) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawPointer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                            ,0x9f,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
      return pTVar18;
    }
    if (*(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x60) != 0) {
      if ((*(longlong *)(lVar28 + 0x18) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
        return pTVar18;
      }
      lVar5 = *(longlong *)(lVar28 + 0x18);
      if ((*(longlong *)(lVar5 + 0x60) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
        return pTVar18;
      }
      plVar6 = *(longlong **)(lVar5 + 0x60);
      pcVar9 = *(code **)(*plVar6 + 0x18);
      if ((*(longlong *)(lVar28 + 0x18) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
        return pTVar18;
      }
      if ((*(longlong *)(lVar28 + 0x18) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawPointer != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                              ,0x9f,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
        return pTVar18;
      }
      iVar14 = (*pcVar9)(plVar6,local_20e8->TSFClientId,0);
      if (-1 < iVar14) {
        if ((*(longlong *)(lVar28 + 0x18) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawPointer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                ,0x9f,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
          return pTVar18;
        }
        if (*(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x68) != 0) {
          if ((*(longlong *)(lVar28 + 0x18) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
            return pTVar18;
          }
          pIVar19 = TComPtr<ITfDocumentMgr>::operator->
                              ((TComPtr<ITfDocumentMgr> *)(*(longlong *)(lVar28 + 0x18) + 0x60));
          pcVar9 = *(code **)((longlong)*pIVar19 + 0x20);
          if ((*(longlong *)(lVar28 + 0x18) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawPointer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                  ,0x9f,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
            return pTVar18;
          }
          iVar14 = (*pcVar9)(pIVar19,*(undefined8 *)(*(longlong *)(lVar28 + 0x18) + 0x68));
          if (iVar14 < 0) {
            FWindowsPlatformMisc::GetSystemErrorMessage(local_1848,0x400,iVar14);
            if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            if (*(longlong **)(lVar28 + 0x18) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar28 + 0x18) + 0x10))();
              *(undefined8 *)(lVar28 + 0x18) = 0;
            }
            __return_storage_ptr__->Object = (ITextInputMethodChangeNotifier *)0x0;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            if (bVar12) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar10) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar11) {
              return __return_storage_ptr__;
            }
            if (FVar27 == (FName)0x0) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::bPrimaryDisableForever != false) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::TlsSlot == 0xffffffff) {
              return __return_storage_ptr__;
            }
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              pFVar20 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(pFVar20);
            }
            if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
              return __return_storage_ptr__;
            }
            local_20a0.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
            local_20a0.NameAndInfo.Index.Value = FVar25.Value;
            QueryPerformanceCounter(&local_20e0);
            local_20a0.StatData.Pad[4] = '\0';
            local_20a0.StatData.Pad[5] = '\0';
            local_20a0.StatData.Pad[6] = '\0';
            local_20a0.StatData.Pad[7] = '\0';
            local_20a0.StatData.Pad[0] = local_20e0.s.LowPart._0_1_;
            local_20a0.StatData.Pad[1] = local_20e0.s.LowPart._1_1_;
            local_20a0.StatData.Pad[2] = local_20e0.s.LowPart._2_1_;
            local_20a0.StatData.Pad[3] = local_20e0.s.LowPart._3_1_;
            pFVar24 = &local_20a0;
          }
          else {
            if ((*(longlong *)(lVar28 + 0x18) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
              return pTVar18;
            }
            plVar6 = (longlong *)(*(longlong *)(lVar28 + 0x18) + 0x70);
            if ((*(longlong *)(lVar28 + 0x18) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
              return pTVar18;
            }
            plVar7 = (longlong *)*plVar6;
            puVar17 = *(undefined8 **)(*(longlong *)(lVar28 + 0x18) + 0x68);
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x10))();
              *plVar6 = 0;
            }
            pTVar23 = (TReferenceControllerBase<1> *)0x0;
            iVar14 = (**(code **)*puVar17)(puVar17,&IID_ITfContextOwnerCompositionServices);
            if (-1 < iVar14) {
              if ((*(longlong *)(lVar28 + 0x18) == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RawPointer != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                      ,0x9f,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
                return pTVar18;
              }
              if (*(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x70) != 0) {
                if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
                }
                pIVar21 = ::operator_new(0x10);
                if (pIVar21 == (ITextInputMethodChangeNotifier *)0x0) {
                  pIVar21 = (ITextInputMethodChangeNotifier *)0x0;
                }
                else {
                  *pIVar21 = (ITextInputMethodChangeNotifier)
                             &FTextInputMethodChangeNotifier::_vftable_;
                  IVar8 = *(ITextInputMethodChangeNotifier *)(lVar28 + 0x18);
                  pIVar21[1] = IVar8;
                  if (IVar8 != (ITextInputMethodChangeNotifier)0x0) {
                    (**(code **)(*(longlong *)IVar8 + 8))();
                  }
                }
                __return_storage_ptr__->Object = pIVar21;
                pTVar22 = ::operator_new(0x18);
                if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
                  pTVar22->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar22->_padding_ =
                       (longlong)
                       &SharedPointerInternals::
                        TReferenceControllerWithDeleter<FTextInputMethodChangeNotifier,SharedPointerInternals::DefaultDeleter<`anonymous_namespace'::FTextInputMethodChangeNotifier>,1>
                        ::_vftable_;
                  pTVar22->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar22[1]._padding_ = (longlong)pIVar21;
                  pTVar23 = pTVar22;
                }
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar23;
                if (bVar12) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar10) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if (!bVar11) {
                  return __return_storage_ptr__;
                }
                if (FVar27 == (FName)0x0) {
                  return __return_storage_ptr__;
                }
                if (FThreadStats::bPrimaryDisableForever != false) {
                  return __return_storage_ptr__;
                }
                if (FThreadStats::TlsSlot == 0xffffffff) {
                  return __return_storage_ptr__;
                }
                this_00 = TlsGetValue(FThreadStats::TlsSlot);
                if (this_00 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  this_00 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
                  return __return_storage_ptr__;
                }
                local_2090.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
                local_2090.NameAndInfo.Index.Value = FVar25.Value;
                QueryPerformanceCounter(&local_20d0);
                local_2090.StatData.Pad[4] = '\0';
                local_2090.StatData.Pad[5] = '\0';
                local_2090.StatData.Pad[6] = '\0';
                local_2090.StatData.Pad[7] = '\0';
                local_2090.StatData.Pad[0] = local_20d0.s.LowPart._0_1_;
                local_2090.StatData.Pad[1] = local_20d0.s.LowPart._1_1_;
                local_2090.StatData.Pad[2] = local_20d0.s.LowPart._2_1_;
                local_2090.StatData.Pad[3] = local_20d0.s.LowPart._3_1_;
                pFVar24 = &local_2090;
                goto LAB_1423fecc4;
              }
            }
            FWindowsPlatformMisc::GetSystemErrorMessage(local_2048,0x400,iVar14);
            if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            if ((*(longlong *)(lVar28 + 0x18) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RawPointer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                                    ,0x9f,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              pTVar18 = (TSharedPtr<ITextInputMethodChangeNotifier,1> *)(*pcVar9)();
              return pTVar18;
            }
            pIVar19 = TComPtr<ITfDocumentMgr>::operator->
                                ((TComPtr<ITfDocumentMgr> *)(*(longlong *)(lVar28 + 0x18) + 0x60));
            iVar14 = (**(code **)((longlong)*pIVar19 + 0x28))(pIVar19,1);
            if ((iVar14 < 0) &&
               (FWindowsPlatformMisc::GetSystemErrorMessage(local_2048,0x400,iVar14),
               1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
            }
            if (*(longlong **)(lVar28 + 0x18) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar28 + 0x18) + 0x10))();
              *(undefined8 *)(lVar28 + 0x18) = 0;
            }
            __return_storage_ptr__->Object = (ITextInputMethodChangeNotifier *)0x0;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            if (bVar12) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar10) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar11) {
              return __return_storage_ptr__;
            }
            if (FVar27 == (FName)0x0) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::bPrimaryDisableForever != false) {
              return __return_storage_ptr__;
            }
            if (FThreadStats::TlsSlot == 0xffffffff) {
              return __return_storage_ptr__;
            }
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              pFVar20 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(pFVar20);
            }
            if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
              return __return_storage_ptr__;
            }
            local_2080.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
            local_2080.NameAndInfo.Index.Value = FVar25.Value;
            QueryPerformanceCounter(&local_20c8);
            local_2080.StatData.Pad[4] = '\0';
            local_2080.StatData.Pad[5] = '\0';
            local_2080.StatData.Pad[6] = '\0';
            local_2080.StatData.Pad[7] = '\0';
            local_2080.StatData.Pad[0] = local_20c8.s.LowPart._0_1_;
            local_2080.StatData.Pad[1] = local_20c8.s.LowPart._1_1_;
            local_2080.StatData.Pad[2] = local_20c8.s.LowPart._2_1_;
            local_2080.StatData.Pad[3] = local_20c8.s.LowPart._3_1_;
            pFVar24 = &local_2080;
          }
          goto LAB_1423fecc4;
        }
      }
      FWindowsPlatformMisc::GetSystemErrorMessage(local_1048,0x400,iVar14);
      if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
      if (*(longlong **)(lVar28 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar28 + 0x18) + 0x10))();
        *(undefined8 *)(lVar28 + 0x18) = 0;
      }
      __return_storage_ptr__->Object = (ITextInputMethodChangeNotifier *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar11) {
        return __return_storage_ptr__;
      }
      if (FVar27 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_2070.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
      local_2070.NameAndInfo.Index.Value = FVar25.Value;
      QueryPerformanceCounter(&local_20c0);
      local_2070.StatData.Pad[4] = '\0';
      local_2070.StatData.Pad[5] = '\0';
      local_2070.StatData.Pad[6] = '\0';
      local_2070.StatData.Pad[7] = '\0';
      local_2070.StatData.Pad[0] = local_20c0.s.LowPart._0_1_;
      local_2070.StatData.Pad[1] = local_20c0.s.LowPart._1_1_;
      local_2070.StatData.Pad[2] = local_20c0.s.LowPart._2_1_;
      local_2070.StatData.Pad[3] = local_20c0.s.LowPart._3_1_;
      pFVar24 = &local_2070;
      goto LAB_1423fecc4;
    }
  }
  FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,iVar14);
  if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  if (*(longlong **)(lVar28 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar28 + 0x18) + 0x10))();
    *(undefined8 *)(lVar28 + 0x18) = 0;
  }
  __return_storage_ptr__->Object = (ITextInputMethodChangeNotifier *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar11) {
    return __return_storage_ptr__;
  }
  if (FVar27 == (FName)0x0) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return __return_storage_ptr__;
  }
  this_00 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_00 == (FThreadStats *)0x0) {
    pFVar20 = FThreadStatsPool::Get();
    this_00 = FThreadStatsPool::GetFromPool(pFVar20);
  }
  if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
    return __return_storage_ptr__;
  }
  local_2060.NameAndInfo.Number = uVar26 & 0xffff6fff | 0x6000;
  local_2060.NameAndInfo.Index.Value = FVar25.Value;
  QueryPerformanceCounter(&local_20b8);
  local_2060.StatData.Pad[4] = '\0';
  local_2060.StatData.Pad[5] = '\0';
  local_2060.StatData.Pad[6] = '\0';
  local_2060.StatData.Pad[7] = '\0';
  local_2060.StatData.Pad[0] = local_20b8.s.LowPart._0_1_;
  local_2060.StatData.Pad[1] = local_20b8.s.LowPart._1_1_;
  local_2060.StatData.Pad[2] = local_20b8.s.LowPart._2_1_;
  local_2060.StatData.Pad[3] = local_20b8.s.LowPart._3_1_;
  pFVar24 = &local_2060;
LAB_1423fecc4:
  FThreadStats::AddStatMessage(this_00,pFVar24);
  piVar2 = &this_00->ScopeCount;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// ShouldDrawIMMCompositionString @ 142406370

bool __thiscall
FWindowsTextInputMethodSystem::ShouldDrawIMMCompositionString(FWindowsTextInputMethodSystem *this)

{
  return (this->IMMProperties & 0x30000) == 0x10000;
}

// Terminate @ 142408a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsTextInputMethodSystem::Terminate(FWindowsTextInputMethodSystem *this)

{
  ITfThreadMgr *pIVar1;
  FTSFActivationProxy *pFVar2;
  ITfDocumentMgr *pIVar3;
  ITfInputProcessorProfiles *pIVar4;
  ITfInputProcessorProfileMgr *pIVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  undefined1 auStack_2048 [32];
  longlong *local_2028 [2];
  wchar_t local_2018 [1024];
  wchar_t local_1818 [1024];
  wchar_t local_1018 [1024];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2048;
  ImmDestroyContext((HIMC)this->IMMContextId);
  pIVar1 = (this->TSFThreadManager).RawPointer;
  local_2028[0] = (longlong *)0x0;
  iVar9 = (**(code **)*pIVar1)(pIVar1,&IID_ITfSource,local_2028);
  if ((iVar9 < 0) || (local_2028[0] == (longlong *)0x0)) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_2018,0x400,iVar9);
    if (1 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
    }
    if (local_2028[0] == (longlong *)0x0) goto LAB_142408c74;
  }
  pFVar2 = (this->TSFActivationProxy).RawPointer;
  if (pFVar2 != (FTSFActivationProxy *)0x0) {
    if (pFVar2->TSFLanguageCookie != 0xffffffff) {
      if ((local_2028[0] == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar7 = local_2028[0];
      pcVar6 = *(code **)(*local_2028[0] + 0x20);
      if (((this->TSFActivationProxy).RawPointer == (FTSFActivationProxy *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (*pcVar6)(plVar7,((this->TSFActivationProxy).RawPointer)->TSFLanguageCookie);
      if ((iVar9 < 0) &&
         (FWindowsPlatformMisc::GetSystemErrorMessage(local_1818,0x400,iVar9),
         1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
    }
    if (((this->TSFActivationProxy).RawPointer == (FTSFActivationProxy *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->TSFActivationProxy).RawPointer)->TSFProfileCookie != 0xffffffff) {
      if ((local_2028[0] == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar7 = local_2028[0];
      pcVar6 = *(code **)(*local_2028[0] + 0x20);
      if (((this->TSFActivationProxy).RawPointer == (FTSFActivationProxy *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (*pcVar6)(plVar7,((this->TSFActivationProxy).RawPointer)->TSFProfileCookie);
      if ((iVar9 < 0) &&
         (FWindowsPlatformMisc::GetSystemErrorMessage(local_1018,0x400,iVar9),
         1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
      }
    }
  }
LAB_142408c74:
  pFVar2 = (this->TSFActivationProxy).RawPointer;
  if (pFVar2 != (FTSFActivationProxy *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x10))();
    (this->TSFActivationProxy).RawPointer = (FTSFActivationProxy *)0x0;
  }
  if (((this->TSFThreadManager).RawPointer == (ITfThreadMgr *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (**(code **)((longlong)*(this->TSFThreadManager).RawPointer + 0x20))();
  if ((iVar9 < 0) &&
     (FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar9),
     1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pIVar1 = (this->TSFThreadManager).RawPointer;
  if (pIVar1 != (ITfThreadMgr *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
    (this->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
  }
  pIVar3 = (this->TSFDisabledDocumentManager).RawPointer;
  if (pIVar3 != (ITfDocumentMgr *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
    (this->TSFDisabledDocumentManager).RawPointer = (ITfDocumentMgr *)0x0;
  }
  pIVar4 = (this->TSFInputProcessorProfiles).RawPointer;
  if (pIVar4 != (ITfInputProcessorProfiles *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
    (this->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
  }
  pIVar5 = (this->TSFInputProcessorProfileManager).RawPointer;
  if (pIVar5 != (ITfInputProcessorProfileMgr *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
    (this->TSFInputProcessorProfileManager).RawPointer = (ITfInputProcessorProfileMgr *)0x0;
  }
  if (local_2028[0] != (longlong *)0x0) {
    (**(code **)(*local_2028[0] + 0x10))();
  }
  return;
}

// UnregisterContext @ 14240b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsTextInputMethodSystem::UnregisterContext
          (FWindowsTextInputMethodSystem *this,TSharedRef<ITextInputMethodContext,1> *param_1)

{
  int *piVar1;
  atomic<int> aVar2;
  ITextInputMethodContext *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTextStoreACP *pFVar5;
  ITfDocumentMgr *pIVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IMEWindowsUnregisterContext> FVar15;
  FInternalContext *pFVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  atomic<int> *paVar17;
  FName FVar18;
  undefined1 auStackY_928 [32];
  int local_8c8;
  FColor_u_0 local_8c0 [2];
  FName local_8b8;
  TWeakPtr<ITextInputMethodContext_const_,1> local_8b0;
  TWeakPtr<ITextInputMethodContext_const_,1> local_8a0;
  FName local_890;
  LARGE_INTEGER local_880;
  FStatMessage local_878;
  TWeakPtr<ITextInputMethodContext_const_,1> local_868;
  FName local_858 [2];
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_928;
  FVar15 = StatPtr_STAT_IMEWindowsUnregisterContext;
  if (StatPtr_STAT_IMEWindowsUnregisterContext ==
      (FThreadSafeStaticStat<FStat_STAT_IMEWindowsUnregisterContext>)0x0) {
    pFVar14 = ::FName::FName(local_858,"STAT_IMEWindowsUnregisterContext");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IMEWindowsUnregisterContext>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IMEWindowsUnregisterContext,
                        *pFVar14,L"IME UnregisterContext","STATGROUP_IMEWindows","STATCAT_Advanced",
                        L"IME Windows",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_890.ComparisonIndex.Value = 0;
  local_890.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_14240b4b1:
    bVar9 = false;
    FVar18 = local_890;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_8c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_8c0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_8b8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_8b8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_8b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                   ,0x32e);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14240b4b1;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar9 = true;
  }
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  pIVar3 = (this->ActiveContext).Object;
  if (((pIVar3 != (ITextInputMethodContext *)0x0) && (pIVar3 == param_1->Object)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveContext != Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                          ,0x333,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_8b0.Object = param_1->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar17 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    paVar17 = &pTVar4->WeakReferenceCount;
  }
  uVar12 = ((uint)((ulonglong)local_8b0.Object >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_8b0.Object >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  local_8b0.WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14240b59e:
    local_8c8 = TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                          ((TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                            *)&this->ContextToInternalContextMap,uVar12,&local_8b0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14240b5f6;
  }
  else {
    LOCK();
    aVar2 = *paVar17;
    *paVar17 = (atomic<int>)((int)*paVar17 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_14240b59e;
    (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    local_8c8 = TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                          ((TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
                            *)&this->ContextToInternalContextMap,uVar12,&local_8b0);
  }
  LOCK();
  paVar17 = &pTVar4->WeakReferenceCount;
  aVar2 = *paVar17;
  *paVar17 = (atomic<int>)((int)*paVar17 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
  }
  LOCK();
  paVar17 = &pTVar4->WeakReferenceCount;
  aVar2 = *paVar17;
  *paVar17 = (atomic<int>)((int)*paVar17 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
  }
LAB_14240b5f6:
  if ((local_8c8 == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContextToInternalContextMap.Contains(Context)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsTextInputMethodSystem.cpp"
                          ,0x335,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_8a0.Object = param_1->Object;
  local_8a0.WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_8a0);
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    pFVar16 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
              ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                             *)&this->ContextToInternalContextMap,&local_8a0);
    LOCK();
    paVar17 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar17;
    *paVar17 = (atomic<int>)((int)*paVar17 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if (((pFVar16->TSFContext).RawPointer == (FTextStoreACP *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (pFVar16->TSFContext).RawPointer;
  if (((pFVar5->TSFDocumentManager).RawPointer == (ITfDocumentMgr *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pIVar6 = (pFVar5->TSFDocumentManager).RawPointer;
  iVar13 = (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,1);
  if ((iVar13 < 0) &&
     (FWindowsPlatformMisc::GetSystemErrorMessage(local_848,0x400,iVar13),
     1 < (byte)LogWindowsTextInputMethodSystem._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  local_868.Object = param_1->Object;
  local_868.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_868.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_868.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_868.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
  ::Remove((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
            *)&this->ContextToInternalContextMap,&local_868);
  if (5 < (byte)LogWindowsTextInputMethodSystem._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsTextInputMethodSystem);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_878.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_878.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_880);
      local_878.StatData.Pad[4] = '\0';
      local_878.StatData.Pad[5] = '\0';
      local_878.StatData.Pad[6] = '\0';
      local_878.StatData.Pad[7] = '\0';
      local_878.StatData.Pad[0] = local_880.s.LowPart._0_1_;
      local_878.StatData.Pad[1] = local_880.s.LowPart._1_1_;
      local_878.StatData.Pad[2] = local_880.s.LowPart._2_1_;
      local_878.StatData.Pad[3] = local_880.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_878);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateIMMProperty @ 14240bd30

void __thiscall
FWindowsTextInputMethodSystem::UpdateIMMProperty(FWindowsTextInputMethodSystem *this,HKL__ *param_1)

{
  DWORD DVar1;
  
  DVar1 = ImmGetProperty((HKL)param_1,4);
  this->IMMProperties = DVar1;
  return;
}

// UpdateIMMWindowPositions @ 14240bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsTextInputMethodSystem::UpdateIMMWindowPositions
          (FWindowsTextInputMethodSystem *this,HIMC__ *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  ITextInputMethodContext *pIVar6;
  code *pcVar7;
  bool bVar8;
  FInternalContext *pFVar9;
  HWND hWnd;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  double local_b8;
  double local_b0;
  TWeakPtr<ITextInputMethodContext_const_,1> local_a8;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  double local_80;
  tagCANDIDATEFORM local_78;
  tagRECT local_58;
  tagCOMPOSITIONFORM local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8.Object = (this->ActiveContext).Object;
  if (local_a8.Object != (ITextInputMethodContext *)0x0) {
    pTVar5 = (this->ActiveContext).SharedReferenceCount.ReferenceController;
    local_a8.WeakReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
               ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                              *)&this->ContextToInternalContextMap,&local_a8);
    }
    else {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      pFVar9 = TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
               ::FindChecked((TMapBase<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>_>
                              *)&this->ContextToInternalContextMap,&local_a8);
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    iVar3 = (pFVar9->IMMContext).CompositionBeginIndex;
    uVar4 = (pFVar9->IMMContext).CompositionLength;
    if (((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar6 = (this->ActiveContext).Object;
    local_c8 = local_88;
    (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,iVar3,uVar4,&local_b8);
    if (((this->ActiveContext).Object == (ITextInputMethodContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar6 = (this->ActiveContext).Object;
    (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,&local_98);
    if ((local_98 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    hWnd = (HWND)(**(code **)(*local_98 + 0xc0))();
    GetWindowRect(hWnd,&local_58);
    local_78.dwIndex = 0;
    local_78.dwStyle = 0x80;
    local_b8 = local_b8 - (double)local_58.left;
    local_78.ptCurrentPos.x = (LONG)local_b8;
    local_b0 = local_b0 - (double)local_58.top;
    local_78.ptCurrentPos.y = (LONG)local_b0;
    local_78.rcArea.bottom = (int)local_80 + local_78.ptCurrentPos.y;
    local_78.rcArea.left = local_78.ptCurrentPos.x;
    local_78.rcArea.top = local_78.ptCurrentPos.y;
    local_78.rcArea.right = local_78.ptCurrentPos.x;
    ImmSetCandidateWindow((HIMC)param_1,&local_78);
    local_48.ptCurrentPos.x = (LONG)local_b8;
    local_48.dwStyle = 2;
    local_48.ptCurrentPos.y = (LONG)(local_80 + local_b0);
    ImmSetCompositionWindow((HIMC)param_1,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  return;
}

