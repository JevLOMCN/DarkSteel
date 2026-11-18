// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 12

// StaticClass @ 14d80c060

UClass * __cdecl UAudioAnalyzerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSubsystem",
               &Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerSubsystem,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioAnalyzerSubsystem>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton;
}

// UAudioAnalyzerSubsystem @ 14d80cd70

UAudioAnalyzerSubsystem * __thiscall
UAudioAnalyzerSubsystem::UAudioAnalyzerSubsystem
          (UAudioAnalyzerSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioAnalyzerSubsystem__6B_;
  (this->AudioAnalyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioAnalyzers).ArrayNum = 0;
  (this->AudioAnalyzers).ArrayMax = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAudioAnalyzerSubsystem @ 14d80cdb0

UAudioAnalyzerSubsystem * __thiscall
UAudioAnalyzerSubsystem::UAudioAnalyzerSubsystem(UAudioAnalyzerSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UAudioAnalyzerSubsystem__6B_;
  (this->AudioAnalyzers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioAnalyzers).ArrayNum = 0;
  (this->AudioAnalyzers).ArrayMax = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UAudioAnalyzerSubsystem @ 14d80cff0

void __thiscall UAudioAnalyzerSubsystem::~UAudioAnalyzerSubsystem(UAudioAnalyzerSubsystem *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar1 = &this->TickerHandle;
  this->_padding_ = (longlong)&___7UAudioAnalyzerSubsystem__6B_;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
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
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  (this->AudioAnalyzers).ArrayNum = 0;
  if ((this->AudioAnalyzers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AudioAnalyzers).AllocatorInstance,0,&(this->AudioAnalyzers).ArrayMax);
  }
  pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar5 = (this->AudioAnalyzers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// Deinitialize @ 14d80e170

void __thiscall UAudioAnalyzerSubsystem::Deinitialize(UAudioAnalyzerSubsystem *this)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  (this->AudioAnalyzers).ArrayNum = 0;
  if ((this->AudioAnalyzers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AudioAnalyzers).AllocatorInstance,0,&(this->AudioAnalyzers).ArrayMax);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Get @ 14d80ebd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAudioAnalyzerSubsystem * __cdecl UAudioAnalyzerSubsystem::Get(void)

{
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UAudioAnalyzerSubsystem *pUVar5;
  
  if (GEngine == (UEngine *)0x0) {
    return (UAudioAnalyzerSubsystem *)0x0;
  }
  this = &GEngine->EngineSubsystemCollection;
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14d80ec16;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14d80ec16:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14d80ec46;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14d80ec46:
  pUVar5 = (UAudioAnalyzerSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal((FSubsystemCollectionBase *)this,pUVar3);
  return pUVar5;
}

// GetPrivateStaticClass @ 14d80fc10

UClass * __cdecl UAudioAnalyzerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSubsystem",
               &Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerSubsystem,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioAnalyzerSubsystem>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton;
}

// Initialize @ 14d80ff60

void __thiscall
UAudioAnalyzerSubsystem::Initialize(UAudioAnalyzerSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// RegisterAudioAnalyzer @ 14d810070

void __thiscall
UAudioAnalyzerSubsystem::RegisterAudioAnalyzer
          (UAudioAnalyzerSubsystem *this,UAudioAnalyzer *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTSTicker *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TWeakPtr<FTSTicker::FElement,1> *pTVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  if ((((this->TickerHandle).Object == (FElement *)0x0) ||
      (pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this_00 = FTSTicker::GetCoreTicker();
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAudioAnalyzerSubsystem____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAudioAnalyzerSubsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10 = (FName)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAudioAnalyzerSubsystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res10);
      puVar4[4] = Tick;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    pTVar6 = FTSTicker::AddTicker
                       (this_00,&local_88,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_78,0.0);
    if (&this->TickerHandle != pTVar6) {
      (this->TickerHandle).Object = pTVar6->Object;
      pTVar6->Object = (FElement *)0x0;
      pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (pTVar6->WeakReferenceCount).ReferenceController;
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    }
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
  }
  local_res10 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAudioAnalyzer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UAudioAnalyzer>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UAudioAnalyzer>_>
            (&this->AudioAnalyzers,(TObjectPtr<UAudioAnalyzer> *)&local_res10);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticRegisterNativesUAudioAnalyzerSubsystem @ 14d810e90

void __cdecl UAudioAnalyzerSubsystem::StaticRegisterNativesUAudioAnalyzerSubsystem(void)

{
  return;
}

// Tick @ 14d810f10

bool __thiscall UAudioAnalyzerSubsystem::Tick(UAudioAnalyzerSubsystem *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UAudioAnalyzer *this_00;
  FAsyncTask<FAudioAnalyzeTask> *pFVar3;
  FPatchOutput *this_01;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_38 [2];
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(local_38,&local_res20,true);
  pFVar8 = (this->AudioAnalyzers).AllocatorInstance.Data;
  iVar2 = (this->AudioAnalyzers).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AudioAnalyzers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UAudioAnalyzer>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    this_00 = *(UAudioAnalyzer **)pFVar8;
    if (this_00 != (UAudioAnalyzer *)0x0) {
      if ((this_00->AudioBus).field0_0x0.DebugPtr == (UAudioBus *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioBus != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                           ,0xa7,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pFVar3 = (this_00->AnalysisTask).Object;
      if (((pFVar3 == (FAsyncTask<FAudioAnalyzeTask> *)0x0) || ((int)pFVar3->_padding_ == 0)) &&
         (this_01 = (this_00->PatchOutputStrongPtr).Object, this_01 != (FPatchOutput *)0x0)) {
        iVar7 = Audio::FPatchOutput::GetNumSamplesAvailable(this_01);
        if (this_00->NumFramesPerBufferToAnalyze <=
            iVar7 / (int)(((this_00->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1)) {
          bVar5 = UAudioAnalyzer::DoAnalysis(this_00);
          if (bVar5) {
            (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
          }
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res18);
  return true;
}

// UnregisterAudioAnalyzer @ 14d811070

void __thiscall
UAudioAnalyzerSubsystem::UnregisterAudioAnalyzer
          (UAudioAnalyzerSubsystem *this,UAudioAnalyzer *param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  UAudioAnalyzer *pUVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  UAudioAnalyzer *local_78;
  TWeakPtr<FTSTicker::FElement,1> local_70;
  undefined8 local_60 [4];
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAudioAnalyzer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar5 = (this->AudioAnalyzers).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)(this->AudioAnalyzers).ArrayMax * 8
      )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (this->AudioAnalyzers).ArrayNum;
  if (iVar4 != 0) {
    iVar13 = 0;
    pFVar5 = (this->AudioAnalyzers).AllocatorInstance.Data;
    bVar8 = *(UAudioAnalyzer **)pFVar5 != local_78;
    lVar12 = 0;
    pUVar9 = local_78;
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar12 = lVar12 + 1;
        iVar11 = iVar11 + 1;
        if (iVar4 <= lVar12) break;
      } while (bVar8 == (*(UAudioAnalyzer **)(pFVar5 + lVar12 * 8) != pUVar9));
      if (bVar8 != false) {
        if (iVar13 != iVar10) {
          memmove(pFVar5 + (longlong)iVar13 * 8,pFVar5 + (longlong)iVar10 * 8,
                  (longlong)(iVar11 - iVar10) << 3);
          pUVar9 = local_78;
        }
        iVar13 = iVar13 + (iVar11 - iVar10);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar11;
    } while (lVar12 < iVar4);
    (this->AudioAnalyzers).ArrayNum = iVar13;
    if (iVar13 != 0) goto LAB_14d8112cf;
  }
  pTVar1 = &this->TickerHandle;
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    local_70.Object = pTVar1->Object;
    local_70.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_70);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_60) {
      pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
  }
LAB_14d8112cf:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

