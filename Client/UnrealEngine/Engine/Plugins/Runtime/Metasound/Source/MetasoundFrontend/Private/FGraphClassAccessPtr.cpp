// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 15

// FGraphClassAccessPtr @ 14addc7a0

FGraphClassAccessPtr * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::FGraphClassAccessPtr
          (FGraphClassAccessPtr *this,
          TFunction<FMetasoundFrontendGraphClass_*___cdecl(void)> *param_1)

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

// GetGraph @ 14adfc960

TAccessPtr<FMetasoundFrontendGraph> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetGraph
          (FGraphClassAccessPtr *this,TAccessPtr<FMetasoundFrontendGraph> *__return_storage_ptr__)

{
  undefined1 local_res10;
  
  TAccessPtr<FMetasoundFrontendGraphClass>::
  GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,_Metasound::Frontend::FGraphClassAccessPtr::GetGraph_::__l2::<lambda_1>_>
            ((TAccessPtr<FMetasoundFrontendGraphClass> *)this,__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// GetGraph @ 14adfc990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfca65) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfca69 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendGraph_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetGraph
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendGraph_const_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  code *local_78 [2];
  longlong local_68;
  longlong local_60;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = *(code **)&this->field_0x10;
  local_60 = 0;
  if (local_88[0] != (code *)0x0) {
    puVar1 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,local_88 + 2);
  }
  local_48 = (code *)0x0;
  local_20 = FMemory::Malloc(0x50,0x10);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  plVar2 = local_20 + 2;
  *plVar2 = (longlong)local_88[0];
  local_20[7] = local_60;
  local_60 = 0;
  *(undefined4 *)(local_20 + 4) = local_78[0]._0_4_;
  *(undefined4 *)((longlong)local_20 + 0x24) = local_78[0]._4_4_;
  *(undefined4 *)(local_20 + 5) = local_78[1]._0_4_;
  *(undefined4 *)((longlong)local_20 + 0x2c) = local_78[1]._4_4_;
  local_20[6] = local_68;
  if (*plVar2 != 0) {
    local_88[0] = (code *)0x0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,FMetasoundFrontendGraph_const_*>
               ::Call;
  }
  if (local_88[0] != (code *)0x0) {
    (**(code **)(CONCAT44(local_78[0]._4_4_,local_78[0]._0_4_) + 0x10))();
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
  TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendGraph_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithName @ 14adfd800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfd8eb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfd8ef */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetInputWithName
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassInput> *__return_storage_ptr__,FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_*>
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
  TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassInput_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithName @ 14adfd970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfda5b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfda5f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetInputWithName
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *__return_storage_ptr__,FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_const_*>
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
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithNodeID @ 14adfdf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfe057) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfe05b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetInputWithNodeID
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassInput> *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClassInput_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_*>
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
  TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassInput_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputWithNodeID @ 14adfe0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfe1e7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfe1eb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetInputWithNodeID
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_const_*>
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
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetNodeWithNodeID @ 14adff440

FNodeAccessPtr * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetNodeWithNodeID
          (FGraphClassAccessPtr *this,FNodeAccessPtr *__return_storage_ptr__,FGuid *param_1)

{
  TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>
  local_28;
  
  local_28.Test.NodeID.A = param_1->A;
  local_28.Test.NodeID.B = param_1->B;
  local_28.Test.NodeID.C = param_1->C;
  local_28.Test.NodeID.D = param_1->D;
  local_28.CachedIndex = -1;
  TAccessPtr<FMetasoundFrontendGraphClass>::
  GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>
            ((TAccessPtr<FMetasoundFrontendGraphClass> *)this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetNodeWithNodeID @ 14adff490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adff597) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adff59b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstNodeAccessPtr * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetNodeWithNodeID
          (FGraphClassAccessPtr *this,FConstNodeAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendNode_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendNode_const_*>
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
  FConstNodeAccessPtr::FConstNodeAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendNode_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithName @ 14adffd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adffe3b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adffe3f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetOutputWithName
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassOutput> *__return_storage_ptr__,FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_*>
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
  TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassOutput_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithName @ 14adffec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfffab) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfffaf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetOutputWithName
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *__return_storage_ptr__,FName *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_const_*>
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
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithNodeID @ 14ae004a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae005a7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae005ab */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetOutputWithNodeID
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassOutput> *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClassOutput_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_*>
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
  TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassOutput_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOutputWithNodeID @ 14ae00630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae00737) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae0073b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetOutputWithNodeID
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_const_*>
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
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetVariableWithID @ 14ae01ae0

TAccessPtr<FMetasoundFrontendVariable> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetVariableWithID
          (FGraphClassAccessPtr *this,TAccessPtr<FMetasoundFrontendVariable> *__return_storage_ptr__
          ,FGuid *param_1)

{
  TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>
  local_28;
  
  local_28.Test.VariableID.A = param_1->A;
  local_28.Test.VariableID.B = param_1->B;
  local_28.Test.VariableID.C = param_1->C;
  local_28.Test.VariableID.D = param_1->D;
  local_28.CachedIndex = -1;
  TAccessPtr<FMetasoundFrontendGraphClass>::
  GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>
            ((TAccessPtr<FMetasoundFrontendGraphClass> *)this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetVariableWithID @ 14ae01b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae01c37) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae01c3b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendVariable_const_> * __thiscall
Metasound::Frontend::FGraphClassAccessPtr::GetVariableWithID
          (FGraphClassAccessPtr *this,
          TAccessPtr<FMetasoundFrontendVariable_const_> *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendVariable_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendVariable_const_*>
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
  TAccessPtr<FMetasoundFrontendVariable_const_>::TAccessPtr<FMetasoundFrontendVariable_const_>
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendVariable_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

