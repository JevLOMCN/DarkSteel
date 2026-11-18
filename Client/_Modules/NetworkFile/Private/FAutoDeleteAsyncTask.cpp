// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 6

// Abandon @ 148be06e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::Abandon
          (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar5;
  int iVar6;
  TAtomic<FMinimalName> TVar7;
  undefined1 auStack_78 [32];
  LARGE_INTEGER LStack_58;
  TAtomic<FMinimalName> TStack_50;
  FStatMessage FStack_40;
  FInheritedContextScope FStack_30;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_30);
  TVar7 = TStatId::TStatId_NAME_None.Name;
  bVar2 = false;
  bVar4 = false;
  TStack_50 = (TAtomic<FMinimalName>)0x0;
  uVar5 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar6 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar5 != 0) || (iVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_58.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_58.s.LowPart = uVar5;
        LStack_58.s.HighPart = iVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_58.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      TStack_50 = TVar7;
      LStack_58.s.LowPart = uVar5;
      LStack_58.s.HighPart = iVar6;
      FThreadStats::AddMessage((FName)TVar7,CycleScopeStart);
      bVar3 = true;
      uVar5 = TStack_50._0_4_;
      goto LAB_148be11d9;
    }
  }
  bVar3 = false;
  TVar7 = TStack_50;
  uVar5 = 0;
LAB_148be11d9:
  FAsyncNetworkWriteWorker::DoWork(&this->Task);
  if (this != (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (TVar7 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Number = TVar7._4_4_ & 0xffff6fff | 0x6000;
      FStack_40.NameAndInfo.Index.Value = uVar5;
      QueryPerformanceCounter(&LStack_58);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStack_58.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStack_58.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStack_58.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStack_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_30.MetaScope);
  FMemScope::~FMemScope(&FStack_30.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_30,FStack_30.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// Abandon @ 148be06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<`AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile>::Abandon
          (void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)((longlong)this + 0x10),&FStack_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FAsyncReadUnsolicitedFile =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
          )0x0;
    pFVar5 = ::FName::FName((FName *)&LStack_68.s,"FAsyncReadUnsolicitedFile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
               L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_FAsyncReadUnsolicitedFile;
  if (StatPtr_FAsyncReadUnsolicitedFile ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&FStack_50,"FAsyncReadUnsolicitedFile");
    FVar6 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
                         L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar8.Value;
        LStack_68.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_68.s.LowPart = FVar8.Value;
      LStack_68.s.HighPart = uVar7;
      FStack_60 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar8.Value = FStack_60.ComparisonIndex.Value;
      goto LAB_148be14a3;
    }
  }
  bVar3 = false;
  FVar9 = FStack_60;
  FVar8.Value = 0;
LAB_148be14a3:
  `AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile::DoWork
            ((void *)((longlong)this + 0x38));
  if (this != (void *)0x0) {
    (**(code **)(*(longlong *)this + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148be10c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::DoThreadedWork
          (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar5;
  int iVar6;
  TAtomic<FMinimalName> TVar7;
  undefined1 auStack_78 [32];
  LARGE_INTEGER LStack_58;
  TAtomic<FMinimalName> TStack_50;
  FStatMessage FStack_40;
  FInheritedContextScope FStack_30;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_30);
  TVar7 = TStatId::TStatId_NAME_None.Name;
  bVar2 = false;
  bVar4 = false;
  TStack_50 = (TAtomic<FMinimalName>)0x0;
  uVar5 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar6 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar5 != 0) || (iVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_58.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_58.s.LowPart = uVar5;
        LStack_58.s.HighPart = iVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_58.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      TStack_50 = TVar7;
      LStack_58.s.LowPart = uVar5;
      LStack_58.s.HighPart = iVar6;
      FThreadStats::AddMessage((FName)TVar7,CycleScopeStart);
      bVar3 = true;
      uVar5 = TStack_50._0_4_;
      goto LAB_148be11d9;
    }
  }
  bVar3 = false;
  TVar7 = TStack_50;
  uVar5 = 0;
LAB_148be11d9:
  FAsyncNetworkWriteWorker::DoWork(&this->Task);
  if (this != (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (TVar7 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Number = TVar7._4_4_ & 0xffff6fff | 0x6000;
      FStack_40.NameAndInfo.Index.Value = uVar5;
      QueryPerformanceCounter(&LStack_58);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStack_58.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStack_58.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStack_58.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStack_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_30.MetaScope);
  FMemScope::~FMemScope(&FStack_30.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_30,FStack_30.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148be10d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<`AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile>::DoThreadedWork
          (void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)((longlong)this + 0x10),&FStack_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FAsyncReadUnsolicitedFile =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
          )0x0;
    pFVar5 = ::FName::FName((FName *)&LStack_68.s,"FAsyncReadUnsolicitedFile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
               L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_FAsyncReadUnsolicitedFile;
  if (StatPtr_FAsyncReadUnsolicitedFile ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&FStack_50,"FAsyncReadUnsolicitedFile");
    FVar6 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
                         L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar8.Value;
        LStack_68.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      LStack_68.s.LowPart = FVar8.Value;
      LStack_68.s.HighPart = uVar7;
      FStack_60 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar8.Value = FStack_60.ComparisonIndex.Value;
      goto LAB_148be14a3;
    }
  }
  bVar3 = false;
  FVar9 = FStack_60;
  FVar8.Value = 0;
LAB_148be14a3:
  `AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile::DoWork
            ((void *)((longlong)this + 0x38));
  if (this != (void *)0x0) {
    (**(code **)(*(longlong *)this + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148be10e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker>::DoWork
          (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar5;
  int iVar6;
  TAtomic<FMinimalName> TVar7;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  TAtomic<FMinimalName> local_50;
  FStatMessage local_40;
  FInheritedContextScope local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_30);
  TVar7 = TStatId::TStatId_NAME_None.Name;
  bVar2 = false;
  bVar4 = false;
  local_50 = (TAtomic<FMinimalName>)0x0;
  uVar5 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar6 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar5 != 0) || (iVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.s.LowPart = uVar5;
        local_58.s.HighPart = iVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_50 = TVar7;
      local_58.s.LowPart = uVar5;
      local_58.s.HighPart = iVar6;
      FThreadStats::AddMessage((FName)TVar7,CycleScopeStart);
      bVar3 = true;
      uVar5 = local_50._0_4_;
      goto LAB_148be11d9;
    }
  }
  bVar3 = false;
  TVar7 = local_50;
  uVar5 = 0;
LAB_148be11d9:
  FAsyncNetworkWriteWorker::DoWork(&this->Task);
  if (this != (FAutoDeleteAsyncTask<FAsyncNetworkWriteWorker> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (TVar7 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Number = TVar7._4_4_ & 0xffff6fff | 0x6000;
      local_40.NameAndInfo.Index.Value = uVar5;
      QueryPerformanceCounter(&local_58);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_30.MetaScope);
  FMemScope::~FMemScope(&local_30.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_30,local_30.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148be1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<`AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile>::DoWork
          (void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_68;
  FName local_60;
  FStatMessage local_50;
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)((longlong)this + 0x10),&local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FAsyncReadUnsolicitedFile =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
          )0x0;
    pFVar5 = ::FName::FName((FName *)&local_68.s,"FAsyncReadUnsolicitedFile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
               L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_FAsyncReadUnsolicitedFile;
  if (StatPtr_FAsyncReadUnsolicitedFile ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,"FAsyncReadUnsolicitedFile");
    FVar6 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__void___cdecl_AsyncReadUnsolicitedFiles(int,FNetworkPlatformFile_&,IPlatformFile_&,FString_&,FString_&,FString_&,FString_&,FScopedEvent_*,FScopedEvent_*)_::_2_::FAsyncReadUnsolicitedFile::GetStatId(void)const_::_2_::FStat_FAsyncReadUnsolicitedFile>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FAsyncReadUnsolicitedFile,*pFVar5,
                         L"FAsyncReadUnsolicitedFile","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_68.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.s.LowPart = FVar8.Value;
        local_68.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_68.s.LowPart = FVar8.Value;
      local_68.s.HighPart = uVar7;
      local_60 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar8.Value = local_60.ComparisonIndex.Value;
      goto LAB_148be14a3;
    }
  }
  bVar3 = false;
  FVar9 = local_60;
  FVar8.Value = 0;
LAB_148be14a3:
  `AsyncReadUnsolicitedFiles'::__l2::FAsyncReadUnsolicitedFile::DoWork
            ((void *)((longlong)this + 0x38));
  if (this != (void *)0x0) {
    (**(code **)(*(longlong *)this + 0x28))(this,1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&local_68);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_40.MetaScope);
  FMemScope::~FMemScope(&local_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

