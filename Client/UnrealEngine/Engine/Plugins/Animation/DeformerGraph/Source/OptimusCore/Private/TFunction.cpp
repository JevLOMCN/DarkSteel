// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// ~TFunction<void___cdecl(enum_EOptimusDiagnosticLevel,FText,UObject_const_*)> @ 14e15ddc0

void __thiscall
TFunction<void___cdecl(enum_EOptimusDiagnosticLevel,FText,UObject_const_*)>::
~TFunction<void___cdecl(enum_EOptimusDiagnosticLevel,FText,UObject_const_*)>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e15ddd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator= @ 14e164540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<bool___cdecl(UOptimusNode_*)> * __thiscall
TFunction<bool___cdecl(UOptimusNode_*)>::operator=
          (TFunction<bool___cdecl(UOptimusNode_*)> *this,
          TFunction<bool___cdecl(UOptimusNode_*)> *param_1)

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
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar7 = *(longlong *)this;
  uVar8 = *(undefined8 *)&this->field_0x8;
  uVar1 = *(undefined4 *)&this->field_0x10;
  uVar2 = *(undefined4 *)&this->field_0x14;
  uVar3 = *(undefined4 *)&this->field_0x18;
  uVar4 = *(undefined4 *)&this->field_0x1c;
  uVar5 = *(undefined8 *)&this->field_0x20;
  plVar6 = *(longlong **)&this->field_0x28;
  *(longlong *)this = local_48;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = local_38;
  *(undefined4 *)&this->field_0x14 = uStack_34;
  *(undefined4 *)&this->field_0x18 = uStack_30;
  *(undefined4 *)&this->field_0x1c = uStack_2c;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&this->field_0x2c = uStack_20._4_4_;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar10 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    local_48 = lVar7;
    uStack_40 = uVar8;
    (**(code **)(*plVar10 + 0x10))();
  }
  return this;
}

// operator= @ 14e164600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<bool___cdecl(UOptimusNodeGraph_*)> * __thiscall
TFunction<bool___cdecl(UOptimusNodeGraph_*)>::operator=
          (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *this,
          TFunction<bool___cdecl(UOptimusNodeGraph_*)> *param_1)

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
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar7 = *(longlong *)this;
  uVar8 = *(undefined8 *)&this->field_0x8;
  uVar1 = *(undefined4 *)&this->field_0x10;
  uVar2 = *(undefined4 *)&this->field_0x14;
  uVar3 = *(undefined4 *)&this->field_0x18;
  uVar4 = *(undefined4 *)&this->field_0x1c;
  uVar5 = *(undefined8 *)&this->field_0x20;
  plVar6 = *(longlong **)&this->field_0x28;
  *(longlong *)this = local_48;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = local_38;
  *(undefined4 *)&this->field_0x14 = uStack_34;
  *(undefined4 *)&this->field_0x18 = uStack_30;
  *(undefined4 *)&this->field_0x1c = uStack_2c;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&this->field_0x2c = uStack_20._4_4_;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar10 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    local_48 = lVar7;
    uStack_40 = uVar8;
    (**(code **)(*plVar10 + 0x10))();
  }
  return this;
}

// operator= @ 14e1646c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> * __thiscall
TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>::operator=
          (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
           *this,TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                 *param_1)

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
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar7 = *(longlong *)this;
  uVar8 = *(undefined8 *)&this->field_0x8;
  uVar1 = *(undefined4 *)&this->field_0x10;
  uVar2 = *(undefined4 *)&this->field_0x14;
  uVar3 = *(undefined4 *)&this->field_0x18;
  uVar4 = *(undefined4 *)&this->field_0x1c;
  uVar5 = *(undefined8 *)&this->field_0x20;
  plVar6 = *(longlong **)&this->field_0x28;
  *(longlong *)this = local_48;
  *(undefined8 *)&this->field_0x8 = uStack_40;
  *(undefined4 *)&this->field_0x10 = local_38;
  *(undefined4 *)&this->field_0x14 = uStack_34;
  *(undefined4 *)&this->field_0x18 = uStack_30;
  *(undefined4 *)&this->field_0x1c = uStack_2c;
  *(undefined4 *)&this->field_0x20 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x24 = local_28._4_4_;
  *(undefined4 *)&this->field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&this->field_0x2c = uStack_20._4_4_;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar10 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    local_48 = lVar7;
    uStack_40 = uVar8;
    (**(code **)(*plVar10 + 0x10))();
  }
  return this;
}

