// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FUploadingVirtualTexture @ 1489b3e10

/* WARNING: Enum "Type": Some values do not have unique names */

FUploadingVirtualTexture * __thiscall
FUploadingVirtualTexture::FUploadingVirtualTexture
          (FUploadingVirtualTexture *this,FName *param_1,FVirtualTextureBuiltData *param_2,
          int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar5;
  FName FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FStreamingManagerCollection *this_01;
  FVirtualTextureChunkStreamingManager *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  ulong64 uVar15;
  FThreadSafeStaticStat<FStat_STAT_TotalDiskSize> FVar16;
  FThreadSafeStaticStat<FStat_STAT_NumTileHeaders> FVar17;
  ForElementType<unsigned_int> FVar18;
  uchar auVar19 [8];
  uint uVar20;
  uchar auVar21 [8];
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FUploadingVirtualTexture__6B_;
  piVar1 = &(this->CodecPerChunk).ArrayNum;
  piVar2 = &(this->CodecPerChunk).ArrayMax;
  this->Name = *param_1;
  piVar3 = &(this->HandlePerChunk).ArrayNum;
  this->Data = param_2;
  piVar4 = &(this->HandlePerChunk).ArrayMax;
  *piVar3 = 0;
  (this->HandlePerChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  (this->CodecPerChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->InvalidChunks).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->InvalidChunks).NumBits = 0;
  (this->InvalidChunks).MaxBits = 0x80;
  this->FirstMipOffset = param_3;
  iVar9 = (param_2->Chunks).ArrayNum;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar9,&(this->HandlePerChunk).AllocatorInstance,piVar3,piVar4);
  memset((this->HandlePerChunk).AllocatorInstance.Data + (longlong)iVar7 * 8,0,(longlong)iVar9 << 3)
  ;
  iVar9 = (param_2->Chunks).ArrayNum;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar9,&(this->CodecPerChunk).AllocatorInstance,piVar1,piVar2);
  memset((this->CodecPerChunk).AllocatorInstance.Data + (longlong)iVar7 * 8,0,(longlong)iVar9 << 3);
  iVar9 = (param_2->Chunks).ArrayNum;
  this_00 = &this->InvalidChunks;
  (this->InvalidChunks).NumBits = iVar9;
  uVar8 = iVar9 + 0x1f;
  uVar20 = uVar8 >> 5;
  if (uVar8 >> 5 != 0) {
    if ((this->InvalidChunks).MaxBits + 0x1fU >> 5 < uVar20) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar20,4);
      (this->InvalidChunks).MaxBits = uVar20 << 5;
    }
    FVar18 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<unsigned_int>)0x0) {
      FVar18 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar18,0,(ulonglong)uVar20 << 2);
    iVar9 = (this->InvalidChunks).NumBits;
    uVar20 = iVar9 >> 0x1f & 0x1f;
    uVar8 = iVar9 + uVar20;
    iVar9 = (uVar8 & 0x1f) - uVar20;
    if (iVar9 != 0) {
      FVar18 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
      if (FVar18 == (ForElementType<unsigned_int>)0x0) {
        FVar18 = (ForElementType<unsigned_int>)this_00;
      }
      puVar5 = (uint *)((longlong)FVar18 + (longlong)((int)uVar8 >> 5) * 4);
      *puVar5 = *puVar5 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
  }
  this_01 = IStreamingManager::Get();
  pFVar10 = FStreamingManagerCollection::GetVirtualTextureStreamingManager(this_01);
  this->StreamingManager = pFVar10;
  uVar8 = FVirtualTextureBuiltData::GetMemoryFootprint(param_2);
  auVar19[4] = '\0';
  auVar19[5] = '\0';
  auVar19[6] = '\0';
  auVar19[7] = '\0';
  auVar19[0] = (char)uVar8;
  auVar19[1] = (char)(uVar8 >> 8);
  auVar19[2] = (char)(uVar8 >> 0x10);
  auVar19[3] = (char)(uVar8 >> 0x18);
  if (uVar8 != 0) {
    FVar12 = StatPtr_STAT_TotalHeaderSize;
    if (StatPtr_STAT_TotalHeaderSize == (FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize>)0x0) {
      pFVar11 = ::FName::FName(&local_res8,"STAT_TotalHeaderSize");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalHeaderSize,*pFVar11,
                          L"Total Header Size","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar12;
    local_res8 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_38.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_res8 = FVar6;
      local_38.StatData.Pad = auVar19;
      local_38.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar19);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  uVar15 = FVirtualTextureBuiltData::GetDiskMemoryFootprint(param_2);
  auVar19 = (uchar  [8])(uVar15 >> 0x14);
  if (auVar19 != (uchar  [8])0x0) {
    FVar16 = StatPtr_STAT_TotalDiskSize;
    if (StatPtr_STAT_TotalDiskSize == (FThreadSafeStaticStat<FStat_STAT_TotalDiskSize>)0x0) {
      pFVar11 = ::FName::FName(&local_res8,"STAT_TotalDiskSize");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_TotalDiskSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalDiskSize,*pFVar11,
                          L"Total Disk Size (MB)","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar16;
    local_res8 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_38.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_res8 = FVar6;
      local_38.StatData.Pad = auVar19;
      local_38.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar19);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  auVar21[4] = '\0';
  auVar21[5] = '\0';
  auVar21[6] = '\0';
  auVar21[7] = '\0';
  auVar21._0_4_ = (param_2->TileOffsetInChunk).ArrayNum;
  if (auVar21 != (uchar  [8])0x0) {
    FVar17 = StatPtr_STAT_NumTileHeaders;
    if (StatPtr_STAT_NumTileHeaders == (FThreadSafeStaticStat<FStat_STAT_NumTileHeaders>)0x0) {
      pFVar11 = ::FName::FName(&local_res8,"STAT_NumTileHeaders");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_NumTileHeaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumTileHeaders,*pFVar11,
                          L"Num Tile Headers","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar17;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar6;
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_38.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_res8 = FVar6;
      local_38.StatData.Pad = auVar21;
      local_38.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar21);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return this;
}

// ~FUploadingVirtualTexture @ 1489b96d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUploadingVirtualTexture::~FUploadingVirtualTexture(FUploadingVirtualTexture *this)

{
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  FVirtualTextureCodec *this_00;
  ForElementType<unsigned_int> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  ulong64 uVar13;
  FThreadSafeStaticStat<FStat_STAT_TotalDiskSize> FVar14;
  FThreadSafeStaticStat<FStat_STAT_NumTileHeaders> FVar15;
  FScriptContainerElement *pFVar16;
  uchar auVar17 [8];
  uchar auVar18 [8];
  FNameEntryId FVar19;
  uint local_res8;
  uint uStackX_c;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  this->_padding_ = (longlong)&___7FUploadingVirtualTexture__6B_;
  if (this->Data == (FVirtualTextureBuiltData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                       ,0x4e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar8 = FVirtualTextureBuiltData::GetMemoryFootprint(this->Data);
  auVar17[4] = '\0';
  auVar17[5] = '\0';
  auVar17[6] = '\0';
  auVar17[7] = '\0';
  auVar17[0] = (char)uVar8;
  auVar17[1] = (char)(uVar8 >> 8);
  auVar17[2] = (char)(uVar8 >> 0x10);
  auVar17[3] = (char)(uVar8 >> 0x18);
  if (uVar8 != 0) {
    FVar10 = StatPtr_STAT_TotalHeaderSize;
    if (StatPtr_STAT_TotalHeaderSize == (FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize>)0x0) {
      pFVar9 = ::FName::FName(&local_98,"STAT_TotalHeaderSize");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_TotalHeaderSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalHeaderSize,*pFVar9,
                          L"Total Header Size","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    FVar19 = FVar2.ComparisonIndex.Value;
    uVar8 = FVar2.Number;
    local_res8 = FVar19.Value;
    uStackX_c = uVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_80.NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
      local_res10 = FVar2;
      local_80.StatData.Pad = auVar17;
      local_80.NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_80);
      FStatsTrace::Add(&local_res10,-(longlong)auVar17);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  uVar13 = FVirtualTextureBuiltData::GetDiskMemoryFootprint(this->Data);
  auVar17 = (uchar  [8])(uVar13 >> 0x14);
  if (auVar17 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_TotalDiskSize;
    if (StatPtr_STAT_TotalDiskSize == (FThreadSafeStaticStat<FStat_STAT_TotalDiskSize>)0x0) {
      pFVar9 = ::FName::FName(&local_90,"STAT_TotalDiskSize");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_TotalDiskSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalDiskSize,*pFVar9,
                          L"Total Disk Size (MB)","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    FVar19 = FVar2.ComparisonIndex.Value;
    uVar8 = FVar2.Number;
    local_res8 = FVar19.Value;
    uStackX_c = uVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_70.NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_70.StatData.Pad = auVar17;
      local_70.NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_70);
      FStatsTrace::Add(&local_res18,-(longlong)auVar17);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18._0_4_ = (this->Data->TileOffsetInChunk).ArrayNum;
  if (auVar18 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_NumTileHeaders;
    if (StatPtr_STAT_NumTileHeaders == (FThreadSafeStaticStat<FStat_STAT_NumTileHeaders>)0x0) {
      pFVar9 = ::FName::FName(&local_88,"STAT_NumTileHeaders");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_NumTileHeaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumTileHeaders,*pFVar9,
                          L"Num Tile Headers","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar15;
    FVar19 = FVar2.ComparisonIndex.Value;
    uVar8 = FVar2.Number;
    local_res8 = FVar19.Value;
    uStackX_c = uVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_60[0].NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
      local_res20 = FVar2;
      local_60[0].StatData.Pad = auVar18;
      local_60[0].NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(pFVar11,local_60);
      FStatsTrace::Add(&local_res20,-(longlong)auVar18);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  pFVar16 = (this->CodecPerChunk).AllocatorInstance.Data;
  iVar1 = (this->CodecPerChunk).ArrayNum;
  pFVar5 = pFVar16 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->CodecPerChunk).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TUniquePtr<FVirtualTextureCodec,TDefaultDelete<FVirtualTextureCodec>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar16 == pFVar5) break;
    plVar3 = *(longlong **)pFVar16;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        *(longlong *)(*plVar3 + 8) = plVar3[1];
      }
      if ((longlong *)plVar3[1] != (longlong *)0x0) {
        *(longlong *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      this_00 = *(FVirtualTextureCodec **)pFVar16;
      if (this_00 != (FVirtualTextureCodec *)0x0) {
        *(undefined8 *)pFVar16 = 0;
        FVirtualTextureCodec::~FVirtualTextureCodec(this_00);
        ::operator_delete(this_00,0x70);
      }
    }
    pFVar16 = pFVar16 + 8;
  }
  FVar4 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<TUniquePtr<FVirtualTextureCodec,TDefaultDelete<FVirtualTextureCodec>_>,int>
            ((TUniquePtr<FVirtualTextureCodec,TDefaultDelete<FVirtualTextureCodec>_> *)
             (this->CodecPerChunk).AllocatorInstance.Data,(this->CodecPerChunk).ArrayNum);
  pFVar5 = (this->CodecPerChunk).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TUniquePtr<IFileCacheHandle,TDefaultDelete<IFileCacheHandle>_>,int>
            ((TUniquePtr<IFileCacheHandle,TDefaultDelete<IFileCacheHandle>_> *)
             (this->HandlePerChunk).AllocatorInstance.Data,(this->HandlePerChunk).ArrayNum);
  pFVar5 = (this->HandlePerChunk).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// DumpToConsole @ 1489d7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUploadingVirtualTexture::DumpToConsole(FUploadingVirtualTexture *this,bool param_1)

{
  ulonglong uVar1;
  FVirtualTextureBuiltData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FString *pFVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  undefined1 *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (((((3 < (byte)LogConsoleResponse._0_1_) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
        3 < (byte)LogConsoleResponse._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
       3 < (byte)LogConsoleResponse._0_1_)) &&
      (((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
        3 < (byte)LogConsoleResponse._0_1_ &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
        3 < (byte)LogConsoleResponse._0_1_)) &&
       ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
        3 < (byte)LogConsoleResponse._0_1_ &&
        ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
         3 < (byte)LogConsoleResponse._0_1_ &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
         3 < (byte)LogConsoleResponse._0_1_)))))))) &&
     (UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Chunks___i_151c015d8,
                 (FLogCategoryBase *)&LogConsoleResponse), 3 < (byte)LogConsoleResponse._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  pFVar2 = this->Data;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar13 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar9 = (pFVar2->Chunks).ArrayNum;
  pFVar10 = (pFVar2->Chunks).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar9 * 0x90;
  while( true ) {
    if ((pFVar2->Chunks).ArrayNum != iVar9) {
      local_108 = 0;
      `TCheckedPointerIterator<FVirtualTextureDataChunk,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_108);
    }
    uVar15 = local_60;
    if (pFVar10 == pFVar12) break;
    pFVar6 = FBulkData::GetDebugName((FBulkData *)(pFVar10 + 0x20),&local_98);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,
               (FString *)local_d0,(bool *)pFVar6);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 0x90;
  }
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar11 = *puVar14;
    local_e0 = 0;
    uVar13 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)(int)uVar13;
      local_e0 = local_e0 + 0x20;
      uVar13 = uVar13 + 1;
      uStack_e4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_1489d7b02;
      uVar11 = puVar14[lVar8 + 1];
    }
    uStack_f4 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_f4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_d0._4_4_ = (undefined4)lVar8;
    uStack_e4 = (local_e0 - 1) + local_d0._4_4_;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_1489d7b02:
  local_100 = local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_d8 = local_88._8_4_ - local_54;
  uVar11 = local_60 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,uVar13);
  iVar9 = (int)local_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar7 = (byte)local_60;
  uStack_f8 = uVar13;
  uStack_dc = uStack_e4;
  local_d0._8_8_ = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar15 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar13 = -1 << (bVar7 & 0x1f) & puVar14[iVar9];
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar15 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1489d7c10;
      uVar13 = puVar14[lVar8 + 1];
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar11;
    if ((int)local_60 < (int)uVar15) {
      uVar15 = local_60;
    }
  }
LAB_1489d7c10:
  while( true ) {
    uVar4 = local_d0._8_8_;
    if (*(int *)(local_d0._8_8_ + 8) - *(int *)(local_d0._8_8_ + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_107);
    }
    if (((TStack_c0.CurrentBitIndex == uVar15) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       ((undefined1 *)uVar4 == local_88)) break;
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// GatherProducePageDataTasks @ 1489e4640

void __thiscall
FUploadingVirtualTexture::GatherProducePageDataTasks
          (FUploadingVirtualTexture *this,FVirtualTextureProducerHandle *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FVirtualTextureTranscodeCache::GatherProducePageDataTasks
            (&this->StreamingManager->TranscodeCache,param_1,param_2);
  return;
}

// GatherProducePageDataTasks @ 1489e4660

void __thiscall
FUploadingVirtualTexture::GatherProducePageDataTasks
          (FUploadingVirtualTexture *this,ulong64 param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FVirtualTextureChunkStreamingManager *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uStackX_14;
  
  pFVar1 = this->StreamingManager;
  uVar9 = (uint)param_1;
  if (uVar9 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskIndex >= LIST_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x13f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = 0;
  if ((int)uVar9 < (pFVar1->TranscodeCache).Tasks.ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (pFVar1->TranscodeCache).Tasks.AllocatorInstance.Data;
  uStackX_14 = (uint)(param_1 >> 0x20);
  if (*(ushort *)(pFVar2 + (longlong)(int)uVar9 * 0x40 + 0x38) != uStackX_14) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEntry.Magic == InHandle.Magic",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                       ,0x141,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x40 + 8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
    UNLOCK();
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    FVar4 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    *(longlong *)((longlong)param_2 + (longlong)iVar8 * 8) = lVar3;
  }
  return;
}

// GetCodecForChunk @ 1489e6ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FVTCodecAndStatus * __thiscall
FUploadingVirtualTexture::GetCodecForChunk
          (FUploadingVirtualTexture *this,FVTCodecAndStatus *__return_storage_ptr__,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,uint param_2,EVTRequestPagePriority param_3)

{
  FThreadSafeCounter *pFVar1;
  atomic<unsigned_int> *paVar2;
  FName *pFVar3;
  atomic<unsigned_int> aVar4;
  FScriptContainerElement *pFVar5;
  FName this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FVTCodecAndStatus *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NumCodecs> FVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  longlong lVar18;
  FUploadingVirtualTexture *pFVar19;
  bool bVar20;
  undefined1 auStackY_138 [32];
  EExtendedTaskPriority local_d8;
  ETaskPriority local_d7 [7];
  FName local_d0;
  uint local_c8;
  FName local_c0;
  FUploadingVirtualTexture *local_b8;
  FVTDataAndStatus local_b0;
  FName local_a0;
  FStatMessage local_98;
  FName local_88;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar18 = (longlong)(int)param_2;
  bVar20 = -1 < CpuChannel->Enabled;
  local_c8 = param_2;
  local_b8 = this;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId281,"FUploadingVirtualTexture::GetCodecForChunk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
               ,0x119);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId281);
  }
  local_d0 = (FName)this->Data;
  uVar8 = 0;
  if ((int)param_2 < (((FVirtualTextureBuiltData *)local_d0)->Chunks).ArrayNum) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FVTCodecAndStatus *)(*pcVar6)();
    return pFVar11;
  }
  local_d0 = (FName)((longlong)
                     (((TArray<FVirtualTextureDataChunk,TSizedDefaultAllocator<32>_> *)
                      ((longlong)local_d0 + 0xa8))->AllocatorInstance).Data + lVar18 * 0x90 + 0x60);
  if (*(uint *)local_d0 < 5) {
    __return_storage_ptr__->Codec = (FVirtualTextureCodec *)0x0;
    __return_storage_ptr__->Status = Available;
    goto LAB_1489e75c7;
  }
  uVar8 = 0;
  if ((int)param_2 < (this->CodecPerChunk).ArrayNum) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FVTCodecAndStatus *)(*pcVar6)();
    return pFVar11;
  }
  pFVar19 = local_b8;
  pFVar5 = (this->CodecPerChunk).AllocatorInstance.Data;
  pFVar3 = (FName *)(pFVar5 + lVar18 * 8);
  lVar18 = *(longlong *)(pFVar5 + lVar18 * 8);
  if (lVar18 != 0) {
    lVar18 = *(longlong *)(lVar18 + 0x10);
    if ((lVar18 == 0) || (*(char *)(lVar18 + 0xd0) != '\0')) {
      iVar10 = 1;
    }
    else {
      FVar16 = (param_1->AllocatorInstance).SecondaryData;
      FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)*pFVar3 + 0x10);
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar15 = FVar16;
      }
      if ((ulonglong)FVar15 <= (ulonglong)FVar17) {
        FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
        if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar15 = FVar16;
        }
        if (((ulonglong)FVar17 < (ulonglong)((longlong)FVar15 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FVTCodecAndStatus *)(*pcVar6)();
          return pFVar11;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar16 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar16;
      }
      iVar10 = 0;
      *(undefined8 *)((longlong)param_1 + (longlong)iVar9 * 8) = 0;
      lVar18 = *(longlong *)FVar17;
      *(longlong *)((longlong)param_1 + (longlong)iVar9 * 8) = lVar18;
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
        UNLOCK();
      }
    }
    FVar14 = *pFVar3;
    if (*(longlong *)FVar14 != 0) {
      *(longlong *)(*(longlong *)FVar14 + 8) = *(longlong *)((longlong)FVar14 + 8);
    }
    if (*(longlong **)((longlong)FVar14 + 8) != (longlong *)0x0) {
      **(longlong **)((longlong)FVar14 + 8) = *(longlong *)FVar14;
    }
    *(longlong *)FVar14 = 0;
    *(longlong *)((longlong)FVar14 + 8) = 0;
    FVirtualTextureCodec::LinkGlobalTail((FVirtualTextureCodec *)*pFVar3);
    *(uint *)((longlong)*pFVar3 + 100) = GFrameNumberRenderThread;
    __return_storage_ptr__->Codec = (FVirtualTextureCodec *)*pFVar3;
    __return_storage_ptr__->Status = iVar10 + Pending;
    goto LAB_1489e75c7;
  }
  local_80.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 4;
  ReadData(local_b8,&local_b0,&local_80,param_2,0,(ulonglong)*(uint *)local_d0,param_3);
  if (local_b0.Status - Pending < 2) {
    FVar13 = StatPtr_STAT_NumCodecs;
    if (StatPtr_STAT_NumCodecs == (FThreadSafeStaticStat<FStat_STAT_NumCodecs>)0x0) {
      pFVar12 = ::FName::FName(&local_88,"STAT_NumCodecs");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_NumCodecs>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumCodecs,*pFVar12,
                          L"Num Codecs","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar14 = *(FName *)FVar13;
    local_d0 = FVar14;
    local_c0 = FVar14;
    if (((FVar14 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_98.NameAndInfo.Index = local_c0.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar14.Number & 0xffffafff | 0xa000;
      local_98.StatData.Pad[0] = '\x01';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_a0 = FVar14;
      FThreadStats::AddStatMessage(this_01,&local_98);
      FStatsTrace::Add(&local_a0,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
        pFVar19 = local_b8;
      }
      else {
        pFVar19 = local_b8;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
          pFVar19 = local_b8;
        }
      }
    }
    FVirtualTextureCodec::NumCodecs = FVirtualTextureCodec::NumCodecs + 1;
    FVar14 = (FName)::operator_new(0x70);
    if (FVar14 != (FName)0x0) {
      *(FUploadingVirtualTexture **)((longlong)FVar14 + 0x18) = (FUploadingVirtualTexture *)0x0;
      *(undefined8 *)((longlong)FVar14 + 0x68) = 0;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar14 + 0x10))->Reference = (FBaseGraphTask *)0x0
      ;
      *(undefined8 *)FVar14 = 0;
      *(longlong *)((longlong)FVar14 + 8) = 0;
      *(void **)((longlong)FVar14 + 0x20) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x28) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x30) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x38) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x40) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x48) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x50) = (void *)0x0;
      *(void **)((longlong)FVar14 + 0x58) = (void *)0x0;
      *(undefined8 *)((longlong)FVar14 + 0x60) = 0;
    }
    this_00 = *pFVar3;
    if ((this_00 != FVar14) && (*pFVar3 = FVar14, this_00 != (FName)0x0)) {
      FVirtualTextureCodec::~FVirtualTextureCodec((FVirtualTextureCodec *)this_00);
      ::operator_delete((void *)this_00,0x70);
    }
    FVirtualTextureCodec::LinkGlobalTail((FVirtualTextureCodec *)*pFVar3);
    *(FUploadingVirtualTexture **)((longlong)*pFVar3 + 0x18) = pFVar19;
    *(uint *)((longlong)*pFVar3 + 0x60) = local_c8;
    *(uint *)((longlong)*pFVar3 + 100) = GFrameNumberRenderThread;
    local_c0 = *pFVar3;
    FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    if (FVar14 == (FName)0x0) {
      FVar14.ComparisonIndex.Value = 0;
      FVar14.Number = 0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)FVar14,&local_80);
      *(undefined ***)FVar14 = &___7__TGraphTask_UFCreateCodecTask____6B_;
    }
    ((FTaskBase *)((longlong)FVar14 + 0xd8))->_padding_ = (longlong)local_b0.Data.Reference;
    if (local_b0.Data.Reference != (IMemoryReadStream *)0x0) {
      LOCK();
      ((local_b0.Data.Reference)->NumRefs).Counter =
           ((local_b0.Data.Reference)->NumRefs).Counter + 1;
      UNLOCK();
    }
    ((FTaskBase *)((longlong)FVar14 + 0xd8))->_padding_ = (longlong)local_c0;
    UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_d7,&local_d8);
    UE::Tasks::Private::FTaskBase::Init((FTaskBase *)FVar14,L"GraphTask",local_d7[0],local_d8,None);
    if (FVar14 != (FName)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar14 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar14 + 0x30) + 1);
      UNLOCK();
    }
    local_c0 = FVar14;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar14,0xe8);
    TRefCountPtr<FBaseGraphTask>::operator=
              ((TRefCountPtr<FBaseGraphTask> *)((longlong)*pFVar3 + 0x10),
               (TRefCountPtr<FBaseGraphTask> *)&local_c0);
    if (local_c0 != (FName)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned_int> *)((longlong)local_c0 + 0x30);
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_c0)(local_c0,1);
      }
    }
    FVar16 = (param_1->AllocatorInstance).SecondaryData;
    local_d0 = (FName)((longlong)*pFVar3 + 0x10);
    FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
    if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar15 = FVar16;
    }
    if ((ulonglong)FVar15 <= (ulonglong)local_d0) {
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar15 = FVar16;
      }
      if (((ulonglong)local_d0 < (ulonglong)((longlong)FVar15 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FVTCodecAndStatus *)(*pcVar6)();
        return pFVar11;
      }
    }
    iVar10 = param_1->ArrayNum;
    if (iVar10 == param_1->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar10 + 1;
    FVar16 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar16 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar16;
    }
    *(undefined8 *)((longlong)param_1 + (longlong)iVar10 * 8) = 0;
    lVar18 = *(longlong *)local_d0;
    *(longlong *)((longlong)param_1 + (longlong)iVar10 * 8) = lVar18;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->Codec = (FVirtualTextureCodec *)*pFVar3;
    __return_storage_ptr__->Status = Pending;
    if (local_b0.Data.Reference != (IMemoryReadStream *)0x0) {
      LOCK();
      pFVar1 = &(local_b0.Data.Reference)->NumRefs;
      iVar10 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar10 == 1) {
        lVar18 = (local_b0.Data.Reference)->_padding_;
        goto LAB_1489e759f;
      }
    }
  }
  else {
    __return_storage_ptr__->Status = local_b0.Status;
    __return_storage_ptr__->Codec = (FVirtualTextureCodec *)0x0;
    if (local_b0.Data.Reference != (IMemoryReadStream *)0x0) {
      LOCK();
      pFVar1 = &(local_b0.Data.Reference)->NumRefs;
      iVar10 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar10 == 1) {
        lVar18 = (local_b0.Data.Reference)->_padding_;
LAB_1489e759f:
        (**(code **)(lVar18 + 0x20))(local_b0.Data.Reference,1);
      }
    }
  }
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar16 = local_80.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar16,local_80.ArrayNum);
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
LAB_1489e75c7:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetLocalMipBias @ 1489e9ff0

uint __thiscall
FUploadingVirtualTexture::GetLocalMipBias(FUploadingVirtualTexture *this,uchar param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  bVar5 = param_1 + (char)this->FirstMipOffset;
  uVar2 = (ulonglong)param_2;
  uVar6 = (uint)bVar5;
  uVar1 = this->Data->NumMips;
  do {
    if (uVar1 <= uVar6) {
LAB_1489ea066:
      return uVar6 - bVar5;
    }
    bVar3 = FVirtualTextureBuiltData::IsValidAddress(this->Data,uVar6,(uint)uVar2);
    if (!bVar3) {
      uVar6 = uVar1 - 1;
      goto LAB_1489ea066;
    }
    uVar4 = FVirtualTextureBuiltData::GetTileOffset(this->Data,uVar6,(uint)uVar2,0);
    if (uVar4 != 0xffffffff) goto LAB_1489ea066;
    uVar6 = uVar6 + 1;
    uVar2 = uVar2 >> 2;
  } while( true );
}

// IsPageStreamed @ 1489f96d0

bool __thiscall
FUploadingVirtualTexture::IsPageStreamed(FUploadingVirtualTexture *this,uchar param_1,uint param_2)

{
  return true;
}

// ProducePageData @ 148a03140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FUploadingVirtualTexture::ProducePageData
          (FUploadingVirtualTexture *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VTP_NumUploads> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IVirtualTextureFinalizer *pIVar4;
  uint uVar5;
  FName local_res8;
  FStatMessage local_38;
  
  uVar5 = 0;
  if (FThreadStats::bPrimaryEnable) {
    FVar3 = StatPtr_STAT_VTP_NumUploads;
    if (StatPtr_STAT_VTP_NumUploads == (FThreadSafeStaticStat<FStat_STAT_VTP_NumUploads>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_VTP_NumUploads");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_VTP_NumUploads>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VTP_NumUploads,*pFVar2,
                         L"Num uploads","STATGROUP_VTP","STATCAT_Advanced",
                         L"Virtual Texturing Paging",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_38.StatData.Pad[0] = '\x01';
      local_38.StatData.Pad[1] = '\0';
      local_38.StatData.Pad[2] = '\0';
      local_38.StatData.Pad[3] = '\0';
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_res8 = FVar1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((param_3 & SkipPageBorders) != None) {
    uVar5 = this->Data->TileBorderSize;
  }
  pIVar4 = FVirtualTextureChunkStreamingManager::ProduceTile
                     (this->StreamingManager,param_1,uVar5,(uchar)this->Data->NumLayers,param_5,
                      param_8,param_9);
  return pIVar4;
}

// ReadData @ 148a03da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FVTDataAndStatus * __thiscall
FUploadingVirtualTexture::ReadData
          (FUploadingVirtualTexture *this,FVTDataAndStatus *__return_storage_ptr__,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,uint param_2,ulong64 param_3,ulong64 param_4,EVTRequestPagePriority param_5)

{
  FThreadSafeCounter *pFVar1;
  uint *puVar2;
  undefined8 uVar3;
  FVirtualTextureBuiltData *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  IFileCacheHandle *pIVar7;
  FName FVar8;
  longlong *plVar9;
  code *pcVar10;
  uchar auVar11 [8];
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TEventRef<unsigned_int> TVar16;
  FVTDataAndStatus *pFVar17;
  long64 lVar18;
  IAsyncReadFileHandle *pIVar19;
  IFileCacheHandle *pIVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_FileCacheSize> FVar22;
  FThreadSafeStaticStat<FStat_STAT_IORequestsComplete> FVar23;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FWriteBuffer *pFVar24;
  FBulkData *this_02;
  ForElementType<unsigned_int> FVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStackY_158 [32];
  TRefCountPtr<IMemoryReadStream> local_e0;
  long64 local_d8;
  undefined8 local_d0;
  ulong64 local_c8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_c0;
  FName local_b8;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  FName local_90;
  FString local_88;
  undefined4 *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_c8 = param_3;
  lVar27 = (longlong)(int)param_2;
  local_c0 = param_1;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId328,"FUploadingVirtualTexture::ReadData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
               ,0x148);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId328);
  }
  if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
    local_d0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_d0;
  }
  else {
    TVar16 = FStringTrace::GetNameRef(&local_a0);
  }
  uVar3 = *(undefined8 *)TVar16;
  bVar12 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>((TLogScope<0> *)&local_78)
    ;
    bVar12 = true;
    *local_78 = (int)uVar3;
    *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
  }
  pFVar4 = this->Data;
  local_d8 = CONCAT44(local_d8._4_4_,~param_2 >> 0x1f);
  uVar14 = 0;
  if ((int)param_2 < (pFVar4->Chunks).ArrayNum) {
    uVar14 = ~param_2 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
    return pFVar17;
  }
  this_02 = (FBulkData *)((pFVar4->Chunks).AllocatorInstance.Data + lVar27 * 0x90 + 0x20);
  iVar15 = 0;
  if ((int)param_2 < (this->HandlePerChunk).ArrayNum) {
    iVar15 = (int)local_d8;
  }
  if ((iVar15 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
    return pFVar17;
  }
  pFVar5 = (this->HandlePerChunk).AllocatorInstance.Data;
  if (*(longlong *)(pFVar5 + lVar27 * 8) == 0) {
    local_d8 = FBulkData::GetBulkDataOffsetInFile(this_02);
    lVar18 = FBulkData::GetBulkDataSize(this_02);
    uVar14 = (int)param_2 >> 0x1f;
    if (lVar18 == 0) {
      if ((((int)param_2 < 0) || ((this->InvalidChunks).NumBits <= (int)param_2)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
        return pFVar17;
      }
      FVar6 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
      FVar25 = (ForElementType<unsigned_int>)&this->InvalidChunks;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = FVar6;
      }
      uVar26 = 1 << ((byte)param_2 & 0x1f);
      lVar27 = (longlong)((int)(param_2 + (uVar14 & 0x1f)) >> 5);
      if ((*(uint *)((longlong)FVar25 + lVar27 * 4) & uVar26) == 0) {
        if (3 < (byte)LogConsoleResponse._0_1_) {
          FBulkData::GetDebugName(this_02,&local_88);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        if ((((int)param_2 < 0) || ((this->InvalidChunks).NumBits <= (int)param_2)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
          return pFVar17;
        }
        FVar6 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
        FVar25 = (ForElementType<unsigned_int>)&this->InvalidChunks;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar6;
        }
        puVar2 = (uint *)((longlong)FVar25 + lVar27 * 4);
        *puVar2 = *puVar2 | uVar26;
      }
      (__return_storage_ptr__->Data).Reference = (IMemoryReadStream *)0x0;
      __return_storage_ptr__->Status = Invalid;
      goto LAB_148a04505;
    }
    pIVar19 = FBulkData::OpenAsyncReadHandle(this_02);
    pIVar20 = IFileCacheHandle::CreateFileCacheHandle(pIVar19,local_d8);
    pIVar7 = *(IFileCacheHandle **)(pFVar5 + lVar27 * 8);
    if ((pIVar7 != pIVar20) &&
       (*(IFileCacheHandle **)(pFVar5 + lVar27 * 8) = pIVar20, pIVar7 != (IFileCacheHandle *)0x0)) {
      (**(code **)*pIVar7)();
    }
    if (*(longlong *)(pFVar5 + lVar27 * 8) == 0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7881391586616016479>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                          ,0x1a1,"Handle.IsValid()");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
        return pFVar17;
      }
      if ((((int)param_2 < 0) || ((this->InvalidChunks).NumBits <= (int)param_2)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
        return pFVar17;
      }
      FVar6 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
      FVar25 = (ForElementType<unsigned_int>)&this->InvalidChunks;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = FVar6;
      }
      if ((*(uint *)((longlong)FVar25 + (longlong)((int)(param_2 + (uVar14 & 0x1f)) >> 5) * 4) >>
           (param_2 & 0x1f) & 1) == 0) {
        if (3 < (byte)LogConsoleResponse._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        }
        if ((((int)param_2 < 0) || ((this->InvalidChunks).NumBits <= (int)param_2)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
          return pFVar17;
        }
        FVar6 = (this->InvalidChunks).AllocatorInstance.SecondaryData;
        FVar25 = (ForElementType<unsigned_int>)&this->InvalidChunks;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar6;
        }
        puVar2 = (uint *)((longlong)FVar25 + (longlong)((int)(param_2 + (uVar14 & 0x1f)) >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)param_2 & 0x1f);
      }
      (__return_storage_ptr__->Data).Reference = (IMemoryReadStream *)0x0;
      __return_storage_ptr__->Status = Invalid;
      goto LAB_148a04505;
    }
    FVar22 = StatPtr_STAT_FileCacheSize;
    if (StatPtr_STAT_FileCacheSize == (FThreadSafeStaticStat<FStat_STAT_FileCacheSize>)0x0) {
      pFVar21 = ::FName::FName(&local_98,"STAT_FileCacheSize");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_FileCacheSize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheSize,*pFVar21,
                          L"File Cache Size","STATGROUP_VirtualTextureMemory","STATCAT_Advanced",
                          L"Virtual Texture Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar22;
    lVar18 = IFileCacheHandle::GetFileCacheSize();
    FThreadStats::AddMessage<__int64>(FVar8,Set,lVar18,false);
  }
  plVar9 = *(longlong **)(pFVar5 + lVar27 * 8);
  pcVar10 = *(code **)(*plVar9 + 8);
  if (((param_5 != Normal) && (param_5 != High)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                          ,0x34,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    pFVar17 = (FVTDataAndStatus *)(*pcVar10)();
    return pFVar17;
  }
  (*pcVar10)(plVar9,&local_e0,local_c0,local_c8);
  if (local_e0.Reference == (IMemoryReadStream *)0x0) {
    (__return_storage_ptr__->Data).Reference = (IMemoryReadStream *)0x0;
    __return_storage_ptr__->Status = Saturated;
  }
  else {
    auVar11 = (uchar  [8])(double)((float)param_4 * __real_35800000);
    if (((double)auVar11 != 0.0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar23 = StatPtr_STAT_IORequestsComplete;
      if (StatPtr_STAT_IORequestsComplete ==
          (FThreadSafeStaticStat<FStat_STAT_IORequestsComplete>)0x0) {
        pFVar21 = ::FName::FName(&local_90,"STAT_IORequestsComplete");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_IORequestsComplete>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IORequestsComplete,*pFVar21,
                            L"IO Requests Completed (MB)","STATGROUP_VirtualTexturing",
                            "STATCAT_Advanced",L"Virtual Texturing",true,true,NumBits,false,false,
                            MCR_Invalid);
      }
      FVar8 = *(FName *)FVar23;
      if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_b0.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
        local_b8 = FVar8;
        local_b0.StatData.Pad = auVar11;
        local_b0.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_b0);
        FStatsTrace::Add(&local_b8,(double)auVar11);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    (__return_storage_ptr__->Data).Reference = local_e0.Reference;
    if (local_e0.Reference != (IMemoryReadStream *)0x0) {
      LOCK();
      ((local_e0.Reference)->NumRefs).Counter = ((local_e0.Reference)->NumRefs).Counter + 1;
      UNLOCK();
    }
    __return_storage_ptr__->Status = Pending;
    if (local_e0.Reference != (IMemoryReadStream *)0x0) {
      LOCK();
      pFVar1 = &(local_e0.Reference)->NumRefs;
      iVar15 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if ((iVar15 == 1) && (local_e0.Reference != (IMemoryReadStream *)0x0)) {
        (**(code **)((local_e0.Reference)->_padding_ + 0x20))(local_e0.Reference,1);
      }
    }
  }
LAB_148a04505:
  if (bVar12) {
    lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar27 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar24 = *(FWriteBuffer **)(lVar27 + 0x20);
    if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
      pFVar24 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar24->Cursor = '\n';
    pFVar24->Cursor = pFVar24->Cursor + 1;
    pFVar24->Committed = pFVar24->Cursor;
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// RequestPageData @ 148a0e660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FUploadingVirtualTexture::RequestPageData
          (FUploadingVirtualTexture *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FVTRequestPageResult *pFVar4;
  
  iVar2 = this->FirstMipOffset;
  if (0xffffffff < param_5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("vAddress <= ((uint32) 0xffffffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\UploadingVirtualTexture.cpp"
                       ,0x83,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVTRequestPageResult *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVirtualTextureChunkStreamingManager::RequestTile
            (this->StreamingManager,__return_storage_ptr__,param_1,this,param_2,param_3,
             param_4 + (char)iVar2,(uint)param_5,param_6);
  return __return_storage_ptr__;
}

