// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FSlateShaderResourceManager @ 1424eb210

FSlateShaderResourceManager * __thiscall
FSlateShaderResourceManager::FSlateShaderResourceManager(FSlateShaderResourceManager *this)

{
  this->_padding_ = (longlong)&___7FSlateShaderResourceManager__6B_;
  *(undefined8 *)&this->ResourceMap = 0;
  *(undefined8 *)&(this->ResourceMap).field_0x8 = 0;
  *(undefined8 *)&(this->ResourceMap).field_0x20 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x28 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResourceMap).field_0x34 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ResourceMap).field_0x40 = 0;
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  return this;
}

// ~FSlateShaderResourceManager @ 1424ecc30

void __thiscall
FSlateShaderResourceManager::~FSlateShaderResourceManager(FSlateShaderResourceManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSlateShaderResourceManager__6B_;
  ClearTextureMap(this);
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResourceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResourceMap);
  return;
}

// ClearTextureMap @ 142504640

void __thiscall FSlateShaderResourceManager::ClearTextureMap(FSlateShaderResourceManager *this)

{
  TMap<FName,FSlateShaderResourceProxy_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>_>
  *this_00;
  undefined1 *puVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->ResourceMap;
  TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar2 = *(void **)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18);
      if (pvVar2 != (void *)0x0) {
        if (*(undefined8 **)((longlong)pvVar2 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)((longlong)pvVar2 + 0x20) = 0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar2 + 0x28));
        ::operator_delete(pvVar2,0x30);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar3 = 1 < *(int *)&(this->ResourceMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ResourceMap).field_0xc;
  *(undefined4 *)&(this->ResourceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ResourceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->ResourceMap).field_0x2c;
  *(undefined4 *)&(this->ResourceMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ResourceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ResourceMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ResourceMap).field_0x48 = 1;
    TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetFontShaderResource @ 14250d7c0

FSlateShaderResource * __thiscall
FSlateShaderResourceManager::GetFontShaderResource
          (FSlateShaderResourceManager *this,int param_1,FSlateShaderResource *param_2,
          UObject *param_3)

{
  return param_2;
}

// GetResourceHandle @ 14250ece0

FSlateResourceHandle * __thiscall
FSlateShaderResourceManager::GetResourceHandle
          (FSlateShaderResourceManager *this,FSlateResourceHandle *__return_storage_ptr__,
          FSlateBrush *param_1)

{
  (**(code **)(this->_padding_ + 0x18))();
  return __return_storage_ptr__;
}

// GetResourceHandle @ 14250ed20

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateResourceHandle * __thiscall
FSlateShaderResourceManager::GetResourceHandle
          (FSlateShaderResourceManager *this,FSlateResourceHandle *__return_storage_ptr__,
          FSlateBrush *param_1,TVector2<float> param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateGetResourceHandle> FVar8;
  FName FVar9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  LARGE_INTEGER LVar12;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  LVar12._0_4_ = 0;
  LVar12._4_4_ = 0;
  FVar8 = StatPtr_STAT_SlateGetResourceHandle;
  if (StatPtr_STAT_SlateGetResourceHandle ==
      (FThreadSafeStaticStat<FStat_STAT_SlateGetResourceHandle>)0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_SlateGetResourceHandle");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateGetResourceHandle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetResourceHandle,*pFVar7,
                       L"GetResourceHandle Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar8;
  bVar4 = false;
  bVar6 = false;
  if ((LVar15.s.LowPart != 0) || (LVar15.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ShaderResourceManager.cpp"
                   ,0x23);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar15;
      FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
      bVar5 = true;
      goto LAB_14250ee80;
    }
  }
  bVar5 = false;
  LVar15._0_4_ = 0;
  LVar15._4_4_ = 0;
LAB_14250ee80:
  FVar9 = (FName)(**(code **)(this->_padding_ + 8))(this,param_1,param_2.field0_0x0,param_3);
  LVar11 = (LARGE_INTEGER)(param_1->ResourceHandle).Data.Object;
  LVar10 = LVar12;
  LVar14 = LVar12;
  if ((FName)LVar11.QuadPart != (FName)0x0) {
    LVar10 = LVar11;
    LVar14 = *(LARGE_INTEGER *)LVar11;
  }
  local_48.NameAndInfo.Index.Value = LVar15.s.LowPart;
  if (FVar9 == (FName)LVar14.QuadPart) {
    (__return_storage_ptr__->Data).Object = (FSlateSharedHandleData *)LVar10;
    pTVar3 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    if ((FName)LVar15.QuadPart == (FName)0x0) {
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
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
    QueryPerformanceCounter(&local_res8);
    local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
    FThreadStats::AddStatMessage(this_00,&local_48);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    LVar11 = LVar12;
    if (FVar9 != (FName)0x0) {
      if (*(longlong *)((longlong)FVar9 + 0x20) == 0) {
        LVar11 = (LARGE_INTEGER)::operator_new(8);
        if ((FName)LVar11.QuadPart != (FName)0x0) {
          *(FName *)LVar11 = FVar9;
          LVar12 = LVar11;
        }
        local_res8 = LVar12;
        TSharedPtr<FSlateSharedHandleData,1>::operator=<FSlateSharedHandleData>
                  ((TSharedPtr<FSlateSharedHandleData,1> *)((longlong)FVar9 + 0x20),
                   (TRawPtrProxy<FSlateSharedHandleData> *)&local_res8.s);
      }
      LVar11 = (LARGE_INTEGER)((LARGE_INTEGER *)((longlong)FVar9 + 0x28))->QuadPart;
      LVar12 = *(LARGE_INTEGER *)((longlong)FVar9 + 0x20);
      if ((FName)LVar11.QuadPart != (FName)0x0) {
        LOCK();
        *(int *)(LVar11.QuadPart + 8) = *(int *)(LVar11.QuadPart + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    (__return_storage_ptr__->Data).Object = (FSlateSharedHandleData *)LVar12;
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)LVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    if ((FName)LVar15.QuadPart == (FName)0x0) {
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
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
    QueryPerformanceCounter(&local_res8);
    local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
    FThreadStats::AddStatMessage(this_00,&local_48);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

