// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12ExplicitDescriptorCache @ 1459ee100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ExplicitDescriptorCache * __thiscall
FD3D12ExplicitDescriptorCache::FD3D12ExplicitDescriptorCache
          (FD3D12ExplicitDescriptorCache *this,FD3D12Device *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12ExplicitDescriptorCache *pFVar7;
  uint uVar8;
  
  this->_padding_ = (longlong)param_1;
  FD3D12ExplicitDescriptorHeap::FD3D12ExplicitDescriptorHeap(&this->ViewHeap,param_1);
  FD3D12ExplicitDescriptorHeap::FD3D12ExplicitDescriptorHeap(&this->SamplerHeap,param_1);
  this_00 = &this->WorkerData;
  (this->WorkerData).ArrayNum = 0;
  piVar1 = &(this->WorkerData).ArrayNum;
  (this->WorkerData).ArrayMax = 0;
  piVar2 = &(this->WorkerData).ArrayMax;
  this->BindlessConfiguration = Disabled;
  this->bBindless = false;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (param_2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxWorkerCount > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.h"
                       ,0x77,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FD3D12ExplicitDescriptorCache *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar3 = *piVar1;
  if (iVar3 < (int)param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x40,param_2 - iVar3,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x80,param_2 - iVar3);
  }
  else {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    if ((int)param_2 < iVar3) {
      uVar8 = iVar3 - param_2;
      if ((int)(uVar8 | param_2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FD3D12ExplicitDescriptorCache *)(*pcVar4)();
          return pFVar7;
        }
      }
      if (uVar8 != 0) {
        TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x40,&this_00->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  return this;
}

// Allocate @ 145a00ce0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FD3D12ExplicitDescriptorCache::Allocate
          (FD3D12ExplicitDescriptorCache *this,D3D12_CPU_DESCRIPTOR_HANDLE *param_1,uint param_2,
          D3D12_DESCRIPTOR_HEAP_TYPE param_3,uint param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  uchar auVar5 [8];
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ExplicitUsedSamplerDescriptors> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ExplicitUsedViewDescriptors> FVar15;
  FThreadSafeStaticStat<FStat_STAT_ExplicitMaxUsedSamplerDescriptors> FVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_50;
  FStatMessage local_40;
  
  auVar5[4] = '\0';
  auVar5[5] = '\0';
  auVar5[6] = '\0';
  auVar5[7] = '\0';
  auVar5._0_4_ = param_2;
  lVar20 = 8;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar20 = 0x80;
  }
  if (param_3 == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    uVar7 = 0;
    if ((int)param_4 < (this->WorkerData).ArrayNum) {
      uVar7 = ~param_4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pFVar2 = (this->WorkerData).AllocatorInstance.Data;
    lVar17 = (longlong)(int)param_4 * 0x80;
    iVar8 = *(int *)(pFVar2 + lVar17 + 100);
    iVar21 = iVar8 + param_2;
    iVar9 = -1;
    if (iVar21 <= *(int *)(pFVar2 + lVar17 + 0x68)) {
      *(int *)(pFVar2 + lVar17 + 100) = iVar21;
      iVar9 = iVar8;
    }
    if (iVar9 != -1) goto LAB_145a00dba;
  }
  iVar9 = FD3D12ExplicitDescriptorHeap::Allocate
                    ((FD3D12ExplicitDescriptorHeap *)((longlong)&this->_padding_ + lVar20),param_2);
  if (iVar9 == -1) {
    return -1;
  }
LAB_145a00dba:
  lVar20 = 0x34;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar20 = 0xac;
  }
  lVar17 = 0x38;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar17 = 0xb0;
  }
  lVar10 = 0x18;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar10 = 0x90;
  }
  lVar18 = 0x10;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar18 = 0x88;
  }
  FD3D12Device::CopyDescriptors
            (*(ID3D12Device **)((longlong)&this->_padding_ + lVar18),
             (D3D12_CPU_DESCRIPTOR_HANDLE)
             ((ulonglong)(uint)(iVar9 * *(int *)((longlong)&this->_padding_ + lVar20)) +
             *(longlong *)((longlong)&this->_padding_ + lVar17)),param_1,param_2,
             *(D3D12_DESCRIPTOR_HEAP_TYPE *)((longlong)&this->_padding_ + lVar10));
  lVar20 = 0x78;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar20 = 0xf0;
  }
  if ((*(char *)((longlong)&this->_padding_ + lVar20) == '\0') ||
     (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER)) {
    if (param_3 == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
      if (param_2 == 0) {
        return iVar9;
      }
      if (FThreadStats::bPrimaryEnable == false) {
        return iVar9;
      }
      FVar15 = StatPtr_STAT_ExplicitUsedViewDescriptors;
      if (StatPtr_STAT_ExplicitUsedViewDescriptors ==
          (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedViewDescriptors>)0x0) {
        pFVar11 = ::FName::FName(&local_68,"STAT_ExplicitUsedViewDescriptors");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedViewDescriptors>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitUsedViewDescriptors,
                            *pFVar11,L"Used explicit view descriptors (per frame)",
                            "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                            L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar15;
      if (FVar3 == (FName)0x0) {
        return iVar9;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return iVar9;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return iVar9;
      }
      local_78 = FVar3;
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_50.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_78 = FVar3;
      local_50.StatData.Pad = auVar5;
      local_50.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_50);
      FStatsTrace::Add(&local_78,(long64)auVar5);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
        return iVar9;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return iVar9;
      }
      FThreadStats::FlushRawStats(pFVar13,false,false);
      return iVar9;
    }
  }
  else {
    LOCK();
    piVar1 = &(this->SamplerHeap).NumWrittenSamplerDescriptors;
    *piVar1 = *piVar1 + param_2;
    UNLOCK();
  }
  if ((param_2 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar12 = StatPtr_STAT_ExplicitUsedSamplerDescriptors;
    if (StatPtr_STAT_ExplicitUsedSamplerDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedSamplerDescriptors>)0x0) {
      pFVar11 = ::FName::FName(&local_60,"STAT_ExplicitUsedSamplerDescriptors");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_ExplicitUsedSamplerDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitUsedSamplerDescriptors,
                          *pFVar11,L"Used explicit sampler descriptors (per frame)",
                          "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                          L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar3 = *(FName *)FVar12;
    local_78 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_40.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_70 = FVar3;
      local_40.StatData.Pad = auVar5;
      local_40.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_40);
      FStatsTrace::Add(&local_70,(long64)auVar5);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  lVar20 = 0x2c;
  if (param_3 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar20 = 0xa4;
  }
  uVar19 = (ulonglong)*(int *)((longlong)&this->_padding_ + lVar20);
  if (GMaxNumUsedSamplerDescriptors < uVar19) {
    GMaxNumUsedSamplerDescriptors = uVar19;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors;
    if (StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitMaxUsedSamplerDescriptors>)0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_ExplicitMaxUsedSamplerDescriptors");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_ExplicitMaxUsedSamplerDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ExplicitMaxUsedSamplerDescriptors,*pFVar11,
                          L"Max used explicit sampler descriptors in a single heap",
                          "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                          L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    local_78 = *(FName *)FVar16;
    FThreadStats::AddMessage<__int64>(local_78,Set,GMaxNumUsedSamplerDescriptors,false);
  }
  return iVar9;
}

// AllocateDeduplicated @ 145a01a80

int __thiscall
FD3D12ExplicitDescriptorCache::AllocateDeduplicated
          (FD3D12ExplicitDescriptorCache *this,uint *param_1,D3D12_CPU_DESCRIPTOR_HANDLE *param_2,
          uint param_3,D3D12_DESCRIPTOR_HEAP_TYPE param_4,uint param_5)

{
  schar *psVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FXxHash64 FVar5;
  FXxHash64 FVar6;
  ulonglong uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
  *this_00;
  D3D12_CPU_DESCRIPTOR_HANDLE *pDVar13;
  uint uVar14;
  ulonglong uVar15;
  
  lVar11 = 8;
  if (param_4 != D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    lVar11 = 0x80;
  }
  iVar4 = (this->WorkerData).ArrayNum;
  if (param_4 == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    uVar14 = 0;
    if ((int)param_5 < iVar4) {
      uVar14 = ~param_5 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    this_00 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
               *)((this->WorkerData).AllocatorInstance.Data + (longlong)(int)param_5 * 0x80);
  }
  else {
    uVar14 = 0;
    if ((int)param_5 < iVar4) {
      uVar14 = ~param_5 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    this_00 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
               *)((this->WorkerData).AllocatorInstance.Data + (longlong)(int)param_5 * 0x80 + 0x30);
  }
  FVar5 = FXxHash64::HashBuffer(param_1,(ulonglong)param_3 * 4);
  FVar6 = FXxHash64::HashBuffer(param_2,(ulonglong)param_3 * 8);
  uVar7 = FVar6.Hash ^ FVar5.Hash;
  psVar1 = (this_00->CurrentData).Distances;
  uVar14 = this_00->NumSlotsMinusOne & (uint)uVar7;
  uVar15 = (ulonglong)uVar14;
  cVar9 = '\0';
  if ((psVar1 != (schar *)0x0) && (-1 < psVar1[uVar15])) {
    do {
      if (uVar7 == (this_00->CurrentData).Keys[uVar15]) {
        puVar8 = (uint *)((this_00->CurrentData).Values + uVar15);
        goto LAB_145a01bf7;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      cVar9 = cVar9 + '\x01';
    } while (cVar9 <= psVar1[uVar15]);
  }
  puVar8 = (uint *)Experimental::TSherwoodHashTable_Private::
                   TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                   ::Add(this_00,cVar9,&this_00->CurrentData,uVar14,uVar7,(uint)uVar7,-1);
LAB_145a01bf7:
  uVar14 = *puVar8;
  if (uVar14 == 0xffffffff) {
    if ((((*(char *)((longlong)&(this->ViewHeap).Descriptors.ArrayNum + lVar11) != '\0') &&
         (param_4 == D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER)) && (1 < (this->WorkerData).ArrayNum)) &&
       (iVar4 = *(int *)((longlong)&(this->ViewHeap).MaxNumDescriptors + lVar11),
       (int)param_3 < iVar4)) {
      uVar10 = 0;
      uVar12 = 0;
      pDVar13 = param_2;
      uVar14 = uVar10;
      if (param_3 == 0) {
LAB_145a01cd8:
        if (uVar12 != 0xffffffff) {
          *puVar8 = uVar12;
          return uVar12;
        }
      }
      else {
        do {
          while( true ) {
            uVar12 = uVar14;
            uVar14 = 0;
            if ((int)uVar10 <
                *(int *)((longlong)&(this->ViewHeap).Descriptors.AllocatorInstance.Data + lVar11)) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar4 = (*pcVar2)();
              return iVar4;
            }
            if (*(ulong64 *)
                 (*(longlong *)((longlong)&(this->ViewHeap).HeapCacheEntry.LastUsedTime + lVar11) +
                 (longlong)(int)uVar10 * 8) != pDVar13->ptr) break;
            uVar10 = uVar10 + 1;
            pDVar13 = pDVar13 + 1;
            uVar14 = uVar12;
            if (param_3 <= uVar10 - uVar12) goto LAB_145a01cd8;
          }
          uVar10 = uVar12 + 1;
          pDVar13 = param_2;
          uVar14 = uVar10;
        } while ((int)(uVar10 + param_3) < iVar4);
      }
    }
    uVar14 = Allocate(this,param_2,param_3,param_4,param_5);
    *puVar8 = uVar14;
  }
  return uVar14;
}

// Init @ 145a1d220

void __thiscall
FD3D12ExplicitDescriptorCache::Init
          (FD3D12ExplicitDescriptorCache *this,uint param_1,uint param_2,uint param_3,
          ERHIBindlessConfiguration param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->BindlessConfiguration = param_4;
  if ((param_4 == Disabled) || (*(int *)(this->_padding_ + 0x750) < (int)param_4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bBindless = bVar2;
  if (bVar2 != false) {
    param_2 = 0;
  }
  if (param_2 + param_1 != 0) {
    FD3D12ExplicitDescriptorHeap::Init
              (&this->ViewHeap,param_2 + param_1,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
  }
  if (this->bBindless == false) {
    FD3D12ExplicitDescriptorHeap::Init
              (&this->SamplerHeap,param_3,D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER);
  }
  return;
}

