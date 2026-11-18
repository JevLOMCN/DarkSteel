// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 13

// StaticClass @ 142458bd0

UClass * __cdecl UFontBulkData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontBulkData",
               &Z_Registration_Info_UClass_UFontBulkData.InnerSingleton,
               StaticRegisterNativesUFontBulkData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontBulkData>,InternalVTableHelperCtorCaller<UFontBulkData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontBulkData.InnerSingleton;
}

// UFontBulkData @ 1424779b0

UFontBulkData * __thiscall UFontBulkData::UFontBulkData(UFontBulkData *this,FVTableHelper *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFontBulkData__6B_;
  *(undefined8 *)&this->BulkData = 0;
  *(undefined8 *)&(this->BulkData).field_0x8 = 0;
  *(undefined8 *)&(this->BulkData).field_0x10 = 0;
  *(undefined4 *)&(this->BulkData).field_0xd = 0xffffffff;
  (this->BulkData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->BulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->BulkData).field_0x19 = uVar1;
  (this->BulkData).field_0x1a = uVar2;
  (this->BulkData).field_0x1b = uVar3;
  (this->BulkData).field_0x1c = uVar4;
  (this->BulkData).field_0x1d = uVar5;
  (this->BulkData).field_0x1e = uVar6;
  (this->BulkData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->BulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->BulkData).field_0x21 = uVar1;
  (this->BulkData).field_0x22 = uVar2;
  (this->BulkData).field_0x23 = uVar3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// UFontBulkData @ 142477a20

UFontBulkData * __thiscall UFontBulkData::UFontBulkData(UFontBulkData *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UFontBulkData__6B_;
  *(undefined8 *)&this->BulkData = 0;
  *(undefined8 *)&(this->BulkData).field_0x8 = 0;
  *(undefined8 *)&(this->BulkData).field_0x10 = 0;
  *(undefined4 *)&(this->BulkData).field_0xd = 0xffffffff;
  (this->BulkData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->BulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->BulkData).field_0x19 = uVar1;
  (this->BulkData).field_0x1a = uVar2;
  (this->BulkData).field_0x1b = uVar3;
  (this->BulkData).field_0x1c = uVar4;
  (this->BulkData).field_0x1d = uVar5;
  (this->BulkData).field_0x1e = uVar6;
  (this->BulkData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->BulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->BulkData).field_0x21 = uVar1;
  (this->BulkData).field_0x22 = uVar2;
  (this->BulkData).field_0x23 = uVar3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~UFontBulkData @ 142479e70

void __thiscall UFontBulkData::~UFontBulkData(UFontBulkData *this)

{
  this->_padding_ = (longlong)&___7UFontBulkData__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FBulkData::~FBulkData((FBulkData *)&this->BulkData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetBulkDataSize @ 14248be00

long64 __thiscall UFontBulkData::GetBulkDataSize(UFontBulkData *this)

{
  long64 lVar1;
  
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
  return lVar1;
}

// GetPrivateStaticClass @ 142492ad0

UClass * __cdecl UFontBulkData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontBulkData",
               &Z_Registration_Info_UClass_UFontBulkData.InnerSingleton,
               StaticRegisterNativesUFontBulkData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontBulkData>,InternalVTableHelperCtorCaller<UFontBulkData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontBulkData.InnerSingleton;
}

// Initialize @ 142497d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFontBulkData::Initialize(UFontBulkData *this,FString *param_1)

{
  TBulkData<unsigned_char> *this_00;
  FName FVar1;
  IFileManager *pIVar2;
  longlong *plVar3;
  long64 lVar4;
  void *pvVar5;
  uchar auVar6 [8];
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar9;
  FName local_res8;
  FStatMessage local_28;
  
  this_00 = &this->BulkData;
  FBulkData::ClearBulkDataFlags((FBulkData *)this_00,8);
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,pwVar9,0);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
    FBulkData::Lock((FBulkData *)this_00,2);
    pvVar5 = FBulkData::Realloc((FBulkData *)this_00,lVar4,1);
    (**(code **)(*plVar3 + 0x188))(plVar3,pvVar5);
    FBulkData::Unlock((FBulkData *)this_00);
    auVar6 = (uchar  [8])FBulkData::GetBulkDataSize((FBulkData *)this_00);
    if (auVar6 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_SlateBulkFontDataMemory;
      if (StatPtr_STAT_SlateBulkFontDataMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_res8,"STAT_SlateBulkFontDataMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBulkFontDataMemory,
                           *pFVar7,L"Font BulkData Memory","STATGROUP_SlateMemory",
                           "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                           MCR_Physical);
      }
      FVar1 = *(FName *)FVar8;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_28.StatData.Pad = auVar6;
        local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_28);
        FStatsTrace::Add(&local_res8,(long64)auVar6);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142497f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar3)(plVar3,1);
    return;
  }
  if (2 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  return;
}

// Initialize @ 142497f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFontBulkData::Initialize(UFontBulkData *this,void *param_1,long64 param_2)

{
  TBulkData<unsigned_char> *this_00;
  FName FVar1;
  void *_Dst;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory> FVar4;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName local_res8;
  FStatMessage local_18;
  
  this_00 = &this->BulkData;
  FBulkData::ClearBulkDataFlags((FBulkData *)this_00,8);
  FBulkData::Lock((FBulkData *)this_00,2);
  _Dst = FBulkData::Realloc((FBulkData *)this_00,param_2,1);
  memcpy(_Dst,param_1,param_2);
  FBulkData::Unlock((FBulkData *)this_00);
  auVar2 = (uchar  [8])FBulkData::GetBulkDataSize((FBulkData *)this_00);
  if (auVar2 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_SlateBulkFontDataMemory;
    if (StatPtr_STAT_SlateBulkFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SlateBulkFontDataMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBulkFontDataMemory,*pFVar3,
                         L"Font BulkData Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_18.StatData.Pad = auVar2;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_18);
      FStatsTrace::Add(&local_res8,(long64)auVar2);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Lock @ 14249b620

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UFontBulkData::Lock(UFontBulkData *this,long64 *param_1)

{
  TBulkData<unsigned_char> *this_00;
  FName FVar1;
  bool bVar2;
  bool bVar3;
  long64 lVar4;
  void *pvVar5;
  uchar auVar6 [8];
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName local_res8;
  FStatMessage local_28;
  
  this_00 = &this->BulkData;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)this_00);
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)this_00);
  *param_1 = lVar4;
  pvVar5 = FBulkData::LockReadOnly((FBulkData *)this_00);
  if (((!bVar2) && (bVar3 = FBulkData::IsBulkDataLoaded((FBulkData *)this_00), bVar3)) &&
     (auVar6 = (uchar  [8])FBulkData::GetBulkDataSize((FBulkData *)this_00),
     auVar6 != (uchar  [8])0x0)) {
    FVar8 = StatPtr_STAT_SlateBulkFontDataMemory;
    if (StatPtr_STAT_SlateBulkFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_SlateBulkFontDataMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBulkFontDataMemory,*pFVar7,
                         L"Font BulkData Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,bVar2,ST_int64,bVar2,bVar2,MCR_Physical);
    }
    FVar1 = *(FName *)FVar8;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar6;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar6);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return pvVar5;
}

// Serialize @ 1424a6f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFontBulkData::Serialize(UFontBulkData *this,FArchive *param_1)

{
  FName FVar1;
  bool bVar2;
  uchar auVar3 [8];
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 4) != 0) {
    FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,2);
  }
  FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,(UObject *)this,false,1,None);
  if (((((param_1->field_0x28 & 1) != 0) &&
       (FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,8), (param_1->field_0x28 & 1) != 0)
       ) && (bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->BulkData), bVar2)) &&
     (auVar3 = (uchar  [8])FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData),
     auVar3 != (uchar  [8])0x0)) {
    FVar5 = StatPtr_STAT_SlateBulkFontDataMemory;
    if (StatPtr_STAT_SlateBulkFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_SlateBulkFontDataMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBulkFontDataMemory,*pFVar4,
                         L"Font BulkData Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_18.StatData.Pad = auVar3;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,(long64)auVar3);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Serialize @ 1424a7160

void __thiscall UFontBulkData::Serialize(UFontBulkData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUFontBulkData @ 1424a8510

void __cdecl UFontBulkData::StaticRegisterNativesUFontBulkData(void)

{
  return;
}

// Unlock @ 1424ab5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UFontBulkData::Unlock(UFontBulkData *this)

{
  FName FVar1;
  bool bVar2;
  uchar auVar3 [8];
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->BulkData);
  auVar3 = (uchar  [8])FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
  FBulkData::Unlock((FBulkData *)&this->BulkData);
  if (((bVar2) && (bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->BulkData), !bVar2)) &&
     (auVar3 != (uchar  [8])0x0)) {
    FVar5 = StatPtr_STAT_SlateBulkFontDataMemory;
    if (StatPtr_STAT_SlateBulkFontDataMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_SlateBulkFontDataMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateBulkFontDataMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBulkFontDataMemory,*pFVar4,
                         L"Font BulkData Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
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
      local_28.StatData.Pad = auVar3;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar3);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001424ab772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

