// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// ~FD3D12ExplicitDescriptorHeapCache @ 1459f7a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12ExplicitDescriptorHeapCache::~FD3D12ExplicitDescriptorHeapCache
          (FD3D12ExplicitDescriptorHeapCache *this)

{
  TArray<FD3D12ExplicitDescriptorHeapCache::FEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors> FVar11;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps> FVar12;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors> FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FNameEntryId FVar16;
  uchar auVar17 [8];
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  uint uStackX_1c;
  uint local_res20;
  uint uStackX_24;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  LPCRITICAL_SECTION local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((this->NumAllocatedEntries != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumAllocatedEntries == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.cpp"
                         ,0x2c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_b8 = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (local_b8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b8);
  local_res10 = (this->FreeList).ArrayNum;
  uVar6 = (ulonglong)(int)local_res10;
  pTVar1 = &this->FreeList;
  pFVar15 = (pTVar1->AllocatorInstance).Data;
  pFVar14 = pFVar15 + uVar6 * 0x20;
  do {
    if ((this->FreeList).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FD3D12ExplicitDescriptorHeapCache::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_b8;
    if (pFVar15 == pFVar14) {
      (this->FreeList).ArrayNum = 0;
      if ((this->FreeList).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar1->AllocatorInstance,0,&(this->FreeList).ArrayMax);
      }
      LeaveCriticalSection(lpCriticalSection);
      pFVar15 = (pTVar1->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x0001459f804e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DeleteCriticalSection(lpCriticalSection);
      return;
    }
    if (*(int *)(pFVar15 + 0xc) == 0) {
      FVar8 = StatPtr_STAT_ExplicitViewDescriptorHeaps;
      if (StatPtr_STAT_ExplicitViewDescriptorHeaps ==
          (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)0x0) {
        pFVar7 = ::FName::FName(&local_70,"STAT_ExplicitViewDescriptorHeaps");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptorHeaps,
                           *pFVar7,L"Explicit view descriptor heaps","STATGROUP_D3D12DescriptorHeap"
                           ,"STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false
                           ,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar8;
      FVar16 = FVar2.ComparisonIndex.Value;
      uVar5 = FVar2.Number;
      local_res18 = FVar16.Value;
      uStackX_1c = uVar5;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_b0.NameAndInfo.Number = uVar5 & 0xffffbfff | 0xb000;
        local_b0.StatData.Pad[0] = '\x01';
        local_b0.StatData.Pad[1] = '\0';
        local_b0.StatData.Pad[2] = '\0';
        local_b0.StatData.Pad[3] = '\0';
        local_b0.StatData.Pad[4] = '\0';
        local_b0.StatData.Pad[5] = '\0';
        local_b0.StatData.Pad[6] = '\0';
        local_b0.StatData.Pad[7] = '\0';
        local_d8 = FVar2;
        local_b0.NameAndInfo.Index.Value = FVar16.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_b0);
        FStatsTrace::Add(&local_d8,-1);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
      auVar17[4] = '\0';
      auVar17[5] = '\0';
      auVar17[6] = '\0';
      auVar17[7] = '\0';
      auVar17._0_4_ = *(uint *)(pFVar15 + 8);
      if (auVar17 != (uchar  [8])0x0) {
        FVar11 = StatPtr_STAT_ExplicitViewDescriptors;
        if (StatPtr_STAT_ExplicitViewDescriptors ==
            (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)0x0) {
          pFVar7 = ::FName::FName(&local_68,"STAT_ExplicitViewDescriptors");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptors,
                              *pFVar7,L"Explicit view descriptors","STATGROUP_D3D12DescriptorHeap",
                              "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,
                              false,ST_int64,false,false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar11;
        FVar16 = FVar2.ComparisonIndex.Value;
        uVar5 = FVar2.Number;
        local_res20 = FVar16.Value;
        uStackX_24 = uVar5;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar9 == (FThreadStats *)0x0) {
            pFVar10 = FThreadStatsPool::Get();
            pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
          }
          local_a0.NameAndInfo.Number = uVar5 & 0xffffbfff | 0xb000;
          local_d0 = FVar2;
          local_a0.StatData.Pad = auVar17;
          local_a0.NameAndInfo.Index.Value = FVar16.Value;
          FThreadStats::AddStatMessage(pFVar9,&local_a0);
          pFVar7 = &local_d0;
LAB_1459f7f7d:
          FStatsTrace::Add(pFVar7,-(longlong)auVar17);
          if (pFVar9->ScopeCount == 0) {
            FThreadStats::Flush(pFVar9,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar9,false,false);
          }
        }
      }
    }
    else {
      FVar12 = StatPtr_STAT_ExplicitSamplerDescriptorHeaps;
      if (StatPtr_STAT_ExplicitSamplerDescriptorHeaps ==
          (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)0x0) {
        pFVar7 = ::FName::FName(&local_60,"STAT_ExplicitSamplerDescriptorHeaps");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_ExplicitSamplerDescriptorHeaps,*pFVar7,
                            L"Explicit sampler descriptor heaps","STATGROUP_D3D12DescriptorHeap",
                            "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false
                            ,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar12;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_90.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_90.StatData.Pad[0] = '\x01';
        local_90.StatData.Pad[1] = '\0';
        local_90.StatData.Pad[2] = '\0';
        local_90.StatData.Pad[3] = '\0';
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_c8 = FVar2;
        local_90.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_90);
        FStatsTrace::Add(&local_c8,-1);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
      auVar17[4] = '\0';
      auVar17[5] = '\0';
      auVar17[6] = '\0';
      auVar17[7] = '\0';
      auVar17._0_4_ = *(uint *)(pFVar15 + 8);
      if (auVar17 != (uchar  [8])0x0) {
        FVar13 = StatPtr_STAT_ExplicitSamplerDescriptors;
        if (StatPtr_STAT_ExplicitSamplerDescriptors ==
            (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)0x0) {
          pFVar7 = ::FName::FName(local_58,"STAT_ExplicitSamplerDescriptors");
          FVar13 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitSamplerDescriptors,
                              *pFVar7,L"Explicit sampler descriptors",
                              "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                              L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,
                              false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar13;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar9 == (FThreadStats *)0x0) {
            pFVar10 = FThreadStatsPool::Get();
            pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
          }
          local_80.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
          local_c0 = FVar2;
          local_80.StatData.Pad = auVar17;
          local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar9,&local_80);
          pFVar7 = &local_c0;
          goto LAB_1459f7f7d;
        }
      }
    }
    (**(code **)(**(longlong **)pFVar15 + 0x10))();
    uVar6 = (ulonglong)local_res10;
    pFVar15 = pFVar15 + 0x20;
  } while( true );
}

// AllocateHeap @ 145a01f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FEntry * __thiscall
FD3D12ExplicitDescriptorHeapCache::AllocateHeap
          (FD3D12ExplicitDescriptorHeapCache *this,FEntry *__return_storage_ptr__,
          D3D12_DESCRIPTOR_HEAP_TYPE param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uchar auVar14 [8];
  uchar auVar15 [8];
  FEntry *pFVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors> FVar21;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps> FVar22;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors> FVar23;
  uchar auVar24 [8];
  uint uVar25;
  uint uVar26;
  uchar auVar27 [8];
  wchar_t *pwVar28;
  uint uVar29;
  undefined1 auStackY_188 [32];
  FLLMScope local_11c;
  D3D12_DESCRIPTOR_HEAP_TYPE local_118;
  FEntry *local_110;
  ID3D12Object *local_108;
  FMemScope local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  D3D12_DESCRIPTOR_HEAP_TYPE local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118 = param_1;
  local_110 = __return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name90,L"RHIMisc/ExplicitDescriptorHeap");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_11c,LLMScope_Name90,false,None,Default,true);
  FMemScope::FMemScope(&local_100,&LLMScope_Name90,true);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar25 = 1;
  if (param_2 != 0) {
    uVar25 = param_2;
  }
  uVar2 = (ulonglong)(uVar25 - 1) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  auVar14._0_4_ = 1 << ((byte)lVar7 & 0x1f);
  auVar24[4] = '\0';
  auVar24[5] = '\0';
  auVar24[6] = '\0';
  auVar24[7] = '\0';
  auVar24[0] = (char)auVar14._0_4_;
  auVar24[1] = (char)(auVar14._0_4_ >> 8);
  auVar24[2] = (char)(auVar14._0_4_ >> 0x10);
  auVar24[3] = (char)(auVar14._0_4_ >> 0x18);
  auVar15[0] = '@';
  auVar15[1] = 'B';
  auVar15[2] = '\x0f';
  auVar15[3] = '\0';
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  if (param_1 == D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER) {
    auVar15[0] = '\0';
    auVar15[1] = '\b';
    auVar15[2] = '\0';
    auVar15[3] = '\0';
    auVar15[4] = '\0';
    auVar15[5] = '\0';
    auVar15[6] = '\0';
    auVar15[7] = '\0';
  }
  if ((ulonglong)auVar24 < (ulonglong)auVar15) {
    auVar14[4] = '\0';
    auVar14[5] = '\0';
    auVar14[6] = '\0';
    auVar14[7] = '\0';
    auVar15 = auVar14;
  }
  auVar27[0] = '\0';
  auVar27[1] = '\0';
  auVar27[2] = '\0';
  auVar27[3] = '\0';
  auVar27[4] = '\0';
  auVar27[5] = '\0';
  auVar27[6] = '\0';
  auVar27[7] = '\0';
  auVar14 = auVar27;
  if (auVar15 != (uchar  [8])0x0) {
    auVar14 = auVar15;
  }
  this->NumAllocatedEntries = this->NumAllocatedEntries + 1;
  __return_storage_ptr__->Heap = (ID3D12DescriptorHeap *)0x0;
  __return_storage_ptr__->NumDescriptors = 0;
  __return_storage_ptr__->Type = D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES;
  __return_storage_ptr__->LastUsedFrame = 0;
  __return_storage_ptr__->LastUsedTime = 0.0;
  uVar25 = auVar14._0_4_;
  auVar15 = auVar27;
  if (0 < (this->FreeList).ArrayNum) {
    do {
      uVar26 = auVar27._0_4_;
      uVar29 = ~uVar26 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar26 < (this->FreeList).ArrayNum) {
        uVar12 = uVar29;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FEntry *)(*pcVar8)();
        return pFVar16;
      }
      pFVar4 = (this->FreeList).AllocatorInstance.Data;
      if ((*(D3D12_DESCRIPTOR_HEAP_TYPE *)(pFVar4 + (longlong)auVar15 + 0xc) == local_118) &&
         (uVar25 <= *(uint *)(pFVar4 + (longlong)auVar15 + 8))) {
        uVar9 = *(undefined8 *)(pFVar4 + (longlong)auVar15 + 8);
        local_110->Heap = *(ID3D12DescriptorHeap **)(pFVar4 + (longlong)auVar15);
        local_110->NumDescriptors = (int)uVar9;
        local_110->Type = (int)((ulonglong)uVar9 >> 0x20);
        dVar10 = *(double *)(pFVar4 + (longlong)auVar15 + 0x10 + 8);
        local_110->LastUsedFrame = *(ulong64 *)(pFVar4 + (longlong)auVar15 + 0x10);
        local_110->LastUsedTime = dVar10;
        uVar25 = 0;
        if ((int)uVar26 < (this->FreeList).ArrayNum) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar16 = (FEntry *)(*pcVar8)();
          return pFVar16;
        }
        iVar3 = (this->FreeList).ArrayNum;
        pFVar4 = (this->FreeList).AllocatorInstance.Data;
        iVar13 = ~uVar26 + iVar3;
        if (1 < iVar13) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar26 * 0x20,pFVar4 + (longlong)(iVar3 - iVar13) * 0x20,
                  (longlong)iVar13 << 5);
        }
        piVar1 = &(this->FreeList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        goto LAB_145a027e3;
      }
      auVar27._0_4_ = uVar26 + 1;
      auVar27[4] = '\0';
      auVar27[5] = '\0';
      auVar27[6] = '\0';
      auVar27[7] = '\0';
      __return_storage_ptr__ = local_110;
      auVar15 = (uchar  [8])((longlong)auVar15 + 0x20);
      param_1 = local_118;
    } while ((int)auVar27._0_4_ < (this->FreeList).ArrayNum);
  }
  ReleaseStaleEntries(this,100,__real_40a00000);
  local_60 = 1;
  local_68 = param_1;
  local_64 = uVar25;
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FEntry *)(*pcVar8)();
    return pFVar16;
  }
  local_5c = 1;
  if (GVirtualMGPU == 0) {
    local_5c = *(undefined4 *)this->_padding_;
  }
  pwVar28 = L"Explicit Sampler Heap";
  local_108 = (ID3D12Object *)0x0;
  if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FEntry *)(*pcVar8)();
    return pFVar16;
  }
  lVar7 = this->_padding_;
  if ((*(longlong *)(lVar7 + 0x10) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FEntry *)(*pcVar8)();
    return pFVar16;
  }
  plVar5 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + 8);
  iVar13 = (**(code **)(*plVar5 + 0x70))
                     (plVar5,&local_68,&_GUID_8efb471d_616c_4f49_90f7_127bb763fa51,&local_108);
  if (iVar13 < 0) {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar13,
               "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(&D3D12Heap))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.cpp"
               ,0x83,(ID3D12Device *)0x0,&local_d8);
  }
  if (local_68 == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    pwVar28 = L"Explicit View Heap";
  }
  SetD3D12ObjectName(local_108,pwVar28);
  __return_storage_ptr__->NumDescriptors = uVar25;
  __return_storage_ptr__->Heap = (ID3D12DescriptorHeap *)local_108;
  __return_storage_ptr__->Type = param_1;
  if (local_68 == D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV) {
    FVar18 = StatPtr_STAT_ExplicitViewDescriptorHeaps;
    if (StatPtr_STAT_ExplicitViewDescriptorHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)0x0) {
      pFVar17 = ::FName::FName(&local_88,"STAT_ExplicitViewDescriptorHeaps");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptorHeaps,
                          *pFVar17,L"Explicit view descriptor heaps","STATGROUP_D3D12DescriptorHeap"
                          ,"STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar18;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_c8.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_c8.StatData.Pad[0] = '\x01';
      local_c8.StatData.Pad[1] = '\0';
      local_c8.StatData.Pad[2] = '\0';
      local_c8.StatData.Pad[3] = '\0';
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_f8 = FVar6;
      local_c8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_c8);
      FStatsTrace::Add(&local_f8,1);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
    if (auVar14 == (uchar  [8])0x0) goto LAB_145a027e3;
    FVar21 = StatPtr_STAT_ExplicitViewDescriptors;
    if (StatPtr_STAT_ExplicitViewDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)0x0) {
      pFVar17 = ::FName::FName(&local_80,"STAT_ExplicitViewDescriptors");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptors,
                          *pFVar17,L"Explicit view descriptors","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar21;
    if (((FVar6 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145a027e3;
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    local_b8.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_f0 = FVar6;
    local_b8.StatData.Pad = auVar14;
    local_b8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar19,&local_b8);
    pFVar17 = &local_f0;
  }
  else {
    FVar22 = StatPtr_STAT_ExplicitSamplerDescriptorHeaps;
    if (StatPtr_STAT_ExplicitSamplerDescriptorHeaps ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)0x0) {
      pFVar17 = ::FName::FName(&local_78,"STAT_ExplicitSamplerDescriptorHeaps");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitSamplerDescriptorHeaps,
                          *pFVar17,L"Explicit sampler descriptor heaps",
                          "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                          L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,false,false
                          ,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar22;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_a8.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_a8.StatData.Pad[0] = '\x01';
      local_a8.StatData.Pad[1] = '\0';
      local_a8.StatData.Pad[2] = '\0';
      local_a8.StatData.Pad[3] = '\0';
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_e8 = FVar6;
      local_a8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_a8);
      FStatsTrace::Add(&local_e8,1);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
    if (auVar14 == (uchar  [8])0x0) goto LAB_145a027e3;
    FVar23 = StatPtr_STAT_ExplicitSamplerDescriptors;
    if (StatPtr_STAT_ExplicitSamplerDescriptors ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)0x0) {
      pFVar17 = ::FName::FName(&local_70,"STAT_ExplicitSamplerDescriptors");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitSamplerDescriptors,
                          *pFVar17,L"Explicit sampler descriptors","STATGROUP_D3D12DescriptorHeap",
                          "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar23;
    if (((FVar6 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145a027e3;
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    local_98.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_e0 = FVar6;
    local_98.StatData.Pad = auVar14;
    local_98.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar19,&local_98);
    pFVar17 = &local_e0;
  }
  FStatsTrace::Add(pFVar17,(long64)auVar14);
  if (pFVar19->ScopeCount == 0) {
    FThreadStats::Flush(pFVar19,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar19,false,false);
  }
LAB_145a027e3:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(&local_11c);
  return local_110;
}

// DeferredReleaseHeap @ 145a10cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap
          (FD3D12ExplicitDescriptorHeapCache *this,FEntry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FD3D12DynamicRHI *pFVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FD3D12ExplicitDescriptorHeapCache *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  D3D12_DESCRIPTOR_HEAP_TYPE DStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  pFVar2 = FD3D12DynamicRHI::SingleD3DRHI;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (undefined4)param_1->LastUsedFrame;
  uStack_84 = *(undefined4 *)((longlong)&param_1->LastUsedFrame + 4);
  uStack_80 = *(undefined4 *)&param_1->LastUsedTime;
  uStack_7c = *(undefined4 *)((longlong)&param_1->LastUsedTime + 4);
  uStack_70 = *(undefined4 *)&param_1->Heap;
  uStack_6c = *(undefined4 *)((longlong)&param_1->Heap + 4);
  uStack_68 = param_1->NumDescriptors;
  DStack_64 = param_1->Type;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  local_78 = this;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = (pFVar2->ObjectsToDelete).ArrayNum;
  piVar1 = &(pFVar2->ObjectsToDelete).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(pFVar2->ObjectsToDelete).AllocatorInstance,piVar1);
  }
  (pFVar2->ObjectsToDelete).ArrayNum = iVar3 + 1;
  pFVar7 = (pFVar2->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  local_48 = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = (longlong)local_78;
  local_20[2] = CONCAT44(uStack_6c,uStack_70);
  local_20[3] = CONCAT44(DStack_64,uStack_68);
  local_20[4] = CONCAT44(uStack_5c,uStack_60);
  local_20[5] = CONCAT44(uStack_7c,uStack_80);
  if (local_20 + 1 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(undefined4 *)pFVar7 = 9;
  pcVar4 = ::operator_new(0x30);
  pcVar5 = (code *)0x0;
  if (pcVar4 != (code *)0x0) {
    *(code **)pcVar4 = local_48;
    *(longlong **)(pcVar4 + 0x28) = local_20;
    local_20 = (longlong *)0x0;
    *(undefined4 *)(pcVar4 + 0x10) = local_38;
    *(undefined4 *)(pcVar4 + 0x14) = uStack_34;
    *(undefined4 *)(pcVar4 + 0x18) = uStack_30;
    *(undefined4 *)(pcVar4 + 0x1c) = uStack_2c;
    *(longlong *)(pcVar4 + 0x20) = local_28;
    pcVar5 = pcVar4;
    if (*(longlong *)pcVar4 != 0) {
      local_48 = (code *)0x0;
    }
  }
  *(code **)(pFVar7 + 8) = pcVar5;
  if (local_48 != (code *)0x0) {
    plVar6 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar6 = local_20;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// FlushFreeList @ 145a16320

void __thiscall
FD3D12ExplicitDescriptorHeapCache::FlushFreeList(FD3D12ExplicitDescriptorHeapCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FD3D12DynamicRHI *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->FreeList).ArrayNum;
    pFVar8 = (this->FreeList).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x20;
    while( true ) {
      if ((this->FreeList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FD3D12ExplicitDescriptorHeapCache::FEntry,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      pFVar4 = FD3D12DynamicRHI::SingleD3DRHI;
      if (pFVar8 == pFVar7) {
        piVar1 = &(this->FreeList).ArrayMax;
        (this->FreeList).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
        }
                    /* WARNING: Could not recover jumptable at 0x000145a16438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      lpCriticalSection_00 = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) break;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar5 = (pFVar4->ObjectsToDelete).ArrayNum;
      piVar1 = &(pFVar4->ObjectsToDelete).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(pFVar4->ObjectsToDelete).AllocatorInstance,piVar1);
      }
      (pFVar4->ObjectsToDelete).ArrayNum = iVar5 + 1;
      uVar3 = *(undefined8 *)pFVar8;
      pFVar6 = (pFVar4->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(undefined4 *)pFVar6 = 1;
      *(undefined8 *)(pFVar6 + 8) = uVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pFVar8 = pFVar8 + 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseHeap @ 145a2ad40

void __thiscall
FD3D12ExplicitDescriptorHeapCache::ReleaseHeap
          (FD3D12ExplicitDescriptorHeapCache *this,FEntry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FEntry *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->NumAllocatedEntries == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumAllocatedEntries != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ExplicitDescriptorCache.cpp"
                        ,0x4e,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Parent != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x59,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = this->_padding_;
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentAdapter != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x41,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar3 + 0x548) == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("FrameFence",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                        ,0xff,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  param_1->LastUsedFrame = (longlong)(*(int *)(*(longlong *)(lVar3 + 0x548) + 0x58) + 1);
  QueryPerformanceCounter(&local_res8);
  param_1->LastUsedTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  pFVar4 = (FEntry *)(this->FreeList).AllocatorInstance.Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->FreeList).ArrayMax)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar13 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&(this->FreeList).AllocatorInstance,piVar1);
  }
  (this->FreeList).ArrayNum = iVar13 + 1;
  uVar7 = *(undefined4 *)((longlong)&param_1->Heap + 4);
  uVar8 = param_1->NumDescriptors;
  DVar9 = param_1->Type;
  pFVar5 = (this->FreeList).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar13 * 0x20;
  *(undefined4 *)pFVar2 = *(undefined4 *)&param_1->Heap;
  *(undefined4 *)(pFVar2 + 4) = uVar7;
  *(uint *)(pFVar2 + 8) = uVar8;
  *(D3D12_DESCRIPTOR_HEAP_TYPE *)(pFVar2 + 0xc) = DVar9;
  uVar7 = *(undefined4 *)((longlong)&param_1->LastUsedFrame + 4);
  uVar10 = *(undefined4 *)&param_1->LastUsedTime;
  uVar11 = *(undefined4 *)((longlong)&param_1->LastUsedTime + 4);
  pFVar5 = pFVar5 + (longlong)iVar13 * 0x20 + 0x10;
  *(int *)pFVar5 = (int)param_1->LastUsedFrame;
  *(undefined4 *)(pFVar5 + 4) = uVar7;
  *(undefined4 *)(pFVar5 + 8) = uVar10;
  *(undefined4 *)(pFVar5 + 0xc) = uVar11;
  this->NumAllocatedEntries = this->NumAllocatedEntries - 1;
                    /* WARNING: Could not recover jumptable at 0x000145a2af22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleaseStaleEntries @ 145a2b460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12ExplicitDescriptorHeapCache::ReleaseStaleEntries
          (FD3D12ExplicitDescriptorHeapCache *this,uint param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  FD3D12DynamicRHI *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors> FVar18;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps> FVar19;
  FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors> FVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  uchar auVar28 [8];
  uint local_res8;
  LARGE_INTEGER local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [6];
  
  uVar25 = (ulonglong)param_1;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(longlong *)(lVar2 + 0x548) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FrameFence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                          ,0xff,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar24 = (ulonglong)(*(int *)(*(longlong *)(lVar2 + 0x548) + 0x58) + 1);
  local_d0 = uVar24;
  QueryPerformanceCounter(&local_f8);
  uVar23 = 0;
  local_res8 = 0;
  dVar8 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  uVar27 = uVar23;
  local_c8 = uVar25;
  if (0 < (this->FreeList).ArrayNum) {
    do {
      uVar21 = (uint)uVar23;
      uVar26 = ~uVar21 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar21 < (this->FreeList).ArrayNum) {
        uVar11 = uVar26;
      }
      uVar22 = uVar21;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar22 = local_res8, bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (this->FreeList).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + uVar27 + 0x10) + uVar25 <= uVar24) ||
         ((double)param_2 + *(double *)(pFVar3 + uVar27 + 0x18) <= dVar8)) {
        if (*(int *)(pFVar3 + uVar27 + 0xc) == 0) {
          FVar15 = StatPtr_STAT_ExplicitViewDescriptorHeaps;
          if (StatPtr_STAT_ExplicitViewDescriptorHeaps ==
              (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)0x0) {
            pFVar14 = ::FName::FName(&local_80,"STAT_ExplicitViewDescriptorHeaps");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptorHeaps>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ExplicitViewDescriptorHeaps,*pFVar14,
                                L"Explicit view descriptor heaps","STATGROUP_D3D12DescriptorHeap",
                                "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,
                                false,ST_int64,false,false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar15;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar16 == (FThreadStats *)0x0) {
              pFVar17 = FThreadStatsPool::Get();
              pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
            }
            local_c0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_c0.StatData.Pad[0] = '\x01';
            local_c0.StatData.Pad[1] = '\0';
            local_c0.StatData.Pad[2] = '\0';
            local_c0.StatData.Pad[3] = '\0';
            local_c0.StatData.Pad[4] = '\0';
            local_c0.StatData.Pad[5] = '\0';
            local_c0.StatData.Pad[6] = '\0';
            local_c0.StatData.Pad[7] = '\0';
            local_f0 = FVar4;
            local_c0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&local_c0);
            FStatsTrace::Add(&local_f0,-1);
            if (pFVar16->ScopeCount == 0) {
              FThreadStats::Flush(pFVar16,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar16,false,false);
            }
          }
          auVar28[4] = '\0';
          auVar28[5] = '\0';
          auVar28[6] = '\0';
          auVar28[7] = '\0';
          auVar28._0_4_ = *(uint *)(pFVar3 + uVar27 + 8);
          if (auVar28 != (uchar  [8])0x0) {
            FVar18 = StatPtr_STAT_ExplicitViewDescriptors;
            if (StatPtr_STAT_ExplicitViewDescriptors ==
                (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)0x0) {
              pFVar14 = ::FName::FName(&local_78,"STAT_ExplicitViewDescriptors");
              FVar18 = (FThreadSafeStaticStat<FStat_STAT_ExplicitViewDescriptors>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitViewDescriptors
                                  ,*pFVar14,L"Explicit view descriptors",
                                  "STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced",
                                  L"D3D12RHI: Descriptor Heap (GPU Visible)",true,false,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar4 = *(FName *)FVar18;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar16 == (FThreadStats *)0x0) {
                pFVar17 = FThreadStatsPool::Get();
                pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
              }
              local_b0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
              local_e8 = FVar4;
              local_b0.StatData.Pad = auVar28;
              local_b0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar16,&local_b0);
              pFVar14 = &local_e8;
LAB_145a2bab2:
              FStatsTrace::Add(pFVar14,-(longlong)auVar28);
              if (pFVar16->ScopeCount == 0) {
                FThreadStats::Flush(pFVar16,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar16,false,false);
              }
            }
          }
        }
        else {
          FVar19 = StatPtr_STAT_ExplicitSamplerDescriptorHeaps;
          if (StatPtr_STAT_ExplicitSamplerDescriptorHeaps ==
              (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)0x0) {
            pFVar14 = ::FName::FName(&local_70,"STAT_ExplicitSamplerDescriptorHeaps");
            FVar19 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptorHeaps>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_ExplicitSamplerDescriptorHeaps,*pFVar14,
                                L"Explicit sampler descriptor heaps","STATGROUP_D3D12DescriptorHeap"
                                ,"STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,
                                false,ST_int64,false,false,MCR_Invalid);
          }
          FVar4 = *(FName *)FVar19;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar16 == (FThreadStats *)0x0) {
              pFVar17 = FThreadStatsPool::Get();
              pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
            }
            local_a0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_a0.StatData.Pad[0] = '\x01';
            local_a0.StatData.Pad[1] = '\0';
            local_a0.StatData.Pad[2] = '\0';
            local_a0.StatData.Pad[3] = '\0';
            local_a0.StatData.Pad[4] = '\0';
            local_a0.StatData.Pad[5] = '\0';
            local_a0.StatData.Pad[6] = '\0';
            local_a0.StatData.Pad[7] = '\0';
            local_e0 = FVar4;
            local_a0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar16,&local_a0);
            FStatsTrace::Add(&local_e0,-1);
            if (pFVar16->ScopeCount == 0) {
              FThreadStats::Flush(pFVar16,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar16,false,false);
            }
          }
          auVar28[4] = '\0';
          auVar28[5] = '\0';
          auVar28[6] = '\0';
          auVar28[7] = '\0';
          auVar28._0_4_ = *(uint *)(pFVar3 + uVar27 + 8);
          if (auVar28 != (uchar  [8])0x0) {
            FVar20 = StatPtr_STAT_ExplicitSamplerDescriptors;
            if (StatPtr_STAT_ExplicitSamplerDescriptors ==
                (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)0x0) {
              pFVar14 = ::FName::FName(local_68,"STAT_ExplicitSamplerDescriptors");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_ExplicitSamplerDescriptors>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_ExplicitSamplerDescriptors,*pFVar14,
                                  L"Explicit sampler descriptors","STATGROUP_D3D12DescriptorHeap",
                                  "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true
                                  ,false,ST_int64,false,false,MCR_Invalid);
            }
            FVar4 = *(FName *)FVar20;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar16 == (FThreadStats *)0x0) {
                pFVar17 = FThreadStatsPool::Get();
                pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
              }
              local_90.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
              local_d8 = FVar4;
              local_90.StatData.Pad = auVar28;
              local_90.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar16,&local_90);
              pFVar14 = &local_d8;
              goto LAB_145a2bab2;
            }
          }
        }
        pFVar9 = FD3D12DynamicRHI::SingleD3DRHI;
        lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar12 = (pFVar9->ObjectsToDelete).ArrayNum;
        piVar1 = &(pFVar9->ObjectsToDelete).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&(pFVar9->ObjectsToDelete).AllocatorInstance,piVar1);
        }
        (pFVar9->ObjectsToDelete).ArrayNum = iVar12 + 1;
        pFVar5 = (pFVar9->ObjectsToDelete).AllocatorInstance.Data;
        uVar6 = *(undefined8 *)(pFVar3 + uVar27);
        *(undefined4 *)(pFVar5 + (longlong)iVar12 * 0x30) = 1;
        *(undefined8 *)(pFVar5 + (longlong)iVar12 * 0x30 + 8) = uVar6;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar11 = 0;
        if ((int)local_res8 < (this->FreeList).ArrayNum) {
          uVar11 = uVar26;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->FreeList).ArrayNum;
        iVar13 = ~uVar21 + iVar12;
        pFVar3 = (this->FreeList).AllocatorInstance.Data;
        if (1 < iVar13) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
          memmove(pFVar3 + uVar27,pFVar3 + (longlong)(iVar12 - iVar13) * 0x20,(longlong)iVar13 << 5)
          ;
        }
        piVar1 = &(this->FreeList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar24 = local_d0;
        uVar25 = local_c8;
      }
      else {
        local_res8 = uVar22 + 1;
        uVar27 = uVar27 + 0x20;
      }
      uVar23 = (ulonglong)local_res8;
    } while ((int)local_res8 < (this->FreeList).ArrayNum);
  }
  return;
}

