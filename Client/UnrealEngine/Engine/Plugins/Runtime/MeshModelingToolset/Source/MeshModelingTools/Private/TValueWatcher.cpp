// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// CheckAndUpdate @ 14cc485b0

void __thiscall TValueWatcher<FLinearColor>::CheckAndUpdate(TValueWatcher<FLinearColor> *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValueFunc);
  plVar4 = *(longlong **)&(this->GetValueFunc).field_0x28;
  plVar5 = (longlong *)&(this->GetValueFunc).field_0x10;
  pcVar1 = *(code **)&this->GetValueFunc;
  plVar3 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar3 = plVar4;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_28,uVar2);
  if ((((local_28 != (this->CachedValue).field0_0x0._s_0.R) ||
       (local_24 != (this->CachedValue).field0_0x0._s_0.G)) ||
      (local_20 != (this->CachedValue).field0_0x0._s_0.B)) ||
     (local_1c != (this->CachedValue).field0_0x0._s_0.A)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValueFunc);
    plVar4 = *(longlong **)&(this->GetValueFunc).field_0x28;
    pcVar1 = *(code **)&this->GetValueFunc;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    uVar2 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar1)(&local_18,uVar2);
    *(undefined8 *)&(this->CachedValue).field0_0x0 = local_18;
    *(undefined8 *)((longlong)&(this->CachedValue).field0_0x0 + 8) = uStack_10;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnValueChangedFunc);
    plVar5 = *(longlong **)&(this->OnValueChangedFunc).field_0x28;
    pcVar1 = *(code **)&this->OnValueChangedFunc;
    plVar4 = (longlong *)&(this->OnValueChangedFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,&local_18);
  }
  return;
}

// CheckAndUpdate @ 14cc486a0

void __thiscall TValueWatcher<bool>::CheckAndUpdate(TValueWatcher<bool> *this)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValueFunc);
  plVar5 = *(longlong **)&(this->GetValueFunc).field_0x28;
  plVar6 = (longlong *)&(this->GetValueFunc).field_0x10;
  pcVar1 = *(code **)&this->GetValueFunc;
  plVar4 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar4 = plVar5;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if ((bool)cVar2 != this->CachedValue) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetValueFunc);
    plVar5 = *(longlong **)&(this->GetValueFunc).field_0x28;
    pcVar1 = *(code **)&this->GetValueFunc;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    uVar3 = (**(code **)(*plVar6 + 8))(plVar6);
    local_res8[0] = (*pcVar1)(uVar3);
    this->CachedValue = (bool)local_res8[0];
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnValueChangedFunc);
    plVar6 = *(longlong **)&(this->OnValueChangedFunc).field_0x28;
    pcVar1 = *(code **)&this->OnValueChangedFunc;
    plVar5 = (longlong *)&(this->OnValueChangedFunc).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar5 = plVar6;
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar3,local_res8);
  }
  return;
}

// Initialize @ 14cc5fff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TValueWatcher<FLinearColor>::Initialize
          (TValueWatcher<FLinearColor> *this,TFunction<FLinearColor___cdecl(void)> *param_1,
          TFunction<void___cdecl(FLinearColor)> *param_2,FLinearColor *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar11 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar11)(puVar11,&local_48);
  }
  lVar9 = *(longlong *)&this->GetValueFunc;
  uVar10 = *(undefined8 *)&(this->GetValueFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->GetValueFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->GetValueFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->GetValueFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->GetValueFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->GetValueFunc).field_0x20;
  plVar13 = *(longlong **)&(this->GetValueFunc).field_0x28;
  *(longlong *)&this->GetValueFunc = local_58;
  *(undefined8 *)&(this->GetValueFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->GetValueFunc).field_0x10 = local_48;
  *(undefined4 *)&(this->GetValueFunc).field_0x14 = uStack_44;
  *(undefined4 *)&(this->GetValueFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->GetValueFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->GetValueFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->GetValueFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->GetValueFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->GetValueFunc).field_0x2c = uStack_30._4_4_;
  local_48 = uVar1;
  uStack_44 = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar13;
  uStack_50 = uVar10;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    local_58 = lVar9;
    (**(code **)(*plVar12 + 0x10))();
  }
  local_58 = *(longlong *)param_2;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar11 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar11)(puVar11,&local_48);
  }
  lVar9 = *(longlong *)&this->OnValueChangedFunc;
  uVar10 = *(undefined8 *)&(this->OnValueChangedFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->OnValueChangedFunc).field_0x20;
  plVar13 = *(longlong **)&(this->OnValueChangedFunc).field_0x28;
  *(longlong *)&this->OnValueChangedFunc = local_58;
  *(undefined8 *)&(this->OnValueChangedFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x10 = local_48;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x14 = uStack_44;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x2c = uStack_30._4_4_;
  local_48 = uVar1;
  uStack_44 = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar13;
  local_58 = lVar9;
  uStack_50 = uVar10;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  fVar6 = (param_3->field0_0x0)._s_0.G;
  fVar7 = (param_3->field0_0x0)._s_0.B;
  fVar8 = (param_3->field0_0x0)._s_0.A;
  (this->CachedValue).field0_0x0._s_0.R = (param_3->field0_0x0)._s_0.R;
  (this->CachedValue).field0_0x0._s_0.G = fVar6;
  (this->CachedValue).field0_0x0._s_0.B = fVar7;
  (this->CachedValue).field0_0x0._s_0.A = fVar8;
  if (*(longlong *)param_1 != 0) {
    plVar13 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// Initialize @ 14cc60190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TValueWatcher<bool>::Initialize
          (TValueWatcher<bool> *this,TFunction<bool___cdecl(void)> *param_1,
          TFunction<void___cdecl(bool)> *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
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
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->GetValueFunc;
  uVar7 = *(undefined8 *)&(this->GetValueFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->GetValueFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->GetValueFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->GetValueFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->GetValueFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->GetValueFunc).field_0x20;
  plVar10 = *(longlong **)&(this->GetValueFunc).field_0x28;
  *(longlong *)&this->GetValueFunc = local_58;
  *(undefined8 *)&(this->GetValueFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->GetValueFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->GetValueFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->GetValueFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->GetValueFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->GetValueFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->GetValueFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->GetValueFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->GetValueFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    local_58 = lVar6;
    (**(code **)(*plVar9 + 0x10))();
  }
  local_58 = *(longlong *)param_2;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->OnValueChangedFunc;
  uVar7 = *(undefined8 *)&(this->OnValueChangedFunc).field_0x8;
  uVar1 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x10;
  uVar2 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x14;
  uVar3 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x18;
  uVar4 = *(undefined4 *)&(this->OnValueChangedFunc).field_0x1c;
  uVar5 = *(undefined8 *)&(this->OnValueChangedFunc).field_0x20;
  plVar10 = *(longlong **)&(this->OnValueChangedFunc).field_0x28;
  *(longlong *)&this->OnValueChangedFunc = local_58;
  *(undefined8 *)&(this->OnValueChangedFunc).field_0x8 = uStack_50;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x18 = uStack_40;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->OnValueChangedFunc).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  this->CachedValue = param_3;
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

