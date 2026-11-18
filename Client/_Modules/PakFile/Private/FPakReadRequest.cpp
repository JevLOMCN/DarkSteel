// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// FPakReadRequest @ 142a53a40

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakReadRequest * __thiscall
FPakReadRequest::FPakReadRequest
          (FPakReadRequest *this,FPakFile *param_1,FName param_2,long64 param_3,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,long64 param_5,long64 param_6,
          EAsyncIOPriorityAndFlags param_7,uchar *param_8,bool param_9,FCachedAsyncBlock *param_10)

{
  code *pcVar1;
  bool bVar2;
  FPakReadRequest *pFVar3;
  IPakRequestor *pIVar4;
  
  FPakReadRequestBase::FPakReadRequestBase
            ((FPakReadRequestBase *)this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  *(undefined ***)this = &_vftable__for__IAsyncReadRequest__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IPakRequestor__;
  if ((*(longlong *)&this->field_0x68 < 0) || (*(longlong *)&this->field_0x70 < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset >= 0 && BytesToRead > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xab4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakReadRequest *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (((this->field_0x96 == '\0') && ((param_7 >> 8 & 1) != 0)) && (this->field_0x45 != '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInternalRequest || ( InPriorityAndFlags & AIOP_FLAG_PRECACHE ) == 0 || !bUserSuppliedMemory"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xab5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakReadRequest *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PakPrecacherSingleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x33f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakReadRequest *)(*pcVar1)();
      return pFVar3;
    }
  }
  pIVar4 = (IPakRequestor *)&this->field_0x48;
  if (this == (FPakReadRequest *)0x0) {
    pIVar4 = (IPakRequestor *)0x0;
  }
  bVar2 = FPakPrecacher::QueueRequest
                    (PakPrecacherSingleton,pIVar4,param_1,param_2,param_3,
                     *(long64 *)&this->field_0x68,*(long64 *)&this->field_0x70,param_7);
  if (!bVar2) {
    this->field_0x94 = 0;
    IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)this);
    this->field_0x41 = 1;
  }
  return this;
}

// PanicSyncRead @ 142a8ad80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakReadRequest::PanicSyncRead(FPakReadRequest *this,uchar *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  char cVar2;
  IPlatformFile *pIVar3;
  FString *pFVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  FString local_38;
  FString local_28;
  
  pIVar3 = IPlatformFile::GetPlatformPhysical();
  this_00 = &this->field_0x88;
  pcVar1 = *(code **)((longlong)*pIVar3 + 0xe8);
  pFVar4 = ::FName::ToString((FName *)this_00,&local_38);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  plVar5 = (longlong *)(*pcVar1)(pIVar3,pwVar6,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (plVar5 == (longlong *)0x0) {
    ::FName::ToString((FName *)this_00,&local_28);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FPakReadRequest::PanicSyncRead(unsigned_char*___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)&this->field_0x68);
  if (cVar2 == '\0') {
    ::FName::ToString((FName *)this_00,&local_28);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FPakReadRequest::PanicSyncRead(unsigned_char*___ptr64)___ptr64'
                ::__l28::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,*(undefined8 *)&this->field_0x70);
  if (cVar2 == '\0') {
    ::FName::ToString((FName *)this_00,&local_28);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FPakReadRequest::PanicSyncRead(unsigned_char*___ptr64)___ptr64'
                ::__l49::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)*plVar5)(plVar5,1);
  return;
}

// RequestIsComplete @ 142a99730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakReadRequest::RequestIsComplete(FPakReadRequest *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar6;
  FPakReadRequest *pFVar7;
  FName local_res10;
  
  if (this->field_0x4c == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRequestOutstanding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xac0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this[-1].field_0x9b == '\0') &&
     ((this->field_0x4e != '\0' || ((*(uint *)&this->field_0x48 & 0x100) == 0)))) {
    if (this[-1].field_0x9d == '\0') {
      if (*(longlong *)&this[-1].field_0x60 != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Memory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xac5,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pvVar4 = FMemory::Malloc(*(ulong64 *)&this->field_0x28,0);
      lVar1 = *(longlong *)&this->field_0x28;
      *(void **)&this[-1].field_0x60 = pvVar4;
      if (lVar1 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesToRead > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xac7,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar1 = *(longlong *)&this->field_0x28;
      if (lVar1 != 0) {
        FVar6 = StatPtr_STAT_AsyncFileMemory;
        if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0)
        {
          pFVar5 = ::FName::FName(&local_res10,"STAT_AsyncFileMemory");
          FVar6 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar5,
                             L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                             L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar6,Add,lVar1,false);
      }
    }
    else if (*(longlong *)&this[-1].field_0x60 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xacc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = this;
    if (this == (FPakReadRequest *)&DAT_00000048) {
      pFVar7 = (FPakReadRequest *)0x0;
    }
    bVar3 = FPakPrecacher::GetCompletedRequest
                      (PakPrecacherSingleton,(IPakRequestor *)pFVar7,*(uchar **)&this[-1].field_0x60
                      );
    if ((!bVar3) && (this[-1].field_0x9b == '\0')) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCanceled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xad0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)&this[-1].field_0x58);
  EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  this->field_0x4c = 0;
  if (*(longlong **)&this->field_0x30 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x30 + 0x10))();
  }
  this[-1].field_0x99 = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a99997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  return;
}

