// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12GlobalOnlineSamplerHeap @ 1459a9950

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12GlobalOnlineSamplerHeap * __thiscall
FD3D12GlobalOnlineSamplerHeap::FD3D12GlobalOnlineSamplerHeap
          (FD3D12GlobalOnlineSamplerHeap *this,FD3D12Device *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FD3D12GlobalOnlineSamplerHeap *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12GlobalOnlineSamplerHeap__6B_;
  pTVar3 = ::operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->UniqueDescriptorTables).Object =
         (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *)
         0x10;
    (this->UniqueDescriptorTables).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TSet_UFD3D12UniqueSamplerTable__UFD3D12UniqueSamplerTableKeyFuncs__VFDefaultSetAllocator_____00_SharedPointerInternals__6B_
    ;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[4]._padding_ = 0xffffffff;
    pTVar3[5]._padding_ = 0;
    if ((TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *)
        (pTVar3 + 1) ==
        (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *)0x0)
    {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FD3D12GlobalOnlineSamplerHeap *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->UniqueDescriptorTables).Object =
         (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *)
         (pTVar3 + 1);
    (this->UniqueDescriptorTables).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->Mutex).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ConsolidateUniqueSamplerTables @ 1459b8380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12GlobalOnlineSamplerHeap::ConsolidateUniqueSamplerTables
          (FD3D12GlobalOnlineSamplerHeap *this,TArrayView<FD3D12UniqueSamplerTable,int> *param_1)

{
  TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
  *pTVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulong64 uVar14;
  TReferenceControllerBase<1> *pTVar15;
  ID3D12Device *pIVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptorTables> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptors> FVar21;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  FD3D12UniqueSamplerTable *pFVar24;
  uchar auVar25 [8];
  FD3D12UniqueSamplerTable *local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *local_78;
  FSharedReferencer<1> FStack_70;
  FStatMessage local_68;
  FStatMessage local_58 [2];
  
  iVar12 = param_1->ArrayNum;
  if (iVar12 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->Mutex);
    pTVar8 = _UNK_150651568;
    pTVar7 = ___xmm_00000000000000000000000000000010;
    pFVar24 = param_1->DataPtr;
    bVar10 = false;
    bVar11 = false;
    local_res20 = pFVar24 + iVar12;
    if (pFVar24 != local_res20) {
      pTVar1 = &this->UniqueDescriptorTables;
      do {
        pTVar23 = (TReferenceControllerBase<1> *)0x0;
        if ((pTVar1->Object ==
             (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *
             )0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar22 = pTVar1->Object;
        uVar14 = FD3D12PipelineStateCacheBase::HashData
                           ((pFVar24->Key).SamplerID,(pFVar24->Key).Count * 2);
        iVar12 = TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                 ::FindIndexByHash<FD3D12UniqueSamplerTable>(pTVar22,(uint)uVar14,pFVar24);
        if (iVar12 == -1) {
          uVar2 = (pFVar24->Key).Count;
          uVar13 = (**(code **)(this->_padding_ + 0x28))(this);
          if ((uVar2 == 0) || ((uVar2 <= uVar13 && ((int)this->_padding_ + uVar2 <= uVar13)))) {
            bVar9 = !bVar10;
            bVar10 = bVar11;
            if (bVar9) {
              pTVar22 = pTVar1->Object;
              pTVar15 = ::operator_new(0x60);
              if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
                pTVar22 = (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                           *)&DAT_00000010;
                local_78 = pTVar7;
                FStack_70.ReferenceController = pTVar8;
              }
              else {
                pTVar15[1]._padding_ = 0;
                pTVar15->SharedReferenceCount = (atomic<int>)0x1;
                pTVar15->WeakReferenceCount = (atomic<int>)0x1;
                pTVar15->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_V__TSet_UFD3D12UniqueSamplerTable__UFD3D12UniqueSamplerTableKeyFuncs__VFDefaultSetAllocator_____00_SharedPointerInternals__6B_
                ;
                pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
                pTVar15[3]._padding_ = 0;
                pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
                pTVar15[3].WeakReferenceCount = (atomic<int>)0x80;
                *(undefined4 *)&pTVar15[4]._padding_ = 0xffffffff;
                *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0;
                pTVar15[5]._padding_ = 0;
                pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
                TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                ::operator=((TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                             *)(pTVar15 + 1),pTVar22);
                pTVar22 = (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                           *)(pTVar15 + 1);
                if ((pTVar22 ==
                     (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                      *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                LOCK();
                pTVar15->SharedReferenceCount =
                     (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
                UNLOCK();
                FStack_70.ReferenceController = pTVar15;
                pTVar23 = pTVar15;
                local_78 = pTVar22;
              }
              if (pTVar1 != (TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
                             *)&local_78) {
                pTVar1->Object = pTVar22;
                local_78 = (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                            *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&(this->UniqueDescriptorTables).SharedReferenceCount,&FStack_70);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_70.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar23);
              bVar10 = true;
            }
            uVar13 = FD3D12OnlineHeap::ReserveSlots((FD3D12OnlineHeap *)this,(pFVar24->Key).Count);
            uVar2 = *(uint *)(this->_padding_ + 0x38);
            lVar4 = *(longlong *)(this->_padding_ + 0x20);
            if ((this->_padding_ == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Parent != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                    ,0x59,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = (pFVar24->Key).Count;
            pIVar16 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
            FD3D12Device::CopyDescriptors
                      (pIVar16,(D3D12_CPU_DESCRIPTOR_HANDLE)
                               ((ulonglong)uVar2 * (longlong)(int)uVar13 + lVar4),pFVar24->CPUTable,
                       uVar3,D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER);
            (pFVar24->GPUHandle).ptr =
                 (ulonglong)*(uint *)(this->_padding_ + 0x38) * (longlong)(int)uVar13 +
                 *(longlong *)(this->_padding_ + 0x28);
            if ((pTVar1->Object ==
                 (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                  *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>::
            Emplace<FD3D12UniqueSamplerTable_const_&>
                      (pTVar1->Object,(FD3D12UniqueSamplerTable *)&stack0x00000018,(bool *)pFVar24);
            bVar11 = bVar10;
          }
        }
        pFVar24 = pFVar24 + 1;
      } while (pFVar24 != local_res20);
      if (bVar10) {
        FVar18 = StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables;
        if (StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables ==
            (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptorTables>)0x0) {
          pFVar17 = ::FName::FName(&local_88,"STAT_NumReuseableSamplerOnlineDescriptorTables");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptorTables>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_NumReuseableSamplerOnlineDescriptorTables,*pFVar17,
                              L"Sampler: Num reusable unique descriptor table entries",
                              "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                              L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar18;
        if ((pTVar1->Object ==
             (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *
             )0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        auVar25 = (uchar  [8])
                  (longlong)
                  (*(int *)&(pTVar1->Object->Elements).field_0x8 -
                  *(int *)&(pTVar1->Object->Elements).field_0x34);
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_68.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
          local_98 = FVar5;
          local_68.StatData.Pad = auVar25;
          local_68.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,&local_68);
          FStatsTrace::Set(&local_98,(long64)auVar25);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
        FVar21 = StatPtr_STAT_NumReuseableSamplerOnlineDescriptors;
        if (StatPtr_STAT_NumReuseableSamplerOnlineDescriptors ==
            (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptors>)0x0) {
          pFVar17 = ::FName::FName(&local_80,"STAT_NumReuseableSamplerOnlineDescriptors");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_NumReuseableSamplerOnlineDescriptors>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_NumReuseableSamplerOnlineDescriptors,*pFVar17,
                              L"Sampler: Num reusable unique descriptors",
                              "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                              L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar21;
        uVar2 = (uint)this->_padding_;
        auVar25[4] = '\0';
        auVar25[5] = '\0';
        auVar25[6] = '\0';
        auVar25[7] = '\0';
        auVar25[0] = (char)uVar2;
        auVar25[1] = (char)(uVar2 >> 8);
        auVar25[2] = (char)(uVar2 >> 0x10);
        auVar25[3] = (char)(uVar2 >> 0x18);
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          local_58[0].NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
          local_90 = FVar5;
          local_58[0].StatData.Pad = auVar25;
          local_58[0].NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar19,local_58);
          FStatsTrace::Set(&local_90,(long64)auVar25);
          if (pFVar19->ScopeCount == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Mutex);
  }
  return;
}

// GetUniqueDescriptorTables @ 1459c36c0

TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1> *
__thiscall
FD3D12GlobalOnlineSamplerHeap::GetUniqueDescriptorTables
          (FD3D12GlobalOnlineSamplerHeap *this,
          TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->Mutex);
  __return_storage_ptr__->Object = (this->UniqueDescriptorTables).Object;
  pTVar1 = (this->UniqueDescriptorTables).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->Mutex);
  return __return_storage_ptr__;
}

// Init @ 1459c4130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12GlobalOnlineSamplerHeap::Init(FD3D12GlobalOnlineSamplerHeap *this,uint param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FD3D12DescriptorHeap *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory> FVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar13;
  uint uVar14;
  uchar auVar15 [8];
  uchar auVar16 [8];
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  FStatMessage local_40;
  
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = FD3D12DescriptorHeapManager::AllocateHeap
                     ((FD3D12DescriptorHeapManager *)(this->_padding_ + 0x610),
                      L"Device Global - Online Sampler Heap",Sampler,param_1,GpuVisible);
  pFVar2 = (FD3D12DescriptorHeap *)this->_padding_;
  if (pFVar2 != pFVar7) {
    this->_padding_ = (longlong)pFVar7;
    if (pFVar7 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  FVar9 = StatPtr_STAT_NumSamplerOnlineDescriptorHeaps;
  if (StatPtr_STAT_NumSamplerOnlineDescriptorHeaps ==
      (FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps>)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_NumSamplerOnlineDescriptorHeaps");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NumSamplerOnlineDescriptorHeaps>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumSamplerOnlineDescriptorHeaps,
                       *pFVar8,L"Sampler: Num descriptor heaps","STATGROUP_D3D12DescriptorHeap",
                       "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                       ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar9;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_60.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_60.StatData.Pad[0] = '\x01';
    local_60.StatData.Pad[1] = '\0';
    local_60.StatData.Pad[2] = '\0';
    local_60.StatData.Pad[3] = '\0';
    local_60.StatData.Pad[4] = '\0';
    local_60.StatData.Pad[5] = '\0';
    local_60.StatData.Pad[6] = '\0';
    local_60.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_60.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_60);
    FStatsTrace::Add(&local_res8,1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  uVar14 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
  auVar16[4] = '\0';
  auVar16[5] = '\0';
  auVar16[6] = '\0';
  auVar16[7] = '\0';
  auVar16._0_4_ = uVar14;
  if (uVar14 != 0) {
    FVar12 = StatPtr_STAT_SamplerOnlineDescriptorHeapMemory;
    if (StatPtr_STAT_SamplerOnlineDescriptorHeapMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_70,"STAT_SamplerOnlineDescriptorHeapMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_SamplerOnlineDescriptorHeapMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SamplerOnlineDescriptorHeapMemory,*pFVar8,
                          L"Sampler DescriptorHeap Memory","STATGROUP_D3D12MemoryDetails",
                          "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                          false,MCR_GPUSystem);
    }
    FVar3 = *(FName *)FVar12;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_50.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res18 = FVar3;
      local_50.StatData.Pad = auVar16;
      local_50.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_50);
      FStatsTrace::Add(&local_res18,(long64)auVar16);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  uVar14 = *(int *)(this->_padding_ + 0x38) * *(int *)(this->_padding_ + 0x34);
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15._0_4_ = uVar14;
  if (uVar14 != 0) {
    FVar13 = StatPtr_STAT_D3D12MemoryCurrentTotal;
    if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
      pFVar8 = ::FName::FName(&local_68,"STAT_D3D12MemoryCurrentTotal");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,*pFVar8
                          ,L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",
                          L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar13;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_40.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res20 = FVar3;
      local_40.StatData.Pad = auVar15;
      local_40.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_40);
      FStatsTrace::Add(&local_res20,(long64)auVar15);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  return;
}

// RollOver @ 1459d7210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FD3D12GlobalOnlineSamplerHeap::RollOver(FD3D12GlobalOnlineSamplerHeap *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                     ,0x419,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  return false;
}

// ~FD3D12GlobalOnlineSamplerHeap @ 1459f8070

void __thiscall
FD3D12GlobalOnlineSamplerHeap::~FD3D12GlobalOnlineSamplerHeap(FD3D12GlobalOnlineSamplerHeap *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Mutex);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UniqueDescriptorTables).SharedReferenceCount.ReferenceController);
  FD3D12OnlineHeap::~FD3D12OnlineHeap((FD3D12OnlineHeap *)this);
  return;
}

