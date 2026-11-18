// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ~FNiagaraSimCacheCapture @ 148e56580

void __thiscall FNiagaraSimCacheCapture::~FNiagaraSimCacheCapture(FNiagaraSimCacheCapture *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    FinishCapture(this);
  }
  pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
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
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CaptureComplete).field_0x8,*(int *)&(this->CaptureComplete).field_0x10);
  pvVar4 = *(void **)&(this->CaptureComplete).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CaptureComplete);
  return;
}

// CaptureCurrentFrameImmediate @ 148e5d000

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

bool __thiscall
FNiagaraSimCacheCapture::CaptureCurrentFrameImmediate
          (FNiagaraSimCacheCapture *this,UNiagaraSimCache *param_1,
          FNiagaraSimCacheCreateParameters *param_2,UNiagaraComponent *param_3,
          UNiagaraSimCache **param_4,bool param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  FNiagaraSimCacheCreateParameters *pFVar2;
  bool bVar3;
  FNiagaraSimCacheCreateParameters local_68;
  
  bVar3 = false;
  if ((param_1 != (UNiagaraSimCache *)0x0) && (param_3 != (UNiagaraComponent *)0x0)) {
    if (param_5) {
      UNiagaraComponent::AdvanceSimulation(param_3,1,param_6);
    }
    pFVar2 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_68,param_2);
    UNiagaraSimCache::BeginWrite(param_1,pFVar2,param_3);
    UNiagaraSimCache::WriteFrame(param_1,param_3);
    UNiagaraSimCache::EndWrite(param_1,false);
    bVar3 = *(longlong *)&(param_1->SoftNiagaraSystem).SoftObjectPtr.field_0x8 != 0;
  }
  *param_4 = param_1;
  pFVar1 = (param_2->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar3;
}

// CaptureNiagaraSimCache @ 148e5d100

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
FNiagaraSimCacheCapture::CaptureNiagaraSimCache
          (FNiagaraSimCacheCapture *this,UNiagaraSimCache *param_1,
          FNiagaraSimCacheCreateParameters *param_2,UNiagaraComponent *param_3,
          FNiagaraSimCacheCaptureParameters *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  FNiagaraSimCacheCreateParameters *pFVar11;
  UWorld *pUVar12;
  FTSTicker *this_00;
  undefined8 *puVar13;
  ulong64 uVar14;
  TWeakPtr<FTSTicker::FElement,1> *pTVar15;
  float fVar16;
  UNiagaraComponent *local_res8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  TWeakPtr<FTSTicker::FElement,1> local_90;
  FNiagaraSimCacheCreateParameters local_80;
  
  local_res8 = (UNiagaraComponent *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSimCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->WeakCaptureComponent).WeakPtr,(FObjectPtr)&local_res8);
  iVar10 = param_4->NumFrames;
  iVar5 = param_4->CaptureRate;
  uVar6 = *(undefined4 *)&param_4->field_0xc;
  iVar7 = param_4->TimeoutFrameCount;
  uVar8 = *(undefined4 *)&param_4->field_0x14;
  fVar16 = param_4->ImmediateCaptureDeltaTime;
  *(undefined4 *)&(this->CaptureParameters).field_0x0 = *(undefined4 *)&param_4->field_0x0;
  (this->CaptureParameters).NumFrames = iVar10;
  (this->CaptureParameters).CaptureRate = iVar5;
  *(undefined4 *)&(this->CaptureParameters).field_0xc = uVar6;
  (this->CaptureParameters).TimeoutFrameCount = iVar7;
  *(undefined4 *)&(this->CaptureParameters).field_0x14 = uVar8;
  (this->CaptureParameters).ImmediateCaptureDeltaTime = fVar16;
  fVar16 = (this->CaptureParameters).ImmediateCaptureDeltaTime;
  iVar10 = 1;
  if (1 < (this->CaptureParameters).NumFrames) {
    iVar10 = (this->CaptureParameters).NumFrames;
  }
  if (fVar16 <= __real_38d1b717) {
    fVar16 = __real_38d1b717;
  }
  (this->CaptureParameters).NumFrames = iVar10;
  iVar10 = 1;
  if (1 < (this->CaptureParameters).CaptureRate) {
    iVar10 = (this->CaptureParameters).CaptureRate;
  }
  (this->CaptureParameters).CaptureRate = iVar10;
  (this->CaptureParameters).ImmediateCaptureDeltaTime = fVar16;
  iVar10 = 1;
  if (1 < (this->CaptureParameters).TimeoutFrameCount) {
    iVar10 = (this->CaptureParameters).TimeoutFrameCount;
  }
  (this->CaptureParameters).TimeoutFrameCount = iVar10;
  this->CaptureFrameCounter = 0;
  if ((param_1 == (UNiagaraSimCache *)0x0) || (param_3 == (UNiagaraComponent *)0x0)) {
    FinishCapture(this);
    pFVar4 = (param_2->ExplicitCaptureAttributes).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (param_2->InterpolationExcludeAttributes).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (param_2->InterpolationIncludeAttributes).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (param_2->RebaseExcludeAttributes).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (param_2->RebaseIncludeAttributes).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    if ((this->CaptureParameters).bAppendToSimCache == 0) {
      pFVar11 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
                          (&local_80,param_2);
      UNiagaraSimCache::BeginWrite(param_1,pFVar11,param_3);
    }
    else {
      pFVar11 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
                          (&local_80,param_2);
      UNiagaraSimCache::BeginAppend(param_1,pFVar11,param_3);
    }
    if ((this->CaptureParameters).bCaptureAllFramesImmediatly == 0) {
      if ((param_3->_padding_ != 0) ||
         (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_3),
         pUVar12 != (UWorld *)0x0)) {
        this_00 = FTSTicker::GetCoreTicker();
        local_c8 = (undefined1  [8])0x0;
        local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                   (FWriteAccessScope *)&local_b0);
        local_98 = &local_c0;
        puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFNiagaraSimCacheCapture____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar13[4] = OnFrameTick;
          puVar13[3] = this;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        pTVar15 = FTSTicker::AddTicker
                            (this_00,&local_90,
                             (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8,
                             0.0);
        TWeakPtr<FTSTicker::FElement,1>::operator=(&this->TickerHandle,pTVar15);
        if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_90.WeakReferenceCount.ReferenceController,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_c0.DelegateSize != 0) &&
           (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_c0,0,0,0x10);
          local_c0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_c8);
      }
      if ((((this->TickerHandle).Object == (FElement *)0x0) ||
          (pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
          pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1))
      {
        FinishCapture(this);
      }
    }
    else {
      bVar9 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->WeakCaptureComponent,(void *)0x0);
      if (!bVar9) {
        do {
          UNiagaraComponent::AdvanceSimulation
                    (param_3,1,(this->CaptureParameters).ImmediateCaptureDeltaTime);
          OnFrameTick(this,(this->CaptureParameters).ImmediateCaptureDeltaTime);
          bVar9 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                            (&this->WeakCaptureComponent,(void *)0x0);
        } while (!bVar9);
        FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_2);
        return;
      }
    }
    FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_2);
  }
  return;
}

// FinishCapture @ 148e659e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FNiagaraSimCacheCapture::FinishCapture(FNiagaraSimCacheCapture *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UNiagaraSimCache *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  longlong local_78 [2];
  FDestructionSentinel local_68;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_50;
  
  pTVar1 = &this->TickerHandle;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_88.Object = pTVar1->Object;
    local_88.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_88);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_78) {
      pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))();
        }
      }
    }
  }
  this_00 = (UNiagaraSimCache *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UNiagaraSimCache *)0x0) {
    UNiagaraSimCache::EndWrite(this_00,false);
  }
  local_50._padding_ = 0;
  local_50.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_50.InvocationList.ArrayMax = _UNK_150631d44;
  local_50.CompactionThreshold = _UNK_150631d48;
  local_50.InvocationListLockCount = _UNK_150631d4c;
  local_50.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            (&local_50,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->CaptureComplete)
  ;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->WeakCaptureComponent).WeakPtr = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_50,
             (FWriteAccessScope *)&local_68);
  bVar6 = false;
  iVar10 = local_50.InvocationListLockCount + 1;
  uVar11 = local_50.InvocationList.ArrayNum - 1;
  local_50.InvocationListLockCount = iVar10;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < local_50.InvocationList.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((*(int *)(local_50.InvocationList.AllocatorInstance.Data + lVar12 + 8) == 0) ||
         (*(longlong **)(local_50.InvocationList.AllocatorInstance.Data + lVar12) == (longlong *)0x0
         )) {
LAB_148e65b78:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(**(longlong **)
                               (local_50.InvocationList.AllocatorInstance.Data + lVar12) + 0x68))();
        if (cVar8 == '\0') goto LAB_148e65b78;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    iVar10 = local_50.InvocationListLockCount;
  }
  local_50.InvocationListLockCount = iVar10 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(&local_50,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_50.InvocationList.AllocatorInstance.Data,local_50.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_50.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_50.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_50);
  return;
}

// OnFrameTick @ 148e75800

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

bool __thiscall FNiagaraSimCacheCapture::OnFrameTick(FNiagaraSimCacheCapture *this,float param_1)

{
  bool bVar1;
  UNiagaraComponent *pUVar2;
  UNiagaraSimCache *this_00;
  int iVar3;
  FString local_18;
  
  pUVar2 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->WeakCaptureComponent).WeakPtr);
  this_00 = (UNiagaraSimCache *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (((pUVar2 != (UNiagaraComponent *)0x0) && ((pUVar2->_padding_ & 0x100000) != 0)) &&
     (this_00 != (UNiagaraSimCache *)0x0)) {
    if ((this->CaptureFrameCounter % (this->CaptureParameters).CaptureRate != 0) ||
       (bVar1 = UNiagaraSimCache::WriteFrame(this_00,pUVar2), bVar1)) {
      iVar3 = this->CaptureFrameCounter + 1;
      this->TimeOutCounter = 0;
      this->CaptureFrameCounter = iVar3;
      if ((this->CaptureParameters).bCaptureFixedNumberOfFrames == 0) {
        return true;
      }
      if (iVar3 <= ((this->CaptureParameters).NumFrames + -1) *
                   (this->CaptureParameters).CaptureRate) {
        return true;
      }
    }
    else {
      if (*(longlong *)&(this_00->SoftNiagaraSystem).SoftObjectPtr.field_0x8 == 0) {
        FinishCapture(this);
      }
      if ((this->CaptureParameters).bUseTimeout == 0) {
        return true;
      }
      iVar3 = this->TimeOutCounter;
      this->TimeOutCounter = iVar3 + 1;
      if (iVar3 <= (this->CaptureParameters).TimeoutFrameCount) {
        return true;
      }
      if (2 < (byte)LogNiagara._0_1_) {
        if (this_00->_padding_ == 0) {
          ::FString::FString(&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  FinishCapture(this);
  return true;
}

