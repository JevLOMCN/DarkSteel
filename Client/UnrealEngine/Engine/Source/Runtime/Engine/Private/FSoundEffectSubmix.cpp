// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ProcessAudio @ 1486e2460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSoundEffectSubmix::ProcessAudio
          (FSoundEffectSubmix *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  code *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  LOCK();
  *(undefined4 *)&this->field_0x58 = 1;
  UNLOCK();
  param_1->PresetData = (void *)0x0;
  local_98 = (code *)0x0;
  plStack_70 = (longlong *)0x0;
  while (plVar13 = plStack_70, uVar7 = local_78, uVar12 = uStack_80, lVar10 = local_88,
        lVar1 = **(longlong **)&this->field_0x68, lVar1 != 0) {
    pcVar8 = *(code **)(lVar1 + 0x10);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    local_88 = *(longlong *)(lVar1 + 0x20);
    uStack_80 = *(undefined8 *)(lVar1 + 0x28);
    local_78 = *(undefined8 *)(lVar1 + 0x30);
    plStack_70 = *(longlong **)(lVar1 + 0x38);
    *(code **)(lVar1 + 0x10) = local_98;
    *(undefined8 *)(lVar1 + 0x18) = uStack_90;
    *(longlong *)(lVar1 + 0x20) = lVar10;
    *(undefined8 *)(lVar1 + 0x28) = uVar12;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(longlong **)(lVar1 + 0x38) = plVar13;
    pvVar2 = *(void **)&this->field_0x68;
    *(longlong *)&this->field_0x68 = lVar1;
    local_68 = *(longlong *)(lVar1 + 0x10);
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined4 *)(lVar1 + 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    uVar5 = *(undefined4 *)(lVar1 + 0x28);
    uVar6 = *(undefined4 *)(lVar1 + 0x2c);
    uVar12 = *(undefined8 *)(lVar1 + 0x30);
    plStack_40 = *(longlong **)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = uStack_60;
    *(undefined4 *)(lVar1 + 0x20) = local_58;
    *(undefined4 *)(lVar1 + 0x24) = uStack_54;
    *(undefined4 *)(lVar1 + 0x28) = uStack_50;
    *(undefined4 *)(lVar1 + 0x2c) = uStack_4c;
    *(undefined4 *)(lVar1 + 0x30) = (undefined4)local_48;
    *(undefined4 *)(lVar1 + 0x34) = local_48._4_4_;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar1 + 0x3c) = 0;
    uStack_60 = uVar7;
    local_58 = uVar3;
    uStack_54 = uVar4;
    uStack_50 = uVar5;
    uStack_4c = uVar6;
    local_48 = uVar12;
    local_98 = pcVar8;
    uStack_90 = uVar9;
    if (local_68 != 0) {
      plVar13 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar13 = plStack_40;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pvVar2 != (void *)0x0) {
      if (*(longlong *)((longlong)pvVar2 + 0x10) != 0) {
        plVar13 = (longlong *)((longlong)pvVar2 + 0x20);
        if (*(longlong **)((longlong)pvVar2 + 0x38) != (longlong *)0x0) {
          plVar13 = *(longlong **)((longlong)pvVar2 + 0x38);
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      ::operator_delete(pvVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_98);
    pcVar8 = local_98;
    plVar13 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar13 = plStack_70;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar12);
  }
  if (local_98 != (code *)0x0) {
    plVar13 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar13 = plStack_70;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((*(int *)&this->field_0x48 != 0) &&
     (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x4c), bVar11)) {
    (**(code **)(*(longlong *)this + 8))(this);
    LOCK();
    *(undefined4 *)&this->field_0x48 = 0;
    UNLOCK();
  }
  if ((*(int *)&this->field_0x5c != 0) &&
     (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x4c), bVar11)) {
    (**(code **)(*(longlong *)this + 0x38))(this,param_1,param_2);
    return true;
  }
  return false;
}

