// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSlateTextureData @ 1486947a0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateTextureData * __thiscall
FSlateTextureData::FSlateTextureData
          (FSlateTextureData *this,uchar *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int *piVar5;
  uint uVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_28;
  
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar5 = &(this->Bytes).ArrayNum;
  piVar1 = &(this->Bytes).ArrayMax;
  *piVar1 = 0;
  this->Width = param_2;
  *piVar5 = 0;
  this->Height = param_3;
  this->BytesPerPixel = param_4;
  uVar6 = param_2 * param_3 * param_4;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar6,(ForAnyElementType *)this,piVar5,piVar1);
  }
  if (param_1 != (uchar *)0x0) {
    memcpy((this->Bytes).AllocatorInstance.Data,param_1,(ulonglong)uVar6);
  }
  auVar7 = (uchar  [8])(longlong)*piVar1;
  if (auVar7 != (uchar  [8])0x0) {
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
    FVar2 = *(FName *)FVar4;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
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

