// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// FConstNodeAccessPtr @ 14addc6a0

FConstNodeAccessPtr * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::FConstNodeAccessPtr
          (FConstNodeAccessPtr *this,
          TFunction<FMetasoundFrontendNode_const_*___cdecl(void)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  
  lVar1 = *(longlong *)param_1;
  local_20 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_28 = *(undefined8 *)&param_1->field_0x20;
  local_38 = *(undefined4 *)&param_1->field_0x10;
  uStack_34 = *(undefined4 *)&param_1->field_0x14;
  uStack_30 = *(undefined4 *)&param_1->field_0x18;
  uStack_2c = *(undefined4 *)&param_1->field_0x1c;
  if (lVar1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
  }
  else {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    plVar4 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    *(longlong *)&this->field_0x10 = lVar1;
    (**(code **)*plVar4)(local_38,&this->field_0x20);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
  pcVar2 = *(code **)&this->field_0x10;
  plVar4 = (longlong *)&this->field_0x20;
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    plVar4 = *(longlong **)&this->field_0x38;
  }
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  uVar3 = (*pcVar2)(uVar3);
  *(undefined8 *)this = uVar3;
  if (lVar1 != 0) {
    plVar4 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// GetInputWithName @ 14adfd690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfd77b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfd77f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::GetInputWithName
          (FConstNodeAccessPtr *this,
          TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,FName *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  FName FStack_90;
  code *local_88 [2];
  code *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  FName FStack_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FStack_90 = *param_1;
  local_88[0] = *(code **)&this->field_0x10;
  local_98 = 0xffffffff;
  local_60 = 0;
  if (local_88[0] != (code *)0x0) {
    puVar1 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,local_88 + 2);
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  local_48 = (code *)0x0;
  FStack_50 = FStack_90;
  local_20 = FMemory::Malloc(0x50,0x10);
  *local_20 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_20 + 2;
  *plVar2 = (longlong)local_88[0];
  local_20[7] = local_60;
  local_60 = 0;
  local_20[4] = (longlong)local_78;
  local_20[5] = lStack_70;
  local_20[6] = local_68;
  if (*plVar2 != 0) {
    local_88[0] = (code *)0x0;
  }
  *(undefined4 *)(local_20 + 8) = local_58;
  *(undefined4 *)((longlong)local_20 + 0x44) = uStack_54;
  *(uint *)(local_20 + 9) = FStack_50.ComparisonIndex.Value;
  *(uint *)((longlong)local_20 + 0x4c) = FStack_50.Number;
  if (plVar2 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
               ::Call;
  }
  if (local_88[0] != (code *)0x0) {
    (**(code **)((longlong)local_78 + 0x10))();
  }
  local_60 = 0;
  local_88[0] = local_48;
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)*plVar2)(plVar2,local_88 + 2);
  }
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithVertexID @ 14adfe270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfe377) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfe37b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::GetInputWithVertexID
          (FConstNodeAccessPtr *this,
          TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,FGuid *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  code *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> local_38;
  
  local_38._32_8_ = __security_cookie.value ^ (ulonglong)auStack_f8;
  uStack_d0 = param_1->A;
  uStack_cc = param_1->B;
  uStack_c8 = param_1->C;
  uStack_c4 = param_1->D;
  local_68 = *(longlong *)&this->field_0x10;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xffffffff);
  local_40 = 0;
  local_a8 = uStack_d0;
  uStack_a4 = uStack_cc;
  uStack_a0 = uStack_c8;
  uStack_9c = uStack_c4;
  if (local_68 != 0) {
    puVar1 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,&local_58);
  }
  local_38._8_4_ = uStack_d0;
  local_38._12_4_ = uStack_cc;
  local_38._0_8_ = local_d8;
  local_38._16_8_ = CONCAT44(uStack_9c,uStack_a0);
  local_98 = (code *)0x0;
  local_70 = FMemory::Malloc(0x60,0x10);
  *local_70 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_70 + 2;
  *plVar2 = local_68;
  local_70[7] = local_40;
  local_40 = 0;
  local_70[4] = local_58;
  local_70[5] = lStack_50;
  local_70[6] = local_48;
  if (*plVar2 != 0) {
    local_68 = 0;
  }
  *(undefined4 *)(local_70 + 8) = local_38._0_4_;
  *(undefined4 *)((longlong)local_70 + 0x44) = local_38._4_4_;
  *(undefined4 *)(local_70 + 9) = local_38._8_4_;
  *(undefined4 *)((longlong)local_70 + 0x4c) = local_38._12_4_;
  local_70[10] = local_38._16_8_;
  if (plVar2 != (longlong *)0x0) {
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
               ::Call;
  }
  if (local_68 != 0) {
    (**(code **)(local_58 + 0x10))();
  }
  local_b0 = 0;
  local_d8 = local_98;
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)*plVar2)(plVar2,&uStack_c8);
  }
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithName @ 14adffbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adffccb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adffccf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::GetOutputWithName
          (FConstNodeAccessPtr *this,
          TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,FName *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  FName FStack_90;
  code *local_88 [2];
  code *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  FName FStack_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FStack_90 = *param_1;
  local_88[0] = *(code **)&this->field_0x10;
  local_98 = 0xffffffff;
  local_60 = 0;
  if (local_88[0] != (code *)0x0) {
    puVar1 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,local_88 + 2);
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  local_48 = (code *)0x0;
  FStack_50 = FStack_90;
  local_20 = FMemory::Malloc(0x50,0x10);
  *local_20 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_20 + 2;
  *plVar2 = (longlong)local_88[0];
  local_20[7] = local_60;
  local_60 = 0;
  local_20[4] = (longlong)local_78;
  local_20[5] = lStack_70;
  local_20[6] = local_68;
  if (*plVar2 != 0) {
    local_88[0] = (code *)0x0;
  }
  *(undefined4 *)(local_20 + 8) = local_58;
  *(undefined4 *)((longlong)local_20 + 0x44) = uStack_54;
  *(uint *)(local_20 + 9) = FStack_50.ComparisonIndex.Value;
  *(uint *)((longlong)local_20 + 0x4c) = FStack_50.Number;
  if (plVar2 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
               ::Call;
  }
  if (local_88[0] != (code *)0x0) {
    (**(code **)((longlong)local_78 + 0x10))();
  }
  local_60 = 0;
  local_88[0] = local_48;
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)*plVar2)(plVar2,local_88 + 2);
  }
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithVertexID @ 14ae007c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae008c7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae008cb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::GetOutputWithVertexID
          (FConstNodeAccessPtr *this,
          TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,FGuid *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  code *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> local_38;
  
  local_38._32_8_ = __security_cookie.value ^ (ulonglong)auStack_f8;
  uStack_d0 = param_1->A;
  uStack_cc = param_1->B;
  uStack_c8 = param_1->C;
  uStack_c4 = param_1->D;
  local_68 = *(longlong *)&this->field_0x10;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xffffffff);
  local_40 = 0;
  local_a8 = uStack_d0;
  uStack_a4 = uStack_cc;
  uStack_a0 = uStack_c8;
  uStack_9c = uStack_c4;
  if (local_68 != 0) {
    puVar1 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,&local_58);
  }
  local_38._8_4_ = uStack_d0;
  local_38._12_4_ = uStack_cc;
  local_38._0_8_ = local_d8;
  local_38._16_8_ = CONCAT44(uStack_9c,uStack_a0);
  local_98 = (code *)0x0;
  local_70 = FMemory::Malloc(0x60,0x10);
  *local_70 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_70 + 2;
  *plVar2 = local_68;
  local_70[7] = local_40;
  local_40 = 0;
  local_70[4] = local_58;
  local_70[5] = lStack_50;
  local_70[6] = local_48;
  if (*plVar2 != 0) {
    local_68 = 0;
  }
  *(undefined4 *)(local_70 + 8) = local_38._0_4_;
  *(undefined4 *)((longlong)local_70 + 0x44) = local_38._4_4_;
  *(undefined4 *)(local_70 + 9) = local_38._8_4_;
  *(undefined4 *)((longlong)local_70 + 0x4c) = local_38._12_4_;
  local_70[10] = local_38._16_8_;
  if (plVar2 != (longlong *)0x0) {
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
               ::Call;
  }
  if (local_68 != 0) {
    (**(code **)(local_58 + 0x10))();
  }
  local_b0 = 0;
  local_d8 = local_98;
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)*plVar2)(plVar2,&uStack_c8);
  }
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendVertex_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FConstNodeAccessPtr<FMetasoundFrontendNode> @ 14ae4a630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstNodeAccessPtr * __thiscall
Metasound::Frontend::FConstNodeAccessPtr::FConstNodeAccessPtr<FMetasoundFrontendNode>
          (FConstNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendNode> *param_1,
          EDerivedCopy param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  local_78 = *(longlong *)&param_1->GetObject;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar9 = *(undefined8 **)&(param_1->GetObject).field_0x28;
    puVar11 = (undefined8 *)&(param_1->GetObject).field_0x10;
    if (puVar9 != (undefined8 *)0x0) {
      puVar11 = puVar9;
    }
    (**(code **)*puVar11)(puVar11,&local_68);
  }
  local_48 = (code *)0x0;
  puVar9 = FMemory::Malloc(0x40,0x10);
  *puVar9 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendNode_____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendNode___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar12 = puVar9 + 2;
  *plVar12 = local_78;
  puVar9[7] = local_50;
  local_50 = (longlong *)0x0;
  puVar9[4] = local_68;
  puVar9[5] = uStack_60;
  puVar9[6] = local_58;
  if (*plVar12 != 0) {
    local_78 = 0;
  }
  lVar7 = *(longlong *)&this->field_0x10;
  uVar8 = *(undefined8 *)&this->field_0x18;
  uVar2 = *(undefined4 *)&this->field_0x20;
  uVar3 = *(undefined4 *)&this->field_0x24;
  uVar4 = *(undefined4 *)&this->field_0x28;
  uVar5 = *(undefined4 *)&this->field_0x2c;
  uVar10 = *(undefined8 *)&this->field_0x30;
  plVar6 = *(longlong **)&this->field_0x38;
  if (plVar12 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::TAccessPtr<FMetasoundFrontendNode_const_><FMetasoundFrontendNode>'::__l2::<lambda_1>,FMetasoundFrontendNode_const_*>
               ::Call;
  }
  *(code **)&this->field_0x10 = local_48;
  *(undefined8 *)&this->field_0x18 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar9,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
  *(undefined4 *)&this->field_0x20 = local_38;
  *(undefined4 *)&this->field_0x24 = uStack_34;
  *(undefined4 *)&this->field_0x28 = uStack_30;
  *(undefined4 *)&this->field_0x2c = uStack_2c;
  *(undefined4 *)&this->field_0x30 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x34 = local_28._4_4_;
  *(undefined4 *)&this->field_0x38 = (undefined4)uStack_20;
  *(undefined4 *)&this->field_0x3c = uStack_20._4_4_;
  local_48 = (code *)lVar7;
  uStack_40 = uVar8;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar10;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar12 = plVar6;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_78 != 0) {
    plVar12 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar12 = local_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
  pcVar1 = *(code **)&this->field_0x10;
  plVar12 = (longlong *)&this->field_0x20;
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    plVar12 = *(longlong **)&this->field_0x38;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  uVar10 = (*pcVar1)(uVar10);
  *(undefined8 *)this = uVar10;
  return this;
}

