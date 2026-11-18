// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// OnGameThread @ 141a0f750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `StatCmd'::__l127::FLocal::OnGameThread(FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NamedMarker> FVar5;
  FThreadStats *this;
  wchar_t *pwVar6;
  FName local_res8;
  FName local_res10;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar6);
  FVar5 = StatPtr_STAT_NamedMarker;
  if (StatPtr_STAT_NamedMarker == (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_NamedMarker");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NamedMarker>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NamedMarker,*pFVar4,L"NamedMarker"
                       ,"STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true,false,ST_FName
                       ,false,false,MCR_Invalid);
  }
  lVar1 = *(longlong *)FVar5;
  local_res8.ComparisonIndex.Value = (uint)lVar1;
  local_res8.Number = (uint)((ulonglong)lVar1 >> 0x20);
  if (((lVar1 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = FThreadStats::GetThreadStats();
    FVar3.Number = local_res8.Number;
    FVar3.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
    FThreadStats::AddMessageInner<FName>(this,FVar3,SpecialMessageMarker,local_res10,false);
  }
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// MakeBerry @ 141d03260

TSharedRef<IBerry,1> * __cdecl
`FTypeContainerTest::TestBody'::__l13::FLocal::MakeBerry
          (TSharedRef<IBerry,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FStrawberry> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FStrawberry *)0x0) {
    *local_res8[0].Object = (FStrawberry)&___7FStrawberry__6B_;
  }
  TSharedRef<IBerry,1>::TSharedRef<IBerry,1><FStrawberry>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// MakeFruit @ 141d032b0

TSharedRef<IFruit,1> * __cdecl
`FTypeContainerTest::TestBody'::__l13::FLocal::MakeFruit
          (TSharedRef<IFruit,1> *__return_storage_ptr__,bool param_1)

{
  TRawPtrProxy<FBanana> local_res18 [2];
  
  if (param_1) {
    local_res18[0].Object = ::operator_new(8);
    if (local_res18[0].Object != (FBanana *)0x0) {
      *local_res18[0].Object = (FBanana)&___7FBanana__6B_;
    }
    TSharedRef<IFruit,1>::TSharedRef<IFruit,1><FBanana>(__return_storage_ptr__,local_res18);
    return __return_storage_ptr__;
  }
  local_res18[0].Object = ::operator_new(8);
  if (local_res18[0].Object != (FBanana *)0x0) {
    *local_res18[0].Object = (FBanana)&___7FStrawberry__6B_;
  }
  TSharedRef<IFruit,1>::TSharedRef<IFruit,1><FStrawberry>
            (__return_storage_ptr__,(TRawPtrProxy<FStrawberry> *)local_res18);
  return __return_storage_ptr__;
}

// MakeSmoothie @ 141d03390

TSharedRef<ISmoothie<1>,1> * __cdecl
`FTypeContainerTest::TestBody'::__l11::FLocal::MakeSmoothie
          (TSharedRef<ISmoothie<1>,1> *__return_storage_ptr__,TSharedRef<IFruit,1> *param_1,
          TSharedRef<IBerry,1> *param_2)

{
  TSmoothie<1> *this;
  TRawPtrProxy<TSmoothie<1>_> local_res8;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  this = ::operator_new(0x28);
  local_res8.Object = (TSmoothie<1> *)0x0;
  if (this != (TSmoothie<1> *)0x0) {
    local_28.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_28.Object = param_2->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object = TSmoothie<1>::TSmoothie<1>(this,&local_18,&local_28);
  }
  TSharedRef<ISmoothie<1>,1>::TSharedRef<ISmoothie<1>,1><TSmoothie<1>_>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeSmoothie @ 141d03440

TSharedRef<ISmoothie<1>,1> * __cdecl
`FTypeContainerTest::TestBody'::__l13::FLocal::MakeSmoothie
          (TSharedRef<ISmoothie<1>,1> *__return_storage_ptr__,TSharedRef<IFruit,1> *param_1,
          TSharedRef<IBerry,1> *param_2)

{
  TSmoothie<1> *this;
  TRawPtrProxy<TSmoothie<1>_> local_res8;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  this = ::operator_new(0x28);
  local_res8.Object = (TSmoothie<1> *)0x0;
  if (this != (TSmoothie<1> *)0x0) {
    local_28.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_28.Object = param_2->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object = TSmoothie<1>::TSmoothie<1>(this,&local_18,&local_28);
  }
  TSharedRef<ISmoothie<1>,1>::TSharedRef<ISmoothie<1>,1><TSmoothie<1>_>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeStrawberry @ 141d034f0

TSharedRef<IBerry,1> * __cdecl
`FTypeContainerTest::TestBody'::__l11::FLocal::MakeStrawberry
          (TSharedRef<IBerry,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FStrawberry> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FStrawberry *)0x0) {
    *local_res8[0].Object = (FStrawberry)&___7FStrawberry__6B_;
  }
  TSharedRef<IBerry,1>::TSharedRef<IBerry,1><FStrawberry>(__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

