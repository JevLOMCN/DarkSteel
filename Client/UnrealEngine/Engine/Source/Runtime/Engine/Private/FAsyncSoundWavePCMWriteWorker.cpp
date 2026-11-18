// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAsyncSoundWavePCMWriteWorker @ 1484b9e70

FAsyncSoundWavePCMWriteWorker * __thiscall
Audio::FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
          (FAsyncSoundWavePCMWriteWorker *this,FSoundWavePCMWriter *param_1,
          ESoundWavePCMWriteTaskType param_2,TFunction<void___cdecl(USoundWave_const_*)> *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->Writer = param_1;
  this->TaskType = param_2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NonAbandonableSection,4000);
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->CallbackOnSuccess = lVar1;
  *(undefined8 *)&(this->CallbackOnSuccess).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// ~FAsyncSoundWavePCMWriteWorker @ 1484bd5e0

void __thiscall
Audio::FAsyncSoundWavePCMWriteWorker::~FAsyncSoundWavePCMWriteWorker
          (FAsyncSoundWavePCMWriteWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  
  lpCriticalSection = &this->NonAbandonableSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->Writer->CurrentState = Cancelled;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)&this->CallbackOnSuccess != 0) {
      plVar1 = *(longlong **)&(this->CallbackOnSuccess).field_0x28;
      plVar2 = (longlong *)&(this->CallbackOnSuccess).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
                    /* WARNING: Could not recover jumptable at 0x0001484bd64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Abandon @ 1484c0f70

void __thiscall Audio::FAsyncSoundWavePCMWriteWorker::Abandon(FAsyncSoundWavePCMWriteWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->NonAbandonableSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->Writer->CurrentState = Cancelled;
                    /* WARNING: Could not recover jumptable at 0x0001484c0fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DoWork @ 1484d4820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAsyncSoundWavePCMWriteWorker::DoWork(FAsyncSoundWavePCMWriteWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESoundWavePCMWriteTaskType EVar1;
  uchar *puVar2;
  USoundWave *pUVar3;
  code *pcVar4;
  bool bVar5;
  FSoundWavePCMWriter *pFVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [5];
  undefined8 *local_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  USoundWave *local_58;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->Writer == (FSoundWavePCMWriter *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Writer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                         ,0x29c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar1 = this->TaskType;
  if (EVar1 == GenerateSoundWave) {
    pFVar6 = this->Writer;
    if (pFVar6->CurrentSoundWave == (USoundWave *)0x0) {
LAB_1484d4935:
      pFVar6->CurrentState = Failed;
      return;
    }
    if (&this->NonAbandonableSection == (FWindowsRecursiveMutex *)0x0) goto LAB_1484d4b2b;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->NonAbandonableSection);
    this->Writer->CurrentState = Generating;
    FSoundWavePCMWriter::ApplyBufferToSoundWave(this->Writer);
    this->Writer->CurrentState = Suceeded;
  }
  else {
    if (EVar1 == GenerateAndWriteSoundWave) {
      pFVar6 = this->Writer;
      if (pFVar6->CurrentSoundWave == (USoundWave *)0x0) goto LAB_1484d4935;
      lpCriticalSection = &this->NonAbandonableSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_1484d4b2b;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this->Writer->CurrentState = Generating;
      FSoundWavePCMWriter::ApplyBufferToSoundWave(this->Writer);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      if (EVar1 != WriteSoundWave) {
        if (EVar1 != WriteWavFile) goto LAB_1484d4973;
        if (&this->NonAbandonableSection == (FWindowsRecursiveMutex *)0x0) {
LAB_1484d4b2b:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&this->NonAbandonableSection);
        this->Writer->CurrentState = WritingToDisk;
        FSoundWavePCMWriter::SerializeBufferToWavFile(this->Writer);
        goto LAB_1484d496a;
      }
      pFVar6 = this->Writer;
      if (pFVar6->CurrentSoundWave == (USoundWave *)0x0) goto LAB_1484d4935;
      if (this == (FAsyncSoundWavePCMWriteWorker *)0xfffffffffffffff0) goto LAB_1484d4b2b;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->NonAbandonableSection);
    this->Writer->CurrentState = WritingToDisk;
    FSoundWavePCMWriter::SerializeSoundWaveToAsset(this->Writer);
  }
LAB_1484d496a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->NonAbandonableSection);
LAB_1484d4973:
  if ((this->Writer == (FSoundWavePCMWriter *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Writer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                         ,0x2df,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->Writer->CurrentSoundWave != (USoundWave *)0x0) {
    bVar5 = IsInAudioThread();
    if (bVar5) {
      USoundWave::SetSoundAssetCompressionType(this->Writer->CurrentSoundWave,PCM,true);
    }
    puVar2 = this->Writer->CurrentSoundWave->RawPCMData;
    if (puVar2 != (uchar *)0x0) {
      FMemory::Free(puVar2);
      this->Writer->CurrentSoundWave->RawPCMData = (uchar *)0x0;
    }
  }
  local_20 = *(longlong **)&(this->CallbackOnSuccess).field_0x28;
  pUVar3 = this->Writer->CurrentSoundWave;
  local_88 = *(longlong *)&this->CallbackOnSuccess;
  *(undefined8 *)&(this->CallbackOnSuccess).field_0x28 = 0;
  local_48 = local_88;
  local_28 = *(undefined8 *)&(this->CallbackOnSuccess).field_0x20;
  local_38 = *(undefined4 *)&(this->CallbackOnSuccess).field_0x10;
  uStack_34 = *(undefined4 *)&(this->CallbackOnSuccess).field_0x14;
  uStack_30 = *(undefined4 *)&(this->CallbackOnSuccess).field_0x18;
  uStack_2c = *(undefined4 *)&(this->CallbackOnSuccess).field_0x1c;
  if (local_88 != 0) {
    *(undefined8 *)&this->CallbackOnSuccess = 0;
  }
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    plVar7 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)*plVar7)(local_38,&local_78);
  }
  local_b8[0] = (code *)0x0;
  local_58 = pUVar3;
  local_90 = FMemory::Malloc(0x50,0x10);
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FAsyncSoundWavePCMWriteWorker::DoWork'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  plVar7 = local_90 + 2;
  *plVar7 = local_88;
  local_90[7] = local_60;
  local_60 = (longlong *)0x0;
  local_90[4] = local_78;
  local_90[5] = uStack_70;
  local_90[6] = local_68;
  if (*plVar7 != 0) {
    local_88 = 0;
  }
  local_90[8] = local_58;
  if (plVar7 != (longlong *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FAsyncSoundWavePCMWriteWorker::DoWork'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_b8);
  if (local_88 != 0) {
    plVar7 = &local_78;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_48 != 0) {
    plVar7 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// GetStatId @ 1484db6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(FAsyncSoundWavePCMWriteWorker *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FAsyncSoundWavePCMWriteWorker = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FAsyncSoundWavePCMWriteWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAsyncSoundWavePCMWriteWorker,*pFVar1,
               L"FAsyncSoundWavePCMWriteWorker","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FAsyncSoundWavePCMWriteWorker;
  if (_StatPtr_FAsyncSoundWavePCMWriteWorker == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FAsyncSoundWavePCMWriteWorker");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_struct_TStatId___cdecl_Audio::FAsyncSoundWavePCMWriteWorker::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FAsyncSoundWavePCMWriteWorker,*pFVar1,
                       L"FAsyncSoundWavePCMWriteWorker","STATGROUP_ThreadPoolAsyncTasks",
                       "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

