// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 48

// FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> @ 142a4fe30

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> * __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,
          TRefCountPtr<FPakFile_const_> *param_1,FPakEntry *param_2,
          TFunction<FSharedPakReader___cdecl(void)> *param_3)

{
  longlong lVar1;
  FPakFile *pFVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar6;
  FName local_res8;
  FStatMessage local_18;
  
  *(undefined ***)this =
       &___7__FPakFileHandle_V__FPakCompressedReaderPolicy_VFPakNoEncryption______6B_;
  this->ReadPos = 0;
  (this->Reader).PakFile = param_1->Reference;
  FPakEntry::FPakEntry(&(this->Reader).PakEntry,param_2);
  lVar1 = *(longlong *)param_3;
  *(longlong *)&(this->Reader).AcquirePakReader = lVar1;
  *(undefined8 *)&(this->Reader).AcquirePakReader.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  (this->PakFile).Reference = (FPakFile *)0x0;
  pFVar2 = param_1->Reference;
  (this->PakFile).Reference = pFVar2;
  if (pFVar2 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    UNLOCK();
  }
  FVar5 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar4,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar5;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_18.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> @ 142a50020

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> * __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,
          TRefCountPtr<FPakFile_const_> *param_1,FPakEntry *param_2,
          TFunction<FSharedPakReader___cdecl(void)> *param_3)

{
  longlong lVar1;
  FPakFile *pFVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar6;
  FName local_res8;
  FStatMessage local_18;
  
  *(undefined ***)this =
       &___7__FPakFileHandle_V__FPakCompressedReaderPolicy_VFPakSimpleEncryption______6B_;
  this->ReadPos = 0;
  (this->Reader).PakFile = param_1->Reference;
  FPakEntry::FPakEntry(&(this->Reader).PakEntry,param_2);
  lVar1 = *(longlong *)param_3;
  *(longlong *)&(this->Reader).AcquirePakReader = lVar1;
  *(undefined8 *)&(this->Reader).AcquirePakReader.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  (this->PakFile).Reference = (FPakFile *)0x0;
  pFVar2 = param_1->Reference;
  (this->PakFile).Reference = pFVar2;
  if (pFVar2 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    UNLOCK();
  }
  FVar5 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar4,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar5;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_18.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> @ 142a50210

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> * __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,
          TRefCountPtr<FPakFile_const_> *param_1,FPakEntry *param_2,
          TFunction<FSharedPakReader___cdecl(void)> *param_3)

{
  int iVar1;
  FPakFile *pFVar2;
  FName FVar3;
  longlong lVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar7;
  longlong lVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this = &___7__FPakFileHandle_V__FPakReaderPolicy_VFPakNoEncryption______6B_;
  this->ReadPos = 0;
  (this->Reader).PakFile = param_1->Reference;
  FPakEntry::FPakEntry(&(this->Reader).PakEntry,param_2);
  lVar8 = *(longlong *)param_3;
  *(longlong *)&(this->Reader).AcquirePakReader = lVar8;
  *(undefined8 *)&(this->Reader).AcquirePakReader.field_0x28 = 0;
  if (lVar8 != 0) {
    puVar7 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  lVar8 = 0x30;
  iVar1 = (((this->Reader).PakFile)->Info).Version;
  if ((2 < iVar1) && (lVar8 = 0x35, (this->Reader).PakEntry.CompressionMethodIndex != 0)) {
    lVar8 = (longlong)(this->Reader).PakEntry.CompressionBlocks.ArrayNum * 0x10 + 0x39;
  }
  lVar4 = lVar8 + 8;
  if (1 < iVar1) {
    lVar4 = lVar8;
  }
  (this->Reader).OffsetToFile = lVar4 + (this->Reader).PakEntry.Offset;
  (this->PakFile).Reference = (FPakFile *)0x0;
  pFVar2 = param_1->Reference;
  (this->PakFile).Reference = pFVar2;
  if (pFVar2 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    UNLOCK();
  }
  FVar6 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar5,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar6;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> @ 142a50440

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> * __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,
          TRefCountPtr<FPakFile_const_> *param_1,FPakEntry *param_2,
          TFunction<FSharedPakReader___cdecl(void)> *param_3)

{
  int iVar1;
  FPakFile *pFVar2;
  FName FVar3;
  longlong lVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar7;
  longlong lVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this = &___7__FPakFileHandle_V__FPakReaderPolicy_VFPakSimpleEncryption______6B_;
  this->ReadPos = 0;
  (this->Reader).PakFile = param_1->Reference;
  FPakEntry::FPakEntry(&(this->Reader).PakEntry,param_2);
  lVar8 = *(longlong *)param_3;
  *(longlong *)&(this->Reader).AcquirePakReader = lVar8;
  *(undefined8 *)&(this->Reader).AcquirePakReader.field_0x28 = 0;
  if (lVar8 != 0) {
    puVar7 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  lVar8 = 0x30;
  iVar1 = (((this->Reader).PakFile)->Info).Version;
  if ((2 < iVar1) && (lVar8 = 0x35, (this->Reader).PakEntry.CompressionMethodIndex != 0)) {
    lVar8 = (longlong)(this->Reader).PakEntry.CompressionBlocks.ArrayNum * 0x10 + 0x39;
  }
  lVar4 = lVar8 + 8;
  if (1 < iVar1) {
    lVar4 = lVar8;
  }
  (this->Reader).OffsetToFile = lVar4 + (this->Reader).PakEntry.Offset;
  (this->PakFile).Reference = (FPakFile *)0x0;
  pFVar2 = param_1->Reference;
  (this->PakFile).Reference = pFVar2;
  if (pFVar2 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    UNLOCK();
  }
  FVar6 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar5,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar6;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> @ 142a54500

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::
~FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this)

{
  FName FVar1;
  FPakFile *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this =
       &___7__FPakFileHandle_V__FPakCompressedReaderPolicy_VFPakNoEncryption______6B_;
  FVar7 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar6,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar2 = (this->PakFile).Reference;
  if (pFVar2 != (FPakFile *)0x0) {
    plVar3 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if (*(longlong *)&(this->Reader).AcquirePakReader != 0) {
    plVar3 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar8 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->Reader).PakEntry.CompressionBlocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined ***)this = &___7IFileHandle__6B_;
  return;
}

// ~FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> @ 142a54700

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::
~FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this)

{
  FName FVar1;
  FPakFile *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this =
       &___7__FPakFileHandle_V__FPakCompressedReaderPolicy_VFPakSimpleEncryption______6B_;
  FVar7 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar6,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar2 = (this->PakFile).Reference;
  if (pFVar2 != (FPakFile *)0x0) {
    plVar3 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if (*(longlong *)&(this->Reader).AcquirePakReader != 0) {
    plVar3 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar8 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->Reader).PakEntry.CompressionBlocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined ***)this = &___7IFileHandle__6B_;
  return;
}

// ~FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> @ 142a54900

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::
~FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this)

{
  FName FVar1;
  FPakFile *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this = &___7__FPakFileHandle_V__FPakReaderPolicy_VFPakNoEncryption______6B_;
  FVar7 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar6,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar2 = (this->PakFile).Reference;
  if (pFVar2 != (FPakFile *)0x0) {
    plVar3 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if (*(longlong *)&(this->Reader).AcquirePakReader != 0) {
    plVar3 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar8 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->Reader).PakEntry.CompressionBlocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined ***)this = &___7IFileHandle__6B_;
  return;
}

// ~FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> @ 142a54b00

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::
~FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this)

{
  FName FVar1;
  FPakFile *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar8;
  FName local_res8;
  FStatMessage local_28;
  
  *(undefined ***)this = &___7__FPakFileHandle_V__FPakReaderPolicy_VFPakSimpleEncryption______6B_;
  FVar7 = StatPtr_STAT_PakFile_NumOpenHandles;
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar6 = ::FName::FName(&local_res8,"STAT_PakFile_NumOpenHandles");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar6,
                       L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",
                       L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pFVar2 = (this->PakFile).Reference;
  if (pFVar2 != (FPakFile *)0x0) {
    plVar3 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if (*(longlong *)&(this->Reader).AcquirePakReader != 0) {
    plVar3 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar8 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->Reader).PakEntry.CompressionBlocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined ***)this = &___7IFileHandle__6B_;
  return;
}

// Flush @ 142a71690

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Flush
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,bool param_1)

{
  return false;
}

// Flush @ 142a716a0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Flush
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,bool param_1)

{
  return false;
}

// Flush @ 142a716b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Flush
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,bool param_1)

{
  return false;
}

// Flush @ 142a716c0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Flush
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,bool param_1)

{
  return false;
}

// Read @ 142a8f740

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Read
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  bool bVar1;
  
  bVar1 = ReadInternal(this,param_1,param_2,this->ReadPos);
  if (bVar1) {
    this->ReadPos = this->ReadPos + param_2;
    return true;
  }
  return false;
}

// Read @ 142a8f790

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Read
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  bool bVar1;
  
  bVar1 = ReadInternal(this,param_1,param_2,this->ReadPos);
  if (bVar1) {
    this->ReadPos = this->ReadPos + param_2;
    return true;
  }
  return false;
}

// Read @ 142a8f7e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Read
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,long64 param_2)

{
  bool bVar1;
  
  bVar1 = ReadInternal(this,param_1,param_2,this->ReadPos);
  if (bVar1) {
    this->ReadPos = this->ReadPos + param_2;
    return true;
  }
  return false;
}

// Read @ 142a8f830

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Read
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  bool bVar1;
  
  bVar1 = ReadInternal(this,param_1,param_2,this->ReadPos);
  if (bVar1) {
    this->ReadPos = this->ReadPos + param_2;
    return true;
  }
  return false;
}

// ReadAt @ 142a8fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::ReadAt
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER LStack_d8;
  FPakFile *pFStack_d0;
  FSimpleScopeSecondsStat FStack_c8;
  FPakEntry FStack_a8;
  ulonglong uStack_58;
  
  if (((param_2 < 0) || (param_3 < 0)) ||
     ((this->Reader).PakEntry.UncompressedSize < param_2 + param_3)) {
    return false;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FStack_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&LStack_d8.s,"STAT_PakFile_Read");
    FStack_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  FStack_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&LStack_d8);
  FStack_c8.StartTime =
       (double)LStack_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FStack_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    FStack_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_a8.CompressionBlocks.ArrayNum = 0;
    FStack_a8.CompressionBlocks.ArrayMax = 0;
    FStack_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    FStack_a8.Size = _UNK_15076adc8;
    FStack_a8.UncompressedSize = 0;
    FStack_a8.Hash[0] = '\0';
    FStack_a8.Hash[1] = '\0';
    FStack_a8.Hash[2] = '\0';
    FStack_a8.Hash[3] = '\0';
    FStack_a8.Hash[4] = '\0';
    FStack_a8.Hash[5] = '\0';
    FStack_a8.Hash[6] = '\0';
    FStack_a8.Hash[7] = '\0';
    FStack_a8.Hash[8] = '\0';
    FStack_a8.Hash[9] = '\0';
    FStack_a8.Hash[10] = '\0';
    FStack_a8.Hash[0xb] = '\0';
    FStack_a8.Hash[0xc] = '\0';
    FStack_a8.Hash[0xd] = '\0';
    FStack_a8.Hash[0xe] = '\0';
    FStack_a8.Hash[0xf] = '\0';
    FStack_a8.Hash[0x10] = '\0';
    FStack_a8.Hash[0x11] = '\0';
    FStack_a8.Hash[0x12] = '\0';
    FStack_a8.Hash[0x13] = '\0';
    FStack_a8.CompressionBlockSize = 0;
    FStack_a8.CompressionMethodIndex = 0;
    FStack_a8.Flags = '\0';
    FStack_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&LStack_d8,uVar5);
    (**(code **)(*(longlong *)LStack_d8 + 0x1b8))(LStack_d8.QuadPart,(this->Reader).PakEntry.Offset)
    ;
    FPakEntry::Serialize(&FStack_a8,(FArchive *)LStack_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&FStack_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
        LStack_d8.QuadPart = 0;
      }
      if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a91475;
    }
    if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
      LStack_d8.QuadPart = 0;
    }
    if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a91475:
    if (param_3 + param_2 <= (this->Reader).PakEntry.UncompressedSize) {
      FPakCompressedReaderPolicy<FPakNoEncryption>::Serialize(&this->Reader,param_3,param_1,param_2)
      ;
      bVar3 = true;
      goto LAB_142a914b7;
    }
  }
  bVar3 = false;
LAB_142a914b7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&FStack_c8);
  return bVar3;
}

// ReadAt @ 142a8fa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::ReadAt
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER LStack_d8;
  FPakFile *pFStack_d0;
  FSimpleScopeSecondsStat FStack_c8;
  FPakEntry FStack_a8;
  ulonglong uStack_58;
  
  if (((param_2 < 0) || (param_3 < 0)) ||
     ((this->Reader).PakEntry.UncompressedSize < param_2 + param_3)) {
    return false;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FStack_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&LStack_d8.s,"STAT_PakFile_Read");
    FStack_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  FStack_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&LStack_d8);
  FStack_c8.StartTime =
       (double)LStack_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FStack_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    FStack_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_a8.CompressionBlocks.ArrayNum = 0;
    FStack_a8.CompressionBlocks.ArrayMax = 0;
    FStack_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    FStack_a8.Size = _UNK_15076adc8;
    FStack_a8.UncompressedSize = 0;
    FStack_a8.Hash[0] = '\0';
    FStack_a8.Hash[1] = '\0';
    FStack_a8.Hash[2] = '\0';
    FStack_a8.Hash[3] = '\0';
    FStack_a8.Hash[4] = '\0';
    FStack_a8.Hash[5] = '\0';
    FStack_a8.Hash[6] = '\0';
    FStack_a8.Hash[7] = '\0';
    FStack_a8.Hash[8] = '\0';
    FStack_a8.Hash[9] = '\0';
    FStack_a8.Hash[10] = '\0';
    FStack_a8.Hash[0xb] = '\0';
    FStack_a8.Hash[0xc] = '\0';
    FStack_a8.Hash[0xd] = '\0';
    FStack_a8.Hash[0xe] = '\0';
    FStack_a8.Hash[0xf] = '\0';
    FStack_a8.Hash[0x10] = '\0';
    FStack_a8.Hash[0x11] = '\0';
    FStack_a8.Hash[0x12] = '\0';
    FStack_a8.Hash[0x13] = '\0';
    FStack_a8.CompressionBlockSize = 0;
    FStack_a8.CompressionMethodIndex = 0;
    FStack_a8.Flags = '\0';
    FStack_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&LStack_d8,uVar5);
    (**(code **)(*(longlong *)LStack_d8 + 0x1b8))(LStack_d8.QuadPart,(this->Reader).PakEntry.Offset)
    ;
    FPakEntry::Serialize(&FStack_a8,(FArchive *)LStack_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&FStack_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
        LStack_d8.QuadPart = 0;
      }
      if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a916a5;
    }
    if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
      LStack_d8.QuadPart = 0;
    }
    if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a916a5:
    if (param_3 + param_2 <= (this->Reader).PakEntry.UncompressedSize) {
      FPakCompressedReaderPolicy<FPakSimpleEncryption>::Serialize
                (&this->Reader,param_3,param_1,param_2);
      bVar3 = true;
      goto LAB_142a916e7;
    }
  }
  bVar3 = false;
LAB_142a916e7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&FStack_c8);
  return bVar3;
}

// ReadAt @ 142a8fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::ReadAt
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,long64 param_2,
          long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER LStack_d8;
  FPakFile *pFStack_d0;
  FSimpleScopeSecondsStat FStack_c8;
  FPakEntry FStack_a8;
  ulonglong uStack_58;
  
  if (((param_2 < 0) || (param_3 < 0)) || ((this->Reader).PakEntry.Size < param_2 + param_3)) {
    return false;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FStack_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&LStack_d8.s,"STAT_PakFile_Read");
    FStack_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  FStack_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&LStack_d8);
  FStack_c8.StartTime =
       (double)LStack_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FStack_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    FStack_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    FStack_a8.Size = _UNK_15076adc8;
    FStack_a8.Hash[0] = '\0';
    FStack_a8.Hash[1] = '\0';
    FStack_a8.Hash[2] = '\0';
    FStack_a8.Hash[3] = '\0';
    FStack_a8.Hash[4] = '\0';
    FStack_a8.Hash[5] = '\0';
    FStack_a8.Hash[6] = '\0';
    FStack_a8.Hash[7] = '\0';
    FStack_a8.Hash[8] = '\0';
    FStack_a8.Hash[9] = '\0';
    FStack_a8.Hash[10] = '\0';
    FStack_a8.Hash[0xb] = '\0';
    FStack_a8.Hash[0xc] = '\0';
    FStack_a8.Hash[0xd] = '\0';
    FStack_a8.Hash[0xe] = '\0';
    FStack_a8.Hash[0xf] = '\0';
    FStack_a8.Hash[0x10] = '\0';
    FStack_a8.Hash[0x11] = '\0';
    FStack_a8.Hash[0x12] = '\0';
    FStack_a8.Hash[0x13] = '\0';
    FStack_a8.Flags = '\0';
    FStack_a8.Verified = false;
    FStack_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_a8.CompressionBlocks.ArrayNum = 0;
    FStack_a8.CompressionBlocks.ArrayMax = 0;
    FStack_a8.UncompressedSize = 0;
    FStack_a8.CompressionBlockSize = 0;
    FStack_a8.CompressionMethodIndex = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&LStack_d8,uVar5);
    (**(code **)(*(longlong *)LStack_d8 + 0x1b8))(LStack_d8.QuadPart,(this->Reader).PakEntry.Offset)
    ;
    FPakEntry::Serialize(&FStack_a8,(FArchive *)LStack_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&FStack_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
        LStack_d8.QuadPart = 0;
      }
      if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a918d7;
    }
    if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
      LStack_d8.QuadPart = 0;
    }
    if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a918d7:
    if (param_3 + param_2 <= (this->Reader).PakEntry.Size) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
      pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
      plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
      plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar2;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(&LStack_d8,uVar5);
      (**(code **)(*(longlong *)LStack_d8 + 0x1b8))
                (LStack_d8.QuadPart,(this->Reader).OffsetToFile + param_3);
      (**(code **)(*(longlong *)LStack_d8 + 0x188))(LStack_d8.QuadPart,param_1,param_2);
      if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
      }
      bVar3 = true;
      goto LAB_142a91975;
    }
  }
  bVar3 = false;
LAB_142a91975:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&FStack_c8);
  return bVar3;
}

// ReadAt @ 142a8faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::ReadAt
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER LStack_d8;
  FPakFile *pFStack_d0;
  FSimpleScopeSecondsStat FStack_c8;
  FPakEntry FStack_a8;
  ulonglong uStack_58;
  
  if (((param_2 < 0) || (param_3 < 0)) || ((this->Reader).PakEntry.Size < param_2 + param_3)) {
    return false;
  }
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FStack_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&LStack_d8.s,"STAT_PakFile_Read");
    FStack_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  FStack_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&LStack_d8);
  FStack_c8.StartTime =
       (double)LStack_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  FStack_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    FStack_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_a8.CompressionBlocks.ArrayNum = 0;
    FStack_a8.CompressionBlocks.ArrayMax = 0;
    FStack_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    FStack_a8.Size = _UNK_15076adc8;
    FStack_a8.UncompressedSize = 0;
    FStack_a8.Hash[0] = '\0';
    FStack_a8.Hash[1] = '\0';
    FStack_a8.Hash[2] = '\0';
    FStack_a8.Hash[3] = '\0';
    FStack_a8.Hash[4] = '\0';
    FStack_a8.Hash[5] = '\0';
    FStack_a8.Hash[6] = '\0';
    FStack_a8.Hash[7] = '\0';
    FStack_a8.Hash[8] = '\0';
    FStack_a8.Hash[9] = '\0';
    FStack_a8.Hash[10] = '\0';
    FStack_a8.Hash[0xb] = '\0';
    FStack_a8.Hash[0xc] = '\0';
    FStack_a8.Hash[0xd] = '\0';
    FStack_a8.Hash[0xe] = '\0';
    FStack_a8.Hash[0xf] = '\0';
    FStack_a8.Hash[0x10] = '\0';
    FStack_a8.Hash[0x11] = '\0';
    FStack_a8.Hash[0x12] = '\0';
    FStack_a8.Hash[0x13] = '\0';
    FStack_a8.CompressionBlockSize = 0;
    FStack_a8.CompressionMethodIndex = 0;
    FStack_a8.Flags = '\0';
    FStack_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&LStack_d8,uVar5);
    (**(code **)(*(longlong *)LStack_d8 + 0x1b8))(LStack_d8.QuadPart,(this->Reader).PakEntry.Offset)
    ;
    FPakEntry::Serialize(&FStack_a8,(FArchive *)LStack_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&FStack_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
        LStack_d8.QuadPart = 0;
      }
      if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a91b65;
    }
    if ((FArchive *)LStack_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(pFStack_d0,(FArchive *)LStack_d8);
      LStack_d8.QuadPart = 0;
    }
    if (FStack_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a91b65:
    if (param_3 + param_2 <= (this->Reader).PakEntry.Size) {
      FPakReaderPolicy<FPakSimpleEncryption>::Serialize(&this->Reader,param_3,param_1,param_2);
      bVar3 = true;
      goto LAB_142a91ba7;
    }
  }
  bVar3 = false;
LAB_142a91ba7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&FStack_c8);
  return bVar3;
}

// ReadInternal @ 142a912c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::ReadInternal
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FPakFile *local_d0;
  FSimpleScopeSecondsStat local_c8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&local_d8.s,"STAT_PakFile_Read");
    local_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_d8);
  local_c8.StartTime =
       (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CompressionBlocks.ArrayNum = 0;
    local_a8.CompressionBlocks.ArrayMax = 0;
    local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_a8.Size = _UNK_15076adc8;
    local_a8.UncompressedSize = 0;
    local_a8.Hash[0] = '\0';
    local_a8.Hash[1] = '\0';
    local_a8.Hash[2] = '\0';
    local_a8.Hash[3] = '\0';
    local_a8.Hash[4] = '\0';
    local_a8.Hash[5] = '\0';
    local_a8.Hash[6] = '\0';
    local_a8.Hash[7] = '\0';
    local_a8.Hash[8] = '\0';
    local_a8.Hash[9] = '\0';
    local_a8.Hash[10] = '\0';
    local_a8.Hash[0xb] = '\0';
    local_a8.Hash[0xc] = '\0';
    local_a8.Hash[0xd] = '\0';
    local_a8.Hash[0xe] = '\0';
    local_a8.Hash[0xf] = '\0';
    local_a8.Hash[0x10] = '\0';
    local_a8.Hash[0x11] = '\0';
    local_a8.Hash[0x12] = '\0';
    local_a8.Hash[0x13] = '\0';
    local_a8.CompressionBlockSize = 0;
    local_a8.CompressionMethodIndex = 0;
    local_a8.Flags = '\0';
    local_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&local_d8,uVar5);
    (**(code **)(*(longlong *)local_d8 + 0x1b8))(local_d8.QuadPart,(this->Reader).PakEntry.Offset);
    FPakEntry::Serialize(&local_a8,(FArchive *)local_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&local_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
        local_d8.QuadPart = 0;
      }
      if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a91475;
    }
    if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
      local_d8.QuadPart = 0;
    }
    if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a91475:
    if (param_3 + param_2 <= (this->Reader).PakEntry.UncompressedSize) {
      FPakCompressedReaderPolicy<FPakNoEncryption>::Serialize(&this->Reader,param_3,param_1,param_2)
      ;
      bVar3 = true;
      goto LAB_142a914b7;
    }
  }
  bVar3 = false;
LAB_142a914b7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c8);
  return bVar3;
}

// ReadInternal @ 142a914f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::ReadInternal
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FPakFile *local_d0;
  FSimpleScopeSecondsStat local_c8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&local_d8.s,"STAT_PakFile_Read");
    local_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_d8);
  local_c8.StartTime =
       (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CompressionBlocks.ArrayNum = 0;
    local_a8.CompressionBlocks.ArrayMax = 0;
    local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_a8.Size = _UNK_15076adc8;
    local_a8.UncompressedSize = 0;
    local_a8.Hash[0] = '\0';
    local_a8.Hash[1] = '\0';
    local_a8.Hash[2] = '\0';
    local_a8.Hash[3] = '\0';
    local_a8.Hash[4] = '\0';
    local_a8.Hash[5] = '\0';
    local_a8.Hash[6] = '\0';
    local_a8.Hash[7] = '\0';
    local_a8.Hash[8] = '\0';
    local_a8.Hash[9] = '\0';
    local_a8.Hash[10] = '\0';
    local_a8.Hash[0xb] = '\0';
    local_a8.Hash[0xc] = '\0';
    local_a8.Hash[0xd] = '\0';
    local_a8.Hash[0xe] = '\0';
    local_a8.Hash[0xf] = '\0';
    local_a8.Hash[0x10] = '\0';
    local_a8.Hash[0x11] = '\0';
    local_a8.Hash[0x12] = '\0';
    local_a8.Hash[0x13] = '\0';
    local_a8.CompressionBlockSize = 0;
    local_a8.CompressionMethodIndex = 0;
    local_a8.Flags = '\0';
    local_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&local_d8,uVar5);
    (**(code **)(*(longlong *)local_d8 + 0x1b8))(local_d8.QuadPart,(this->Reader).PakEntry.Offset);
    FPakEntry::Serialize(&local_a8,(FArchive *)local_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&local_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
        local_d8.QuadPart = 0;
      }
      if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a916a5;
    }
    if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
      local_d8.QuadPart = 0;
    }
    if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a916a5:
    if (param_3 + param_2 <= (this->Reader).PakEntry.UncompressedSize) {
      FPakCompressedReaderPolicy<FPakSimpleEncryption>::Serialize
                (&this->Reader,param_3,param_1,param_2);
      bVar3 = true;
      goto LAB_142a916e7;
    }
  }
  bVar3 = false;
LAB_142a916e7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c8);
  return bVar3;
}

// ReadInternal @ 142a91720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::ReadInternal
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,long64 param_2,
          long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FPakFile *local_d0;
  FSimpleScopeSecondsStat local_c8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&local_d8.s,"STAT_PakFile_Read");
    local_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_d8);
  local_c8.StartTime =
       (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_a8.Size = _UNK_15076adc8;
    local_a8.Hash[0] = '\0';
    local_a8.Hash[1] = '\0';
    local_a8.Hash[2] = '\0';
    local_a8.Hash[3] = '\0';
    local_a8.Hash[4] = '\0';
    local_a8.Hash[5] = '\0';
    local_a8.Hash[6] = '\0';
    local_a8.Hash[7] = '\0';
    local_a8.Hash[8] = '\0';
    local_a8.Hash[9] = '\0';
    local_a8.Hash[10] = '\0';
    local_a8.Hash[0xb] = '\0';
    local_a8.Hash[0xc] = '\0';
    local_a8.Hash[0xd] = '\0';
    local_a8.Hash[0xe] = '\0';
    local_a8.Hash[0xf] = '\0';
    local_a8.Hash[0x10] = '\0';
    local_a8.Hash[0x11] = '\0';
    local_a8.Hash[0x12] = '\0';
    local_a8.Hash[0x13] = '\0';
    local_a8.Flags = '\0';
    local_a8.Verified = false;
    local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CompressionBlocks.ArrayNum = 0;
    local_a8.CompressionBlocks.ArrayMax = 0;
    local_a8.UncompressedSize = 0;
    local_a8.CompressionBlockSize = 0;
    local_a8.CompressionMethodIndex = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&local_d8,uVar5);
    (**(code **)(*(longlong *)local_d8 + 0x1b8))(local_d8.QuadPart,(this->Reader).PakEntry.Offset);
    FPakEntry::Serialize(&local_a8,(FArchive *)local_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&local_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
        local_d8.QuadPart = 0;
      }
      if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a918d7;
    }
    if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
      local_d8.QuadPart = 0;
    }
    if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a918d7:
    if (param_3 + param_2 <= (this->Reader).PakEntry.Size) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
      pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
      plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
      plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar2;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(&local_d8,uVar5);
      (**(code **)(*(longlong *)local_d8 + 0x1b8))
                (local_d8.QuadPart,(this->Reader).OffsetToFile + param_3);
      (**(code **)(*(longlong *)local_d8 + 0x188))(local_d8.QuadPart,param_1,param_2);
      if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
      }
      bVar3 = true;
      goto LAB_142a91975;
    }
  }
  bVar3 = false;
LAB_142a91975:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c8);
  return bVar3;
}

// ReadInternal @ 142a919b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::ReadInternal
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2,long64 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  FName *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FPakFile *local_d0;
  FSimpleScopeSecondsStat local_c8;
  FPakEntry local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_PakFile_Read;
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar4 = ::FName::FName((FName *)&local_d8.s,"STAT_PakFile_Read");
    local_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar4,
                    L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                    true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_d8);
  local_c8.StartTime =
       (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_c8.Scale = __real_3ff0000000000000;
  if ((this->Reader).PakEntry.Verified == false) {
    local_a8.CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CompressionBlocks.ArrayNum = 0;
    local_a8.CompressionBlocks.ArrayMax = 0;
    local_a8.Offset = ___xmm_0000000000000000ffffffffffffffff;
    local_a8.Size = _UNK_15076adc8;
    local_a8.UncompressedSize = 0;
    local_a8.Hash[0] = '\0';
    local_a8.Hash[1] = '\0';
    local_a8.Hash[2] = '\0';
    local_a8.Hash[3] = '\0';
    local_a8.Hash[4] = '\0';
    local_a8.Hash[5] = '\0';
    local_a8.Hash[6] = '\0';
    local_a8.Hash[7] = '\0';
    local_a8.Hash[8] = '\0';
    local_a8.Hash[9] = '\0';
    local_a8.Hash[10] = '\0';
    local_a8.Hash[0xb] = '\0';
    local_a8.Hash[0xc] = '\0';
    local_a8.Hash[0xd] = '\0';
    local_a8.Hash[0xe] = '\0';
    local_a8.Hash[0xf] = '\0';
    local_a8.Hash[0x10] = '\0';
    local_a8.Hash[0x11] = '\0';
    local_a8.Hash[0x12] = '\0';
    local_a8.Hash[0x13] = '\0';
    local_a8.CompressionBlockSize = 0;
    local_a8.CompressionMethodIndex = 0;
    local_a8.Flags = '\0';
    local_a8.Verified = false;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->Reader).AcquirePakReader);
    pcVar1 = *(code **)&(this->Reader).AcquirePakReader;
    plVar2 = *(longlong **)&(this->Reader).AcquirePakReader.field_0x28;
    plVar6 = (longlong *)&(this->Reader).AcquirePakReader.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(&local_d8,uVar5);
    (**(code **)(*(longlong *)local_d8 + 0x1b8))(local_d8.QuadPart,(this->Reader).PakEntry.Offset);
    FPakEntry::Serialize(&local_a8,(FArchive *)local_d8,(((this->Reader).PakFile)->Info).Version);
    bVar3 = FPakEntry::VerifyPakEntriesMatch(&(this->Reader).PakEntry,&local_a8);
    if (bVar3) {
      (this->Reader).PakEntry.Verified = true;
      if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
        FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
        local_d8.QuadPart = 0;
      }
      if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
      }
      goto LAB_142a91b65;
    }
    if ((FArchive *)local_d8.QuadPart != (FArchive *)0x0) {
      FPakFile::ReturnSharedReader(local_d0,(FArchive *)local_d8);
      local_d8.QuadPart = 0;
    }
    if (local_a8.CompressionBlocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.CompressionBlocks.AllocatorInstance.Data);
    }
  }
  else {
LAB_142a91b65:
    if (param_3 + param_2 <= (this->Reader).PakEntry.Size) {
      FPakReaderPolicy<FPakSimpleEncryption>::Serialize(&this->Reader,param_3,param_1,param_2);
      bVar3 = true;
      goto LAB_142a91ba7;
    }
  }
  bVar3 = false;
LAB_142a91ba7:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c8);
  return bVar3;
}

// Seek @ 142a9cdb0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Seek
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  if ((param_1 <= (this->Reader).PakEntry.UncompressedSize) && (-1 < param_1)) {
    this->ReadPos = param_1;
    return true;
  }
  return false;
}

// Seek @ 142a9cdd0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Seek
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  if ((param_1 <= (this->Reader).PakEntry.UncompressedSize) && (-1 < param_1)) {
    this->ReadPos = param_1;
    return true;
  }
  return false;
}

// Seek @ 142a9cdf0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Seek
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  if ((param_1 <= (this->Reader).PakEntry.Size) && (-1 < param_1)) {
    this->ReadPos = param_1;
    return true;
  }
  return false;
}

// Seek @ 142a9ce10

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Seek
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  if ((param_1 <= (this->Reader).PakEntry.Size) && (-1 < param_1)) {
    this->ReadPos = param_1;
    return true;
  }
  return false;
}

// SeekFromEnd @ 142a9ce40

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::SeekFromEnd
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a9ce4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))
                    (this,(this->Reader).PakEntry.UncompressedSize - param_1);
  return (bool)uVar1;
}

// SeekFromEnd @ 142a9ce60

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::SeekFromEnd
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a9ce6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))
                    (this,(this->Reader).PakEntry.UncompressedSize - param_1);
  return (bool)uVar1;
}

// SeekFromEnd @ 142a9ce80

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::SeekFromEnd
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a9ce8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,(this->Reader).PakEntry.Size - param_1);
  return (bool)uVar1;
}

// SeekFromEnd @ 142a9cea0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::SeekFromEnd
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142a9cead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this,(this->Reader).PakEntry.Size - param_1);
  return (bool)uVar1;
}

// Size @ 142aa09c0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Size
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this)

{
  return (this->Reader).PakEntry.UncompressedSize;
}

// Size @ 142aa09d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Size
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this)

{
  return (this->Reader).PakEntry.UncompressedSize;
}

// Size @ 142aa09e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Size
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this)

{
  return (this->Reader).PakEntry.Size;
}

// Size @ 142aa09f0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Size
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this)

{
  return (this->Reader).PakEntry.Size;
}

// Tell @ 142aa1de0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Tell
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this)

{
  return this->ReadPos;
}

// Tell @ 142aa1df0

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Tell
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this)

{
  return this->ReadPos;
}

// Tell @ 142aa1e00

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Tell
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this)

{
  return this->ReadPos;
}

// Tell @ 142aa1e10

/* WARNING: Enum "EVersion": Some values do not have unique names */

long64 __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Tell
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this)

{
  return this->ReadPos;
}

// Truncate @ 142aa53f0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Truncate
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  return false;
}

// Truncate @ 142aa5400

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Truncate
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  return false;
}

// Truncate @ 142aa5410

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Truncate
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,long64 param_1)

{
  return false;
}

// Truncate @ 142aa5420

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Truncate
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,long64 param_1)

{
  return false;
}

// Write @ 142aad090

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::Write
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  return false;
}

// Write @ 142aad0a0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::Write
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  return false;
}

// Write @ 142aad0b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::Write
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,uchar *param_1,long64 param_2)

{
  return false;
}

// Write @ 142aad0c0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::Write
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,uchar *param_1,
          long64 param_2)

{
  return false;
}

