// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// FSlateTextureData @ 145fe7aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateTextureData * __thiscall
FSlateTextureData::FSlateTextureData
          (FSlateTextureData *this,uint param_1,uint param_2,uint param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FStatMessage local_28;
  
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Bytes).ArrayMax;
  iVar2 = param_4->ArrayNum;
  _Src = (param_4->AllocatorInstance).Data;
  (this->Bytes).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Bytes).AllocatorInstance.Data,_Src,(longlong)iVar2);
  }
  this->Width = param_1;
  this->Height = param_2;
  this->BytesPerPixel = param_3;
  auVar6 = (uchar  [8])(longlong)*piVar1;
  if (auVar6 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_SlateTextureDataMemory;
    if (StatPtr_STAT_SlateTextureDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
      pFVar4 = ::FName::FName((FName *)&param_4,"STAT_SlateTextureDataMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,*pFVar4,
                         L"Texture Data Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    pTVar3 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)FVar5;
    if (((pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4 = pTVar3;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = (uint)((ulonglong)pTVar3 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pTVar3;
      local_28.StatData.Pad = auVar6;
      local_28.NameAndInfo.Index.Value = (uint)pTVar3;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return this;
}

// FSlateTextureData @ 145fe7cb0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateTextureData * __thiscall
FSlateTextureData::FSlateTextureData
          (FSlateTextureData *this,uint param_1,uint param_2,uint param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FStatMessage local_28;
  
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Bytes).ArrayMax;
  iVar2 = param_4->ArrayNum;
  _Src = (param_4->AllocatorInstance).Data;
  (this->Bytes).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Bytes).AllocatorInstance.Data,_Src,(longlong)iVar2);
  }
  this->Width = param_1;
  this->Height = param_2;
  this->BytesPerPixel = param_3;
  auVar6 = (uchar  [8])(longlong)*piVar1;
  if (auVar6 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_SlateTextureDataMemory;
    if (StatPtr_STAT_SlateTextureDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
      pFVar4 = ::FName::FName((FName *)&param_4,"STAT_SlateTextureDataMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,*pFVar4,
                         L"Texture Data Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    pTVar3 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)FVar5;
    if (((pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4 = pTVar3;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = (uint)((ulonglong)pTVar3 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pTVar3;
      local_28.StatData.Pad = auVar6;
      local_28.NameAndInfo.Index.Value = (uint)pTVar3;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return this;
}

// ~FSlateTextureData @ 145fea550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateTextureData::~FSlateTextureData(FSlateTextureData *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar5 [8];
  FName local_res8;
  FStatMessage local_28;
  
  auVar5 = (uchar  [8])(longlong)(this->Bytes).ArrayMax;
  if (auVar5 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_SlateTextureDataMemory;
    if (StatPtr_STAT_SlateTextureDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateTextureDataMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,*pFVar3,
                         L"Texture Data Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar5;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

