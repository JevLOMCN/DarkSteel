// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// ResetActiveDeviceSwapFuture @ 148d41000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FAudioMixerPlatformSwappable::ResetActiveDeviceSwapFuture(FAudioMixerPlatformSwappable *this)

{
  TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *pTVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  code *pcVar8;
  ULONG_PTR UVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar1 = &this->ActiveDeviceSwap;
  lpCriticalSection = *(LPCRITICAL_SECTION *)pTVar1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return;
  }
  local_48 = (code *)0x0;
  uStack_20 = (longlong *)0x0;
  if (*(char *)&lpCriticalSection[2].LockSemaphore == '\0') {
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)&lpCriticalSection[2].LockSemaphore != '\0') {
      LeaveCriticalSection(lpCriticalSection);
      goto LAB_148d410a0;
    }
    pcVar8 = *(code **)&lpCriticalSection[1].LockCount;
    uVar2 = *(undefined4 *)&lpCriticalSection[1].OwningThread;
    uVar3 = *(undefined4 *)((longlong)&lpCriticalSection[1].OwningThread + 4);
    uVar4 = *(undefined4 *)&lpCriticalSection[1].LockSemaphore;
    uVar5 = *(undefined4 *)((longlong)&lpCriticalSection[1].LockSemaphore + 4);
    UVar9 = lpCriticalSection[1].SpinCount;
    uVar6 = *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4);
    p_Var7 = lpCriticalSection[2].DebugInfo;
    plVar11 = *(longlong **)&lpCriticalSection[2].LockCount;
    *(code **)&lpCriticalSection[1].LockCount = local_48;
    lpCriticalSection[1].OwningThread = (HANDLE)CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)&lpCriticalSection[1].LockSemaphore = local_38;
    *(undefined4 *)((longlong)&lpCriticalSection[1].LockSemaphore + 4) = uStack_34;
    *(undefined4 *)&lpCriticalSection[1].SpinCount = uStack_30;
    *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4) = uStack_2c;
    *(undefined4 *)&lpCriticalSection[2].DebugInfo = (undefined4)local_28;
    *(undefined4 *)((longlong)&lpCriticalSection[2].DebugInfo + 4) = local_28._4_4_;
    lpCriticalSection[2].LockCount = (LONG)uStack_20;
    lpCriticalSection[2].RecursionCount = uStack_20._4_4_;
    local_48 = pcVar8;
    uStack_40 = uVar2;
    uStack_3c = uVar3;
    local_38 = uVar4;
    uStack_34 = uVar5;
    uStack_30 = (int)UVar9;
    uStack_2c = uVar6;
    local_28 = p_Var7;
    uStack_20 = plVar11;
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
LAB_148d410a0:
    if (local_48 == (code *)0x0) goto LAB_148d410ef;
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar8 = local_48;
    plVar11 = (longlong *)&local_38;
    if (uStack_20 != (longlong *)0x0) {
      plVar11 = uStack_20;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar8)(uVar10);
  }
  if (local_48 != (code *)0x0) {
    plVar11 = (longlong *)&local_38;
    if (uStack_20 != (longlong *)0x0) {
      plVar11 = uStack_20;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_148d410ef:
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                 *)&local_58) {
    *(undefined8 *)pTVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->ActiveDeviceSwap).field_0x8,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  return;
}

