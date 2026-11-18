// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// GetInputWithName @ 14adfdae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfdbcb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfdbcf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetInputWithName
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex> *__return_storage_ptr__,
          FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_*>
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
  TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex>
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendVertex_*___cdecl(void)> *)local_88)
  ;
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithName @ 14adfdc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfdd3b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfdd3f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetInputWithName
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,
          FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
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

// GetInputWithVertexID @ 14adfe400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfe507) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfe50b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetInputWithVertexID
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex> *__return_storage_ptr__,
          FGuid *param_1)

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
  TFunction<FMetasoundFrontendVertex_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_*>
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
  TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex>
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendVertex_*___cdecl(void)> *)&local_d8
            );
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithVertexID @ 14adfe590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfe697) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfe69b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetInputWithVertexID
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,
          FGuid *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
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

// GetOutputWithName @ 14ae00030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae0011b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014ae0011f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetOutputWithName
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex> *__return_storage_ptr__,
          FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_*>
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
  TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex>
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendVertex_*___cdecl(void)> *)local_88)
  ;
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithName @ 14ae001a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae0028b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014ae0028f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetOutputWithName
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,
          FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
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

// GetOutputWithVertexID @ 14ae00950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae00a57) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae00a5b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetOutputWithVertexID
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex> *__return_storage_ptr__,
          FGuid *param_1)

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
  TFunction<FMetasoundFrontendVertex_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_*>
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
  TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex>
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendVertex_*___cdecl(void)> *)&local_d8
            );
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithVertexID @ 14ae00ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae00be7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae00beb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVertex_const_> * __thiscall
Metasound::Frontend::FNodeAccessPtr::GetOutputWithVertexID
          (FNodeAccessPtr *this,TAccessPtr<FMetasoundFrontendVertex_const_> *__return_storage_ptr__,
          FGuid *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_const_*>
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

