// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// Reset @ 14ec10840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TFutureBase<void>::Reset(TFutureBase<void> *this)

{
  TFutureState<void> *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  TFutureBase<void> local_58;
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
  lpCriticalSection = (this->State).Object;
  if (lpCriticalSection == (TFutureState<void> *)0x0) {
    return;
  }
  local_48 = (code *)0x0;
  uStack_20 = (longlong *)0x0;
  if ((&lpCriticalSection->field_0x50)[0x18] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((&lpCriticalSection->field_0x50)[0x18] != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14ec108dc;
    }
    pcVar7 = *(code **)(&lpCriticalSection->field_0x28 + 8);
    uVar1 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10);
    uVar2 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14);
    uVar3 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
    uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
    uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
    uVar6 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
    uVar8 = *(undefined8 *)&lpCriticalSection->field_0x50;
    plVar9 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
    *(code **)(&lpCriticalSection->field_0x28 + 8) = local_48;
    *(ulonglong *)(&lpCriticalSection->field_0x28 + 0x10) = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_38;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_34;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_30;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_2c;
    *(undefined4 *)&lpCriticalSection->field_0x50 = (undefined4)local_28;
    *(undefined4 *)(&lpCriticalSection->field_0x50 + 4) = local_28._4_4_;
    *(undefined4 *)(&lpCriticalSection->field_0x50 + 8) = (undefined4)uStack_20;
    *(undefined4 *)(&lpCriticalSection->field_0x50 + 0xc) = uStack_20._4_4_;
    local_48 = pcVar7;
    uStack_40 = uVar1;
    uStack_3c = uVar2;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar8;
    uStack_20 = plVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
LAB_14ec108dc:
    if (local_48 == (code *)0x0) goto LAB_14ec1092b;
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar7 = local_48;
    plVar9 = (longlong *)&local_38;
    if (uStack_20 != (longlong *)0x0) {
      plVar9 = uStack_20;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar7)(uVar8);
  }
  if (local_48 != (code *)0x0) {
    plVar9 = (longlong *)&local_38;
    if (uStack_20 != (longlong *)0x0) {
      plVar9 = uStack_20;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_14ec1092b:
  local_58.State.Object = (TFutureState<void> *)0x0;
  local_58.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_58) {
    (this->State).Object = (TFutureState<void> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->State).SharedReferenceCount,&local_58.State.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.State.SharedReferenceCount.ReferenceController);
  return;
}

