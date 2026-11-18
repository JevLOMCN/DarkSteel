// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 6

// FMixerNullCallback @ 1445261d0

FMixerNullCallback * __thiscall
Audio::FMixerNullCallback::FMixerNullCallback
          (FMixerNullCallback *this,float param_1,TFunction<void___cdecl(void)> *param_2,
          EThreadPriority param_3,bool param_4)

{
  longlong lVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  FEvent *pFVar5;
  FMixerNullCallback *pFVar6;
  FRunnableThread *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  *(undefined ***)this = &___7FMixerNullCallback_Audio__6B_;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->Callback = lVar1;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  this->CallbackTime = param_1;
  this->bShouldShutdown = (atomic<bool>)0x0;
  this->bShouldRecyle = (atomic<bool>)0x0;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->SleepEvent = pFVar5;
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->WakeupEvent = pFVar5;
  (this->CallbackThread).Ptr = (FRunnableThread *)0x0;
  this->LastLog = 0.0;
  if (this->SleepEvent == (FEvent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SleepEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixerNullDevice.cpp"
                       ,0x58,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMixerNullCallback *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->WakeupEvent == (FEvent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WakeupEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixerNullDevice.cpp"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMixerNullCallback *)(*pcVar3)();
      return pFVar6;
    }
  }
  (**(code **)(this->SleepEvent->_padding_ + 0x18))();
  pFVar7 = FRunnableThread::Create
                     ((FRunnable *)this,L"AudioMixerNullCallbackThread",0,param_3,0xffffffffffffffff
                      ,None);
  pFVar2 = (this->CallbackThread).Ptr;
  if ((pFVar2 != pFVar7) && ((this->CallbackThread).Ptr = pFVar7, pFVar2 != (FRunnableThread *)0x0))
  {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  lVar1 = this->WakeupEvent->_padding_;
  if (param_4) {
    (**(code **)(lVar1 + 0x18))();
  }
  else {
    (**(code **)(lVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// ~FMixerNullCallback @ 144526640

void __thiscall Audio::FMixerNullCallback::~FMixerNullCallback(FMixerNullCallback *this)

{
  FRunnableThread *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->CallbackThread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  if (*(longlong *)&this->Callback != 0) {
    plVar2 = *(longlong **)&(this->Callback).field_0x28;
    plVar3 = (longlong *)&(this->Callback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// Pause @ 144528ab0

void __thiscall Audio::FMixerNullCallback::Pause(FMixerNullCallback *this)

{
  LOCK();
  this->bShouldRecyle = (atomic<bool>)0x1;
  UNLOCK();
  if (this->SleepEvent != (FEvent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144528ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->SleepEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// Resume @ 144529160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FMixerNullCallback::Resume
          (FMixerNullCallback *this,TFunction<void___cdecl(void)> *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->WakeupEvent != (FEvent *)0x0) {
    local_58 = *(longlong *)param_1;
    uStack_30 = (longlong *)0x0;
    if (local_58 != 0) {
      puVar9 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar9)(puVar9,&local_48);
    }
    lVar7 = *(longlong *)&this->Callback;
    uVar8 = *(undefined8 *)&(this->Callback).field_0x8;
    uVar1 = *(undefined4 *)&(this->Callback).field_0x10;
    uVar2 = *(undefined4 *)&(this->Callback).field_0x14;
    uVar3 = *(undefined4 *)&(this->Callback).field_0x18;
    uVar4 = *(undefined4 *)&(this->Callback).field_0x1c;
    uVar5 = *(undefined8 *)&(this->Callback).field_0x20;
    plVar6 = *(longlong **)&(this->Callback).field_0x28;
    *(longlong *)&this->Callback = local_58;
    *(undefined8 *)&(this->Callback).field_0x8 = uStack_50;
    *(undefined4 *)&(this->Callback).field_0x10 = (undefined4)local_48;
    *(undefined4 *)&(this->Callback).field_0x14 = local_48._4_4_;
    *(undefined4 *)&(this->Callback).field_0x18 = uStack_40;
    *(undefined4 *)&(this->Callback).field_0x1c = uStack_3c;
    *(undefined4 *)&(this->Callback).field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->Callback).field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->Callback).field_0x28 = (undefined4)uStack_30;
    *(undefined4 *)&(this->Callback).field_0x2c = uStack_30._4_4_;
    local_48._0_4_ = uVar1;
    local_48._4_4_ = uVar2;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    local_38 = uVar5;
    uStack_30 = plVar6;
    local_58 = lVar7;
    uStack_50 = uVar8;
    if (lVar7 != 0) {
      plVar10 = &local_48;
      if (plVar6 != (longlong *)0x0) {
        plVar10 = plVar6;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    this->CallbackTime = param_2;
    LOCK();
    this->bShouldRecyle = (atomic<bool>)0x0;
    UNLOCK();
    (**(code **)(this->WakeupEvent->_padding_ + 0x10))();
  }
  return;
}

// Run @ 144529390

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall Audio::FMixerNullCallback::Run(FMixerNullCallback *this)

{
  atomic<bool> aVar1;
  FEvent *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  QueryPerformanceCounter(&local_res8);
  dVar7 = __real_4170000000000000;
  dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((this->SleepEvent == (FEvent *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SleepEvent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixerNullDevice.cpp"
                          ,0x18,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return uVar13;
  }
  fVar11 = __real_43480000;
  dVar10 = __real_403e000000000000;
  fVar9 = __real_3e4ccccd;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_447a0000;
  fVar17 = this->CallbackTime;
  aVar1 = this->bShouldShutdown;
  while (aVar1 == (atomic<bool>)0x0) {
    pFVar2 = this->WakeupEvent;
    if (pFVar2 != (FEvent *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0);
      (**(code **)(this->WakeupEvent->_padding_ + 0x18))();
      if (((3 < (byte)LogAudioMixer._0_1_) && (this->bShouldShutdown == (atomic<bool>)0x0)) &&
         (this->bShouldRecyle == (atomic<bool>)0x0)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      QueryPerformanceCounter(&local_res10);
      fVar17 = this->CallbackTime;
      dVar6 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
    }
    aVar1 = this->bShouldRecyle;
    while ((aVar1 == (atomic<bool>)0x0 && (this->bShouldShutdown == (atomic<bool>)0x0))) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerNullCallback_Run_Working");
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId46,"FMixerNullCallback_Run_Working",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixerNullDevice.cpp"
                   ,0x2e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId46);
      }
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Callback);
      plVar3 = *(longlong **)&(this->Callback).field_0x28;
      pcVar4 = *(code **)&this->Callback;
      plVar15 = (longlong *)&(this->Callback).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar15 = plVar3;
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      (*pcVar4)(uVar14);
      fVar16 = fVar17 * fVar8;
      if (fVar11 <= fVar17 * fVar8) {
        fVar16 = fVar11;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      (**(code **)(this->SleepEvent->_padding_ + 0x20))(this->SleepEvent,(int)fVar16);
      (**(code **)(this->SleepEvent->_padding_ + 0x18))();
      dVar6 = dVar6 + (double)this->CallbackTime;
      QueryPerformanceCounter(local_res18);
      dVar5 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      fVar17 = (float)((double)this->CallbackTime - (dVar5 - dVar6));
      if ((dVar10 < dVar5 - this->LastLog) && (fVar9 < (float)((uint)fVar17 & uVar13))) {
        if (2 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        this->LastLog = dVar5;
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      aVar1 = this->bShouldRecyle;
    }
    aVar1 = this->bShouldShutdown;
  }
  return 0;
}

// Stop @ 144529d80

void __thiscall Audio::FMixerNullCallback::Stop(FMixerNullCallback *this)

{
  FRunnableThread *pFVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerNullCallback_Stop");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId109,"FMixerNullCallback_Stop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixerNullDevice.cpp"
               ,0x6d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId109);
  }
  LOCK();
  this->bShouldShutdown = (atomic<bool>)0x1;
  UNLOCK();
  if (this->WakeupEvent != (FEvent *)0x0) {
    (**(code **)(this->WakeupEvent->_padding_ + 0x10))();
  }
  if (this->SleepEvent != (FEvent *)0x0) {
    (**(code **)(this->SleepEvent->_padding_ + 0x10))();
    pFVar1 = (this->CallbackThread).Ptr;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x20))();
    }
    FGenericPlatformProcess::ReturnSynchEventToPool(this->SleepEvent);
    this->SleepEvent = (FEvent *)0x0;
  }
  if (this->WakeupEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->WakeupEvent);
    this->WakeupEvent = (FEvent *)0x0;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

