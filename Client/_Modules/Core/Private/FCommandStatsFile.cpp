// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Get @ 1419fbce0

FCommandStatsFile * __cdecl FCommandStatsFile::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCommandStatsFile::Get'::__l2::_dynamic_atexit_destructor_for__CommandStatsFile__);
      _Init_thread_footer(&::_TSS0);
      return &CommandStatsFile;
    }
  }
  return &CommandStatsFile;
}

// Start @ 141a215f0

void __thiscall FCommandStatsFile::Start(FCommandStatsFile *this,FString *param_1)

{
  IStatsWriteFile *pIVar1;
  IStatsWriteFile *this_00;
  
  this_00 = (IStatsWriteFile *)0x0;
  if (this->CurrentStatsFile != (IStatsWriteFile *)0x0) {
    LOCK();
    (this->StatFileActiveCounter).Counter = (this->StatFileActiveCounter).Counter + -1;
    UNLOCK();
    IStatsWriteFile::Stop(this->CurrentStatsFile);
    pIVar1 = this->CurrentStatsFile;
    if (pIVar1 != (IStatsWriteFile *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    this->CurrentStatsFile = (IStatsWriteFile *)0x0;
  }
  pIVar1 = ::operator_new(0x158);
  if (pIVar1 != (IStatsWriteFile *)0x0) {
    IStatsWriteFile::IStatsWriteFile(pIVar1);
    pIVar1->_padding_ = (longlong)&___7FStatsWriteFile__6B_;
    pIVar1[1]._padding_ = 0;
    pIVar1[1]._padding_ = 0;
    pIVar1[1]._padding_ = 0;
    *(undefined4 *)&pIVar1[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pIVar1[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pIVar1[1]._padding_ + 4) = 0;
    pIVar1[1]._padding_ = 0;
    *(undefined4 *)&pIVar1[1]._padding_ = 0;
    (pIVar1->Header).bRawStatsFile = false;
    this_00 = pIVar1;
  }
  this->CurrentStatsFile = this_00;
  IStatsWriteFile::Start(this_00,param_1);
  LOCK();
  (this->StatFileActiveCounter).Counter = (this->StatFileActiveCounter).Counter + 1;
  UNLOCK();
  return;
}

// StartRaw @ 141a21ab0

void __thiscall FCommandStatsFile::StartRaw(FCommandStatsFile *this,FString *param_1)

{
  IStatsWriteFile *pIVar1;
  
  if (this->CurrentStatsFile != (IStatsWriteFile *)0x0) {
    LOCK();
    (this->StatFileActiveCounter).Counter = (this->StatFileActiveCounter).Counter + -1;
    UNLOCK();
    IStatsWriteFile::Stop(this->CurrentStatsFile);
    pIVar1 = this->CurrentStatsFile;
    if (pIVar1 != (IStatsWriteFile *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    this->CurrentStatsFile = (IStatsWriteFile *)0x0;
  }
  pIVar1 = ::operator_new(0x110);
  if (pIVar1 == (IStatsWriteFile *)0x0) {
    pIVar1 = (IStatsWriteFile *)0x0;
  }
  else {
    IStatsWriteFile::IStatsWriteFile(pIVar1);
    *(undefined1 *)&pIVar1[1]._padding_ = 0;
    pIVar1->_padding_ = (longlong)&___7FRawStatsWriteFile__6B_;
    (pIVar1->Header).bRawStatsFile = true;
  }
  this->CurrentStatsFile = pIVar1;
  IStatsWriteFile::Start(pIVar1,param_1);
  LOCK();
  (this->StatFileActiveCounter).Counter = (this->StatFileActiveCounter).Counter + 1;
  UNLOCK();
  return;
}

// Stop @ 141a24570

void __thiscall FCommandStatsFile::Stop(FCommandStatsFile *this)

{
  IStatsWriteFile *pIVar1;
  
  if (this->CurrentStatsFile != (IStatsWriteFile *)0x0) {
    LOCK();
    (this->StatFileActiveCounter).Counter = (this->StatFileActiveCounter).Counter + -1;
    UNLOCK();
    IStatsWriteFile::Stop(this->CurrentStatsFile);
    pIVar1 = this->CurrentStatsFile;
    if (pIVar1 != (IStatsWriteFile *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    this->CurrentStatsFile = (IStatsWriteFile *)0x0;
  }
  return;
}

// TestLastSaved @ 141a248c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCommandStatsFile::TestLastSaved(FCommandStatsFile *this)

{
  bool bVar1;
  FCommandStatsFile *pFVar2;
  FStatsReadFile *this_00;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  
  pFVar2 = Get();
  if ((pFVar2->LastFileSaved).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->LastFileSaved).Data.AllocatorInstance.Data;
  }
  this_00 = (FStatsReadFile *)
            FStatsReader<`FCommandStatsFile::TestLastSaved'::__l2::FStatsTestReader>::Create(pwVar3)
  ;
  if (this_00 == (FStatsReadFile *)0x0) {
    return;
  }
  FStatsReadFile::ReadAndProcessSynchronously(this_00);
  lVar5 = (this_00->State).MaxFrameSeen;
  if (((lVar5 < 0) || (lVar4 = (this_00->State).MinFrameSeen, lVar4 < 0)) ||
     ((lVar4 < lVar5 && (lVar5 + -1 < 0)))) {
    if (4 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    goto LAB_141a24afe;
  }
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  if (((this_00->State).MaxFrameSeen < 0) || (lVar5 = (this_00->State).MinFrameSeen, lVar5 < 0)) {
    lVar5 = -1;
  }
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  DumpHistoryFrame((FStatsThreadState *)&this_00->State,lVar5,0.0,0x7fffffff,(wchar_t *)0x0);
  lVar5 = (this_00->State).MaxFrameSeen;
  if (lVar5 < 0) {
LAB_141a24a14:
    lVar5 = -1;
    lVar4 = -1;
  }
  else {
    lVar4 = (this_00->State).MinFrameSeen;
    if (lVar4 < 0) {
      if (-1 < lVar5) {
        lVar4 = (this_00->State).MinFrameSeen;
        lVar5 = -1;
        if (-1 < lVar4) goto LAB_141a24a1b;
      }
      goto LAB_141a24a14;
    }
    if (lVar4 < lVar5) {
      lVar5 = lVar5 + -1;
    }
  }
LAB_141a24a1b:
  lVar5 = (lVar5 + lVar4) / 2;
  bVar1 = FStatsThreadState::IsFrameValid((FStatsThreadState *)&this_00->State,lVar5);
  if (bVar1) {
    if (4 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    DumpHistoryFrame((FStatsThreadState *)&this_00->State,lVar5,0.0,0x7fffffff,(wchar_t *)0x0);
  }
  lVar5 = (this_00->State).MaxFrameSeen;
  if ((lVar5 < 0) || (lVar4 = (this_00->State).MinFrameSeen, lVar4 < 0)) {
    lVar5 = -1;
  }
  else if (lVar4 < lVar5) {
    lVar5 = lVar5 + -1;
  }
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  DumpHistoryFrame((FStatsThreadState *)&this_00->State,lVar5,0.0,0x7fffffff,(wchar_t *)0x0);
LAB_141a24afe:
  (**(code **)this_00->_padding_)(this_00,1);
  return;
}

