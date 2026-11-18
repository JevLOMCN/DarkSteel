// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// operator= @ 142c9ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
* __thiscall
TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
::operator=(TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
            *this,TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
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

// ~TFunction<unsigned_int___cdecl(void)> @ 142ce4c60

void __thiscall
TFunction<unsigned_int___cdecl(void)>::~TFunction<unsigned_int___cdecl(void)>
          (TFunction<unsigned_int___cdecl(void)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000142ce4c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

