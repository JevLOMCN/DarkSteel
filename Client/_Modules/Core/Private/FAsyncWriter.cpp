// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FAsyncWriter @ 1418ba540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAsyncWriter * __thiscall
FAsyncWriter::FAsyncWriter(FAsyncWriter *this,FArchive *param_1,EThreadNameOption param_2)

{
  FRunnableThread **ppFVar1;
  int *piVar2;
  int *piVar3;
  wchar_t wVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  FRunnableThread *pFVar12;
  undefined *puVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  wchar_t wVar16;
  double dVar17;
  undefined1 auStackY_2a8 [32];
  FString local_268;
  FString local_258;
  void *local_248 [2];
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  FArchiveState::FArchiveState((FArchiveState *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  ppFVar1 = &this->Thread;
  *ppFVar1 = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  piVar2 = &(this->Buffer).ArrayMax;
  this->_padding_ = (longlong)&_vftable__for__FArchive__;
  (this->StopTaskCounter).Counter = 0;
  this->Ar = param_1;
  piVar3 = &(this->Buffer).ArrayNum;
  *piVar3 = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  this->BufferStartPos = (TAtomic<int>)0x0;
  this->BufferEndPos = (TAtomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BufferPosCritical,4000);
  (this->SerializeRequestCounter).Counter = 0;
  (this->WantsArchiveFlush).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RunCritical,4000);
  this->LastArchiveFlushTime = 0.0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x20000,&(this->Buffer).AllocatorInstance,piVar3,piVar2);
  pwVar8 = FCommandLine::Get();
  if (pwVar8 != (wchar_t *)0x0) {
    bVar5 = false;
    bVar6 = false;
    wVar4 = *pwVar8;
    while (wVar4 != L'\0') {
      pwVar10 = pwVar8 + 1;
      wVar16 = wVar4 + L'￠';
      if (0x19 < (ushort)(wVar4 + L'ﾟ')) {
        wVar16 = wVar4;
      }
      if ((((!bVar6) && (!bVar5)) && (wVar16 == L'L')) &&
         (iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar10,L"OGFLUSHINTERVAL=",0x10), iVar7 == 0))
      {
        if (pwVar8 != (wchar_t *)0x0) {
          wVar4 = pwVar8[0x11];
          pwVar10 = pwVar8 + 0x11;
          pwVar15 = pwVar10;
          if (wVar4 == L'\"') {
            pwVar15 = pwVar8 + 0x12;
            pwVar10 = wcsstr(pwVar15,L"\"");
            if (pwVar10 == (wchar_t *)0x0) {
              sVar11 = wcslen(pwVar8);
              pwVar10 = pwVar8 + (int)sVar11;
            }
          }
          else {
            while (wVar4 != L'\0') {
              pwVar8 = L" \r\n\t";
              while( true ) {
                if (*pwVar8 == L'\0') goto LAB_1418ba7e4;
                if (*pwVar15 == *pwVar8) break;
                pwVar8 = pwVar8 + 1;
              }
              wVar4 = pwVar15[1];
              pwVar15 = pwVar15 + 1;
            }
LAB_1418ba7e4:
            iVar7 = (int)((longlong)pwVar15 - (longlong)pwVar10 >> 1);
            pwVar15 = pwVar10 + iVar7;
            wVar4 = pwVar10[iVar7];
            pwVar8 = pwVar15;
            while (wVar4 != L'\0') {
              puVar13 = &u_______;
              wVar16 = L',';
              do {
                if (wVar4 == wVar16) goto LAB_1418ba840;
                wVar16 = *(wchar_t *)(puVar13 + 2);
                puVar13 = puVar13 + 2;
              } while (wVar16 != L'\0');
              pwVar10 = pwVar8 + 1;
              pwVar8 = pwVar8 + 1;
              wVar4 = *pwVar10;
            }
LAB_1418ba840:
            pwVar10 = pwVar15 + (int)((longlong)pwVar8 - (longlong)pwVar15 >> 1);
          }
          iVar7 = (int)((longlong)pwVar10 - (longlong)pwVar15 >> 1);
          if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          memcpy(local_238,pwVar15,(longlong)iVar7 * 2);
          local_238[iVar7] = L'\0';
          dVar17 = _wtof(local_238);
          GLogFlushIntervalSec = (float)dVar17;
        }
        break;
      }
      if (((ushort)(wVar16 + L'﾿') < 0x1a) || ((ushort)(wVar16 + L'￐') < 10)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (wVar16 == L'\"') {
        bVar6 = !bVar6;
      }
      pwVar8 = pwVar10;
      wVar4 = *pwVar10;
    }
  }
  FVar14.Data = (FScriptContainerElement *)0x0;
  pwVar8 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar8,L"DisableForkedOutputThread");
  if (bVar6) {
    return this;
  }
  bVar6 = FGenericPlatformProcess::SupportsMultithreading();
  if ((!bVar6) && (bVar6 = FForkProcessHelper::SupportsMultithreadingPostFork(), !bVar6)) {
    return this;
  }
  pwVar8 = L"";
  if (param_2 == FileName) {
    pFVar9 = (FString *)(**(code **)(*(longlong *)this->Ar + 0x18))(this->Ar,local_248);
    FPaths::GetBaseFilename(&local_258,pFVar9,true);
    ::FString::PrintfImpl(&local_268,L"FAsyncWriter_%s");
    iVar7 = local_268.Data.ArrayNum;
    FVar14.Data = local_268.Data.AllocatorInstance.Data;
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248[0] != (void *)0x0) {
      FMemory::Free(local_248[0]);
    }
  }
  else {
    if (param_2 != Sequential) goto LAB_1418ba919;
    LOCK();
    AsyncWriterCount = (atomic<unsigned___int64>)((longlong)AsyncWriterCount + 1);
    UNLOCK();
    ::FString::PrintfImpl(&local_268,L"FAsyncWriter_%llu");
    FVar14.Data = local_268.Data.AllocatorInstance.Data;
    iVar7 = local_268.Data.ArrayNum;
  }
  if (iVar7 != 0) {
    pwVar8 = (wchar_t *)FVar14.Data;
  }
LAB_1418ba919:
  pFVar12 = FForkProcessHelper::CreateForkableThread
                      ((FRunnable *)this,pwVar8,0x8000,TPri_BelowNormal,0xffffffffffffffff,None,
                       false);
  if (((ulonglong)ppFVar1 & 7) != 0) {
    FWindowsPlatformAtomics::HandleAtomicsFailure
              (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
  }
  LOCK();
  *ppFVar1 = pFVar12;
  UNLOCK();
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return this;
}

// ~FAsyncWriter @ 1418be870

void __thiscall FAsyncWriter::~FAsyncWriter(FAsyncWriter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  lpCriticalSection = &this->BufferPosCritical;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FArchive__;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    (this->WantsArchiveFlush).Counter = (this->WantsArchiveFlush).Counter + 1;
    UNLOCK();
    FlushBuffer(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->RunCritical);
    DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferPosCritical);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FArchive::~FArchive((FArchive *)&this->_padding_);
    this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
    this->_padding_ = (longlong)&___7FRunnable__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Flush @ 1418daa40

void __thiscall FAsyncWriter::Flush(FAsyncWriter *this)

{
  int *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &(this->Buffer).ArrayNum;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    piVar1 = (int *)((longlong)(this->BufferPosCritical).CriticalSection.Opaque3 + 0xc);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FlushBuffer((FAsyncWriter *)(this[-1].RunCritical.CriticalSection.Opaque3 + 2));
                    /* WARNING: Could not recover jumptable at 0x0001418daa7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FlushArchiveAndResetTimer @ 1418dadc0

void __thiscall FAsyncWriter::FlushArchiveAndResetTimer(FAsyncWriter *this)

{
  LARGE_INTEGER local_res8 [4];
  
  (**(code **)(*(longlong *)this->Ar + 0x208))();
  QueryPerformanceCounter(local_res8);
  this->LastArchiveFlushTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// FlushBuffer @ 1418dae20

void __thiscall FAsyncWriter::FlushBuffer(FAsyncWriter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  
  LOCK();
  (this->SerializeRequestCounter).Counter = (this->SerializeRequestCounter).Counter + 1;
  UNLOCK();
  if (this->Thread == (FRunnableThread *)0x0) {
    SerializeBufferToArchive(this);
  }
  else {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->RunCritical);
    if (BVar4 != 0) {
      SerializeBufferToArchive(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->RunCritical);
    }
  }
  iVar1 = (this->SerializeRequestCounter).Counter;
  while (iVar1 != 0) {
    FWindowsPlatformProcess::SleepNoStats(0.0);
    iVar1 = (this->SerializeRequestCounter).Counter;
  }
  if (((this->SerializeRequestCounter).Counter != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializeRequestCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
                         ,0x9d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// GetSingleThreadInterface @ 1418e1770

FSingleThreadRunnable * __thiscall FAsyncWriter::GetSingleThreadInterface(FAsyncWriter *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FAsyncWriter *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 1418e2840

bool __thiscall FAsyncWriter::Init(FAsyncWriter *this)

{
  return true;
}

// Run @ 1418f33b0

uint __thiscall FAsyncWriter::Run(FAsyncWriter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  float fVar2;
  double dVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  lpCriticalSection = &this->RunCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar3 = __real_4170000000000000;
    fVar2 = __real_3c23d70a;
    iVar1 = (this->StopTaskCounter).Counter;
    while (iVar1 == 0) {
      if ((this->SerializeRequestCounter).Counter < 1) {
        QueryPerformanceCounter(&local_res8);
        if (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
            this->LastArchiveFlushTime <= (double)GLogFlushIntervalSec) {
          FWindowsPlatformProcess::SleepNoStats(fVar2);
        }
        else {
          (**(code **)(*(longlong *)this->Ar + 0x208))();
          QueryPerformanceCounter(&local_res10);
          this->LastArchiveFlushTime =
               (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
        }
      }
      else {
        SerializeBufferToArchive(this);
      }
      iVar1 = (this->StopTaskCounter).Counter;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 1418f4760

void __thiscall FAsyncWriter::Serialize(FAsyncWriter *this,void *param_1,long64 param_2)

{
  FArchive **ppFVar1;
  int *lpCriticalSection;
  FThreadSafeCounter *pFVar2;
  void **ppvVar3;
  longlong lVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  size_t _Size;
  uint uVar11;
  
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    lpCriticalSection = &(this->Buffer).ArrayNum;
    if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = *(int *)((longlong)&(this->Buffer).AllocatorInstance.Data + 4);
    iVar8 = *(int *)&(this->Buffer).AllocatorInstance.Data;
    iVar9 = iVar8 - iVar5;
    if (iVar8 <= iVar5) {
      iVar9 = iVar9 + *(int *)&this->Ar;
    }
    if ((iVar9 <= param_2) &&
       (FlushBuffer((FAsyncWriter *)(this[-1].RunCritical.CriticalSection.Opaque3 + 2)),
       *(int *)&this->Ar <= param_2)) {
      pFVar2 = &this->StopTaskCounter;
      iVar8 = *(int *)&this->Ar;
      ppFVar1 = &this->Ar;
      uVar10 = (int)param_2 + 1;
      if (iVar8 < (int)uVar10) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar10 - iVar8,(ForAnyElementType *)pFVar2,(int *)ppFVar1,
                   (int *)((longlong)&this->Ar + 4));
      }
      else {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if ((int)uVar10 < iVar8) {
          uVar11 = iVar8 - uVar10;
          if (((int)(uVar11 | uVar10) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar11 != 0) {
            iVar8 = (*(int *)ppFVar1 - uVar11) - uVar10;
            if (iVar8 != 0) {
              memmove((void *)(*(longlong *)pFVar2 + (longlong)(int)uVar10),
                      (void *)(*(longlong *)pFVar2 + (longlong)(int)uVar10 + (longlong)(int)uVar11),
                      (longlong)iVar8);
            }
            *(uint *)ppFVar1 = *(int *)ppFVar1 - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(ForAnyElementType *)pFVar2,*(int *)ppFVar1,
                       (int *)((longlong)&this->Ar + 4));
          }
        }
      }
    }
    lVar4 = param_2 + iVar5;
    _Dst = (void *)(*(longlong *)&this->StopTaskCounter + (longlong)iVar5);
    if (*(int *)&this->Ar < lVar4) {
      _Size = (size_t)(*(int *)&this->Ar - iVar5);
      memcpy(_Dst,param_1,_Size);
      _Dst = *(void **)&this->StopTaskCounter;
      param_1 = (void *)(_Size + (longlong)param_1);
      param_2 = param_2 - _Size;
    }
    memcpy(_Dst,param_1,param_2);
    LOCK();
    *(int *)((longlong)&(this->Buffer).AllocatorInstance.Data + 4) =
         (int)(lVar4 % (longlong)*(int *)&this->Ar);
    UNLOCK();
    LOCK();
    ppvVar3 = (this->BufferPosCritical).CriticalSection.Opaque3 + 1;
    *(int *)ppvVar3 = *(int *)ppvVar3 + 1;
    UNLOCK();
    if (this->_padding_ == 0) {
      SerializeBufferToArchive((FAsyncWriter *)(this[-1].RunCritical.CriticalSection.Opaque3 + 2));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SerializeBufferToArchive @ 1418f6c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncWriter::SerializeBufferToArchive(FAsyncWriter *this)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  int iVar3;
  TAtomic<int> TVar4;
  TAtomic<int> TVar5;
  FArchive *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_void___cdecl_FAsyncWriter::SerializeBufferToArchive(void)_::_2_::FStat_STAT_FAsyncWriter_SerializeBufferToArchive>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  bool bVar19;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FAsyncWriter_SerializeBufferToArchive ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncWriter::SerializeBufferToArchive(void)_::_2_::FStat_STAT_FAsyncWriter_SerializeBufferToArchive>
         )0x0) {
      pFVar14 = ::FName::FName(&local_70,"STAT_FAsyncWriter_SerializeBufferToArchive");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncWriter_SerializeBufferToArchive,
                 *pFVar14,L"STAT_FAsyncWriter_SerializeBufferToArchive","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FAsyncWriter_SerializeBufferToArchive;
  if (StatPtr_STAT_FAsyncWriter_SerializeBufferToArchive ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncWriter::SerializeBufferToArchive(void)_::_2_::FStat_STAT_FAsyncWriter_SerializeBufferToArchive>
       )0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_FAsyncWriter_SerializeBufferToArchive");
    FVar15 = (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncWriter::SerializeBufferToArchive(void)_::_2_::FStat_STAT_FAsyncWriter_SerializeBufferToArchive>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAsyncWriter_SerializeBufferToArchive,*pFVar14,
                          L"STAT_FAsyncWriter_SerializeBufferToArchive","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar17.Value;
        local_res18.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
                   ,0x59);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar17.Value;
      uStackX_14 = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_1418f6de5;
    }
  }
  bVar10 = false;
  FVar18 = local_60;
LAB_1418f6de5:
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FAsyncWriter_SerializeBufferToArchive");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"FAsyncWriter_SerializeBufferToArchive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  dVar12 = __real_4170000000000000;
  iVar3 = (this->SerializeRequestCounter).Counter;
  do {
    if (iVar3 < 1) {
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar10) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_50[0].NameAndInfo.Index = FVar18.ComparisonIndex.Value;
          local_50[0].NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_78);
          local_50[0].StatData.Pad[4] = '\0';
          local_50[0].StatData.Pad[5] = '\0';
          local_50[0].StatData.Pad[6] = '\0';
          local_50[0].StatData.Pad[7] = '\0';
          local_50[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
          local_50[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
          local_50[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
          local_50[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,local_50);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return;
    }
    TVar4 = this->BufferStartPos;
    TVar5 = this->BufferEndPos;
    pFVar6 = this->Ar;
    pFVar7 = (this->Buffer).AllocatorInstance.Data;
    if ((int)TVar5 < (int)TVar4) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))
                (pFVar6,pFVar7 + (int)TVar4,(longlong)((this->Buffer).ArrayNum - (int)TVar4));
      (**(code **)(*(longlong *)this->Ar + 0x188))(this->Ar,(this->Buffer).AllocatorInstance.Data);
    }
    else {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,pFVar7 + (int)TVar4);
    }
    this->BufferStartPos = TVar5;
    LOCK();
    (this->SerializeRequestCounter).Counter = (this->SerializeRequestCounter).Counter + -1;
    UNLOCK();
    if ((this->Thread != (FRunnableThread *)0x0) &&
       (QueryPerformanceCounter(&local_res20),
       (double)GLogFlushIntervalSec <
       ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12) -
       this->LastArchiveFlushTime)) {
      (**(code **)(*(longlong *)this->Ar + 0x208))();
      QueryPerformanceCounter(&local_88);
      this->LastArchiveFlushTime =
           (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
    }
    if (0 < (this->WantsArchiveFlush).Counter) {
      (**(code **)(*(longlong *)this->Ar + 0x208))();
      QueryPerformanceCounter(&local_80);
      this->LastArchiveFlushTime =
           (double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
      LOCK();
      pFVar2 = &this->WantsArchiveFlush;
      iVar3 = pFVar2->Counter;
      pFVar2->Counter = pFVar2->Counter + -1;
      UNLOCK();
      if ((iVar3 + -1 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("FlushCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
                              ,0x85,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar3 = (this->SerializeRequestCounter).Counter;
  } while( true );
}

// Stop @ 1418f9a40

void __thiscall FAsyncWriter::Stop(FAsyncWriter *this)

{
  LOCK();
  (this->StopTaskCounter).Counter = (this->StopTaskCounter).Counter + 1;
  UNLOCK();
  return;
}

// Tick @ 1418fa780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncWriter::Tick(FAsyncWriter *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FAsyncWriter::Tick(void)_::_2_::FStat_STAT_FAsyncWriter_Tick>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FAsyncWriter_Tick ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FAsyncWriter::Tick(void)_::_2_::FStat_STAT_FAsyncWriter_Tick>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_FAsyncWriter_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncWriter_Tick,*pFVar5,
                   L"STAT_FAsyncWriter_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                   ,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FAsyncWriter_Tick;
  if (StatPtr_STAT_FAsyncWriter_Tick ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FAsyncWriter::Tick(void)_::_2_::FStat_STAT_FAsyncWriter_Tick>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_FAsyncWriter_Tick");
    FVar6 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FAsyncWriter::Tick(void)_::_2_::FStat_STAT_FAsyncWriter_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncWriter_Tick,*pFVar5,
                         L"STAT_FAsyncWriter_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
                   ,0x138);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1418fa905;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1418fa905:
  if (*(int *)((this->BufferPosCritical).CriticalSection.Opaque3 + 2) < 1) {
    QueryPerformanceCounter(&local_res8);
    if ((double)GLogFlushIntervalSec <
        ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
         FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) -
        (double)(this->RunCritical).CriticalSection.Opaque3[2]) {
      FlushArchiveAndResetTimer((FAsyncWriter *)&this[-1].LastArchiveFlushTime);
    }
  }
  else {
    SerializeBufferToArchive((FAsyncWriter *)&this[-1].LastArchiveFlushTime);
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
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  return;
}

