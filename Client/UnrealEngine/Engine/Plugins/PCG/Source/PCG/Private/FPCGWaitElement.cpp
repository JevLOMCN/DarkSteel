// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 1499c8f60

void __thiscall `FPCGWaitElement::ExecuteInternal'::__l24::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar3 = *(TReferenceControllerBase<1> **)this;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar5 = pTVar4->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pTVar6 = pTVar4;
      pTVar8 = pTVar3;
      aVar2 = aVar5;
    } while (!bVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    pTVar7 = pTVar6;
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if ((pTVar8 != (TReferenceControllerBase<1> *)0x0) && (pTVar8[1]._padding_ != 0)) {
    *(undefined1 *)(pTVar8[1]._padding_ + 0x138) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// CanExecuteOnlyOnMainThread @ 1499da420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGWaitElement::CanExecuteOnlyOnMainThread(FPCGWaitElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 1499efc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGWaitElement::ExecuteInternal(FPCGWaitElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  UPCGNode *this_00;
  code *pcVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  UPCGSettings *pUVar12;
  FObjectPtr_u_0 FVar13;
  FPCGTaggedData *pFVar14;
  FPCGModule *this_01;
  TWeakPtr<FPCGContextHandle,1> *pTVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  FObjectPtr_u_0 local_res10;
  LARGE_INTEGER local_res18 [2];
  TWeakPtr<FPCGContextHandle,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  FPCGContextHandle *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined8 local_20;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId32,"FPCGWaitElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGWait.cpp"
               ,0x20);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId32);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGWait.cpp"
                         ,0x21,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar12 = UPCGNode::GetSettings(this_00), pUVar12 == (UPCGSettings *)0x0)) {
      pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWaitSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_res10._0_1_);
      if (pFVar14 != (FPCGTaggedData *)0x0) {
        local_res10 = (FObjectPtr_u_0)(pFVar14->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UPCGSettings *)local_res10.Handle == (UPCGSettings *)0x0) goto LAB_1499efd34;
          UE::GC::MarkAsReachable(local_res10.Handle);
        }
        if ((UPCGSettings *)local_res10.Handle != (UPCGSettings *)0x0) {
          pUVar11 = UPCGWaitSettings::StaticClass();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar11);
          FVar13 = local_res10;
          if (bVar9) goto LAB_1499efd3b;
        }
      }
    }
    else {
      pUVar12 = UPCGNode::GetSettings(this_00);
      FVar13.Handle = (UObject *)FPCGDataCollection::GetSettings(&param_1->InputData,pUVar12);
      if ((UPCGSettings *)FVar13.Handle != (UPCGSettings *)0x0) {
        pUVar11 = UPCGWaitSettings::StaticClass();
        iVar3 = (int)pUVar11->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(FVar13.Handle)->field_0x10 + 0x30) + (longlong)iVar3 * 8)
            == &pUVar11->_padding_)) goto LAB_1499efd3b;
      }
    }
LAB_1499efd34:
    FVar13.Handle = (UObject *)0x0;
  }
  else {
    pUVar11 = UPCGWaitSettings::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar11);
    if (bVar9) {
      FVar13 = (FObjectPtr_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      FVar13.Handle = (UObject *)0x0;
    }
  }
LAB_1499efd3b:
  if (((UPCGSettings *)FVar13.Handle == (UPCGSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGWait.cpp"
                         ,0x24,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  QueryPerformanceCounter(local_res18);
  uVar6 = GFrameCounterRenderThread;
  uVar5 = GFrameCounter;
  dVar18 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (param_1[1].InputData.bCancelExecutionOnEmpty == false) {
    param_1[1]._padding_ = (longlong)dVar18;
    param_1[1].InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)uVar5;
    uVar8 = GFrameCounterRenderThread;
    GFrameCounterRenderThread._0_4_ = (undefined4)uVar6;
    GFrameCounterRenderThread._4_4_ = SUB84(uVar6,4);
    uVar7 = GFrameCounterRenderThread._4_4_;
    param_1[1].InputData.TaggedData.ArrayNum = (undefined4)GFrameCounterRenderThread;
    GFrameCounterRenderThread = uVar8;
    param_1[1].InputData.TaggedData.ArrayMax = uVar7;
    param_1[1].InputData.bCancelExecutionOnEmpty = true;
  }
  bVar9 = (double)((UPCGSettings *)(FVar13.Handle + 5))->_padding_ <=
          dVar18 - (double)param_1[1]._padding_;
  uVar16 = uVar5 - (longlong)param_1[1].InputData.TaggedData.AllocatorInstance.Data;
  if ((char)((UPCGSettings *)(FVar13.Handle + 5))->_padding_ == '\0') {
    if ((!bVar9) && (uVar16 < (ulonglong)((UPCGSettings *)(FVar13.Handle + 5))->_padding_))
    goto LAB_1499efea5;
LAB_1499eff46:
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
    bVar9 = true;
  }
  else {
    if ((bVar9) && ((ulonglong)((UPCGSettings *)(FVar13.Handle + 5))->_padding_ <= uVar16)) {
LAB_1499efea5:
      if ((ulonglong)((UPCGSettings *)(FVar13.Handle + 5))->_padding_ <=
          uVar6 - *(longlong *)&param_1[1].InputData.TaggedData.ArrayNum) goto LAB_1499eff46;
    }
    param_1->bIsPaused = true;
    this_01 = FPCGModule::GetPCGModuleChecked();
    pTVar15 = FPCGContext::GetOrCreateHandle(param_1,&local_58);
    local_30 = pTVar15->Object;
    local_28 = (pTVar15->WeakReferenceCount).ReferenceController;
    (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar15->Object = (FPCGContextHandle *)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPCGWaitElement::ExecuteInternal'::`24'::<lambda_1>,0,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPCGWaitElement::ExecuteInternal'::__l24::<lambda_1>,void>::
                  Call;
    local_20 = 0;
    FPCGModule::ExecuteNextTick(this_01,(TFunction<void___cdecl(void)> *)local_48);
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) &&
         (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    bVar9 = false;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// IsCacheable @ 149a003c0

bool __thiscall FPCGWaitElement::IsCacheable(FPCGWaitElement *this,UPCGSettings *param_1)

{
  return false;
}

