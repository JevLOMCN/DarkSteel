// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 28

// FThreadHeartBeat @ 1416d71e0

FThreadHeartBeat * __thiscall FThreadHeartBeat::FThreadHeartBeat(FThreadHeartBeat *this)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  FFakeThread *pFVar6;
  FThreadHeartBeat *pFVar7;
  FStartupMessages *this_00;
  FName *pFVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  
  this->_padding_ = (longlong)&___7FThreadHeartBeat__6B_;
  this->Thread = (FRunnableThread *)0x0;
  (this->StopTaskCounter).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HeartBeatCritical,4000);
  *(undefined8 *)&this->ThreadHeartBeat = 0;
  *(undefined8 *)&(this->ThreadHeartBeat).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadHeartBeat).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadHeartBeat).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x48 = 0;
  (this->PresentHeartBeat).LastHeartBeatTime = 0.0;
  (this->PresentHeartBeat).LastHangTime = 0.0;
  (this->PresentHeartBeat).SuspendedCount = 0;
  (this->PresentHeartBeat).HangDuration = 0.0;
  (this->PresentHeartBeat).LastStuckTime = 0.0;
  (this->PresentHeartBeat).StuckDuration = 0.0;
  (this->PresentHeartBeat).HeartBeatName.ComparisonIndex = 0;
  (this->PresentHeartBeat).HeartBeatName.Number = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FunctionHeartBeatCritical,4000);
  *(undefined8 *)&this->FunctionHeartBeat = 0;
  *(undefined8 *)&(this->FunctionHeartBeat).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionHeartBeat).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionHeartBeat).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CheckpointHeartBeatCritical,4000)
  ;
  dVar3 = __real_43e0000000000000;
  dVar11 = __real_3ff0000000000000;
  lVar9 = 0;
  *(undefined8 *)&this->CheckpointHeartBeat = 0;
  *(undefined8 *)&(this->CheckpointHeartBeat).field_0x8 = 0;
  *(undefined8 *)&(this->CheckpointHeartBeat).field_0x20 = 0;
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x28 = 0;
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x34 = 0;
  *(undefined8 *)&(this->CheckpointHeartBeat).field_0x40 = 0;
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x48 = 0;
  this->bReadyToCheckHeartbeat = (FThreadSafeBool)0x0;
  this->ConfigHangDuration = 0.0;
  this->ConfigPresentDuration = 0.0;
  this->CurrentHangDuration = 0.0;
  this->CurrentPresentDuration = 0.0;
  this->ConfigStuckDuration = 0.0;
  this->CurrentStuckDuration = 0.0;
  this->HangDurationMultiplier = 1.0;
  this->LastHangCallstackCRC = 0;
  this->LastHungThreadId = 0xffffffff;
  this->LastStuckThreadId = 0xffffffff;
  this->bHangsAreFatal = false;
  (this->GlobalSuspendCount).Counter = 0;
  this->CheckpointSuspendCount = 0;
  dVar11 = dVar11 / FGenericPlatformTime::SecondsPerCycle64 +
           dVar11 / FGenericPlatformTime::SecondsPerCycle64;
  if ((dVar3 <= dVar11) && (dVar11 = dVar11 - dVar3, dVar11 < dVar3)) {
    lVar9 = -0x8000000000000000;
  }
  (this->Clock).MaxTimeStepCycles = (longlong)dVar11 + lVar9;
  QueryPerformanceCounter(&local_res8);
  (this->Clock).CurrentCycles = (ulong64)local_res8;
  (this->Clock).LastRealTickCycles = (ulong64)local_res8;
  *(undefined8 *)&this->OnStuck = 0;
  *(undefined8 *)&(this->OnStuck).field_0x8 = 0;
  *(undefined4 *)&(this->OnStuck).field_0x10 = 0;
  *(undefined8 *)&this->OnUnstuck = 0;
  *(undefined8 *)&(this->OnUnstuck).field_0x8 = 0;
  *(undefined4 *)&(this->OnUnstuck).field_0x10 = 0;
  *(undefined8 *)&this->OnHangDelegate = 0;
  *(undefined8 *)&(this->OnHangDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnHangDelegate).field_0x10 = 0;
  (this->PresentHeartBeat).SuspendedCount = 1;
  InitSettingsInternal(this);
  bVar4 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if ((!bVar4) || ((this->ConfigHangDuration <= 0.0 && (this->ConfigPresentDuration <= 0.0)))) {
    this->ConfigHangDuration = 0.0;
    this->ConfigPresentDuration = 0.0;
    return this;
  }
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar4) {
    return this;
  }
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar4) {
    pFVar6 = (FFakeThread *)FWindowsPlatformProcess::CreateRunnableThread();
  }
  else {
    pcVar2 = *(code **)(this->_padding_ + 0x20);
    if (((pcVar2 == FRunnable::GetSingleThreadInterface) || (lVar9 = (*pcVar2)(this), lVar9 == 0))
       || (pFVar6 = ::operator_new(0x48), pFVar6 == (FFakeThread *)0x0)) goto LAB_1416d7592;
    pFVar6 = FFakeThread::FFakeThread(pFVar6);
  }
  if (pFVar6 != (FFakeThread *)0x0) {
    cVar5 = (**(code **)(pFVar6->_padding_ + 0x38))
                      (pFVar6,this,L"FHeartBeatThread",0,1,0xffffffffffffffff,0);
    if (cVar5 != '\0') {
      pwVar10 = L"";
      if (((FRunnable *)pFVar6->_padding_ == (FRunnable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewThread->Runnable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                             ,0x385,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FThreadHeartBeat *)(*pcVar2)();
        return pFVar7;
      }
      this_00 = FStartupMessages::Get();
      uVar1 = *(uint *)((longlong)&pFVar6->_padding_ + 4);
      if ((int)pFVar6->_padding_ != 0) {
        pwVar10 = (wchar_t *)(((FString *)&pFVar6->_padding_)->Data).AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_res10,pwVar10);
      FStartupMessages::AddThreadMetadata(this_00,*pFVar8,uVar1);
      this->Thread = (FRunnableThread *)pFVar6;
      return this;
    }
    (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1);
  }
LAB_1416d7592:
  this->Thread = (FRunnableThread *)0x0;
  return this;
}

// ~FThreadHeartBeat @ 1416d9630

void __thiscall FThreadHeartBeat::~FThreadHeartBeat(FThreadHeartBeat *this)

{
  FRunnableThread *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FThreadHeartBeat__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHangDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnstuck);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStuck);
  *(undefined4 *)&(this->CheckpointHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CheckpointHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CheckpointHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CheckpointHeartBeatCritical);
  *(undefined4 *)&(this->FunctionHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FunctionHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FunctionHeartBeatCritical);
  *(undefined4 *)&(this->ThreadHeartBeat).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadHeartBeat).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadHeartBeat);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HeartBeatCritical);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// CheckCheckpointHeartBeat @ 1416e1a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FThreadHeartBeat::CheckCheckpointHeartBeat(FThreadHeartBeat *this,double *param_1)

{
  ulonglong uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  DWORD DVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_d8;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar14 = FCommandLine::Get();
    bCheckpointDisabled = FParse::Param(pwVar14,L"nocheckpointhangdetector");
    _Init_thread_footer(&::_TSS0);
  }
  bVar11 = IsEnabled(this);
  if ((bVar11) && (bCheckpointDisabled == false)) {
    dVar9 = FThreadHeartBeatClock::Seconds(&this->Clock);
    lpCriticalSection = &this->CheckpointHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0.0 < this->ConfigHangDuration) {
      iStack_c0 = 0;
      puVar2 = &(this->CheckpointHeartBeat).field_0x10;
      iVar5 = *(int *)&(this->CheckpointHeartBeat).field_0x28;
      local_c8 = &this->CheckpointHeartBeat;
      uStack_bc = 1;
      local_a8 = 0;
      iStack_ac = 0;
      if (iVar5 != 0) {
        puVar18 = *(uint **)&(this->CheckpointHeartBeat).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar2;
        }
        uVar12 = *puVar18;
        while (uVar12 == 0) {
          lVar15 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1416e1b8e;
          uVar12 = puVar18[lVar15 + 1];
        }
        uStack_bc = -uVar12 & uVar12;
        uVar1 = (ulonglong)uStack_bc * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res20 = (int)lVar15;
        iStack_ac = local_a8 + -1 + local_res20;
        if (iVar5 < iStack_ac) {
          iStack_ac = iVar5;
        }
      }
LAB_1416e1b8e:
      uVar12 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
      iStack_a0 = *(int *)&(this->CheckpointHeartBeat).field_0x8 -
                  *(int *)&(this->CheckpointHeartBeat).field_0x34;
      uVar19 = uVar12 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar12 >> 5;
      TStack_90._28_4_ = iStack_ac;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_b8 = puVar2;
      iStack_a4 = iStack_ac;
      local_98 = local_c8;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return uVar12;
      }
      uVar6 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
      if (uVar12 != uVar6) {
        puVar17 = *(undefined1 **)&(this->CheckpointHeartBeat).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar2;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
        while (uVar12 == 0) {
          lVar15 = (longlong)iVar16;
          uVar19 = uVar19 + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_1416e1c9b;
          uVar12 = *(uint *)(puVar17 + lVar15 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar12 = (int)lVar15 + -1 + uVar19;
        if ((int)uVar6 < (int)uVar12) {
          uVar12 = uVar6;
        }
      }
LAB_1416e1c9b:
      while( true ) {
        pTVar10 = local_98;
        if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        lVar15 = (longlong)TStack_90.CurrentBitIndex;
        if (((TStack_90.CurrentBitIndex == uVar12) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar10 == &this->CheckpointHeartBeat)) break;
        lVar7 = *(longlong *)pTVar10;
        if (*(int *)(lVar7 + 0x18 + lVar15 * 0x48) == 0) {
          dVar3 = *(double *)(lVar7 + 8 + lVar15 * 0x48);
          dVar4 = *(double *)(lVar7 + 0x20 + lVar15 * 0x48);
          if (((dVar4 < dVar9 - dVar3) && (*(double *)(lVar7 + 0x10 + lVar15 * 0x48) <= dVar3)) &&
             (0.0 < dVar4)) {
            if (2 < (byte)LogCore._0_1_) {
              ::FName::ToString((FName *)(lVar7 + 0x38 + lVar15 * 0x48),&local_d8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
            }
            *(double *)(lVar7 + 0x10 + lVar15 * 0x48) = dVar9;
            *param_1 = *(double *)(lVar7 + 0x20 + lVar15 * 0x48);
            DVar13 = GetCurrentThreadId();
            this->LastHungThreadId = DVar13;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            _DAT_00000003 = 0xe0000001;
            return 0;
          }
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0xffffffff;
}

// CheckFunctionHeartBeat @ 1416e1e70

uint __thiscall FThreadHeartBeat::CheckFunctionHeartBeat(FThreadHeartBeat *this,double *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar9 = IsEnabled(this);
  if (bVar9) {
    dVar8 = FThreadHeartBeatClock::Seconds(&this->Clock);
    lpCriticalSection = &this->FunctionHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0.0 < this->ConfigHangDuration) {
      iVar14 = 0;
      puVar1 = &(this->FunctionHeartBeat).field_0x10;
      uVar10 = 1;
      iVar5 = *(int *)&(this->FunctionHeartBeat).field_0x28;
      iVar16 = 0;
      iVar11 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(this->FunctionHeartBeat).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar11 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1416e1f6f;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar10 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res20 = (int)lVar12;
        iVar11 = iVar16 + -1 + local_res20;
        if (iVar5 < iVar11) {
          iVar11 = iVar5;
        }
      }
LAB_1416e1f6f:
      uVar13 = *(uint *)&(this->FunctionHeartBeat).field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uVar10,iVar14);
      TStack_70.CurrentBitIndex = iVar11;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_70._28_4_ = iVar11;
      TStack_70.BaseBitIndex = iVar16;
      uStack_50 = CONCAT44(uStack_7c,
                           *(int *)&(this->FunctionHeartBeat).field_0x8 -
                           *(int *)&(this->FunctionHeartBeat).field_0x34);
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return uVar10;
      }
      uVar10 = *(uint *)&(this->FunctionHeartBeat).field_0x28;
      if (uVar13 != uVar10) {
        puVar15 = *(undefined1 **)&(this->FunctionHeartBeat).field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1416e2090;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar10 < (int)uVar13) {
          uVar13 = uVar10;
        }
      }
LAB_1416e2090:
      while( true ) {
        if (*(int *)&(this->FunctionHeartBeat).field_0x8 -
            *(int *)&(this->FunctionHeartBeat).field_0x34 != (int)uStack_50) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        lVar12 = (longlong)TStack_70.CurrentBitIndex;
        if ((TStack_70.CurrentBitIndex == uVar13) &&
           (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        lVar6 = *(longlong *)&this->FunctionHeartBeat;
        if (*(int *)(lVar6 + 0x18 + lVar12 * 0x48) == 0) {
          dVar3 = *(double *)(lVar6 + 8 + lVar12 * 0x48);
          dVar4 = *(double *)(lVar6 + 0x20 + lVar12 * 0x48);
          if ((dVar4 < dVar8 - dVar3) && (*(double *)(lVar6 + 0x10 + lVar12 * 0x48) <= dVar3)) {
            *(double *)(lVar6 + 0x10 + lVar12 * 0x48) = dVar8;
            *param_1 = dVar4;
            uVar10 = *(uint *)(lVar6 + lVar12 * 0x48);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return uVar10;
          }
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0xffffffff;
}

// CheckHeartBeat @ 1416e2150

uint __thiscall FThreadHeartBeat::CheckHeartBeat(FThreadHeartBeat *this,double *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FHeartBeatInfo *pFVar16;
  longlong lVar17;
  FReadAccessScope *this_00;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80 [3];
  
  bVar12 = IsEnabled(this);
  if (bVar12) {
    dVar10 = FThreadHeartBeatClock::Seconds(&this->Clock);
    lpCriticalSection = &this->HeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0.0 < this->ConfigHangDuration) {
      iVar6 = *(int *)&(this->ThreadHeartBeat).field_0x28;
      iVar18 = 0;
      uVar15 = 0xffffffff;
      dVar5 = 0.0;
      uVar13 = 1;
      iVar20 = 0;
      iVar14 = 0;
      if (iVar6 != 0) {
        puVar21 = *(uint **)&(this->ThreadHeartBeat).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)&(this->ThreadHeartBeat).field_0x10;
        }
        uVar22 = *puVar21;
        while (uVar22 == 0) {
          lVar17 = (longlong)iVar18;
          iVar20 = iVar20 + 0x20;
          iVar18 = iVar18 + 1;
          iVar14 = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1416e2263;
          uVar22 = puVar21[lVar17 + 1];
        }
        uVar13 = -uVar22 & uVar22;
        uVar1 = (ulonglong)uVar13 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_res20 = (int)lVar17;
        iVar14 = iVar20 + -1 + local_res20;
        if (iVar6 < iVar14) {
          iVar14 = iVar6;
        }
      }
LAB_1416e2263:
      TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadHeartBeat).field_0x10;
      uVar22 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
      uVar23 = uVar22 & 0xffffffe0;
      TStack_f0._padding_ = CONCAT44(uVar13,iVar18);
      TStack_f0.CurrentBitIndex = iVar14;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar22 >> 5;
      TStack_f0._28_4_ = iVar14;
      TStack_f0.BaseBitIndex = iVar20;
      uStack_d0 = CONCAT44(uStack_fc,
                           *(int *)&(this->ThreadHeartBeat).field_0x8 -
                           *(int *)&(this->ThreadHeartBeat).field_0x34);
      if ((((int)uVar22 < 0) || (iVar6 < (int)uVar22)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return uVar15;
      }
      uVar13 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
      if (uVar22 != uVar13) {
        puVar19 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = &(this->ThreadHeartBeat).field_0x10;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
        while (uVar22 == 0) {
          lVar17 = (longlong)iVar18;
          uVar23 = uVar23 + 0x20;
          iVar18 = iVar18 + 1;
          uVar22 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1416e2380;
          uVar22 = *(uint *)(puVar19 + lVar17 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar22 = (int)lVar17 + -1 + uVar23;
        if ((int)uVar13 < (int)uVar22) {
          uVar22 = uVar13;
        }
      }
LAB_1416e2380:
      do {
        if (*(int *)&(this->ThreadHeartBeat).field_0x8 - *(int *)&(this->ThreadHeartBeat).field_0x34
            != (int)uStack_d0) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        lVar17 = (longlong)TStack_f0.CurrentBitIndex;
        if ((TStack_f0.CurrentBitIndex == uVar22) &&
           (TStack_f0.Array ==
            (TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadHeartBeat).field_0x10)) {
          if (uVar15 != 0xffffffff) {
            uVar13 = this->LastStuckThreadId;
            if (uVar13 != uVar15) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnstuck,
                         &local_c8);
              if ((*(int *)&(this->OnUnstuck).field_0x10 != 0) &&
                 (plVar8 = *(longlong **)&(this->OnUnstuck).field_0x8, plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 0x68))(plVar8,uVar13);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_c8);
            }
            this->LastStuckThreadId = uVar15;
            pFVar16 = TMapBase<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
                                     *)&this->ThreadHeartBeat,uVar15);
            pFVar16->LastStuckTime = dVar10;
            uVar15 = this->LastStuckThreadId;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnStuck,
                       &local_b0);
            if ((*(int *)&(this->OnStuck).field_0x10 != 0) &&
               (plVar8 = *(longlong **)&(this->OnStuck).field_0x8, plVar8 != (longlong *)0x0)) {
              (**(code **)(*plVar8 + 0x68))(plVar8,uVar15);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b0);
          }
          break;
        }
        lVar7 = *(longlong *)&this->ThreadHeartBeat;
        if (*(int *)(lVar7 + 0x18 + lVar17 * 0x48) == 0) {
          dVar3 = *(double *)(lVar7 + 8 + lVar17 * 0x48);
          dVar4 = *(double *)(lVar7 + 0x20 + lVar17 * 0x48);
          dVar11 = dVar10 - dVar3;
          if ((dVar4 < dVar11) && (*(double *)(lVar7 + 0x10 + lVar17 * 0x48) <= dVar3)) {
            *(double *)(lVar7 + 0x10 + lVar17 * 0x48) = dVar10;
            *param_1 = dVar4;
            uVar15 = *(uint *)(lVar7 + lVar17 * 0x48);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return uVar15;
          }
          if (*(double *)(lVar7 + 0x28 + lVar17 * 0x48) <= dVar3) {
            pdVar2 = (double *)(lVar7 + 0x30 + lVar17 * 0x48);
            uVar13 = this->LastStuckThreadId;
            if (dVar11 < *pdVar2 || dVar11 == *pdVar2) {
              if (*(uint *)(lVar7 + lVar17 * 0x48) == uVar13) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &this->OnUnstuck,&local_98);
                if ((*(int *)&(this->OnUnstuck).field_0x10 != 0) &&
                   (plVar8 = *(longlong **)&(this->OnUnstuck).field_0x8, plVar8 != (longlong *)0x0))
                {
                  (**(code **)(*plVar8 + 0x68))(plVar8,uVar13);
                }
                this_00 = &local_98;
                goto LAB_1416e24a3;
              }
            }
            else if ((uVar13 == 0xffffffff) || (dVar5 < dVar11)) {
              uVar15 = *(uint *)(lVar7 + lVar17 * 0x48);
              dVar5 = dVar11;
            }
          }
        }
        else {
          uVar13 = this->LastStuckThreadId;
          if (*(uint *)(lVar7 + lVar17 * 0x48) == uVar13) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnstuck,
                       local_80);
            if ((*(int *)&(this->OnUnstuck).field_0x10 != 0) &&
               (plVar8 = *(longlong **)&(this->OnUnstuck).field_0x8, plVar8 != (longlong *)0x0)) {
              (**(code **)(*plVar8 + 0x68))(plVar8,uVar13);
            }
            this_00 = local_80;
LAB_1416e24a3:
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(this_00);
            this->LastStuckThreadId = 0xffffffff;
          }
        }
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      } while( true );
    }
    if (((0.0 < this->ConfigPresentDuration) && ((this->PresentHeartBeat).SuspendedCount == 0)) &&
       (dVar5 = (this->PresentHeartBeat).HangDuration,
       dVar5 < dVar10 - (this->PresentHeartBeat).LastHeartBeatTime)) {
      (this->PresentHeartBeat).LastHeartBeatTime = dVar10;
      *param_1 = dVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return 0xfffffffe;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0xffffffff;
}

// Get @ 1416f1470

FThreadHeartBeat * __cdecl FThreadHeartBeat::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FThreadHeartBeat *pFVar3;
  FThreadHeartBeat *this;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Singleton != (FThreadHeartBeat *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                           ,0x7f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FThreadHeartBeat *)(*pcVar1)();
          return pFVar3;
        }
      }
      this = ::operator_new(0x270);
      pFVar3 = (FThreadHeartBeat *)0x0;
      if (this != (FThreadHeartBeat *)0x0) {
        pFVar3 = FThreadHeartBeat(this);
      }
      Singleton = pFVar3;
      Helper.Instance = pFVar3;
      atexit(`FThreadHeartBeat::Get'::__l2::_dynamic_atexit_destructor_for__Helper__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return Helper.Instance;
}

// GetNoInit @ 1416f9680

FThreadHeartBeat * __cdecl FThreadHeartBeat::GetNoInit(void)

{
  return Singleton;
}

// HeartBeat @ 1416fd800

void __thiscall FThreadHeartBeat::HeartBeat(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  
  bVar1 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar1) {
    local_res10[0] = GetCurrentThreadId();
    lpCriticalSection = &this->HeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34) {
      puVar3 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->ThreadHeartBeat).field_0x38;
      }
      iVar2 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(this->ThreadHeartBeat).field_0x48 - 1U & local_res10[0])
                                * 4);
      if (iVar2 != -1) {
        do {
          lVar4 = *(longlong *)&this->ThreadHeartBeat + (longlong)iVar2 * 0x48;
          if (*(uint *)(*(longlong *)&this->ThreadHeartBeat + (longlong)iVar2 * 0x48) ==
              local_res10[0]) {
            if (lVar4 != 0) goto LAB_1416fd8d6;
            break;
          }
          iVar2 = *(int *)(lVar4 + 0x40);
        } while (iVar2 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                *)&this->ThreadHeartBeat,(uint)local_res18,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res10[0],
               (bool *)&local_res20);
    lVar4 = *(longlong *)&this->ThreadHeartBeat + (longlong)local_res18[0] * 0x48;
LAB_1416fd8d6:
    dVar5 = FThreadHeartBeatClock::Seconds(&this->Clock);
    *(double *)(lVar4 + 8) = dVar5;
    *(double *)(lVar4 + 0x20) = this->CurrentHangDuration;
    *(double *)(lVar4 + 0x30) = this->CurrentStuckDuration;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// HeartBeat @ 1416fd930

void __thiscall FThreadHeartBeat::HeartBeat(FThreadHeartBeat *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  TKeyInitializer<unsigned_int_const_&> *pTVar5;
  double dVar6;
  uint local_res18 [2];
  int local_res20 [2];
  uint *local_28 [2];
  
  bVar1 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar1) {
    local_res18[0] = GetCurrentThreadId();
    lpCriticalSection = &this->HeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18[0];
    if (((param_1) && (local_res18[0] == GGameThreadId)) && (GConfig != (FConfigCacheIni *)0x0)) {
      InitSettingsInternal(this);
      pTVar5 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18[0];
    }
    if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34) {
      puVar3 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->ThreadHeartBeat).field_0x38;
      }
      iVar2 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->ThreadHeartBeat).field_0x48 - 1) &
                                (ulonglong)pTVar5) * 4);
      if (iVar2 != -1) {
        do {
          lVar4 = *(longlong *)&this->ThreadHeartBeat + (longlong)iVar2 * 0x48;
          if (*(int *)(*(longlong *)&this->ThreadHeartBeat + (longlong)iVar2 * 0x48) == (int)pTVar5)
          {
            if (lVar4 != 0) goto LAB_1416fda36;
            break;
          }
          iVar2 = *(int *)(lVar4 + 0x40);
        } while (iVar2 != -1);
      }
    }
    local_28[0] = local_res18;
    TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                *)&this->ThreadHeartBeat,(uint)local_res20,pTVar5,(bool *)local_28);
    lVar4 = *(longlong *)&this->ThreadHeartBeat + (longlong)local_res20[0] * 0x48;
LAB_1416fda36:
    dVar6 = FThreadHeartBeatClock::Seconds(&this->Clock);
    *(double *)(lVar4 + 8) = dVar6;
    *(double *)(lVar4 + 0x20) = this->CurrentHangDuration;
    *(double *)(lVar4 + 0x30) = this->CurrentStuckDuration;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Init @ 1416fe460

bool __thiscall FThreadHeartBeat::Init(FThreadHeartBeat *this)

{
  return true;
}

// InitSettings @ 1416fe480

void __thiscall FThreadHeartBeat::InitSettings(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if ((DVar1 == GGameThreadId) && (GConfig != (FConfigCacheIni *)0x0)) {
    lpCriticalSection = &this->HeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    InitSettingsInternal(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// InitSettingsInternal @ 1416fe4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadHeartBeat::InitSettingsInternal(FThreadHeartBeat *this)

{
  undefined1 *puVar1;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  double *pdVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  double local_res20;
  double local_d8;
  double local_d0;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  
  dVar5 = __real_3ff0000000000000;
  uVar20 = SUB84(__real_4039000000000000,0);
  uVar18 = (undefined4)((ulonglong)__real_4039000000000000 >> 0x20);
  uVar17 = SUB84(__real_3ff0000000000000,0);
  uVar19 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_res20 = __real_3ff0000000000000;
  local_d8 = __real_4039000000000000;
  local_d0 = 0.0;
  local_res8[0] = false;
  uVar21 = 0;
  uVar22 = 0;
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetDouble(GConfig,L"Core.System",L"StuckDuration",&local_res20,&GEngineIni);
    FConfigCacheIni::GetDouble(GConfig,L"Core.System",L"HangDuration",&local_d8,&GEngineIni);
    FConfigCacheIni::GetDouble(GConfig,L"Core.System",L"PresentHangDuration",&local_d0,&GEngineIni);
    FConfigCacheIni::GetBool(GConfig,L"Core.System",L"HangsAreFatal",local_res8,&GEngineIni);
    uVar18 = (undefined4)((ulonglong)local_res20 >> 0x20);
    uVar20 = SUB84(local_res20,0);
    if ((0.0 < local_res20) && (local_res20 < dVar5)) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      local_res20 = dVar5;
      uVar20 = uVar17;
      uVar18 = uVar19;
    }
    uVar19 = uVar18;
    uVar17 = uVar20;
    dVar5 = __real_4014000000000000;
    uVar18 = (undefined4)((ulonglong)local_d8 >> 0x20);
    uVar23 = SUB84(__real_4014000000000000,0);
    uVar24 = (undefined4)((ulonglong)__real_4014000000000000 >> 0x20);
    uVar20 = SUB84(local_d8,0);
    if ((0.0 < local_d8) && (local_d8 < __real_4014000000000000)) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        uVar17 = SUB84(local_res20,0);
        uVar19 = (undefined4)((ulonglong)local_res20 >> 0x20);
      }
      local_d8 = dVar5;
      uVar20 = uVar23;
      uVar18 = uVar24;
    }
    uVar22 = (undefined4)((ulonglong)local_d0 >> 0x20);
    uVar21 = SUB84(local_d0,0);
    if ((0.0 < local_d0) && (local_d0 < dVar5)) {
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        uVar17 = SUB84(local_res20,0);
        uVar19 = (undefined4)((ulonglong)local_res20 >> 0x20);
        uVar20 = SUB84(local_d8,0);
        uVar18 = (undefined4)((ulonglong)local_d8 >> 0x20);
      }
      local_d0 = dVar5;
      uVar21 = uVar23;
      uVar22 = uVar24;
    }
  }
  puVar1 = &(this->ThreadHeartBeat).field_0x10;
  pTVar2 = &this->ThreadHeartBeat;
  *(undefined4 *)&this->ConfigStuckDuration = uVar17;
  *(undefined4 *)((longlong)&this->ConfigStuckDuration + 4) = uVar19;
  *(undefined4 *)&this->CurrentStuckDuration = uVar17;
  *(undefined4 *)((longlong)&this->CurrentStuckDuration + 4) = uVar19;
  iStack_c0 = 0;
  this->bHangsAreFatal = local_res8[0];
  uStack_bc = 1;
  this->ConfigHangDuration = (double)CONCAT44(uVar18,uVar20);
  local_a8 = 0;
  this->ConfigPresentDuration = (double)CONCAT44(uVar22,uVar21);
  this->CurrentHangDuration = this->HangDurationMultiplier * (double)CONCAT44(uVar18,uVar20);
  this->CurrentPresentDuration = this->HangDurationMultiplier * (double)CONCAT44(uVar22,uVar21);
  iVar6 = *(int *)&(this->ThreadHeartBeat).field_0x28;
  iStack_ac = 0;
  if (iVar6 != 0) {
    puVar15 = *(uint **)&(this->ThreadHeartBeat).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1416fe78d;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_bc = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_res18;
    if (iVar6 < iStack_ac) {
      iStack_ac = iVar6;
    }
  }
LAB_1416fe78d:
  uVar13 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
  uVar16 = uVar13 & 0xffffffe0;
  iStack_a0 = *(int *)&(this->ThreadHeartBeat).field_0x8 -
              *(int *)&(this->ThreadHeartBeat).field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_90._28_4_ = iStack_ac;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = pTVar2;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar6 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar7 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
  if (uVar13 != uVar7) {
    puVar14 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1416fe890;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1416fe890:
  while( true ) {
    pTVar9 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar13) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    dVar5 = this->CurrentHangDuration;
    lVar11 = *(longlong *)pTVar9;
    pdVar4 = (double *)(lVar11 + 0x20 + (longlong)TStack_90.CurrentBitIndex * 0x48);
    if (*pdVar4 <= dVar5 && dVar5 != *pdVar4) {
      *(double *)(lVar11 + 0x20 + (longlong)TStack_90.CurrentBitIndex * 0x48) = dVar5;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  dVar5 = this->CurrentPresentDuration;
  pdVar4 = &(this->PresentHeartBeat).HangDuration;
  if (*pdVar4 <= dVar5 && dVar5 != *pdVar4) {
    (this->PresentHeartBeat).HangDuration = dVar5;
  }
  return;
}

// IsBeating @ 141701660

bool __thiscall FThreadHeartBeat::IsBeating(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  if ((this->GlobalSuspendCount).Counter == 0) {
    DVar2 = GetCurrentThreadId();
    lpCriticalSection = &this->HeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34) {
      puVar5 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->ThreadHeartBeat).field_0x38;
      }
      iVar3 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(this->ThreadHeartBeat).field_0x48 - 1U & DVar2) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *(longlong *)&this->ThreadHeartBeat + (longlong)iVar3 * 0x48;
          if (*(DWORD *)(*(longlong *)&this->ThreadHeartBeat + (longlong)iVar3 * 0x48) == DVar2) {
            lVar4 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar4 = 0;
            }
            if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              return true;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x40);
        } while (iVar3 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// IsEnabled @ 141701a80

bool __thiscall FThreadHeartBeat::IsEnabled(FThreadHeartBeat *this)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar3 = FCommandLine::Get();
    bForceEnabled = FParse::Param(pwVar3,L"debughangdetection");
    _Init_thread_footer(&::_TSS0);
  }
  if ((::_TSS1 <= *(int *)(lVar1 + 0x9d4c)) || (_Init_thread_header(&::_TSS1), ::_TSS1 != -1))
  goto LAB_141701ac8;
  if (bForceEnabled == false) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"nothreadtimeout");
    if (!bVar2) goto LAB_141701bbf;
    bDisabled = true;
  }
  else {
LAB_141701bbf:
    bDisabled = false;
  }
  _Init_thread_footer(&::_TSS1);
LAB_141701ac8:
  if ((((0.0 < this->ConfigHangDuration) || (0.0 < this->ConfigPresentDuration)) &&
      (this->bReadyToCheckHeartbeat != (FThreadSafeBool)0x0)) && (GIsRequestingExit == false)) {
    if ((bForceEnabled == false) && (bVar2 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar2)) {
      return false;
    }
    if ((bDisabled == false) && ((this->GlobalSuspendCount).Counter == 0)) {
      return true;
    }
  }
  return false;
}

// KillHeartBeat @ 141703480

void __thiscall FThreadHeartBeat::KillHeartBeat(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  DWORD DVar1;
  DWORD local_res8 [2];
  
  DVar1 = GetCurrentThreadId();
  lpCriticalSection = &this->HeartBeatCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = DVar1;
    if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34) {
      TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                  *)&this->ThreadHeartBeat,DVar1,local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001417034da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MonitorCheckpointEnd @ 141704d20

void __thiscall FThreadHeartBeat::MonitorCheckpointEnd(FThreadHeartBeat *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  uint uStackX_14;
  FName local_res18;
  
  bVar1 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar1) {
    lpCriticalSection = &this->CheckpointHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res18 = param_1;
    if (*(int *)&(this->CheckpointHeartBeat).field_0x8 !=
        *(int *)&(this->CheckpointHeartBeat).field_0x34) {
      uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      uStackX_14 = param_1.Number;
      TSet<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                           *)&this->CheckpointHeartBeat,uStackX_14 + uVar2,&local_res18);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// MonitorCheckpointStart @ 141704db0

void __thiscall
FThreadHeartBeat::MonitorCheckpointStart(FThreadHeartBeat *this,FName param_1,double param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *this_00;
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  double dVar8;
  FName local_res10;
  TKeyInitializer<FName_const_&> local_res20;
  FName *local_38 [4];
  
  local_res10 = param_1;
  bVar3 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar3) {
    lpCriticalSection = &this->CheckpointHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar2 = local_res10;
    this_00 = &this->CheckpointHeartBeat;
    uVar4 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    if (*(int *)&(this->CheckpointHeartBeat).field_0x8 !=
        *(int *)&(this->CheckpointHeartBeat).field_0x34) {
      puVar7 = *(undefined1 **)&(this->CheckpointHeartBeat).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->CheckpointHeartBeat).field_0x38;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->CheckpointHeartBeat).field_0x48 - 1U &
                                FVar2.Number + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x48;
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x48) == FVar2) {
            lVar6 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar6 = 0;
            }
            if (lVar6 != 0) goto LAB_141704edd;
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x40);
        } while (iVar5 != -1);
      }
    }
    local_38[0] = &local_res10;
    TSet<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                *)this_00,&local_res20,(bool *)local_38);
    lVar6 = (longlong)(int)local_res20.Key;
    lVar1 = *(longlong *)&this_00->field_0x0;
    dVar8 = FThreadHeartBeatClock::Seconds(&this->Clock);
    *(double *)(lVar1 + 8 + lVar6 * 0x48) = dVar8;
    *(double *)(lVar1 + 0x20 + lVar6 * 0x48) = param_2;
    *(FName *)(lVar1 + 0x38 + lVar6 * 0x48) = local_res10;
    *(int *)(lVar1 + 0x18 + lVar6 * 0x48) = this->CheckpointSuspendCount;
LAB_141704edd:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// MonitorFunctionEnd @ 141704f10

void __thiscall FThreadHeartBeat::MonitorFunctionEnd(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  
  bVar3 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar3) {
    DVar4 = GetCurrentThreadId();
    lpCriticalSection = &this->FunctionHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->FunctionHeartBeat).field_0x8 !=
        *(int *)&(this->FunctionHeartBeat).field_0x34) {
      puVar7 = *(undefined1 **)&(this->FunctionHeartBeat).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->FunctionHeartBeat).field_0x38;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->FunctionHeartBeat).field_0x48 - 1U & DVar4) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)&this->FunctionHeartBeat + (longlong)iVar5 * 0x48;
          if (*(DWORD *)(*(longlong *)&this->FunctionHeartBeat + (longlong)iVar5 * 0x48) == DVar4) {
            lVar6 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar6 = 0;
            }
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + 0x10) = 1;
              goto LAB_141704fcd;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x40);
        } while (iVar5 != -1);
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                       ,0x20d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_141704fcd:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// MonitorFunctionStart @ 141705010

void __thiscall FThreadHeartBeat::MonitorFunctionStart(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  
  bVar1 = FGenericPlatformMisc::AllowThreadHeartBeat();
  if (bVar1) {
    local_res10[0] = GetCurrentThreadId();
    lpCriticalSection = &this->FunctionHeartBeatCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->FunctionHeartBeat;
    if (*(int *)&(this->FunctionHeartBeat).field_0x8 !=
        *(int *)&(this->FunctionHeartBeat).field_0x34) {
      puVar3 = *(undefined1 **)&(this->FunctionHeartBeat).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->FunctionHeartBeat).field_0x38;
      }
      iVar2 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(this->FunctionHeartBeat).field_0x48 - 1U & local_res10[0]
                                ) * 4);
      if (iVar2 != -1) {
        do {
          lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x48;
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x48) == local_res10[0]
             ) {
            if (lVar4 != 0) goto LAB_1417050e4;
            break;
          }
          iVar2 = *(int *)(lVar4 + 0x40);
        } while (iVar2 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res18,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res10[0],
               (bool *)&local_res20);
    lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)local_res18[0] * 0x48;
LAB_1417050e4:
    dVar5 = FThreadHeartBeatClock::Seconds(&this->Clock);
    *(double *)(lVar4 + 8) = dVar5;
    *(double *)(lVar4 + 0x20) = this->CurrentHangDuration;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnHang @ 1417058c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141705aa1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadHeartBeat::OnHang(FThreadHeartBeat *this,double param_1,uint param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FThreadManager *lpCriticalSection;
  FOutputDeviceRedirector *pFVar8;
  wchar_t *pwVar9;
  FText *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar14;
  uint uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  FString *pFVar18;
  longlong *plVar19;
  undefined1 auStackY_858 [32];
  ForAnyElementType local_808;
  int local_800;
  int iStack_7fc;
  ForAnyElementType local_7f8;
  int local_7f0;
  int local_7ec;
  FString local_7e8;
  FString local_7d8;
  uint local_7c8 [2];
  FString local_7c0;
  FString local_7b0;
  FText local_7a0;
  FText local_790;
  ulong64 local_778 [100];
  char local_458 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_858;
  uVar4 = FWindowsPlatformStackWalk::CaptureThreadStackBackTrace
                    ((ulonglong)param_2,local_778,100,(void *)0x0);
  uVar5 = (*FCrc::MemCrc32Func)(local_778,uVar4 * 8,0);
  if ((uVar5 == this->LastHangCallstackCRC) && (param_2 == this->LastHungThreadId)) {
    return;
  }
  plVar12 = (longlong *)0x0;
  this->LastHangCallstackCRC = uVar5;
  this->LastHungThreadId = param_2;
  local_808.Data = (FScriptContainerElement *)0x0;
  local_800 = 0;
  iStack_7fc = 0;
  plVar16 = plVar12;
  plVar19 = plVar12;
  FVar13.Data = local_7e8.Data.AllocatorInstance.Data;
  uVar2 = local_7e8.Data._8_8_;
  if (0 < (int)uVar4) {
    do {
      local_7e8.Data._8_8_ = uVar2;
      local_7e8.Data.AllocatorInstance.Data = FVar13.Data;
      local_458[0] = '\0';
      FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                ((int)plVar19,local_778[(longlong)plVar16],local_458,0x400,
                 (FGenericCrashContext *)0x0);
      ::FString::FString(&local_7e8,local_458);
      if (((local_808.Data <= (FScriptContainerElement *)&local_7e8) &&
          ((FScriptContainerElement *)&local_7e8 < local_808.Data + (longlong)iStack_7fc * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_800 == iStack_7fc) {
        local_800 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_808,&iStack_7fc);
      }
      iVar6 = local_800 + 1;
      lVar11 = (longlong)local_800;
      *(undefined8 *)(local_808.Data + lVar11 * 0x10) = 0;
      *(FScriptContainerElement **)(local_808.Data + lVar11 * 0x10) =
           local_7e8.Data.AllocatorInstance.Data;
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar13.Data = local_7e8.Data.AllocatorInstance.Data;
      *(int *)(local_808.Data + lVar11 * 0x10 + 8) = local_7e8.Data.ArrayNum;
      *(int *)(local_808.Data + lVar11 * 0x10 + 0xc) = local_7e8.Data.ArrayMax;
      local_7e8.Data.ArrayNum = 0;
      local_7e8.Data.ArrayMax = 0;
      uVar2 = local_7e8.Data._8_8_;
      local_7e8.Data.ArrayNum = 0;
      local_7e8.Data.ArrayMax = 0;
      local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      plVar16 = (longlong *)((longlong)plVar16 + 1);
      plVar19 = (longlong *)(ulonglong)((int)plVar19 + 1);
      local_800 = iVar6;
    } while ((longlong)plVar16 < (longlong)(int)uVar4);
  }
  pFVar18 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
             ::__l2::GameThreadName;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x9d4c) <
       `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                        ::__l2::GameThreadName,L"GameThread");
    atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__);
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar11 + 0x9d4c) <
       `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                        ::__l2::RenderThreadName,L"RenderThread");
    atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__RenderThreadName__
          );
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (param_2 != GGameThreadId) {
    if (param_2 == GRenderThreadId) {
      pFVar18 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                 ::__l2::RenderThreadName;
    }
    else {
      lpCriticalSection = FThreadManager::Get();
      if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FThreadManager::GetThreadNameInternal'::__l2::
               _dynamic_atexit_destructor_for__NoThreadName__);
        _Init_thread_footer(&::_TSS0);
      }
      if (lpCriticalSection == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_7c8[0] = param_2;
      iVar6 = TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ::FindIndexByHash<unsigned_int>
                        ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                          *)&lpCriticalSection->Threads,param_2,local_7c8);
      if (iVar6 != -1) {
        pTVar14 = *(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                    **)&(lpCriticalSection->Threads).field_0x1800;
        if (pTVar14 ==
            (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
             *)0x0) {
          pTVar14 = &lpCriticalSection->Threads;
        }
        plVar16 = (longlong *)(&pTVar14->field_0x0 + (longlong)iVar6 * 0x18 + 8);
        if (&pTVar14->field_0x0 + (longlong)iVar6 * 0x18 == (undefined1 *)0x0) {
          plVar16 = plVar12;
        }
        if (plVar16 != (longlong *)0x0) {
          pFVar18 = (FString *)(*plVar16 + 8);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          goto LAB_141705c44;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar18 = &NoThreadName;
    }
  }
LAB_141705c44:
  local_7f8.Data = (FScriptContainerElement *)0x0;
  local_7f0 = (pFVar18->Data).ArrayNum;
  lVar11 = (longlong)local_7f0;
  _Src = (pFVar18->Data).AllocatorInstance.Data;
  if (local_7f0 == 0) {
    local_7ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_7f0,0,&local_7f8,local_7f0,&local_7ec);
    memcpy(local_7f8.Data,_Src,lVar11 * 2);
  }
  if (local_7f0 < 2) {
    ::FString::PrintfImpl(&local_7c0,L"unknown thread (%u)");
    if (local_7f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data);
    }
    local_7f8.Data = local_7c0.Data.AllocatorInstance.Data;
    local_7f0 = local_7c0.Data.ArrayNum;
    local_7ec = local_7c0.Data.ArrayMax;
    local_7c0.Data.ArrayNum = 0;
    local_7c0.Data.ArrayMax = 0;
    local_7c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pwVar17 = L"";
  if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  plVar16 = plVar12;
  if (0 < local_800) {
    do {
      uVar5 = (uint)plVar16;
      if (1 < (byte)LogCore._0_1_) {
        uVar7 = 0;
        if ((int)uVar5 < local_800) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      plVar16 = (longlong *)(ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) < local_800);
  }
  uVar5 = 0;
  local_7d8.Data.ArrayNum = 0;
  local_7d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7d8.Data.ArrayMax = 0;
  plVar16 = plVar12;
  plVar19 = plVar12;
  if (0 < local_800) {
    do {
      uVar7 = (int)plVar12 - 1;
      if ((int)plVar12 == 0) {
        uVar7 = uVar5;
      }
      if (0x1ff < (int)uVar7) break;
      ::FString::AppendChars(&local_7d8,L"  ",2);
      uVar15 = (uint)plVar16;
      uVar7 = uVar5;
      if ((int)uVar15 < local_800) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = *(int *)((longlong)(plVar19 + 1) + local_808.Data) - 1;
      if (*(int *)((longlong)(plVar19 + 1) + local_808.Data) == 0) {
        uVar7 = uVar5;
      }
      ::FString::AppendChars(&local_7d8,*(wchar_t **)((longlong)plVar19 + local_808.Data),uVar7);
      ::FString::AppendChars(&local_7d8,L"\r\n",2);
      plVar12 = (longlong *)(ulonglong)(uint)local_7d8.Data.ArrayNum;
      plVar16 = (longlong *)(ulonglong)(uVar15 + 1);
      plVar19 = plVar19 + 2;
    } while ((int)(uVar15 + 1) < local_800);
  }
  ::FString::PrintfImpl(&local_7b0,L"Hang detected on %s:%s%s%sCheck log for full callstack.");
  if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  if (this->bHangsAreFatal == false) {
    pFVar8 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::FlushThreadedLogs(pFVar8,Async);
  }
  else {
    pFVar8 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(pFVar8);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_7b0.Data.ArrayNum != 0) {
    FVar13.Data = local_7b0.Data.AllocatorInstance.Data;
  }
  ReportHang((wchar_t *)FVar13.Data,local_778,uVar4,param_2);
  if (this->bHangsAreFatal != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar9 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar9,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_790,L"MessageDialog",L"ReportHangError_Title",
                           L"Application Hang Detected");
      pFVar18 = FText::ToString(pFVar10);
      if ((pFVar18->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_7a0,L"MessageDialog",L"ReportHangError_Body",
                           L"The application has hung and will now close. We apologize for the inconvenience."
                          );
      pFVar18 = FText::ToString(pFVar10);
      if ((pFVar18->Data).ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar17,pwVar9);
      if (local_7a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_7a0.TextData.Reference + 0x10))();
      }
      if (local_790.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_790.TextData.Reference + 0x10))();
      }
    }
    FWindowsPlatformMisc::RequestExit(true,L"FThreadHeartbeat::OnHang");
  }
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
  }
  if (local_7f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data);
  }
  DestructItems<FString,int>((FString *)local_808.Data,local_800);
  if (local_808.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data);
  }
  return;
}

// OnPresentHang @ 141706440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadHeartBeat::OnPresentHang(FThreadHeartBeat *this,double param_1)

{
  if (1 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    return;
  }
  return;
}

// PresentFrame @ 1417085a0

void __thiscall FThreadHeartBeat::PresentFrame(FThreadHeartBeat *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  bool bVar2;
  double dVar3;
  
  lpCriticalSection = &this->HeartBeatCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar3 = FThreadHeartBeatClock::Seconds(&this->Clock);
    bVar2 = bFirst != false;
    (this->PresentHeartBeat).HangDuration = this->CurrentPresentDuration;
    (this->PresentHeartBeat).LastHeartBeatTime = dVar3;
    if (bVar2) {
      piVar1 = &(this->PresentHeartBeat).SuspendedCount;
      *piVar1 = *piVar1 + -1;
      bFirst = false;
    }
                    /* WARNING: Could not recover jumptable at 0x000141708604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResumeHeartBeat @ 14170e5d0

void __thiscall FThreadHeartBeat::ResumeHeartBeat(FThreadHeartBeat *this,bool param_1)

{
  FThreadSafeCounter *pFVar1;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar8;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *pTVar9;
  bool bVar10;
  DWORD DVar11;
  uint uVar12;
  longlong lVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  int iVar17;
  double *pdVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  double *pdVar22;
  uint *puVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  undefined1 local_res8 [8];
  char local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  uint local_1b8;
  undefined1 local_1b4 [4];
  ulonglong local_1b0;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_178;
  uint uStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  TMap<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TMap<FName,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FThreadHeartBeat::FHeartBeatInfo,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined4 local_84;
  uint local_64;
  
  cVar25 = '\0';
  lpCriticalSection = (LPCRITICAL_SECTION)&this->HeartBeatCritical;
  local_res10 = param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    dVar7 = FThreadHeartBeatClock::Seconds(&this->Clock);
    pdVar18 = (double *)0x0;
    uVar12 = 0;
    uVar16 = 0;
    local_1b0 = 1;
    uVar19 = 0;
    if (param_1) {
      if ((this->GlobalSuspendCount).Counter == 0) goto LAB_14170e64f;
      LOCK();
      pFVar1 = &this->GlobalSuspendCount;
      iVar17 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar17 == 1) {
        uVar26 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
        local_168 = &(this->ThreadHeartBeat).field_0x10;
        local_res18 = '\x01';
        local_178 = &this->ThreadHeartBeat;
        iVar17 = 0;
        uStack_16c = 1;
        uStack_15c = uVar16;
        local_158 = uVar19;
        uStack_170 = uVar16;
        if (uVar26 != 0) {
          puVar23 = *(uint **)&(this->ThreadHeartBeat).field_0x20;
          if (puVar23 == (uint *)0x0) {
            puVar23 = (uint *)local_168;
          }
          uStack_16c = *puVar23;
          pdVar15 = pdVar18;
          pdVar22 = pdVar18;
          local_158 = uVar12;
          uStack_170 = uVar12;
          while (uStack_16c == 0) {
            iVar17 = (int)pdVar15;
            local_158 = (int)pdVar22 + 0x20;
            pdVar22 = (double *)(ulonglong)local_158;
            uStack_170 = iVar17 + 1;
            pdVar15 = (double *)(ulonglong)uStack_170;
            if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_170) {
              iVar17 = *(int *)&(this->ThreadHeartBeat).field_0x28;
              uStack_16c = 1;
              uStack_15c = uVar26;
              goto LAB_14170e715;
            }
            uStack_16c = puVar23[(longlong)iVar17 + 1];
          }
          iVar17 = *(int *)&(this->ThreadHeartBeat).field_0x28;
          uStack_16c = -uStack_16c & uStack_16c;
          uVar3 = (ulonglong)uStack_16c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_148 = (int)lVar13;
          uStack_15c = (local_158 - 1) + local_148;
          if (iVar17 < (int)uStack_15c) {
            uStack_15c = uVar26;
          }
        }
LAB_14170e715:
        uStack_154 = local_84;
        iStack_150 = *(int *)&(this->ThreadHeartBeat).field_0x8 -
                     *(int *)&(this->ThreadHeartBeat).field_0x34;
        local_1b8 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
        TStack_128._padding_ = CONCAT44(uStack_16c,uStack_170);
        uVar26 = local_1b8 & 0xffffffe0;
        uStack_160 = 0xffffffff;
        TStack_128.CurrentBitIndex = uStack_15c;
        TStack_128.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)local_1b8 >> 5;
        TStack_128._28_4_ = local_84;
        TStack_128.BaseBitIndex = local_158;
        uStack_108 = CONCAT44(uStack_14c,iStack_150);
        local_130 = local_178;
        TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
        if ((((int)local_1b8 < 0) || (iVar17 < (int)local_1b8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar27 = *(uint *)&(this->ThreadHeartBeat).field_0x28;
        if (local_1b8 != uVar27) {
          puVar20 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x20;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = &(this->ThreadHeartBeat).field_0x10;
          }
          uVar24 = -1 << ((byte)local_1b8 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
          while (uVar24 == 0) {
            lVar13 = (longlong)iVar14;
            uVar26 = uVar26 + 0x20;
            iVar14 = iVar14 + 1;
            local_1b8 = uVar27;
            if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14170e833;
            uVar24 = *(uint *)(puVar20 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_144 = (int)lVar13;
          local_1b8 = (uVar26 - 1) + local_144;
          if ((int)uVar27 < (int)local_1b8) {
            local_1b8 = uVar27;
          }
        }
LAB_14170e833:
        while( true ) {
          pTVar8 = local_130;
          if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_128.CurrentBitIndex == local_1b8) &&
              (TStack_128.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadHeartBeat).field_0x10)) &&
             (param_1 = (bool)local_res10, cVar25 = local_res18, pTVar8 == &this->ThreadHeartBeat))
          break;
          *(double *)(*(longlong *)pTVar8 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x48) = dVar7
          ;
          TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
        }
      }
    }
    else {
      DVar11 = GetCurrentThreadId();
      if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34)
      {
        puVar20 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(this->ThreadHeartBeat).field_0x38;
        }
        iVar17 = *(int *)(puVar20 +
                         (ulonglong)(*(int *)&(this->ThreadHeartBeat).field_0x48 - 1U & DVar11) * 4)
        ;
        if (iVar17 != -1) {
          do {
            lVar13 = *(longlong *)&this->ThreadHeartBeat + (longlong)iVar17 * 0x48;
            if (*(DWORD *)(*(longlong *)&this->ThreadHeartBeat + (longlong)iVar17 * 0x48) == DVar11)
            {
              pdVar15 = (double *)(lVar13 + 8);
              if (lVar13 == 0) {
                pdVar15 = pdVar18;
              }
              param_1 = (bool)local_res10;
              if (pdVar15 != (double *)0x0) {
                if ((*(int *)(pdVar15 + 2) < 1) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("SuspendedCount > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadHeartBeat.h"
                                        ,0x5a,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pdVar22 = pdVar15 + 2;
                *(int *)pdVar22 = *(int *)pdVar22 + -1;
                param_1 = (bool)local_res10;
                if (*(int *)pdVar22 == 0) {
                  *pdVar15 = dVar7;
                }
              }
              break;
            }
            iVar17 = *(int *)(lVar13 + 0x40);
          } while (iVar17 != -1);
        }
      }
    }
    piVar4 = &(this->PresentHeartBeat).SuspendedCount;
    *piVar4 = *piVar4 + -1;
    dVar7 = FThreadHeartBeatClock::Seconds(&this->Clock);
    (this->PresentHeartBeat).LastHeartBeatTime = dVar7;
    LeaveCriticalSection(lpCriticalSection);
    dVar7 = FThreadHeartBeatClock::Seconds(&this->Clock);
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CheckpointHeartBeatCritical;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      if (param_1 == false) {
        if ((this->CheckpointSuspendCount < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CheckpointSuspendCount > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                                ,0x354,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this->CheckpointSuspendCount = this->CheckpointSuspendCount + -1;
        puVar20 = &(this->CheckpointHeartBeat).field_0x10;
        uVar19 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        pTVar2 = &this->CheckpointHeartBeat;
        uStack_18c = uVar12;
        local_188 = uVar12;
        if (uVar19 == 0) {
LAB_14170ec6f:
          uStack_19c = (uint)local_1b0;
        }
        else {
          puVar23 = *(uint **)&(this->CheckpointHeartBeat).field_0x20;
          if (puVar23 == (uint *)0x0) {
            puVar23 = (uint *)puVar20;
          }
          uStack_19c = *puVar23;
          pdVar15 = pdVar18;
          while (uStack_19c == 0) {
            iVar17 = (int)pdVar18;
            local_188 = (int)pdVar15 + 0x20;
            pdVar15 = (double *)(ulonglong)local_188;
            uVar12 = iVar17 + 1;
            pdVar18 = (double *)(ulonglong)uVar12;
            uStack_18c = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
            goto LAB_14170ec6f;
            uStack_19c = puVar23[(longlong)iVar17 + 1];
          }
          uStack_19c = -uStack_19c & uStack_19c;
          uVar3 = (ulonglong)uStack_19c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_13c = (int)lVar13;
          uStack_18c = (local_188 - 1) + local_13c;
          if ((int)uVar19 < (int)uStack_18c) {
            uStack_18c = uVar19;
          }
        }
        uStack_184 = uStack_15c;
        iStack_180 = *(int *)&(this->CheckpointHeartBeat).field_0x8 -
                     *(int *)&(this->CheckpointHeartBeat).field_0x34;
        uVar16 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        uStack_190 = 0xffffffff;
        uVar26 = uVar16 & 0xffffffe0;
        TStack_c8._padding_ = CONCAT44(uStack_19c,uVar12);
        TStack_c8.CurrentBitIndex = uStack_18c;
        TStack_c8.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar16 >> 5;
        TStack_c8._28_4_ = uStack_15c;
        TStack_c8.BaseBitIndex = local_188;
        uStack_a8 = CONCAT44(uStack_17c,iStack_180);
        local_1a8 = pTVar2;
        uStack_1a0 = uVar12;
        local_198 = puVar20;
        local_d0 = pTVar2;
        TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar20;
        if ((((int)uVar16 < 0) || ((int)uVar19 < (int)uVar16)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        if (uVar16 != uVar19) {
          puVar21 = *(undefined1 **)&(this->CheckpointHeartBeat).field_0x20;
          if (puVar21 == (undefined1 *)0x0) {
            puVar21 = puVar20;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar17;
            uVar26 = uVar26 + 0x20;
            iVar17 = iVar17 + 1;
            uVar16 = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14170ed80;
            uVar16 = *(uint *)(puVar21 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_138 = (int)lVar13;
          uVar16 = (uVar26 - 1) + local_138;
          if ((int)uVar19 < (int)uVar16) {
            uVar16 = uVar19;
          }
        }
LAB_14170ed80:
        while( true ) {
          pTVar9 = local_d0;
          if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          lVar13 = (longlong)TStack_c8.CurrentBitIndex;
          if (((TStack_c8.CurrentBitIndex == uVar16) &&
              (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
             (pTVar9 == pTVar2)) break;
          lVar5 = *(longlong *)pTVar9;
          if ((*(int *)(lVar5 + 0x18 + lVar13 * 0x48) < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SuspendedCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\ThreadHeartBeat.h"
                                  ,0x5a,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          piVar4 = (int *)(lVar5 + 0x18 + lVar13 * 0x48);
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            *(double *)(lVar5 + 8 + lVar13 * 0x48) = dVar7;
          }
          TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
        }
      }
      else if (cVar25 != '\0') {
        puVar20 = &(this->CheckpointHeartBeat).field_0x10;
        uVar26 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        pTVar2 = &this->CheckpointHeartBeat;
        uStack_18c = uVar19;
        if (uVar26 != 0) {
          puVar23 = *(uint **)&(this->CheckpointHeartBeat).field_0x20;
          if (puVar23 == (uint *)0x0) {
            puVar23 = (uint *)puVar20;
          }
          uVar27 = *puVar23;
          pdVar15 = pdVar18;
          uVar19 = uVar12;
          uVar16 = uVar12;
          while (uVar27 == 0) {
            iVar17 = (int)pdVar18;
            uVar19 = (int)pdVar15 + 0x20;
            pdVar15 = (double *)(ulonglong)uVar19;
            uVar16 = iVar17 + 1;
            pdVar18 = (double *)(ulonglong)uVar16;
            uStack_18c = uVar26;
            if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
            goto LAB_14170ea50;
            uVar27 = puVar23[(longlong)iVar17 + 1];
          }
          local_1b0 = (ulonglong)(-uVar27 & uVar27);
          uVar3 = local_1b0 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_140 = (int)lVar13;
          uStack_18c = (uVar19 - 1) + local_140;
          if ((int)uVar26 < (int)uStack_18c) {
            uStack_18c = uVar26;
          }
        }
LAB_14170ea50:
        uVar12 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        uStack_184 = local_64;
        iStack_180 = *(int *)&(this->CheckpointHeartBeat).field_0x8 -
                     *(int *)&(this->CheckpointHeartBeat).field_0x34;
        uStack_190 = 0xffffffff;
        uVar27 = uVar12 & 0xffffffe0;
        uStack_19c = (uint)local_1b0;
        TStack_f8._padding_ = CONCAT44(uStack_19c,uVar16);
        TStack_f8.CurrentBitIndex = uStack_18c;
        TStack_f8.UnvisitedBitMask = 0xffffffff;
        TStack_f8._28_4_ = local_64;
        TStack_f8.BaseBitIndex = uVar19;
        uStack_d8 = CONCAT44(uStack_17c,iStack_180);
        iVar17 = (int)uVar12 >> 5;
        local_188 = uVar19;
        local_1a8 = pTVar2;
        uStack_1a0 = uVar16;
        local_198 = puVar20;
        local_100 = pTVar2;
        TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar20;
        if ((((int)uVar12 < 0) || ((int)uVar26 < (int)uVar12)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
        if (uVar12 != uVar19) {
          puVar21 = *(undefined1 **)&(this->CheckpointHeartBeat).field_0x20;
          if (puVar21 == (undefined1 *)0x0) {
            puVar21 = puVar20;
          }
          uVar16 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar17;
            uVar27 = uVar27 + 0x20;
            iVar17 = iVar17 + 1;
            uVar12 = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14170eb60;
            uVar16 = *(uint *)(puVar21 + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar12 = (uVar27 - 1) + (int)lVar13;
          if ((int)uVar19 < (int)uVar12) {
            uVar12 = uVar19;
          }
        }
LAB_14170eb60:
        while( true ) {
          pTVar9 = local_100;
          if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
            `TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b4);
          }
          if (((TStack_f8.CurrentBitIndex == uVar12) &&
              (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
             (pTVar9 == pTVar2)) break;
          *(double *)(*(longlong *)pTVar9 + 8 + (longlong)TStack_f8.CurrentBitIndex * 0x48) = dVar7;
          TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
        }
      }
LAB_14170e64f:
                    /* WARNING: Could not recover jumptable at 0x00014170e66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Run @ 14170f7a0

uint __thiscall FThreadHeartBeat::Run(FThreadHeartBeat *this)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double local_res8;
  LARGE_INTEGER local_res10;
  
  fVar2 = __real_3f000000;
  bVar1 = false;
  if ((this->StopTaskCounter).Counter != 0) {
    return 0;
  }
  do {
    if (GIsRequestingExit != false) {
      return 0;
    }
    uVar3 = CheckHeartBeat(this,&local_res8);
    if (((uVar3 == 0xffffffff) &&
        (uVar3 = CheckFunctionHeartBeat(this,&local_res8), uVar3 == 0xffffffff)) &&
       (uVar3 = CheckCheckpointHeartBeat(this,&local_res8), uVar3 == 0xffffffff)) {
      bVar1 = false;
    }
    else if (!bVar1) {
      bVar1 = true;
      if (uVar3 == 0xfffffffe) {
        OnPresentHang(this,local_res8);
      }
      else {
        OnHang(this,local_res8,uVar3);
      }
    }
    if (((this->StopTaskCounter).Counter == 0) && (GIsRequestingExit == false)) {
      FWindowsPlatformProcess::SleepNoStats(fVar2);
    }
    QueryPerformanceCounter(&local_res10);
    uVar4 = (this->Clock).MaxTimeStepCycles;
    uVar5 = local_res10.QuadPart - (this->Clock).LastRealTickCycles;
    (this->Clock).LastRealTickCycles = (ulong64)local_res10;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    (this->Clock).CurrentCycles = (this->Clock).CurrentCycles + uVar4;
  } while ((this->StopTaskCounter).Counter == 0);
  return 0;
}

// SetDurationMultiplier @ 141711310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FThreadHeartBeat::SetDurationMultiplier(FThreadHeartBeat *this,double param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                         ,0x370,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < __real_3ff0000000000000) &&
     (param_1 = __real_3ff0000000000000, 2 < (byte)LogCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    param_1 = __real_3ff0000000000000;
  }
  lpCriticalSection = &this->HeartBeatCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->HangDurationMultiplier = param_1;
  InitSettingsInternal(this);
  if (3 < (byte)LogCore._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417113fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Start @ 141712b40

void __thiscall FThreadHeartBeat::Start(FThreadHeartBeat *this)

{
  LOCK();
  this->bReadyToCheckHeartbeat = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// Stop @ 141712c90

void __thiscall FThreadHeartBeat::Stop(FThreadHeartBeat *this)

{
  LOCK();
  this->bReadyToCheckHeartbeat = (FThreadSafeBool)0x0;
  UNLOCK();
  LOCK();
  (this->StopTaskCounter).Counter = (this->StopTaskCounter).Counter + 1;
  UNLOCK();
  return;
}

// SuspendHeartBeat @ 141714230

void __thiscall FThreadHeartBeat::SuspendHeartBeat(FThreadHeartBeat *this,bool param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar1 = &this->HeartBeatCritical;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (param_1) {
      LOCK();
      (this->GlobalSuspendCount).Counter = (this->GlobalSuspendCount).Counter + 1;
      UNLOCK();
      piVar2 = &(this->PresentHeartBeat).SuspendedCount;
      *piVar2 = *piVar2 + 1;
                    /* WARNING: Could not recover jumptable at 0x00014171427d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return;
    }
    DVar5 = GetCurrentThreadId();
    uVar13 = 0;
    uVar11 = 0;
    if (*(int *)&(this->ThreadHeartBeat).field_0x8 != *(int *)&(this->ThreadHeartBeat).field_0x34) {
      puVar16 = *(undefined1 **)&(this->ThreadHeartBeat).field_0x40;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = &(this->ThreadHeartBeat).field_0x38;
      }
      iVar14 = *(int *)(puVar16 +
                       (ulonglong)(*(int *)&(this->ThreadHeartBeat).field_0x48 - 1U & DVar5) * 4);
      if (iVar14 != -1) {
        do {
          lVar10 = *(longlong *)&this->ThreadHeartBeat + (longlong)iVar14 * 0x48;
          if (*(DWORD *)(*(longlong *)&this->ThreadHeartBeat + (longlong)iVar14 * 0x48) == DVar5) {
            uVar9 = lVar10 + 8;
            if (lVar10 == 0) {
              uVar9 = uVar13;
            }
            if (uVar9 != 0) {
              *(int *)(uVar9 + 0x10) = *(int *)(uVar9 + 0x10) + 1;
            }
            break;
          }
          iVar14 = *(int *)(lVar10 + 0x40);
        } while (iVar14 != -1);
      }
    }
    piVar2 = &(this->PresentHeartBeat).SuspendedCount;
    *piVar2 = *piVar2 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &this->CheckpointHeartBeatCritical;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if ((this->CheckpointSuspendCount < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckpointSuspendCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                             ,0x311,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CheckpointSuspendCount = this->CheckpointSuspendCount + 1;
      puVar16 = &(this->CheckpointHeartBeat).field_0x10;
      uVar12 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
      uVar6 = 1;
      uVar15 = 0;
      uVar7 = uVar11;
      if (uVar12 != 0) {
        puVar18 = *(uint **)&(this->CheckpointHeartBeat).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar16;
        }
        uVar7 = *puVar18;
        uVar9 = uVar13;
        uVar15 = 0;
        uVar11 = 0;
        while (uVar7 == 0) {
          iVar14 = (int)uVar13;
          uVar15 = (int)uVar9 + 0x20;
          uVar9 = (ulonglong)uVar15;
          uVar11 = iVar14 + 1;
          uVar13 = (ulonglong)uVar11;
          uVar7 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
          goto LAB_1417143fe;
          uVar7 = puVar18[(longlong)iVar14 + 1];
        }
        uVar6 = -uVar7 & uVar7;
        uVar13 = (ulonglong)uVar6 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = (uVar15 - 1) + (int)lVar10;
        if ((int)uVar12 < (int)uVar7) {
          uVar7 = uVar12;
        }
      }
LAB_1417143fe:
      uVar8 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
      uVar19 = uVar8 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar6,uVar11);
      TStack_60.CurrentBitIndex = uVar7;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar8 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = uVar15;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->CheckpointHeartBeat).field_0x8 -
                           *(int *)&(this->CheckpointHeartBeat).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
      if ((((int)uVar8 < 0) || ((int)uVar12 < (int)uVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = *(uint *)&(this->CheckpointHeartBeat).field_0x28;
      if (uVar8 != uVar11) {
        puVar17 = *(undefined1 **)&(this->CheckpointHeartBeat).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar16;
        }
        uVar12 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar12 == 0) {
          lVar10 = (longlong)iVar14;
          uVar19 = uVar19 + 0x20;
          iVar14 = iVar14 + 1;
          uVar8 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_141714510;
          uVar12 = *(uint *)(puVar17 + lVar10 * 4 + 4);
        }
        uVar13 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar8 = (int)lVar10 + -1 + uVar19;
        if ((int)uVar11 < (int)uVar8) {
          uVar8 = uVar11;
        }
      }
LAB_141714510:
      while( true ) {
        if (*(int *)&(this->CheckpointHeartBeat).field_0x8 -
            *(int *)&(this->CheckpointHeartBeat).field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar8) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) break;
        piVar2 = (int *)(*(longlong *)&this->CheckpointHeartBeat + 0x18 +
                        (longlong)TStack_60.CurrentBitIndex * 0x48);
        *piVar2 = *piVar2 + 1;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
                    /* WARNING: Could not recover jumptable at 0x000141714580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

