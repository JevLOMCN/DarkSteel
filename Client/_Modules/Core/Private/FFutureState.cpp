// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FFutureState @ 141916e60

FFutureState * __thiscall
FFutureState::FFutureState(FFutureState *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  FEvent *pFVar2;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar1;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_1 = 0;
  }
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  (this->CompletionEvent).Event = pFVar2;
  this->bComplete = (TAtomic<bool>)0x0;
  return this;
}

// MarkComplete @ 1419569b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FFutureState::MarkComplete(FFutureState *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (this != (FFutureState *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    pcVar5 = *(code **)&this->CompletionCallback;
    uVar7 = *(undefined8 *)&(this->CompletionCallback).field_0x8;
    uVar1 = *(undefined4 *)&(this->CompletionCallback).field_0x10;
    uVar2 = *(undefined4 *)&(this->CompletionCallback).field_0x14;
    uVar3 = *(undefined4 *)&(this->CompletionCallback).field_0x18;
    uVar4 = *(undefined4 *)&(this->CompletionCallback).field_0x1c;
    uVar6 = CONCAT44(uStack_24,local_28);
    local_28 = *(undefined4 *)&(this->CompletionCallback).field_0x20;
    uStack_24 = *(undefined4 *)&(this->CompletionCallback).field_0x24;
    plVar8 = *(longlong **)&(this->CompletionCallback).field_0x28;
    *(undefined4 *)&this->CompletionCallback = (undefined4)local_48;
    *(undefined4 *)&(this->CompletionCallback).field_0x4 = local_48._4_4_;
    *(undefined4 *)&(this->CompletionCallback).field_0x8 = (undefined4)uStack_40;
    *(undefined4 *)&(this->CompletionCallback).field_0xc = uStack_40._4_4_;
    *(undefined4 *)&(this->CompletionCallback).field_0x10 = local_38;
    *(undefined4 *)&(this->CompletionCallback).field_0x14 = uStack_34;
    *(undefined4 *)&(this->CompletionCallback).field_0x18 = uStack_30;
    *(undefined4 *)&(this->CompletionCallback).field_0x1c = uStack_2c;
    *(undefined8 *)&(this->CompletionCallback).field_0x20 = uVar6;
    *(longlong **)&(this->CompletionCallback).field_0x28 = plStack_20;
    LOCK();
    this->bComplete = (TAtomic<bool>)0x1;
    UNLOCK();
    local_48 = pcVar5;
    uStack_40 = uVar7;
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    plStack_20 = plVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    (**(code **)(((this->CompletionEvent).Event)->_padding_ + 0x10))();
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar5 = local_48;
      plVar8 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar8 = plStack_20;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar5)(uVar7);
      if (local_48 != (code *)0x0) {
        plVar8 = (longlong *)&local_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar8 = plStack_20;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

