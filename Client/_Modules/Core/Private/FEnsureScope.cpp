// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// <lambda_invoker_cdecl> @ 141a47eb0

bool __cdecl
`FEnsureScope::FEnsureScope'::__l1::<lambda_3_>::<lambda_invoker_cdecl>(FEnsureHandlerArgs *param_1)

{
  return true;
}

// FEnsureScope @ 141a6bcc0

FEnsureScope * __thiscall FEnsureScope::FEnsureScope(FEnsureScope *this,char *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  char *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`1'::<lambda_4_>,0,0>::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FEnsureScope::FEnsureScope'::__l1::<lambda_4_>,bool,FEnsureHandlerArgs_const_&>
                ::Call;
  local_20 = param_1;
  FEnsureScope(this,(TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *)local_38);
  return this;
}

// FEnsureScope @ 141a6bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEnsureScope * __thiscall
FEnsureScope::FEnsureScope
          (FEnsureScope *this,TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *pTVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_d8 [32];
  code *local_b8 [5];
  undefined8 *local_90;
  FEnsureScope *local_88;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined8 *)&this->OldHandler = 0;
  *(undefined8 *)&(this->OldHandler).field_0x28 = 0;
  this->Count = 0;
  local_78 = *(longlong *)param_1;
  local_50 = (longlong *)0x0;
  local_88 = this;
  if (local_78 != 0) {
    puVar16 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar16)(puVar16,&local_68);
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x50,0x10);
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FEnsureScope::FEnsureScope'::`2'::<lambda_1>,0,1>::_vftable_;
  local_90[2] = local_88;
  local_90[4] = local_78;
  local_90[9] = local_50;
  local_50 = (longlong *)0x0;
  local_90[6] = local_68;
  local_90[7] = uStack_60;
  local_90[8] = local_58;
  if (local_90[4] != 0) {
    local_78 = 0;
  }
  if (local_90 + 2 != (undefined8 *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FEnsureScope::FEnsureScope'::__l2::<lambda_1>,bool,FEnsureHandlerArgs_const_&>
                  ::Call;
  }
  pTVar15 = SetEnsureHandler((TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *)local_48,
                             (TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *)local_b8);
  uVar1 = *(undefined4 *)&this->OldHandler;
  uVar2 = *(undefined4 *)&(this->OldHandler).field_0x4;
  uVar3 = *(undefined4 *)&(this->OldHandler).field_0x8;
  uVar4 = *(undefined4 *)&(this->OldHandler).field_0xc;
  uVar5 = *(undefined4 *)&(this->OldHandler).field_0x10;
  uVar6 = *(undefined4 *)&(this->OldHandler).field_0x14;
  uVar7 = *(undefined4 *)&(this->OldHandler).field_0x18;
  uVar8 = *(undefined4 *)&(this->OldHandler).field_0x1c;
  uVar12 = *(undefined8 *)&(this->OldHandler).field_0x20;
  uVar13 = *(undefined8 *)&(this->OldHandler).field_0x28;
  uVar14 = *(undefined8 *)&pTVar15->field_0x8;
  *(undefined8 *)&this->OldHandler = *(undefined8 *)pTVar15;
  *(undefined8 *)&(this->OldHandler).field_0x8 = uVar14;
  uVar9 = *(undefined4 *)&pTVar15->field_0x14;
  uVar10 = *(undefined4 *)&pTVar15->field_0x18;
  uVar11 = *(undefined4 *)&pTVar15->field_0x1c;
  *(undefined4 *)&(this->OldHandler).field_0x10 = *(undefined4 *)&pTVar15->field_0x10;
  *(undefined4 *)&(this->OldHandler).field_0x14 = uVar9;
  *(undefined4 *)&(this->OldHandler).field_0x18 = uVar10;
  *(undefined4 *)&(this->OldHandler).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&pTVar15->field_0x24;
  uVar10 = *(undefined4 *)&pTVar15->field_0x28;
  uVar11 = *(undefined4 *)&pTVar15->field_0x2c;
  *(undefined4 *)&(this->OldHandler).field_0x20 = *(undefined4 *)&pTVar15->field_0x20;
  *(undefined4 *)&(this->OldHandler).field_0x24 = uVar9;
  *(undefined4 *)&(this->OldHandler).field_0x28 = uVar10;
  *(undefined4 *)&(this->OldHandler).field_0x2c = uVar11;
  *(undefined4 *)pTVar15 = uVar1;
  *(undefined4 *)&pTVar15->field_0x4 = uVar2;
  *(undefined4 *)&pTVar15->field_0x8 = uVar3;
  *(undefined4 *)&pTVar15->field_0xc = uVar4;
  *(undefined4 *)&pTVar15->field_0x10 = uVar5;
  *(undefined4 *)&pTVar15->field_0x14 = uVar6;
  *(undefined4 *)&pTVar15->field_0x18 = uVar7;
  *(undefined4 *)&pTVar15->field_0x1c = uVar8;
  *(undefined8 *)&pTVar15->field_0x20 = uVar12;
  *(undefined8 *)&pTVar15->field_0x28 = uVar13;
  if (local_48._0_8_ != 0) {
    plVar17 = (longlong *)(local_48 + 0x10);
    if ((longlong *)local_48._40_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_48._40_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_78 != 0) {
    plVar17 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar17 = local_50;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar17 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return this;
}

// FEnsureScope @ 141a6bed0

FEnsureScope * __thiscall FEnsureScope::FEnsureScope(FEnsureScope *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFEnsureHandlerArgs___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FEnsureScope::FEnsureScope'::__l1::<lambda_3_>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FEnsureHandlerArgs_const_&),bool,FEnsureHandlerArgs_const_&>
                ::Call;
  FEnsureScope(this,(TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *)local_38);
  return this;
}

// ~FEnsureScope @ 141a72a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FEnsureScope::~FEnsureScope(FEnsureScope *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> local_78;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78._0_8_ = *(undefined8 *)&this->OldHandler;
  plVar4 = (longlong *)&(this->OldHandler).field_0x10;
  local_78._40_8_ = 0;
  if (local_78._0_8_ != 0) {
    puVar1 = *(undefined8 **)&(this->OldHandler).field_0x28;
    puVar2 = plVar4;
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)*puVar2)(puVar2,&local_78.field_0x10);
  }
  SetEnsureHandler((TFunction<bool___cdecl(FEnsureHandlerArgs_const_&)> *)local_48,&local_78);
  if (local_48._0_8_ != 0) {
    plVar3 = (longlong *)(local_48 + 0x10);
    if ((longlong *)local_48._40_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_48._40_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->OldHandler != 0) {
    plVar3 = *(longlong **)&(this->OldHandler).field_0x28;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

