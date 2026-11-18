// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FClassAccessPtr @ 14addc3a0

FClassAccessPtr * __thiscall
Metasound::Frontend::FClassAccessPtr::FClassAccessPtr
          (FClassAccessPtr *this,TFunction<FMetasoundFrontendClass_*___cdecl(void)> *param_1)

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

// GetInputWithName @ 14adfd0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfd1bb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfd1bf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput> * __thiscall
Metasound::Frontend::FClassAccessPtr::GetInputWithName
          (FClassAccessPtr *this,TAccessPtr<FMetasoundFrontendClassInput> *__return_storage_ptr__,
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_*>
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

// GetInputWithName @ 14adfd240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfd32b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfd32f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FClassAccessPtr::GetInputWithName
          (FClassAccessPtr *this,
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_const_*>
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

// GetOutputWithName @ 14adff620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adff70b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adff70f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput> * __thiscall
Metasound::Frontend::FClassAccessPtr::GetOutputWithName
          (FClassAccessPtr *this,TAccessPtr<FMetasoundFrontendClassOutput> *__return_storage_ptr__,
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_*>
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

// GetOutputWithName @ 14adff790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adff87b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adff87f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FClassAccessPtr::GetOutputWithName
          (FClassAccessPtr *this,
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,FMetasoundFrontendClassOutput_const_*>
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

