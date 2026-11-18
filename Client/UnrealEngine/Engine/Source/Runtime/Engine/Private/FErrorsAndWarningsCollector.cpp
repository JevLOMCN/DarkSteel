// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FErrorsAndWarningsCollector @ 148b1d410

/* WARNING: Enum "Type": Some values do not have unique names */

FErrorsAndWarningsCollector * __thiscall
UEngine::FErrorsAndWarningsCollector::FErrorsAndWarningsCollector(FErrorsAndWarningsCollector *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  float fVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTSTicker *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  FOutputDeviceRedirector *this_01;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FBufferedOutputDevice::FBufferedOutputDevice((FBufferedOutputDevice *)this);
  this->_padding_ = (longlong)&___7FErrorsAndWarningsCollector_UEngine__6B_;
  pTVar2 = &this->TickerHandle;
  (this->ActiveLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLines).ArrayNum = 0;
  (this->ActiveLines).ArrayMax = 0;
  *(undefined8 *)&this->MessagesToCountMap = 0;
  *(undefined8 *)&(this->MessagesToCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->MessagesToCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->MessagesToCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->MessagesToCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MessagesToCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MessagesToCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->MessagesToCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->MessagesToCountMap).field_0x48 = 0;
  pTVar2->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->DisplayTime = 0.0;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/Engine.Engine",L"DurationOfErrorsAndWarningsOnHUD",&this->DisplayTime
             ,&GEngineIni);
  if (0.0 < this->DisplayTime) {
    *(char *)&this->_padding_ = (GSupressWarningsInOnScreenDisplay == 0) + '\x02';
    this_00 = FTSTicker::GetCoreTicker();
    fVar3 = this->DisplayTime;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFErrorsAndWarningsCollector_UEngine____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = Tick;
      puVar6[3] = this;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar8 = FTSTicker::AddTicker
                       (this_00,&local_78,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,fVar3)
    ;
    if (pTVar2 != pTVar8) {
      pTVar2->Object = pTVar8->Object;
      pTVar8->Object = (FElement *)0x0;
      pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (pTVar8->WeakReferenceCount).ReferenceController;
      (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    this_01 = FOutputDeviceRedirector::Get();
    FOutputDeviceRedirector::AddOutputDevice(this_01,(FOutputDevice *)this);
  }
  return this;
}

// ~FErrorsAndWarningsCollector @ 148b1ec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEngine::FErrorsAndWarningsCollector::~FErrorsAndWarningsCollector
          (FErrorsAndWarningsCollector *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FOutputDeviceRedirector *this_00;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FErrorsAndWarningsCollector_UEngine__6B_;
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    this_00 = FOutputDeviceRedirector::Get();
    FOutputDeviceRedirector::RemoveOutputDevice(this_00,(FOutputDevice *)this);
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
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
  *(undefined4 *)&(this->MessagesToCountMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->MessagesToCountMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MessagesToCountMap);
  DestructItems<FBufferedLine,int>
            ((FBufferedLine *)(this->ActiveLines).AllocatorInstance.Data,
             (this->ActiveLines).ArrayNum);
  pFVar5 = (this->ActiveLines).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FBufferedOutputDevice::~FBufferedOutputDevice((FBufferedOutputDevice *)this);
  return;
}

// Tick @ 148b79a60

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
UEngine::FErrorsAndWarningsCollector::Tick(FErrorsAndWarningsCollector *this,float param_1)

{
  TArray<FBufferedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  code *pcVar5;
  FColor_u_0 FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_bool___cdecl_UEngine::FErrorsAndWarningsCollector::Tick(float)_::_2_::FStat_STAT_FErrorsAndWarningsCollector_Tick>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  FNameEntryId FVar21;
  FName FVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ushort *puVar26;
  ulonglong uVar27;
  FColor_u_0 local_res8 [2];
  uint local_res18;
  uint uStackX_1c;
  uint local_res20 [2];
  TArray<FBufferedLine,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  TPairInitializer<unsigned_int_&&,unsigned_int_&&> local_80;
  FStatMessage local_70;
  uint *local_60;
  uint *local_58;
  FName local_50;
  FName local_48 [2];
  
  uVar23 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FErrorsAndWarningsCollector_Tick ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_UEngine::FErrorsAndWarningsCollector::Tick(float)_::_2_::FStat_STAT_FErrorsAndWarningsCollector_Tick>
         )0x0) {
      pFVar14 = ::FName::FName(&local_50,"STAT_FErrorsAndWarningsCollector_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FErrorsAndWarningsCollector_Tick,
                 *pFVar14,L"STAT_FErrorsAndWarningsCollector_Tick","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FErrorsAndWarningsCollector_Tick;
  if (StatPtr_STAT_FErrorsAndWarningsCollector_Tick ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_UEngine::FErrorsAndWarningsCollector::Tick(float)_::_2_::FStat_STAT_FErrorsAndWarningsCollector_Tick>
       )0x0) {
    pFVar14 = ::FName::FName(local_48,"STAT_FErrorsAndWarningsCollector_Tick");
    FVar15 = (FThreadSafeStaticStat<_public:_bool___cdecl_UEngine::FErrorsAndWarningsCollector::Tick(float)_::_2_::FStat_STAT_FErrorsAndWarningsCollector_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FErrorsAndWarningsCollector_Tick,*pFVar14,
                          L"STAT_FErrorsAndWarningsCollector_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar18 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar21.Value;
        local_98.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                   ,0x2fca);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar21.Value;
      uStackX_1c = uVar18;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar8 = true;
      goto LAB_148b79bc1;
    }
  }
  bVar8 = false;
  FVar22 = local_90;
LAB_148b79bc1:
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  *(char *)&this->_padding_ = (GSupressWarningsInOnScreenDisplay == 0) + '\x02';
  FBufferedOutputDevice::GetContents((FBufferedOutputDevice *)this,&local_c8);
  pTVar1 = &this->ActiveLines;
  if ((pTVar1 == &local_c8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x986,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  lVar25 = (longlong)local_c8.ArrayNum;
  if (local_c8.ArrayNum != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,local_c8.ArrayNum,&pTVar1->AllocatorInstance,
                        &(this->ActiveLines).ArrayNum,&(this->ActiveLines).ArrayMax);
    memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x28,
            local_c8.AllocatorInstance.Data,lVar25 * 0x28);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FBufferedLine,int>((FBufferedLine *)local_c8.AllocatorInstance.Data,0);
  if ((FBufferedLine *)local_c8.AllocatorInstance.Data != (FBufferedLine *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  uVar19 = uVar23;
  uVar27 = uVar23;
  if ((this->ActiveLines).ArrayNum != 0) {
    do {
      uVar24 = (uint)uVar19;
      uVar18 = 0;
      if ((int)uVar24 < (this->ActiveLines).ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar19 = 0xffffffff;
      uVar18 = 0xffffffff;
      puVar26 = *(ushort **)((pTVar1->AllocatorInstance).Data + uVar27);
      uVar4 = *puVar26;
      while (uVar4 != 0) {
        puVar26 = puVar26 + 1;
        uVar18 = FCrc::CRCTablesSB8[1][uVar19 >> 0x10 & 0xff] ^
                 FCrc::CRCTablesSB8[2][(uVar4 ^ uVar19) >> 8 & 0xff] ^
                 FCrc::CRCTablesSB8[0][uVar19 >> 0x18] ^
                 FCrc::CRCTablesSB8[3][(uVar4 ^ uVar19) & 0xff];
        uVar19 = (ulonglong)uVar18;
        uVar4 = *puVar26;
      }
      if (((uint)uVar23 != 0) && (~uVar18 != (uint)uVar23)) break;
      uVar24 = uVar24 + 1;
      uVar23 = (ulonglong)~uVar18;
      uVar19 = (ulonglong)uVar24;
      uVar27 = uVar27 + 0x28;
    } while ((int)uVar24 < (this->ActiveLines).ArrayNum);
    if (((this->ActiveLines).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    ::FString::FString(&local_b8,*(wchar_t **)(this->ActiveLines).AllocatorInstance.Data);
    if (((this->ActiveLines).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    FVar3 = (this->ActiveLines).AllocatorInstance.Data[0x20];
    uVar18 = 0;
    if ((int)uVar24 <= (this->ActiveLines).ArrayNum) {
      uVar18 = ~uVar24 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    if (uVar24 != 0) {
      TArray<FBufferedLine,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->ActiveLines,0,uVar24);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&(this->ActiveLines).AllocatorInstance,(this->ActiveLines).ArrayNum,
                 &(this->ActiveLines).ArrayMax);
    }
    local_res18 = (uint)uVar23;
    if (*(int *)&(this->MessagesToCountMap).field_0x8 !=
        *(int *)&(this->MessagesToCountMap).field_0x34) {
      puVar20 = *(undefined1 **)&(this->MessagesToCountMap).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(this->MessagesToCountMap).field_0x38;
      }
      uVar18 = *(uint *)(puVar20 + (*(int *)&(this->MessagesToCountMap).field_0x48 - 1 & uVar23) * 4
                        );
      if (uVar18 != 0xffffffff) {
        do {
          puVar17 = (uint *)((longlong)(int)uVar18 * 0x10 + *(longlong *)&this->MessagesToCountMap);
          if (*puVar17 == local_res18) {
            puVar16 = puVar17 + 1;
            if (puVar17 == (uint *)0x0) {
              puVar16 = (uint *)0x0;
            }
            if (puVar16 != (uint *)0x0) {
              uVar24 = uVar24 + *puVar16;
            }
            break;
          }
          uVar18 = puVar17[2];
        } while (uVar18 != 0xffffffff);
      }
    }
    local_60 = &local_res18;
    local_58 = local_res20;
    local_res20[0] = uVar24;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_int_&&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->MessagesToCountMap,&local_80,(bool *)&local_60);
    if (1 < (int)uVar24) {
      ::FString::PrintfImpl(&local_a8,L"%s (x%d)");
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      local_b8.Data.ArrayNum = local_a8.Data.ArrayNum;
      local_b8.Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    FVar6 = FColor::Yellow.field0_0x0;
    if ((byte)FVar3 < 3) {
      FVar6 = FColor::Red.field0_0x0;
    }
    AddOnScreenDebugMessage
              (GEngine,0xffffffffffffffff,this->DisplayTime,(FColor)FVar6._s_0,&local_b8,true,
               &UE::Math::TVector2<double>::UnitVector);
    iVar12 = (this->ActiveLines).ArrayNum;
    iVar13 = (int)(__real_41f00000 / this->DisplayTime);
    if (iVar13 < iVar12) {
      uVar24 = iVar12 - iVar13;
      uVar18 = 0;
      if ((int)uVar24 <= iVar12) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      if (uVar24 != 0) {
        TArray<FBufferedLine,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->ActiveLines,0,uVar24)
        ;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&(this->ActiveLines).AllocatorInstance,(this->ActiveLines).ArrayNum,
                   &(this->ActiveLines).ArrayMax);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&local_80.Value);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_80.Value._0_1_;
      local_70.StatData.Pad[1] = local_80.Value._1_1_;
      local_70.StatData.Pad[2] = local_80.Value._2_1_;
      local_70.StatData.Pad[3] = local_80.Value._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
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
  return true;
}

