// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 46

// FNiagaraDebugHud @ 149274ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDebugHud * __thiscall
FNiagaraDebugHud::FNiagaraDebugHud(FNiagaraDebugHud *this,UWorld *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  UWorld *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  undefined1 local_48 [16];
  undefined **local_38;
  FNiagaraDebugHud *local_30;
  undefined8 local_20;
  
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this->GlobalTotalRegistered = 0;
  this->GlobalTotalActive = 0;
  this->GlobalTotalScalability = 0;
  this->GlobalTotalEmitters = 0;
  this->GlobalTotalParticles = 0;
  this->GlobalTotalBytes = 0;
  this->GlobalTotalCulled = 0;
  this->GlobalTotalCulledByDistance = 0;
  this->GlobalTotalCulledByVisibility = 0;
  this->GlobalTotalCulledByInstanceCount = 0;
  this->GlobalTotalCulledByBudget = 0;
  this->GlobalTotalPlayerSystems = 0;
  (this->GlobalScalabiltiyKillCounts).Total = 0;
  (this->GlobalScalabiltiyKillCounts).Distance = 0;
  (this->GlobalScalabiltiyKillCounts).InstanceCounts = 0;
  (this->GlobalScalabiltiyKillCounts).Visibility = 0;
  (this->GlobalScalabiltiyKillCounts).GlobalBudget = 0;
  (this->LongestSystemPrettyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongestSystemPrettyName).Data.ArrayNum = 0;
  (this->LongestSystemPrettyName).Data.ArrayMax = 0;
  *(undefined8 *)&this->PerSystemDebugInfo = 0;
  *(undefined8 *)&(this->PerSystemDebugInfo).field_0x8 = 0;
  *(undefined8 *)&(this->PerSystemDebugInfo).field_0x20 = 0;
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x28 = 0;
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x34 = 0;
  *(undefined8 *)&(this->PerSystemDebugInfo).field_0x40 = 0;
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x48 = 0;
  (this->InWorldComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InWorldComponents).ArrayNum = 0;
  (this->InWorldComponents).ArrayMax = 0;
  *(undefined8 *)&this->ValidationErrors = 0;
  *(undefined8 *)&(this->ValidationErrors).field_0x8 = 0;
  *(undefined8 *)&(this->ValidationErrors).field_0x20 = 0;
  *(undefined4 *)&(this->ValidationErrors).field_0x28 = 0;
  *(undefined4 *)&(this->ValidationErrors).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValidationErrors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValidationErrors).field_0x34 = 0;
  *(undefined8 *)&(this->ValidationErrors).field_0x40 = 0;
  *(undefined4 *)&(this->ValidationErrors).field_0x48 = 0;
  *(undefined8 *)&this->GpuEmitterData = 0;
  *(undefined8 *)&(this->GpuEmitterData).field_0x8 = 0;
  *(undefined8 *)&(this->GpuEmitterData).field_0x20 = 0;
  *(undefined4 *)&(this->GpuEmitterData).field_0x28 = 0;
  *(undefined4 *)&(this->GpuEmitterData).field_0x2c = 0x80;
  *(undefined4 *)&(this->GpuEmitterData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GpuEmitterData).field_0x34 = 0;
  *(undefined8 *)&(this->GpuEmitterData).field_0x40 = 0;
  *(undefined4 *)&(this->GpuEmitterData).field_0x48 = 0;
  (this->StatsListener).Object = (FNiagaraDebugHUDStatsListener *)0x0;
  (this->StatsListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FNiagaraGpuProfilerListener::FNiagaraGpuProfilerListener(&this->GpuProfilerListener);
  (this->GpuResults).Object = (FNiagaraGpuFrameResults *)0x0;
  (this->GpuResults).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->GpuResultsGameFrameCounter = 0;
  (this->GpuTotalDispatches).LastFrameSeen = 0;
  (this->GpuTotalDispatches).SmoothedSetOnce = false;
  (this->GpuTotalDispatches).SmoothedFrameMax = 0;
  (this->GpuTotalDispatches).SmoothedTotalAvg = 0.0;
  (this->GpuTotalDispatches).CurrentCount = 0;
  (this->GpuTotalDispatches).CurrentFrameMax = 0;
  (this->GpuTotalDispatches).CurrentTotalSum = 0;
  (this->GpuTotalDispatches).CurrentFrameSum = 0;
  (this->GpuTotalMicroseconds).LastFrameSeen = 0;
  (this->GpuTotalMicroseconds).SmoothedSetOnce = false;
  (this->GpuTotalMicroseconds).SmoothedFrameMax = 0;
  (this->GpuTotalMicroseconds).SmoothedTotalAvg = 0.0;
  (this->GpuTotalMicroseconds).CurrentCount = 0;
  (this->GpuTotalMicroseconds).CurrentFrameMax = 0;
  (this->GpuTotalMicroseconds).CurrentTotalSum = 0;
  (this->GpuTotalMicroseconds).CurrentFrameSum = 0;
  *(undefined8 *)&this->GpuUsagePerSystem = 0;
  *(undefined8 *)&(this->GpuUsagePerSystem).field_0x8 = 0;
  *(undefined8 *)&(this->GpuUsagePerSystem).field_0x20 = 0;
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x28 = 0;
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x2c = 0x80;
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x34 = 0;
  *(undefined8 *)&(this->GpuUsagePerSystem).field_0x40 = 0;
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x48 = 0;
  *(undefined8 *)&this->GpuUsagePerEvent = 0;
  *(undefined8 *)&(this->GpuUsagePerEvent).field_0x8 = 0;
  *(undefined8 *)&(this->GpuUsagePerEvent).field_0x20 = 0;
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x28 = 0;
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x2c = 0x80;
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x34 = 0;
  *(undefined8 *)&(this->GpuUsagePerEvent).field_0x40 = 0;
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x48 = 0;
  *(undefined8 *)&this->Messages = 0;
  *(undefined8 *)&(this->Messages).field_0x8 = 0;
  *(undefined8 *)&(this->Messages).field_0x20 = 0;
  this->LastDrawTime = 0.0;
  this->DeltaSeconds = 0.0;
  *(undefined4 *)&(this->Messages).field_0x28 = 0;
  *(undefined4 *)&(this->Messages).field_0x2c = 0x80;
  *(undefined4 *)&(this->Messages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Messages).field_0x34 = 0;
  *(undefined8 *)&(this->Messages).field_0x40 = 0;
  *(undefined4 *)&(this->Messages).field_0x48 = 0;
  (this->Lines2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lines2D).ArrayNum = 0;
  (this->Lines2D).ArrayMax = 0;
  (this->Circles2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Circles2D).ArrayNum = 0;
  (this->Circles2D).ArrayMax = 0;
  (this->Boxes2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Boxes2D).ArrayNum = 0;
  (this->Boxes2D).ArrayMax = 0;
  this->AutoGraphTimeRange = 100.0;
  this->AutoGraphTimeRangeChangeMax = 100.0;
  this->AutoGraphTimeRangeChangedTime = 0.0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  ::FString::operator=(&this->LongestSystemPrettyName,L"NS_SomeBigLongNiagaraSystemName");
  if (NiagaraDebugLocal::GDebugDrawHandle.ID == 0) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)local_48);
    local_30 = (FNiagaraDebugHud *)&local_60;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[3] = DebugDrawCallback;
    }
    if (local_38._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
    }
    FVar3 = UDebugDrawService::Register
                      ((wchar_t *)&local_res8,
                       (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                        *)L"Particles");
                    /* WARNING: Load size is inaccurate */
    NiagaraDebugLocal::GDebugDrawHandle.ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)local_48);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_38._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  NiagaraDebugLocal::GDebugDrawHandleUsers = NiagaraDebugLocal::GDebugDrawHandleUsers + 1;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = 0;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,void,TSharedPtr<FNiagaraGpuFrameResults,1>_const_&>
       ::Call;
  local_30 = this;
  FNiagaraGpuProfilerListener::SetHandler
            (&this->GpuProfilerListener,
             (TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)> *)local_48);
  return this;
}

// ~FNiagaraDebugHud @ 14927a010

void __thiscall FNiagaraDebugHud::~FNiagaraDebugHud(FNiagaraDebugHud *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  NiagaraDebugLocal::GDebugDrawHandleUsers = NiagaraDebugLocal::GDebugDrawHandleUsers + -1;
  if (NiagaraDebugLocal::GDebugDrawHandleUsers == 0) {
    UDebugDrawService::Unregister(NiagaraDebugLocal::GDebugDrawHandle);
    NiagaraDebugLocal::GDebugDrawHandle.ID = 0;
  }
  pFVar1 = (this->Boxes2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Circles2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lines2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Messages).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Messages).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Messages);
  *(undefined4 *)&(this->GpuUsagePerEvent).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GpuUsagePerEvent).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GpuUsagePerEvent);
  *(undefined4 *)&(this->GpuUsagePerSystem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GpuUsagePerSystem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GpuUsagePerSystem);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GpuResults).SharedReferenceCount.ReferenceController);
  FNiagaraGpuProfilerListener::~FNiagaraGpuProfilerListener(&this->GpuProfilerListener);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatsListener).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->GpuEmitterData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GpuEmitterData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GpuEmitterData);
  *(undefined4 *)&(this->ValidationErrors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ValidationErrors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ValidationErrors);
  pFVar1 = (this->InWorldComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerSystemDebugInfo).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerSystemDebugInfo).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSystemDebugInfo);
  pFVar1 = (this->LongestSystemPrettyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14927c8d0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%d | %d");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927c9ee;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927c9ee:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927ca70

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%d | %d");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927cb8e;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927cb8e:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927cc10

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%d | %d");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927cd2e;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927cd2e:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927cdb0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%d | %d");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927cece;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927cece:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927cf50

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%d | %d");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927d06e;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927d06e:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927d0f0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalPlayerSystems);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927d209;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_14927d209:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927d290

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Avg).Time_GT;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927d3b3;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927d3b3:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927d440

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Avg).Time_GTOnly;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927d564;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927d564:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927d5f0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Max).Time_GT;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927d714;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927d714:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927d7a0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Avg).Time_RT;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927d8c4;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927d8c4:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927da50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FNiagaraGpuFrameResults,1> *param_1)

{
  uint *puVar1;
  ulong64 *puVar2;
  FNiagaraGpuFrameResults *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar9;
  UWorld *pUVar10;
  FNiagaraGpuComputeDispatchInterface *pFVar11;
  FGpuUsagePerEvent *pFVar12;
  UObject *this_00;
  UClass *pUVar13;
  UObject *pUVar14;
  FGpuUsagePerSystem *pFVar15;
  FGpuUsagePerEmitter *this_01;
  FGpuUsagePerStage *this_02;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTVar19;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTVar20;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTVar21;
  longlong lVar22;
  byte *pbVar23;
  int iVar24;
  FName *pFVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *local_208;
  char local_200;
  char cStack_1ff;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *local_1c8;
  char local_1c0;
  char cStack_1bf;
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *local_188;
  undefined2 local_180;
  longlong *local_178;
  undefined1 auStack_170 [16];
  uint uStack_160;
  uint uStack_15c;
  longlong local_158;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_150;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *local_148;
  undefined2 local_140;
  UObject *local_138;
  UObject *local_130;
  longlong local_128;
  byte *local_120;
  TReferenceControllerBase<1> *pTStack_118;
  undefined1 local_110 [32];
  longlong local_f0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_e8;
  undefined1 local_e0 [32];
  longlong local_c0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_b8;
  undefined1 local_b0 [32];
  longlong local_90;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  pUVar10 = (UWorld *)FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
  pFVar11 = FNiagaraGpuComputeDispatchInterface::Get(pUVar10);
  if ((param_1->Object == (FNiagaraGpuFrameResults *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = param_1->Object;
  if ((FNiagaraGpuComputeDispatchInterface *)pFVar3->OwnerContext == pFVar11) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    lVar22 = *(longlong *)this;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120 = *(byte **)(lVar22 + 0x188);
    pTStack_118 = *(TReferenceControllerBase<1> **)(lVar22 + 400);
    *(FNiagaraGpuFrameResults **)(lVar22 + 0x188) = pFVar3;
    *(TReferenceControllerBase<1> **)(lVar22 + 400) = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_118)
    ;
    *(ulong64 *)(*(longlong *)this + 0x198) = GFrameCounter;
    lVar22 = *(longlong *)this;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar24 = *(int *)(*(longlong *)(lVar22 + 0x188) + 0x18);
    if (*(longlong *)(lVar22 + 0x1a0) != *(longlong *)(*(longlong *)this + 0x198)) {
      iVar9 = *(int *)(lVar22 + 0x1b8);
      if (*(int *)(lVar22 + 0x1b8) < *(int *)(lVar22 + 0x1c0)) {
        iVar9 = *(int *)(lVar22 + 0x1c0);
      }
      *(longlong *)(lVar22 + 0x1a0) = *(longlong *)(*(longlong *)this + 0x198);
      uVar16 = *(int *)(lVar22 + 0x1b4) + 1;
      *(int *)(lVar22 + 0x1b8) = iVar9;
      *(undefined4 *)(lVar22 + 0x1c0) = 0;
      *(uint *)(lVar22 + 0x1b4) = uVar16;
      if ((*(byte *)(lVar22 + 0x1a8) == 0) || (0x1f < uVar16)) {
        *(byte *)(lVar22 + 0x1a8) = 0x1f < uVar16 | *(byte *)(lVar22 + 0x1a8);
        *(int *)(lVar22 + 0x1ac) = iVar9;
        *(float *)(lVar22 + 0x1b0) = (float)*(int *)(lVar22 + 0x1bc) / (float)uVar16;
        if (0x1f < uVar16) {
          *(undefined8 *)(lVar22 + 0x1b4) = 0;
          *(undefined4 *)(lVar22 + 0x1bc) = 0;
        }
      }
    }
    *(int *)(lVar22 + 0x1bc) = *(int *)(lVar22 + 0x1bc) + iVar24;
    *(int *)(lVar22 + 0x1c0) = *(int *)(lVar22 + 0x1c0) + iVar24;
    lVar22 = *(longlong *)this;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
              ((FSmoothedCounter<unsigned___int64> *)(lVar22 + 0x1c8),
               *(ulong64 *)(*(longlong *)this + 0x198),
               *(ulong64 *)(*(longlong *)(lVar22 + 0x188) + 0x20));
    lVar22 = *(longlong *)this;
    if ((*(longlong *)(lVar22 + 0x188) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_128 = *(longlong *)(lVar22 + 0x188);
    iVar24 = 1;
    local_res10 = *(uint *)(local_128 + 0x30);
    uVar18 = (ulonglong)(int)local_res10;
    pbVar23 = *(byte **)(local_128 + 0x28);
    pFVar25 = (FName *)(pbVar23 + 0x24);
    local_120 = pbVar23 + uVar18 * 0x38;
    while( true ) {
      pbVar7 = local_120;
      if (*(int *)(local_128 + 0x30) != (int)uVar18) {
        `TCheckedPointerIterator<FNiagaraGpuFrameResults::FDispatchResults,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pbVar23 == pbVar7) break;
      if ((pFVar25[-3].ComparisonIndex.Value == 0) && (pFVar25[-3].Number == 0)) {
        FVar5 = *pFVar25;
        lVar22 = *(longlong *)this;
        uVar16 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        pFVar12 = TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
                              *)(lVar22 + 0x250),uVar16 + FVar5.Number,pFVar25);
        if ((pFVar12->InstanceCount).LastFrameSeen != *(ulong64 *)(*(longlong *)this + 0x198)) {
          uVar16 = (pFVar12->InstanceCount).CurrentFrameMax;
          if (uVar16 < (pFVar12->InstanceCount).CurrentFrameSum) {
            uVar16 = (pFVar12->InstanceCount).CurrentFrameSum;
          }
          uVar17 = (pFVar12->InstanceCount).CurrentCount + 1;
          bVar8 = (pFVar12->InstanceCount).SmoothedSetOnce;
          (pFVar12->InstanceCount).LastFrameSeen = *(ulong64 *)(*(longlong *)this + 0x198);
          (pFVar12->InstanceCount).CurrentFrameMax = uVar16;
          (pFVar12->InstanceCount).CurrentFrameSum = 0;
          (pFVar12->InstanceCount).CurrentCount = uVar17;
          if ((bVar8 == false) || (0x1f < uVar17)) {
            (pFVar12->InstanceCount).SmoothedFrameMax = uVar16;
            (pFVar12->InstanceCount).SmoothedSetOnce = (bool)(0x1f < uVar17 | bVar8);
            (pFVar12->InstanceCount).SmoothedTotalAvg =
                 (float)(pFVar12->InstanceCount).CurrentTotalSum / (float)uVar17;
            if (0x1f < uVar17) {
              (pFVar12->InstanceCount).CurrentCount = 0;
              (pFVar12->InstanceCount).CurrentFrameMax = 0;
              (pFVar12->InstanceCount).CurrentTotalSum = 0;
            }
          }
        }
        puVar1 = &(pFVar12->InstanceCount).CurrentTotalSum;
        *puVar1 = *puVar1 + 1;
        puVar1 = &(pFVar12->InstanceCount).CurrentFrameSum;
        *puVar1 = *puVar1 + 1;
        lVar22 = *(longlong *)&pFVar25[1].Number;
        if ((pFVar12->Microseconds).LastFrameSeen != *(ulong64 *)(*(longlong *)this + 0x198)) {
          bVar8 = (pFVar12->Microseconds).SmoothedSetOnce;
          (pFVar12->Microseconds).LastFrameSeen = *(ulong64 *)(*(longlong *)this + 0x198);
          uVar18 = (pFVar12->Microseconds).CurrentFrameMax;
          if (uVar18 < (pFVar12->Microseconds).CurrentFrameSum) {
            uVar18 = (pFVar12->Microseconds).CurrentFrameSum;
          }
          uVar16 = (pFVar12->Microseconds).CurrentCount + 1;
          (pFVar12->Microseconds).CurrentFrameMax = uVar18;
          (pFVar12->Microseconds).CurrentFrameSum = 0;
          (pFVar12->Microseconds).CurrentCount = uVar16;
          if ((bVar8 == false) || (0x1f < uVar16)) {
            (pFVar12->Microseconds).SmoothedFrameMax = uVar18;
            (pFVar12->Microseconds).SmoothedSetOnce = (bool)(0x1f < uVar16 | bVar8);
            (pFVar12->Microseconds).SmoothedTotalAvg =
                 (float)(pFVar12->Microseconds).CurrentTotalSum / (float)uVar16;
            if (0x1f < uVar16) {
              (pFVar12->Microseconds).CurrentCount = 0;
              (pFVar12->Microseconds).CurrentFrameMax = 0;
              (pFVar12->Microseconds).CurrentTotalSum = 0;
            }
          }
        }
        puVar2 = &(pFVar12->Microseconds).CurrentTotalSum;
        *puVar2 = *puVar2 + lVar22;
        puVar2 = &(pFVar12->Microseconds).CurrentFrameSum;
        *puVar2 = *puVar2 + lVar22;
      }
      else {
        this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar25 + -3));
        if (this_00 != (UObject *)0x0) {
          pUVar13 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
          pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar13);
          if (pUVar14 != (UObject *)0x0) {
            lVar22 = *(longlong *)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar14);
            }
            local_res18.ObjectIndex = 0;
            local_res18.ObjectSerialNumber = 0;
            local_138 = pUVar14;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_138);
            pFVar15 = TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                      ::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
                                ((TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                                  *)(lVar22 + 0x200),
                                 local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                                 (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_res18);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&pFVar15->Microseconds,*(ulong64 *)(*(longlong *)this + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(this_00);
            }
            local_res20.ObjectIndex = 0;
            local_res20.ObjectSerialNumber = 0;
            local_130 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(this_00);
            }
            FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_130);
            this_01 = TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
                      ::FindOrAddImpl<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_>
                                ((TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
                                  *)&pFVar15->Emitters,
                                 local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                                 (TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr> *)&local_res20);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&this_01->Microseconds,*(ulong64 *)(*(longlong *)this + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                      (&this_01->InstanceCount,*(ulong64 *)(*(longlong *)this + 0x198),1);
            FVar5 = *pFVar25;
            uVar16 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            this_02 = TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,FNiagaraDebugHud::FGpuUsagePerStage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>_>
                                  *)&this_01->Stages,uVar16 + FVar5.Number,pFVar25);
            FNiagaraDebugHud::FSmoothedCounter<unsigned___int64>::Accumulate
                      (&this_02->Microseconds,*(ulong64 *)(*(longlong *)this + 0x198),
                       *(ulong64 *)&pFVar25[1].Number);
            FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                      (&this_02->InstanceCount,*(ulong64 *)(*(longlong *)this + 0x198),1);
            if ((*pbVar23 & 1) != 0) {
              FNiagaraDebugHud::FSmoothedCounter<unsigned_int>::Accumulate
                        (&pFVar15->InstanceCount,*(ulong64 *)(*(longlong *)this + 0x198),1);
            }
          }
        }
      }
      pbVar23 = pbVar23 + 0x38;
      pFVar25 = pFVar25 + 7;
      uVar18 = (ulonglong)local_res10;
    }
    pTVar19 = (TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
               *)(*(longlong *)this + 0x200);
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_110,pTVar19);
    auStack_230._0_8_ = local_110._8_8_;
    stack0xfffffffffffffdd8 = local_110._16_16_;
    local_218 = local_f0;
    pTStack_210 = pTStack_e8;
    local_200 = '\0';
    cStack_1ff = '\0';
    uVar18 = local_110._24_8_ >> 0x20;
    uVar16 = local_110._28_4_;
    local_208 = pTVar19;
    if ((int)uVar16 < *(int *)(local_110._16_8_ + 0x18)) {
      do {
        lVar22 = (longlong)(int)uVar18 * 200;
        if ((ulonglong)
            (*(longlong *)(*(longlong *)this + 0x198) -
            *(longlong *)(lVar22 + 0x38 + *(longlong *)local_110._0_8_)) < 0x20) {
          pTVar20 = (TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                     *)(*(longlong *)local_110._0_8_ + 0x70 + lVar22);
          TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_e0,pTVar20);
          local_140 = 0;
          stack0xfffffffffffffe98 = local_e0._16_16_;
          local_178 = (longlong *)local_e0._0_8_;
          auStack_170._0_8_ = local_e0._8_8_;
          local_158 = local_c0;
          pTStack_150 = pTStack_b8;
          uVar18 = local_e0._24_8_ >> 0x20;
          uVar16 = local_e0._28_4_;
          local_148 = pTVar20;
          if ((int)uVar16 < *(int *)(local_e0._16_8_ + 0x18)) {
            do {
              if ((ulonglong)
                  (*(longlong *)(*(longlong *)this + 0x198) -
                  *(longlong *)((longlong)(int)uVar16 * 0xc0 + 0x30 + *local_178)) < 0x20) {
                pTVar21 = (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                           *)((longlong)(int)uVar16 * 0xc0 + *local_178 + 0x68);
                TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                ::TIterator::TIterator((TIterator *)local_b0,pTVar21);
                local_180 = 0;
                stack0xfffffffffffffe58 = local_b0._16_16_;
                local_1b8 = (longlong *)local_b0._0_8_;
                auStack_1b0._0_8_ = local_b0._8_8_;
                local_198 = local_90;
                pTStack_190 = pTStack_88;
                uVar18 = local_b0._24_8_ >> 0x20;
                local_188 = pTVar21;
                if (local_b0._28_4_ < *(int *)(local_b0._16_8_ + 0x18)) {
                  do {
                    if (0x1f < (ulonglong)
                               (*(longlong *)(*(longlong *)this + 0x198) -
                               *(longlong *)((longlong)(int)uVar18 * 0x70 + 0x30 + *local_1b8))) {
                      TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                      ::RemoveByIndex(pTStack_190,(int)uVar18);
                      local_180 = CONCAT11(local_180._1_1_,1);
                    }
                    uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
                    uVar18 = (ulonglong)uStack_19c;
                  } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
                  if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
                    uVar16 = *(int *)&(local_188->Elements).field_0x8 -
                             *(int *)&(local_188->Elements).field_0x34;
                    if (uVar16 < 4) {
                      iVar9 = 1;
                    }
                    else {
                      uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar18 != 0) {
                        for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      iVar9 = 1 << ((byte)lVar22 & 0x1f);
                    }
                    if (((0 < (int)uVar16) && (local_188->HashSize < iVar9)) ||
                       (iVar9 < local_188->HashSize)) {
                      local_188->HashSize = iVar9;
                      TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                      ::Rehash(local_188);
                    }
                  }
                }
              }
              else {
                TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                ::RemoveByIndex(pTStack_150,(int)uVar18);
                local_140 = CONCAT11(local_140._1_1_,1);
              }
              uStack_160 = uStack_160 & ~auStack_170._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_170);
              uVar18 = (ulonglong)uStack_15c;
              uVar16 = uStack_15c;
            } while ((int)uStack_15c < *(int *)(auStack_170._8_8_ + 0x18));
            if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
              uVar16 = *(int *)&(local_148->Elements).field_0x8 -
                       *(int *)&(local_148->Elements).field_0x34;
              if (uVar16 < 4) {
                iVar9 = 1;
              }
              else {
                uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
                lVar22 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                iVar9 = 1 << ((byte)lVar22 & 0x1f);
              }
              if (((0 < (int)uVar16) && (local_148->HashSize < iVar9)) ||
                 (iVar9 < local_148->HashSize)) {
                local_148->HashSize = iVar9;
                TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                ::Rehash(local_148);
              }
            }
          }
        }
        else {
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_210,uVar16);
          local_200 = '\x01';
        }
        uStack_220 = uStack_220 & ~auStack_230._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
        uVar18 = (ulonglong)uStack_21c;
        uVar16 = uStack_21c;
      } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
      if ((local_200 != '\0') && (cStack_1ff != '\0')) {
        uVar16 = *(int *)&(local_208->Elements).field_0x8 -
                 *(int *)&(local_208->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar9 = 1;
        }
        else {
          uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_208->HashSize < iVar9)) || (iVar9 < local_208->HashSize)) {
          local_208->HashSize = iVar9;
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::Rehash(local_208);
        }
      }
    }
    lVar22 = *(longlong *)this;
    TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_80,
               (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                *)(lVar22 + 0x250));
    local_1c0 = '\0';
    cStack_1bf = '\0';
    stack0xfffffffffffffe18 = local_80._16_16_;
    local_1f8 = (longlong *)local_80._0_8_;
    auStack_1f0._0_8_ = local_80._8_8_;
    local_1d8 = local_60;
    pTStack_1d0 = pTStack_58;
    uVar18 = local_80._24_8_ >> 0x20;
    uVar16 = local_80._28_4_;
    local_1c8 = (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                 *)(lVar22 + 0x250);
    if ((int)uVar16 < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        if (0x1f < (ulonglong)
                   (*(longlong *)(*(longlong *)this + 0x198) -
                   *(longlong *)((longlong)(int)uVar18 * 0x70 + 0x30 + *local_1f8))) {
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_1d0,uVar16);
          local_1c0 = '\x01';
        }
        uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
        uVar18 = (ulonglong)uStack_1dc;
        uVar16 = uStack_1dc;
      } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
      if ((local_1c0 != '\0') && (cStack_1bf != '\0')) {
        uVar16 = *(int *)&(local_1c8->Elements).field_0x8 -
                 *(int *)&(local_1c8->Elements).field_0x34;
        if (3 < uVar16) {
          uVar18 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar24 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_1c8->HashSize < iVar24)) || (iVar24 < local_1c8->HashSize))
        {
          local_1c8->HashSize = iVar24;
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          ::Rehash(local_1c8);
        }
      }
    }
  }
  return;
}

// operator() @ 14927e930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  wchar_t *_Str;
  undefined1 auStackY_948 [32];
  TStringView<wchar_t> local_8e8;
  undefined1 local_8d8 [16];
  FLinearColor_u_0 local_8c8;
  TStringBuilderBase<wchar_t> local_8b8;
  wchar_t local_898 [1035];
  wchar_t local_82 [5];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_948;
  iVar6 = 0;
  local_8d8._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_8d8._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_8d8._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_8d8,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_8c8._0_8_ = *(undefined8 *)*plVar1;
  local_8c8._8_8_ = ((undefined8 *)*plVar1)[1];
  local_8b8.Base = local_898;
  local_8b8.End = local_82;
  local_8b8.bIsDynamic = false;
  local_8b8.bIsExternal = false;
  iVar7 = 0;
  local_8b8.CurPos = local_898;
  if ((param_6->SystemPrettyName).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_6->SystemPrettyName).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_14927ea58;
  }
  sVar2 = wcslen(_Str);
  iVar7 = (int)sVar2;
LAB_14927ea58:
  uVar4 = (ulong64)iVar7;
  pwVar5 = local_898;
  if (local_82 < local_898 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_8b8,uVar4);
    pwVar5 = local_8b8.CurPos;
  }
  if (iVar7 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pwVar5,_Str,uVar4 * 2);
    pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
    local_8b8.CurPos = pwVar5;
  }
  if (local_8b8.End < pwVar5 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_8b8,1);
    pwVar5 = local_8b8.CurPos;
  }
  *pwVar5 = L'\0';
  local_8e8.DataPtr = local_8b8.Base;
  if (local_8b8.Base != (wchar_t *)0x0) {
    sVar2 = wcslen(local_8b8.Base);
    iVar6 = (int)sVar2;
  }
  local_8e8.Size = iVar6;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_8e8,param_2,
             (FLinearColor *)&local_8c8._s_0,&FLinearColor::Black);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8b8);
  return;
}

// operator() @ 14927f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FNiagaraDebugHud::DrawGlobalBudgetInfo'::__l8::<lambda_1>::operator()
          (void *this,FString *param_1,FFXTimeData *param_2,float param_3)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  FLinearColor *pFVar6;
  UFont *pUVar7;
  FCanvas *pFVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong *puVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auStackY_188 [32];
  FScriptContainerElement *local_128;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  ulonglong local_88 [10];
  size_t sVar16;
  
  puVar22 = local_88;
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_c0 = (param_1->Data).ArrayNum;
  lVar21 = (longlong)local_c0;
  iVar20 = 0;
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
    memcpy(local_c8.Data,pFVar5,lVar21 * 2);
  }
  fVar2 = param_2->GT;
  ::FString::PrintfImpl(&local_b8,L"GT = %2.3f");
  fVar3 = param_2->GTConcurrent;
  ::FString::PrintfImpl(&local_a8,L"CNC = %2.3f");
  fVar4 = param_2->RT;
  ::FString::PrintfImpl(&local_98,L"RT = %2.3f");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar18.Data = local_b8.Data.AllocatorInstance.Data;
  }
  iVar23 = **(int **)this;
  iVar12 = UFont::GetStringSize
                     ((UFont *)**(undefined8 **)((longlong)this + 8),(wchar_t *)FVar18.Data);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar18.Data = local_a8.Data.AllocatorInstance.Data;
  }
  iVar13 = UFont::GetStringSize
                     ((UFont *)**(undefined8 **)((longlong)this + 8),(wchar_t *)FVar18.Data);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar18.Data = local_98.Data.AllocatorInstance.Data;
  }
  UFont::GetStringSize((UFont *)**(undefined8 **)((longlong)this + 8),(wchar_t *)FVar18.Data);
  pFVar6 = *(FLinearColor **)((longlong)this + 0x20);
  pUVar7 = (UFont *)**(undefined8 **)((longlong)this + 8);
  pFVar8 = (FCanvas *)**(undefined8 **)((longlong)this + 0x10);
  iVar15 = 0;
  if (local_c0 == 0) {
    local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_14927f27b:
    sVar16 = wcslen((wchar_t *)local_118);
    iVar14 = (int)sVar16;
  }
  else {
    local_118 = local_c8.Data;
    iVar14 = iVar15;
    if (local_c8.Data != (FScriptContainerElement *)0x0) goto LAB_14927f27b;
  }
  local_e8._12_4_ = uStack_10c;
  local_e8.Size = iVar14;
  local_e8.DataPtr = (wchar_t *)local_118;
  FCanvas::DrawShadowedString
            (pFVar8,(double)**(float **)((longlong)this + 0x18),
             (double)(*(float **)((longlong)this + 0x18))[1],&local_e8,pUVar7,pFVar6,
             &FLinearColor::Black);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (longlong)iVar23 + 0x31U;
  lVar19 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
  lVar24 = 0x30;
  pFVar8 = (FCanvas *)**(undefined8 **)((longlong)this + 0x10);
  lVar21 = 0x30;
  iVar23 = (int)((((longlong)iVar23 + 0x31U) - lVar19 >> 1) + lVar19 >> 5) * 0x32;
  if (param_3 < fVar2) {
    lVar21 = 0x28;
  }
  pFVar6 = *(FLinearColor **)((longlong)this + lVar21);
  pUVar7 = (UFont *)**(undefined8 **)((longlong)this + 8);
  if (local_b8.Data.ArrayNum == 0) {
    local_108 = (FScriptContainerElement *)0x15060d16c;
LAB_14927f337:
    sVar16 = wcslen((wchar_t *)local_108);
    iVar14 = (int)sVar16;
  }
  else {
    local_108 = local_b8.Data.AllocatorInstance.Data;
    iVar14 = iVar15;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14927f337;
  }
  local_d8._12_4_ = uStack_fc;
  local_d8.Size = iVar14;
  local_d8.DataPtr = (wchar_t *)local_108;
  FCanvas::DrawShadowedString
            (pFVar8,(double)((float)iVar23 + **(float **)((longlong)this + 0x18)),
             (double)(*(float **)((longlong)this + 0x18))[1],&local_d8,pUVar7,pFVar6,
             &FLinearColor::Black);
  uVar17 = (longlong)(iVar12 + iVar23) + 0x31;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar17;
  lVar19 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
  pFVar8 = (FCanvas *)**(undefined8 **)((longlong)this + 0x10);
  lVar21 = 0x30;
  iVar23 = (int)((uVar17 - lVar19 >> 1) + lVar19 >> 5) * 0x32;
  if (param_3 < fVar3) {
    lVar21 = 0x28;
  }
  pFVar6 = *(FLinearColor **)((longlong)this + lVar21);
  pUVar7 = (UFont *)**(undefined8 **)((longlong)this + 8);
  if (local_a8.Data.ArrayNum == 0) {
    local_128 = (FScriptContainerElement *)0x15060d16c;
LAB_14927f406:
    sVar16 = wcslen((wchar_t *)local_128);
    iVar15 = (int)sVar16;
  }
  else {
    local_128 = local_a8.Data.AllocatorInstance.Data;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14927f406;
  }
  local_f8._12_4_ = uStack_11c;
  local_f8.Size = iVar15;
  local_f8.DataPtr = (wchar_t *)local_128;
  FCanvas::DrawShadowedString
            (pFVar8,(double)((float)iVar23 + **(float **)((longlong)this + 0x18)),
             (double)(*(float **)((longlong)this + 0x18))[1],&local_f8,pUVar7,pFVar6,
             &FLinearColor::Black);
  uVar17 = (longlong)(iVar13 + iVar23) + 0x31;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar17;
  lVar21 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar11,8);
  pFVar8 = (FCanvas *)**(undefined8 **)((longlong)this + 0x10);
  if (param_3 < fVar4) {
    lVar24 = 0x28;
  }
  pUVar7 = (UFont *)**(undefined8 **)((longlong)this + 8);
  pFVar6 = *(FLinearColor **)((longlong)this + lVar24);
  if (local_98.Data.ArrayNum == 0) {
    local_128 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_128 = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927f4d4;
  }
  sVar16 = wcslen((wchar_t *)local_128);
  iVar20 = (int)sVar16;
LAB_14927f4d4:
  local_f8.Size = iVar20;
  local_f8.DataPtr = (wchar_t *)local_128;
  FCanvas::DrawShadowedString
            (pFVar8,(double)((float)((int)((uVar17 - lVar21 >> 1) + lVar21 >> 5) * 0x32) +
                            **(float **)((longlong)this + 0x18)),
             (double)(*(float **)((longlong)this + 0x18))[1],&local_f8,pUVar7,pFVar6,
             &FLinearColor::Black);
  lVar21 = 4;
  *(float *)(*(longlong *)((longlong)this + 0x18) + 4) =
       **(float **)((longlong)this + 0x38) + *(float *)(*(longlong *)((longlong)this + 0x18) + 4);
  do {
    puVar1 = puVar22 + -2;
    puVar22 = puVar22 + -2;
    lVar21 = lVar21 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar21 != 0);
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator() @ 14927f720

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Max).Time_RT;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927f844;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927f844:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927f8d0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Avg).Time_GPU;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927f9f4;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927f9f4:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927fa80

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  FNiagaraDebugHUDPerfStats *pFVar1;
  longlong *plVar2;
  FString *pFVar3;
  size_t sVar4;
  int iVar5;
  double dVar6;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  FLinearColor_u_0 local_48;
  FString local_38 [3];
  
  iVar5 = 0;
  local_58._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_58._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_58._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_58,(FTexture *)0x0,true);
  plVar2 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar2 = this;
  }
  local_48._0_8_ = *(undefined8 *)*plVar2;
  local_48._8_8_ = ((undefined8 *)*plVar2)[1];
  pFVar1 = (param_6->PerfStats).Object;
  if (pFVar1 == (FNiagaraDebugHUDPerfStats *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (pFVar1->Max).Time_GPU;
  }
  pFVar3 = NiagaraDebugLocal::FormatPerfValue(local_38,dVar6,7);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14927fba4;
  }
  sVar4 = wcslen(local_68.DataPtr);
  iVar5 = (int)sVar4;
LAB_14927fba4:
  local_68.Size = iVar5;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_48._s_0,&FLinearColor::Black);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927fc30

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  int iVar1;
  size_t sVar2;
  ForAnyElementType FVar3;
  FString local_58;
  TStringView<wchar_t> local_48 [4];
  
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,
                    (double)(param_5->MaxWidth - __real_40c00000),
                    (double)(**(float **)((longlong)this + 0x10) - __real_40000000),0.0,0.0,0.0,0.0,
                    &param_6->UniqueColor,(FTexture *)0x0,true);
  ::FString::PrintfImpl(&local_58,L"%d");
  local_48[0].Size = 0;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar1 = UFont::GetStringSize(param_2,(wchar_t *)FVar3.Data);
  if (local_58.Data.ArrayNum == 0) {
    local_48[0].DataPtr = L"";
  }
  else {
    local_48[0].DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14927fd4b;
  }
  sVar2 = wcslen(local_48[0].DataPtr);
  local_48[0].Size = (int)sVar2;
LAB_14927fd4b:
  FCanvas::DrawShadowedString
            (param_1,(double)((param_5->MaxWidth * __real_3f000000 + param_3) -
                             (float)iVar1 * __real_3f000000),(double)param_4,local_48,param_2,
             &FLinearColor::Black,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14927fdf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>::operator()
          (void *this,FNiagaraVariableBase *param_1,int param_2,int param_3)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  FValidationErrorInfo *pFVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  uint uVar8;
  int local_res8 [2];
  FName local_res10;
  FName *local_18 [2];
  
  pFVar4 = FNiagaraDebugHud::GetValidationErrorInfo
                     (*(FNiagaraDebugHud **)this,
                      (UNiagaraComponent *)**(undefined8 **)((longlong)this + 8));
  lVar1 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x28);
  if (*(int *)(lVar1 + 0x30) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)(lVar1 + 0x28);
  }
  ::FName::FName(&local_res10,pwVar6);
  FVar2 = local_res10;
  uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(pFVar4->ParticleVariablesWithErrors).field_0x8 !=
      *(int *)&(pFVar4->ParticleVariablesWithErrors).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar4->ParticleVariablesWithErrors).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar4->ParticleVariablesWithErrors).field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(pFVar4->ParticleVariablesWithErrors).field_0x48 - 1U &
                               uVar3) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar8 * 0x20 +
                          *(longlong *)&pFVar4->ParticleVariablesWithErrors);
        if (*pFVar5 == local_res10) {
          if (pFVar5 != (FName *)0x0) goto LAB_14927fee6;
          break;
        }
        uVar8 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  local_18[0] = &local_res10;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&pFVar4->ParticleVariablesWithErrors,(uint)local_res8,
             (TKeyInitializer<FName_const_&> *)(ulonglong)uVar3,(bool *)local_18);
  pFVar5 = (FName *)((longlong)local_res8[0] * 0x20 +
                    *(longlong *)&pFVar4->ParticleVariablesWithErrors);
LAB_14927fee6:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + 1),&param_1->Name);
  return;
}

// operator() @ 14927ff10

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalRegistered);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149280029;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149280029:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149280250

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalActive);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149280369;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149280369:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1492808e0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalScalability);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1492809f9;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_1492809f9:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149280b50

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalEmitters);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149280c69;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149280c69:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149281a70

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalParticles);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149281b89;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149281b89:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149281c10

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  TStringView<wchar_t> local_68;
  FString local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::PrintfImpl(&local_58,L"%6.2f");
  if (local_58.Data.ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149281d39;
  }
  sVar2 = wcslen(local_68.DataPtr);
  iVar3 = (int)sVar2;
LAB_149281d39:
  local_68.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_68,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149281dc0

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalActive);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149281ed9;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149281ed9:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149281f60

void __thiscall
`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>::operator()
          (void *this,FCanvas *param_1,UFont *param_2,float param_3,float param_4,
          FOverviewColumn *param_5,FSystemDebugInfo *param_6)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  FLinearColor_u_0 local_38 [3];
  
  iVar3 = 0;
  local_48._0_8_ = *(undefined8 *)&(param_6->UniqueColor).field0_0x0;
  local_48._8_4_ = (undefined4)*(undefined8 *)((longlong)&(param_6->UniqueColor).field0_0x0 + 8);
  local_48._12_4_ = NiagaraDebugLocal::Settings.SystemColorTableOpacity;
  FCanvas::DrawTile(param_1,(double)param_3,(double)param_4,(double)param_5->MaxWidth,
                    (double)**(float **)((longlong)this + 0x10),0.0,0.0,0.0,0.0,
                    (FLinearColor *)local_48,(FTexture *)0x0,true);
  plVar1 = (longlong *)((longlong)this + 8);
  if (param_6->bShowInWorld == false) {
    plVar1 = this;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38[0]._0_8_ = *(undefined8 *)*plVar1;
  local_38[0]._8_8_ = ((undefined8 *)*plVar1)[1];
  ::FString::AppendInt(&local_68,param_6->TotalScalability);
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_149282079;
  }
  sVar2 = wcslen(local_58.DataPtr);
  iVar3 = (int)sVar2;
LAB_149282079:
  local_58.Size = iVar3;
  FCanvas::DrawShadowedString
            (param_1,(double)param_3,(double)param_4,&local_58,param_2,
             (FLinearColor *)&local_38[0]._s_0,&FLinearColor::Black);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// AddBox2D @ 149283c50

void __thiscall
FNiagaraDebugHud::AddBox2D
          (FNiagaraDebugHud *this,TVector2<float> param_1,TVector2<float> param_2,
          FLinearColor *param_3,float param_4,float param_5)

{
  int *piVar1;
  TArray<FNiagaraDebugHud::FDebugBox2D,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector2<float>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 TStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  
  if (NiagaraDebugLocal::Settings.bHudEnabled) {
    local_28 = *(undefined8 *)&param_3->field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    pTVar2 = &this->Boxes2D;
    pTVar3 = (TVector2<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
    local_18 = param_4;
    fStack_14 = param_5;
    local_38 = param_1.field0_0x0;
    TStack_30 = param_2.field0_0x0;
    if ((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)(this->Boxes2D).ArrayMax * 5)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->Boxes2D).ArrayNum;
    piVar1 = &(this->Boxes2D).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x428,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar8 = (longlong)iVar7;
    (this->Boxes2D).ArrayNum = iVar7 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar8 * 0x28))->_s_0 = (TVector2<float>_u_0_s_0)local_38;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar8 * 0x28))[1]._s_0 = (TVector2<float>_u_0_s_0)TStack_30;
    *(undefined8 *)(pFVar4 + lVar8 * 0x28 + 0x10) = local_28;
    *(undefined8 *)(pFVar4 + lVar8 * 0x28 + 0x10 + 8) = uStack_20;
    *(ulonglong *)(pFVar4 + lVar8 * 0x28 + 0x20) = CONCAT44(fStack_14,local_18);
  }
  return;
}

// AddCircle2D @ 149283d70

void __thiscall
FNiagaraDebugHud::AddCircle2D
          (FNiagaraDebugHud *this,TVector2<float> param_1,float param_2,int param_3,
          FLinearColor *param_4,float param_5,float param_6)

{
  int *piVar1;
  TArray<FNiagaraDebugHud::FDebugCircle2D,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector2<float>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TVector2<float>_u_0 TVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TVector2<float>_u_0 local_38;
  float fStack_30;
  int iStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  
  if (NiagaraDebugLocal::Settings.bHudEnabled) {
    pTVar2 = &this->Circles2D;
    local_28 = *(undefined8 *)&param_4->field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    pTVar3 = (TVector2<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
    local_18 = param_5;
    fStack_14 = param_6;
    local_38 = param_1.field0_0x0;
    fStack_30 = param_2;
    iStack_2c = param_3;
    if ((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)(this->Circles2D).ArrayMax * 5)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->Circles2D).ArrayNum;
    piVar1 = &(this->Circles2D).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x428,&pTVar2->AllocatorInstance,piVar1);
    }
    TVar6._s_0.Y = (float)iStack_2c;
    TVar6._s_0.X = fStack_30;
    lVar9 = (longlong)iVar8;
    (this->Circles2D).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar9 * 0x28))->_s_0 = (TVector2<float>_u_0_s_0)local_38;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar9 * 0x28))[1] = TVar6;
    *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10) = local_28;
    *(undefined8 *)(pFVar4 + lVar9 * 0x28 + 0x10 + 8) = uStack_20;
    *(ulonglong *)(pFVar4 + lVar9 * 0x28 + 0x20) = CONCAT44(fStack_14,local_18);
  }
  return;
}

// AddLine2D @ 149284360

void __thiscall
FNiagaraDebugHud::AddLine2D
          (FNiagaraDebugHud *this,TVector2<float> param_1,TVector2<float> param_2,
          FLinearColor *param_3,float param_4,float param_5)

{
  int *piVar1;
  TArray<FNiagaraDebugHud::FDebugLine2D,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector2<float>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 TStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  
  if (NiagaraDebugLocal::Settings.bHudEnabled) {
    local_28 = *(undefined8 *)&param_3->field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    pTVar2 = &this->Lines2D;
    pTVar3 = (TVector2<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
    local_18 = param_4;
    fStack_14 = param_5;
    local_38 = param_1.field0_0x0;
    TStack_30 = param_2.field0_0x0;
    if ((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)(this->Lines2D).ArrayMax * 5)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->Lines2D).ArrayNum;
    piVar1 = &(this->Lines2D).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x428,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar8 = (longlong)iVar7;
    (this->Lines2D).ArrayNum = iVar7 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar8 * 0x28))->_s_0 = (TVector2<float>_u_0_s_0)local_38;
    ((TVector2<float>_u_0 *)(pFVar4 + lVar8 * 0x28))[1]._s_0 = (TVector2<float>_u_0_s_0)TStack_30;
    *(undefined8 *)(pFVar4 + lVar8 * 0x28 + 0x10) = local_28;
    *(undefined8 *)(pFVar4 + lVar8 * 0x28 + 0x10 + 8) = uStack_20;
    *(ulonglong *)(pFVar4 + lVar8 * 0x28 + 0x20) = CONCAT44(fStack_14,local_18);
  }
  return;
}

// AddMessage @ 149284480

void __thiscall
FNiagaraDebugHud::AddMessage(FNiagaraDebugHud *this,FName param_1,FNiagaraDebugMessage *param_2)

{
  uint uVar1;
  FNiagaraDebugMessage *pFVar2;
  FName local_res10;
  
  local_res10 = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
                       *)&this->Messages,uVar1 + param_1.Number,&local_res10);
  pFVar2->Type = param_2->Type;
  ::FString::operator=(&pFVar2->Message,&param_2->Message);
  pFVar2->Lifetime = param_2->Lifetime;
  return;
}

// DebugDrawCallback @ 14928b5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraDebugHud::DebugDrawCallback(UCanvas *param_1,APlayerController *param_2)

{
  FSceneViewFamily *pFVar1;
  FSceneInterface *pFVar2;
  FNiagaraDebugHud *this;
  UWorld *pUVar3;
  FNiagaraWorldManager *pFVar4;
  
  if (((((NiagaraDebugLocal::Settings.bHudEnabled) && (param_1 != (UCanvas *)0x0)) &&
       (param_1->Canvas != (FCanvas *)0x0)) &&
      ((param_1->SceneView != (FSceneView *)0x0 &&
       (pFVar1 = param_1->SceneView->Family, pFVar1 != (FSceneViewFamily *)0x0)))) &&
     (pFVar2 = pFVar1->Scene, pFVar2 != (FSceneInterface *)0x0)) {
    pUVar3 = (UWorld *)(**(code **)(pFVar2->_padding_ + 0x410))();
    if (pUVar3 != (UWorld *)0x0) {
      pFVar4 = FNiagaraWorldManager::Get(pUVar3);
      if ((pFVar4 != (FNiagaraWorldManager *)0x0) &&
         (this = (pFVar4->NiagaraDebugHud).Ptr, this != (FNiagaraDebugHud *)0x0)) {
        Draw(this,pFVar4,param_1,param_2);
      }
    }
  }
  return;
}

// Draw @ 14928d040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::Draw
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,UCanvas *param_2,
          APlayerController *param_3)

{
  TMap<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>_>
  *pTVar1;
  TSharedPtr<FNiagaraGpuFrameResults,1> *pTVar2;
  double dVar3;
  int iVar4;
  UWorld *pUVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  longlong local_98;
  FSharedReferencer<1> FStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  pUVar5 = FNiagaraWorldManager::GetWorld(param_1);
  dVar3 = pUVar5->RealTimeSeconds;
  this->DeltaSeconds = (float)(dVar3 - this->LastDrawTime);
  if (NiagaraDebugLocal::Settings.bHudRenderingEnabled != false) {
    DrawComponents(this,param_1,param_2);
    DrawDebugGeomerty(this,param_1,param_2);
    DrawOverview(this,param_1,param_2->Canvas);
  }
  lVar6 = 0;
  dVar9 = ScrubDurationSeconds / FGenericPlatformTime::SecondsPerCycle64;
  if ((__real_43e0000000000000 <= dVar9) &&
     (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
    lVar6 = -0x8000000000000000;
  }
  QueryPerformanceCounter(&local_res8);
  pTVar1 = &this->GpuEmitterData;
  TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = '\0';
  cStack_1f = '\0';
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  uVar8 = local_88._28_4_;
  local_28 = (TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)uVar8 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      if (*(ulonglong *)((longlong)(int)uVar7 * 0x38 + 8 + *local_58) <
          (ulonglong)(local_res8.QuadPart - ((longlong)dVar9 + lVar6))) {
        TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_30,uVar8);
        local_20 = '\x01';
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
      uVar8 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
        local_28->HashSize = iVar4;
        TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  pTVar2 = &this->GpuResults;
  if ((pTVar2->Object != (FNiagaraGpuFrameResults *)0x0) &&
     (0x20 < GFrameCounter - this->GpuResultsGameFrameCounter)) {
    local_98 = 0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FNiagaraGpuFrameResults,1> *)&local_98) {
      pTVar2->Object = (FNiagaraGpuFrameResults *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GpuResults).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
  }
  this->LastDrawTime = dVar3;
  return;
}

// DrawComponents @ 14928d790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawComponents
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,UCanvas *param_2)

{
  int iVar1;
  FObjectPtr_u_0 *pFVar2;
  FNiagaraEmitterInstance *pFVar3;
  UNiagaraEmitter *pUVar4;
  UNiagaraStatelessEmitter *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FObjectPtr_u_0 FVar13;
  TVector2<float> TVar14;
  bool bVar15;
  float fVar16;
  FCachedVariables *pFVar17;
  UCanvas *pUVar18;
  UFont *pUVar19;
  longlong _Str;
  bool bVar20;
  ENiagaraAgeUpdateMode EVar21;
  char cVar22;
  uint uVar23;
  ETickingGroup EVar24;
  UWorld *this_00;
  ulonglong uVar25;
  FObjectPtr_u_0 *pFVar26;
  UObject *pUVar27;
  FObjectPtr_u_0 *extraout_RAX;
  FObjectPtr_u_0 *pFVar28;
  TRotator<double> *pTVar29;
  double *pdVar30;
  FLinearColor *pFVar31;
  ULineBatchComponent *this_01;
  UClass *pUVar32;
  FNiagaraSystemInstance *this_02;
  FCachedVariables *pFVar33;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *this_03;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar34;
  FNiagaraDataSet *pFVar35;
  FNiagaraPosition *pFVar36;
  FString *pFVar37;
  size_t sVar38;
  UObject *pUVar39;
  UNiagaraSimCache *this_04;
  UNiagaraEffectType *pUVar40;
  FNiagaraEmitterHandle *pFVar41;
  undefined8 uVar42;
  void *pvVar43;
  FText *pFVar44;
  FNiagaraTypeDefinition *pFVar45;
  UNiagaraDataInterface *pUVar46;
  UStruct *pUVar47;
  int *piVar48;
  UEnum *pUVar49;
  wchar_t wVar50;
  int iVar51;
  FWeakObjectPtr *pFVar52;
  longlong *plVar53;
  ForAnyElementType FVar54;
  ForAnyElementType FVar55;
  wchar_t *pwVar56;
  ulong64 uVar57;
  uint uVar58;
  uint uVar59;
  FNiagaraDataSetDebugAccessor *this_05;
  FNiagaraUserRedirectionParameterStore *this_06;
  FWeakObjectPtr *pFVar60;
  wchar_t *pwVar61;
  FNiagaraDataSetDebugAccessor *pFVar62;
  FScriptContainerElement *pFVar63;
  FNiagaraDataBuffer *pFVar64;
  FScriptContainerElement *pFVar65;
  int iVar66;
  byte bVar67;
  longlong lVar68;
  UNiagaraSystem *this_07;
  FNiagaraSystemInstanceController *this_08;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar69;
  ulonglong uVar70;
  FScriptContainerElement *pFVar71;
  FNiagaraSystemSimulation *pFVar72;
  uint uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  double dVar88;
  undefined1 auVar89 [16];
  float fVar90;
  undefined4 uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined1 auStackY_19d8 [32];
  undefined1 local_1968;
  undefined1 local_1967;
  byte local_1966;
  byte local_1965;
  undefined1 local_1964;
  undefined1 local_1963;
  undefined1 local_1962;
  undefined1 local_1961;
  uint local_1960;
  uint local_195c;
  uint local_1958;
  uint local_1954;
  FCachedVariables *local_1950;
  FColor_u_0 local_1948 [2];
  FCachedVariables *local_1940;
  FObjectPtr_u_0 *local_1938;
  FNiagaraDataBuffer *local_1930;
  float local_1928;
  float fStack_1924;
  FNiagaraScalabilityState local_1920;
  UCanvas *local_1910;
  float local_1908;
  float fStack_1904;
  FNiagaraSystemInstanceController *local_1900;
  FWeakObjectPtr local_18f8;
  UEnum *local_18f0;
  UWorld *local_18e8;
  FWeakObjectPtr *local_18e0;
  FNiagaraSystemSimulation *local_18d8;
  FString local_18d0;
  ForAnyElementType local_18c0;
  uint local_18b8;
  FSceneView *local_18b0;
  undefined1 local_18a8 [16];
  undefined1 local_1898 [8];
  FNiagaraTypeDefinitionHandle local_1890 [2];
  ForAnyElementType local_1888;
  undefined8 local_1880;
  ForAnyElementType local_1878;
  FWeakObjectPtr *local_1870;
  FString local_1868;
  ForAnyElementType local_1858;
  UNiagaraSystem *local_1850;
  float local_1848;
  float fStack_1844;
  FObjectPtr_u_0 local_1840;
  UFont *local_1838;
  undefined1 local_1830 [16];
  FString local_1820;
  FString local_1810;
  FString local_1800;
  FString local_17f0;
  FString local_17e0;
  FString local_17d0;
  FString local_17c0;
  FString local_17b0;
  FString local_17a0 [2];
  FString local_1780;
  UEnum *local_1770;
  UEnum *local_1768;
  FName local_1760;
  FName local_1758;
  FNiagaraSystemInstance *local_1750;
  FObjectPtr_u_0 local_1748;
  FName local_1740;
  FName local_1738;
  longlong local_1730;
  FName local_1728;
  FObjectPtr_u_0 local_1720;
  FName local_1718;
  FNiagaraWorldManager *local_1710;
  TReferenceControllerBase<1> *local_1708;
  UObject *local_1700;
  FNiagaraPosition local_16f8;
  FName local_16e8;
  FWeakObjectPtr local_16e0;
  FObjectPtr_u_0 *local_16d8;
  FWeakObjectPtr local_16d0;
  FName local_16c8;
  FName local_16c0;
  FName local_16b8;
  FString local_16b0;
  FString local_16a0;
  FString local_1690;
  void *local_1680 [2];
  FName local_1670;
  undefined1 local_1668 [8];
  UWorld *local_1660;
  UCanvas *local_1658;
  FNiagaraSystemInstance *local_1650;
  FScriptContainerElement *local_1648;
  undefined8 local_1640;
  FNiagaraVariable local_1638;
  undefined8 local_1618;
  undefined4 local_1610;
  FScriptContainerElement *local_1608;
  undefined8 local_1600;
  TVector<double>_u_0 local_15f8;
  TVector<double>_u_0 local_15e0;
  TVector<double>_u_0 local_15c8;
  wchar_t *local_15a8;
  int iStack_15a0;
  undefined4 uStack_159c;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> local_1598;
  wchar_t *local_1588;
  int iStack_1580;
  undefined4 uStack_157c;
  FLinearColor_u_0 local_1578;
  FObjectPtr_u_0 local_1568;
  FObjectPtr_u_0 FStack_1560;
  undefined1 local_1558 [16];
  TVector<double>_u_0 local_1548;
  undefined4 local_1530;
  undefined4 uStack_152c;
  undefined4 uStack_1528;
  undefined4 uStack_1524;
  FObjectPtr_u_0 local_1520;
  TVector<double>_u_0 local_1518;
  undefined8 local_1500;
  FString local_14f0;
  FString local_14e0;
  FString local_14d0;
  FString local_14c0;
  FString local_14b0;
  FString local_14a0;
  FString local_1490;
  FText local_1480;
  FString local_1470;
  FString local_1460;
  FString local_1450;
  FString local_1440;
  FText local_1430;
  TStringView<wchar_t> local_1418;
  FString local_1408;
  undefined1 local_13f8 [16];
  double local_13e8;
  double local_13d0;
  TVector<double>_u_0 local_13c8;
  TVector<double>_u_0 local_13a8;
  TVector<double>_u_0 local_1388;
  FObjectPtr_u_0 local_1368;
  FObjectPtr_u_0 FStack_1360;
  FObjectPtr_u_0 local_1358;
  FObjectPtr_u_0 local_1350;
  FString local_1348;
  TStringView<wchar_t> local_1338;
  FString local_1328;
  TPlane<double> local_1318;
  FString local_12f8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_12e8;
  FNiagaraPosition local_12c8;
  FNiagaraLWCConverter local_12b8;
  FString local_12a0;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> local_1290;
  FString local_1280;
  FString local_1270;
  FString local_1260;
  FString local_1250;
  FString local_1240;
  TRotator<double> local_1230;
  undefined1 local_1218 [16];
  undefined1 local_11f8 [56];
  TVector<double>_u_0 local_11c0;
  double local_11a8;
  double local_11a0;
  double local_1198;
  undefined1 local_1190;
  TTransform<double> local_1188;
  TStringBuilderWithBuffer<wchar_t,1024> local_1128;
  TStringBuilderWithBuffer<wchar_t,1024> local_908;
  ulonglong local_e8 [22];
  
  local_e8[0] = __security_cookie.value ^ (ulonglong)auStackY_19d8;
  local_1878.Data = (FScriptContainerElement *)param_2->Canvas;
  local_1910 = param_2;
  local_18c0.Data = (FScriptContainerElement *)this;
  local_1710 = param_1;
  this_00 = FNiagaraWorldManager::GetWorld(param_1);
  local_18e8 = this_00;
  if ((NiagaraDebugLocal::Settings.SystemTextOptions.Font == Small) ||
     (NiagaraDebugLocal::Settings.SystemTextOptions.Font != Normal)) {
    local_1838 = UEngine::GetTinyFont();
  }
  else {
    local_1838 = UEngine::GetSmallFont();
  }
  if ((NiagaraDebugLocal::Settings.ParticleTextOptions.Font == Small) ||
     (NiagaraDebugLocal::Settings.ParticleTextOptions.Font != Normal)) {
    local_1858.Data = (FScriptContainerElement *)UEngine::GetTinyFont();
  }
  else {
    local_1858.Data = (FScriptContainerElement *)UEngine::GetSmallFont();
  }
  local_18f0 = StaticEnum<enum_ENiagaraExecutionState>();
  local_1768 = StaticEnum<enum_ENCPoolMethod>();
  local_1770 = StaticEnum<enum_ENiagaraSystemInstanceState>();
  fVar16 = __real_3f800000;
  pFVar52 = (FWeakObjectPtr *)(this->InWorldComponents).AllocatorInstance.Data;
  local_18b8 = (this->InWorldComponents).ArrayNum;
  uVar25 = (ulonglong)(int)local_18b8;
  pFVar60 = pFVar52 + uVar25;
  fVar90 = __real_40000000;
  local_18e0 = pFVar60;
  do {
    fVar94 = __real_7f7fffff;
    local_1870 = pFVar52;
    if ((this->InWorldComponents).ArrayNum != (int)uVar25) {
      local_1968 = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemComponent,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_1968);
    }
    if (pFVar52 == pFVar60) {
      return;
    }
    local_16e0 = *pFVar52;
    pFVar52 = &local_16e0;
    pFVar26 = (FObjectPtr_u_0 *)FWeakObjectPtr::Get(pFVar52);
    uVar91 = SUB84(pFVar52,0);
    if (pFVar26 != (FObjectPtr_u_0 *)0x0) {
      uVar95 = *(undefined4 *)(pFVar26 + 0x42);
      uVar96 = *(undefined4 *)((longlong)pFVar26 + 0x214);
      uVar97 = *(undefined4 *)(pFVar26 + 0x43);
      uVar98 = *(undefined4 *)((longlong)pFVar26 + 0x21c);
      pFVar2 = pFVar26 + 0x3c;
      local_1520 = pFVar26[0x44];
      uVar99 = local_1520._0_4_;
      uVar100 = local_1520._4_4_;
      local_1568 = pFVar26[0x3e];
      FStack_1560 = pFVar26[0x3f];
      local_1558 = *(undefined1 (*) [16])(pFVar26 + 0x40);
      pFVar28 = pFVar26;
      local_1530 = uVar95;
      uStack_152c = uVar96;
      uStack_1528 = uVar97;
      uStack_1524 = uVar98;
      if (pFVar2->Handle == (UObject *)0x0) {
        pUVar27 = ::operator_new(0x40);
        dVar7 = UE::Math::TQuat<double>::Identity.Y;
        pUVar39 = (UObject *)0x0;
        if (pUVar27 != (UObject *)0x0) {
          *(double *)pUVar27 = UE::Math::TQuat<double>::Identity.X;
          *(double *)&pUVar27->field_0x8 = dVar7;
          dVar7 = UE::Math::TQuat<double>::Identity.W;
          *(double *)&pUVar27->field_0x10 = UE::Math::TQuat<double>::Identity.Z;
          *(double *)&pUVar27->field_0x18 = dVar7;
          dVar7 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          *(double *)&pUVar27->field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          *(double *)(pUVar27 + 1) = dVar7;
          *(double *)&pUVar27[1].field_0x8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
          pUVar39 = pUVar27;
        }
        if (pFVar2 != &local_1350) {
          pUVar27 = pFVar2->Handle;
          pFVar2->Handle = pUVar39;
          ::operator_delete(pUVar27,0x40);
          pUVar39 = (UObject *)0x0;
        }
        ::operator_delete(pUVar39,0x40);
        uVar91 = SUB84(pUVar39,0);
        pFVar28 = extraout_RAX;
      }
      pFVar2 = (FObjectPtr_u_0 *)pFVar2->Handle;
      auVar74._8_8_ = -(ulonglong)((double)pFVar2[3] != (double)local_1558._8_8_);
      auVar74._0_8_ = -(ulonglong)((double)pFVar2[2] != (double)local_1558._0_8_);
      uVar23 = movmskpd((int)pFVar28,auVar74);
      auVar83._8_8_ = -(ulonglong)((double)pFVar2[1] != (double)FStack_1560);
      auVar83._0_8_ = -(ulonglong)((double)*pFVar2 != (double)local_1568);
      iVar51 = movmskpd(uVar91,auVar83);
      if ((uVar23 & 0x3fffffff) != 0 || iVar51 != 0) {
        *pFVar2 = local_1568;
        pFVar2[1] = FStack_1560;
        pFVar2[2] = local_1558._0_8_;
        pFVar2[3] = local_1558._8_8_;
        pTVar29 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_1568,&local_1230);
        FVar13 = (FObjectPtr_u_0)pTVar29->Yaw;
        pFVar2[4] = (FObjectPtr_u_0)pTVar29->Pitch;
        pFVar2[5] = FVar13;
        pFVar2[6] = (FObjectPtr_u_0)pTVar29->Roll;
      }
      local_1368 = pFVar2[4];
      FStack_1360 = pFVar2[5];
      local_1358 = pFVar2[6];
      bVar67 = (byte)*(undefined1 *)((longlong)pFVar26 + 0x9a) >> 4 & 1;
      local_1965 = bVar67;
      if (NiagaraDebugLocal::Settings.bDrawBoundsEnabled != false) {
        pdVar30 = (double *)
                  (**(code **)&pFVar26->Handle[0x23].field_0x20)(pFVar26,local_11f8,pFVar26 + 0x3e);
        dVar7 = pdVar30[2] - pdVar30[5];
        dVar88 = pdVar30[1] - pdVar30[4];
        dVar80 = pdVar30[2] + pdVar30[5];
        dVar84 = pdVar30[1] + pdVar30[4];
        dVar8 = *pdVar30 - pdVar30[3];
        dVar87 = *pdVar30 + pdVar30[3];
        pFVar31 = &FLinearColor::Black;
        if ((bool)bVar67 != false) {
          pFVar31 = &FLinearColor::Red;
        }
        local_18a8._0_8_ = *(undefined8 *)&pFVar31->field0_0x0;
        dVar10 = (dVar80 - dVar7) * __real_3fe0000000000000;
        dVar11 = (dVar84 - dVar88) * __real_3fe0000000000000;
        dVar12 = (dVar87 - dVar8) * __real_3fe0000000000000;
        dVar7 = (dVar7 + dVar80) * __real_3fe0000000000000;
        dVar80 = (dVar88 + dVar84) * __real_3fe0000000000000;
        dVar8 = (dVar8 + dVar87) * __real_3fe0000000000000;
        local_18a8._8_4_ = (undefined4)*(undefined8 *)((longlong)&pFVar31->field0_0x0 + 8);
        local_18a8._12_4_ = NiagaraDebugLocal::Settings.DrawBoundsAlpha;
        if (NiagaraDebugLocal::Settings.bDrawBoundsWireframe == false) {
          this_01 = UWorld::GetLineBatcher(this_00,World);
          fVar90 = __real_40000000;
          fVar94 = __real_7f7fffff;
          if (this_01 != (ULineBatchComponent *)0x0) {
            uVar23 = (uint)__xmm_80000000000000008000000000000000;
            uVar73 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            local_11c0._s_0.Y =
                 (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar73,
                                  SUB84(dVar11,0) ^ uVar23);
            local_11c0._s_0.X =
                 (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar73,
                                  SUB84(dVar12,0) ^ uVar23);
            fVar90 = (float)local_18a8._4_4_;
            if ((float)local_18a8._4_4_ <= 0.0) {
              fVar90 = 0.0;
            }
            local_11c0._s_0.Z =
                 (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar73,
                                  SUB84(dVar10,0) ^ uVar23);
            fVar94 = (float)local_18a8._8_4_;
            if ((float)local_18a8._8_4_ <= 0.0) {
              fVar94 = 0.0;
            }
            if (fVar16 <= fVar90) {
              fVar90 = fVar16;
            }
            local_1190 = 1;
            if (fVar16 <= fVar94) {
              fVar94 = fVar16;
            }
            fVar92 = (float)local_18a8._0_4_;
            if ((float)local_18a8._0_4_ <= 0.0) {
              fVar92 = 0.0;
            }
            local_1948[0]._0_1_ = (undefined1)(int)(fVar94 * __real_437f0000 + __real_3f000000);
            if (fVar16 <= fVar92) {
              fVar92 = fVar16;
            }
            fVar94 = (float)local_18a8._12_4_;
            if ((float)local_18a8._12_4_ <= 0.0) {
              fVar94 = 0.0;
            }
            local_1948[0]._1_1_ = (undefined1)(int)(fVar90 * __real_437f0000 + __real_3f000000);
            if (fVar16 <= fVar94) {
              fVar94 = fVar16;
            }
            local_1188.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_1188.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_1948[0]._2_1_ = (undefined1)(int)(fVar92 * __real_437f0000 + __real_3f000000);
            local_1188.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_1188.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            local_1188.Translation.ZW.m128d_f64[1] = 0.0;
            local_1188.Translation.ZW.m128d_f64[0] = dVar7;
            local_1188.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
            local_1188.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
            local_1188.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
            local_1188.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
            local_1948[0]._3_1_ = (undefined1)(int)(fVar94 * __real_437f0000 + __real_3f000000);
            local_11a8 = dVar12;
            local_11a0 = dVar11;
            local_1198 = dVar10;
            local_1188.Translation.XY.m128d_f64[0] = dVar8;
            local_1188.Translation.XY.m128d_f64[1] = dVar80;
            ULineBatchComponent::DrawSolidBox
                      (this_01,(TBox<double> *)&local_11c0._s_0,&local_1188,
                       (FColor *)&local_1948[0]._s_0,'\0',0.0,0);
            fVar90 = __real_40000000;
            fVar94 = __real_7f7fffff;
          }
        }
        else {
          local_1548._s_0.X = dVar12;
          local_1548._s_0.Y = dVar11;
          local_1548._s_0.Z = dVar10;
          local_1518._s_0.X = dVar8;
          local_1518._s_0.Y = dVar80;
          local_1518._s_0.Z = dVar7;
          NiagaraDebugLocal::DrawWireframeBox
                    (this_00,(TVector<double> *)&local_1518._s_0,(TVector<double> *)&local_1548._s_0
                     ,(FLinearColor *)local_18a8,__real_40400000);
          fVar90 = __real_40000000;
          fVar94 = __real_7f7fffff;
        }
      }
      pUVar32 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      iVar51 = (int)pUVar32->_padding_;
      pFVar60 = local_18e0;
      if ((iVar51 <= *(int *)&pFVar26[2].Handle[1].field_0x10) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)&pFVar26[2].Handle[1].field_0x8 + (longlong)iVar51 * 8) ==
          &pUVar32->_padding_)) {
        local_1700 = pFVar26[0xca].Handle;
        this_07 = (UNiagaraSystem *)pFVar26[0xaa].Handle;
        this_08 = (FNiagaraSystemInstanceController *)pFVar26[0xc9].Handle;
        if (local_1700 != (UObject *)0x0) {
          LOCK();
          *(atomic<int> *)&local_1700->field_0x8 =
               (atomic<int>)((int)*(atomic<int> *)&local_1700->field_0x8 + 1);
          UNLOCK();
        }
        if (this_08 == (FNiagaraSystemInstanceController *)0x0) {
          this_02 = (FNiagaraSystemInstance *)0x0;
        }
        else {
          this_02 = (this_08->SystemInstance).Object;
        }
        local_1900 = this_08;
        local_1850 = this_07;
        if ((this_07 == (UNiagaraSystem *)0x0) || (this_02 == (FNiagaraSystemInstance *)0x0)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1700);
          pFVar60 = local_18e0;
          this_00 = local_18e8;
        }
        else {
          local_18d8 = (this_02->SystemSimulation).Object;
          local_1708 = (this_02->SystemSimulation).SharedReferenceCount.ReferenceController;
          if (local_1708 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_1708->SharedReferenceCount =
                 (atomic<int>)((int)local_1708->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((((local_18d8 == (FNiagaraSystemSimulation *)0x0) || (local_18d8->bCanExecute == 0))
              || (local_18d8->World == (UWorld *)0x0)) ||
             ((local_18d8->System == (UNiagaraSystem *)0x0 ||
              (((uint)local_18d8->System->_padding_ >> 0x1e & 1) != 0)))) {
            bVar20 = false;
            bVar15 = false;
          }
          else {
            bVar20 = true;
            bVar15 = true;
            FNiagaraSystemSimulation::WaitForInstancesTickComplete(local_18d8,false);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pFVar26);
          }
          local_18f8.ObjectIndex = 0;
          local_18f8.ObjectSerialNumber = 0;
          local_16d8 = pFVar26;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pFVar26);
          }
          FWeakObjectPtr::operator=(&local_18f8,(FObjectPtr)&local_16d8);
          local_16d0 = local_18f8;
          iVar51 = TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr>_>
                             ((TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
                               *)&this->ValidationErrors,
                              local_18f8.ObjectSerialNumber ^ local_18f8.ObjectIndex,
                              (TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr> *)&local_16d0
                             );
          pFVar31 = &NiagaraDebugLocal::Settings.InWorldTextColor;
          if (iVar51 != -1) {
            pFVar31 = &NiagaraDebugLocal::Settings.InWorldErrorTextColor;
          }
          local_1578._0_8_ = *(undefined8 *)&pFVar31->field0_0x0;
          local_1578._8_8_ = *(undefined8 *)((longlong)&pFVar31->field0_0x0 + 8);
          if (((NiagaraDebugLocal::Settings.bShowParticlesVariablesWithSystem == false) && (bVar20))
             && (local_1910->SceneView != (FSceneView *)0x0)) {
            pFVar33 = NiagaraDebugLocal::GetCachedVariables(this_07);
            local_1960 = 0;
            this_08 = local_1900;
            local_1940 = pFVar33;
            if (0 < (pFVar33->ParticleVariables).ArrayNum) {
              lVar68 = 0;
              local_1950 = (FCachedVariables *)0x0;
              local_1938 = pFVar26;
              do {
                pFVar17 = local_1950;
                uVar23 = local_1960;
                uVar58 = ~local_1960;
                uVar59 = 0;
                uVar73 = uVar59;
                if ((int)local_1960 < (pFVar33->ParticleVariables).ArrayNum) {
                  uVar73 = uVar58 >> 0x1f;
                }
                if ((uVar73 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)((pFVar33->ParticleVariables).AllocatorInstance.Data + lVar68 + 8) != 0)
                {
                  uVar73 = uVar59;
                  if ((int)uVar23 < (pFVar33->ParticlePositionAccessors).ArrayNum) {
                    uVar73 = uVar58 >> 0x1f;
                  }
                  if ((uVar73 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (*(int *)((pFVar33->ParticlePositionAccessors).AllocatorInstance.Data +
                              (longlong)pFVar17 + 4) != -1) {
                    this_03 = FNiagaraSystemInstance::GetEmitters(this_02,&local_1290);
                    pTVar34 = TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int>::operator[]
                                        (this_03,uVar23);
                    pFVar3 = pTVar34->Object;
                    pFVar35 = GetParticleDataSet((FNiagaraDebugHud *)local_18c0.Data,this_02,pFVar3,
                                                 uVar23);
                    if (((pFVar35 != (FNiagaraDataSet *)0x0) &&
                        (local_1930 = pFVar35->CurrentData, local_1930 != (FNiagaraDataBuffer *)0x0)
                        ) && (local_1930->NumInstances != 0)) {
                      if ((int)uVar23 < (pFVar33->ParticlePositionAccessors).ArrayNum) {
                        uVar59 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar59 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                                ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)
                                 ((pFVar33->ParticlePositionAccessors).AllocatorInstance.Data +
                                 (longlong)(int)uVar23 * 8),&local_12e8,pFVar35);
                      if (local_12e8.bIsValid != false) {
                        bVar67 = pFVar3->bLocalSpace;
                        local_18b0 = local_1910->SceneView;
                        if (NiagaraDebugLocal::Settings.bUseParticleDisplayCenterRadius == false) {
                          fVar92 = 0.0;
                        }
                        else {
                          fVar92 = NiagaraDebugLocal::Settings.ParticleDisplayCenterRadius *
                                   NiagaraDebugLocal::Settings.ParticleDisplayCenterRadius;
                        }
                        if (NiagaraDebugLocal::Settings.bUseParticleDisplayClip == false) {
                          fVar93 = 0.0;
                        }
                        else {
                          uVar42 = NiagaraDebugLocal::Settings.ParticleDisplayClip.field0_0x0._s_0.X
                          ;
                          if (NiagaraDebugLocal::Settings.ParticleDisplayClip.field0_0x0._s_0.X <=
                              0.0) {
                            uVar42 = 0.0;
                          }
                          fVar93 = (float)(double)uVar42;
                          uVar42 = (double)fVar93;
                          if ((double)fVar93 <=
                              NiagaraDebugLocal::Settings.ParticleDisplayClip.field0_0x0._s_0.Y) {
                            uVar42 = NiagaraDebugLocal::Settings.ParticleDisplayClip.field0_0x0._s_0
                                     .Y;
                          }
                          fVar94 = (float)(double)uVar42;
                        }
                        local_1958 = 0xffffffff;
                        if (NiagaraDebugLocal::Settings.bUseMaxParticlesToDisplay != false) {
                          local_1958 = NiagaraDebugLocal::Settings.MaxParticlesToDisplay;
                        }
                        local_195c = 0;
                        local_1966 = bVar67;
                        FNiagaraSystemInstance::GetLWCConverter(this_02,&local_12b8,false);
                        uVar73 = 0;
                        if (local_1930->NumInstances != 0) {
                          uVar59 = ~uVar23 >> 0x1f;
                          pFVar64 = local_1930;
                          local_1954 = uVar59;
                          do {
                            pFVar36 = FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                                                (&local_12e8,&local_12c8,uVar73);
                            local_16f8._0_8_ = *(undefined8 *)pFVar36;
                            local_16f8._8_4_ = *(undefined4 *)&pFVar36->field_0x8;
                            FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                                      (&local_12b8,(TVector<double> *)&local_15c8._s_0,&local_16f8);
                            local_15e0._s_0.Z = local_15c8._s_0.Z;
                            uVar42 = local_15c8._s_0.X;
                            uVar9 = local_15c8._s_0.Y;
                            if (bVar67 != 0) {
                              auVar89._0_8_ =
                                   local_15c8._s_0.Z *
                                   (this_02->WorldTransform).Scale3D.ZW.m128d_f64[0];
                              auVar89._8_8_ =
                                   (this_02->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
                              auVar83 = *(undefined1 (*) [16])
                                         (this_02->WorldTransform).Rotation.XY.m128d_f64;
                              dVar87 = (this_02->WorldTransform).Rotation.ZW.m128d_f64[1];
                              dVar7 = (this_02->WorldTransform).Scale3D.XY.m128d_f64[0] *
                                      local_15c8._s_0.X;
                              dVar8 = (this_02->WorldTransform).Scale3D.XY.m128d_f64[1] *
                                      local_15c8._s_0.Y;
                              local_1218 = *(undefined1 (*) [16])
                                            (this_02->WorldTransform).Rotation.XY.m128d_f64;
                              auVar76 = blendpd(local_1218,
                                                *(undefined1 (*) [16])
                                                 (this_02->WorldTransform).Rotation.ZW.m128d_f64,2);
                              dVar80 = auVar89._0_8_ * local_1218._8_8_ -
                                       (this_02->WorldTransform).Rotation.ZW.m128d_f64[0] * dVar8;
                              auVar79._8_4_ = SUB84(dVar8,0);
                              auVar79._0_8_ = dVar7;
                              auVar79._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                              auVar74 = blendpd(auVar79,auVar89,2);
                              auVar85._8_4_ = SUB84(dVar80,0);
                              auVar85._0_8_ = dVar8 * local_1218._0_8_ - local_1218._8_8_ * dVar7;
                              auVar85._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
                              auVar75._0_8_ =
                                   auVar74._0_8_ *
                                   (this_02->WorldTransform).Rotation.ZW.m128d_f64[0] -
                                   auVar76._0_8_ * auVar89._0_8_;
                              auVar75._8_8_ =
                                   auVar74._8_8_ *
                                   (this_02->WorldTransform).Rotation.ZW.m128d_f64[1] -
                                   auVar76._8_8_ * auVar89._8_8_;
                              auVar74 = blendpd(auVar85,auVar75,2);
                              dVar80 = dVar80 + dVar80;
                              dVar84 = auVar75._0_8_ + auVar75._0_8_;
                              uVar91 = (undefined4)((ulonglong)dVar84 >> 0x20);
                              auVar86._0_8_ = auVar74._0_8_ + auVar74._0_8_;
                              auVar86._8_8_ = auVar74._8_8_ + auVar74._8_8_;
                              auVar81._8_4_ = SUB84(dVar84,0);
                              auVar81._0_8_ = dVar80;
                              auVar81._12_4_ = uVar91;
                              auVar77._8_4_ = SUB84(dVar84,0);
                              auVar77._0_8_ = dVar80;
                              auVar77._12_4_ = uVar91;
                              auVar74 = blendpd(auVar77,auVar86,2);
                              auVar79 = blendpd(auVar83,*(undefined1 (*) [16])
                                                         (this_02->WorldTransform).Rotation.ZW.
                                                         m128d_f64,2);
                              auVar82._0_8_ = auVar81._8_8_ * auVar83._0_8_ - auVar83._8_8_ * dVar80
                              ;
                              auVar82._8_8_ =
                                   auVar86._0_8_ * auVar83._8_8_ -
                                   (this_02->WorldTransform).Rotation.ZW.m128d_f64[0] * dVar84;
                              auVar78._0_8_ =
                                   auVar74._0_8_ *
                                   (this_02->WorldTransform).Rotation.ZW.m128d_f64[0] -
                                   auVar79._0_8_ * auVar86._0_8_;
                              auVar78._8_8_ =
                                   auVar74._8_8_ *
                                   (this_02->WorldTransform).Rotation.ZW.m128d_f64[1] -
                                   auVar79._8_8_ * auVar86._8_8_;
                              auVar76._8_4_ = SUB84(auVar82._8_8_,0);
                              auVar76._0_8_ = auVar82._0_8_;
                              auVar76._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
                              auVar83 = blendpd(auVar82,auVar78,2);
                              local_13e8 = auVar86._0_8_ * dVar87 + auVar89._0_8_ + auVar83._0_8_ +
                                           (this_02->WorldTransform).Translation.ZW.m128d_f64[0];
                              uVar42 = dVar80 * dVar87 + dVar7 + auVar76._8_8_ +
                                       (this_02->WorldTransform).Translation.XY.m128d_f64[0];
                              uVar9 = dVar84 * dVar87 + dVar8 + auVar78._0_8_ +
                                      (this_02->WorldTransform).Translation.XY.m128d_f64[1];
                              local_13f8._8_4_ = (int)uVar9;
                              local_13f8._0_8_ = uVar42;
                              local_13f8._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
                              local_15e0._s_0.Z = local_13e8;
                            }
                            local_15e0._8_4_ = (int)uVar9;
                            local_15e0._s_0.X = (double)uVar42;
                            local_15e0._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
                            local_13d0 = local_15e0._s_0.Z;
                            FSceneView::Project(local_18b0,&local_1318,
                                                (TVector<double> *)&local_15e0._s_0);
                            fVar90 = __real_40000000;
                            if (((fVar92 <= 0.0) ||
                                ((double)local_1318._padding_ * (double)local_1318._padding_ +
                                 (double)local_1318._padding_ * (double)local_1318._padding_ <
                                 (double)fVar92)) &&
                               (((double)fVar93 < local_1318.W && (local_1318.W <= (double)fVar94)))
                               ) {
                              local_13c8._s_0.X = local_15e0._s_0.X;
                              local_13c8._s_0.Y = local_15e0._s_0.Y;
                              local_13c8._s_0.Z = local_15e0._s_0.Z;
                              UCanvas::Project(local_1910,(TVector<double> *)&local_13a8._s_0,
                                               (TVector<double> *)&local_13c8._s_0,true);
                              local_908._padding_ = (longlong)local_908.StringBuffer;
                              local_908._padding_ = (longlong)local_908.StringBuffer;
                              local_908._padding_ = (longlong)local_e8;
                              local_908._padding_._0_2_ = 0;
                              if (NiagaraDebugLocal::Settings.bShowParticleIndex != false) {
                                TStringBuilderBase<wchar_t>::AppendfImpl
                                          ((TStringBuilderBase<wchar_t> *)&local_908,L"Particle(%u)"
                                          );
                              }
                              uVar58 = 0;
                              if ((int)uVar23 < (pFVar33->ParticleVariables).ArrayNum) {
                                uVar58 = uVar59;
                              }
                              if ((uVar58 == 0) &&
                                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pFVar71 = (pFVar33->ParticleVariables).AllocatorInstance.Data;
                              iVar51 = *(int *)(pFVar71 + lVar68 + 8);
                              this_05 = *(FNiagaraDataSetDebugAccessor **)(pFVar71 + lVar68);
                              pFVar62 = this_05 + iVar51;
                              while( true ) {
                                if (*(int *)(pFVar71 + lVar68 + 8) != iVar51) {
                                  local_1967 = 0;
                                  `TCheckedPointerIterator<FNiagaraDataSetDebugAccessor_const_,int,0>
                                  ::operator!='::__l2::<lambda_1>::operator()(&local_1967);
                                }
                                bVar20 = NiagaraDebugLocal::Settings.bShowParticleVariablesVertical;
                                if (this_05 == pFVar62) break;
                                if ((ulonglong)local_908._padding_ <
                                    (wchar_t *)(local_908._padding_ + 2)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_908,1);
                                }
                                wVar50 = L' ';
                                if (bVar20 != false) {
                                  wVar50 = L'\n';
                                }
                                *(wchar_t *)local_908._padding_ = wVar50;
                                local_908._padding_ = local_908._padding_ + 2;
                                local_16c8 = this_05->VariableName;
                                pFVar37 = ::FName::ToString(&local_16c8,&local_1348);
                                iVar1 = (pFVar37->Data).ArrayNum;
                                iVar66 = iVar1 + -1;
                                if (iVar1 == 0) {
                                  iVar66 = 0;
                                }
                                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                          ((TStringBuilderBase<wchar_t> *)&local_908,
                                           (wchar_t *)(pFVar37->Data).AllocatorInstance.Data,iVar66)
                                ;
                                if (local_1348.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1348.Data.AllocatorInstance.Data);
                                }
                                if ((ulonglong)local_908._padding_ <
                                    (wchar_t *)(local_908._padding_ + 2)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_908,1);
                                }
                                pFVar64 = local_1930;
                                *(wchar_t *)local_908._padding_ = L'(';
                                local_908._padding_ = local_908._padding_ + 2;
                                FNiagaraDataSetDebugAccessor::
                                StringAppend<TStringBuilderWithBuffer<wchar_t,1024>_>
                                          (this_05,&local_908,local_1930,uVar73);
                                if ((ulonglong)local_908._padding_ <
                                    (wchar_t *)(local_908._padding_ + 2)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_908,1);
                                }
                                *(wchar_t *)local_908._padding_ = L')';
                                local_908._padding_ = local_908._padding_ + 2;
                                this_05 = this_05 + 1;
                              }
                              if ((ulonglong)local_908._padding_ <
                                  (wchar_t *)(local_908._padding_ + 2)) {
                                TStringBuilderBase<wchar_t>::Extend
                                          ((TStringBuilderBase<wchar_t> *)&local_908,1);
                              }
                              _Str = local_908._padding_;
                              FVar54.Data = local_1858.Data;
                              iVar51 = 0;
                              *(wchar_t *)local_908._padding_ = L'\0';
                              local_1848 = (float)local_13a8._s_0.X;
                              fStack_1844 = (float)local_13a8._s_0.Y;
                              TVar14.field0_0x0._s_0.Y = fStack_1844;
                              TVar14.field0_0x0._s_0.X = local_1848;
                              NiagaraDebugLocal::GetTextLocation
                                        ((TTuple<UE::Math::TVector2<float>,UE::Math::TVector2<float>_>
                                          *)local_1830,(UFont *)local_1858.Data,
                                         (wchar_t *)local_908._padding_,
                                         &NiagaraDebugLocal::Settings.ParticleTextOptions,TVar14);
                              uVar95 = local_1830._12_4_;
                              uVar91 = local_1830._8_4_;
                              FVar55.Data = local_1878.Data;
                              fVar90 = __real_40000000;
                              FCanvas::DrawTile((FCanvas *)local_1878.Data,
                                                (double)((float)local_1830._8_4_ - fVar16),
                                                (double)((float)local_1830._12_4_ - fVar16),
                                                (double)((float)local_1830._0_4_ + __real_40000000),
                                                (double)((float)local_1830._4_4_ + __real_40000000),
                                                0.0,0.0,0.0,0.0,
                                                &NiagaraDebugLocal::Settings.DefaultBackgroundColor,
                                                (FTexture *)0x0,true);
                              local_15a8 = (wchar_t *)_Str;
                              if ((wchar_t *)_Str != (wchar_t *)0x0) {
                                sVar38 = wcslen((wchar_t *)_Str);
                                iVar51 = (int)sVar38;
                              }
                              local_1338._12_4_ = uStack_159c;
                              local_1338.Size = iVar51;
                              local_1338.DataPtr = local_15a8;
                              iStack_15a0 = iVar51;
                              FCanvas::DrawShadowedString
                                        ((FCanvas *)FVar55.Data,(double)(float)uVar91,
                                         (double)(float)uVar95,&local_1338,(UFont *)FVar54.Data,
                                         (FLinearColor *)&local_1578._s_0,&FLinearColor::Black);
                              uVar58 = local_195c + 1;
                              local_195c = uVar58;
                              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                                        ((TStringBuilderBase<wchar_t> *)&local_908);
                              pFVar33 = local_1940;
                              uVar23 = local_1960;
                              uVar59 = local_1954;
                              bVar67 = local_1966;
                              if (local_1958 <= uVar58) break;
                            }
                            uVar73 = uVar73 + 1;
                          } while (uVar73 < pFVar64->NumInstances);
                        }
                      }
                    }
                  }
                }
                local_1950 = (FCachedVariables *)((longlong)local_1950 + 8);
                local_1960 = uVar23 + 1;
                lVar68 = lVar68 + 0x10;
                fVar94 = __real_7f7fffff;
              } while ((int)local_1960 < (pFVar33->ParticleVariables).ArrayNum);
              uVar99 = local_1520._0_4_;
              uVar100 = local_1520._4_4_;
              this_07 = local_1850;
              this_08 = local_1900;
              pFVar26 = local_1938;
              uVar95 = local_1530;
              uVar96 = uStack_152c;
              uVar97 = uStack_1528;
              uVar98 = uStack_1524;
              bVar67 = local_1965;
            }
          }
          pUVar18 = local_1910;
          local_1388._s_0.Z = (double)CONCAT44(uVar100,uVar99);
          local_1388._0_4_ = uVar95;
          local_1388._4_4_ = uVar96;
          local_1388._8_4_ = uVar97;
          local_1388._12_4_ = uVar98;
          UCanvas::Project(local_1910,(TVector<double> *)&local_15f8._s_0,
                           (TVector<double> *)&local_1388._s_0,true);
          if ((__real_3e45798ee2308c3a <
               (double)CONCAT44((uint)((ulonglong)local_15f8._16_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_15f8._s_0.Z,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
             (NiagaraDebugLocal::DrawSystemLocation
                        (pUVar18,(bool)bVar67,(TVector<double> *)&local_15f8._s_0,
                         (TRotator<double> *)&local_1368),
             NiagaraDebugLocal::Settings.SystemDebugVerbosity != None)) {
            pUVar39 = pFVar26[0x15].Handle;
            local_1128._padding_ = (longlong)local_1128.StringBuffer;
            local_1128._padding_ = (longlong)local_1128.StringBuffer;
            local_1128._padding_._0_2_ = 0;
            local_1128._padding_ = (longlong)&local_908;
            local_16c0 = (FName)this_07->_padding_;
            ::FName::ToString(&local_16c0,&local_16b0);
            TStringBuilderBase<wchar_t>::AppendfImpl
                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"System - %s\n");
            if (local_16b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_16b0.Data.AllocatorInstance.Data);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"Component - ",0xc);
            if (pUVar39 != (UObject *)0x0) {
              if (*(int *)&pUVar39[0xc].field_0x10 < 2) {
                local_16b8.ComparisonIndex.Value = *(uint *)&pUVar39->field_0x18;
                local_16b8.Number = *(uint *)&pUVar39->field_0x1c;
                ::FName::ToString(&local_16b8,&local_17e0);
              }
              else {
                ::FString::FString(&local_17e0,(FString *)&pUVar39[0xc].field_0x8);
              }
              if (local_17e0.Data.ArrayNum == 0) {
                FVar55.Data = (FScriptContainerElement *)L"";
LAB_14928e94e:
                sVar38 = wcslen((wchar_t *)FVar55.Data);
                iVar51 = (int)sVar38;
              }
              else {
                iVar51 = 0;
                FVar55.Data = local_17e0.Data.AllocatorInstance.Data;
                if (local_17e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                goto LAB_14928e94e;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        ((TStringBuilderBase<wchar_t> *)&local_1128,(wchar_t *)FVar55.Data,iVar51);
              if (local_17e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_17e0.Data.AllocatorInstance.Data);
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        ((TStringBuilderBase<wchar_t> *)&local_1128,L"/",1);
            }
            local_1840 = pFVar26[3];
            ::FName::ToString((FName *)&local_1840,&local_16a0);
            if (local_16a0.Data.ArrayNum == 0) {
              FVar55.Data = (FScriptContainerElement *)L"";
LAB_14928e9cc:
              sVar38 = wcslen((wchar_t *)FVar55.Data);
              iVar51 = (int)sVar38;
            }
            else {
              iVar51 = 0;
              FVar55.Data = local_16a0.Data.AllocatorInstance.Data;
              if (local_16a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_14928e9cc;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&local_1128,(wchar_t *)FVar55.Data,iVar51);
            if (local_16a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_16a0.Data.AllocatorInstance.Data);
            }
            if ((pUVar39 != (UObject *)0x0) &&
               (NiagaraDebugLocal::Settings.SystemDebugVerbosity == Verbose)) {
              local_1670 = *(FName *)(*(longlong *)&pUVar39->field_0x10 + 0x18);
              ::FName::ToString(&local_1670,&local_1690);
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)&local_1128,L" OwnerClass(%s)");
              if (local_1690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1690.Data.AllocatorInstance.Data);
              }
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"\n",1);
            if (NiagaraDebugLocal::Settings.SystemDebugVerbosity == Verbose) {
              UEnum::GetNameStringByIndex(local_18f0,&local_14f0,this_02->RequestedExecutionState);
              UEnum::GetNameStringByIndex(local_18f0,&local_12f8,this_02->ActualExecutionState);
              UEnum::GetNameStringByIndex(local_1770,&local_1328,(uint)this_02->SystemInstanceState)
              ;
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)&local_1128,
                         L"System InstanceState(%s) VMActualState(%s) VMRequestedState(%s)\n");
              if (local_1328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1328.Data.AllocatorInstance.Data);
              }
              if (local_12f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_12f8.Data.AllocatorInstance.Data);
              }
              if (local_14f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_14f0.Data.AllocatorInstance.Data);
              }
              if (*(byte *)(pFVar26 + 0xd0) != 0) {
                UEnum::GetNameStringByIndex(local_1768,&local_14e0,(uint)*(byte *)(pFVar26 + 0xd0));
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"Pooled - %s\n");
                if (local_14e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_14e0.Data.AllocatorInstance.Data);
                }
              }
              if ((this_08 == (FNiagaraSystemInstanceController *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((this_08->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
                bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4531953176097587069>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                    ,0x83,"IsValid()");
                if (bVar20) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (((this_08->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar20)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if (((this_08->SystemInstance).Object)->bSolo != '\0') {
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"Solo(true)",10);
                if ((*(byte *)(pFVar26 + 199) & 1) != 0) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L" ForceSolo",10);
                }
                EVar21 = UNiagaraComponent::GetAgeUpdateMode((UNiagaraComponent *)pFVar26);
                if ((EVar21 == DesiredAge) || (EVar21 == DesiredAgeNoSeek)) {
                  UNiagaraComponent::GetDesiredAge((UNiagaraComponent *)pFVar26);
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L" DesiredAge(%6.3f)");
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"\n",1);
              }
              if ((((*(byte *)((longlong)pFVar26 + 0x1a9) & 8) != 0) ||
                  (cVar22 = (**(code **)&pFVar26->Handle[0x22].field_0x10)(pFVar26), cVar22 == '\0')
                  ) || ((pUVar39 != (UObject *)0x0 && ((char)pUVar39[2].field_0x8 < '\0')))) {
                (**(code **)&pFVar26->Handle[0x22].field_0x10)(pFVar26);
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,
                           L"HiddenInGame(%d) IsVisible(%d) GetVisibleFlag(%d)");
                if (pUVar39 != (UObject *)0x0) {
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L" OwnerActorHidden(%d)");
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"\n",1);
              }
              if ((*(byte *)(pFVar26 + 0xcf) & 4) != 0) {
                ::FName::ToString((FName *)(pFVar26 + 0xd5),&local_14d0);
                pUVar39 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar26 + 0xd4));
                if (pUVar39 == (UObject *)0x0) {
                  ::FString::FString(&local_1810,L"None");
                }
                else {
                  local_1760.ComparisonIndex.Value = *(uint *)&pUVar39->field_0x18;
                  local_1760.Number = *(uint *)&pUVar39->field_0x1c;
                  ::FName::ToString(&local_1760,&local_1810);
                }
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,
                           L"Auto Attachment - Parent(%s) Socket(%s)\n");
                if (local_1810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1810.Data.AllocatorInstance.Data);
                }
                if (local_14d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_14d0.Data.AllocatorInstance.Data);
                }
              }
              this_04 = UNiagaraComponent::GetSimCache((UNiagaraComponent *)pFVar26);
              if (this_04 != (UNiagaraSimCache *)0x0) {
                if (this_04->_padding_ == 0) {
                  ::FString::FString(&local_17f0,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_04,&local_17f0,(UObject *)0x0,None);
                }
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"SimCache(%s)\n");
                if (local_17f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_17f0.Data.AllocatorInstance.Data);
                }
              }
              if ((bool)bVar67 != false) {
                if (*(int *)(pFVar26 + 0xe5) != -1) {
                  pUVar40 = UNiagaraSystem::GetEffectType(this_07);
                  if (pUVar40 == (UNiagaraEffectType *)0x0) {
                    ::FString::FString(&local_1800,L"None");
                  }
                  else {
                    local_1758 = (FName)pUVar40->_padding_;
                    ::FName::ToString(&local_1758,&local_1800);
                  }
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L"Scalability - %s\n");
                  if (local_1800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1800.Data.AllocatorInstance.Data);
                  }
                  if (this_02->SignificanceIndex != -1) {
                    TStringBuilderBase<wchar_t>::AppendfImpl
                              ((TStringBuilderBase<wchar_t> *)&local_1128,
                               L"SignificanceIndex - %d\n");
                  }
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
                  TickingGroupEnum = StaticEnum<enum_ETickingGroup>();
                  _Init_thread_footer(&::_TSS2);
                }
                if (TickingGroupEnum != (UEnum *)0x0) {
                  EVar24 = FNiagaraSystemInstance::CalculateTickGroup(this_02);
                  UEnum::GetNameStringByValue(TickingGroupEnum,&local_14c0,(longlong)(int)EVar24);
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L"TickGroup - %s\n");
                  if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
                  }
                }
                NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>
                          (&local_1128,(UNiagaraComponent *)pFVar26,this_02,
                           (uint)(local_18e8->FeatureLevel).Value);
                UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)pFVar26);
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"LastRenderTime - %5.2f");
                if ((*(byte *)((longlong)pFVar26 + 0x281) & 0x40) != 0) {
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L" bRenderCustomDepth",0x13)
                  ;
                }
                if (*(char *)((longlong)pFVar26 + 0x681) == '\x01') {
                  pwVar56 = L" OcclusionQuery(AlwaysEnabled)";
LAB_14928f06c:
                  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            ((TStringBuilderBase<wchar_t> *)&local_1128,pwVar56,0x1e);
                }
                else if (*(char *)((longlong)pFVar26 + 0x681) == '\x02') {
                  pwVar56 = L" OcclusionQuery(AlwaysDisable)";
                  goto LAB_14928f06c;
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"\n",1);
                if (this_07->bSupportLargeWorldCoordinates != 0) {
                  uVar42 = *(undefined8 *)&(this_02->LWCTile).field0_0x0;
                  local_1500._4_4_ = (float)((ulonglong)uVar42 >> 0x20);
                  uVar23 = (uint)___xmm_7fffffff7fffffff7fffffff7fffffff;
                  local_1500 = uVar42;
                  if (((__real_38d1b717 <
                        (float)((uint)((float)uVar42 -
                                      UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X) &
                               uVar23)) ||
                      (__real_38d1b717 <
                       (float)((uint)(local_1500._4_4_ -
                                     UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y) &
                              uVar23))) ||
                     (__real_38d1b717 <
                      (float)((uint)((this_02->LWCTile).field0_0x0._s_0.Z -
                                    UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z) & uVar23
                             ))) {
                    TStringBuilderBase<wchar_t>::AppendfImpl
                              ((TStringBuilderBase<wchar_t> *)&local_1128,
                               L"LWCTile - %.1f, %.1f, %.1f");
                  }
                }
              }
              FNiagaraSystemInstanceController::GetTotalBytesUsed(this_08);
              TStringBuilderBase<wchar_t>::AppendfImpl
                        ((TStringBuilderBase<wchar_t> *)&local_1128,L"Memory - %6.2fMB\n");
            }
            if ((bool)bVar67 == false) {
              if (0 < (int)NiagaraDebugLocal::Settings.SystemDebugVerbosity) {
                if (pFVar26[0xff].Handle == (UObject *)0x0) {
                  pUVar40 = UNiagaraSystem::GetEffectType(this_07);
                  if (pUVar40 == (UNiagaraEffectType *)0x0) {
                    ::FString::FString(local_17a0,L"None");
                  }
                  else {
                    local_1718 = (FName)pUVar40->_padding_;
                    ::FName::ToString(&local_1718,local_17a0);
                  }
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,
                             L"Deactivated by Scalability - %s ");
                  if (local_17a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_17a0[0].Data.AllocatorInstance.Data);
                  }
                  if (1 < (int)NiagaraDebugLocal::Settings.SystemDebugVerbosity) {
                    local_1920.Significance = 1.0;
                    local_1920.LastVisibleTime = 0.0;
                    local_1920.SystemDataIndex = -1;
                    local_1920.bCulledByGlobalBudget = '\0';
                    local_1920.bCulledByVisibility = '\0';
                    local_1920.bCulledByInstanceCount = '\0';
                    local_1920.bCulledByDistance = '\0';
                    local_1920.bPreviousCulled = '\0';
                    local_1920.bCulled = '\0';
                    local_1920.bNewlyRegisteredDirty = '\0';
                    local_1920.bNewlyRegistered = '\x01';
                    bVar20 = FNiagaraWorldManager::GetScalabilityState
                                       (local_1710,(UNiagaraComponent *)pFVar26,&local_1920);
                    if (!bVar20) {
                      pwVar56 = L"- Scalability State Unknown\n";
                      goto LAB_149290b1a;
                    }
                    TStringBuilderBase<wchar_t>::AppendfImpl
                              ((TStringBuilderBase<wchar_t> *)&local_1128,L"- Significance(%.2f)");
                    if (local_1920.bCulledByDistance != '\0') {
                      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_1128,L" DistanceCulled",0xf);
                    }
                    if (local_1920.bCulledByInstanceCount != '\0') {
                      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_1128,L" InstanceCulled",0xf);
                    }
                    if (local_1920.bCulledByVisibility != '\0') {
                      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_1128,L" VisibilityCulled",
                                 0x11);
                    }
                    if ((bool)local_1920.bCulledByGlobalBudget) {
                      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                ((TStringBuilderBase<wchar_t> *)&local_1128,L" GlobalBudgetCulled",
                                 0x13);
                    }
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)&local_1128,L"\n",1);
                  }
                }
                else {
                  pwVar56 = L"Using Cull Proxy";
LAB_149290b1a:
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,pwVar56);
                }
              }
            }
            else {
              FNiagaraSystemInstance::GetEmitters(this_02,&local_1598);
              pTVar69 = local_1598.DataPtr + local_1598.ArrayNum;
              iVar51 = 0;
              for (pTVar34 = local_1598.DataPtr; pTVar34 != pTVar69; pTVar34 = pTVar34 + 1) {
                pFVar3 = pTVar34->Object;
                iVar66 = iVar51;
                if (pFVar3->ExecutionState != Disabled) {
                  iVar66 = iVar51 + 1;
                  if (pFVar3->ExecutionState != Active) {
                    iVar66 = iVar51;
                  }
                  (**(code **)(pFVar3->_padding_ + 0x58))(pFVar3,iVar51);
                  if (NiagaraDebugLocal::Settings.SystemEmitterVerbosity == Verbose) {
                    pFVar41 = FNiagaraEmitterInstance::GetEmitterHandle(pTVar34->Object);
                    pUVar4 = (pFVar41->VersionedInstance).Emitter.field0_0x0.DebugPtr;
                    if (pUVar4 == (UNiagaraEmitter *)0x0) {
                      pUVar5 = (pFVar41->StatelessEmitter).field0_0x0.DebugPtr;
                      if (pUVar5 == (UNiagaraStatelessEmitter *)0x0) {
                        local_18d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_18d0.Data.ArrayNum = 0;
                        local_18d0.Data.ArrayMax = 0;
                      }
                      else {
                        ::FString::FString(&local_18d0,(FString *)&pUVar5->_padding_);
                      }
                    }
                    else {
                      ::FString::FString(&local_18d0,(FString *)&pUVar4->_padding_);
                    }
                    lVar68 = pTVar34->Object->_padding_;
                    if (pTVar34->Object->SimTarget == GPUComputeSim) {
                      (**(code **)(lVar68 + 0x58))();
                      UEnum::GetNameStringByIndex
                                (local_18f0,&local_14b0,pTVar34->Object->ExecutionState);
                      TStringBuilderBase<wchar_t>::AppendfImpl
                                ((TStringBuilderBase<wchar_t> *)&local_1128,
                                 L"Emitter(GPU) %s - State %s - Particles %d\n");
                      FVar55.Data = local_14b0.Data.AllocatorInstance.Data;
                    }
                    else {
                      (**(code **)(lVar68 + 0x58))();
                      UEnum::GetNameStringByIndex
                                (local_18f0,&local_14a0,pTVar34->Object->ExecutionState);
                      TStringBuilderBase<wchar_t>::AppendfImpl
                                ((TStringBuilderBase<wchar_t> *)&local_1128,
                                 L"Emitter %s - State %s - Particles %d\n");
                      FVar55.Data = local_14a0.Data.AllocatorInstance.Data;
                    }
                    if (FVar55.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar55.Data);
                    }
                    if (local_18d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_18d0.Data.AllocatorInstance.Data);
                    }
                  }
                }
                iVar51 = iVar66;
                this_07 = local_1850;
              }
              if (NiagaraDebugLocal::Settings.SystemEmitterVerbosity == Basic) {
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"Emitters - %d / %d\n");
                TStringBuilderBase<wchar_t>::AppendfImpl
                          ((TStringBuilderBase<wchar_t> *)&local_1128,L"Particles - %d\n");
              }
              if (bVar15) {
                pFVar33 = NiagaraDebugLocal::GetCachedVariables(this_07);
                pFVar63 = (pFVar33->EngineVariables).AllocatorInstance.Data;
                iVar51 = (pFVar33->EngineVariables).ArrayNum;
                pFVar71 = pFVar63 + (longlong)iVar51 * 4;
                local_1950 = pFVar33;
                while( true ) {
                  if ((pFVar33->EngineVariables).ArrayNum != iVar51) {
                    local_1964 = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_1964);
                  }
                  pFVar72 = local_18d8;
                  if (pFVar63 == pFVar71) break;
                  iVar66 = *(int *)pFVar63;
                  local_1750 = this_02;
                  UE::Core::Private::Function::CheckCallable
                            (*(void **)&NiagaraDebugLocal::GEngineVariables[iVar66].field_0x10);
                  pcVar6 = *(code **)&NiagaraDebugLocal::GEngineVariables[iVar66].field_0x10;
                  plVar53 = *(longlong **)&NiagaraDebugLocal::GEngineVariables[iVar66].field_0x38;
                  if (*(longlong **)&NiagaraDebugLocal::GEngineVariables[iVar66].field_0x38 ==
                      (longlong *)0x0) {
                    plVar53 = (longlong *)&NiagaraDebugLocal::GEngineVariables[iVar66].field_0x20;
                  }
                  uVar42 = (**(code **)(*plVar53 + 8))();
                  (*pcVar6)(local_1680,uVar42,&local_1750);
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            ((TStringBuilderBase<wchar_t> *)&local_1128,L"%s = %s\n");
                  if (local_1680[0] != (void *)0x0) {
                    FMemory::Free(local_1680[0]);
                  }
                  pFVar63 = pFVar63 + 4;
                }
                if (0 < (pFVar33->SystemVariables).ArrayNum) {
                  if ((local_18d8 == (FNiagaraSystemSimulation *)0x0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar20)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_1954 = (pFVar33->SystemVariables).ArrayNum;
                  uVar25 = (ulonglong)(int)local_1954;
                  pFVar64 = (pFVar72->MainDataSet).CurrentData;
                  uVar23 = this_02->SystemInstanceIndex;
                  uVar70 = (ulonglong)uVar23;
                  pFVar71 = (pFVar33->SystemVariables).AllocatorInstance.Data;
                  local_1938 = (FObjectPtr_u_0 *)(pFVar71 + uVar25 * 0x40);
                  pFVar71 = pFVar71 + 8;
                  while( true ) {
                    pFVar26 = local_1938;
                    if ((pFVar33->SystemVariables).ArrayNum != (int)uVar25) {
                      local_1963 = 0;
                      `TCheckedPointerIterator<FNiagaraDataSetDebugAccessor_const_,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(&local_1963);
                    }
                    if ((FObjectPtr_u_0 *)(pFVar71 + -8) == pFVar26) break;
                    local_1748 = *(FObjectPtr_u_0 *)(pFVar71 + -8);
                    pFVar37 = ::FName::ToString((FName *)&local_1748,&local_1490);
                    iVar66 = (pFVar37->Data).ArrayNum;
                    pFVar63 = (pFVar37->Data).AllocatorInstance.Data;
                    iVar51 = iVar66 + -1;
                    if (iVar66 == 0) {
                      iVar51 = 0;
                    }
                    uVar57 = (ulong64)iVar51;
                    if ((ulonglong)local_1128._padding_ <
                        (TStringBuilderWithBuffer<wchar_t,1024> *)
                        (local_1128._padding_ + uVar57 * 2)) {
                      TStringBuilderBase<wchar_t>::Extend
                                ((TStringBuilderBase<wchar_t> *)&local_1128,uVar57);
                    }
                    if (iVar51 != 0) {
                      pvVar43 = FGenericPlatformString::Memcpy
                                          ((void *)local_1128._padding_,pFVar63,uVar57 * 2);
                      local_1128._padding_ = uVar57 * 2 + (longlong)pvVar43;
                    }
                    if (local_1490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1490.Data.AllocatorInstance.Data);
                    }
                    if ((ulonglong)local_1128._padding_ <
                        (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 6)) {
                      TStringBuilderBase<wchar_t>::Extend
                                ((TStringBuilderBase<wchar_t> *)&local_1128,3);
                    }
                    pvVar43 = FGenericPlatformString::Memcpy((void *)local_1128._padding_,L" = ",6);
                    pvVar43 = (void *)((longlong)pvVar43 + 6);
                    local_1128._padding_ = (longlong)pvVar43;
                    if (pFVar71[0x18].field_0x0 == '\0') {
                      if (pFVar71[0x19] == (FScriptContainerElement)0x0) {
                        bVar20 = false;
                        if (*(int *)(pFVar71 + 0x1c) != 0) {
                          uVar73 = 0;
                          while( true ) {
                            bVar20 = true;
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%d");
                            uVar73 = uVar73 + 1;
                            if (*(uint *)(pFVar71 + 0x1c) <= uVar73) break;
                            if ((ulonglong)local_1128._padding_ <
                                (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 4)
                               ) {
                              TStringBuilderBase<wchar_t>::Extend
                                        ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                            }
                            pvVar43 = FGenericPlatformString::Memcpy
                                                ((void *)local_1128._padding_,L", ",4);
                            local_1128._padding_ = (longlong)pvVar43 + 4;
                          }
                        }
                        if (*(int *)&pFVar71[0x20].field_0x0 != 0) {
                          uVar73 = 0;
                          if (!bVar20) goto LAB_14928f87e;
                          do {
                            if ((ulonglong)local_1128._padding_ <
                                (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 4)
                               ) {
                              TStringBuilderBase<wchar_t>::Extend
                                        ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                            }
                            pvVar43 = FGenericPlatformString::Memcpy
                                                ((void *)local_1128._padding_,L", ",4);
                            local_1128._padding_ = (longlong)pvVar43 + 4;
LAB_14928f87e:
                            bVar20 = true;
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%.2f");
                            uVar73 = uVar73 + 1;
                          } while (uVar73 < *(uint *)&pFVar71[0x20].field_0x0);
                        }
                        if (*(int *)(pFVar71 + 0x24) != 0) {
                          uVar59 = 0;
                          uVar73 = 0;
                          if (!bVar20) goto LAB_14928f93d;
                          do {
                            uVar59 = uVar73;
                            if ((ulonglong)local_1128._padding_ <
                                (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 4)
                               ) {
                              TStringBuilderBase<wchar_t>::Extend
                                        ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                            }
                            pvVar43 = FGenericPlatformString::Memcpy
                                                ((void *)local_1128._padding_,L", ",4);
                            local_1128._padding_ = (longlong)pvVar43 + 4;
LAB_14928f93d:
                            if (((pFVar64 != (FNiagaraDataBuffer *)0x0) &&
                                (*(int *)&pFVar71[0x30].field_0x0 != -1)) &&
                               ((uVar23 < pFVar64->NumInstances &&
                                (uVar59 < *(uint *)(pFVar71 + 0x24))))) {
                              FGenericPlatformMath::LoadHalf
                                        ((ushort *)
                                         ((pFVar64->HalfData).AllocatorInstance.Data +
                                         (ulonglong)
                                         ((*(int *)&pFVar71[0x30].field_0x0 + uVar59) *
                                         pFVar64->HalfStride) + uVar70 * 2));
                            }
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%.2f");
                            uVar73 = uVar59 + 1;
                          } while (uVar59 + 1 < *(uint *)(pFVar71 + 0x24));
                        }
                      }
                      else {
                        if ((((pFVar64 == (FNiagaraDataBuffer *)0x0) ||
                             (*(int *)&pFVar71[0x28].field_0x0 == -1)) ||
                            (pFVar64->NumInstances <= uVar23)) || (*(int *)(pFVar71 + 0x1c) == 0)) {
                          pwVar56 = L"false";
                        }
                        else {
                          pwVar56 = L"false";
                          if (*(int *)((pFVar64->Int32Data).AllocatorInstance.Data +
                                      (ulonglong)
                                      (*(int *)&pFVar71[0x28].field_0x0 * pFVar64->Int32Stride) +
                                      uVar70 * 4) == -1) {
                            pwVar56 = L"true";
                          }
                        }
                        sVar38 = wcslen(pwVar56);
                        uVar57 = (ulong64)(int)sVar38;
                        if ((ulonglong)local_1128._padding_ <
                            (TStringBuilderWithBuffer<wchar_t,1024> *)
                            ((longlong)pvVar43 + uVar57 * 2)) {
                          TStringBuilderBase<wchar_t>::Extend
                                    ((TStringBuilderBase<wchar_t> *)&local_1128,uVar57);
                        }
                        if ((int)sVar38 != 0) {
                          pvVar43 = FGenericPlatformString::Memcpy
                                              ((void *)local_1128._padding_,pwVar56,uVar57 * 2);
                          local_1128._padding_ = (longlong)pvVar43 + uVar57 * 2;
                        }
                      }
                    }
                    else {
                      if (((pFVar64 == (FNiagaraDataBuffer *)0x0) ||
                          (*(int *)&pFVar71[0x28].field_0x0 == -1)) ||
                         ((pFVar64->NumInstances <= uVar23 || (*(int *)(pFVar71 + 0x1c) == 0)))) {
                        iVar51 = 0;
                      }
                      else {
                        iVar51 = *(int *)((pFVar64->Int32Data).AllocatorInstance.Data +
                                         (ulonglong)
                                         (*(int *)&pFVar71[0x28].field_0x0 * pFVar64->Int32Stride) +
                                         uVar70 * 4);
                      }
                      pUVar49 = (UEnum *)0x0;
                      if (*(short *)&pFVar71[8].field_0x0 == 3) {
                        if (*(longlong *)pFVar71 == 0) {
                          pFVar37 = GetTypeName<UEnum>(&local_1250);
                          if ((pFVar37->Data).ArrayNum == 0) {
                            pwVar56 = L"";
                          }
                          else {
                            pwVar56 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                          }
                    /* WARNING: Subroutine does not return */
                          CastLogError(L"nullptr",pwVar56);
                        }
                        pUVar32 = Z_Construct_UClass_UEnum_NoRegister();
                        bVar20 = FObjectPtr::IsA((FObjectPtr *)pFVar71,pUVar32);
                        if ((!bVar20) || (pUVar49 = *(UEnum **)pFVar71, pUVar49 == (UEnum *)0x0)) {
                          pFVar37 = GetTypeName<UEnum>(&local_12a0);
                          pwVar56 = L"";
                          if ((pFVar37->Data).ArrayNum == 0) {
                            pwVar61 = L"";
                          }
                          else {
                            pwVar61 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                          }
                          pFVar37 = GetFullNameForCastLogError<UObject>
                                              (&local_1240,*(UObject **)pFVar71);
                          if ((pFVar37->Data).ArrayNum != 0) {
                            pwVar56 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                          }
                    /* WARNING: Subroutine does not return */
                          CastLogError(pwVar56,pwVar61);
                        }
                      }
                      pFVar44 = UEnum::GetDisplayNameTextByValue
                                          (pUVar49,&local_1480,(longlong)iVar51);
                      FText::ToString(pFVar44);
                      TStringBuilderBase<wchar_t>::AppendfImpl
                                ((TStringBuilderBase<wchar_t> *)&local_1128,L"%d (%s)");
                      if (local_1480.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_1480.TextData.Reference + 0x10))();
                      }
                    }
                    if ((ulonglong)local_1128._padding_ <
                        (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 2)) {
                      TStringBuilderBase<wchar_t>::Extend
                                ((TStringBuilderBase<wchar_t> *)&local_1128,1);
                    }
                    pvVar43 = FGenericPlatformString::Memcpy((void *)local_1128._padding_,L"\n",2);
                    local_1128._padding_ = (longlong)pvVar43 + 2;
                    uVar25 = (ulonglong)local_1954;
                    pFVar71 = pFVar71 + 0x40;
                    pFVar33 = local_1950;
                  }
                }
                pFVar72 = local_18d8;
                if (0 < (pFVar33->ParameterStoreVariables).ArrayNum) {
                  iVar51 = (pFVar33->ParameterStoreVariables).ArrayNum;
                  pFVar65 = (pFVar33->ParameterStoreVariables).AllocatorInstance.Data;
                  pFVar63 = pFVar65 + (longlong)iVar51 * 0x14;
                  pFVar71 = pFVar65 + 8;
                  while( true ) {
                    if ((local_1950->ParameterStoreVariables).ArrayNum != iVar51) {
                      local_1962 = 0;
                      `TCheckedPointerIterator<NiagaraDebugLocal::FParameterStoreVariable_const_,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(&local_1962);
                    }
                    pFVar33 = local_1950;
                    if (pFVar65 == pFVar63) break;
                    iVar66 = *(int *)(pFVar65 + 4);
                    if ((iVar66 < 0) || ((this_02->Emitters).ArrayNum <= iVar66)) {
                      lVar68 = 0;
                    }
                    else {
                      if (((this_02->Emitters).ArrayNum <= iVar66) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      lVar68 = (**(code **)(**(longlong **)
                                              ((this_02->Emitters).AllocatorInstance.Data +
                                              (longlong)iVar66 * 0x10) + 0x68))();
                    }
                    switch(*(undefined4 *)pFVar65) {
                    case 0:
                      this_06 = this_02->OverrideParameters;
                      goto LAB_14928fb7f;
                    case 1:
                      if ((pFVar72 == (FNiagaraSystemSimulation *)0x0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      this_06 = (FNiagaraUserRedirectionParameterStore *)
                                &((pFVar72->SpawnExecContext).Ptr)->Parameters;
                      goto LAB_14928fb7f;
                    case 2:
                      if ((pFVar72 == (FNiagaraSystemSimulation *)0x0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      this_06 = (FNiagaraUserRedirectionParameterStore *)
                                &((pFVar72->UpdateExecContext).Ptr)->Parameters;
LAB_14928fb7f:
                      if (this_06 != (FNiagaraUserRedirectionParameterStore *)0x0) {
                        pFVar45 = FNiagaraTypeDefinitionHandle::Resolve
                                            ((FNiagaraTypeDefinitionHandle *)(pFVar65 + 0x10));
                        bVar20 = FNiagaraTypeDefinition::IsDataInterface(pFVar45);
                        if (bVar20) {
                          local_1638._padding_ = *(longlong *)pFVar71;
                          local_1638._padding_._0_4_ = *(undefined4 *)(pFVar71 + 8);
                          local_1638.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                          ;
                          local_1638.VarData.ArrayNum = 0;
                          local_1638.VarData.ArrayMax = 0;
                          pUVar46 = FNiagaraParameterStore::GetDataInterface
                                              ((FNiagaraParameterStore *)this_06,&local_1638);
                          if (local_1638.VarData.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1638.VarData.AllocatorInstance.Data);
                          }
                          local_1668[0] =
                               NiagaraDebugLocal::Settings.DataInterfaceVerbosity == Verbose;
                          local_1660 = local_18e8;
                          local_1658 = local_1910;
                          local_1648 = (FScriptContainerElement *)0x0;
                          local_1640 = 0;
                          local_1650 = this_02;
                          if (pUVar46 == (UNiagaraDataInterface *)0x0) {
                            ::FString::FString(&local_1780,L"None");
LAB_14928fcdd:
                            pFVar45 = FNiagaraTypeDefinitionHandle::Resolve
                                                ((FNiagaraTypeDefinitionHandle *)(pFVar65 + 0x10));
                            pUVar32 = FNiagaraTypeDefinition::GetClass(pFVar45);
                            if (pUVar32 == (UClass *)0x0) {
                              ::FString::FString(&local_1820,L"None");
                            }
                            else {
                              local_1738 = (FName)pUVar32->_padding_;
                              ::FName::ToString(&local_1738,&local_1820);
                            }
                            ::FName::ToString((FName *)(pFVar65 + 8),&local_1460);
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%s(%s %s)");
                            if (local_1460.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1460.Data.AllocatorInstance.Data);
                            }
                            FVar54.Data = local_1780.Data.AllocatorInstance.Data;
                            if (local_1820.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1820.Data.AllocatorInstance.Data);
                              FVar54.Data = local_1780.Data.AllocatorInstance.Data;
                            }
                          }
                          else {
                            if (NiagaraDebugLocal::Settings.DataInterfaceVerbosity == None) {
LAB_14928fcaa:
                              local_1740 = (FName)pUVar46->_padding_;
                              ::FName::ToString(&local_1740,&local_1780);
                              goto LAB_14928fcdd;
                            }
                            (**(code **)(pUVar46->_padding_ + 1000))(pUVar46,local_1668);
                            if ((int)local_1640 < 2) goto LAB_14928fcaa;
                            ::FName::ToString((FName *)(pFVar65 + 8),&local_1470);
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%s(%s)");
                            FVar54.Data = local_1470.Data.AllocatorInstance.Data;
                          }
                          FVar55.Data = local_1648;
                          if (FVar54.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(FVar54.Data);
                            FVar55.Data = local_1648;
                          }
                        }
                        else {
                          pFVar45 = FNiagaraTypeDefinitionHandle::Resolve
                                              ((FNiagaraTypeDefinitionHandle *)(pFVar65 + 0x10));
                          pUVar47 = FNiagaraTypeDefinition::GetStruct(pFVar45);
                          if (pUVar47 == (UStruct *)0x0) {
LAB_14928ff9d:
                            local_1890[0].RegisteredTypeIndex = *(int *)(pFVar65 + 0x10);
                            local_1898 = *(undefined1 (*) [8])(pFVar65 + 8);
                            local_1888.Data = (FScriptContainerElement *)0x0;
                            local_1880._0_4_ = 0;
                            local_1880._4_4_ = 0;
                            piVar48 = (int *)(**(code **)(this_06->_padding_ + 0x58))
                                                       (this_06,local_1898,0);
                            if (((piVar48 != (int *)0x0) && (*piVar48 != -1)) &&
                               (pvVar43 = (void *)((longlong)*piVar48 + this_06->_padding_),
                               pvVar43 != (void *)0x0)) {
                              FNiagaraVariable::AllocateData((FNiagaraVariable *)local_1898);
                              memcpy(local_1888.Data,pvVar43,(longlong)(int)local_1880);
                            }
                            pFVar37 = ::FName::ToString((FName *)local_1898,&local_1440);
                            ::FString::ConcatFC(&local_1868,pFVar37,L"(");
                            if (local_1440.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1440.Data.AllocatorInstance.Data);
                            }
                            pFVar45 = FNiagaraTypeDefinitionHandle::Resolve(local_1890);
                            FVar55.Data = local_1888.Data;
                            if (((pFVar45->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)
                               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("IsValid()",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                                  ,0x445,L"Type definition is not valid."), bVar20))
                            {
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            if (FVar55.Data == (FScriptContainerElement *)0x0) {
                              ::FString::FString(&local_17b0,L"(null)");
                            }
                            else {
                              FNiagaraTypeHelper::ToString
                                        (&local_17b0,(uchar *)FVar55.Data,
                                         (pFVar45->ClassStructOrEnum).field0_0x0.DebugPtr);
                            }
                            iVar66 = local_17b0.Data.ArrayNum + -1;
                            if (local_17b0.Data.ArrayNum == 0) {
                              iVar66 = 0;
                            }
                            ::FString::AppendChars
                                      (&local_1868,(wchar_t *)local_17b0.Data.AllocatorInstance.Data
                                       ,iVar66);
                            if (local_17b0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_17b0.Data.AllocatorInstance.Data);
                            }
                            ::FString::AppendChars(&local_1868,L")",1);
                            if (local_1868.Data.ArrayNum == 0) {
                              FVar55.Data = (FScriptContainerElement *)L"";
LAB_1492900ef:
                              sVar38 = wcslen((wchar_t *)FVar55.Data);
                              iVar66 = (int)sVar38;
                            }
                            else {
                              iVar66 = 0;
                              FVar55.Data = local_1868.Data.AllocatorInstance.Data;
                              if (local_1868.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) goto LAB_1492900ef;
                            }
                            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,
                                       (wchar_t *)FVar55.Data,iVar66);
                            FVar55.Data = local_1888.Data;
                            if (local_1868.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1868.Data.AllocatorInstance.Data);
                              FVar55.Data = local_1888.Data;
                            }
                          }
                          else {
                            pUVar32 = Z_Construct_UClass_UObject_NoRegister();
                            if (pUVar32 == (UClass *)0x0) {
LAB_14928fe0f:
                              bVar20 = false;
                            }
                            else {
                              iVar66 = (int)pUVar32->_padding_;
                              if (((int)pUVar47->_padding_ < iVar66) ||
                                 ((longlong *)
                                  *(undefined1 **)(pUVar47->_padding_ + (longlong)iVar66 * 8) !=
                                  &pUVar32->_padding_)) goto LAB_14928fe0f;
                              bVar20 = true;
                            }
                            if (!bVar20) goto LAB_14928ff9d;
                            local_1610 = *(undefined4 *)(pFVar65 + 0x10);
                            local_1618 = *(undefined8 *)(pFVar65 + 8);
                            local_1608 = (FScriptContainerElement *)0x0;
                            local_1600 = 0;
                            (**(code **)(this_06->_padding_ + 0x58))(this_06,&local_1618,0);
                            FNiagaraParameterStore::GetUObject
                                      ((FNiagaraParameterStore *)this_06,(int)&local_1730);
                            if (local_1730 == 0) {
                              ::FString::FString(&local_17c0,L"None");
                            }
                            else {
                              local_16e8 = *(FName *)(local_1730 + 0x18);
                              ::FName::ToString(&local_16e8,&local_17c0);
                            }
                            pFVar45 = FNiagaraTypeDefinitionHandle::Resolve
                                                ((FNiagaraTypeDefinitionHandle *)(pFVar65 + 0x10));
                            pUVar32 = FNiagaraTypeDefinition::GetClass(pFVar45);
                            if (pUVar32 == (UClass *)0x0) {
                              ::FString::FString(&local_17d0,L"None");
                            }
                            else {
                              local_1728 = (FName)pUVar32->_padding_;
                              ::FName::ToString(&local_1728,&local_17d0);
                            }
                            ::FName::ToString((FName *)(pFVar65 + 8),&local_1450);
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L"%s(%s %s)");
                            if (local_1450.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1450.Data.AllocatorInstance.Data);
                            }
                            if (local_17d0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_17d0.Data.AllocatorInstance.Data);
                            }
                            FVar55.Data = local_1608;
                            if (local_17c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_17c0.Data.AllocatorInstance.Data);
                              FVar55.Data = local_1608;
                            }
                          }
                        }
                        if (FVar55.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar55.Data);
                        }
                        if ((ulonglong)local_1128._padding_ <
                            (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 2)) {
                          TStringBuilderBase<wchar_t>::Extend
                                    ((TStringBuilderBase<wchar_t> *)&local_1128,1);
                        }
                        *(wchar_t *)local_1128._padding_ = L'\n';
                        local_1128._padding_ = local_1128._padding_ + 2;
                      }
                      break;
                    case 3:
                      if (lVar68 != 0) {
                        this_06 = (FNiagaraUserRedirectionParameterStore *)(lVar68 + 0x1d8);
                        goto LAB_14928fb7f;
                      }
                      break;
                    case 4:
                      if (lVar68 != 0) {
                        this_06 = (FNiagaraUserRedirectionParameterStore *)(lVar68 + 0x488);
                        goto LAB_14928fb7f;
                      }
                      break;
                    case 5:
                      if (lVar68 != 0) {
                        this_06 = (FNiagaraUserRedirectionParameterStore *)(lVar68 + 0x40);
                        goto LAB_14928fb7f;
                      }
                    }
                    pFVar65 = pFVar65 + 0x14;
                    pFVar71 = pFVar71 + 0x14;
                  }
                }
                if (NiagaraDebugLocal::Settings.bShowParticlesVariablesWithSystem != false) {
                  local_1960 = 0;
                  local_1930 = (FNiagaraDataBuffer *)0x0;
                  if (0 < (pFVar33->ParticleVariables).ArrayNum) {
                    do {
                      pFVar64 = local_1930;
                      uVar23 = local_1960;
                      uVar59 = ~local_1960;
                      uVar73 = 0;
                      if ((int)local_1960 < (pFVar33->ParticleVariables).ArrayNum) {
                        uVar73 = uVar59 >> 0x1f;
                      }
                      if ((uVar73 == 0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar20)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      if (*(int *)((pFVar33->ParticleVariables).AllocatorInstance.Data +
                                  (longlong)pFVar64 * 0x10 + 8) != 0) {
                        iVar51 = (this_02->Emitters).ArrayNum;
                        pFVar71 = (this_02->Emitters).AllocatorInstance.Data;
                        if ((iVar51 < 0) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar20)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        uVar73 = 0;
                        if ((int)uVar23 < iVar51) {
                          uVar73 = uVar59 >> 0x1f;
                        }
                        if ((uVar73 == 0) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0x14f,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar20)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pFVar35 = GetParticleDataSet((FNiagaraDebugHud *)local_18c0.Data,this_02,
                                                     *(FNiagaraEmitterInstance **)
                                                      (pFVar71 + (longlong)pFVar64 * 0x10),uVar23);
                        if (((pFVar35 != (FNiagaraDataSet *)0x0) &&
                            (pFVar64 = pFVar35->CurrentData, pFVar64 != (FNiagaraDataBuffer *)0x0))
                           && (pFVar64->NumInstances != 0)) {
                          TStringBuilderBase<wchar_t>::AppendfImpl
                                    ((TStringBuilderBase<wchar_t> *)&local_1128,L"Emitter (%s)\n");
                          local_195c = pFVar64->NumInstances;
                          if ((NiagaraDebugLocal::Settings.bUseMaxParticlesToDisplay != false) &&
                             ((uint)NiagaraDebugLocal::Settings.MaxParticlesToDisplay < local_195c))
                          {
                            local_195c = NiagaraDebugLocal::Settings.MaxParticlesToDisplay;
                          }
                          uVar73 = 0;
                          if (local_195c != 0) {
                            pFVar72 = (FNiagaraSystemSimulation *)((longlong)local_1930 << 4);
                            local_1958 = ~uVar23 >> 0x1f;
                            local_1940 = (FCachedVariables *)0x0;
                            local_18d8 = pFVar72;
                            do {
                              uVar59 = local_1958;
                              TStringBuilderBase<wchar_t>::AppendfImpl
                                        ((TStringBuilderBase<wchar_t> *)&local_1128,
                                         L" Particle(%u) ");
                              pFVar33 = local_1950;
                              uVar58 = 0;
                              if ((int)uVar23 < (local_1950->ParticleVariables).ArrayNum) {
                                uVar58 = uVar59;
                              }
                              if ((uVar58 == 0) &&
                                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              local_18b0 = (FSceneView *)
                                           (pFVar33->ParticleVariables).AllocatorInstance.Data;
                              local_1954 = *(uint *)(&local_18b0->field_0x0 +
                                                    (longlong)
                                                    (pFVar72->SystemInstancesPerState + -3));
                              uVar25 = (ulonglong)(int)local_1954;
                              lVar68 = *(longlong *)
                                        ((longlong)&local_18b0[-1].FeatureLevel +
                                        (longlong)
                                        &pFVar72->SystemInstancesPerState[0].AllocatorInstance);
                              local_1938 = (FObjectPtr_u_0 *)(uVar25 * 0x40 + lVar68);
                              pFVar26 = (FObjectPtr_u_0 *)(lVar68 + 8);
                              while( true ) {
                                pFVar2 = local_1938;
                                if (*(int *)((longlong)&local_18b0->Family + (longlong)pFVar72) !=
                                    (int)uVar25) {
                                  local_1961 = 0;
                                  `TCheckedPointerIterator<FNiagaraDataSetDebugAccessor_const_,int,0>
                                  ::operator!='::__l2::<lambda_1>::operator()(&local_1961);
                                }
                                if (pFVar26 + -1 == pFVar2) break;
                                local_1720 = pFVar26[-1];
                                pFVar37 = ::FName::ToString((FName *)&local_1720,&local_1408);
                                iVar66 = (pFVar37->Data).ArrayNum;
                                pFVar71 = (pFVar37->Data).AllocatorInstance.Data;
                                iVar51 = iVar66 + -1;
                                if (iVar66 == 0) {
                                  iVar51 = 0;
                                }
                                uVar57 = (ulong64)iVar51;
                                if ((ulonglong)local_1128._padding_ <
                                    (TStringBuilderWithBuffer<wchar_t,1024> *)
                                    (local_1128._padding_ + uVar57 * 2)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_1128,uVar57);
                                }
                                if (iVar51 != 0) {
                                  pvVar43 = FGenericPlatformString::Memcpy
                                                      ((void *)local_1128._padding_,pFVar71,
                                                       uVar57 * 2);
                                  local_1128._padding_ = uVar57 * 2 + (longlong)pvVar43;
                                }
                                if (local_1408.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1408.Data.AllocatorInstance.Data);
                                }
                                if ((ulonglong)local_1128._padding_ <
                                    (TStringBuilderWithBuffer<wchar_t,1024> *)
                                    (local_1128._padding_ + 2)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_1128,1);
                                }
                                pvVar43 = FGenericPlatformString::Memcpy
                                                    ((void *)local_1128._padding_,L"(",2);
                                pvVar43 = (void *)((longlong)pvVar43 + 2);
                                local_1128._padding_ = (longlong)pvVar43;
                                if (*(char *)(pFVar26 + 3) == '\0') {
                                  if (*(char *)((longlong)pFVar26 + 0x19) == '\0') {
                                    bVar20 = false;
                                    if (*(int *)((longlong)pFVar26 + 0x1c) != 0) {
                                      uVar23 = 0;
                                      while( true ) {
                                        bVar20 = true;
                                        TStringBuilderBase<wchar_t>::AppendfImpl
                                                  ((TStringBuilderBase<wchar_t> *)&local_1128,L"%d")
                                        ;
                                        uVar23 = uVar23 + 1;
                                        if (*(uint *)((longlong)pFVar26 + 0x1c) <= uVar23) break;
                                        if ((ulonglong)local_1128._padding_ <
                                            (TStringBuilderWithBuffer<wchar_t,1024> *)
                                            (local_1128._padding_ + 4)) {
                                          TStringBuilderBase<wchar_t>::Extend
                                                    ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                                        }
                                        pvVar43 = FGenericPlatformString::Memcpy
                                                            ((void *)local_1128._padding_,L", ",4);
                                        local_1128._padding_ = (longlong)pvVar43 + 4;
                                      }
                                    }
                                    if (*(int *)(pFVar26 + 4) != 0) {
                                      uVar23 = 0;
                                      if (!bVar20) goto LAB_14929074f;
                                      do {
                                        if ((ulonglong)local_1128._padding_ <
                                            (TStringBuilderWithBuffer<wchar_t,1024> *)
                                            (local_1128._padding_ + 4)) {
                                          TStringBuilderBase<wchar_t>::Extend
                                                    ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                                        }
                                        pvVar43 = FGenericPlatformString::Memcpy
                                                            ((void *)local_1128._padding_,L", ",4);
                                        local_1128._padding_ = (longlong)pvVar43 + 4;
LAB_14929074f:
                                        bVar20 = true;
                                        TStringBuilderBase<wchar_t>::AppendfImpl
                                                  ((TStringBuilderBase<wchar_t> *)&local_1128,
                                                   L"%.2f");
                                        uVar23 = uVar23 + 1;
                                      } while (uVar23 < *(uint *)(pFVar26 + 4));
                                    }
                                    if (*(int *)((longlong)pFVar26 + 0x24) != 0) {
                                      uVar59 = 0;
                                      uVar23 = 0;
                                      if (!bVar20) goto LAB_14929080a;
                                      do {
                                        uVar59 = uVar23;
                                        if ((ulonglong)local_1128._padding_ <
                                            (TStringBuilderWithBuffer<wchar_t,1024> *)
                                            (local_1128._padding_ + 4)) {
                                          TStringBuilderBase<wchar_t>::Extend
                                                    ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                                        }
                                        pvVar43 = FGenericPlatformString::Memcpy
                                                            ((void *)local_1128._padding_,L", ",4);
                                        local_1128._padding_ = (longlong)pvVar43 + 4;
LAB_14929080a:
                                        if (((*(int *)(pFVar26 + 6) != -1) &&
                                            (uVar73 < pFVar64->NumInstances)) &&
                                           (uVar59 < *(uint *)((longlong)pFVar26 + 0x24))) {
                                          FGenericPlatformMath::LoadHalf
                                                    ((ushort *)
                                                     ((pFVar64->HalfData).AllocatorInstance.Data +
                                                     (ulonglong)
                                                     ((uVar59 + *(int *)(pFVar26 + 6)) *
                                                     pFVar64->HalfStride) + (ulonglong)uVar73 * 2));
                                        }
                                        TStringBuilderBase<wchar_t>::AppendfImpl
                                                  ((TStringBuilderBase<wchar_t> *)&local_1128,
                                                   L"%.2f");
                                        uVar23 = uVar59 + 1;
                                      } while (uVar59 + 1 < *(uint *)((longlong)pFVar26 + 0x24));
                                    }
                                  }
                                  else {
                                    if (((*(int *)(pFVar26 + 5) == -1) ||
                                        (pFVar64->NumInstances <= uVar73)) ||
                                       (*(int *)((longlong)pFVar26 + 0x1c) == 0)) {
                                      pwVar56 = L"false";
                                    }
                                    else {
                                      pwVar56 = L"false";
                                      if (*(int *)((pFVar64->Int32Data).AllocatorInstance.Data +
                                                   *(int *)(pFVar26 + 5) * pFVar64->Int32Stride +
                                                  (longlong)local_1940) == -1) {
                                        pwVar56 = L"true";
                                      }
                                    }
                                    sVar38 = wcslen(pwVar56);
                                    uVar57 = (ulong64)(int)sVar38;
                                    if ((ulonglong)local_1128._padding_ <
                                        (TStringBuilderWithBuffer<wchar_t,1024> *)
                                        ((longlong)pvVar43 + uVar57 * 2)) {
                                      TStringBuilderBase<wchar_t>::Extend
                                                ((TStringBuilderBase<wchar_t> *)&local_1128,uVar57);
                                    }
                                    if ((int)sVar38 != 0) {
                                      pvVar43 = FGenericPlatformString::Memcpy
                                                          ((void *)local_1128._padding_,pwVar56,
                                                           uVar57 * 2);
                                      local_1128._padding_ = (longlong)pvVar43 + uVar57 * 2;
                                    }
                                  }
                                }
                                else {
                                  if (((*(int *)(pFVar26 + 5) == -1) ||
                                      (pFVar64->NumInstances <= uVar73)) ||
                                     (*(int *)((longlong)pFVar26 + 0x1c) == 0)) {
                                    iVar51 = 0;
                                  }
                                  else {
                                    iVar51 = *(int *)((pFVar64->Int32Data).AllocatorInstance.Data +
                                                      *(int *)(pFVar26 + 5) * pFVar64->Int32Stride +
                                                     (longlong)local_1940);
                                  }
                                  pUVar49 = (UEnum *)0x0;
                                  if (*(short *)(pFVar26 + 1) == 3) {
                                    if (pFVar26->Handle == (UObject *)0x0) {
                                      pFVar37 = GetTypeName<UEnum>(&local_1260);
                                      if ((pFVar37->Data).ArrayNum == 0) {
                                        pwVar56 = L"";
                                      }
                                      else {
                                        pwVar56 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                                      }
                    /* WARNING: Subroutine does not return */
                                      CastLogError(L"nullptr",pwVar56);
                                    }
                                    pUVar32 = Z_Construct_UClass_UEnum_NoRegister();
                                    bVar20 = FObjectPtr::IsA((FObjectPtr *)pFVar26,pUVar32);
                                    if ((!bVar20) ||
                                       (pUVar49 = (UEnum *)pFVar26->Handle, pUVar49 == (UEnum *)0x0)
                                       ) {
                                      pFVar37 = GetTypeName<UEnum>(&local_1280);
                                      pwVar56 = L"";
                                      if ((pFVar37->Data).ArrayNum == 0) {
                                        pwVar61 = L"";
                                      }
                                      else {
                                        pwVar61 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                                      }
                                      pFVar37 = GetFullNameForCastLogError<UObject>
                                                          (&local_1270,pFVar26->Handle);
                                      if ((pFVar37->Data).ArrayNum != 0) {
                                        pwVar56 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
                                      }
                    /* WARNING: Subroutine does not return */
                                      CastLogError(pwVar56,pwVar61);
                                    }
                                  }
                                  pFVar44 = UEnum::GetDisplayNameTextByValue
                                                      (pUVar49,&local_1430,(longlong)iVar51);
                                  FText::ToString(pFVar44);
                                  TStringBuilderBase<wchar_t>::AppendfImpl
                                            ((TStringBuilderBase<wchar_t> *)&local_1128,L"%d (%s)");
                                  if (local_1430.TextData.Reference != (ITextData *)0x0) {
                                    (**(code **)((longlong)*local_1430.TextData.Reference + 0x10))()
                                    ;
                                  }
                                }
                                if ((ulonglong)local_1128._padding_ <
                                    (TStringBuilderWithBuffer<wchar_t,1024> *)
                                    (local_1128._padding_ + 4)) {
                                  TStringBuilderBase<wchar_t>::Extend
                                            ((TStringBuilderBase<wchar_t> *)&local_1128,2);
                                }
                                pvVar43 = FGenericPlatformString::Memcpy
                                                    ((void *)local_1128._padding_,L") ",4);
                                local_1128._padding_ = (longlong)pvVar43 + 4;
                                pFVar26 = pFVar26 + 8;
                                uVar25 = (ulonglong)local_1954;
                                pFVar72 = local_18d8;
                              }
                              if ((ulonglong)local_1128._padding_ <
                                  (TStringBuilderWithBuffer<wchar_t,1024> *)
                                  (local_1128._padding_ + 2)) {
                                TStringBuilderBase<wchar_t>::Extend
                                          ((TStringBuilderBase<wchar_t> *)&local_1128,1);
                              }
                              pvVar43 = FGenericPlatformString::Memcpy
                                                  ((void *)local_1128._padding_,L"\n",2);
                              local_1940 = (FCachedVariables *)((longlong)local_1940 + 4);
                              local_1128._padding_ = (longlong)pvVar43 + 2;
                              uVar73 = uVar73 + 1;
                              uVar23 = local_1960;
                            } while (uVar73 < local_195c);
                          }
                          pFVar33 = local_1950;
                          if (local_195c < pFVar64->NumInstances) {
                            TStringBuilderBase<wchar_t>::AppendfImpl
                                      ((TStringBuilderBase<wchar_t> *)&local_1128,L" ...Truncated");
                            pFVar33 = local_1950;
                          }
                        }
                      }
                      local_1960 = uVar23 + 1;
                      local_1930 = (FNiagaraDataBuffer *)((longlong)&local_1930->_padding_ + 1);
                    } while ((int)local_1960 < (pFVar33->ParticleVariables).ArrayNum);
                  }
                }
              }
            }
            if ((ulonglong)local_1128._padding_ <
                (TStringBuilderWithBuffer<wchar_t,1024> *)(local_1128._padding_ + 2)) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_1128,1);
            }
            lVar68 = local_1128._padding_;
            pUVar19 = local_1838;
            *(wchar_t *)local_1128._padding_ = L'\0';
            fVar94 = (float)local_15f8._s_0.X;
            fVar92 = (float)local_15f8._s_0.Y;
            NiagaraDebugLocal::GetStringSize((UFont *)&local_1908,(wchar_t *)local_1838);
            FVar55.Data = local_1878.Data;
            local_1928 = (float)NiagaraDebugLocal::Settings.SystemTextOptions.ScreenOffset.
                                field0_0x0._s_0.X + fVar94;
            fStack_1924 = (float)NiagaraDebugLocal::Settings.SystemTextOptions.ScreenOffset.
                                 field0_0x0._s_0.Y + fVar92;
            if (NiagaraDebugLocal::Settings.SystemTextOptions.HorizontalAlignment == Center) {
              fVar94 = local_1908 * __real_3f000000;
LAB_149290be3:
              local_1928 = local_1928 - fVar94;
            }
            else {
              fVar94 = local_1908;
              if (NiagaraDebugLocal::Settings.SystemTextOptions.HorizontalAlignment == Right)
              goto LAB_149290be3;
            }
            fVar94 = local_1928;
            if (NiagaraDebugLocal::Settings.SystemTextOptions.VerticalAlignment == Center) {
              fVar92 = fStack_1904 * __real_3f000000;
LAB_149290c0b:
              fStack_1924 = fStack_1924 - fVar92;
            }
            else {
              fVar92 = fStack_1904;
              if (NiagaraDebugLocal::Settings.SystemTextOptions.VerticalAlignment == Bottom)
              goto LAB_149290c0b;
            }
            fVar92 = fStack_1924;
            local_17a0[1].Data.ArrayMax = fStack_1924;
            local_17a0[1].Data.ArrayNum = local_1928;
            FCanvas::DrawTile((FCanvas *)local_1878.Data,(double)(local_1928 - fVar16),
                              (double)(fStack_1924 - fVar16),(double)(local_1908 + fVar90),
                              (double)(fStack_1904 + fVar90),0.0,0.0,0.0,0.0,
                              &NiagaraDebugLocal::Settings.DefaultBackgroundColor,(FTexture *)0x0,
                              true);
            local_1588 = (wchar_t *)lVar68;
            iVar51 = 0;
            if ((wchar_t *)lVar68 != (wchar_t *)0x0) {
              sVar38 = wcslen((wchar_t *)lVar68);
              iVar51 = (int)sVar38;
            }
            local_1418._12_4_ = uStack_157c;
            local_1418.Size = iVar51;
            local_1418.DataPtr = local_1588;
            iStack_1580 = iVar51;
            FCanvas::DrawShadowedString
                      ((FCanvas *)FVar55.Data,(double)fVar94,(double)fVar92,&local_1418,pUVar19,
                       (FLinearColor *)&local_1578._s_0,&FLinearColor::Black);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                      ((TStringBuilderBase<wchar_t> *)&local_1128);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1708);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1700);
          pFVar60 = local_18e0;
          this_00 = local_18e8;
          this = (FNiagaraDebugHud *)local_18c0.Data;
        }
      }
    }
    uVar25 = (ulonglong)local_18b8;
    pFVar52 = local_1870 + 1;
  } while( true );
}

// DrawDebugGeomerty @ 149290ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawDebugGeomerty
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,UCanvas *param_2)

{
  int *piVar1;
  TArray<FNiagaraDebugHud::FDebugLine2D,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UWorld *pUVar9;
  int iVar10;
  TArray<FNiagaraDebugHud::FDebugCircle2D,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FNiagaraDebugHud::FDebugBox2D,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  TVector2<double>_u_0 local_98;
  TVector2<double>_u_0 local_88;
  double local_78;
  double local_70;
  
  pUVar9 = FNiagaraWorldManager::GetWorld(param_1);
  if ((pUVar9 != (UWorld *)0x0) && (param_2 != (UCanvas *)0x0)) {
    pTVar2 = &this->Lines2D;
    fVar3 = param_2->ClipX;
    fVar4 = param_2->ClipY;
    for (uVar13 = 0; (-1 < (int)uVar13 && ((int)uVar13 < (this->Lines2D).ArrayNum));
        uVar13 = uVar13 + 1) {
      if (((int)uVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      lVar14 = (longlong)(int)uVar13;
      local_b8._s_0.X = (double)(fVar3 * *(float *)(pFVar5 + lVar14 * 0x28 + 8));
      local_b8._s_0.Y = (double)(fVar4 * *(float *)(pFVar5 + lVar14 * 0x28 + 0xc));
      local_a8._s_0.X = (double)(fVar3 * *(float *)(pFVar5 + lVar14 * 0x28));
      local_a8._s_0.Y = (double)(fVar4 * *(float *)(pFVar5 + lVar14 * 0x28 + 4));
      DrawDebugCanvas2DLine
                (param_2,(TVector2<double> *)&local_a8._s_0,(TVector2<double> *)&local_b8._s_0,
                 (FLinearColor *)(pFVar5 + lVar14 * 0x28 + 0x10),
                 (float *)(pFVar5 + lVar14 * 0x28 + 0x20));
      fVar15 = *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) - this->DeltaSeconds;
      *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) = fVar15;
      if (fVar15 <= 0.0) {
        uVar8 = 0;
        if ((int)uVar13 < (this->Lines2D).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar2->AllocatorInstance).Data + lVar14 * 0x28;
        iVar10 = (this->Lines2D).ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar5,pFVar5 + 0x28,(longlong)iVar10 * 0x28);
        }
        piVar1 = &(this->Lines2D).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,&pTVar2->AllocatorInstance,(this->Lines2D).ArrayNum,
                   &(this->Lines2D).ArrayMax);
        uVar13 = uVar13 - 1;
      }
    }
    pTVar11 = &this->Circles2D;
    for (uVar13 = 0; (-1 < (int)uVar13 && ((int)uVar13 < (this->Circles2D).ArrayNum));
        uVar13 = uVar13 + 1) {
      if (((int)uVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar11->AllocatorInstance).Data;
      lVar14 = (longlong)(int)uVar13;
      local_98._s_0.X = (double)(fVar3 * *(float *)(pFVar5 + lVar14 * 0x28));
      local_98._s_0.Y = (double)(fVar4 * *(float *)(pFVar5 + lVar14 * 0x28 + 4));
      DrawDebugCanvas2DCircle
                (param_2,(TVector2<double> *)&local_98._s_0,
                 fVar3 * *(float *)(pFVar5 + lVar14 * 0x28 + 8),
                 *(int *)(pFVar5 + lVar14 * 0x28 + 0xc),
                 (FLinearColor *)(pFVar5 + lVar14 * 0x28 + 0x10),
                 (float *)(pFVar5 + lVar14 * 0x28 + 0x20));
      fVar15 = *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) - this->DeltaSeconds;
      *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) = fVar15;
      if (fVar15 <= 0.0) {
        uVar8 = 0;
        if ((int)uVar13 < (this->Circles2D).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar11->AllocatorInstance).Data + lVar14 * 0x28;
        iVar10 = (this->Circles2D).ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar5,pFVar5 + 0x28,(longlong)iVar10 * 0x28);
        }
        piVar1 = &(this->Circles2D).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,&pTVar11->AllocatorInstance,(this->Circles2D).ArrayNum,
                   &(this->Circles2D).ArrayMax);
        uVar13 = uVar13 - 1;
      }
    }
    pTVar12 = &this->Boxes2D;
    for (uVar13 = 0; (-1 < (int)uVar13 && ((int)uVar13 < (this->Boxes2D).ArrayNum));
        uVar13 = uVar13 + 1) {
      if (((int)uVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar12->AllocatorInstance).Data;
      lVar14 = (longlong)(int)uVar13;
      local_88._s_0.Y =
           (double)((*(float *)(pFVar5 + lVar14 * 0x28 + 4) -
                    *(float *)(pFVar5 + lVar14 * 0x28 + 0xc)) * fVar4);
      local_88._s_0.X =
           (double)((*(float *)(pFVar5 + lVar14 * 0x28) - *(float *)(pFVar5 + lVar14 * 0x28 + 8)) *
                   fVar3);
      local_70 = (double)((*(float *)(pFVar5 + lVar14 * 0x28 + 4) +
                          *(float *)(pFVar5 + lVar14 * 0x28 + 0xc)) * fVar4);
      local_78 = (double)((*(float *)(pFVar5 + lVar14 * 0x28 + 8) +
                          *(float *)(pFVar5 + lVar14 * 0x28)) * fVar3);
      DrawDebugCanvas2DBox
                (param_2,(TBox2<double> *)&local_88._s_0,
                 (FLinearColor *)(pFVar5 + lVar14 * 0x28 + 0x10),
                 (float *)(pFVar5 + lVar14 * 0x28 + 0x20));
      fVar15 = *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) - this->DeltaSeconds;
      *(float *)(pFVar5 + lVar14 * 0x28 + 0x24) = fVar15;
      if (fVar15 <= 0.0) {
        uVar8 = 0;
        if ((int)uVar13 < (this->Boxes2D).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar12->AllocatorInstance).Data + lVar14 * 0x28;
        iVar10 = (this->Boxes2D).ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar5,pFVar5 + 0x28,(longlong)iVar10 * 0x28);
        }
        piVar1 = &(this->Boxes2D).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,&pTVar12->AllocatorInstance,(this->Boxes2D).ArrayNum,
                   &(this->Boxes2D).ArrayMax);
        uVar13 = uVar13 - 1;
      }
    }
  }
  return;
}

// DrawGlobalBudgetInfo @ 149291490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawGlobalBudgetInfo
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,FCanvas *param_2,
          TVector2<float> *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  ulonglong *puVar8;
  float fVar9;
  undefined1 auStackY_208 [32];
  float local_1a8 [2];
  UFont *local_1a0;
  TStringView<wchar_t> local_198;
  FCanvas *local_188 [2];
  TStringView<wchar_t> local_178;
  int local_168 [2];
  wchar_t *local_160 [2];
  wchar_t *local_150 [2];
  wchar_t *local_140 [2];
  FLinearColor_u_0 local_130;
  FString local_120;
  FLinearColor_u_0 local_110;
  FLinearColor_u_0 local_100;
  int *local_e8;
  UFont **local_e0;
  FCanvas **local_d8;
  TVector2<float> *local_d0;
  FLinearColor_u_0 *local_c8;
  FLinearColor_u_0 *local_c0;
  FLinearColor_u_0 *local_b8;
  float *local_b0;
  FLinearColor_u_0 local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (NiagaraDebugLocal::Settings.bShowGlobalBudgetInfo) {
    local_188[0] = param_2;
    if ((NiagaraDebugLocal::Settings.OverviewFont == Small) ||
       (NiagaraDebugLocal::Settings.OverviewFont != Normal)) {
      local_1a0 = UEngine::GetTinyFont();
    }
    else {
      local_1a0 = UEngine::GetSmallFont();
    }
    local_1a8[0] = UFont::GetMaxCharHeight(local_1a0);
    fVar9 = __real_3f800000;
    local_1a8[0] = local_1a8[0] + __real_3f800000;
    local_130 = NiagaraDebugLocal::Settings.OverviewHeadingColor.field0_0x0;
    local_a8 = NiagaraDebugLocal::Settings.OverviewDetailColor.field0_0x0;
    local_100 = NiagaraDebugLocal::Settings.OverviewDetailHighlightColor.field0_0x0;
    local_110 = NiagaraDebugLocal::Settings.DefaultBackgroundColor.field0_0x0;
    if (FFXBudget::bEnabled == false) {
      FCanvas::DrawTile(local_188[0],(double)((param_3->field0_0x0)._s_0.X - __real_3f800000),
                        (double)((param_3->field0_0x0)._s_0.Y - __real_3f800000),
                        __real_4079100000000000,
                        (double)(local_1a8[0] + local_1a8[0] + __real_40000000),0.0,0.0,0.0,0.0,
                        (FLinearColor *)&local_110._s_0,(FTexture *)0x0,true);
      local_178.Size = 0x12;
      local_178.DataPtr = L"Global Budget Info";
      FCanvas::DrawShadowedString
                (local_188[0],(double)(param_3->field0_0x0)._s_0.X,
                 (double)(param_3->field0_0x0)._s_0.Y,&local_178,local_1a0,
                 (FLinearColor *)&local_130._s_0,&FLinearColor::Black);
      fVar9 = local_1a8[0] + (param_3->field0_0x0)._s_0.Y;
      local_178.Size = 0x7c;
      (param_3->field0_0x0)._s_0.Y = fVar9;
      local_178.DataPtr =
           L"Global budget tracking is disabled. Can be enabled by setting cvars fx.Budget.Enabled and fx.Budget.EnabledInEditor to true."
      ;
      FCanvas::DrawShadowedString
                (local_188[0],(double)(param_3->field0_0x0)._s_0.X,(double)fVar9,&local_178,
                 local_1a0,(FLinearColor *)&local_100._s_0,&FLinearColor::Black);
      (param_3->field0_0x0)._s_0.Y = local_1a8[0] + (param_3->field0_0x0)._s_0.Y;
    }
    else {
      FFXBudget::GetTime((FFXTimeData *)local_160);
      FFXBudget::GetBudget((FFXTimeData *)local_150);
      FFXBudget::GetUsage((FFXTimeData *)local_140);
      FFXBudget::GetAdjustedUsage((FFXTimeData *)&local_178);
      FCanvas::DrawTile(local_188[0],(double)((param_3->field0_0x0)._s_0.X - fVar9),
                        (double)((param_3->field0_0x0)._s_0.Y - fVar9),__real_4079100000000000,
                        (double)(local_1a8[0] * __real_40a00000 + __real_40000000),0.0,0.0,0.0,0.0,
                        (FLinearColor *)&local_110._s_0,(FTexture *)0x0,true);
      local_198.Size = 0x12;
      local_198.DataPtr = L"Global Budget Info";
      FCanvas::DrawShadowedString
                (local_188[0],(double)(param_3->field0_0x0)._s_0.X,
                 (double)(param_3->field0_0x0)._s_0.Y,&local_198,local_1a0,
                 (FLinearColor *)&local_130._s_0,&FLinearColor::Black);
      (param_3->field0_0x0)._s_0.Y = local_1a8[0] + (param_3->field0_0x0)._s_0.Y;
      ::FString::FString(&local_98,L"Time: ");
      ::FString::FString(&local_88,L"Budget: ");
      ::FString::FString(&local_78,L"Usage: ");
      ::FString::FString(&local_68,L"Adjusted: ");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar6.Data = local_98.Data.AllocatorInstance.Data;
      }
      iVar2 = UFont::GetStringSize(local_1a0,(wchar_t *)FVar6.Data);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar6.Data = local_88.Data.AllocatorInstance.Data;
      }
      iVar3 = UFont::GetStringSize(local_1a0,(wchar_t *)FVar6.Data);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar6.Data = local_78.Data.AllocatorInstance.Data;
      }
      iVar4 = UFont::GetStringSize(local_1a0,(wchar_t *)FVar6.Data);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar6.Data = local_68.Data.AllocatorInstance.Data;
      }
      local_168[0] = UFont::GetStringSize(local_1a0,(wchar_t *)FVar6.Data);
      if (local_168[0] < iVar4) {
        local_168[0] = iVar4;
      }
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      if (local_168[0] < iVar3) {
        local_168[0] = iVar3;
      }
      local_e8 = local_168;
      local_e0 = &local_1a0;
      local_d8 = local_188;
      local_c8 = &local_130;
      local_c0 = &local_100;
      local_b8 = &local_a8;
      local_b0 = local_1a8;
      local_d0 = param_3;
      pFVar5 = ::FString::FString(&local_120,&local_98);
      local_198.DataPtr = local_160[0];
      `FNiagaraDebugHud::DrawGlobalBudgetInfo'::__l8::<lambda_1>::operator()
                (&local_e8,pFVar5,(FFXTimeData *)&local_198,__real_7f7fffff);
      pFVar5 = ::FString::FString(&local_120,&local_88);
      local_198.DataPtr = local_150[0];
      `FNiagaraDebugHud::DrawGlobalBudgetInfo'::__l8::<lambda_1>::operator()
                (&local_e8,pFVar5,(FFXTimeData *)&local_198,__real_7f7fffff);
      pFVar5 = ::FString::FString(&local_120,&local_78);
      local_198.DataPtr = local_140[0];
      `FNiagaraDebugHud::DrawGlobalBudgetInfo'::__l8::<lambda_1>::operator()
                (&local_e8,pFVar5,(FFXTimeData *)&local_198,fVar9);
      pFVar5 = ::FString::FString(&local_120,&local_68);
      local_198.DataPtr = local_178.DataPtr;
      local_198.Size = local_178.Size;
      `FNiagaraDebugHud::DrawGlobalBudgetInfo'::__l8::<lambda_1>::operator()
                (&local_e8,pFVar5,(FFXTimeData *)&local_198,fVar9);
      puVar8 = local_58;
      lVar7 = 4;
      do {
        puVar1 = puVar8 + -2;
        puVar8 = puVar8 + -2;
        lVar7 = lVar7 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
      } while (lVar7 != 0);
    }
  }
  return;
}

// DrawGpuComputeOverriew @ 149291a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawGpuComputeOverriew
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,FCanvas *param_2,
          TVector2<float> *param_3)

{
  longlong *plVar1;
  TMap<FName,FNiagaraDebugHud::FGpuUsagePerEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>_>
  *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  float fVar5;
  float fVar6;
  FLinearColor FVar7;
  FNiagaraDebugHud *pFVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  UFont *this_00;
  size_t sVar16;
  TStringBuilderWithBuffer<wchar_t,128> *pTVar17;
  UPackage *pUVar18;
  FString *pFVar19;
  UObject *pUVar20;
  UObject *pUVar21;
  longlong lVar22;
  IConsoleManager *pIVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  FColumn *pFVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  byte bVar29;
  FScriptContainerElement *pFVar30;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTVar31;
  FName FVar32;
  FName *this_01;
  longlong lVar33;
  byte bVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  wchar_t *pwVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  byte bVar42;
  int iVar43;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_5248 [32];
  byte local_51e8;
  float local_51b8;
  float local_51b4;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *local_51b0;
  FNiagaraDebugHud *local_51a8;
  FLinearColor_u_0 local_5198;
  FString local_5188;
  FString local_5178;
  FString local_5168;
  FString local_5158;
  FString local_5148;
  FString local_5138;
  ForAnyElementType local_5128;
  undefined1 auStack_5120 [16];
  uint uStack_5110;
  uint uStack_510c;
  ForAnyElementType local_5108;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_5100;
  ForAnyElementType local_50f8;
  undefined2 local_50f0;
  longlong *local_50e8;
  undefined1 auStack_50e0 [16];
  uint uStack_50d0;
  uint uStack_50cc;
  longlong local_50c8;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_50c0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *local_50b8;
  undefined2 local_50b0;
  longlong *local_50a8;
  undefined1 auStack_50a0 [16];
  uint uStack_5090;
  uint uStack_508c;
  longlong local_5088;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_5080;
  FName local_5078;
  undefined2 local_5070;
  undefined1 local_5068 [12];
  uint local_505c;
  longlong local_5058;
  float local_5050;
  int local_504c;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *local_5040;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *local_5038;
  bool local_5030;
  bool local_502f;
  undefined1 local_5028 [12];
  uint local_501c;
  longlong local_5018;
  uint local_5010;
  int local_500c;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *local_4ff8;
  bool local_4ff0;
  bool local_4fef;
  undefined4 local_4fe8;
  undefined4 local_4fe4;
  FName local_4fe0;
  FName local_4fd8;
  FName local_4fd0;
  FScriptContainerElement *local_4fc8;
  int iStack_4fc0;
  undefined4 uStack_4fbc;
  UObject *local_4fb8;
  longlong local_4fb0;
  FName local_4fa8;
  undefined4 local_4fa0;
  undefined4 local_4f9c;
  longlong *local_4f98;
  undefined1 auStack_4f90 [16];
  uint uStack_4f80;
  uint uStack_4f7c;
  longlong local_4f78;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_4f70;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *local_4f68;
  undefined2 local_4f60;
  undefined1 local_4f58 [12];
  uint local_4f4c;
  longlong local_4f48;
  uint local_4f40;
  int local_4f3c;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *local_4f28;
  bool local_4f20;
  bool local_4f1f;
  undefined8 local_4f18;
  undefined8 local_4f10;
  FString local_4f08;
  FString local_4ef8;
  FString local_4ee8;
  FString local_4ed8;
  FLinearColor_u_0 local_4ec8;
  FLinearColor_u_0 local_4eb8;
  FString local_4ea8;
  FString local_4e98;
  FLinearColor_u_0 local_4e88;
  FLinearColor_u_0 local_4e78;
  FString local_4e68;
  FString local_4e58;
  FLinearColor_u_0 local_4e48;
  FLinearColor_u_0 local_4e38;
  TStringView<wchar_t> local_4e28;
  FString local_4e18;
  FLinearColor_u_0 local_4e08;
  FString local_4df8;
  FLinearColor_u_0 local_4de8;
  FLinearColor_u_0 local_4dd8;
  FString local_4dc8;
  undefined1 local_4db8 [32];
  longlong local_4d98;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
  *pTStack_4d90;
  undefined1 local_4d88 [32];
  longlong local_4d68;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  *pTStack_4d60;
  undefined1 local_4d58 [32];
  longlong local_4d38;
  TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
  *pTStack_4d30;
  undefined1 local_4d28 [32];
  FScriptContainerElement *local_4d08;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  *pTStack_4d00;
  undefined4 local_4cf8 [2];
  undefined1 local_4cf0 [4864];
  undefined1 *local_39f0;
  int local_39e8;
  undefined4 local_39e4;
  undefined4 local_39e0 [2];
  FColumn local_39d8 [16];
  FColumn *local_26d8;
  int local_26d0;
  undefined4 local_26cc;
  undefined4 local_26c8 [2];
  FColumn local_26c0 [16];
  FColumn *local_13c0;
  int local_13b8;
  undefined4 local_13b4;
  undefined4 local_13b0 [2];
  undefined1 local_13a8 [4864];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_5248;
  bVar11 = false;
  iVar43 = 0;
  local_51a8 = this;
  if ((NiagaraDebugLocal::Settings.OverviewFont == Small) ||
     (NiagaraDebugLocal::Settings.OverviewFont != Normal)) {
    this_00 = UEngine::GetTinyFont();
  }
  else {
    this_00 = UEngine::GetSmallFont();
  }
  fVar46 = UFont::GetMaxCharHeight(this_00);
  FVar7 = NiagaraDebugLocal::Settings.OverviewDetailColor;
  fVar47 = __real_3f800000;
  fVar46 = fVar46 + __real_3f800000;
  local_4e48 = NiagaraDebugLocal::Settings.OverviewHeadingColor.field0_0x0;
  local_5198 = NiagaraDebugLocal::Settings.DefaultBackgroundColor.field0_0x0;
  if ((this->GpuResults).Object != (FNiagaraGpuFrameResults *)0x0) {
    local_13b0[0] = 0x41200000;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0x10;
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
              (local_13b0,1,__real_437a0000);
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
              (local_13b0,2,__real_43160000);
    pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                        (local_13b0,0);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)pTVar17,L"Gpu Compute Overview",0x14);
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::RowComplete(local_13b0);
    if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton == (UEnum *)0x0) {
      pUVar18 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits,(UObject *)pUVar18,
                         L"ENiagaraDebugHUDPerfUnits");
      if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton == (UEnum *)0x0) {
        local_4f18 = 0;
        local_4f10 = 0;
        pFVar30 = (FScriptContainerElement *)0x0;
        goto LAB_149291dd7;
      }
    }
    pFVar19 = UEnum::GetNameStringByValue
                        (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton,
                         &local_4e18,(longlong)(int)NiagaraDebugLocal::Settings.PerfUnits);
    pFVar30 = (pFVar19->Data).AllocatorInstance.Data;
    (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar19->Data).ArrayNum = 0;
    (pFVar19->Data).ArrayMax = 0;
    if (local_4e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e18.Data.AllocatorInstance.Data);
    }
LAB_149291dd7:
    pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                        (local_13b0,0);
    fVar5 = __real_5f000000;
    fVar47 = (this->GpuTotalMicroseconds).SmoothedTotalAvg;
    lVar27 = 0;
    if ((__real_5f000000 <= fVar47) && (fVar47 = fVar47 - __real_5f000000, fVar47 < __real_5f000000)
       ) {
      lVar27 = -0x8000000000000000;
    }
    NiagaraDebugLocal::FormatPerfValue(&local_4df8,(double)(ulonglong)((longlong)fVar47 + lVar27),7)
    ;
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)pTVar17,L"Total %s : %s");
    if (local_4df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4df8.Data.AllocatorInstance.Data);
    }
    pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                        (local_13b0,1);
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)pTVar17,L"Total Dispatches : %d");
    local_4de8._0_8_ = local_5198._0_8_;
    local_4de8._8_8_ = local_5198._8_8_;
    local_4dd8 = FVar7.field0_0x0;
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::Draw
              (local_13b0,this_00,param_2,param_3,(FLinearColor *)&local_4dd8._s_0,
               (FLinearColor *)&local_4de8._s_0);
    (param_3->field0_0x0)._s_0.Y = fVar46 + (param_3->field0_0x0)._s_0.Y;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    TArray<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
    ::
    ~TArray<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              (local_13a8);
    pTVar44 = (TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
               *)&local_51a8->GpuUsagePerSystem;
    bVar34 = 0;
    local_51e8 = 0;
    bVar42 = 0;
    local_51b0 = pTVar44;
    TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
    ::TIterator::TIterator
              ((TIterator *)local_5068,
               (TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                *)pTVar44,false);
    if (local_504c < *(int *)(local_5058 + 0x18)) {
      do {
        iVar43 = local_504c;
        uVar9 = local_5068._0_8_;
        lVar27 = (longlong)local_504c * 200;
        pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)local_5068._0_8_ + lVar27));
        if (pUVar20 == (UObject *)0x0) {
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_5040,iVar43);
          local_5030 = true;
        }
        else {
          TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
          ::TIterator::TIterator
                    ((TIterator *)local_4f58,
                     (TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
                      *)(*(longlong *)uVar9 + 0x70 + lVar27),false);
          pTVar44 = local_5040;
          if (local_4f3c < *(int *)(local_4f48 + 0x18)) {
            do {
              pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((longlong)local_4f3c * 0xc0 +
                                            *(longlong *)local_4f58._0_8_));
              if (pUVar21 == (UObject *)0x0) {
                TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
                ::RemoveByIndex(pTVar44,iVar43);
                local_5030 = true;
              }
              local_4f40 = local_4f40 & ~local_4f4c;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4f58 + 8));
              bVar34 = local_51e8;
            } while (local_4f3c < *(int *)(local_4f48 + 0x18));
          }
          if ((local_4f20 != false) && (local_4f1f != false)) {
            uVar41 = *(int *)&(local_4f28->Elements).field_0x8 -
                     *(int *)&(local_4f28->Elements).field_0x34;
            if (uVar41 < 4) {
              iVar43 = 1;
            }
            else {
              uVar45 = (ulonglong)((uVar41 >> 1) + 7) * 2 + 1;
              lVar33 = 0x3f;
              if (uVar45 != 0) {
                for (; uVar45 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              iVar43 = 1 << ((byte)lVar33 & 0x1f);
            }
            if (((0 < (int)uVar41) && (local_4f28->HashSize < iVar43)) ||
               (iVar43 < local_4f28->HashSize)) {
              local_4f28->HashSize = iVar43;
              TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
              ::Rehash(local_4f28);
            }
          }
          if ((NiagaraDebugLocal::Settings.bSystemFilterEnabled == false) ||
             (NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum < 2)) {
LAB_149292118:
            bVar29 = 1;
          }
          else {
            local_4fe0.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
            local_4fe0.Number = *(uint *)&pUVar20->field_0x1c;
            bVar11 = true;
            ::FName::ToString(&local_4fe0,&local_4f08);
            iVar43 = NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum + -1;
            FVar4 = NiagaraDebugLocal::Settings.SystemFilter.Data.AllocatorInstance;
            if (NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum == 0) {
              iVar43 = 0;
              FVar4.Data = (FScriptContainerElement *)L"";
            }
            bVar12 = ::FString::MatchesWildcard(&local_4f08,(wchar_t *)FVar4.Data,iVar43,IgnoreCase)
            ;
            if (bVar12) goto LAB_149292118;
            bVar29 = 0;
          }
          if ((bVar11) &&
             (bVar11 = false,
             local_4f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_4f08.Data.AllocatorInstance.Data);
          }
          bVar42 = bVar42 | bVar29;
          *(byte *)(lVar27 + 8 + *(longlong *)uVar9) = bVar29;
          bVar34 = bVar34 | bVar29 ^ 1;
          local_51e8 = bVar34;
        }
        local_5050 = (float)((uint)local_5050 & ~local_505c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5068 + 8));
        pTVar44 = local_51b0;
      } while (local_504c < *(int *)(local_5058 + 0x18));
    }
    uVar45 = 0;
    iVar43 = 1;
    if ((local_5030 != false) && (local_502f != false)) {
      TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_5038,
                          *(int *)&(local_5038->Elements).field_0x8 -
                          *(int *)&(local_5038->Elements).field_0x34,Default);
    }
    fVar6 = __real_43480000;
    fVar47 = __real_42c80000;
    iVar15 = 1;
    uVar40 = 0;
    uVar13 = 0;
    uVar41 = 0;
    if (bVar42 != 0) {
      local_4cf8[0] = 0x41200000;
      local_39f0 = (undefined1 *)0x0;
      local_39e8 = 0;
      local_39e4 = 0x10;
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
                (local_4cf8,3,__real_43480000);
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
                (local_4cf8,3,fVar47);
      bVar11 = true;
      TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
      ::TIterator::TIterator
                ((TIterator *)local_5028,
                 (TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
                  *)pTVar44,false);
      if (local_500c < *(int *)(local_5018 + 0x18)) {
        do {
          lVar27 = (longlong)local_500c * 200;
          local_4fb0 = *(longlong *)local_5028._0_8_;
          if (*(char *)(lVar27 + 8 + local_4fb0) != '\0') {
            if ((!bVar11) && (uVar24 = uVar45, uVar37 = uVar45, 0 < local_39e8)) {
              do {
                uVar35 = (uint)uVar37;
                uVar39 = 0;
                if ((int)uVar35 < local_39e8) {
                  uVar39 = ~uVar35 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                puVar25 = local_4cf0;
                if (local_39f0 != (undefined1 *)0x0) {
                  puVar25 = local_39f0;
                }
                if (*(ulonglong *)(puVar25 + uVar24 + 0x20) <
                    *(longlong *)(puVar25 + uVar24 + 0x18) + 2U) {
                  TStringBuilderBase<wchar_t>::Extend
                            ((TStringBuilderBase<wchar_t> *)(puVar25 + uVar24 + 0x10),1);
                }
                **(undefined2 **)(puVar25 + uVar24 + 0x18) = 10;
                *(longlong *)(puVar25 + uVar24 + 0x18) = *(longlong *)(puVar25 + uVar24 + 0x18) + 2;
                uVar24 = uVar24 + 0x130;
                uVar37 = (ulonglong)(uVar35 + 1);
              } while ((int)(uVar35 + 1) < local_39e8);
            }
            bVar11 = false;
            pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((longlong)local_500c * 200 +
                                          *(longlong *)local_5028._0_8_));
            local_4fb8 = pUVar20;
            if ((pUVar20 == (UObject *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OwnerSystem",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                    ,0x99b,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_39e8 < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x10),L"System Name",0xb);
            if ((local_39e8 < 2) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x140),L"Emitter Name",0xc);
            if ((local_39e8 < 3) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x270),L"Stage Name",10);
            if ((local_39e8 < 4) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x3a0),L"Avg Instances",0xd);
            if ((local_39e8 < 5) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pwVar28 = L"%s (ms)";
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
              pwVar28 = L"%s (us)";
            }
            ::FString::PrintfImpl(&local_5188,pwVar28);
            uVar39 = local_5188.Data.ArrayNum - 1;
            if (local_5188.Data.ArrayNum == 0) {
              uVar39 = uVar13;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x4d0),
                       (wchar_t *)local_5188.Data.AllocatorInstance.Data,uVar39);
            if (local_5188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5188.Data.AllocatorInstance.Data);
            }
            if ((local_39e8 < 6) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            pwVar28 = L"%s (ms)";
            if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
              pwVar28 = L"%s (us)";
            }
            ::FString::PrintfImpl(&local_5178,pwVar28);
            uVar39 = local_5178.Data.ArrayNum - 1;
            if (local_5178.Data.ArrayNum == 0) {
              uVar39 = uVar13;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x600),
                       (wchar_t *)local_5178.Data.AllocatorInstance.Data,uVar39);
            if (local_5178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5178.Data.AllocatorInstance.Data);
            }
            uVar24 = uVar45;
            uVar37 = uVar45;
            if (0 < local_39e8) {
              do {
                uVar35 = (uint)uVar37;
                uVar39 = uVar41;
                if ((int)uVar35 < local_39e8) {
                  uVar39 = ~uVar35 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                puVar25 = local_4cf0;
                if (local_39f0 != (undefined1 *)0x0) {
                  puVar25 = local_39f0;
                }
                if (*(ulonglong *)(puVar25 + uVar24 + 0x20) <
                    *(longlong *)(puVar25 + uVar24 + 0x18) + 2U) {
                  TStringBuilderBase<wchar_t>::Extend
                            ((TStringBuilderBase<wchar_t> *)(puVar25 + uVar24 + 0x10),1);
                }
                **(undefined2 **)(puVar25 + uVar24 + 0x18) = 10;
                *(longlong *)(puVar25 + uVar24 + 0x18) = *(longlong *)(puVar25 + uVar24 + 0x18) + 2;
                uVar24 = uVar24 + 0x130;
                uVar37 = (ulonglong)(uVar35 + 1);
              } while ((int)(uVar35 + 1) < local_39e8);
            }
            pTVar31 = (TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                       *)(*(longlong *)local_5028._0_8_ + (longlong)local_500c * 200 + 0x70);
            TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
            ::TIterator::TIterator((TIterator *)local_4d88,pTVar31);
            local_50b0 = 0;
            stack0xffffffffffffaf28 = local_4d88._16_16_;
            local_50e8 = (longlong *)local_4d88._0_8_;
            auStack_50e0._0_8_ = local_4d88._8_8_;
            local_50c8 = local_4d68;
            pTStack_50c0 = pTStack_4d60;
            uVar24 = local_4d88._24_8_ >> 0x20;
            local_50b8 = pTVar31;
            if (local_4d88._28_4_ < *(int *)(local_4d88._16_8_ + 0x18)) {
              do {
                plVar1 = local_50e8;
                pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((longlong)(int)uVar24 * 0xc0 + *local_50e8));
                if ((pUVar21 == (UObject *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("OwnerEmitter",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                        ,0x9a8,L""), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FVar32 = (FName)(*plVar1 + (longlong)(int)uStack_50cc * 0xc0 + 0x68);
                TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                ::TIterator::TIterator
                          ((TIterator *)local_4d58,
                           (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                            *)FVar32);
                local_5070 = 0;
                stack0xffffffffffffaf68 = local_4d58._16_16_;
                local_50a8 = (longlong *)local_4d58._0_8_;
                auStack_50a0._0_8_ = local_4d58._8_8_;
                local_5088 = local_4d38;
                pTStack_5080 = pTStack_4d30;
                uVar24 = local_4d58._24_8_ >> 0x20;
                local_5078 = FVar32;
                if (local_4d58._28_4_ < *(int *)(local_4d58._16_8_ + 0x18)) {
                  do {
                    lVar33 = (longlong)(int)uVar24 * 0x70 + *local_50a8;
                    local_4fd8.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
                    local_4fd8.Number = *(uint *)&pUVar20->field_0x1c;
                    if ((local_39e8 < 1) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    ::FName::AppendString
                              (&local_4fd8,(TStringBuilderBase<wchar_t> *)(puVar25 + 0x10));
                    local_4fd0.ComparisonIndex.Value = *(uint *)&pUVar21->field_0x18;
                    local_4fd0.Number = *(uint *)&pUVar21->field_0x1c;
                    if ((local_39e8 < 2) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    ::FName::AppendString
                              (&local_4fd0,(TStringBuilderBase<wchar_t> *)(puVar25 + 0x140));
                    lVar36 = (longlong)(int)uStack_508c;
                    lVar22 = *local_50a8;
                    if ((local_39e8 < 3) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    ::FName::AppendString
                              ((FName *)(lVar36 * 0x70 + lVar22),
                               (TStringBuilderBase<wchar_t> *)(puVar25 + 0x270));
                    if ((local_39e8 < 4) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    TStringBuilderBase<wchar_t>::AppendfImpl
                              ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x3a0),L"%4.1f");
                    if ((local_39e8 < 5) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar48 = *(float *)(lVar33 + 0x48);
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    lVar22 = 0;
                    if ((fVar5 <= fVar48) && (fVar48 = fVar48 - fVar5, fVar48 < fVar5)) {
                      lVar22 = -0x8000000000000000;
                    }
                    pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                        (&local_4dc8,(double)(ulonglong)((longlong)fVar48 + lVar22),
                                         7);
                    iVar14 = (pFVar19->Data).ArrayNum;
                    uVar39 = iVar14 - 1;
                    if (iVar14 == 0) {
                      uVar39 = uVar41;
                    }
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x4d0),
                               (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
                    if (local_4dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4dc8.Data.AllocatorInstance.Data);
                    }
                    if ((local_39e8 < 6) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    puVar25 = local_4cf0;
                    if (local_39f0 != (undefined1 *)0x0) {
                      puVar25 = local_39f0;
                    }
                    pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                        (&local_4ef8,(double)*(ulonglong *)(lVar33 + 0x40),7);
                    iVar14 = (pFVar19->Data).ArrayNum;
                    uVar39 = iVar14 - 1;
                    if (iVar14 == 0) {
                      uVar39 = uVar41;
                    }
                    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x600),
                               (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
                    if (local_4ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4ef8.Data.AllocatorInstance.Data);
                    }
                    uVar24 = uVar45;
                    uVar37 = uVar45;
                    if (0 < local_39e8) {
                      do {
                        uVar35 = (uint)uVar37;
                        uVar39 = uVar41;
                        if ((int)uVar35 < local_39e8) {
                          uVar39 = ~uVar35 >> 0x1f;
                        }
                        if ((uVar39 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        puVar25 = local_4cf0;
                        if (local_39f0 != (undefined1 *)0x0) {
                          puVar25 = local_39f0;
                        }
                        if (*(ulonglong *)(puVar25 + uVar24 + 0x20) <
                            *(longlong *)(puVar25 + uVar24 + 0x18) + 2U) {
                          TStringBuilderBase<wchar_t>::Extend
                                    ((TStringBuilderBase<wchar_t> *)(puVar25 + uVar24 + 0x10),1);
                        }
                        **(undefined2 **)(puVar25 + uVar24 + 0x18) = 10;
                        *(longlong *)(puVar25 + uVar24 + 0x18) =
                             *(longlong *)(puVar25 + uVar24 + 0x18) + 2;
                        uVar24 = uVar24 + 0x130;
                        uVar37 = (ulonglong)(uVar35 + 1);
                        pUVar20 = local_4fb8;
                      } while ((int)(uVar35 + 1) < local_39e8);
                    }
                    uStack_5090 = uStack_5090 & ~auStack_50a0._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50a0);
                    uVar24 = (ulonglong)uStack_508c;
                  } while ((int)uStack_508c < *(int *)(auStack_50a0._8_8_ + 0x18));
                  if (((char)local_5070 != '\0') && (local_5070._1_1_ != '\0')) {
                    uVar39 = *(int *)((longlong)local_5078 + 8) -
                             *(int *)((longlong)local_5078 + 0x34);
                    iVar14 = iVar15;
                    if (3 < uVar39) {
                      uVar24 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
                      lVar33 = 0x3f;
                      if (uVar24 != 0) {
                        for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                        }
                      }
                      local_4fa0 = (undefined4)lVar33;
                      iVar14 = 1 << ((byte)lVar33 & 0x1f);
                    }
                    if (((0 < (int)uVar39) && (*(int *)((longlong)local_5078 + 0x48) < iVar14)) ||
                       (iVar14 < *(int *)((longlong)local_5078 + 0x48))) {
                      *(int *)((longlong)local_5078 + 0x48) = iVar14;
                      TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                      ::Rehash((TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
                                *)local_5078);
                    }
                  }
                }
                uStack_50d0 = uStack_50d0 & ~auStack_50e0._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50e0);
                uVar24 = (ulonglong)uStack_50cc;
              } while ((int)uStack_50cc < *(int *)(auStack_50e0._8_8_ + 0x18));
              if (((char)local_50b0 != '\0') && (local_50b0._1_1_ != '\0')) {
                uVar39 = *(int *)&(local_50b8->Elements).field_0x8 -
                         *(int *)&(local_50b8->Elements).field_0x34;
                iVar14 = iVar15;
                if (3 < uVar39) {
                  uVar24 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
                  lVar33 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  local_4f9c = (undefined4)lVar33;
                  iVar14 = 1 << ((byte)lVar33 & 0x1f);
                }
                if (((0 < (int)uVar39) && (local_50b8->HashSize < iVar14)) ||
                   (iVar14 < local_50b8->HashSize)) {
                  local_50b8->HashSize = iVar14;
                  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
                  ::Rehash(local_50b8);
                }
              }
            }
            if ((local_39e8 < 3) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x270),L"Total",5);
            if ((local_39e8 < 4) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar33 = local_4fb0;
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            TStringBuilderBase<wchar_t>::AppendfImpl
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x3a0),L"%4.1f");
            if ((local_39e8 < 5) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar48 = *(float *)(lVar27 + 0x50 + lVar33);
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            lVar22 = 0;
            if ((fVar5 <= fVar48) && (fVar48 = fVar48 - fVar5, fVar48 < fVar5)) {
              lVar22 = -0x8000000000000000;
            }
            pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                (&local_4ee8,(double)(ulonglong)((longlong)fVar48 + lVar22),7);
            iVar14 = (pFVar19->Data).ArrayNum;
            uVar39 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar39 = uVar40;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x4d0),
                       (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
            if (local_4ee8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4ee8.Data.AllocatorInstance.Data);
            }
            if ((local_39e8 < 6) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar25 = local_4cf0;
            if (local_39f0 != (undefined1 *)0x0) {
              puVar25 = local_39f0;
            }
            pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                (&local_4ed8,(double)*(ulonglong *)(lVar27 + 0x48 + lVar33),7);
            iVar14 = (pFVar19->Data).ArrayNum;
            uVar39 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar39 = uVar40;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)(puVar25 + 0x600),
                       (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
            if (local_4ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4ed8.Data.AllocatorInstance.Data);
            }
            uVar24 = uVar45;
            uVar37 = uVar45;
            if (0 < local_39e8) {
              do {
                uVar35 = (uint)uVar37;
                uVar39 = uVar40;
                if ((int)uVar35 < local_39e8) {
                  uVar39 = ~uVar35 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                puVar25 = local_4cf0;
                if (local_39f0 != (undefined1 *)0x0) {
                  puVar25 = local_39f0;
                }
                if (*(ulonglong *)(puVar25 + uVar24 + 0x20) <
                    *(longlong *)(puVar25 + uVar24 + 0x18) + 2U) {
                  TStringBuilderBase<wchar_t>::Extend
                            ((TStringBuilderBase<wchar_t> *)(puVar25 + uVar24 + 0x10),1);
                }
                **(undefined2 **)(puVar25 + uVar24 + 0x18) = 10;
                *(longlong *)(puVar25 + uVar24 + 0x18) = *(longlong *)(puVar25 + uVar24 + 0x18) + 2;
                uVar24 = uVar24 + 0x130;
                uVar37 = (ulonglong)(uVar35 + 1);
              } while ((int)(uVar35 + 1) < local_39e8);
            }
          }
          local_5010 = local_5010 & ~local_501c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5028 + 8));
          pTVar44 = local_51b0;
          bVar34 = local_51e8;
        } while (local_500c < *(int *)(local_5018 + 0x18));
      }
      if ((local_4ff0 != false) && (local_4fef != false)) {
        uVar39 = *(int *)&(local_4ff8->Elements).field_0x8 -
                 *(int *)&(local_4ff8->Elements).field_0x34;
        iVar14 = iVar15;
        if (3 < uVar39) {
          uVar24 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_4fe8 = (undefined4)lVar27;
          iVar14 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((0 < (int)uVar39) && (local_4ff8->HashSize < iVar14)) ||
           (iVar14 < local_4ff8->HashSize)) {
          local_4ff8->HashSize = iVar14;
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          ::Rehash(local_4ff8);
        }
      }
      local_4ec8._0_8_ = local_5198._0_8_;
      local_4ec8._8_8_ = local_5198._8_8_;
      local_4eb8 = FVar7.field0_0x0;
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::Draw
                (local_4cf8,this_00,param_2,param_3,(FLinearColor *)&local_4eb8._s_0,
                 (FLinearColor *)&local_4ec8._s_0);
      (param_3->field0_0x0)._s_0.Y = fVar46 + (param_3->field0_0x0)._s_0.Y;
      TArray<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      ::
      ~TArray<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                (local_4cf0);
    }
    if (bVar34 != 0) {
      local_26c8[0] = 0x41200000;
      local_13c0 = (FColumn *)0x0;
      local_13b8 = 0;
      local_13b4 = 0x10;
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
                (local_26c8,1,fVar6);
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
                (local_26c8,3,fVar47);
      pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                          (local_26c8,0);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)pTVar17,L"SystemName",10);
      pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                          (local_26c8,1);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)pTVar17,L"Avg Instances",0xd);
      pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                          (local_26c8,2);
      pwVar28 = L"%s (ms)";
      if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
        pwVar28 = L"%s (us)";
      }
      ::FString::PrintfImpl(&local_5168,pwVar28);
      uVar39 = local_5168.Data.ArrayNum - 1;
      if (local_5168.Data.ArrayNum == 0) {
        uVar39 = uVar40;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)pTVar17,
                 (wchar_t *)local_5168.Data.AllocatorInstance.Data,uVar39);
      if (local_5168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5168.Data.AllocatorInstance.Data);
      }
      pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                          (local_26c8,3);
      pwVar28 = L"%s (ms)";
      if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
        pwVar28 = L"%s (us)";
      }
      ::FString::PrintfImpl(&local_5158,pwVar28);
      uVar39 = local_5158.Data.ArrayNum - 1;
      if ((float)local_5158.Data.ArrayNum == 0.0) {
        uVar39 = uVar40;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)pTVar17,
                 (wchar_t *)local_5158.Data.AllocatorInstance.Data,uVar39);
      if (local_5158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5158.Data.AllocatorInstance.Data);
      }
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::RowComplete(local_26c8);
      TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_4d28,pTVar44);
      local_50f0 = 0;
      auStack_5120._8_8_ = local_4d28._16_8_;
      uStack_5110 = local_4d28._24_4_;
      uStack_510c = local_4d28._28_4_;
      local_5128.Data = (FScriptContainerElement *)local_4d28._0_8_;
      auStack_5120._0_8_ = local_4d28._8_8_;
      local_5108.Data = local_4d08;
      pTStack_5100 = pTStack_4d00;
      uVar24 = local_4d28._24_8_ >> 0x20;
      uVar39 = local_4d28._28_4_;
      local_50f8.Data = (FScriptContainerElement *)pTVar44;
      if ((int)uVar39 < *(int *)(local_4d28._16_8_ + 0x18)) {
        do {
          FVar4.Data = local_5128.Data;
          if (*(char *)((longlong)(int)uVar24 * 200 + 8 + *(longlong *)local_5128.Data) != '\x01') {
            pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((longlong)(int)uVar39 * 200 +
                                          *(longlong *)local_5128.Data));
            if ((pUVar20 == (UObject *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OwnerSystem",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                    ,0x9da,L""), bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_4fa8.ComparisonIndex.Value = *(uint *)&pUVar20->field_0x18;
            local_4fa8.Number = *(uint *)&pUVar20->field_0x1c;
            lVar27 = (longlong)(int)uVar39 * 200 + *(longlong *)FVar4.Data;
            if ((local_13b8 < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar26 = local_26c0;
            if (local_13c0 != (FColumn *)0x0) {
              pFVar26 = local_13c0;
            }
            ::FName::AppendString(&local_4fa8,(TStringBuilderBase<wchar_t> *)&pFVar26->AllRowsText);
            if ((local_13b8 < 2) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar26 = local_26c0;
            if (local_13c0 != (FColumn *)0x0) {
              pFVar26 = local_13c0;
            }
            TStringBuilderBase<wchar_t>::AppendfImpl
                      ((TStringBuilderBase<wchar_t> *)&pFVar26[1].AllRowsText,L"%4.1f");
            if ((local_13b8 < 3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar48 = *(float *)(lVar27 + 0x50);
            pFVar26 = local_26c0;
            if (local_13c0 != (FColumn *)0x0) {
              pFVar26 = local_13c0;
            }
            lVar33 = 0;
            if ((fVar5 <= fVar48) && (fVar48 = fVar48 - fVar5, fVar48 < fVar5)) {
              lVar33 = -0x8000000000000000;
            }
            pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                (&local_4ea8,(double)(ulonglong)((longlong)fVar48 + lVar33),7);
            iVar14 = (pFVar19->Data).ArrayNum;
            uVar39 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar39 = uVar40;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&pFVar26[2].AllRowsText,
                       (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
            if (local_4ea8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4ea8.Data.AllocatorInstance.Data);
            }
            if ((local_13b8 < 4) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar26 = local_26c0;
            if (local_13c0 != (FColumn *)0x0) {
              pFVar26 = local_13c0;
            }
            pFVar19 = NiagaraDebugLocal::FormatPerfValue
                                (&local_4e98,(double)*(ulonglong *)(lVar27 + 0x48),7);
            iVar14 = (pFVar19->Data).ArrayNum;
            uVar39 = iVar14 - 1;
            if (iVar14 == 0) {
              uVar39 = uVar13;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)&pFVar26[3].AllRowsText,
                       (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar39);
            if (local_4e98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4e98.Data.AllocatorInstance.Data);
            }
            uVar24 = uVar45;
            uVar37 = uVar45;
            if (0 < local_13b8) {
              do {
                uVar35 = (uint)uVar37;
                uVar39 = uVar13;
                if ((int)uVar35 < local_13b8) {
                  uVar39 = ~uVar35 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar26 = local_26c0;
                if (local_13c0 != (FColumn *)0x0) {
                  pFVar26 = local_13c0;
                }
                if (*(ulonglong *)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x10))
                    < *(longlong *)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18))
                      + 2U) {
                  TStringBuilderBase<wchar_t>::Extend
                            ((TStringBuilderBase<wchar_t> *)
                             ((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x20)),1);
                }
                **(undefined2 **)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18)) =
                     10;
                plVar1 = (longlong *)
                         ((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18));
                *plVar1 = *plVar1 + 2;
                uVar24 = uVar24 + 0x130;
                uVar37 = (ulonglong)(uVar35 + 1);
              } while ((int)(uVar35 + 1) < local_13b8);
            }
          }
          uStack_5110 = uStack_5110 & ~auStack_5120._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_5120);
          uVar24 = (ulonglong)uStack_510c;
          uVar39 = uStack_510c;
        } while ((int)uStack_510c < *(int *)(auStack_5120._8_8_ + 0x18));
        if (((char)local_50f0 != '\0') && (local_50f0._1_1_ != '\0')) {
          uVar40 = *(int *)(local_50f8.Data + 8) - *(int *)(local_50f8.Data + 0x34);
          if (3 < uVar40) {
            uVar24 = (ulonglong)((uVar40 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_4fe4 = (undefined4)lVar27;
            iVar15 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar40) && (*(int *)(local_50f8.Data + 0x48) < iVar15)) ||
             (iVar15 < *(int *)(local_50f8.Data + 0x48))) {
            *(int *)(local_50f8.Data + 0x48) = iVar15;
            TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
                      *)local_50f8.Data);
          }
        }
      }
      local_4e88._0_8_ = local_5198._0_8_;
      local_4e88._8_8_ = local_5198._8_8_;
      local_4e78 = FVar7.field0_0x0;
      `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::Draw
                (local_26c8,this_00,param_2,param_3,(FLinearColor *)&local_4e78._s_0,
                 (FLinearColor *)&local_4e88._s_0);
      pFVar26 = local_26c0;
      if (local_13c0 != (FColumn *)0x0) {
        pFVar26 = local_13c0;
      }
      (param_3->field0_0x0)._s_0.Y = fVar46 + (param_3->field0_0x0)._s_0.Y;
      DestructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
                (pFVar26,local_13b8);
      if (local_13c0 != (FColumn *)0x0) {
        FMemory::Free(local_13c0);
      }
    }
    pFVar8 = local_51a8;
    if (*(int *)&(local_51a8->GpuUsagePerEvent).field_0x8 -
        *(int *)&(local_51a8->GpuUsagePerEvent).field_0x34 < 1) {
      return;
    }
    local_39e0[0] = 0x41200000;
    local_26d8 = (FColumn *)0x0;
    local_26d0 = 0;
    local_26cc = 0x10;
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
              (local_39e0,1,fVar6);
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
              (local_39e0,3,fVar47);
    if ((local_26d0 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar26 = local_39d8;
    if (local_26d8 != (FColumn *)0x0) {
      pFVar26 = local_26d8;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&pFVar26->AllRowsText,L"EventName",9);
    if ((local_26d0 < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar26 = local_39d8;
    if (local_26d8 != (FColumn *)0x0) {
      pFVar26 = local_26d8;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&pFVar26[1].AllRowsText,L"Avg Instances",0xd);
    if ((local_26d0 < 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pwVar38 = L"%s (ms)";
    pwVar28 = L"%s (ms)";
    pFVar26 = local_39d8;
    if (local_26d8 != (FColumn *)0x0) {
      pFVar26 = local_26d8;
    }
    if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
      pwVar28 = L"%s (us)";
    }
    ::FString::PrintfImpl(&local_5148,pwVar28);
    uVar40 = local_5148.Data.ArrayNum - 1;
    if (local_5148.Data.ArrayNum == 0) {
      uVar40 = uVar13;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&pFVar26[2].AllRowsText,
               (wchar_t *)local_5148.Data.AllocatorInstance.Data,uVar40);
    if (local_5148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5148.Data.AllocatorInstance.Data);
    }
    pTVar17 = `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
                        (local_39e0,3);
    if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
      pwVar38 = L"%s (us)";
    }
    ::FString::PrintfImpl(&local_5138,pwVar38);
    uVar40 = local_5138.Data.ArrayNum - 1;
    if (local_5138.Data.ArrayNum == 0) {
      uVar40 = uVar13;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)pTVar17,
               (wchar_t *)local_5138.Data.AllocatorInstance.Data,uVar40);
    if (local_5138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5138.Data.AllocatorInstance.Data);
    }
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::RowComplete(local_39e0);
    pTVar2 = &pFVar8->GpuUsagePerEvent;
    TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_4db8,
               (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                *)pTVar2);
    local_4f60 = 0;
    stack0xffffffffffffb078 = local_4db8._16_16_;
    local_4f98 = (longlong *)local_4db8._0_8_;
    auStack_4f90._0_8_ = local_4db8._8_8_;
    local_4f78 = local_4d98;
    pTStack_4f70 = pTStack_4d90;
    uVar24 = local_4db8._24_8_ >> 0x20;
    local_4f68 = (TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
                  *)pTVar2;
    if (local_4db8._28_4_ < *(int *)(local_4db8._16_8_ + 0x18)) {
      do {
        this_01 = (FName *)((longlong)(int)uVar24 * 0x70 + *local_4f98);
        if ((local_26d0 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar26 = local_39d8;
        if (local_26d8 != (FColumn *)0x0) {
          pFVar26 = local_26d8;
        }
        ::FName::AppendString(this_01,(TStringBuilderBase<wchar_t> *)&pFVar26->AllRowsText);
        if ((local_26d0 < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar26 = local_39d8;
        if (local_26d8 != (FColumn *)0x0) {
          pFVar26 = local_26d8;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)&pFVar26[1].AllRowsText,L"%4.1f");
        if ((local_26d0 < 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar47 = (float)this_01[9].ComparisonIndex.Value;
        pFVar26 = local_39d8;
        if (local_26d8 != (FColumn *)0x0) {
          pFVar26 = local_26d8;
        }
        lVar27 = 0;
        if ((fVar5 <= fVar47) && (fVar47 = fVar47 - fVar5, fVar47 < fVar5)) {
          lVar27 = -0x8000000000000000;
        }
        pFVar19 = NiagaraDebugLocal::FormatPerfValue
                            (&local_4e68,(double)(ulonglong)((longlong)fVar47 + lVar27),7);
        iVar15 = (pFVar19->Data).ArrayNum;
        uVar40 = iVar15 - 1;
        if (iVar15 == 0) {
          uVar40 = uVar41;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&pFVar26[2].AllRowsText,
                   (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar40);
        if (local_4e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e68.Data.AllocatorInstance.Data);
        }
        if ((local_26d0 < 4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar26 = local_39d8;
        if (local_26d8 != (FColumn *)0x0) {
          pFVar26 = local_26d8;
        }
        pFVar19 = NiagaraDebugLocal::FormatPerfValue(&local_4e58,(double)(ulonglong)this_01[8],7);
        iVar15 = (pFVar19->Data).ArrayNum;
        uVar40 = iVar15 - 1;
        if (iVar15 == 0) {
          uVar40 = uVar41;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&pFVar26[3].AllRowsText,
                   (wchar_t *)(pFVar19->Data).AllocatorInstance.Data,uVar40);
        if (local_4e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e58.Data.AllocatorInstance.Data);
        }
        uVar24 = uVar45;
        uVar37 = uVar45;
        if (0 < local_26d0) {
          do {
            uVar39 = (uint)uVar37;
            uVar40 = uVar13;
            if ((int)uVar39 < local_26d0) {
              uVar40 = ~uVar39 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar26 = local_39d8;
            if (local_26d8 != (FColumn *)0x0) {
              pFVar26 = local_26d8;
            }
            if (*(ulonglong *)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x10)) <
                *(longlong *)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18)) + 2U)
            {
              TStringBuilderBase<wchar_t>::Extend
                        ((TStringBuilderBase<wchar_t> *)
                         ((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x20)),1);
            }
            **(undefined2 **)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18)) = 10;
            plVar1 = (longlong *)((longlong)(pFVar26->AllRowsText).StringBuffer + (uVar24 - 0x18));
            *plVar1 = *plVar1 + 2;
            uVar24 = uVar24 + 0x130;
            uVar37 = (ulonglong)(uVar39 + 1);
          } while ((int)(uVar39 + 1) < local_26d0);
        }
        uStack_4f80 = uStack_4f80 & ~auStack_4f90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4f90);
        uVar24 = (ulonglong)uStack_4f7c;
      } while ((int)uStack_4f7c < *(int *)(auStack_4f90._8_8_ + 0x18));
      if (((char)local_4f60 != '\0') && (local_4f60._1_1_ != '\0')) {
        uVar41 = *(int *)&(local_4f68->Elements).field_0x8 -
                 *(int *)&(local_4f68->Elements).field_0x34;
        if (3 < uVar41) {
          uVar45 = (ulonglong)((uVar41 >> 1) + 7) * 2 + 1;
          lVar27 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar43 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((0 < (int)uVar41) && (local_4f68->HashSize < iVar43)) ||
           (iVar43 < local_4f68->HashSize)) {
          local_4f68->HashSize = iVar43;
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          ::Rehash(local_4f68);
        }
      }
    }
    local_4e08._0_8_ = local_5198._0_8_;
    local_4e08._8_8_ = local_5198._8_8_;
    local_4e38 = FVar7.field0_0x0;
    `FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::Draw
              (local_39e0,this_00,param_2,param_3,(FLinearColor *)&local_4e38._s_0,
               (FLinearColor *)&local_4e08._s_0);
    pFVar26 = local_39d8;
    if (local_26d8 != (FColumn *)0x0) {
      pFVar26 = local_26d8;
    }
    (param_3->field0_0x0)._s_0.Y = fVar46 + (param_3->field0_0x0)._s_0.Y;
    DestructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
              (pFVar26,local_26d0);
    if (local_26d8 == (FColumn *)0x0) {
      return;
    }
    FMemory::Free(local_26d8);
    return;
  }
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar23 = IConsoleManager::Get();
    ProfilingEnabledCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar23 + 0xc0))(pIVar23,L"fx.Niagara.GpuProfiling.Enabled",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&EnableCVarWarning,
                       L"GPU Profiling is disabled, enable \'fx.Niagara.GpuProfiling.Enabled\'");
    atexit(`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l5::
           _dynamic_atexit_destructor_for__EnableCVarWarning__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&NoDataWarning,L"No GPU data is ready");
    atexit(`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l5::
           _dynamic_atexit_destructor_for__NoDataWarning__);
    _Init_thread_footer(&::_TSS2);
  }
  NiagaraDebugLocal::GetStringSize((UFont *)&local_51b8,(wchar_t *)this_00);
  FCanvas::DrawTile(param_2,(double)((param_3->field0_0x0)._s_0.X - fVar47),
                    (double)((param_3->field0_0x0)._s_0.Y - fVar47),(double)(local_51b8 + fVar47),
                    (double)(local_51b4 + __real_40000000),0.0,0.0,0.0,0.0,
                    (FLinearColor *)&local_5198._s_0,(FTexture *)0x0,true);
  local_4fc8 = EnableCVarWarning.Data.AllocatorInstance.Data;
  iVar15 = EnableCVarWarning.Data.ArrayNum;
  if ((ProfilingEnabledCVar != (IConsoleVariable *)0x0) &&
     (cVar10 = (**(code **)(*(longlong *)ProfilingEnabledCVar + 0xc0))(),
     local_4fc8 = EnableCVarWarning.Data.AllocatorInstance.Data,
     iVar15 = EnableCVarWarning.Data.ArrayNum, cVar10 != '\0')) {
    local_4fc8 = NoDataWarning.Data.AllocatorInstance.Data;
    iVar15 = NoDataWarning.Data.ArrayNum;
  }
  if (iVar15 == 0) {
    local_4fc8 = (FScriptContainerElement *)0x15060d16c;
  }
  else if (local_4fc8 == (FScriptContainerElement *)0x0) goto LAB_149291c5c;
  sVar16 = wcslen((wchar_t *)local_4fc8);
  iVar43 = (int)sVar16;
LAB_149291c5c:
  local_4e28._12_4_ = uStack_4fbc;
  local_4e28.Size = iVar43;
  local_4e28.DataPtr = (wchar_t *)local_4fc8;
  iStack_4fc0 = iVar43;
  FCanvas::DrawShadowedString
            (param_2,(double)(param_3->field0_0x0)._s_0.X,(double)(param_3->field0_0x0)._s_0.Y,
             &local_4e28,this_00,(FLinearColor *)&local_4e48._s_0,&FLinearColor::Black);
  (param_3->field0_0x0)._s_0.Y = local_51b4 + (param_3->field0_0x0)._s_0.Y;
  return;
}

// DrawMessages @ 1492944d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawMessages
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,FCanvas *param_2,
          TVector2<float> *param_3)

{
  undefined1 *puVar1;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *this_00;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  UFont *pUVar10;
  FNiagaraDebugHud *pFVar11;
  TVector2<float> *pTVar12;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *pTVar13;
  bool bVar14;
  undefined4 uVar15;
  TVector2<float> TVar16;
  ForElementType<FName> FVar17;
  size_t sVar18;
  longlong lVar19;
  int iVar20;
  ForElementType<FName> FVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_2b8 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  UFont *local_250;
  ulonglong local_248;
  FNiagaraDebugHud *local_240;
  FCanvas *local_238;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *local_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  FName local_1f0;
  TVector2<float> *local_1e8;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FLinearColor_u_0 local_1c8;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TMap<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined1 local_128 [24];
  longlong lStack_110;
  undefined4 local_ec;
  ForElementType<FName> local_e8;
  int local_a0;
  int local_9c;
  ForAnyElementType local_98;
  
  local_98.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_2b8);
  local_240 = this;
  local_238 = param_2;
  local_1e8 = param_3;
  if ((NiagaraDebugLocal::Settings.OverviewFont == Small) ||
     (NiagaraDebugLocal::Settings.OverviewFont != Normal)) {
    local_250 = UEngine::GetTinyFont();
  }
  else {
    local_250 = UEngine::GetSmallFont();
  }
  fVar26 = UFont::GetMaxCharHeight(local_250);
  fVar28 = __real_43fa0000;
  fVar9 = __real_3f800000;
  puVar1 = &(this->Messages).field_0x10;
  this_00 = &this->Messages;
  iStack_228 = 0;
  local_9c = 8;
  local_e8.SecondaryData = (ForElementType<FName>)0x0;
  local_a0 = 0;
  iVar4 = *(int *)&(this->Messages).field_0x28;
  fVar26 = fVar26 + __real_3f800000;
  local_248 = 1;
  fVar29 = 0.0;
  local_210 = 0;
  uStack_224 = 1;
  iStack_214 = 0;
  if (iVar4 != 0) {
    puVar25 = *(uint **)&(this->Messages).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar1;
    }
    uStack_224 = *puVar25;
    local_210 = 0;
    while (uStack_224 == 0) {
      lVar19 = (longlong)iStack_228;
      local_210 = local_210 + 0x20;
      iStack_228 = iStack_228 + 1;
      uStack_224 = 1;
      iStack_214 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14929461d;
      uStack_224 = puVar25[lVar19 + 1];
    }
    uStack_224 = -uStack_224 & uStack_224;
    uVar2 = (ulonglong)uStack_224 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_200 = (int)lVar19;
    iStack_214 = local_210 + -1 + local_200;
    if (iVar4 < iStack_214) {
      iStack_214 = iVar4;
    }
  }
LAB_14929461d:
  uVar23 = *(uint *)&(this->Messages).field_0x28;
  uStack_20c = local_ec;
  iStack_208 = *(int *)&(this->Messages).field_0x8 - *(int *)&(this->Messages).field_0x34;
  uVar22 = uVar23 & 0xffffffe0;
  TStack_180._padding_ = CONCAT44(uStack_224,iStack_228);
  uStack_218 = 0xffffffff;
  TStack_180.CurrentBitIndex = iStack_214;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar23 >> 5;
  TStack_180._28_4_ = local_ec;
  TStack_180.BaseBitIndex = local_210;
  uStack_160 = CONCAT44(uStack_204,iStack_208);
  local_230 = this_00;
  local_220 = puVar1;
  local_188 = this_00;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar4 < (int)uVar23)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar11 = local_240;
  pUVar10 = local_250;
  uVar5 = *(uint *)&(this->Messages).field_0x28;
  if (uVar23 != uVar5) {
    puVar24 = *(undefined1 **)&(this->Messages).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_149294740;
      uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1fc = (int)lVar19;
    uVar23 = local_1fc + -1 + uVar22;
    if ((int)uVar5 < (int)uVar23) {
      uVar23 = uVar5;
    }
  }
LAB_149294740:
  while( true ) {
    pTVar13 = local_188;
    if (*(int *)(&local_188->field_0x0 + 8) - *(int *)(&local_188->field_0x0 + 0x34) !=
        (int)uStack_160) {
      local_258 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
    }
    iVar4 = local_a0;
    if (((TStack_180.CurrentBitIndex == uVar23) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar13 == this_00)) break;
    FVar21 = (ForElementType<FName>)
             (*(longlong *)&pTVar13->field_0x0 + (longlong)TStack_180.CurrentBitIndex * 0x30);
    fVar27 = *(float *)((longlong)FVar21 + 0x20) - pFVar11->DeltaSeconds;
    *(float *)((longlong)FVar21 + 0x20) = fVar27;
    if (fVar27 <= 0.0) {
      FVar17 = (ForElementType<FName>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar17 = local_e8.SecondaryData;
      }
      if ((ulonglong)FVar17 <= (ulonglong)FVar21) {
        FVar17 = (ForElementType<FName>)&local_e8;
        if (local_e8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar17 = local_e8.SecondaryData;
        }
        if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar17 + (longlong)local_9c * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_a0 == local_9c) {
        local_a0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                             (0x408,&local_e8,&local_9c);
      }
      lVar19 = (longlong)local_a0;
      FVar17 = (ForElementType<FName>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar17 = local_e8.SecondaryData;
      }
      local_a0 = local_a0 + 1;
      *(undefined8 *)((longlong)FVar17 + lVar19 * 8) = *(undefined8 *)FVar21;
      fVar27 = fVar28;
      fVar30 = fVar29;
    }
    else {
      TVar16 = NiagaraDebugLocal::GetStringSize((UFont *)local_128,(wchar_t *)pUVar10);
      fVar27 = *(float *)TVar16.field0_0x0;
      if (*(float *)TVar16.field0_0x0 <= fVar28) {
        fVar27 = fVar28;
      }
      fVar30 = *(float *)((longlong)TVar16.field0_0x0 + 4);
      if (*(float *)((longlong)TVar16.field0_0x0 + 4) <= fVar29) {
        fVar30 = fVar29;
      }
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
    fVar28 = fVar27;
    fVar29 = fVar30;
  }
  FVar21 = (ForElementType<FName>)&local_e8;
  if (local_e8.SecondaryData != (ForElementType<FName>)0x0) {
    FVar21 = local_e8.SecondaryData;
  }
  FVar17 = (ForElementType<FName>)((longlong)FVar21 + (longlong)local_a0 * 8);
  while( true ) {
    if (local_a0 != iVar4) {
      local_257 = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_257);
    }
    pTVar12 = local_1e8;
    iVar20 = *(int *)&(this->Messages).field_0x8;
    if (FVar21 == FVar17) break;
    FVar6 = *(FName *)FVar21;
    local_1f0 = FVar6;
    if (iVar20 != *(int *)&(this->Messages).field_0x34) {
      uVar23 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
      TSet<TTuple<FName,FNiagaraDebugMessage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FNiagaraDebugMessage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>,FDefaultSetAllocator>
                           *)this_00,FVar6.Number + uVar23,&local_1f0);
    }
    FVar21 = (ForElementType<FName>)((longlong)FVar21 + 8);
  }
  if (iVar20 != *(int *)&(this->Messages).field_0x34) {
    fVar29 = fVar29 + __real_40000000;
    fVar28 = fVar28 + ___real_41b00000;
    fVar27 = fVar26 + (local_1e8->field0_0x0)._s_0.Y;
    (local_1e8->field0_0x0)._s_0.Y = fVar27;
    FCanvas::DrawTile(local_238,(double)((local_1e8->field0_0x0)._s_0.X - fVar9),
                      (double)(fVar27 - fVar9),(double)fVar28,(double)fVar29,0.0,0.0,0.0,0.0,
                      &NiagaraDebugLocal::Settings.DefaultBackgroundColor,(FTexture *)0x0,true);
    iVar4 = *(int *)&(this->Messages).field_0x28;
    iStack_1b0 = 0;
    local_198 = 0;
    iStack_19c = 0;
    if (iVar4 != 0) {
      puVar25 = *(uint **)&(this->Messages).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)puVar1;
      }
      uVar23 = *puVar25;
      while (uVar23 == 0) {
        lVar19 = (longlong)iStack_1b0;
        local_198 = local_198 + 0x20;
        iStack_1b0 = iStack_1b0 + 1;
        iStack_19c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_149294a60;
        uVar23 = puVar25[lVar19 + 1];
      }
      local_248 = (ulonglong)(-uVar23 & uVar23);
      uVar2 = local_248 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_1f8 = (int)lVar19;
      iStack_19c = local_198 + -1 + local_1f8;
      if (iVar4 < iStack_19c) {
        iStack_19c = iVar4;
      }
    }
LAB_149294a60:
    uStack_1ac = (undefined4)local_248;
    uVar23 = *(uint *)&(local_240->Messages).field_0x28;
    iStack_194 = iStack_214;
    iStack_190 = *(int *)&(local_240->Messages).field_0x8 -
                 *(int *)&(local_240->Messages).field_0x34;
    uVar22 = uVar23 & 0xffffffe0;
    uStack_1a0 = 0xffffffff;
    TStack_150._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
    TStack_150.CurrentBitIndex = iStack_19c;
    TStack_150.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar23 >> 5;
    TStack_150._28_4_ = iStack_214;
    TStack_150.BaseBitIndex = local_198;
    uStack_130 = CONCAT44(uStack_18c,iStack_190);
    local_1b8 = this_00;
    local_1a8 = puVar1;
    local_158 = this_00;
    TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar23 < 0) || (iVar4 < (int)uVar23)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar5 = *(uint *)&(this->Messages).field_0x28;
    if (uVar23 != uVar5) {
      puVar24 = *(undefined1 **)&(this->Messages).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
      while (uVar23 == 0) {
        lVar19 = (longlong)iVar20;
        uVar22 = uVar22 + 0x20;
        iVar20 = iVar20 + 1;
        uVar23 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_149294b80;
        uVar23 = *(uint *)(puVar24 + lVar19 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar23 = (int)lVar19 + -1 + uVar22;
      if ((int)uVar5 < (int)uVar23) {
        uVar23 = uVar5;
      }
    }
LAB_149294b80:
    do {
      pTVar13 = local_158;
      if (*(int *)(&local_158->field_0x0 + 8) - *(int *)(&local_158->field_0x0 + 0x34) !=
          (int)uStack_130) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_256);
      }
      lVar19 = (longlong)TStack_150.CurrentBitIndex;
      if (((TStack_150.CurrentBitIndex == uVar23) &&
          (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar13 == this_00)) break;
      lVar7 = *(longlong *)&pTVar13->field_0x0;
      cVar3 = *(char *)(lVar7 + 8 + lVar19 * 0x30);
      if (cVar3 == '\0') {
        local_1c8._s_0.R = (float)NiagaraDebugLocal::Settings.MessageInfoTextColor.field0_0x0._0_4_;
        local_1c8._s_0.G = (float)NiagaraDebugLocal::Settings.MessageInfoTextColor.field0_0x0._4_4_;
        local_1c8._s_0.B = (float)NiagaraDebugLocal::Settings.MessageInfoTextColor.field0_0x0._8_4_;
        local_1c8._s_0.A = (float)NiagaraDebugLocal::Settings.MessageInfoTextColor.field0_0x0._12_4_
        ;
      }
      else if (cVar3 == '\x01') {
        local_1c8._s_0.R =
             (float)NiagaraDebugLocal::Settings.MessageWarningTextColor.field0_0x0._0_4_;
        local_1c8._s_0.G =
             (float)NiagaraDebugLocal::Settings.MessageWarningTextColor.field0_0x0._4_4_;
        local_1c8._s_0.B =
             (float)NiagaraDebugLocal::Settings.MessageWarningTextColor.field0_0x0._8_4_;
        local_1c8._s_0.A =
             (float)NiagaraDebugLocal::Settings.MessageWarningTextColor.field0_0x0._12_4_;
      }
      else if (cVar3 == '\x02') {
        local_1c8._s_0.R = (float)NiagaraDebugLocal::Settings.MessageErrorTextColor.field0_0x0._0_4_
        ;
        local_1c8._s_0.G = (float)NiagaraDebugLocal::Settings.MessageErrorTextColor.field0_0x0._4_4_
        ;
        local_1c8._s_0.B = (float)NiagaraDebugLocal::Settings.MessageErrorTextColor.field0_0x0._8_4_
        ;
        local_1c8._s_0.A =
             (float)NiagaraDebugLocal::Settings.MessageErrorTextColor.field0_0x0._12_4_;
      }
      if (*(int *)(lVar7 + 0x18 + lVar19 * 0x30) == 0) {
        local_1d8 = L"";
LAB_149294c0f:
        sVar18 = wcslen(local_1d8);
        uVar15 = (undefined4)sVar18;
      }
      else {
        local_1d8 = *(wchar_t **)(lVar7 + 0x10 + lVar19 * 0x30);
        uVar15 = 0;
        if (local_1d8 != (wchar_t *)0x0) goto LAB_149294c0f;
      }
      lStack_110 = CONCAT44(uStack_1cc,uVar15);
      local_128._16_8_ = local_1d8;
      uStack_1d0 = uVar15;
      FCanvas::DrawShadowedString
                (local_238,(double)(pTVar12->field0_0x0)._s_0.X,(double)(pTVar12->field0_0x0)._s_0.Y
                 ,(TStringView<wchar_t> *)(local_128 + 0x10),local_250,
                 (FLinearColor *)&local_1c8._s_0,&FLinearColor::Black);
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      (pTVar12->field0_0x0)._s_0.Y = fVar26 + (pTVar12->field0_0x0)._s_0.Y;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    } while( true );
  }
  if (local_e8.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_e8.SecondaryData);
  }
  return;
}

// DrawOverview @ 149294ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawOverview
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,FCanvas *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  ENiagaraDebugPlaybackMode EVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  FNiagaraDebugHud *pFVar10;
  FCanvas *this_00;
  FNiagaraWorldManager *pFVar11;
  ForAnyElementType FVar12;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *pTVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  UFont *this_01;
  TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
  *pTVar17;
  FString *pFVar18;
  FString *pFVar19;
  FString *pFVar20;
  FNiagaraDebugHUDStatsListener *pFVar21;
  TVector2<float> TVar22;
  void *pvVar23;
  UClass *pUVar24;
  UEnum *pUVar25;
  FText *pFVar26;
  UEnum *this_02;
  size_t sVar27;
  ulonglong uVar28;
  ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
  FVar29;
  undefined8 uVar30;
  IConsoleManager *pIVar31;
  longlong *plVar32;
  wchar_t *pwVar33;
  ulong64 uVar34;
  ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
  FVar35;
  int iVar36;
  longlong lVar37;
  ForAnyElementType FVar38;
  uint uVar39;
  ForElementType<unsigned_int> FVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  ForElementType<unsigned_int> FVar45;
  uint *puVar46;
  int iVar47;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *pTVar48;
  bool bVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_2368 [32];
  FIdentityFunctor local_2308 [4];
  float local_2304;
  float local_2300 [2];
  TVector2<float>_u_0 local_22f8;
  float local_22f0 [2];
  float local_22e8;
  undefined1 local_22e0;
  undefined1 local_22df;
  undefined1 local_22de;
  undefined1 local_22dd;
  undefined1 local_22dc;
  undefined1 local_22db [3];
  FNiagaraDebugHud *local_22d8;
  ForAnyElementType local_22d0;
  undefined8 local_22c8;
  FLinearColor_u_0 local_22b8;
  FLinearColor_u_0 local_22a8;
  ForAnyElementType local_2298;
  undefined8 local_2290;
  TArray<double,TSizedDefaultAllocator<32>_> local_2288;
  FCanvas *local_2278;
  FString local_2270;
  FString local_2260;
  FString local_2250;
  FString local_2240;
  FString local_2230;
  FString local_2220;
  FString local_2210;
  FString local_2200;
  double local_21f0;
  uint local_21e8;
  FString local_21e0;
  FString local_21d0;
  FString local_21c0;
  FString local_21b0;
  FString local_21a0;
  FNiagaraWorldManager *local_2190;
  ForElementType<unsigned_int> local_2188;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_2180;
  FString local_2178;
  FString local_2168;
  FString local_2158;
  FString local_2148;
  FString local_2138;
  FString local_2128;
  FString local_2118;
  FString local_2108;
  FString local_20f8;
  float local_20e8;
  float local_20e4;
  FLinearColor_u_0 local_20d8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_20c8;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_20c0;
  int iStack_20b8;
  uint uStack_20b4;
  ForAnyElementType local_20b0;
  int iStack_20a8;
  int iStack_20a4;
  int local_20a0;
  undefined4 uStack_209c;
  int iStack_2098;
  int iStack_2094;
  int local_2090;
  float local_208c;
  float local_2088;
  float local_2084;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_2080;
  int iStack_2078;
  uint uStack_2074;
  TBitArray<FDefaultBitArrayAllocator> *local_2070;
  float fStack_2068;
  int iStack_2064;
  int local_2060;
  int iStack_205c;
  int iStack_2058;
  undefined4 uStack_2054;
  FCanvas *local_2050;
  LARGE_INTEGER local_2048;
  LARGE_INTEGER local_2040;
  ForAnyElementType local_2038;
  UFont *local_2030;
  ForAnyElementType local_2028;
  undefined1 local_2020 [16];
  FString local_2010;
  FString local_2000;
  FString local_1ff0;
  FString local_1fe0;
  FString local_1fd0;
  FString local_1fc0;
  FString local_1fb0;
  FString local_1fa0;
  FString local_1f90;
  FString local_1f80;
  FString local_1f70;
  FString local_1f60;
  FString local_1f50;
  FString local_1f40;
  FString local_1f30;
  FString local_1f20;
  FString local_1f10;
  FString local_1f00;
  FString local_1ef0;
  FString local_1ee0;
  FString local_1ed0;
  FString local_1ec0;
  FString local_1eb0;
  FString local_1ea0;
  FString local_1e90;
  FString local_1e80;
  FString local_1e70;
  FScriptContainerElement *local_1e58;
  int iStack_1e50;
  int iStack_1e4c;
  FScriptContainerElement *local_1e48;
  int iStack_1e40;
  int iStack_1e3c;
  FScriptContainerElement *local_1e38;
  int iStack_1e30;
  int iStack_1e2c;
  FString local_1e28;
  FLinearColor_u_0 local_1e18;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_1e08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e00;
  undefined8 uStack_1de0;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_1dd8;
  undefined1 auStack_1dd0 [16];
  uint uStack_1dc0;
  uint uStack_1dbc;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  wchar_t *local_1da8;
  undefined4 uStack_1da0;
  undefined4 uStack_1d9c;
  wchar_t *local_1d98;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  wchar_t *local_1d88;
  undefined4 uStack_1d80;
  undefined4 uStack_1d7c;
  FScriptContainerElement *local_1d78;
  int iStack_1d70;
  undefined4 uStack_1d6c;
  FScriptContainerElement *local_1d68;
  int iStack_1d60;
  undefined4 uStack_1d5c;
  FGraph<double> local_1d58;
  wchar_t *local_1d08;
  int iStack_1d00;
  undefined4 uStack_1cfc;
  <lambda_16> local_1cf8;
  <lambda_17> local_1ce0;
  <lambda_18> local_1cc8;
  <lambda_19> local_1cb0;
  <lambda_20> local_1c98;
  <lambda_21> local_1c80;
  <lambda_22> local_1c68;
  <lambda_23> local_1c50;
  <lambda_1> local_1c38;
  <lambda_2> local_1c20;
  <lambda_3> local_1c08;
  <lambda_4> local_1bf0;
  <lambda_5> local_1bd8;
  <lambda_6> local_1bc0;
  <lambda_7> local_1ba8;
  <lambda_8> local_1b90;
  <lambda_9> local_1b78;
  <lambda_10> local_1b60;
  <lambda_11> local_1b48;
  <lambda_12> local_1b30;
  <lambda_13> local_1b18;
  <lambda_14> local_1b00;
  <lambda_15> local_1ae8;
  undefined1 local_1ad0 [16];
  FString local_1ac0;
  FString local_1ab0;
  FString local_1aa0;
  FString local_1a90;
  FString local_1a80;
  FString local_1a70;
  FLinearColor_u_0 local_1a58;
  undefined1 local_1a48 [16];
  FText local_1a38;
  FText local_1a28;
  undefined1 local_1a18 [16];
  TStringView<wchar_t> local_1a08;
  FText local_19f8;
  TStringView<wchar_t> local_19e8;
  FLinearColor_u_0 local_19d8;
  TStringView<wchar_t> local_19c8;
  FLinearColor_u_0 local_19b8;
  TStringView<wchar_t> local_19a8;
  FLinearColor_u_0 local_1998;
  FLinearColor_u_0 local_1988;
  FLinearColor_u_0 local_1978;
  undefined1 local_1968 [16];
  TStringView<wchar_t> local_1958;
  FString local_1948;
  TStringView<wchar_t> local_1938;
  FString local_1928;
  FString local_1918;
  FString local_1908;
  FString local_18f8;
  FString local_18e8;
  FString local_18d8;
  FString local_18c8;
  FString local_18b8;
  FString local_18a8;
  FString local_1898;
  FString local_1888;
  FString local_1878;
  FString local_1868;
  FString local_1858;
  FString local_1848;
  FString local_1838;
  FString local_1828;
  FString local_1818;
  FString local_1808;
  FString local_17f8;
  FString local_17e8;
  FString local_17d8;
  FString local_17c8;
  FString local_17b8;
  FString local_17a8;
  FString local_1798;
  FString local_1788;
  FString local_1778;
  FString local_1768;
  FString local_1758;
  FString local_1748;
  FString local_1738;
  FString local_1728;
  FString local_1718;
  FString local_1708;
  FString local_16f8;
  FString local_16e8;
  FString local_16d8;
  FString local_16c8;
  FString local_16b8;
  FString local_16a8;
  FString local_1698;
  FString local_1688 [2];
  undefined4 local_165c;
  undefined1 local_1658 [48];
  undefined1 local_1628 [48];
  undefined1 local_15f8 [48];
  undefined1 local_15c8 [48];
  undefined1 local_1598 [48];
  undefined1 local_1568 [48];
  undefined1 local_1538 [48];
  undefined1 local_1508 [48];
  undefined1 local_14d8 [48];
  undefined1 local_14a8 [48];
  undefined1 local_1478 [48];
  undefined1 local_1448 [48];
  undefined1 local_1418 [48];
  undefined1 local_13e8 [48];
  undefined1 local_13b8 [48];
  undefined1 local_1388 [48];
  undefined1 local_1358 [48];
  undefined1 local_1328 [48];
  undefined1 local_12f8 [48];
  undefined1 local_12c8 [48];
  undefined1 local_1298 [48];
  undefined1 local_1268 [48];
  undefined1 local_1238 [48];
  ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
  local_1208;
  uint local_9f8;
  uint local_9f4 [3];
  TStringBuilderBase<wchar_t> local_9e8;
  FScriptContainerElement local_9c8 [256];
  TStringBuilderBase<wchar_t> local_8c8;
  FScriptContainerElement local_8a8 [2048];
  ulonglong local_a8 [14];
  
  local_a8[0] = __security_cookie.value ^ (ulonglong)auStackY_2368;
  local_22d8 = this;
  local_2278 = param_2;
  local_2190 = param_1;
  if ((NiagaraDebugLocal::Settings.OverviewFont == Small) ||
     (NiagaraDebugLocal::Settings.OverviewFont != Normal)) {
    this_01 = UEngine::GetTinyFont();
  }
  else {
    this_01 = UEngine::GetSmallFont();
  }
  local_2304 = UFont::GetMaxCharHeight(this_01);
  fVar55 = __real_3f800000;
  local_2300[0] = 0.0;
  local_2304 = local_2304 + __real_3f800000;
  local_22b8 = NiagaraDebugLocal::Settings.OverviewDetailColor.field0_0x0;
  iVar47 = 7;
  local_1208.SecondaryData =
       (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
        )0x0;
  local_9f8 = 0;
  local_1e18 = NiagaraDebugLocal::Settings.DefaultBackgroundColor.field0_0x0;
  local_20d8 = NiagaraDebugLocal::Settings.OverviewHeadingColor.field0_0x0;
  local_9f4[0] = 0x10;
  local_22f8._s_0.Y = (float)NiagaraDebugLocal::Settings.OverviewLocation.field0_0x0._s_0.Y;
  local_22a8 = NiagaraDebugLocal::Settings.OverviewDetailHighlightColor.field0_0x0;
  local_22f8._s_0.X = (float)NiagaraDebugLocal::Settings.OverviewLocation.field0_0x0._s_0.X;
  fVar56 = __real_443b8000;
  if (NiagaraDebugLocal::Settings.bOverviewEnabled != false) {
    local_1c38.DetailColor = (FLinearColor *)&local_22b8;
    local_1c38.DetailHighlightColor = (FLinearColor *)&local_22a8;
    local_1c38.fAdvanceHeight = &local_2304;
    if ((this->LongestSystemPrettyName).Data.ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(this->LongestSystemPrettyName).Data.AllocatorInstance.Data;
    }
    local_9f8 = 1;
    pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
              ::
              TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l5::<lambda_1>_>
                        (local_1658,&local_1c38);
    pFVar18 = ::FString::FString(&local_1748,L"System Name");
    pFVar19 = ::FString::FString(&local_1738,L"");
    pFVar20 = ::FString::FString(&local_1728,L"");
    `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
              (&local_1208,pFVar20,pFVar19,pFVar18,local_2300,this_01,pwVar33,pTVar17);
    if (NiagaraDebugLocal::Settings.OverviewMode == Overview) {
      if (NiagaraDebugLocal::Settings.bShowRegisteredComponents != false) {
        local_1c20.DetailColor = (FLinearColor *)&local_22b8;
        local_1c20.DetailHighlightColor = (FLinearColor *)&local_22a8;
        local_1c20.fAdvanceHeight = &local_2304;
        local_2220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2220.Data.ArrayNum = 0;
        local_2220.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_2220,local_22d8->GlobalTotalRegistered);
        uVar14 = local_9f8;
        if (local_9f8 == local_9f4[0]) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                             (0x1080,&local_1208,(int *)local_9f4);
        }
        local_9f8 = uVar14 + 1;
        FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                  )&local_1208;
        if (local_1208.SecondaryData !=
            (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
             )0x0) {
          FVar29 = local_1208.SecondaryData;
        }
        pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                  ::
                  TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l11::<lambda_2>_>
                            (local_1628,&local_1c20);
        pFVar18 = ::FString::FString(&local_1718,L"# Registered");
        local_2020._0_8_ = local_2220.Data.AllocatorInstance.Data;
        local_2020._8_4_ = local_2220.Data.ArrayNum;
        local_2020._12_4_ = local_2220.Data.ArrayMax;
        local_2220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2220.Data.ArrayNum = 0;
        local_2220.Data.ArrayMax = 0;
        pFVar19 = ::FString::FString(&local_1708,L"TotalRegistered:");
        `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                  ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                   (FString *)local_2020,pFVar18,local_2300,this_01,L"0000",pTVar17);
        if (local_2220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2220.Data.AllocatorInstance.Data);
        }
      }
      local_1c08.DetailColor = (FLinearColor *)&local_22b8;
      local_1c08.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1c08.fAdvanceHeight = &local_2304;
      local_2210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2210.Data.ArrayNum = 0;
      local_2210.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2210,local_22d8->GlobalTotalActive);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_3>_>
                          (local_15f8,&local_1c08);
      pFVar18 = ::FString::FString(&local_16f8,L"# Active");
      local_2010.Data.AllocatorInstance.Data = local_2210.Data.AllocatorInstance.Data;
      local_2010.Data.ArrayNum = local_2210.Data.ArrayNum;
      local_2010.Data.ArrayMax = local_2210.Data.ArrayMax;
      local_2210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2210.Data.ArrayNum = 0;
      local_2210.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_16e8,L"TotalActive:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_2010,pFVar18,local_2300,this_01,L"0000",pTVar17);
      if (local_2210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2210.Data.AllocatorInstance.Data);
      }
      local_1bf0.DetailColor = (FLinearColor *)&local_22b8;
      local_1bf0.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1bf0.fAdvanceHeight = &local_2304;
      local_2230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2230.Data.ArrayNum = 0;
      local_2230.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2230,local_22d8->GlobalTotalScalability);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_4>_>
                          (local_15c8,&local_1bf0);
      pFVar18 = ::FString::FString(&local_16d8,L"# Scalability");
      local_2000.Data.AllocatorInstance.Data = local_2230.Data.AllocatorInstance.Data;
      local_2000.Data.ArrayNum = local_2230.Data.ArrayNum;
      local_2000.Data.ArrayMax = local_2230.Data.ArrayMax;
      local_2230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2230.Data.ArrayNum = 0;
      local_2230.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_17c8,L"TotalScalability:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_2000,pFVar18,local_2300,this_01,L"0000",pTVar17);
      if (local_2230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2230.Data.AllocatorInstance.Data);
      }
      local_1bd8.DetailColor = (FLinearColor *)&local_22b8;
      local_1bd8.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1bd8.fAdvanceHeight = &local_2304;
      local_2200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2200.Data.ArrayNum = 0;
      local_2200.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2200,local_22d8->GlobalTotalEmitters);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_5>_>
                          (local_1598,&local_1bd8);
      pFVar18 = ::FString::FString(&local_17b8,L"# Emitters");
      local_1ff0.Data.AllocatorInstance.Data = local_2200.Data.AllocatorInstance.Data;
      local_1ff0.Data.ArrayNum = local_2200.Data.ArrayNum;
      local_1ff0.Data.ArrayMax = local_2200.Data.ArrayMax;
      local_2200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2200.Data.ArrayNum = 0;
      local_2200.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_17a8,L"TotalEmitters:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1ff0,pFVar18,local_2300,this_01,L"0000",pTVar17);
      if (local_2200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2200.Data.AllocatorInstance.Data);
      }
      local_1bc0.DetailColor = (FLinearColor *)&local_22b8;
      local_1bc0.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1bc0.fAdvanceHeight = &local_2304;
      local_2270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2270.Data.ArrayNum = 0;
      local_2270.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2270,local_22d8->GlobalTotalParticles);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_6>_>
                          (local_1568,&local_1bc0);
      pFVar18 = ::FString::FString(&local_1798,L"# Particles");
      local_1fe0.Data.AllocatorInstance.Data = local_2270.Data.AllocatorInstance.Data;
      local_1fe0.Data.ArrayNum = local_2270.Data.ArrayNum;
      local_1fe0.Data.ArrayMax = local_2270.Data.ArrayMax;
      local_2270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2270.Data.ArrayNum = 0;
      local_2270.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_1788,L"TotalParticles:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1fe0,pFVar18,local_2300,this_01,L"0000000",pTVar17);
      if (local_2270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2270.Data.AllocatorInstance.Data);
      }
      local_1ba8.DetailColor = (FLinearColor *)&local_22b8;
      local_1ba8.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1ba8.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_21d0,L"%6.2fmb");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_7>_>
                          (local_1538,&local_1ba8);
      pFVar18 = ::FString::FString(&local_1778,L"# MBytes");
      local_1fd0.Data.AllocatorInstance.Data = local_21d0.Data.AllocatorInstance.Data;
      local_1fd0.Data.ArrayNum = local_21d0.Data.ArrayNum;
      local_1fd0.Data.ArrayMax = local_21d0.Data.ArrayMax;
      local_21d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_21d0.Data.ArrayNum = 0;
      local_21d0.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_1768,L"TotalMemory:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1fd0,pFVar18,local_2300,this_01,L"00000",pTVar17);
      param_1 = local_2190;
      param_2 = local_2278;
      fVar56 = local_2300[0];
      if (local_21d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21d0.Data.AllocatorInstance.Data);
        param_1 = local_2190;
        param_2 = local_2278;
        fVar56 = local_2300[0];
      }
    }
    else if (NiagaraDebugLocal::Settings.OverviewMode == Scalability) {
      ::FString::FString(&local_1ac0,L"%d | %d");
      pFVar10 = local_22d8;
      local_1b90.DetailColor = (FLinearColor *)&local_22b8;
      local_1b90.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b90.fAdvanceHeight = &local_2304;
      local_2260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2260.Data.ArrayNum = 0;
      local_2260.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2260,local_22d8->GlobalTotalActive);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_8>_>
                          (local_1508,&local_1b90);
      pFVar18 = ::FString::FString(&local_1758,L"# Active");
      local_1fc0.Data.AllocatorInstance.Data = local_2260.Data.AllocatorInstance.Data;
      local_1fc0.Data.ArrayNum = local_2260.Data.ArrayNum;
      local_1fc0.Data.ArrayMax = local_2260.Data.ArrayMax;
      local_2260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2260.Data.ArrayNum = 0;
      local_2260.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_16c8,L"TotalActive:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1fc0,pFVar18,local_2300,this_01,L"0000",pTVar17);
      if (local_2260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2260.Data.AllocatorInstance.Data);
      }
      local_1b78.DetailColor = (FLinearColor *)&local_22b8;
      local_1b78.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b78.fAdvanceHeight = &local_2304;
      local_2250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2250.Data.ArrayNum = 0;
      local_2250.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2250,pFVar10->GlobalTotalScalability);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_9>_>
                          (local_14d8,&local_1b78);
      pFVar18 = ::FString::FString(&local_16b8,L"# Scalability");
      local_1fb0.Data.AllocatorInstance.Data = local_2250.Data.AllocatorInstance.Data;
      local_1fb0.Data.ArrayNum = local_2250.Data.ArrayNum;
      local_1fb0.Data.ArrayMax = local_2250.Data.ArrayMax;
      local_2250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2250.Data.ArrayNum = 0;
      local_2250.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_16a8,L"TotalScalability:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1fb0,pFVar18,local_2300,this_01,L"0000",pTVar17);
      if (local_2250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2250.Data.AllocatorInstance.Data);
      }
      pFVar10 = local_22d8;
      local_1b60.DetailColor = (FLinearColor *)&local_22b8;
      local_1b60.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b60.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_21c0,L"%d | %d");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_10>_>
                          (local_14a8,&local_1b60);
      pFVar18 = ::FString::FString(&local_1698,L"# Culled (Asleep | Killed)");
      local_1fa0.Data.AllocatorInstance.Data = local_21c0.Data.AllocatorInstance.Data;
      local_1fa0.Data.ArrayNum = local_21c0.Data.ArrayNum;
      local_1fa0.Data.ArrayMax = local_21c0.Data.ArrayMax;
      local_21c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_21c0.Data.ArrayNum = 0;
      local_21c0.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(local_1688,L"TotalCulled:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1fa0,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_21c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21c0.Data.AllocatorInstance.Data);
      }
      local_1b48.DetailColor = (FLinearColor *)&local_22b8;
      local_1b48.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b48.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_2178,L"%d | %d");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_11>_>
                          (local_1478,&local_1b48);
      pFVar18 = ::FString::FString(&local_1918,L"# Distance (Asleep | Killed)");
      local_1f90.Data.AllocatorInstance.Data = local_2178.Data.AllocatorInstance.Data;
      local_1f90.Data.ArrayNum = local_2178.Data.ArrayNum;
      local_1f90.Data.ArrayMax = local_2178.Data.ArrayMax;
      local_2178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2178.Data.ArrayNum = 0;
      local_2178.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_1908,L"Distance:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1f90,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_2178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2178.Data.AllocatorInstance.Data);
      }
      local_1b30.DetailColor = (FLinearColor *)&local_22b8;
      local_1b30.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b30.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_2158,L"%d | %d");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_12>_>
                          (local_1448,&local_1b30);
      pFVar18 = ::FString::FString(&local_18f8,L"# Visibility (Asleep | Killed)");
      local_1f80.Data.AllocatorInstance.Data = local_2158.Data.AllocatorInstance.Data;
      local_1f80.Data.ArrayNum = local_2158.Data.ArrayNum;
      local_1f80.Data.ArrayMax = local_2158.Data.ArrayMax;
      local_2158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2158.Data.ArrayNum = 0;
      local_2158.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_18e8,L"Visibility:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1f80,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_2158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2158.Data.AllocatorInstance.Data);
      }
      local_1b18.DetailColor = (FLinearColor *)&local_22b8;
      local_1b18.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b18.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_2168,L"%d | %d");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_13>_>
                          (local_1418,&local_1b18);
      pFVar18 = ::FString::FString(&local_18d8,L"# Inst Count (Asleep | Killed)");
      local_1f70.Data.AllocatorInstance.Data = local_2168.Data.AllocatorInstance.Data;
      local_1f70.Data.ArrayNum = local_2168.Data.ArrayNum;
      local_1f70.Data.ArrayMax = local_2168.Data.ArrayMax;
      local_2168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2168.Data.ArrayNum = 0;
      local_2168.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_18c8,L"InstanceCount:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1f70,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_2168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2168.Data.AllocatorInstance.Data);
      }
      local_1b00.DetailColor = (FLinearColor *)&local_22b8;
      local_1b00.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1b00.fAdvanceHeight = &local_2304;
      ::FString::PrintfImpl(&local_21e0,L"%d | %d");
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_14>_>
                          (local_13e8,&local_1b00);
      pFVar18 = ::FString::FString(&local_18b8,L"# Budget (Asleep | Killed)");
      local_1f60.Data.AllocatorInstance.Data = local_21e0.Data.AllocatorInstance.Data;
      local_1f60.Data.ArrayNum = local_21e0.Data.ArrayNum;
      local_1f60.Data.ArrayMax = local_21e0.Data.ArrayMax;
      local_21e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_21e0.Data.ArrayNum = 0;
      local_21e0.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_18a8,L"Budget:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1f60,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_21e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21e0.Data.AllocatorInstance.Data);
      }
      local_1ae8.DetailColor = (FLinearColor *)&local_22b8;
      local_1ae8.DetailHighlightColor = (FLinearColor *)&local_22a8;
      local_1ae8.fAdvanceHeight = &local_2304;
      local_2240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2240.Data.ArrayNum = 0;
      local_2240.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2240,pFVar10->GlobalTotalPlayerSystems);
      uVar14 = local_9f8;
      if (local_9f8 == local_9f4[0]) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                           (0x1080,&local_1208,(int *)local_9f4);
      }
      local_9f8 = uVar14 + 1;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                ::
                TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_15>_>
                          (local_13b8,&local_1ae8);
      pFVar18 = ::FString::FString(&local_1898,L"# Player");
      local_1f50.Data.AllocatorInstance.Data = local_2240.Data.AllocatorInstance.Data;
      local_1f50.Data.ArrayNum = local_2240.Data.ArrayNum;
      local_1f50.Data.ArrayMax = local_2240.Data.ArrayMax;
      local_2240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2240.Data.ArrayNum = 0;
      local_2240.Data.ArrayMax = 0;
      pFVar19 = ::FString::FString(&local_1888,L"Player FX:");
      `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar19,
                 &local_1f50,pFVar18,local_2300,this_01,L"000",pTVar17);
      if (local_2240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2240.Data.AllocatorInstance.Data);
      }
      param_1 = local_2190;
      param_2 = local_2278;
      fVar56 = local_2300[0];
      if (local_1ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1ac0.Data.AllocatorInstance.Data);
        param_1 = local_2190;
        param_2 = local_2278;
        fVar56 = local_2300[0];
      }
    }
    else {
      param_1 = local_2190;
      param_2 = local_2278;
      fVar56 = local_2300[0];
      if (NiagaraDebugLocal::Settings.OverviewMode == Performance) {
        if ((local_22d8->StatsListener).Object != (FNiagaraDebugHUDStatsListener *)0x0) {
          pFVar21 = TSharedPtr<FNiagaraDebugHUDStatsListener,1>::operator->
                              (&local_22d8->StatsListener);
          TVar22 = NiagaraDebugLocal::GetStringSize((UFont *)local_1ad0,(wchar_t *)this_01);
          local_22e8 = (float)(int)*(float *)TVar22.field0_0x0;
          TVar22 = NiagaraDebugLocal::GetStringSize((UFont *)(local_1ad0 + 8),(wchar_t *)this_01);
          pwVar33 = L"%s (ms)";
          local_22f0[0] = (float)(int)*(float *)TVar22.field0_0x0;
          local_1cf8.DetailColor = (FLinearColor *)&local_22b8;
          local_1cf8.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1cf8.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_21a0,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1ab0,(pFVar21->GlobalStats).Avg.Time_GT,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_16>_>
                              (local_1388,&local_1cf8);
          local_1f40.Data.AllocatorInstance.Data = local_21a0.Data.AllocatorInstance.Data;
          local_21a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f40.Data.ArrayNum = local_21a0.Data.ArrayNum;
          local_1f40.Data.ArrayMax = local_21a0.Data.ArrayMax;
          local_21a0.Data.ArrayNum = 0;
          local_21a0.Data.ArrayMax = 0;
          local_1f30.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f30.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1f30.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_1878,L"Game Thread Avg:");
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1f30,(int)local_22e8,&local_1f40,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1ab0.Data.AllocatorInstance.Data);
          }
          if (local_21a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_21a0.Data.AllocatorInstance.Data);
          }
          if (NiagaraDebugLocal::Settings.bShowPerfColumGameThreadOnly != false) {
            local_1ce0.DetailColor = (FLinearColor *)&local_22b8;
            pwVar33 = L"%s (ms)";
            local_1ce0.DetailHighlightColor = (FLinearColor *)&local_22a8;
            local_1ce0.fAdvanceHeight = &local_2304;
            if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
              pwVar33 = L"%s (us)";
            }
            ::FString::PrintfImpl(&local_21b0,pwVar33);
            pFVar18 = NiagaraDebugLocal::FormatPerfValue
                                (&local_1aa0,(pFVar21->GlobalStats).Avg.Time_GTOnly,7);
            uVar14 = local_9f8;
            if (local_9f8 == local_9f4[0]) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                                 (0x1080,&local_1208,(int *)local_9f4);
            }
            local_9f8 = uVar14 + 1;
            FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                      )&local_1208;
            if (local_1208.SecondaryData !=
                (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                 )0x0) {
              FVar29 = local_1208.SecondaryData;
            }
            pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                      ::
                      TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l22::<lambda_17>_>
                                (local_1358,&local_1ce0);
            local_1f20.Data.AllocatorInstance.Data = local_21b0.Data.AllocatorInstance.Data;
            local_21b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f20.Data.ArrayNum = local_21b0.Data.ArrayNum;
            local_1f20.Data.ArrayMax = local_21b0.Data.ArrayMax;
            local_21b0.Data.ArrayNum = 0;
            local_21b0.Data.ArrayMax = 0;
            local_1f10.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
            (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f10.Data.ArrayMax = (pFVar18->Data).ArrayMax;
            local_1f10.Data.ArrayNum = (pFVar18->Data).ArrayNum;
            (pFVar18->Data).ArrayNum = 0;
            (pFVar18->Data).ArrayMax = 0;
            pFVar18 = ::FString::FString(&local_1868,L"Game Thread Only Avg:");
            `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                      ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                       &local_1f10,(int)local_22e8,&local_1f20,local_2300,this_01,(int)local_22f0[0]
                       ,pTVar17);
            if (local_1aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1aa0.Data.AllocatorInstance.Data);
            }
            if (local_21b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_21b0.Data.AllocatorInstance.Data);
            }
          }
          local_1cc8.DetailColor = (FLinearColor *)&local_22b8;
          pwVar33 = L"%s (ms)";
          local_1cc8.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1cc8.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_2138,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1a90,(pFVar21->GlobalStats).Max.Time_GT,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_18>_>
                              (local_1328,&local_1cc8);
          local_1f00.Data.AllocatorInstance.Data = local_2138.Data.AllocatorInstance.Data;
          local_2138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f00.Data.ArrayNum = local_2138.Data.ArrayNum;
          local_1f00.Data.ArrayMax = local_2138.Data.ArrayMax;
          local_2138.Data.ArrayNum = 0;
          local_2138.Data.ArrayMax = 0;
          local_1ef0.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ef0.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1ef0.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_1858,L"Game Thread Max:");
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1ef0,(int)local_22e8,&local_1f00,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a90.Data.AllocatorInstance.Data);
          }
          if (local_2138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2138.Data.AllocatorInstance.Data);
          }
          local_1cb0.DetailColor = (FLinearColor *)&local_22b8;
          pwVar33 = L"%s (ms)";
          local_1cb0.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1cb0.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_2108,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1a80,(pFVar21->GlobalStats).Avg.Time_RT,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_19>_>
                              (local_12f8,&local_1cb0);
          local_1ee0.Data.AllocatorInstance.Data = local_2108.Data.AllocatorInstance.Data;
          local_2108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ee0.Data.ArrayNum = local_2108.Data.ArrayNum;
          local_1ee0.Data.ArrayMax = local_2108.Data.ArrayMax;
          local_2108.Data.ArrayNum = 0;
          local_2108.Data.ArrayMax = 0;
          local_1ed0.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ed0.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1ed0.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_1848,L"Render Thread Avg:");
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1ed0,(int)local_22e8,&local_1ee0,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a80.Data.AllocatorInstance.Data);
          }
          if (local_2108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2108.Data.AllocatorInstance.Data);
          }
          local_1c98.DetailColor = (FLinearColor *)&local_22b8;
          pwVar33 = L"%s (ms)";
          local_1c98.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1c98.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_2118,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1a70,(pFVar21->GlobalStats).Max.Time_RT,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_20>_>
                              (local_12c8,&local_1c98);
          local_1ec0.Data.AllocatorInstance.Data = local_2118.Data.AllocatorInstance.Data;
          local_2118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ec0.Data.ArrayNum = local_2118.Data.ArrayNum;
          local_1ec0.Data.ArrayMax = local_2118.Data.ArrayMax;
          local_2118.Data.ArrayNum = 0;
          local_2118.Data.ArrayMax = 0;
          local_1eb0.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1eb0.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1eb0.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_1838,L"Render Thread Max:");
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1eb0,(int)local_22e8,&local_1ec0,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a70.Data.AllocatorInstance.Data);
          }
          if (local_2118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2118.Data.AllocatorInstance.Data);
          }
          local_1c80.DetailColor = (FLinearColor *)&local_22b8;
          pwVar33 = L"%s (ms)";
          local_1c80.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1c80.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_2128,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1928,(pFVar21->GlobalStats).Avg.Time_GPU,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_21>_>
                              (local_1298,&local_1c80);
          local_1ea0.Data.AllocatorInstance.Data = local_2128.Data.AllocatorInstance.Data;
          local_2128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1ea0.Data.ArrayNum = local_2128.Data.ArrayNum;
          local_1ea0.Data.ArrayMax = local_2128.Data.ArrayMax;
          local_2128.Data.ArrayNum = 0;
          local_2128.Data.ArrayMax = 0;
          local_1e90.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e90.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1e90.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_17d8,L"Gpu Avg:");
          fVar56 = local_22e8;
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1e90,(int)local_22e8,&local_1ea0,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1928.Data.AllocatorInstance.Data);
          }
          if (local_2128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2128.Data.AllocatorInstance.Data);
          }
          local_1c68.DetailColor = (FLinearColor *)&local_22b8;
          pwVar33 = L"%s (ms)";
          local_1c68.DetailHighlightColor = (FLinearColor *)&local_22a8;
          local_1c68.fAdvanceHeight = &local_2304;
          if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
            pwVar33 = L"%s (us)";
          }
          ::FString::PrintfImpl(&local_2148,pwVar33);
          pFVar18 = NiagaraDebugLocal::FormatPerfValue
                              (&local_1948,(pFVar21->GlobalStats).Max.Time_GPU,7);
          uVar14 = local_9f8;
          if (local_9f8 == local_9f4[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                               (0x1080,&local_1208,(int *)local_9f4);
          }
          local_9f8 = uVar14 + 1;
          FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                    )&local_1208;
          if (local_1208.SecondaryData !=
              (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
               )0x0) {
            FVar29 = local_1208.SecondaryData;
          }
          pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                    ::
                    TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_22>_>
                              (local_1268,&local_1c68);
          local_1e80.Data.AllocatorInstance.Data = local_2148.Data.AllocatorInstance.Data;
          local_2148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e80.Data.ArrayNum = local_2148.Data.ArrayNum;
          local_1e80.Data.ArrayMax = local_2148.Data.ArrayMax;
          local_2148.Data.ArrayNum = 0;
          local_2148.Data.ArrayMax = 0;
          local_1e70.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e70.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          local_1e70.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
          pFVar18 = ::FString::FString(&local_1828,L"Gpu Max:");
          `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                    ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar18,
                     &local_1e70,(int)fVar56,&local_1e80,local_2300,this_01,(int)local_22f0[0],
                     pTVar17);
          if (local_1948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1948.Data.AllocatorInstance.Data);
          }
          param_1 = local_2190;
          param_2 = local_2278;
          fVar56 = local_2300[0];
          if (local_2148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2148.Data.AllocatorInstance.Data);
            param_1 = local_2190;
            param_2 = local_2278;
            fVar56 = local_2300[0];
          }
        }
      }
      else if ((NiagaraDebugLocal::Settings.OverviewMode == PerformanceGraph) &&
              ((local_22d8->StatsListener).Object != (FNiagaraDebugHUDStatsListener *)0x0)) {
        local_1c50.DetailColor = (FLinearColor *)&local_22b8;
        local_1c50.DetailHighlightColor = (FLinearColor *)&local_22a8;
        local_1c50.fAdvanceHeight = &local_2304;
        uVar14 = local_9f8;
        if (local_9f8 == local_9f4[0]) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
                             (0x1080,&local_1208,(int *)local_9f4);
        }
        local_9f8 = uVar14 + 1;
        FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                  )&local_1208;
        if (local_1208.SecondaryData !=
            (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
             )0x0) {
          FVar29 = local_1208.SecondaryData;
        }
        pTVar17 = TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                  ::
                  TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l26::<lambda_23>_>
                            (local_1238,&local_1c50);
        pFVar18 = ::FString::FString(&local_1818,L"");
        pFVar19 = ::FString::FString(&local_1808,L"");
        pFVar20 = ::FString::FString(&local_17f8,L"Total Active");
        `FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
                  ((FOverviewColumn *)((longlong)(int)uVar14 * 0x80 + (longlong)FVar29),pFVar20,
                   pFVar19,pFVar18,local_2300,this_01,L"------",pTVar17);
        param_1 = local_2190;
        param_2 = local_2278;
        fVar56 = local_2300[0];
      }
    }
  }
  local_8c8.Base = (wchar_t *)local_8a8;
  local_8c8.CurPos = (wchar_t *)local_8a8;
  local_8c8.End = (wchar_t *)local_a8;
  local_8c8.bIsDynamic = false;
  local_8c8.bIsExternal = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar31 = IConsoleManager::Get();
    CVarGlobalLoopTime =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar31 + 0xc0))(pIVar31,L"fx.Niagara.Debug.GlobalLoopTime",1);
    _Init_thread_footer(&::_TSS0);
  }
  EVar4 = param_1->DebugPlaybackMode;
  fVar3 = param_1->DebugPlaybackRate;
  if (CVarGlobalLoopTime == (IConsoleVariable *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(*(longlong *)CVarGlobalLoopTime + 0xd0))();
  }
  bVar49 = false;
  if (EVar4 != Play) {
    bVar49 = true;
    if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 0x1c)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,0xe);
    }
    pvVar23 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L"PlaybackMode: ",0x1c);
    EVar4 = param_1->DebugPlaybackMode;
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar23 + 0x1c);
    if (EVar4 == Loop) {
      pwVar33 = L"Looping";
    }
    else if (EVar4 == Paused) {
      pwVar33 = L"Paused";
      iVar47 = 6;
    }
    else if (EVar4 == Step) {
      pwVar33 = L"Step";
      iVar47 = 4;
    }
    else {
      pwVar33 = L"Unknown";
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,pwVar33,iVar47);
    if (local_8c8.End < (FScriptContainerElement *)(local_8c8.CurPos + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,4);
    }
    pvVar23 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L"    ",8);
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar23 + 8);
  }
  fVar9 = __real_322bcc77;
  if (__real_322bcc77 < (float)((uint)(fVar3 - fVar55) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    bVar49 = true;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"PlaybackRate: %.4f");
    if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 8)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,4);
    }
    pvVar23 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L"    ",8);
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar23 + 8);
  }
  if ((float)(uVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar9) {
    if (bVar49) goto LAB_149297026;
  }
  else {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"LoopTime: %.2f");
    if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 8)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,4);
    }
    pvVar23 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L"    ",8);
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar23 + 8);
LAB_149297026:
    if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
    }
    pvVar23 = FGenericPlatformString::Memcpy(local_8c8.CurPos,L"\n",2);
    local_8c8.CurPos = (wchar_t *)((longlong)pvVar23 + 2);
  }
  if (NiagaraDebugLocal::Settings.bSystemFilterEnabled != false) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"SystemFilter: %s");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L"    ",4);
  }
  if (NiagaraDebugLocal::Settings.bEmitterFilterEnabled != false) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"EmitterFilter: %s");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L"    ",4);
  }
  if (NiagaraDebugLocal::Settings.bActorFilterEnabled != false) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"ActorFilter: %s");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L"    ",4);
  }
  if (NiagaraDebugLocal::Settings.bComponentFilterEnabled != false) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_8c8,L"ComponentFilter: %s");
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_8c8,L"    ",4);
  }
  fVar3 = __real_40000000;
  if ((NiagaraDebugLocal::Settings.bOverviewEnabled != false) ||
     (0 < (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1))) {
    iVar47 = 0;
    bVar49 = NiagaraDebugLocal::Settings.bOverviewEnabled != false;
    if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
    }
    *local_8c8.CurPos = 0;
    NiagaraDebugLocal::GetStringSize((UFont *)&local_20e8,(wchar_t *)this_01);
    if (local_20e8 <= fVar56) {
      local_20e8 = fVar56;
    }
    FCanvas::DrawTile(param_2,(double)(local_22f8._s_0.X - fVar55),
                      (double)(local_22f8._s_0.Y - fVar55),(double)(local_20e8 + fVar3),
                      (double)((float)(byte)(bVar49 + 2) * local_2304 + local_20e4 + fVar3),0.0,0.0,
                      0.0,0.0,(FLinearColor *)&local_1e18._s_0,(FTexture *)0x0,true);
    local_1da8 = L"Niagara DebugHud";
    uStack_1da0 = 0x10;
    local_1958._12_4_ = uStack_1d9c;
    local_1958.Size = 0x10;
    local_1958.DataPtr = L"Niagara DebugHud";
    FCanvas::DrawShadowedString
              (param_2,(double)local_22f8._s_0.X,(double)local_22f8._s_0.Y,&local_1958,this_01,
               (FLinearColor *)&local_20d8._s_0,&FLinearColor::Black);
    local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
    local_1d98 = L"/Script/Niagara.ENiagaraDebugHUDOverviewMode";
    uStack_1d90 = 0x2c;
    pUVar24 = Z_Construct_UClass_UEnum_NoRegister();
    local_1968._8_8_ = CONCAT44(uStack_1d8c,uStack_1d90);
    local_1968._0_8_ = local_1d98;
    pUVar25 = (UEnum *)StaticFindObjectChecked
                                 (pUVar24,(UObject *)0x0,(TStringView<wchar_t> *)local_1968,
                                  ExactClass);
    local_9e8.Base = (wchar_t *)local_9c8;
    local_9e8.CurPos = (wchar_t *)local_9c8;
    local_9e8.bIsDynamic = false;
    local_9e8.bIsExternal = false;
    local_9e8.End = (wchar_t *)&local_8c8;
    pFVar26 = UEnum::GetDisplayNameTextByValue
                        (pUVar25,&local_19f8,(longlong)(int)NiagaraDebugLocal::Settings.OverviewMode
                        );
    pFVar18 = FText::ToString(pFVar26);
    iVar15 = (pFVar18->Data).ArrayNum;
    pFVar5 = (pFVar18->Data).AllocatorInstance.Data;
    iVar36 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar36 = 0;
    }
    uVar34 = (ulong64)iVar36;
    if (local_9e8.End < (TStringBuilderBase<wchar_t> *)((longlong)local_9e8.CurPos + uVar34 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_9e8,uVar34);
    }
    if (iVar36 != 0) {
      pvVar23 = FGenericPlatformString::Memcpy(local_9e8.CurPos,pFVar5,uVar34 * 2);
      local_9e8.CurPos = (wchar_t *)((longlong)pvVar23 + uVar34 * 2);
    }
    if (local_19f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)(*(longlong *)local_19f8.TextData.Reference + 0x10))();
    }
    if (NiagaraDebugLocal::Settings.OverviewMode == PerformanceGraph) {
      iStack_1d00 = 0x2d;
      local_1d08 = L"/Script/Niagara.ENiagaraDebugHUDPerfGraphMode";
      pUVar24 = Z_Construct_UClass_UEnum_NoRegister();
      local_1938._12_4_ = uStack_1cfc;
      local_1938.Size = iStack_1d00;
      local_1938.DataPtr = local_1d08;
      pUVar25 = (UEnum *)StaticFindObjectChecked(pUVar24,(UObject *)0x0,&local_1938,ExactClass);
      uStack_1d80 = 0x2e;
      local_1d88 = L"/Script/Niagara.ENiagaraDebugHUDPerfSampleMode";
      pUVar24 = Z_Construct_UClass_UEnum_NoRegister();
      local_1a48._8_8_ = CONCAT44(uStack_1d7c,uStack_1d80);
      local_1a48._0_8_ = local_1d88;
      this_02 = (UEnum *)StaticFindObjectChecked
                                   (pUVar24,(UObject *)0x0,(TStringView<wchar_t> *)local_1a48,
                                    ExactClass);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_9e8,L" - ",3);
      pFVar26 = UEnum::GetDisplayNameTextByValue
                          (pUVar25,&local_1a38,
                           (longlong)(int)NiagaraDebugLocal::Settings.PerfGraphMode);
      pFVar18 = FText::ToString(pFVar26);
      iVar15 = (pFVar18->Data).ArrayNum;
      iVar36 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar36 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_9e8,(wchar_t *)(pFVar18->Data).AllocatorInstance.Data,iVar36);
      if (local_1a38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a38.TextData.Reference + 0x10))();
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_9e8,L" - ",3);
      pFVar26 = UEnum::GetDisplayNameTextByValue
                          (this_02,&local_1a28,
                           (longlong)(int)NiagaraDebugLocal::Settings.PerfSampleMode);
      pFVar18 = FText::ToString(pFVar26);
      iVar15 = (pFVar18->Data).ArrayNum;
      iVar36 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar36 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_9e8,(wchar_t *)(pFVar18->Data).AllocatorInstance.Data,iVar36);
      if (local_1a28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a28.TextData.Reference + 0x10))();
      }
    }
    if (local_9e8.End < (TStringBuilderBase<wchar_t> *)((longlong)local_9e8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_9e8,1);
    }
    *local_9e8.CurPos = 0;
    local_1d78 = (FScriptContainerElement *)local_9e8.Base;
    iStack_1d70 = iVar47;
    if ((FScriptContainerElement *)local_9e8.Base != (FScriptContainerElement *)0x0) {
      sVar27 = wcslen(local_9e8.Base);
      iStack_1d70 = (int)sVar27;
    }
    local_1a18._8_8_ = CONCAT44(uStack_1d6c,iStack_1d70);
    local_1a18._0_8_ = local_1d78;
    FCanvas::DrawShadowedString
              (param_2,(double)local_22f8._s_0.X,(double)local_22f8._s_0.Y,
               (TStringView<wchar_t> *)local_1a18,this_01,(FLinearColor *)&local_20d8._s_0,
               &FLinearColor::Black);
    local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
    local_9e8.CurPos = local_9e8.Base;
    if (0 < (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1)) {
      if (local_8c8.End < (FScriptContainerElement *)((longlong)local_8c8.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_8c8,1);
      }
      *local_8c8.CurPos = 0;
      local_1d68 = (FScriptContainerElement *)local_8c8.Base;
      iStack_1d60 = iVar47;
      if ((FScriptContainerElement *)local_8c8.Base != (FScriptContainerElement *)0x0) {
        sVar27 = wcslen(local_8c8.Base);
        iStack_1d60 = (int)sVar27;
      }
      local_1a08._12_4_ = uStack_1d5c;
      local_1a08.Size = iStack_1d60;
      local_1a08.DataPtr = (wchar_t *)local_1d68;
      FCanvas::DrawShadowedString
                (param_2,(double)local_22f8._s_0.X,(double)local_22f8._s_0.Y,&local_1a08,this_01,
                 (FLinearColor *)&local_20d8._s_0,&FLinearColor::Black);
      local_22f8._s_0.Y = local_22f8._s_0.Y + local_20e4;
    }
    uVar14 = local_9f8;
    if (NiagaraDebugLocal::Settings.bOverviewEnabled != false) {
      uVar43 = (ulonglong)(int)local_9f8;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      lVar41 = uVar43 * 0x80;
      pFVar18 = (FString *)((longlong)FVar29 + 8);
      while( true ) {
        if ((uint)uVar43 != uVar14) {
          local_22dc = 0;
          `TCheckedPointerIterator<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_22dc);
        }
        uVar53 = local_22f8._s_0.X;
        if ((FOverviewColumn *)((longlong)(pFVar18 + -1) + 8) ==
            (FOverviewColumn *)(lVar41 + (longlong)FVar29)) break;
        local_19d8._0_8_ = local_22b8._0_8_;
        local_19d8._8_8_ = local_22b8._8_8_;
        local_1a58._0_8_ = local_20d8._0_8_;
        local_1a58._8_8_ = local_20d8._8_8_;
        if ((pFVar18->Data).ArrayNum == 0) {
          local_1e58 = (FScriptContainerElement *)0x15060d16c;
LAB_1492977bd:
          sVar27 = wcslen((wchar_t *)local_1e58);
          iVar36 = (int)sVar27;
        }
        else {
          local_1e58 = (pFVar18->Data).AllocatorInstance.Data;
          iVar36 = iVar47;
          if (local_1e58 != (FScriptContainerElement *)0x0) goto LAB_1492977bd;
        }
        local_19e8._12_4_ = iStack_1e4c;
        local_19e8.Size = iVar36;
        local_19e8.DataPtr = (wchar_t *)local_1e58;
        dVar8 = (double)local_22f8._s_0.Y;
        iStack_1e50 = iVar36;
        FCanvas::DrawShadowedString
                  (param_2,(double)((float)uVar53 + *(float *)(pFVar18 + 3)),dVar8,&local_19e8,
                   this_01,(FLinearColor *)&local_1a58._s_0,&FLinearColor::Black);
        if (pFVar18[1].Data.ArrayNum == 0) {
          local_1e48 = (FScriptContainerElement *)0x15060d16c;
LAB_14929783c:
          sVar27 = wcslen((wchar_t *)local_1e48);
          iVar36 = (int)sVar27;
        }
        else {
          local_1e48 = pFVar18[1].Data.AllocatorInstance.Data;
          iVar36 = iVar47;
          if (local_1e48 != (FScriptContainerElement *)0x0) goto LAB_14929783c;
        }
        local_19c8._12_4_ = iStack_1e3c;
        local_19c8.Size = iVar36;
        local_19c8.DataPtr = (wchar_t *)local_1e48;
        iStack_1e40 = iVar36;
        FCanvas::DrawShadowedString
                  (param_2,(double)(*(float *)((longlong)(pFVar18 + 3) + 4) +
                                    *(float *)((longlong)(pFVar18 + -1) + 0xc) +
                                   (float)uVar53 + *(float *)(pFVar18 + 3)),dVar8,&local_19c8,
                   this_01,(FLinearColor *)&local_19d8._s_0,&FLinearColor::Black);
        uVar43 = (ulonglong)local_9f8;
        pFVar18 = pFVar18 + 8;
      }
      local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_9e8);
    param_1 = local_2190;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
  pFVar10 = local_22d8;
  if (NiagaraDebugLocal::Settings.bOverviewEnabled == false) goto LAB_149298918;
  if (NiagaraDebugLocal::Settings.OverviewMode == GpuComputePerformance) {
    DrawGpuComputeOverriew(local_22d8,param_1,param_2,(TVector2<float> *)&local_22f8._s_0);
  }
  if ((NiagaraDebugLocal::Settings.bOverviewEnabled == false) ||
     (NiagaraDebugLocal::Settings.OverviewMode == GpuComputePerformance)) goto LAB_149298918;
  iVar36 = 0;
  local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
  iVar47 = 0;
  uVar14 = *(int *)&(pFVar10->PerSystemDebugInfo).field_0x8 -
           *(int *)&(pFVar10->PerSystemDebugInfo).field_0x34;
  local_22d0.Data = (FScriptContainerElement *)0x0;
  local_22c8 = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  local_22c8._0_4_ = iVar36;
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&local_22d0,0,(int *)((longlong)&local_22c8 + 4));
  }
  local_2180 = &pFVar10->PerSystemDebugInfo;
  puVar1 = &(pFVar10->PerSystemDebugInfo).field_0x10;
  local_20a0 = 0;
  iVar15 = *(int *)&(pFVar10->PerSystemDebugInfo).field_0x28;
  uStack_20b4 = 1;
  iStack_20a4 = local_20a0;
  if (iVar15 != 0) {
    puVar46 = *(uint **)&(pFVar10->PerSystemDebugInfo).field_0x20;
    if (puVar46 == (uint *)0x0) {
      puVar46 = (uint *)puVar1;
    }
    uStack_20b4 = *puVar46;
    local_20a0 = iVar36;
    iVar47 = iVar36;
    while (uStack_20b4 == 0) {
      lVar41 = (longlong)iVar47;
      local_20a0 = local_20a0 + 0x20;
      iVar47 = iVar47 + 1;
      uStack_20b4 = 1;
      iStack_20a4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar47) goto LAB_149297a0f;
      uStack_20b4 = puVar46[lVar41 + 1];
    }
    uStack_20b4 = -uStack_20b4 & uStack_20b4;
    uVar43 = (ulonglong)uStack_20b4 * 2 + 1;
    lVar41 = 0x3f;
    if (uVar43 != 0) {
      for (; uVar43 >> lVar41 == 0; lVar41 = lVar41 + -1) {
      }
    }
    local_2084 = (float)lVar41;
    iStack_20a4 = (int)local_2084 + -1 + local_20a0;
    if (iVar15 < iStack_20a4) {
      iStack_20a4 = iVar15;
    }
  }
LAB_149297a0f:
  uStack_209c = local_165c;
  iStack_2098 = *(int *)&(pFVar10->PerSystemDebugInfo).field_0x8 -
                *(int *)&(pFVar10->PerSystemDebugInfo).field_0x34;
  uVar14 = *(uint *)&(pFVar10->PerSystemDebugInfo).field_0x28;
  TStack_1e00._padding_ = CONCAT44(uStack_20b4,iVar47);
  uVar39 = uVar14 & 0xffffffe0;
  iStack_20a8 = -1;
  TStack_1e00.CurrentBitIndex = iStack_20a4;
  TStack_1e00.UnvisitedBitMask = 0xffffffff;
  iVar36 = (int)uVar14 >> 5;
  TStack_1e00._28_4_ = local_165c;
  TStack_1e00.BaseBitIndex = local_20a0;
  uStack_1de0 = CONCAT44(iStack_2094,iStack_2098);
  iVar15 = (uint)local_22c8;
  local_2188 = (ForElementType<unsigned_int>)puVar1;
  local_20c0 = local_2180;
  iStack_20b8 = iVar47;
  local_20b0.Data = (FScriptContainerElement *)puVar1;
  local_1e08 = local_2180;
  TStack_1e00.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((int)uVar14 < 0) {
    bVar49 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar49) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar15 = (uint)local_22c8;
  }
  pTVar48 = local_2180;
  uVar16 = *(uint *)&(pFVar10->PerSystemDebugInfo).field_0x28;
  if (uVar14 != uVar16) {
    puVar6 = *(undefined1 **)&(pFVar10->PerSystemDebugInfo).field_0x20;
    puVar44 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar44 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar44 + (longlong)iVar36 * 4);
    while (uVar14 == 0) {
      lVar41 = (longlong)iVar36;
      uVar39 = uVar39 + 0x20;
      iVar36 = iVar36 + 1;
      uVar14 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_149297b60;
      uVar14 = *(uint *)(puVar44 + lVar41 * 4 + 4);
    }
    uVar43 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar41 = 0x3f;
    if (uVar43 != 0) {
      for (; uVar43 >> lVar41 == 0; lVar41 = lVar41 + -1) {
      }
    }
    local_2090 = (int)lVar41;
    uVar14 = (uVar39 - 1) + local_2090;
    if ((int)uVar16 < (int)uVar14) {
      uVar14 = uVar16;
    }
  }
LAB_149297b60:
  while( true ) {
    pTVar13 = local_1e08;
    if (*(int *)&local_1e08->field_0x8 - *(int *)&local_1e08->field_0x34 != (int)uStack_1de0) {
      local_22e0 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_22e0);
      iVar15 = (uint)local_22c8;
    }
    lVar41 = (longlong)TStack_1e00.CurrentBitIndex;
    if (((TStack_1e00.CurrentBitIndex == uVar14) &&
        (TStack_1e00.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar13 == pTVar48)) break;
    lVar42 = *(longlong *)pTVar13;
    lVar37 = lVar42 + 8 + lVar41 * 0xa8;
    if ((*(int *)(lVar37 + 0x40) < NiagaraDebugLocal::Settings.PerfHistoryFrames) &&
       (((NiagaraDebugLocal::Settings.bSystemFilterEnabled == false ||
         (NiagaraDebugLocal::Settings.bOverviewShowFilteredSystemOnly == false)) ||
        (*(char *)(lVar37 + 0x45) != '\0')))) {
      if (iVar15 == local_22c8._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_22d0,(int *)((longlong)&local_22c8 + 4));
      }
      local_22c8 = CONCAT44(local_22c8._4_4_,iVar15 + 1);
      *(undefined8 *)(local_22d0.Data + (longlong)iVar15 * 0x10) =
           *(undefined8 *)(lVar41 * 0xa8 + lVar42);
      *(longlong *)(local_22d0.Data + (longlong)iVar15 * 0x10 + 8) = lVar37;
    }
    TStack_1e00.UnvisitedBitMask = TStack_1e00.UnvisitedBitMask & ~TStack_1e00._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e00);
    iVar15 = (uint)local_22c8;
  }
  switch(NiagaraDebugLocal::Settings.OverviewSortMode) {
  case Name:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_24>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_24>)local_2308[0]);
    break;
  case NumberRegistered:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_25>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_25>)local_2308[0]);
    break;
  case NumberActive:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_26>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_26>)local_2308[0]);
    break;
  case NumberScalability:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_27>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_27>)local_2308[0]);
    break;
  case MemoryUsage:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_28>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_28>)local_2308[0]);
    break;
  case RecentlyVisibilty:
    AlgoImpl::
    IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_29>_>
              ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data,iVar15,
               local_2308[0],(<lambda_29>)local_2308[0]);
    break;
  default:
    goto switchD_149297c55_default;
  }
  iVar15 = (uint)local_22c8;
switchD_149297c55_default:
  this_00 = local_2278;
  FCanvas::DrawTile(local_2278,(double)(local_22f8._s_0.X - fVar55),
                    (double)(local_22f8._s_0.Y - fVar55),(double)(fVar56 + fVar55),
                    (double)((float)(iVar15 + 1) * local_2304 + fVar3),0.0,0.0,0.0,0.0,
                    (FLinearColor *)&local_1e18._s_0,(FTexture *)0x0,true);
  uVar14 = local_9f8;
  uVar53 = local_22f8._s_0.Y;
  lVar41 = (longlong)(int)local_9f8;
  FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
            )&local_1208;
  if (local_1208.SecondaryData !=
      (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
       )0x0) {
    FVar29 = local_1208.SecondaryData;
  }
  pFVar18 = (FString *)((longlong)FVar29 + 0x28);
  while( true ) {
    if (local_9f8 != uVar14) {
      local_22df = 0;
      `TCheckedPointerIterator<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_22df);
    }
    if ((FOverviewColumn *)((longlong)(pFVar18 + -3) + 8) ==
        (FOverviewColumn *)(lVar41 * 0x80 + (longlong)FVar29)) break;
    local_19b8._0_8_ = local_20d8._0_8_;
    local_19b8._8_8_ = local_20d8._8_8_;
    iVar47 = 0;
    if ((pFVar18->Data).ArrayNum == 0) {
      local_1e38 = (FScriptContainerElement *)0x15060d16c;
LAB_149297e19:
      sVar27 = wcslen((wchar_t *)local_1e38);
      iVar47 = (int)sVar27;
    }
    else {
      local_1e38 = (pFVar18->Data).AllocatorInstance.Data;
      if (local_1e38 != (FScriptContainerElement *)0x0) goto LAB_149297e19;
    }
    local_19a8._12_4_ = iStack_1e2c;
    local_19a8.Size = iVar47;
    local_19a8.DataPtr = (wchar_t *)local_1e38;
    iStack_1e30 = iVar47;
    FCanvas::DrawShadowedString
              (this_00,(double)(local_22f8._s_0.X + *(float *)(pFVar18 + 1)),
               (double)local_22f8._s_0.Y,&local_19a8,this_01,(FLinearColor *)&local_19b8._s_0,
               &FLinearColor::Black);
    pFVar18 = pFVar18 + 8;
  }
  uVar28 = (ulonglong)(int)(uint)local_22c8;
  local_2038.Data = local_22d0.Data + uVar28 * 0x10;
  local_21e8 = (uint)local_22c8;
  uVar43 = uVar28;
  FVar38.Data = local_22d0.Data;
  while( true ) {
    FVar12.Data = local_2038.Data;
    local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
    local_20c8 = (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)FVar38.Data;
    if ((int)uVar28 != (int)uVar43) {
      local_22de = 0;
      `TCheckedPointerIterator<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_22de);
    }
    uVar14 = local_9f8;
    pFVar10 = local_22d8;
    uVar57 = local_22f8._s_0.X;
    if (FVar38.Data == FVar12.Data) break;
    local_2028.Data =
         *(FScriptContainerElement **)
          &((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)FVar38.Data)->field_0x8;
    lVar41 = (longlong)(int)local_9f8;
    FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
              )&local_1208;
    if (local_1208.SecondaryData !=
        (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
         )0x0) {
      FVar29 = local_1208.SecondaryData;
    }
    pTVar17 = (TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
               *)((longlong)FVar29 + 0x50);
    while( true ) {
      if (local_9f8 != uVar14) {
        local_22dd = 0;
        `TCheckedPointerIterator<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_22dd);
      }
      if ((FOverviewColumn *)((longlong)(pTVar17 + -2) + 0x10) ==
          (FOverviewColumn *)(lVar41 * 0x80 + (longlong)FVar29)) break;
      local_22f0[0] = local_22f8._s_0.X + *(float *)((longlong)(pTVar17 + -1) + 0x18);
      local_22e8 = local_22f8._s_0.Y;
      local_2050 = local_2278;
      local_2030 = this_01;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar17);
      pcVar7 = *(code **)pTVar17;
      plVar32 = (longlong *)&pTVar17->field_0x10;
      if (*(longlong **)&pTVar17->field_0x28 != (longlong *)0x0) {
        plVar32 = *(longlong **)&pTVar17->field_0x28;
      }
      uVar30 = (**(code **)(*plVar32 + 8))();
      (*pcVar7)(uVar30,&local_2050,&local_2030,local_22f0);
      pTVar17 = (TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
                 *)((longlong)(pTVar17 + 2) + 0x20);
    }
    uVar28 = local_22c8 & 0xffffffff;
    FVar38.Data = (FScriptContainerElement *)(local_20c8 + 1);
    uVar43 = (ulonglong)local_21e8;
  }
  if ((NiagaraDebugLocal::Settings.OverviewMode == PerformanceGraph) &&
     ((local_22d8->StatsListener).Object != (FNiagaraDebugHUDStatsListener *)0x0)) {
    local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
    fVar55 = (float)uVar53 + local_2304;
    uVar53 = local_22f8._s_0.X;
    if (local_9f8 != 0) {
      uVar14 = 0;
      if ((int)(local_9f8 - 1) < (int)local_9f8) {
        uVar14 = ~(local_9f8 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar49)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar41 = (longlong)(int)local_9f8;
      FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar29 = local_1208.SecondaryData;
      }
      uVar14 = 0;
      if ((int)(local_9f8 - 1) < (int)local_9f8) {
        uVar14 = ~(local_9f8 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar49)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar35 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
                )&local_1208;
      if (local_1208.SecondaryData !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
           )0x0) {
        FVar35 = local_1208.SecondaryData;
      }
      uVar53 = *(float *)((longlong)(int)(local_9f8 - 1) * 0x80 + 0x38 + (longlong)FVar35) +
               *(float *)((lVar41 + -1) * 0x80 + 0x44 + (longlong)FVar29) +
               (float)uVar57 + __real_42480000;
    }
    if (NiagaraDebugLocal::Settings.PerfUnits == Milliseconds) {
      uVar57 = (undefined4)__real_3f50624dd2f1a9fc;
      uVar58 = (undefined4)((ulonglong)__real_3f50624dd2f1a9fc >> 0x20);
    }
    else {
      uVar57 = (undefined4)__real_3ff0000000000000;
      uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    if (NiagaraDebugLocal::Settings.bUsePerfGraphTimeRange == false) {
      dVar8 = pFVar10->AutoGraphTimeRange;
    }
    else {
      dVar8 = (double)NiagaraDebugLocal::Settings.PerfGraphTimeRange;
    }
    pwVar33 = L"%s (ms)";
    if (NiagaraDebugLocal::Settings.PerfUnits != Milliseconds) {
      pwVar33 = L"%s (us)";
    }
    ::FString::PrintfImpl(&local_1e28,pwVar33);
    pFVar18 = ::FString::FString(&local_17e8,L"Frame");
    local_1d58.Size.field0_0x0._s_0.X =
         (float)NiagaraDebugLocal::Settings.PerfGraphSize.field0_0x0._s_0.X;
    local_1d58.Canvas = local_2278;
    local_1d58.MaxValues.field0_0x0._s_0.X = (float)NiagaraDebugLocal::Settings.PerfHistoryFrames;
    local_1d58.Size.field0_0x0._s_0.Y =
         (float)NiagaraDebugLocal::Settings.PerfGraphSize.field0_0x0._s_0.Y;
    local_1d58.MaxValues.field0_0x0._s_0.Y = (float)(dVar8 * (double)CONCAT44(uVar58,uVar57));
    local_1d58.Font = this_01;
    local_1d58.Location.field0_0x0._s_0.X = (float)uVar53;
    local_1d58.Location.field0_0x0._s_0.Y = fVar55;
    ::FString::FString(&local_1d58.XLabel,pFVar18);
    ::FString::FString(&local_1d58.YLabel,&local_1e28);
    local_1d58.EstYAxisLabelWidth = 35.0;
    pFVar5 = (pFVar18->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    if (local_1e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e28.Data.AllocatorInstance.Data);
    }
    local_1988 = NiagaraDebugLocal::Settings.PerfGraphAxisColor.field0_0x0;
    local_1998._0_8_ = local_1e18._0_8_;
    local_1998._8_8_ = local_1e18._8_8_;
    FGraph<double>::Draw
              (&local_1d58,(FLinearColor *)&local_1988._s_0,(FLinearColor *)&local_1998._s_0);
    pTVar48 = local_2180;
    FVar40 = local_2188;
    iStack_2078 = 0;
    local_2060 = 0;
    uVar53 = 0;
    uVar54 = 0;
    iVar47 = *(int *)((longlong)local_2188 + 0x18);
    iStack_2064 = 0;
    if (iVar47 == 0) {
LAB_149298322:
      uStack_2074 = 1;
    }
    else {
      FVar45 = *(ForElementType<unsigned_int> *)
                &((ForElementType<unsigned_int> *)((longlong)local_2188 + 0x10))->field_0x0;
      if (FVar45 == (ForElementType<unsigned_int>)0x0) {
        FVar45 = local_2188;
      }
      uStack_2074 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar45)->AllocatorInstance).
                             InlineData;
      while (uStack_2074 == 0) {
        lVar41 = (longlong)iStack_2078;
        local_2060 = local_2060 + 0x20;
        iStack_2078 = iStack_2078 + 1;
        iStack_2064 = iVar47;
        if ((int)(iVar47 + -1 + (iVar47 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2078)
        goto LAB_149298322;
        uStack_2074 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar45)->AllocatorInstance
                                ).InlineData + lVar41 * 4 + 4);
      }
      uStack_2074 = -uStack_2074 & uStack_2074;
      uVar43 = (ulonglong)uStack_2074 * 2 + 1;
      lVar41 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar41 == 0; lVar41 = lVar41 + -1) {
        }
      }
      local_208c = (float)lVar41;
      iStack_2064 = (int)local_208c + -1 + local_2060;
      if (iVar47 < iStack_2064) {
        iStack_2064 = iVar47;
      }
    }
    iStack_205c = iStack_20a4;
    uVar14 = *(uint *)&(local_22d8->PerSystemDebugInfo).field_0x28;
    uVar39 = uVar14 & 0xffffffe0;
    iStack_2058 = *(int *)&(local_22d8->PerSystemDebugInfo).field_0x8 -
                  *(int *)&(local_22d8->PerSystemDebugInfo).field_0x34;
    fStack_2068 = -NAN;
    local_2080 = local_2180;
    auStack_1dd0._0_8_ = CONCAT44(uStack_2074,iStack_2078);
    local_2070 = (TBitArray<FDefaultBitArrayAllocator> *)local_2188;
    auVar52._8_4_ = 0xffffffff;
    auVar52._0_8_ = local_2188;
    auVar52._12_4_ = iStack_2064;
    local_1dd8 = local_2180;
    iVar47 = (int)uVar14 >> 5;
    local_1db8._4_4_ = iStack_20a4;
    local_1db8._0_4_ = local_2060;
    uStack_1db0 = CONCAT44(uStack_2054,iStack_2058);
    unique0x100065c9 = auVar52;
    if (((int)uVar14 < 0) &&
       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar49)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar16 = *(int *)((longlong)FVar40 + 0x18);
    if (uVar14 != uVar16) {
      FVar45 = FVar40;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar40 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar45 = *(ForElementType<unsigned_int> *)((longlong)FVar40 + 0x10);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar45 + (longlong)iVar47 * 4);
      while (uVar14 == 0) {
        lVar41 = (longlong)iVar47;
        uVar39 = uVar39 + 0x20;
        iVar47 = iVar47 + 1;
        uVar14 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar47)
        goto LAB_149298463;
        uVar14 = *(uint *)((uchar *)((longlong)FVar45 + 4) + lVar41 * 4);
      }
      uVar43 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar41 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar41 == 0; lVar41 = lVar41 + -1) {
        }
      }
      local_2088 = (float)lVar41;
      uVar14 = (int)local_2088 + -1 + uVar39;
      if ((int)uVar16 < (int)uVar14) {
        uVar14 = uVar16;
      }
    }
LAB_149298463:
    do {
      pTVar13 = local_1dd8;
      if (*(int *)&local_1dd8->field_0x8 - *(int *)&local_1dd8->field_0x34 != (int)uStack_1db0) {
        local_22db[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_22db);
      }
      pFVar10 = local_22d8;
      dVar8 = __real_4170000000000000;
      if (((uStack_1dbc == uVar14) && ((ForElementType<unsigned_int>)auStack_1dd0._8_8_ == FVar40))
         && (pTVar13 == pTVar48)) goto LAB_149298809;
      lVar41 = *(longlong *)pTVar13;
      lVar37 = (longlong)(int)uStack_1dbc * 0xa8;
      lVar42 = *(longlong *)(lVar37 + 0x28 + lVar41);
      if ((lVar42 != 0) && (*(char *)(lVar37 + 0x4d + lVar41) != '\0')) {
        uVar34 = 0;
        local_2288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2288.ArrayNum = 0;
        local_2288.ArrayMax = 0;
        if (NiagaraDebugLocal::Settings.PerfGraphMode == GameThread) {
          FNiagaraDebugHudStatHistory::GetHistoryFrames_GT
                    ((FNiagaraDebugHudStatHistory *)(lVar42 + 0x40),&local_2288);
LAB_149298517:
          uVar34 = (ulong64)(uint)local_2288.ArrayNum;
        }
        else {
          if (NiagaraDebugLocal::Settings.PerfGraphMode == RenderThread) {
            FNiagaraDebugHudStatHistory::GetHistoryFrames_RT
                      ((FNiagaraDebugHudStatHistory *)(lVar42 + 0x40),&local_2288);
            goto LAB_149298517;
          }
          if (NiagaraDebugLocal::Settings.PerfGraphMode == GPU) {
            FNiagaraDebugHudStatHistory::GetHistoryFrames_GPU
                      ((FNiagaraDebugHudStatHistory *)(lVar42 + 0x40),&local_2288);
            goto LAB_149298517;
          }
        }
        if (0 < NiagaraDebugLocal::Settings.SmoothingWidth) {
          local_2298.Data = (FScriptContainerElement *)0x0;
          local_2290._0_4_ = 0;
          local_2290._4_4_ = 0;
          iVar47 = (int)uVar34;
          if (iVar47 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar34);
          }
          if (0 < iVar47) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar47,&local_2298,0,(int *)((longlong)&local_2290 + 4));
            uVar34 = (ulong64)(uint)local_2288.ArrayNum;
          }
          iVar47 = 0;
          if (0 < (int)uVar34) {
            do {
              uVar39 = iVar47 - NiagaraDebugLocal::Settings.SmoothingWidth;
              iVar36 = 0;
              dVar8 = 0.0;
              if ((int)uVar39 < NiagaraDebugLocal::Settings.SmoothingWidth + iVar47) {
                lVar42 = (longlong)(int)uVar39 << 3;
                iVar36 = 0;
                dVar8 = 0.0;
                do {
                  if ((-1 < (int)uVar39) && ((int)uVar39 < (int)uVar34)) {
                    iVar36 = iVar36 + 1;
                    uVar16 = 0;
                    if ((int)uVar39 < (int)uVar34) {
                      uVar16 = ~uVar39 >> 0x1f;
                    }
                    if (uVar16 == 0) {
                      bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar49) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      uVar34 = (ulong64)(uint)local_2288.ArrayNum;
                    }
                    dVar8 = dVar8 + *(double *)(local_2288.AllocatorInstance.Data + lVar42);
                  }
                  uVar39 = uVar39 + 1;
                  lVar42 = lVar42 + 8;
                } while ((int)uVar39 < NiagaraDebugLocal::Settings.SmoothingWidth + iVar47);
              }
              local_21f0 = dVar8 / (double)iVar36;
              if (((local_2298.Data <= (FScriptContainerElement *)&local_21f0) &&
                  ((FScriptContainerElement *)&local_21f0 <
                   local_2298.Data + (longlong)(int)local_2290._4_4_ * 8)) &&
                 (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar49)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((uint)local_2290 == local_2290._4_4_) {
                local_2290._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_2298,(int *)((longlong)&local_2290 + 4));
              }
              lVar42 = (longlong)(int)(uint)local_2290;
              iVar47 = iVar47 + 1;
              local_2290._0_4_ = (uint)local_2290 + 1;
              *(double *)(local_2298.Data + lVar42 * 8) = local_21f0;
              uVar34 = (ulong64)(uint)local_2288.ArrayNum;
            } while (iVar47 < local_2288.ArrayNum);
          }
          if (local_2288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2288.AllocatorInstance.Data);
          }
          local_2288.ArrayNum = (uint)local_2290;
          uVar34 = (ulong64)(uint)local_2290;
          local_2288.AllocatorInstance.Data = local_2298.Data;
          local_2288.ArrayMax = local_2290._4_4_;
          local_2290 = 0;
          local_2298.Data = (FScriptContainerElement *)0x0;
          pTVar48 = local_2180;
        }
        iVar47 = (int)uVar34;
        pFVar5 = local_2288.AllocatorInstance.Data + (longlong)iVar47 * 8;
        FVar38.Data = local_2288.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar34 != iVar47) {
            local_2308[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_2308);
          }
          if (FVar38.Data == pFVar5) break;
          dVar8 = *(double *)FVar38.Data;
          if ((double)CONCAT44(uVar54,uVar53) <= dVar8) {
            uVar53 = SUB84(dVar8,0);
            uVar54 = (undefined4)((ulonglong)dVar8 >> 0x20);
          }
          *(double *)FVar38.Data = dVar8 * (double)CONCAT44(uVar58,uVar57);
          FVar38.Data = FVar38.Data + 8;
          uVar34 = (ulong64)(uint)local_2288.ArrayNum;
        }
        local_20f8.Data.ArrayNum = *(int *)(lVar37 + 0x10 + lVar41);
        lVar42 = (longlong)local_20f8.Data.ArrayNum;
        pvVar23 = *(void **)(lVar37 + 8 + lVar41);
        local_20f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        puVar2 = (undefined8 *)(lVar37 + 0x38 + lVar41);
        pFVar5 = (FScriptContainerElement *)*puVar2;
        uVar30 = puVar2[1];
        if (local_20f8.Data.ArrayNum == 0) {
          local_20f8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_20f8.Data.ArrayNum,0,(ForAnyElementType *)&local_20f8,
                     local_20f8.Data.ArrayNum,&local_20f8.Data.ArrayMax);
          memcpy(local_20f8.Data.AllocatorInstance.Data,pvVar23,lVar42 * 2);
        }
        local_1978._0_8_ = pFVar5;
        local_1978._8_8_ = uVar30;
        FGraph<double>::DrawLine
                  (&local_1d58,&local_20f8,(FLinearColor *)&local_1978._s_0,&local_2288);
        FVar40 = local_2188;
        if (local_2288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2288.AllocatorInstance.Data);
          FVar40 = local_2188;
        }
      }
      uStack_1dc0 = uStack_1dc0 & ~auStack_1dd0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1dd0);
    } while( true );
  }
LAB_149298906:
  param_2 = local_2278;
  if ((TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)local_22d0.Data !=
      (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *)0x0) {
    FMemory::Free(local_22d0.Data);
    param_2 = local_2278;
  }
LAB_149298918:
  pFVar11 = local_2190;
  pFVar10 = local_22d8;
  local_22f8._s_0.Y = local_22f8._s_0.Y + local_2304;
  DrawGlobalBudgetInfo(local_22d8,local_2190,param_2,(TVector2<float> *)&local_22f8._s_0);
  DrawValidation(pFVar10,pFVar11,param_2,(TVector2<float> *)&local_22f8._s_0);
  DrawMessages(pFVar10,pFVar11,param_2,(TVector2<float> *)&local_22f8._s_0);
  FVar29 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
            )&local_1208;
  if (local_1208.SecondaryData !=
      (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
       )0x0) {
    FVar29 = local_1208.SecondaryData;
  }
  DestructItems<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn,int>
            ((FOverviewColumn *)FVar29,local_9f8);
  if (local_1208.SecondaryData !=
      (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
       )0x0) {
    FMemory::Free((void *)local_1208.SecondaryData);
  }
  return;
LAB_149298809:
  auVar50._8_8_ = 0;
  auVar50._0_8_ = (double)CONCAT44(uVar54,uVar53) * __real_3f847ae147ae147b;
  auVar52 = roundpd(auVar52,auVar50,2);
  dVar51 = auVar52._0_8_ * __real_4059000000000000;
  if (dVar51 <= __real_4059000000000000) {
    dVar51 = __real_4059000000000000;
  }
  if (dVar51 <= local_22d8->AutoGraphTimeRangeChangeMax) {
    dVar51 = local_22d8->AutoGraphTimeRangeChangeMax;
  }
  local_22d8->AutoGraphTimeRangeChangeMax = dVar51;
  if ((local_22d8->AutoGraphTimeRange <= dVar51 && dVar51 != local_22d8->AutoGraphTimeRange) ||
     (QueryPerformanceCounter(&local_2040),
     __real_4014000000000000 <
     ((double)local_2040.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
     pFVar10->AutoGraphTimeRangeChangedTime)) {
    pFVar10->AutoGraphTimeRange = pFVar10->AutoGraphTimeRangeChangeMax;
    pFVar10->AutoGraphTimeRangeChangeMax = 100.0;
    QueryPerformanceCounter(&local_2048);
    pFVar10->AutoGraphTimeRangeChangedTime =
         (double)local_2048.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
  }
  if (local_1d58.YLabel.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d58.YLabel.Data.AllocatorInstance.Data);
  }
  if (local_1d58.XLabel.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d58.XLabel.Data.AllocatorInstance.Data);
  }
  goto LAB_149298906;
}

// DrawValidation @ 149299430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraDebugHud::DrawValidation
          (FNiagaraDebugHud *this,FNiagaraWorldManager *param_1,FCanvas *param_2,
          TVector2<float> *param_3)

{
  TMap<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>_>
  *pTVar1;
  double *pdVar2;
  int iVar3;
  FNiagaraSystemSimulation *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  FCanvas *this_01;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FNiagaraDataSet *pFVar12;
  void *pvVar13;
  FString *pFVar14;
  UFont *this_02;
  size_t sVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  int iVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  longlong lVar22;
  FWeakObjectPtr *pFVar23;
  FNiagaraSystemInstance *pFVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_b28 [32];
  undefined1 local_ac8 [8];
  FWeakObjectPtr *local_ac0;
  FNiagaraDebugHud *local_ab8;
  uint local_ab0;
  UObject *local_aa8;
  float local_aa0;
  float local_a9c;
  FScriptContainerElement *local_a98;
  undefined1 auStack_a90 [16];
  uint uStack_a80;
  float fStack_a7c;
  longlong local_a78;
  ForAnyElementType local_a68;
  undefined1 auStack_a60 [16];
  uint uStack_a50;
  int iStack_a4c;
  longlong local_a48;
  TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
  *pTStack_a40;
  TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
  *local_a38;
  char local_a30;
  char cStack_a2f;
  int local_a28;
  FWeakObjectPtr local_a20;
  FNiagaraEmitterInstance *local_a18;
  ForAnyElementType local_a10;
  TReferenceControllerBase<1> *local_a08;
  ForAnyElementType local_a00;
  LARGE_INTEGER local_9f8;
  ForAnyElementType local_9f0;
  FCanvas *local_9e8;
  ForAnyElementType local_9e0;
  int iStack_9d8;
  uint uStack_9d4;
  FScriptContainerElement *local_9d0;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  FNiagaraDebugHud *local_9b0;
  UObject **ppUStack_9a8;
  FNiagaraEmitterInstance **local_9a0;
  wchar_t *local_998;
  undefined4 uStack_990;
  int iStack_98c;
  wchar_t *local_988;
  int iStack_980;
  undefined4 uStack_97c;
  FString local_978;
  FString local_968;
  FString local_958;
  TStringView<wchar_t> local_948;
  undefined1 local_938 [16];
  code *local_928 [2];
  undefined **local_918;
  FNiagaraDebugHud *local_910;
  UObject **local_908;
  undefined8 local_900;
  code *local_8f8 [5];
  undefined8 *local_8d0;
  undefined1 local_8c8 [32];
  longlong local_8a8;
  TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
  *pTStack_8a0;
  undefined4 local_87c;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_b28;
  if ((NiagaraDebugLocal::Settings.bValidationEnabled) &&
     ((NiagaraDebugLocal::Settings.bValidateSystemSimulationDataBuffers ||
      (NiagaraDebugLocal::Settings.bValidateParticleDataBuffers)))) {
    pFVar23 = (FWeakObjectPtr *)(this->InWorldComponents).AllocatorInstance.Data;
    local_ab0 = (this->InWorldComponents).ArrayNum;
    uVar16 = (ulonglong)(int)local_ab0;
    local_a00.Data = (FScriptContainerElement *)(pFVar23 + uVar16);
    local_ab8 = this;
    local_9f0.Data = (FScriptContainerElement *)param_3;
    local_9e8 = param_2;
    while( true ) {
      FVar7.Data = local_a00.Data;
      pFVar24 = (FNiagaraSystemInstance *)0x0;
      local_ac0 = pFVar23;
      if ((this->InWorldComponents).ArrayNum != (int)uVar16) {
        local_ac8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UFXSystemComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_ac8);
      }
      if (pFVar23 == (FWeakObjectPtr *)FVar7.Data) break;
      local_a20 = *pFVar23;
      pUVar10 = FWeakObjectPtr::Get(&local_a20);
      if (pUVar10 == (UObject *)0x0) {
LAB_14929983c:
        uVar16 = (ulonglong)local_ab0;
        pFVar23 = pFVar23 + 1;
        local_aa8 = (UObject *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        iVar9 = (int)pUVar11->_padding_;
        if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) goto LAB_14929983c;
        local_a08 = *(TReferenceControllerBase<1> **)&pUVar10[0x28].field_0x10;
        lVar22 = *(longlong *)(pUVar10 + 0x22);
        lVar25 = *(longlong *)&pUVar10[0x28].field_0x8;
        if (local_a08 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a08->SharedReferenceCount = (atomic<int>)((int)local_a08->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar25 != 0) {
          pFVar24 = *(FNiagaraSystemInstance **)(lVar25 + 0x30);
        }
        local_aa8 = pUVar10;
        if ((lVar22 == 0) || (pFVar24 == (FNiagaraSystemInstance *)0x0)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a08);
          uVar16 = (ulonglong)local_ab0;
          pFVar23 = pFVar23 + 1;
        }
        else {
          local_a10.Data =
               (FScriptContainerElement *)
               (pFVar24->SystemSimulation).SharedReferenceCount.ReferenceController;
          this_00 = (pFVar24->SystemSimulation).Object;
          if ((TReferenceControllerBase<1> *)local_a10.Data != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)local_a10.Data)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_a10.Data)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((((this_00 != (FNiagaraSystemSimulation *)0x0) && (this_00->bCanExecute != 0)) &&
              (this_00->World != (UWorld *)0x0)) &&
             ((this_00->System != (UNiagaraSystem *)0x0 &&
              (((uint)this_00->System->_padding_ >> 0x1e & 1) == 0)))) {
            FNiagaraSystemSimulation::WaitForInstancesTickComplete(this_00,false);
            if (NiagaraDebugLocal::Settings.bValidateSystemSimulationDataBuffers != false) {
              uVar19 = pFVar24->SystemInstanceIndex;
              local_900 = 0;
              local_908 = &local_aa8;
              local_918 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`21'::<lambda_1>,0,0>
                           ::_vftable_;
              local_928[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,void,FNiagaraVariableBase_const_&,int>
                             ::Call;
              pFVar4 = (this_00->MainDataSet).CurrentData;
              local_910 = this;
              if (((this_00->MainDataSet).CompiledData.StructPtr ==
                   (FNiagaraDataSetCompiledData *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CompiledData.Get() != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                     ,0x169,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FNiagaraDataSetDebugAccessor::ValidateDataBuffer
                        ((this_00->MainDataSet).CompiledData.StructPtr,pFVar4,uVar19,
                         (TFunction<void___cdecl(FNiagaraVariableBase_const_&,int)> *)local_928);
              this = local_ab8;
            }
            if (NiagaraDebugLocal::Settings.bValidateParticleDataBuffers != false) {
              iVar9 = (pFVar24->Emitters).ArrayNum;
              pFVar20 = (pFVar24->Emitters).AllocatorInstance.Data;
              if ((iVar9 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar18 = 0;
              pFVar23 = local_ac0;
              if (0 < iVar9) {
                do {
                  local_a18 = *(FNiagaraEmitterInstance **)pFVar20;
                  if ((((local_a18 != (FNiagaraEmitterInstance *)0x0) &&
                       (pFVar12 = GetParticleDataSet(this,pFVar24,local_a18,iVar18),
                       pFVar12 != (FNiagaraDataSet *)0x0)) &&
                      (pFVar4 = pFVar12->CurrentData, pFVar4 != (FNiagaraDataBuffer *)0x0)) &&
                     (pFVar4->NumInstances != 0)) {
                    local_9b0 = local_ab8;
                    ppUStack_9a8 = &local_aa8;
                    local_9a0 = &local_a18;
                    local_8f8[0] = (code *)0x0;
                    local_8d0 = (undefined8 *)0x0;
                    local_8d0 = FMemory::Malloc(0x20,8);
                    *local_8d0 = &UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`26'::<lambda_2>,0,1>
                                  ::_vftable_;
                    local_8d0[1] = local_9b0;
                    local_8d0[2] = ppUStack_9a8;
                    local_8d0[3] = local_9a0;
                    if (local_8d0 + 1 != (undefined8 *)0x0) {
                      local_8f8[0] = UE::Core::Private::Function::
                                     TFunctionRefCaller<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,void,FNiagaraVariableBase_const_&,unsigned_int,int>
                                     ::Call;
                    }
                    if (((pFVar12->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("CompiledData.Get() != nullptr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                           ,0x169,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FNiagaraDataSetDebugAccessor::ValidateDataBuffer
                              ((pFVar12->CompiledData).StructPtr,pFVar4,
                               (TFunction<void___cdecl(FNiagaraVariableBase_const_&,unsigned_int,int)>
                                *)local_8f8);
                  }
                  iVar18 = iVar18 + 1;
                  pFVar20 = pFVar20 + 0x10;
                  this = local_ab8;
                  pFVar23 = local_ac0;
                } while (iVar18 < iVar9);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_a10.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a08);
          uVar16 = (ulonglong)local_ab0;
          pFVar23 = pFVar23 + 1;
          this = local_ab8;
        }
      }
    }
    pTVar1 = &this->ValidationErrors;
    if (0 < *(int *)&(this->ValidationErrors).field_0x8 -
            *(int *)&(this->ValidationErrors).field_0x34) {
      QueryPerformanceCounter(&local_9f8);
      local_878.bIsDynamic = false;
      local_878.bIsExternal = false;
      local_878.Base = local_858;
      local_878.CurPos = local_858;
      local_878.End = (wchar_t *)local_58;
      dVar6 = (double)local_9f8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              ___real_416fffff60000000;
      TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_8c8,
                 (TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_a30 = '\0';
      cStack_a2f = '\0';
      auStack_a60._8_8_ = local_8c8._16_8_;
      uStack_a50 = local_8c8._24_4_;
      iStack_a4c = local_8c8._28_4_;
      local_a68.Data = (FScriptContainerElement *)local_8c8._0_8_;
      auStack_a60._0_8_ = local_8c8._8_8_;
      local_a48 = local_8a8;
      pTStack_a40 = pTStack_8a0;
      iVar9 = local_8c8._28_4_;
      local_a38 = (TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if (iVar9 < *(int *)(local_8c8._16_8_ + 0x18)) {
        do {
          lVar25 = (longlong)iVar9 * 0x88;
          lVar22 = *(longlong *)local_a68.Data;
          pdVar2 = (double *)(lVar25 + 8 + lVar22);
          if (dVar6 < *pdVar2 || dVar6 == *pdVar2) {
            iVar18 = *(int *)(lVar25 + 0x18 + lVar22);
            pvVar13 = *(void **)(lVar25 + 0x10 + lVar22);
            iVar9 = iVar18 + -1;
            if (iVar18 == 0) {
              iVar9 = 0;
            }
            uVar17 = (ulong64)iVar9;
            if (local_878.End < local_878.CurPos + uVar17) {
              TStringBuilderBase<wchar_t>::Extend(&local_878,uVar17);
            }
            if (iVar9 != 0) {
              pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,pvVar13,uVar17 * 2);
              local_878.CurPos = (wchar_t *)((longlong)pvVar13 + uVar17 * 2);
            }
            if (local_878.End < local_878.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_878,1);
            }
            pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L"\n",2);
            local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
            iVar9 = 3;
            if (*(int *)(lVar25 + 0x28 + lVar22) < 3) {
              iVar9 = *(int *)(lVar25 + 0x28 + lVar22);
            }
            if (0 < iVar9) {
              uVar19 = 0;
              do {
                if (uVar19 == 0) {
                  if (local_878.End < local_878.CurPos + 0xf) {
                    TStringBuilderBase<wchar_t>::Extend(&local_878,0xf);
                  }
                  pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L"- SystemVars - ",0x1e)
                  ;
                  local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 0x1e);
                }
                else {
                  if (local_878.End < local_878.CurPos + 2) {
                    TStringBuilderBase<wchar_t>::Extend(&local_878,2);
                  }
                  pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L", ",4);
                  local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 4);
                }
                if ((*(int *)(lVar25 + 0x28 + lVar22) <= (int)uVar19) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar14 = ::FName::ToString((FName *)(*(longlong *)(lVar25 + 0x20 + lVar22) +
                                                     (ulonglong)uVar19 * 8),&local_978);
                iVar3 = (pFVar14->Data).ArrayNum;
                pFVar20 = (pFVar14->Data).AllocatorInstance.Data;
                iVar18 = iVar3 + -1;
                if (iVar3 == 0) {
                  iVar18 = 0;
                }
                uVar17 = (ulong64)iVar18;
                if (local_878.End < local_878.CurPos + uVar17) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,uVar17);
                }
                if (iVar18 != 0) {
                  pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,pFVar20,uVar17 * 2);
                  local_878.CurPos = (wchar_t *)((longlong)pvVar13 + uVar17 * 2);
                }
                if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_978.Data.AllocatorInstance.Data);
                }
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < iVar9);
              if (iVar9 != *(int *)(lVar25 + 0x28 + lVar22)) {
                if (local_878.End < local_878.CurPos + 5) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,5);
                }
                pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L", ...",10);
                local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 10);
              }
              if (local_878.End < local_878.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_878,1);
              }
              pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L"\n",2);
              local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
            }
            local_a98 = (FScriptContainerElement *)(lVar25 + 0x30 + lVar22);
            iStack_9d8 = 0;
            fVar26 = *(float *)(local_a98 + 0x28);
            local_9d0 = local_a98 + 0x10;
            uStack_9d4 = 1;
            local_9c0 = 0.0;
            uStack_9c4 = 0.0;
            if (fVar26 != 0.0) {
              pFVar20 = local_9d0;
              if (*(FScriptContainerElement **)(local_a98 + 0x20) != (FScriptContainerElement *)0x0)
              {
                pFVar20 = *(FScriptContainerElement **)(local_a98 + 0x20);
              }
              uVar19 = *(uint *)pFVar20;
              local_9c0 = 0.0;
              while (uVar19 == 0) {
                iStack_9d8 = iStack_9d8 + 1;
                local_9c0 = local_9c0 + 0x20;
                uStack_9c4 = fVar26;
                if ((int)((int)fVar26 + -1 + ((int)fVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_9d8)
                goto LAB_149299cdf;
                uVar19 = *(uint *)(pFVar20 + (longlong)iStack_9d8 * 4);
              }
              uStack_9d4 = -uVar19 & uVar19;
              uVar16 = (ulonglong)uStack_9d4 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              local_a28 = (int)lVar22;
              uStack_9c4 = local_9c0 + -1 + local_a28;
              if ((int)fVar26 < (int)uStack_9c4) {
                uStack_9c4 = fVar26;
              }
            }
LAB_149299cdf:
            uStack_9bc = local_87c;
            uStack_9c8 = -NAN;
            uStack_a80 = 0xffffffff;
            auStack_a90._8_8_ = local_9d0;
            fStack_a7c = (float)uStack_9c4;
            auStack_a90._0_8_ = CONCAT44(uStack_9d4,iStack_9d8);
            local_a78 = CONCAT44(local_87c,local_9c0);
            fVar21 = (float)uStack_9c4;
            local_9e0.Data = local_a98;
            if ((int)uStack_9c4 < (int)fVar26) {
              do {
                lVar22 = (longlong)(int)fVar21;
                local_ac0 = *(FWeakObjectPtr **)local_a98;
                iVar9 = local_ac0[lVar22 * 4 + 2].ObjectIndex;
                iVar18 = iVar9;
                if ((0 < NiagaraDebugLocal::Settings.ValidationAttributeDisplayTruncate) &&
                   (iVar18 = NiagaraDebugLocal::Settings.ValidationAttributeDisplayTruncate,
                   iVar9 < NiagaraDebugLocal::Settings.ValidationAttributeDisplayTruncate)) {
                  iVar18 = iVar9;
                }
                if (0 < iVar18) {
                  uVar19 = 0;
                  do {
                    pFVar23 = local_ac0;
                    if (uVar19 == 0) {
                      ::FName::ToString((FName *)((longlong)(int)fVar21 * 0x20 +
                                                 *(longlong *)local_a98),&local_968);
                      TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"- Particles(%s) - ");
                      if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_968.Data.AllocatorInstance.Data);
                      }
                    }
                    else {
                      if (local_878.End < local_878.CurPos + 2) {
                        TStringBuilderBase<wchar_t>::Extend(&local_878,2);
                      }
                      pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L", ",4);
                      local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 4);
                    }
                    if ((pFVar23[lVar22 * 4 + 2].ObjectIndex <= (int)uVar19) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar14 = ::FName::ToString((FName *)((longlong)pFVar23[lVar22 * 4 + 1] +
                                                         (ulonglong)uVar19 * 8),&local_958);
                    iVar3 = (pFVar14->Data).ArrayNum;
                    pFVar20 = (pFVar14->Data).AllocatorInstance.Data;
                    iVar9 = iVar3 + -1;
                    if (iVar3 == 0) {
                      iVar9 = 0;
                    }
                    uVar17 = (ulong64)iVar9;
                    if (local_878.End < local_878.CurPos + uVar17) {
                      TStringBuilderBase<wchar_t>::Extend(&local_878,uVar17);
                    }
                    if (iVar9 != 0) {
                      pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,pFVar20,uVar17 * 2);
                      local_878.CurPos = (wchar_t *)((longlong)pvVar13 + uVar17 * 2);
                    }
                    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_958.Data.AllocatorInstance.Data);
                    }
                    uVar19 = uVar19 + 1;
                  } while ((int)uVar19 < iVar18);
                  if (iVar18 != local_ac0[lVar22 * 4 + 2].ObjectIndex) {
                    if (local_878.End < local_878.CurPos + 5) {
                      TStringBuilderBase<wchar_t>::Extend(&local_878,5);
                    }
                    pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L", ...",10);
                    local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 10);
                  }
                  if (local_878.End < local_878.CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
                  }
                  pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,L"\n",2);
                  local_878.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
                }
                uStack_a80 = uStack_a80 & ~auStack_a90._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a90);
                fVar21 = fStack_a7c;
              } while ((int)fStack_a7c < *(int *)(auStack_a90._8_8_ + 0x18));
            }
          }
          else {
            TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_a40,iVar9);
            local_a30 = '\x01';
          }
          uStack_a50 = uStack_a50 & ~auStack_a60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a60);
          iVar9 = iStack_a4c;
        } while (iStack_a4c < *(int *)(auStack_a60._8_8_ + 0x18));
        if ((local_a30 != '\0') && (cStack_a2f != '\0')) {
          uVar19 = *(int *)&(local_a38->Elements).field_0x8 -
                   *(int *)&(local_a38->Elements).field_0x34;
          if (uVar19 < 4) {
            iVar9 = 1;
          }
          else {
            uVar16 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar9 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((0 < (int)uVar19) && (local_a38->HashSize < iVar9)) || (iVar9 < local_a38->HashSize))
          {
            local_a38->HashSize = iVar9;
            TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
            ::Rehash(local_a38);
          }
        }
      }
      if (0 < (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1)) {
        if ((NiagaraDebugLocal::Settings.OverviewFont == Small) ||
           (NiagaraDebugLocal::Settings.OverviewFont != Normal)) {
          this_02 = UEngine::GetTinyFont();
        }
        else {
          this_02 = UEngine::GetSmallFont();
        }
        fVar26 = UFont::GetMaxCharHeight(this_02);
        fVar26 = fVar26 + __real_3f800000;
        if (local_878.End < local_878.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_878,1);
        }
        *local_878.CurPos = L'\0';
        NiagaraDebugLocal::GetStringSize((UFont *)&local_aa0,(wchar_t *)this_02);
        this_01 = local_9e8;
        FVar7.Data = local_9f0.Data;
        fVar21 = *(float *)(local_9f0.Data + 4);
        fVar27 = local_a9c + fVar26 + __real_40000000;
        *(float *)(local_9f0.Data + 4) = fVar26 + fVar21;
        FCanvas::DrawTile(local_9e8,(double)(*(float *)local_9f0.Data - __real_3f800000),
                          (double)((fVar26 + fVar21) - __real_3f800000),
                          (double)(local_aa0 + __real_40000000),(double)fVar27,0.0,0.0,0.0,0.0,
                          &NiagaraDebugLocal::Settings.DefaultBackgroundColor,(FTexture *)0x0,true);
        local_998 = L"Found Errors:";
        uStack_990 = 0xd;
        local_948._12_4_ = iStack_98c;
        local_948.Size = 0xd;
        local_948.DataPtr = L"Found Errors:";
        FCanvas::DrawShadowedString
                  (this_01,(double)*(float *)FVar7.Data,(double)*(float *)(FVar7.Data + 4),
                   &local_948,this_02,&NiagaraDebugLocal::Settings.MessageErrorTextColor,
                   &FLinearColor::Black);
        *(float *)(FVar7.Data + 4) = fVar26 + *(float *)(FVar7.Data + 4);
        if (local_878.End < local_878.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_878,1);
        }
        *local_878.CurPos = L'\0';
        iStack_980 = 0;
        local_988 = local_878.Base;
        if (local_878.Base != (wchar_t *)0x0) {
          sVar15 = wcslen(local_878.Base);
          iStack_980 = (int)sVar15;
        }
        local_938._8_8_ = CONCAT44(uStack_97c,iStack_980);
        local_938._0_8_ = local_988;
        FCanvas::DrawShadowedString
                  (this_01,(double)*(float *)FVar7.Data,(double)*(float *)(FVar7.Data + 4),
                   (TStringView<wchar_t> *)local_938,this_02,
                   &NiagaraDebugLocal::Settings.MessageErrorTextColor,&FLinearColor::Black);
        if (((NiagaraDebugLocal::Settings.bValidationEnabled != false) &&
            (NiagaraDebugLocal::Settings.bValidationLogErrors != false)) &&
           (2 < (byte)LogNiagara._0_1_)) {
          if (local_878.End < local_878.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_878,1);
          }
          *local_878.CurPos = L'\0';
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    }
  }
  return;
}

// GatherSystemInfo @ 14929dc30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraDebugHud::GatherSystemInfo(FNiagaraDebugHud *this)

{
  undefined1 *puVar1;
  TArray<TWeakObjectPtr<UFXSystemComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
  *pTVar3;
  ulonglong uVar4;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *pTVar5;
  int *piVar6;
  TSharedPtr<FNiagaraDebugHUDStatsListener,1> *pTVar7;
  int iVar8;
  ENiagaraExecutionState EVar9;
  undefined1 *puVar10;
  FName FVar11;
  AActor *pAVar12;
  FWeakObjectPtr *pFVar13;
  longlong *plVar14;
  code *pcVar15;
  undefined8 uVar16;
  ForAnyElementType FVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  longlong *plVar21;
  int iVar22;
  float fVar23;
  FNiagaraSystemInstance *this_00;
  TMap<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
  *pTVar24;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *pTVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  char cVar29;
  bool bVar30;
  EInternalObjectFlags EVar31;
  uint uVar32;
  uint uVar33;
  UNiagaraComponent *pUVar34;
  UClass *pUVar35;
  FUObjectItem *pFVar36;
  UWorld *pUVar37;
  longlong lVar38;
  FSystemDebugInfo *pFVar39;
  UNiagaraSystem *this_01;
  wchar_t *pwVar40;
  size_t sVar41;
  FNiagaraDebugHUDStatsListener *pFVar42;
  UObject *pUVar43;
  FLinearColor *pFVar44;
  FNiagaraWorldManager *pFVar45;
  longlong lVar46;
  undefined8 *puVar47;
  byte bVar48;
  int iVar49;
  longlong lVar50;
  UNiagaraComponent *pUVar51;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar52;
  UNiagaraSimCache *pUVar53;
  uint uVar54;
  UNiagaraComponent *pUVar55;
  UNiagaraComponent *pUVar56;
  FSharedReferencer<1> FVar57;
  uint uVar58;
  uint uVar59;
  UNiagaraComponent *pUVar60;
  uint uVar61;
  undefined1 *puVar62;
  uint *puVar63;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar64;
  FNiagaraDebugHUDPerfStats *pFVar65;
  uint uVar66;
  bool local_res18;
  undefined1 local_res20 [8];
  undefined1 local_304 [4];
  UNiagaraComponent *local_300;
  undefined1 local_2f8 [4];
  FWeakObjectPtr local_2f4;
  ulonglong local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  FWeakObjectPtr local_2d8;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_2d0;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined1 *local_2c0;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  uint local_2b0;
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  TObjectIterator<UFXSystemComponent> local_2a0;
  FNiagaraDebugHUDPerfStats *local_288;
  FSharedReferencer<1> FStack_280;
  UNiagaraComponent *local_278;
  FSystemDebugInfo *local_270;
  UWorld *local_268;
  FNiagaraSystemInstance *local_258;
  FNiagaraDebugHUDStatsListener *local_248;
  FSharedReferencer<1> FStack_240;
  FName local_238;
  FName local_230;
  FName local_228;
  UNiagaraComponent *local_220;
  UObject *local_218;
  FWeakObjectPtr local_210;
  FName local_208;
  FName local_200;
  int local_1f8;
  int local_1f4;
  longlong local_1f0;
  FSharedReferencer<1> FStack_1e8;
  undefined8 local_1e0;
  FSharedReferencer<1> FStack_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  int local_1a0;
  FName local_19c;
  TMap<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  TSharedPtr<FParticlePerfStatsListener,1> local_120;
  FString local_110;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> local_100;
  TSharedPtr<FParticlePerfStatsListener,1> local_f0;
  undefined8 local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedRef<FNiagaraDebugHUDStatsListener,1> local_c8;
  FLinearColor local_b8 [2];
  undefined4 local_8c;
  undefined4 local_6c;
  
  pUVar60 = (UNiagaraComponent *)0x0;
  uVar61 = 0;
  this->GlobalTotalRegistered = 0;
  this->GlobalTotalActive = 0;
  this->GlobalTotalScalability = 0;
  this->GlobalTotalEmitters = 0;
  uVar58 = 0;
  this->GlobalTotalParticles = 0;
  this->GlobalTotalBytes = 0;
  this->GlobalTotalCulled = 0;
  this->GlobalTotalCulledByDistance = 0;
  this->GlobalTotalCulledByVisibility = 0;
  this->GlobalTotalCulledByInstanceCount = 0;
  this->GlobalTotalCulledByBudget = 0;
  this->GlobalTotalPlayerSystems = 0;
  piVar6 = &(this->InWorldComponents).ArrayMax;
  bVar20 = false;
  bVar19 = false;
  bVar30 = false;
  (this->InWorldComponents).ArrayNum = 0;
  if (*piVar6 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->InWorldComponents).AllocatorInstance,0,piVar6);
  }
  local_268 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (local_268 == (UWorld *)0x0) {
    return;
  }
  if ((NiagaraDebugLocal::Settings.bOverviewEnabled == false) ||
     (((NiagaraDebugLocal::Settings.OverviewMode - Performance & 0xfffffffd) != 0 &&
      ((NiagaraDebugLocal::Settings.OverviewMode != PerformanceGraph ||
       (NiagaraDebugLocal::Settings.PerfGraphMode != GPU)))))) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
  }
  FNiagaraGpuProfilerListener::SetEnabled(&this->GpuProfilerListener,bVar26);
  if (NiagaraDebugLocal::Settings.bHudEnabled == false) {
    return;
  }
  local_2e8 = 1;
  if (NiagaraDebugLocal::Settings.bOverviewEnabled == false) {
    if ((NiagaraDebugLocal::Settings.bActorFilterEnabled == false) &&
       (NiagaraDebugLocal::Settings.bComponentFilterEnabled == false)) {
      return;
    }
  }
  else if (NiagaraDebugLocal::Settings.OverviewMode == Performance ||
           NiagaraDebugLocal::Settings.OverviewMode == PerformanceGraph) {
    pTVar7 = &this->StatsListener;
    if (pTVar7->Object == (FNiagaraDebugHUDStatsListener *)0x0) {
      pUVar34 = ::operator_new(0x250);
      pUVar56 = pUVar60;
      if (pUVar34 != (UNiagaraComponent *)0x0) {
        *(undefined4 *)&pUVar34->_padding_ = 1;
        *(undefined4 *)((longlong)&pUVar34->_padding_ + 4) = 1;
        pUVar34->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFNiagaraDebugHUDStatsListener___00_SharedPointerInternals__6B_
        ;
        FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
                  ((FParticlePerfStatsListener_GatherAll *)&pUVar34->_padding_,true,true,false);
        pUVar34->_padding_ = (longlong)this;
        pUVar34->_padding_ = (longlong)&___7FNiagaraDebugHUDStatsListener__6B_;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        *(undefined4 *)&pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        pUVar34->_padding_ = 0;
        *(undefined4 *)&pUVar34->_padding_ = 0;
        *(undefined4 *)((longlong)&pUVar34->_padding_ + 4) = 0x80;
        *(undefined4 *)&pUVar34->_padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pUVar34->_padding_ + 4) = 0;
        pUVar34->_padding_ = 0;
        *(undefined4 *)&pUVar34->_padding_ = 0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar34->_padding_,4000);
        pUVar56 = pUVar34;
      }
      TSharedRef<FNiagaraDebugHUDStatsListener,1>::TSharedRef<FNiagaraDebugHUDStatsListener,1>
                (&local_c8,(FNiagaraDebugHUDStatsListener *)&pUVar56->_padding_,
                 (TReferenceControllerBase<1> *)pUVar56);
      local_248 = local_c8.Object;
      FStack_240.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar7 != (TSharedPtr<FNiagaraDebugHUDStatsListener,1> *)&local_248) {
        pTVar7->Object = local_c8.Object;
        local_248 = (FNiagaraDebugHUDStatsListener *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->StatsListener).SharedReferenceCount,&FStack_240);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_240.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      local_f0.Object = (FParticlePerfStatsListener *)pTVar7->Object;
      local_f0.SharedReferenceCount.ReferenceController =
           (this->StatsListener).SharedReferenceCount.ReferenceController;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FParticlePerfStatsManager::AddListener(&local_f0,true);
    }
    goto LAB_14929df7f;
  }
  pTVar7 = &this->StatsListener;
  pFVar42 = pTVar7->Object;
  if (pFVar42 != (FNiagaraDebugHUDStatsListener *)0x0) {
    local_120.SharedReferenceCount.ReferenceController =
         (this->StatsListener).SharedReferenceCount.ReferenceController;
    if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120.Object = (FParticlePerfStatsListener *)pFVar42;
    FParticlePerfStatsManager::RemoveListener(&local_120);
    local_1f0 = 0;
    FStack_1e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TSharedPtr<FNiagaraDebugHUDStatsListener,1> *)&local_1f0) {
      pTVar7->Object = (FNiagaraDebugHUDStatsListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StatsListener).SharedReferenceCount,&FStack_1e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1e8.ReferenceController);
  }
LAB_14929df7f:
  pTVar5 = &this->PerSystemDebugInfo;
  uVar54 = *(uint *)&(this->PerSystemDebugInfo).field_0x28;
  local_2c0 = &(this->PerSystemDebugInfo).field_0x10;
  uVar59 = 0;
  uStack_2c4 = 1;
  uStack_2c8 = uVar58;
  uStack_2b4 = uVar59;
  local_2b0 = uVar59;
  if (uVar54 != 0) {
    puVar63 = *(uint **)&(this->PerSystemDebugInfo).field_0x20;
    if (puVar63 == (uint *)0x0) {
      puVar63 = (uint *)local_2c0;
    }
    uStack_2c4 = *puVar63;
    pUVar56 = pUVar60;
    pUVar34 = pUVar60;
    uStack_2c8 = uVar61;
    local_2b0 = uVar61;
    while (uStack_2c4 == 0) {
      uStack_2c8 = (int)pUVar56 + 1;
      pUVar56 = (UNiagaraComponent *)(ulonglong)uStack_2c8;
      local_2b0 = (int)pUVar34 + 0x20;
      pUVar34 = (UNiagaraComponent *)(ulonglong)local_2b0;
      uStack_2c4 = 1;
      uStack_2b4 = uVar54;
      if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c8)
      goto LAB_14929e00f;
      uStack_2c4 = puVar63[(int)uStack_2c8];
    }
    uStack_2c4 = ~(uStack_2c4 - 1) & uStack_2c4;
    uVar4 = (ulonglong)uStack_2c4 * 2 + 1;
    lVar50 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar50 == 0; lVar50 = lVar50 + -1) {
      }
    }
    local_1f8 = (int)lVar50;
    uStack_2b4 = local_1f8 + -1 + local_2b0;
    if ((int)uVar54 < (int)uStack_2b4) {
      uStack_2b4 = uVar54;
    }
  }
LAB_14929e00f:
  uVar54 = *(uint *)&(this->PerSystemDebugInfo).field_0x28;
  puVar1 = &(this->PerSystemDebugInfo).field_0x10;
  uStack_2ac = local_8c;
  uVar66 = uVar54 & 0xffffffe0;
  iStack_2a8 = *(int *)&(this->PerSystemDebugInfo).field_0x8 -
               *(int *)&(this->PerSystemDebugInfo).field_0x34;
  uStack_2b8 = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uStack_2c4,uStack_2c8);
  TStack_158.CurrentBitIndex = uStack_2b4;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar49 = (int)uVar54 >> 5;
  TStack_158._28_4_ = local_8c;
  TStack_158.BaseBitIndex = local_2b0;
  uStack_138 = CONCAT44(uStack_2a4,iStack_2a8);
  local_2d0 = pTVar5;
  local_160 = pTVar5;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c0;
  if ((((int)uVar54 < 0) || (*(int *)&(this->PerSystemDebugInfo).field_0x28 < (int)uVar54)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar26)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar32 = *(uint *)&(this->PerSystemDebugInfo).field_0x28;
  if (uVar54 != uVar32) {
    puVar10 = *(undefined1 **)&(this->PerSystemDebugInfo).field_0x20;
    puVar62 = puVar1;
    if (puVar10 != (undefined1 *)0x0) {
      puVar62 = puVar10;
    }
    uVar54 = -1 << ((byte)uVar54 & 0x1f) & *(uint *)(puVar62 + (longlong)iVar49 * 4);
    while (uVar54 == 0) {
      iVar49 = iVar49 + 1;
      uVar66 = uVar66 + 0x20;
      uVar54 = uVar32;
      if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar49)
      goto LAB_14929e120;
      uVar54 = *(uint *)(puVar62 + (longlong)iVar49 * 4);
    }
    uVar4 = (ulonglong)(~(uVar54 - 1) & uVar54) * 2 + 1;
    lVar50 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar50 == 0; lVar50 = lVar50 + -1) {
      }
    }
    local_1f4 = (int)lVar50;
    uVar54 = local_1f4 + -1 + uVar66;
    if ((int)uVar32 < (int)uVar54) {
      uVar54 = uVar32;
    }
  }
LAB_14929e120:
  while( true ) {
    pTVar25 = local_160;
    if (*(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34 != (int)uStack_138) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_158.CurrentBitIndex == uVar54) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar25 == pTVar5)
       ) break;
    lVar50 = *(longlong *)pTVar25;
    lVar46 = (longlong)TStack_158.CurrentBitIndex * 0xa8;
    piVar6 = (int *)(lVar46 + 0x48 + lVar50);
    *piVar6 = *piVar6 + 1;
    *(undefined2 *)(lVar46 + 0x4c + lVar50) = 0x100;
    *(undefined8 *)(lVar46 + 0x50 + lVar50) = 0;
    *(undefined8 *)(lVar46 + 0x58 + lVar50) = 0;
    *(undefined4 *)(lVar46 + 0x60 + lVar50) = 0;
    *(undefined8 *)(lVar46 + 0x68 + lVar50) = 0;
    *(undefined8 *)(lVar46 + 0x70 + lVar50) = 0;
    *(undefined8 *)(lVar46 + 0x78 + lVar50) = 0;
    *(undefined8 *)(lVar46 + 0x80 + lVar50) = 0;
    lVar38 = *(longlong *)(lVar46 + 0x30 + lVar50);
    if ((lVar38 != 0) && (*(int *)(lVar38 + 8) == 1)) {
      puVar47 = (undefined8 *)(lVar46 + 0x28 + lVar50);
      local_1e0 = 0;
      FStack_1d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar47 != &local_1e0) {
        *puVar47 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar47 + 1),&FStack_1d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_1d8.ReferenceController);
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  local_2a0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ObjectArray.ArrayNum = 0;
  local_2a0.ObjectArray.ArrayMax = 0;
  local_2a0.Index = 0xffffffff;
  EVar31 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar35 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  GetObjectsOfClass(pUVar35,&local_2a0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar31 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UFXSystemComponent>::Advance(&local_2a0);
  fVar23 = __real_3f800000;
  while ((lVar50 = (longlong)local_2a0.Index, -1 < local_2a0.Index &&
         (local_2a0.Index < local_2a0.ObjectArray.ArrayNum))) {
    uVar54 = uVar59;
    if (local_2a0.Index < local_2a0.ObjectArray.ArrayNum) {
      uVar54 = (uint)~local_2a0.Index >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pUVar56 = *(UNiagaraComponent **)(local_2a0.ObjectArray.AllocatorInstance.Data + lVar50 * 8);
    local_300 = pUVar56;
    if (pUVar56 == (UNiagaraComponent *)0x0) {
LAB_14929e2f6:
      pUVar34 = pUVar60;
      if (pUVar56 != (UNiagaraComponent *)0x0) goto LAB_14929e2fe;
LAB_14929e324:
      pUVar55 = pUVar60;
    }
    else {
      pUVar35 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      iVar49 = (int)pUVar35->_padding_;
      if ((*(int *)(pUVar56->_padding_ + 0x38) < iVar49) ||
         (pUVar34 = pUVar56,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar56->_padding_ + 0x30) + (longlong)iVar49 * 8) !=
         &pUVar35->_padding_)) goto LAB_14929e2f6;
LAB_14929e2fe:
      pUVar35 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
      iVar49 = (int)pUVar35->_padding_;
      if ((*(int *)(pUVar56->_padding_ + 0x38) < iVar49) ||
         (pUVar55 = pUVar56,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar56->_padding_ + 0x30) + (longlong)iVar49 * 8) !=
         &pUVar35->_padding_)) goto LAB_14929e324;
    }
    if (pUVar34 == (UNiagaraComponent *)0x0) {
      bVar30 = true;
      local_128 = (TReferenceControllerBase<1> *)0x0;
      puVar47 = &local_130;
      pUVar51 = pUVar60;
    }
    else {
      local_d8 = (pUVar34->SystemInstanceController).SharedReferenceCount.ReferenceController;
      bVar19 = true;
      pUVar51 = (UNiagaraComponent *)(pUVar34->SystemInstanceController).Object;
      if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar47 = &local_e0;
    }
    local_2e0 = (TReferenceControllerBase<1> *)puVar47[1];
    puVar47[1] = 0;
    *puVar47 = 0;
    local_278 = pUVar55;
    if (bVar30) {
      bVar30 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128)
      ;
    }
    if (bVar19) {
      bVar19 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    }
    if (pUVar51 == (UNiagaraComponent *)0x0) {
      local_258 = (FNiagaraSystemInstance *)0x0;
    }
    else {
      local_258 = (FNiagaraSystemInstance *)pUVar51->_padding_;
    }
    if ((pUVar56 == (UNiagaraComponent *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Test",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                            ,0x760,L""), bVar26)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if ((((uint)pUVar56->_padding_ >> 0x1e & 1) == 0) &&
       ((((pUVar34 != (UNiagaraComponent *)0x0 && (((uint)pUVar34->_padding_ >> 0x1e & 1) == 0)) ||
         ((pUVar55 != (UNiagaraComponent *)0x0 && (((uint)pUVar55->_padding_ >> 0x1e & 1) == 0))))
        && ((pFVar36 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,*(int *)((longlong)&pUVar56->_padding_ + 4)),
            ((ulonglong)((pFVar36->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0 &&
            (((uint)pUVar56->_padding_ >> 4 & 1) == 0)))))) {
      pUVar37 = (UWorld *)pUVar56->_padding_;
      if (pUVar37 == (UWorld *)0x0) {
        pUVar37 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar56);
      }
      if ((pUVar37 == local_268) &&
         (lVar50 = (**(code **)(pUVar56->_padding_ + 0xac0))(pUVar56), lVar50 != 0)) {
        lVar50 = pUVar56->_padding_;
        if (pUVar34 == (UNiagaraComponent *)0x0) {
          local_res18 = (bool)(*(byte *)((longlong)&(pUVar55->OverrideParameters)._padding_ + 1) >>
                              7);
          bVar26 = false;
        }
        else {
          local_res18 = pUVar34->ScalabilityManagerHandle != -1;
          bVar26 = (pUVar34->CullProxy).field0_0x0.DebugPtr != (UNiagaraCullProxyComponent *)0x0;
        }
        pUVar35 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
        iVar49 = (int)pUVar35->_padding_;
        if ((*(int *)(pUVar56->_padding_ + 0x38) < iVar49) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar56->_padding_ + 0x30) + (longlong)iVar49 * 8) !=
            &pUVar35->_padding_)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        lVar38 = (**(code **)(pUVar56->_padding_ + 0xac0))(pUVar56);
        FVar11 = *(FName *)(lVar38 + 0x18);
        local_19c = FVar11;
        uVar54 = ::GetTypeHash(FVar11.ComparisonIndex.Value);
        pFVar39 = TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
                              *)&this->PerSystemDebugInfo,FVar11.Number + uVar54,&local_19c);
        pUVar56 = local_300;
        local_270 = pFVar39;
        if ((pFVar39->SystemName).Data.ArrayNum < 2) {
          lVar38 = (**(code **)(local_300->_padding_ + 0xac0))(local_300);
          if (lVar38 == 0) {
            ::FString::FString(&local_1d0,L"None");
          }
          else {
            local_238 = *(FName *)(lVar38 + 0x18);
            ::FName::ToString(&local_238,&local_1d0);
          }
          ::FString::operator=(&pFVar39->SystemName,&local_1d0);
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
        if ((pFVar39->SystemPrettyName).Data.ArrayNum < 2) {
          iVar49 = (pFVar39->SystemName).Data.ArrayNum;
          uVar54 = iVar49 - 1;
          if (iVar49 == 0) {
            uVar54 = uVar59;
          }
          ::FString::AssignRange
                    (&pFVar39->SystemPrettyName,
                     (wchar_t *)(pFVar39->SystemName).Data.AllocatorInstance.Data,uVar54);
          this_01 = (UNiagaraSystem *)(**(code **)(pUVar56->_padding_ + 0xac0))(pUVar56);
          if (((this_01 != (UNiagaraSystem *)0x0) &&
              (bVar27 = UObjectBaseUtility::IsA<UNiagaraSystem>((UObjectBaseUtility *)this_01),
              bVar27)) &&
             (pwVar40 = UNiagaraSystem::GetSystemStateModeString(this_01), pwVar40 != (wchar_t *)0x0
             )) {
            ::FString::AppendChar(&pFVar39->SystemPrettyName,L' ');
            sVar41 = wcslen(pwVar40);
            ::FString::AppendChars(&pFVar39->SystemPrettyName,pwVar40,(int)sVar41);
          }
          iVar49 = (this->LongestSystemPrettyName).Data.ArrayNum;
          iVar8 = (pFVar39->SystemPrettyName).Data.ArrayNum;
          uVar54 = iVar49 - 1;
          if (iVar49 == 0) {
            uVar54 = uVar59;
          }
          uVar66 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar66 = uVar59;
          }
          if ((int)uVar54 < (int)uVar66) {
            uVar54 = uVar59;
            if (iVar8 != 0) {
              uVar54 = iVar8 - 1;
            }
            ::FString::AssignRange
                      (&this->LongestSystemPrettyName,
                       (wchar_t *)(pFVar39->SystemPrettyName).Data.AllocatorInstance.Data,uVar54);
          }
        }
        if ((NiagaraDebugLocal::Settings.bSystemFilterEnabled == false) ||
           (NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum < 2)) {
LAB_14929e6a8:
          bVar27 = true;
        }
        else {
          uVar54 = NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum - 1;
          if (NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum == 0) {
            uVar54 = uVar59;
          }
          pwVar40 = L"";
          if (NiagaraDebugLocal::Settings.SystemFilter.Data.ArrayNum != 0) {
            pwVar40 = (wchar_t *)
                      NiagaraDebugLocal::Settings.SystemFilter.Data.AllocatorInstance.Data;
          }
          bVar28 = ::FString::MatchesWildcard(&pFVar39->SystemName,pwVar40,uVar54,(Type)local_2e8);
          bVar27 = false;
          if (bVar28) goto LAB_14929e6a8;
        }
        pUVar56 = local_300;
        pFVar39->bPassesSystemFilter = bVar27;
        if ((NiagaraDebugLocal::Settings.SystemDebugVerbosity == None) || (bVar27 == false)) {
          pFVar39->bShowInWorld = false;
        }
        else {
          pFVar39->bShowInWorld = true;
          if (((((lVar50 & 0x100000) != 0) ||
               (NiagaraDebugLocal::Settings.bSystemShowActiveOnlyInWorld == false)) || (bVar26)) &&
             (!bVar18)) {
            bVar48 = 1;
            if ((NiagaraDebugLocal::Settings.bActorFilterEnabled != false) &&
               (1 < NiagaraDebugLocal::Settings.ActorFilter.Data.ArrayNum)) {
              pAVar12 = (AActor *)local_300->_padding_;
              if (pAVar12 == (AActor *)0x0) {
LAB_14929e796:
                bVar48 = 0;
              }
              else {
                bVar20 = true;
                if ((pAVar12->ActorLabel).Data.ArrayNum < 2) {
                  local_230 = (FName)pAVar12->_padding_;
                  ::FName::ToString(&local_230,&local_1c0);
                }
                else {
                  ::FString::FString(&local_1c0,&pAVar12->ActorLabel);
                }
                uVar54 = NiagaraDebugLocal::Settings.ActorFilter.Data.ArrayNum - 1;
                if (NiagaraDebugLocal::Settings.ActorFilter.Data.ArrayNum == 0) {
                  uVar54 = uVar59;
                }
                pwVar40 = L"";
                if (NiagaraDebugLocal::Settings.ActorFilter.Data.ArrayNum != 0) {
                  pwVar40 = (wchar_t *)
                            NiagaraDebugLocal::Settings.ActorFilter.Data.AllocatorInstance.Data;
                }
                bVar26 = ::FString::MatchesWildcard(&local_1c0,pwVar40,uVar54,(Type)local_2e8);
                if (!bVar26) goto LAB_14929e796;
              }
              if ((bVar20) &&
                 (bVar20 = false,
                 local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
              if (bVar48 == 0) goto LAB_14929e922;
            }
            if ((NiagaraDebugLocal::Settings.bComponentFilterEnabled != false) &&
               (1 < NiagaraDebugLocal::Settings.ComponentFilter.Data.ArrayNum)) {
              local_228 = (FName)pUVar56->_padding_;
              ::FName::ToString(&local_228,&local_110);
              uVar54 = NiagaraDebugLocal::Settings.ComponentFilter.Data.ArrayNum - 1;
              if (NiagaraDebugLocal::Settings.ComponentFilter.Data.ArrayNum == 0) {
                uVar54 = uVar59;
              }
              pwVar40 = L"";
              if (NiagaraDebugLocal::Settings.ComponentFilter.Data.ArrayNum != 0) {
                pwVar40 = (wchar_t *)
                          NiagaraDebugLocal::Settings.ComponentFilter.Data.AllocatorInstance;
              }
              bVar26 = ::FString::MatchesWildcard(&local_110,pwVar40,uVar54,(Type)local_2e8);
              bVar48 = bVar48 & bVar26;
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
            }
            if (bVar48 != 0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar56);
              }
              local_2f4.ObjectIndex = 0;
              local_2f4.ObjectSerialNumber = 0;
              local_220 = pUVar56;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar56);
              }
              FWeakObjectPtr::operator=(&local_2f4,(FObjectPtr)&local_220);
              pTVar2 = &this->InWorldComponents;
              pFVar13 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
              if (((pFVar13 <= &local_2f4) &&
                  (&local_2f4 < pFVar13 + (this->InWorldComponents).ArrayMax)) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar26)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar49 = (this->InWorldComponents).ArrayNum;
              if (iVar49 == (this->InWorldComponents).ArrayMax) {
                iVar49 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar2->AllocatorInstance,
                                    &(this->InWorldComponents).ArrayMax);
              }
              (this->InWorldComponents).ArrayNum = iVar49 + 1;
              *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar49 * 8) =
                   local_2f4;
            }
          }
        }
LAB_14929e922:
        pUVar56 = local_300;
        if ((local_300->_padding_ & 1) != 0) {
          this->GlobalTotalRegistered = this->GlobalTotalRegistered + 1;
          pFVar39->TotalRegistered = pFVar39->TotalRegistered + 1;
        }
        if (local_res18 != false) {
          this->GlobalTotalScalability = this->GlobalTotalScalability + 1;
          pFVar39->TotalScalability = pFVar39->TotalScalability + 1;
        }
        if (pUVar34 != (UNiagaraComponent *)0x0) {
          bVar26 = UNiagaraComponent::IsLocalPlayerEffect(pUVar34);
          if ((bVar26) && ((lVar50 & 0x100000) != 0)) {
            this->GlobalTotalPlayerSystems = this->GlobalTotalPlayerSystems + 1;
            pFVar39->TotalPlayerSystems = pFVar39->TotalPlayerSystems + 1;
          }
          if ((pUVar34->ScalabilityManagerHandle != -1) &&
             ((pUVar34->DebugCachedScalabilityState).bCulled != '\0')) {
            this->GlobalTotalCulled = this->GlobalTotalCulled + 1;
            pFVar39->TotalCulled = pFVar39->TotalCulled + 1;
            if ((pUVar34->DebugCachedScalabilityState).bCulledByDistance != '\0') {
              this->GlobalTotalCulledByDistance = this->GlobalTotalCulledByDistance + 1;
              pFVar39->TotalCulledByDistance = pFVar39->TotalCulledByDistance + 1;
            }
            if ((pUVar34->DebugCachedScalabilityState).bCulledByVisibility != '\0') {
              this->GlobalTotalCulledByVisibility = this->GlobalTotalCulledByVisibility + 1;
              pFVar39->TotalCulledByVisibility = pFVar39->TotalCulledByVisibility + 1;
            }
            if ((pUVar34->DebugCachedScalabilityState).bCulledByInstanceCount != '\0') {
              this->GlobalTotalCulledByInstanceCount = this->GlobalTotalCulledByInstanceCount + 1;
              pFVar39->TotalCulledByInstanceCount = pFVar39->TotalCulledByInstanceCount + 1;
            }
            if ((bool)(pUVar34->DebugCachedScalabilityState).bCulledByGlobalBudget) {
              this->GlobalTotalCulledByBudget = this->GlobalTotalCulledByBudget + 1;
              pFVar39->TotalCulledByBudget = pFVar39->TotalCulledByBudget + 1;
            }
          }
        }
        uVar54 = (**(code **)(pUVar56->_padding_ + 0xae8))(pUVar56);
        this_00 = local_258;
        pUVar55 = local_278;
        pFVar39->TotalBytes = pFVar39->TotalBytes + (ulonglong)uVar54;
        this->GlobalTotalBytes = this->GlobalTotalBytes + (ulonglong)uVar54;
        if ((lVar50 & 0x100000) != 0) {
          if (pUVar34 == (UNiagaraComponent *)0x0) {
            if ((local_278 == (UNiagaraComponent *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CascadeComponent",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                    ,0x4e9,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pUVar53 = (pUVar55->SimCache).field0_0x0.DebugPtr;
            iVar49 = *(int *)&(pUVar55->CullProxy).field0_0x0;
            plVar21 = &pUVar53->_padding_;
            pUVar56 = pUVar60;
            pUVar34 = pUVar60;
            while( true ) {
              uVar66 = (uint)pUVar34;
              uVar54 = (uint)pUVar56;
              if (*(int *)&(pUVar55->CullProxy).field0_0x0 != iVar49) {
                local_304[0] = 0;
                `TCheckedPointerIterator<FParticleEmitterInstance_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_304);
              }
              pFVar39 = local_270;
              if (pUVar53 == (UNiagaraSimCache *)(plVar21 + iVar49)) break;
              plVar14 = (longlong *)pUVar53->_padding_;
              if (plVar14 != (longlong *)0x0) {
                pUVar34 = (UNiagaraComponent *)
                          (ulonglong)(uVar66 + *(int *)((longlong)plVar14 + 0x18c));
                cVar29 = (**(code **)(*plVar14 + 0xd8))();
                if (cVar29 == '\0') {
                  pUVar56 = (UNiagaraComponent *)(ulonglong)(uVar54 + 1);
                }
              }
              pUVar53 = (UNiagaraSimCache *)&pUVar53->_padding_;
            }
          }
          else {
            if ((local_258 == (FNiagaraSystemInstance *)0x0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SystemInstance",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                                    ,0x4d7,L""), bVar26)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            FNiagaraSystemInstance::GetEmitters(this_00,&local_100);
            pTVar64 = local_100.DataPtr + local_100.ArrayNum;
            pUVar56 = pUVar60;
            pUVar34 = pUVar60;
            uVar54 = uVar61;
            uVar66 = uVar61;
            for (pTVar52 = local_100.DataPtr; pTVar52 != pTVar64; pTVar52 = pTVar52 + 1) {
              EVar9 = pTVar52->Object->ExecutionState;
              pUVar55 = pUVar56;
              if (EVar9 != Disabled) {
                iVar49 = (**(code **)(pTVar52->Object->_padding_ + 0x58))();
                pUVar34 = (UNiagaraComponent *)(ulonglong)(uint)((int)pUVar34 + iVar49);
                pUVar55 = (UNiagaraComponent *)(ulonglong)((int)pUVar56 + 1);
                if (EVar9 != Active) {
                  pUVar55 = pUVar56;
                }
              }
              uVar66 = (uint)pUVar34;
              uVar54 = (uint)pUVar55;
              pFVar39 = local_270;
              pUVar56 = pUVar55;
            }
          }
          pFVar39->TotalActive = pFVar39->TotalActive + 1;
          pFVar39->TotalEmitters = pFVar39->TotalEmitters + uVar54;
          pFVar39->TotalParticles = pFVar39->TotalParticles + uVar66;
          this->GlobalTotalActive = this->GlobalTotalActive + 1;
          this->GlobalTotalEmitters = this->GlobalTotalEmitters + uVar54;
          this->GlobalTotalParticles = this->GlobalTotalParticles + uVar66;
          pUVar56 = local_300;
          if ((this->StatsListener).Object != (FNiagaraDebugHUDStatsListener *)0x0) {
            pFVar42 = TSharedPtr<FNiagaraDebugHUDStatsListener,1>::operator->(&this->StatsListener);
            pUVar56 = local_300;
            pUVar43 = (UObject *)(**(code **)(local_300->_padding_ + 0xac0))(local_300);
            lpCriticalSection = &pFVar42->SystemStatsGuard;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar43);
            }
            local_2d8.ObjectIndex = 0;
            local_2d8.ObjectSerialNumber = 0;
            local_218 = pUVar43;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar43);
            }
            FWeakObjectPtr::operator=(&local_2d8,(FObjectPtr)&local_218);
            local_210 = local_2d8;
            iVar49 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                               ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TSharedPtr<FNiagaraDebugHUDPerfStats,1>,0>,FDefaultSetAllocator>
                                 *)&pFVar42->SystemStats,
                                local_2d8.ObjectSerialNumber ^ local_2d8.ObjectIndex,
                                (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_210);
            if (((iVar49 == -1) ||
                (lVar50 = (longlong)iVar49 * 0x20 + *(longlong *)&pFVar42->SystemStats, lVar50 == 0)
                ) || ((undefined8 *)(lVar50 + 8) == (undefined8 *)0x0)) {
              local_288 = (FNiagaraDebugHUDPerfStats *)0x0;
              FStack_280.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              pFVar65 = (FNiagaraDebugHUDPerfStats *)0x0;
              FVar57.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pFVar65 = *(FNiagaraDebugHUDPerfStats **)(lVar50 + 8);
              FVar57.ReferenceController = *(TReferenceControllerBase<1> **)(lVar50 + 0x10);
              if (FVar57.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar57.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar57.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_288 = pFVar65;
              FStack_280.ReferenceController = FVar57.ReferenceController;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
            if (&pFVar39->PerfStats != (TSharedPtr<FNiagaraDebugHUDPerfStats,1> *)&local_288) {
              (pFVar39->PerfStats).Object = pFVar65;
              local_288 = (FNiagaraDebugHUDPerfStats *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pFVar39->PerfStats).SharedReferenceCount,&FStack_280);
              FVar57.ReferenceController = FStack_280.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar57.ReferenceController);
          }
        }
        lVar50 = (**(code **)(pUVar56->_padding_ + 0xac0))(pUVar56);
        local_208 = *(FName *)(lVar50 + 0x18);
        ::FName::ToString(&local_208,&local_1b0);
        uVar54 = local_1b0.Data.ArrayNum - 1;
        FVar17.Data = local_1b0.Data.AllocatorInstance.Data;
        if (local_1b0.Data.ArrayNum == 0) {
          uVar54 = uVar61;
          FVar17.Data = (FScriptContainerElement *)L"";
        }
        uVar54 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar54,(wchar_t *)FVar17.Data);
        uVar54 = NiagaraDebugLocal::Settings.SystemColorSeed + uVar54;
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        iVar49 = ((int)NiagaraDebugLocal::Settings.SystemColorHSVMax.field0_0x0._s_0.X -
                 (int)NiagaraDebugLocal::Settings.SystemColorHSVMin.field0_0x0._s_0.X) + 1;
        uVar66 = uVar58;
        if (0 < iVar49) {
          uVar54 = uVar54 * 0xbb38435 + 0x3619636b;
          uVar66 = (int)(((float)(uVar54 >> 9 | 0x3f800000) - fVar23) * (float)iVar49);
        }
        iVar49 = ((int)NiagaraDebugLocal::Settings.SystemColorHSVMax.field0_0x0._s_0.Y -
                 (int)NiagaraDebugLocal::Settings.SystemColorHSVMin.field0_0x0._s_0.Y) + 1;
        uVar32 = uVar58;
        if (0 < iVar49) {
          uVar54 = uVar54 * 0xbb38435 + 0x3619636b;
          uVar32 = (int)(((float)(uVar54 >> 9 | 0x3f800000) - fVar23) * (float)iVar49);
        }
        iVar49 = ((int)NiagaraDebugLocal::Settings.SystemColorHSVMax.field0_0x0._s_0.Z -
                 (int)NiagaraDebugLocal::Settings.SystemColorHSVMin.field0_0x0._s_0.Z) + 1;
        uVar33 = uVar58;
        if (0 < iVar49) {
          uVar33 = (int)(((float)(uVar54 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar23) *
                        (float)iVar49);
        }
        pFVar44 = FLinearColor::MakeFromHSV8
                            (local_b8,(char)(int)NiagaraDebugLocal::Settings.SystemColorHSVMin.
                                                 field0_0x0._s_0.X + (char)uVar66,
                             (char)(int)NiagaraDebugLocal::Settings.SystemColorHSVMin.field0_0x0.
                                        _s_0.Y + (char)uVar32,
                             (char)(int)NiagaraDebugLocal::Settings.SystemColorHSVMin.field0_0x0.
                                        _s_0.Z + (char)uVar33);
        uVar16 = *(undefined8 *)((longlong)&pFVar44->field0_0x0 + 8);
        *(undefined8 *)&(pFVar39->UniqueColor).field0_0x0 = *(undefined8 *)&pFVar44->field0_0x0;
        *(undefined8 *)((longlong)&(pFVar39->UniqueColor).field0_0x0 + 8) = uVar16;
        if (NiagaraDebugLocal::Settings.OverviewMode - Performance < 2) {
          bVar26 = 0 < pFVar39->TotalActive;
        }
        else {
          if ((pFVar39->TotalActive < 1) && (pFVar39->TotalScalability < 1)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if (((NiagaraDebugLocal::Settings.OverviewMode == Overview) &&
              (NiagaraDebugLocal::Settings.bShowRegisteredComponents != false)) &&
             (0 < pFVar39->TotalRegistered)) {
            bVar26 = true;
          }
        }
        if (bVar26) {
          pFVar39->FramesSinceVisible = 0;
        }
        else {
          pFVar39->FramesSinceVisible = pFVar39->FramesSinceVisible + 1;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e0);
    TObjectIterator<UFXSystemComponent>::Advance(&local_2a0);
  }
  if (local_2a0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.ObjectArray.AllocatorInstance.Data);
  }
  (this->GlobalScalabiltiyKillCounts).Total = 0;
  (this->GlobalScalabiltiyKillCounts).Distance = 0;
  (this->GlobalScalabiltiyKillCounts).InstanceCounts = 0;
  (this->GlobalScalabiltiyKillCounts).Visibility = 0;
  (this->GlobalScalabiltiyKillCounts).GlobalBudget = 0;
  pFVar45 = FNiagaraWorldManager::Get(local_268);
  if (pFVar45 != (FNiagaraWorldManager *)0x0) {
    pTVar3 = &pFVar45->SystemScalabilityKillCounts;
    uVar54 = *(uint *)&(pFVar45->SystemScalabilityKillCounts).field_0x28;
    local_2c0 = &(pFVar45->SystemScalabilityKillCounts).field_0x10;
    uStack_2b4 = uVar61;
    if (uVar54 != 0) {
      puVar63 = *(uint **)&(pFVar45->SystemScalabilityKillCounts).field_0x20;
      if (puVar63 == (uint *)0x0) {
        puVar63 = (uint *)local_2c0;
      }
      uVar59 = *puVar63;
      pUVar56 = pUVar60;
      uVar58 = uVar61;
      while (uVar59 == 0) {
        uVar58 = (int)pUVar60 + 1;
        pUVar60 = (UNiagaraComponent *)(ulonglong)uVar58;
        uVar61 = (int)pUVar56 + 0x20;
        pUVar56 = (UNiagaraComponent *)(ulonglong)uVar61;
        uStack_2b4 = uVar54;
        if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar58)
        goto LAB_14929ef03;
        uVar59 = puVar63[(int)uVar58];
      }
      local_2e8 = (ulonglong)(-uVar59 & uVar59);
      uVar4 = local_2e8 * 2 + 1;
      lVar50 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar50 == 0; lVar50 = lVar50 + -1) {
        }
      }
      local_1a0 = (int)lVar50;
      uStack_2b4 = local_1a0 + -1 + uVar61;
      if ((int)uVar54 < (int)uStack_2b4) {
        uStack_2b4 = uVar54;
      }
    }
LAB_14929ef03:
    uVar54 = *(uint *)&(pFVar45->SystemScalabilityKillCounts).field_0x28;
    puVar1 = &(pFVar45->SystemScalabilityKillCounts).field_0x10;
    uStack_2c4 = (uint)local_2e8;
    uStack_2ac = local_6c;
    iStack_2a8 = *(int *)&(pFVar45->SystemScalabilityKillCounts).field_0x8 -
                 *(int *)&(pFVar45->SystemScalabilityKillCounts).field_0x34;
    uStack_2b8 = 0xffffffff;
    uVar59 = uVar54 & 0xffffffe0;
    TStack_188._padding_ = CONCAT44(uStack_2c4,uVar58);
    TStack_188.CurrentBitIndex = uStack_2b4;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    iVar49 = (int)uVar54 >> 5;
    TStack_188._28_4_ = local_6c;
    TStack_188.BaseBitIndex = uVar61;
    uStack_168 = CONCAT44(uStack_2a4,iStack_2a8);
    uStack_2c8 = uVar58;
    local_2b0 = uVar61;
    local_2d0 = (TMap<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
                 *)pTVar3;
    local_190 = pTVar3;
    TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c0;
    if ((((int)uVar54 < 0) ||
        (*(int *)&(pFVar45->SystemScalabilityKillCounts).field_0x28 < (int)uVar54)) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar30)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    uVar58 = *(uint *)&(pFVar45->SystemScalabilityKillCounts).field_0x28;
    if (uVar54 != uVar58) {
      puVar10 = *(undefined1 **)&(pFVar45->SystemScalabilityKillCounts).field_0x20;
      puVar62 = puVar1;
      if (puVar10 != (undefined1 *)0x0) {
        puVar62 = puVar10;
      }
      uVar61 = -1 << ((byte)uVar54 & 0x1f) & *(uint *)(puVar62 + (longlong)iVar49 * 4);
      while (uVar61 == 0) {
        iVar49 = iVar49 + 1;
        uVar59 = uVar59 + 0x20;
        uVar54 = uVar58;
        if ((int)(((int)(uVar58 - 1) >> 0x1f & 0x1fU) + (uVar58 - 1)) >> 5 < iVar49)
        goto LAB_14929f020;
        uVar61 = *(uint *)(puVar62 + (longlong)iVar49 * 4);
      }
      uVar4 = (ulonglong)(-uVar61 & uVar61) * 2 + 1;
      lVar50 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar50 == 0; lVar50 = lVar50 + -1) {
        }
      }
      uVar54 = (uVar59 - 1) + (int)lVar50;
      if ((int)uVar58 < (int)uVar54) {
        uVar54 = uVar58;
      }
    }
LAB_14929f020:
    while( true ) {
      pTVar24 = local_190;
      if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2f8);
      }
      if (((TStack_188.CurrentBitIndex == uVar54) &&
          (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar24 == pTVar3)) break;
      pFVar13 = (FWeakObjectPtr *)
                (*(longlong *)pTVar24 + (longlong)TStack_188.CurrentBitIndex * 0x24);
      pUVar43 = FWeakObjectPtr::Get(pFVar13);
      if (pUVar43 != (UObject *)0x0) {
        (this->GlobalScalabiltiyKillCounts).Total =
             (this->GlobalScalabiltiyKillCounts).Total + pFVar13[1].ObjectIndex;
        piVar6 = &(this->GlobalScalabiltiyKillCounts).Distance;
        *piVar6 = *piVar6 + pFVar13[1].ObjectSerialNumber;
        piVar6 = &(this->GlobalScalabiltiyKillCounts).InstanceCounts;
        *piVar6 = *piVar6 + pFVar13[2].ObjectIndex;
        piVar6 = &(this->GlobalScalabiltiyKillCounts).Visibility;
        *piVar6 = *piVar6 + pFVar13[2].ObjectSerialNumber;
        piVar6 = &(this->GlobalScalabiltiyKillCounts).GlobalBudget;
        *piVar6 = *piVar6 + pFVar13[3].ObjectIndex;
        FVar11.ComparisonIndex.Value = *(uint *)&pUVar43->field_0x18;
        FVar11.Number = *(uint *)&pUVar43->field_0x1c;
        local_200 = FVar11;
        uVar58 = ::GetTypeHash(FVar11.ComparisonIndex);
        pFVar39 = TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FNiagaraDebugHud::FSystemDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FSystemDebugInfo,0>_>
                              *)&this->PerSystemDebugInfo,FVar11.Number + uVar58,&local_200);
        iVar49 = pFVar13[1].ObjectSerialNumber;
        iVar8 = pFVar13[2].ObjectIndex;
        iVar22 = pFVar13[2].ObjectSerialNumber;
        (pFVar39->ScalabilityKillCounts).Total = pFVar13[1].ObjectIndex;
        (pFVar39->ScalabilityKillCounts).Distance = iVar49;
        (pFVar39->ScalabilityKillCounts).InstanceCounts = iVar8;
        (pFVar39->ScalabilityKillCounts).Visibility = iVar22;
        (pFVar39->ScalabilityKillCounts).GlobalBudget = pFVar13[3].ObjectIndex;
      }
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
    }
  }
  return;
}

// GetParticleDataSet @ 1492a5370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDataSet * __thiscall
FNiagaraDebugHud::GetParticleDataSet
          (FNiagaraDebugHud *this,FNiagaraSystemInstance *param_1,FNiagaraEmitterInstance *param_2,
          int param_3)

{
  int *piVar1;
  TMap<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>_>
  *this_00;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  FNiagaraDataSet *pFVar13;
  FNiagaraDataSetReadback *pFVar14;
  LARGE_INTEGER *pLVar15;
  undefined8 *puVar16;
  LARGE_INTEGER *pLVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  LARGE_INTEGER *pLVar21;
  undefined1 *puVar22;
  LARGE_INTEGER LVar23;
  TKeyInitializer<unsigned___int64_&&> local_res18;
  ulong64 local_78;
  ulong64 *local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  FSharedReferencer<1> local_58;
  undefined8 local_50;
  FSharedReferencer<1> FStack_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  lVar18 = (longlong)param_3;
  if (param_2->SimTarget != GPUComputeSim) {
    if ((param_2->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
      return pFVar13;
    }
    return param_2->ParticleDataSet;
  }
  if (!NiagaraDebugLocal::Settings.bEnableGpuParticleReadback) {
    return (FNiagaraDataSet *)0x0;
  }
  uVar2 = param_1->ID;
  this_00 = &this->GpuEmitterData;
  pLVar21 = (LARGE_INTEGER *)0x0;
  if (*(int *)&(this->GpuEmitterData).field_0x8 != *(int *)&(this->GpuEmitterData).field_0x34) {
    puVar22 = *(undefined1 **)&(this->GpuEmitterData).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->GpuEmitterData).field_0x38;
    }
    iVar9 = *(int *)(puVar22 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 &
                    (ulonglong)(*(int *)&(this->GpuEmitterData).field_0x48 - 1)) * 4);
    if (iVar9 != -1) {
      do {
        puVar12 = (ulonglong *)((longlong)iVar9 * 0x38 + *(longlong *)&this_00->field_0x0);
        if (*puVar12 == uVar2) {
          pLVar17 = (LARGE_INTEGER *)(puVar12 + 1);
          if (puVar12 == (ulonglong *)0x0) {
            pLVar17 = pLVar21;
          }
          if (pLVar17 != (LARGE_INTEGER *)0x0) goto LAB_1492a54b7;
          break;
        }
        iVar9 = (int)puVar12[6];
      } while (iVar9 != -1);
    }
  }
  iVar9 = (param_1->Emitters).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  local_78 = param_1->ID;
  local_70 = &local_78;
  TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_&&>_>
            ((TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
              *)this_00,&local_res18,(bool *)&local_70);
  pLVar17 = (LARGE_INTEGER *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_res18.Key * 0x38 + 8);
  TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_>::AddDefaulted
            ((TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_> *)
             &pLVar17[1].s,iVar9);
  TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_>::AddDefaulted
            ((TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_> *)
             &pLVar17[3].s,iVar9);
LAB_1492a54b7:
  QueryPerformanceCounter(&local_68);
  *pLVar17 = local_68;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)pLVar17[4].s.LowPart) {
    uVar10 = uVar19;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  lVar20 = lVar18 * 0x10;
  if (*(longlong *)(lVar20 + pLVar17[3].QuadPart) != 0) {
    uVar11 = 0;
    uVar10 = uVar11;
    if (param_3 < (int)pLVar17[4].s.LowPart) {
      uVar10 = uVar19;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
      return pFVar13;
    }
    pFVar14 = TSharedPtr<FNiagaraDataSetReadback,1>::operator->
                        ((TSharedPtr<FNiagaraDataSetReadback,1> *)(pLVar17[3].QuadPart + lVar20));
    if (pFVar14->PendingReadbacks == (atomic<int>)0x0) {
      uVar10 = uVar11;
      if (param_3 < (int)pLVar17[4].s.LowPart) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
        return pFVar13;
      }
      uVar2 = pLVar17[3].QuadPart;
      uVar10 = uVar11;
      if (param_3 < (int)pLVar17[2].s.LowPart) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
        return pFVar13;
      }
      lVar3 = *(longlong *)(uVar2 + 8 + lVar20);
      uVar4 = pLVar17[1].QuadPart;
      uVar5 = *(undefined8 *)(uVar2 + lVar20);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_40 = *(undefined8 *)(uVar4 + lVar20);
      pTStack_38 = (TReferenceControllerBase<1> *)((undefined8 *)(uVar4 + lVar20))[1];
      *(undefined8 *)(uVar4 + lVar20) = uVar5;
      *(longlong *)(uVar4 + 8 + lVar20) = lVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_38);
      if (param_3 < (int)pLVar17[4].s.LowPart) {
        uVar11 = uVar19;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
        return pFVar13;
      }
      puVar16 = (undefined8 *)(pLVar17[3].QuadPart + lVar20);
      local_50 = 0;
      FStack_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar16 != &local_50) {
        *puVar16 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar16 + 1),&FStack_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_48.ReferenceController);
    }
  }
  uVar11 = 0;
  uVar10 = uVar11;
  if (param_3 < (int)pLVar17[4].s.LowPart) {
    uVar10 = uVar19;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  if (*(longlong *)(lVar20 + pLVar17[3].QuadPart) != 0) goto LAB_1492a592d;
  pLVar15 = ::operator_new(400);
  if (pLVar15 == (LARGE_INTEGER *)0x0) {
    LVar23.QuadPart = (LONGLONG)&DAT_00000010;
LAB_1492a57c6:
    if (((*(longlong *)LVar23 == 0) || (((LARGE_INTEGER *)((longlong)LVar23 + 8))->QuadPart == 0))
       || (*(int *)(((LARGE_INTEGER *)((longlong)LVar23 + 8))->QuadPart + 8) < 1)) {
      if (pLVar21 != (LARGE_INTEGER *)0x0) {
        LOCK();
        pLVar21[1].s.LowPart = pLVar21[1].s.LowPart + 1;
        UNLOCK();
      }
      *(LARGE_INTEGER *)LVar23 = LVar23;
      if (pLVar21 != *(LARGE_INTEGER **)(LVar23.QuadPart + 8)) {
        if (pLVar21 != (LARGE_INTEGER *)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)pLVar21 + 0xc) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)pLVar21 + 0xc) + 1);
          UNLOCK();
        }
        plVar6 = *(longlong **)(LVar23.QuadPart + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(LARGE_INTEGER **)(LVar23.QuadPart + 8) = pLVar21;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)&pLVar21->s);
    }
  }
  else {
    pLVar15[1].s.LowPart = 1;
    *(atomic<int> *)((longlong)pLVar15 + 0xc) = (atomic<int>)0x1;
    pLVar15->QuadPart =
         (LONGLONG)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraDataSetReadback___00_SharedPointerInternals__6B_
    ;
    memset((atomic<int> *)((longlong)pLVar15 + 0x2c),0,0x164);
    pLVar15[2].QuadPart = 0;
    pLVar15[3].QuadPart = 0;
    pLVar15[4].QuadPart = 0;
    pLVar15[5].s.LowPart = 0;
    FNiagaraDataSet::FNiagaraDataSet((FNiagaraDataSet *)&pLVar15[6].s);
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&pLVar15[0x1e].s);
    LVar23.QuadPart = (LONGLONG)(pLVar15 + 2);
    pLVar15[0x2f].QuadPart = 0;
    pLVar15[0x30].QuadPart = 0;
    pLVar15[0x31].s.LowPart = 0;
    pLVar21 = pLVar15;
    if (LVar23 != (LARGE_INTEGER)0x0) goto LAB_1492a57c6;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
      return pFVar13;
    }
  }
  if (pLVar21 != (LARGE_INTEGER *)0x0) {
    LOCK();
    pLVar21[1].s.LowPart = pLVar21[1].s.LowPart + 1;
    UNLOCK();
  }
  uVar10 = uVar11;
  if (param_3 < (int)pLVar17[4].s.LowPart) {
    uVar10 = (uint)~param_3 >> 0x1f;
  }
  local_60 = LVar23;
  local_58.ReferenceController = (TReferenceControllerBase<1> *)pLVar21;
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  pLVar15 = (LARGE_INTEGER *)(pLVar17[3].QuadPart + lVar18 * 0x10);
  if (pLVar15 != &local_60) {
    pLVar15->QuadPart = (LONGLONG)LVar23;
    local_60.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pLVar15[1].s,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)&pLVar21->s);
  uVar10 = uVar11;
  if (param_3 < (int)pLVar17[4].s.LowPart) {
    uVar10 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  pFVar14 = TSharedPtr<FNiagaraDataSetReadback,1>::operator->
                      ((TSharedPtr<FNiagaraDataSetReadback,1> *)
                       (pLVar17[3].QuadPart + lVar18 * 0x10));
  FNiagaraDataSetReadback::EnqueueReadback(pFVar14,param_2);
LAB_1492a592d:
  uVar10 = uVar11;
  if (param_3 < (int)pLVar17[2].s.LowPart) {
    uVar10 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  if (*(longlong *)(pLVar17[1].QuadPart + lVar18 * 0x10) == 0) {
    return (FNiagaraDataSet *)0x0;
  }
  if (param_3 < (int)pLVar17[2].s.LowPart) {
    uVar11 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  pFVar14 = TSharedPtr<FNiagaraDataSetReadback,1>::operator->
                      ((TSharedPtr<FNiagaraDataSetReadback,1> *)
                       (lVar18 * 0x10 + pLVar17[1].QuadPart));
  if ((pFVar14->PendingReadbacks != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReady()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataSetReadback.h"
                         ,0x19,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FNiagaraDataSet *)(*pcVar7)();
    return pFVar13;
  }
  return &pFVar14->DataSet;
}

// GetValidationErrorInfo @ 1492a8640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FValidationErrorInfo * __thiscall
FNiagaraDebugHud::GetValidationErrorInfo(FNiagaraDebugHud *this,UNiagaraComponent *param_1)

{
  FString *pFVar1;
  TMap<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>_>
  *this_00;
  UNiagaraSystem *pUVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  longlong lVar8;
  FValidationErrorInfo *pFVar9;
  ForAnyElementType _Str;
  ForAnyElementType _Str_00;
  FName local_res8;
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  this_00 = &this->ValidationErrors;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
                      *)this_00,local_res8.Number ^ local_res8.ComparisonIndex.Value,
                     (TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar4 != -1) {
    lVar8 = (longlong)iVar4 * 0x88 + *(longlong *)&this_00->field_0x0;
    pFVar9 = (FValidationErrorInfo *)(lVar8 + 8);
    if (lVar8 == 0) {
      pFVar9 = (FValidationErrorInfo *)0x0;
    }
    if (pFVar9 != (FValidationErrorInfo *)0x0) goto LAB_1492a88fc;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res8);
  local_res18[0].QuadPart = (LONGLONG)&local_res10;
  TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
              *)this_00,
             (TKeyInitializer<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>_&&> *)&local_res8,
             (bool *)local_res18);
  pUVar2 = (param_1->Asset).field0_0x0.DebugPtr;
  pFVar9 = (FValidationErrorInfo *)
           (*(longlong *)&this_00->field_0x0 +
           (longlong)(int)local_res8.ComparisonIndex.Value * 0x88 + 8);
  if (pUVar2 == (UNiagaraSystem *)0x0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_58);
  }
  local_res8 = (FName)param_1->_padding_;
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    _Str.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FName::ToString(&local_res8,&local_48);
  _Str_00.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    _Str_00.Data = local_48.Data.AllocatorInstance.Data;
  }
  if (param_1->_padding_ == 0) {
    ::FString::FString((FString *)&local_68,L"None");
  }
  else {
    local_res8 = *(FName *)(param_1->_padding_ + 0x18);
    ::FName::ToString(&local_res8,(FString *)&local_68);
  }
  sVar6 = wcslen((wchar_t *)_Str_00.Data);
  iVar7 = 2;
  iVar4 = (int)sVar6;
  if ((local_68.ArrayNum != 0) || (iVar5 = 2, iVar4 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,&local_68,iVar4 + iVar5);
  ::FString::PathAppend((FString *)&local_78,(wchar_t *)_Str_00.Data,iVar4);
  sVar6 = wcslen((wchar_t *)_Str.Data);
  iVar4 = (int)sVar6;
  if ((local_78.ArrayNum != 0) || (iVar4 == -1)) {
    iVar7 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_88,&local_78,iVar4 + iVar7);
  ::FString::PathAppend((FString *)&local_88,(wchar_t *)_Str.Data,iVar4);
  pFVar1 = &pFVar9->DisplayName;
  if (&pFVar1->Data != &local_88) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_88.AllocatorInstance.Data;
    (pFVar9->DisplayName).Data.ArrayNum = local_88.ArrayNum;
    (pFVar9->DisplayName).Data.ArrayMax = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_1492a88fc:
  QueryPerformanceCounter(local_res18);
  pFVar9->LastWarningTime =
       (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return pFVar9;
}

// RemoveMessage @ 1492b4170

void __thiscall FNiagaraDebugHud::RemoveMessage(FNiagaraDebugHud *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Messages).field_0x8 != *(int *)&(this->Messages).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FNiagaraDebugMessage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FNiagaraDebugMessage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>,FDefaultSetAllocator>
                         *)&this->Messages,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// UpdateSettings @ 1492bfd00

void __thiscall
FNiagaraDebugHud::UpdateSettings(FNiagaraDebugHud *this,FNiagaraDebugHUDSettingsData *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData,(UObject *)pUVar2,
                         L"NiagaraDebugHUDSettingsData");
  }
  UScriptStruct::CopyScriptStruct
            (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton,
             &NiagaraDebugLocal::Settings,param_1,1);
  bVar1 = 1 < (int)NiagaraDebugLocal::GCachedSystemVariables._72_4_;
  if (!bVar1) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&NiagaraDebugLocal::GCachedSystemVariables);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&NiagaraDebugLocal::GCachedSystemVariables,0,
                    NiagaraDebugLocal::GCachedSystemVariables._8_4_);
  NiagaraDebugLocal::GCachedSystemVariables._8_4_ = 0;
  if (NiagaraDebugLocal::GCachedSystemVariables._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&NiagaraDebugLocal::GCachedSystemVariables,0,
               (int *)&NiagaraDebugLocal::GCachedSystemVariables.field_0xc);
  }
  NiagaraDebugLocal::GCachedSystemVariables._48_4_ = 0xffffffff;
  NiagaraDebugLocal::GCachedSystemVariables._52_4_ = 0;
  NiagaraDebugLocal::GCachedSystemVariables._40_4_ = 0;
  if (0x80 < (uint)NiagaraDebugLocal::GCachedSystemVariables._44_4_) {
    NiagaraDebugLocal::GCachedSystemVariables._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &NiagaraDebugLocal::GCachedSystemVariables.field_0x10,0);
  }
  if (bVar1) {
    NiagaraDebugLocal::GCachedSystemVariables._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&NiagaraDebugLocal::GCachedSystemVariables);
  }
  return;
}

