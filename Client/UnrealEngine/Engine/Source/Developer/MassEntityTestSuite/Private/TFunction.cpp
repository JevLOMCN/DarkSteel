// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 12

// TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&> @ 1470cf3a0

TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> * __thiscall
TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
          (TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> *this,
          <lambda> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NUFArchetypeGroupID_Mass_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&this->field_0x18 =
       UE::Mass::Test::DescendingGroupSorter::<lambda>::<lambda_invoker_cdecl>;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID),bool,UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> @ 1470f1f30

TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>
          (TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> *this,void *param_1
          )

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  return this;
}

// TFunction<void___cdecl(FMassExecutionContext_&)> @ 1470f1f50

TFunction<void___cdecl(FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassExecutionContext_&)>::TFunction<void___cdecl(FMassExecutionContext_&)>
          (TFunction<void___cdecl(FMassExecutionContext_&)> *this,void *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  return this;
}

// TFunction<bool___cdecl(FMassExecutionContext_&)> @ 1470f1f70

TFunction<bool___cdecl(FMassExecutionContext_&)> * __thiscall
TFunction<bool___cdecl(FMassExecutionContext_&)>::TFunction<bool___cdecl(FMassExecutionContext_&)>
          (TFunction<bool___cdecl(FMassExecutionContext_&)> *this,
          TFunction<bool___cdecl(FMassExecutionContext_&)> *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)this != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return this;
}

// ~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> @ 1470f6ea0

void __thiscall
TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>
          (TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001470f6eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction<void___cdecl(FMassExecutionContext_&)> @ 1470f6ed0

void __thiscall
TFunction<void___cdecl(FMassExecutionContext_&)>::~TFunction<void___cdecl(FMassExecutionContext_&)>
          (TFunction<void___cdecl(FMassExecutionContext_&)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001470f6ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction<bool___cdecl(FMassExecutionContext_&)> @ 1470f6f00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TFunction<bool___cdecl(FMassExecutionContext_&)>::~TFunction<bool___cdecl(FMassExecutionContext_&)>
          (TFunction<bool___cdecl(FMassExecutionContext_&)> *this)

{
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              *)this);
  return;
}

// ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> @ 1470f6f20

void __thiscall
TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>
          (TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001470f6f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator= @ 1470f9180

TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::operator=
          (TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> *this,
          TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)&this->field_0x8;
  uVar4 = *(undefined8 *)&this->field_0x10;
  uVar5 = *(undefined8 *)&this->field_0x18;
  uVar6 = *(undefined8 *)&this->field_0x20;
  uVar7 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return this;
}

// operator= @ 1470f91c0

TFunction<void___cdecl(FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
          (TFunction<void___cdecl(FMassExecutionContext_&)> *this,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)&this->field_0x8;
  uVar4 = *(undefined8 *)&this->field_0x10;
  uVar5 = *(undefined8 *)&this->field_0x18;
  uVar6 = *(undefined8 *)&this->field_0x20;
  uVar7 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return this;
}

// operator= @ 1470f9200

TFunction<void___cdecl(FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
          (TFunction<void___cdecl(FMassExecutionContext_&)> *this,void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)this = 0;
  }
  return this;
}

// operator= @ 1470f9240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFunction<void___cdecl(FMassExecutionContext_&)> * __thiscall
TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
          (TFunction<void___cdecl(FMassExecutionContext_&)> *this,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_1)

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

