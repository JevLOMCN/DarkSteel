// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 15

// GetClassWithID @ 14adfab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfac4b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfac4f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithID
          (FDocumentAccessPtr *this,FClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClass_*___cdecl(void)> local_38;
  
  local_38._32_8_ = __security_cookie.value ^ (ulonglong)auStack_f8;
  uStack_d0 = param_1->A;
  uStack_cc = param_1->B;
  uStack_c8 = param_1->C;
  uStack_c4 = param_1->D;
  local_68 = *(longlong *)&this->field_0x10;
  local_d8 = (code *)CONCAT35(local_d8._5_3_,0xffffffff);
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_*>
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
  FClassAccessPtr::FClassAccessPtr
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendClass_*___cdecl(void)> *)&local_d8)
  ;
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithID @ 14adfacd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfaddb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfaddf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithID
          (FDocumentAccessPtr *this,FConstClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> local_38;
  
  local_38._32_8_ = __security_cookie.value ^ (ulonglong)auStack_f8;
  uStack_d0 = param_1->A;
  uStack_cc = param_1->B;
  uStack_c8 = param_1->C;
  uStack_c4 = param_1->D;
  local_68 = *(longlong *)&this->field_0x10;
  local_d8 = (code *)CONCAT35(local_d8._5_3_,0xffffffff);
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
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
  FConstClassAccessPtr::FConstClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithInfo @ 14adfb030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithInfo
          (FDocumentAccessPtr *this,FClassAccessPtr *__return_storage_ptr__,FNodeClassInfo *param_1)

{
  FName *pFVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined1 local_174;
  FNodeClassInfo local_170;
  uint local_128;
  undefined1 local_124;
  FNodeClassInfo local_120;
  FName local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [40];
  longlong *local_80;
  uint local_78;
  undefined1 local_74;
  FNodeClassInfo local_70;
  ulonglong local_28;
  
  plVar4 = (longlong *)(local_a8 + 0x10);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)local_a8,param_1);
  local_178 = 0xffffffff;
  local_174 = 0;
  FNodeClassInfo::FNodeClassInfo(&local_170,(FNodeClassInfo *)local_a8);
  local_128 = local_178;
  local_124 = local_174;
  FNodeClassInfo::FNodeClassInfo(&local_120,&local_170);
  local_a8._0_4_ = *(undefined4 *)&this->field_0x10;
  local_a8._4_4_ = *(undefined4 *)&this->field_0x14;
  local_80 = (longlong *)0x0;
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(puVar2,plVar4);
  }
  local_78 = local_128;
  local_74 = local_124;
  FNodeClassInfo::FNodeClassInfo(&local_70,&local_120);
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_b0 = FMemory::Malloc(0x90,0x10);
  *local_b0 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pFVar1 = (FName *)(local_b0 + 2);
  pFVar1->ComparisonIndex = (FNameEntryId)local_a8._0_4_;
  pFVar1->Number = local_a8._4_4_;
  local_b0[7] = (longlong)local_80;
  local_80 = (longlong *)0x0;
  ((FName *)(local_b0 + 4))->ComparisonIndex = (FNameEntryId)local_a8._16_4_;
  ((FName *)(local_b0 + 4))->Number = local_a8._20_4_;
  local_b0[5] = local_a8._24_8_;
  local_b0[6] = local_a8._32_8_;
  if (*pFVar1 != (FName)0x0) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
  }
  *(uint *)(local_b0 + 8) = local_78;
  *(undefined1 *)((longlong)local_b0 + 0x44) = local_74;
  FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(local_b0 + 9),&local_70);
  if (pFVar1 != (FName *)0x0) {
    local_d8 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_*>
                      ::Call;
  }
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    plVar3 = plVar4;
    if (local_80 != (longlong *)0x0) {
      plVar3 = local_80;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_a8._0_4_ = local_d8.ComparisonIndex.Value;
  local_a8._4_4_ = local_d8.Number;
  local_80 = (longlong *)0x0;
  if (local_d8 != (FName)0x0) {
    plVar3 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar3 = local_b0;
    }
    (**(code **)*plVar3)(plVar3,plVar4);
  }
  FClassAccessPtr::FClassAccessPtr
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendClass_*___cdecl(void)> *)local_a8);
  if (local_d8 != (FName)0x0) {
    plVar4 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar4 = local_b0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithInfo @ 14adfb200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithInfo
          (FDocumentAccessPtr *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassInfo *param_1)

{
  FName *pFVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined1 local_174;
  FNodeClassInfo local_170;
  uint local_128;
  undefined1 local_124;
  FNodeClassInfo local_120;
  FName local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [40];
  longlong *local_80;
  uint local_78;
  undefined1 local_74;
  FNodeClassInfo local_70;
  ulonglong local_28;
  
  plVar4 = (longlong *)(local_a8 + 0x10);
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)local_a8,param_1);
  local_178 = 0xffffffff;
  local_174 = 0;
  FNodeClassInfo::FNodeClassInfo(&local_170,(FNodeClassInfo *)local_a8);
  local_128 = local_178;
  local_124 = local_174;
  FNodeClassInfo::FNodeClassInfo(&local_120,&local_170);
  local_a8._0_4_ = *(undefined4 *)&this->field_0x10;
  local_a8._4_4_ = *(undefined4 *)&this->field_0x14;
  local_80 = (longlong *)0x0;
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(puVar2,plVar4);
  }
  local_78 = local_128;
  local_74 = local_124;
  FNodeClassInfo::FNodeClassInfo(&local_70,&local_120);
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_b0 = FMemory::Malloc(0x90,0x10);
  *local_b0 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pFVar1 = (FName *)(local_b0 + 2);
  pFVar1->ComparisonIndex = (FNameEntryId)local_a8._0_4_;
  pFVar1->Number = local_a8._4_4_;
  local_b0[7] = (longlong)local_80;
  local_80 = (longlong *)0x0;
  ((FName *)(local_b0 + 4))->ComparisonIndex = (FNameEntryId)local_a8._16_4_;
  ((FName *)(local_b0 + 4))->Number = local_a8._20_4_;
  local_b0[5] = local_a8._24_8_;
  local_b0[6] = local_a8._32_8_;
  if (*pFVar1 != (FName)0x0) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
  }
  *(uint *)(local_b0 + 8) = local_78;
  *(undefined1 *)((longlong)local_b0 + 0x44) = local_74;
  FNodeClassInfo::FNodeClassInfo((FNodeClassInfo *)(local_b0 + 9),&local_70);
  if (pFVar1 != (FName *)0x0) {
    local_d8 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
                      ::Call;
  }
  if ((FName)local_a8._0_8_ != (FName)0x0) {
    plVar3 = plVar4;
    if (local_80 != (longlong *)0x0) {
      plVar3 = local_80;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_a8._0_4_ = local_d8.ComparisonIndex.Value;
  local_a8._4_4_ = local_d8.Number;
  local_80 = (longlong *)0x0;
  if (local_d8 != (FName)0x0) {
    plVar3 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar3 = local_b0;
    }
    (**(code **)*plVar3)(plVar3,plVar4);
  }
  FConstClassAccessPtr::FConstClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> *)local_a8);
  if (local_d8 != (FName)0x0) {
    plVar4 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar4 = local_b0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithMetadata @ 14adfb5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfb704) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x00014adfb708 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithMetadata
          (FDocumentAccessPtr *this,FClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_138 [32];
  code *local_118;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8._0_1_ = param_1->Type;
  local_d8._1_1_ = param_1->field_0x21;
  local_d8._2_2_ = param_1->AccessFlags;
  uStack_d4 = (param_1->ChangeID).A;
  local_f0._0_1_ = param_1->Type;
  local_f0._1_1_ = param_1->field_0x21;
  local_f0._2_2_ = param_1->AccessFlags;
  local_f0._4_4_ = (param_1->ChangeID).A;
  uStack_e8 = (param_1->ChangeID).B;
  uStack_e4 = (param_1->ChangeID).C;
  local_98 = *(longlong *)&this->field_0x10;
  uVar1 = (param_1->ChangeID).D;
  local_118 = (code *)CONCAT35(local_118._5_3_,0xffffffff);
  local_70 = 0;
  uStack_110 = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uStack_10c = (param_1->ClassName).Namespace.Number;
  uStack_108 = (param_1->ClassName).Name.ComparisonIndex.Value;
  uStack_104 = (param_1->ClassName).Name.Number;
  uStack_100 = (param_1->ClassName).Variant.ComparisonIndex.Value;
  uStack_fc = (param_1->ClassName).Variant.Number;
  iStack_f8 = (param_1->Version).Major;
  iStack_f4 = (param_1->Version).Minor;
  uStack_d0 = uStack_e8;
  uStack_cc = uStack_e4;
  if (local_98 != 0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(uStack_110,&local_88);
  }
  lStack_60 = CONCAT44(uStack_10c,uStack_110);
  local_58 = CONCAT44(uStack_104,uStack_108);
  lStack_50 = CONCAT44(uStack_fc,uStack_100);
  local_68 = (longlong)local_118;
  local_48 = iStack_f8;
  iStack_44 = iStack_f4;
  local_c8 = (code *)0x0;
  _uStack_40 = local_f0;
  local_38 = CONCAT44(uStack_cc,uStack_d0);
  local_30 = uVar1;
  local_a0 = FMemory::Malloc(0x80,0x10);
  *local_a0 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar3 = local_a0 + 2;
  *plVar3 = local_98;
  local_a0[7] = local_70;
  local_70 = 0;
  local_a0[4] = local_88;
  local_a0[5] = lStack_80;
  local_a0[6] = local_78;
  if (*plVar3 != 0) {
    local_98 = 0;
  }
  local_a0[8] = local_68;
  local_a0[9] = lStack_60;
  local_a0[10] = local_58;
  local_a0[0xb] = lStack_50;
  *(int *)(local_a0 + 0xc) = local_48;
  *(int *)((longlong)local_a0 + 100) = iStack_44;
  *(undefined4 *)(local_a0 + 0xd) = uStack_40;
  *(undefined4 *)((longlong)local_a0 + 0x6c) = uStack_3c;
  local_a0[0xe] = local_38;
  *(uint *)(local_a0 + 0xf) = local_30;
  if (plVar3 != (longlong *)0x0) {
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_*>
               ::Call;
  }
  if (local_98 != 0) {
    (**(code **)(local_88 + 0x10))();
  }
  local_f0 = 0;
  local_118 = local_c8;
  if (local_c8 != (code *)0x0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)*plVar3)(plVar3,&uStack_108);
  }
  FClassAccessPtr::FClassAccessPtr
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendClass_*___cdecl(void)> *)&local_118
            );
  if (local_c8 != (code *)0x0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithMetadata @ 14adfb790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfb8e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x00014adfb8e8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithMetadata
          (FDocumentAccessPtr *this,FConstClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_138 [32];
  code *local_118;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8._0_1_ = param_1->Type;
  local_d8._1_1_ = param_1->field_0x21;
  local_d8._2_2_ = param_1->AccessFlags;
  uStack_d4 = (param_1->ChangeID).A;
  local_f0._0_1_ = param_1->Type;
  local_f0._1_1_ = param_1->field_0x21;
  local_f0._2_2_ = param_1->AccessFlags;
  local_f0._4_4_ = (param_1->ChangeID).A;
  uStack_e8 = (param_1->ChangeID).B;
  uStack_e4 = (param_1->ChangeID).C;
  local_98 = *(longlong *)&this->field_0x10;
  uVar1 = (param_1->ChangeID).D;
  local_118 = (code *)CONCAT35(local_118._5_3_,0xffffffff);
  local_70 = 0;
  uStack_110 = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uStack_10c = (param_1->ClassName).Namespace.Number;
  uStack_108 = (param_1->ClassName).Name.ComparisonIndex.Value;
  uStack_104 = (param_1->ClassName).Name.Number;
  uStack_100 = (param_1->ClassName).Variant.ComparisonIndex.Value;
  uStack_fc = (param_1->ClassName).Variant.Number;
  iStack_f8 = (param_1->Version).Major;
  iStack_f4 = (param_1->Version).Minor;
  uStack_d0 = uStack_e8;
  uStack_cc = uStack_e4;
  if (local_98 != 0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(uStack_110,&local_88);
  }
  lStack_60 = CONCAT44(uStack_10c,uStack_110);
  local_58 = CONCAT44(uStack_104,uStack_108);
  lStack_50 = CONCAT44(uStack_fc,uStack_100);
  local_68 = (longlong)local_118;
  local_48 = iStack_f8;
  iStack_44 = iStack_f4;
  local_c8 = (code *)0x0;
  _uStack_40 = local_f0;
  local_38 = CONCAT44(uStack_cc,uStack_d0);
  local_30 = uVar1;
  local_a0 = FMemory::Malloc(0x80,0x10);
  *local_a0 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar3 = local_a0 + 2;
  *plVar3 = local_98;
  local_a0[7] = local_70;
  local_70 = 0;
  local_a0[4] = local_88;
  local_a0[5] = lStack_80;
  local_a0[6] = local_78;
  if (*plVar3 != 0) {
    local_98 = 0;
  }
  local_a0[8] = local_68;
  local_a0[9] = lStack_60;
  local_a0[10] = local_58;
  local_a0[0xb] = lStack_50;
  *(int *)(local_a0 + 0xc) = local_48;
  *(int *)((longlong)local_a0 + 100) = iStack_44;
  *(undefined4 *)(local_a0 + 0xd) = uStack_40;
  *(undefined4 *)((longlong)local_a0 + 0x6c) = uStack_3c;
  local_a0[0xe] = local_38;
  *(uint *)(local_a0 + 0xf) = local_30;
  if (plVar3 != (longlong *)0x0) {
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
               ::Call;
  }
  if (local_98 != 0) {
    (**(code **)(local_88 + 0x10))();
  }
  local_f0 = 0;
  local_118 = local_c8;
  if (local_c8 != (code *)0x0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)*plVar3)(plVar3,&uStack_108);
  }
  FConstClassAccessPtr::FConstClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> *)&local_118);
  if (local_c8 != (code *)0x0) {
    plVar3 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar3 = local_a0;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithRegistryKey @ 14adfbb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfbc64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfbc68 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithRegistryKey
          (FDocumentAccessPtr *this,FClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  uStack_e0 = (param_1->ClassName).Name.Number;
  uStack_dc = (param_1->ClassName).Variant.ComparisonIndex.Value;
  uStack_d8 = (param_1->ClassName).Variant.Number;
  iStack_d4 = (param_1->Version).Major;
  local_88 = *(longlong *)&this->field_0x10;
  iVar1 = (param_1->Version).Minor;
  local_f8 = (code *)CONCAT35(local_f8._5_3_,0xffffffff);
  local_60 = 0;
  uStack_f0._0_1_ = param_1->Type;
  uStack_f0._1_3_ = *(undefined3 *)&param_1->field_0x1;
  uStack_ec = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uStack_e8 = (param_1->ClassName).Namespace.Number;
  uStack_e4 = (param_1->ClassName).Name.ComparisonIndex.Value;
  local_c8 = uStack_e0;
  uStack_c4 = uStack_dc;
  uStack_c0 = uStack_d8;
  iStack_bc = iStack_d4;
  if (local_88 != 0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(uStack_f0,&local_78);
  }
  lStack_50 = CONCAT44(uStack_ec,uStack_f0);
  local_48 = uStack_e8;
  uStack_44 = uStack_e4;
  uStack_40 = uStack_e0;
  uStack_3c = uStack_dc;
  local_58 = (longlong)local_f8;
  local_38 = CONCAT44(iStack_bc,uStack_c0);
  local_b8 = (code *)0x0;
  local_30 = iVar1;
  local_90 = FMemory::Malloc(0x70,0x10);
  *local_90 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar3 = local_90 + 2;
  *plVar3 = local_88;
  local_90[7] = local_60;
  local_60 = 0;
  local_90[4] = local_78;
  local_90[5] = lStack_70;
  local_90[6] = local_68;
  if (*plVar3 != 0) {
    local_88 = 0;
  }
  local_90[8] = local_58;
  local_90[9] = lStack_50;
  *(uint *)(local_90 + 10) = local_48;
  *(uint *)((longlong)local_90 + 0x54) = uStack_44;
  *(uint *)(local_90 + 0xb) = uStack_40;
  *(uint *)((longlong)local_90 + 0x5c) = uStack_3c;
  local_90[0xc] = local_38;
  *(int *)(local_90 + 0xd) = local_30;
  if (plVar3 != (longlong *)0x0) {
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_*>
               ::Call;
  }
  if (local_88 != 0) {
    (**(code **)(local_78 + 0x10))();
  }
  local_d0 = 0;
  local_f8 = local_b8;
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar3 = local_90;
    }
    (**(code **)*plVar3)(plVar3,&uStack_e8);
  }
  FClassAccessPtr::FClassAccessPtr
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendClass_*___cdecl(void)> *)&local_f8)
  ;
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar3 = local_90;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetClassWithRegistryKey @ 14adfbcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfbe24) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014adfbe28 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetClassWithRegistryKey
          (FDocumentAccessPtr *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  code *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  uStack_e0 = (param_1->ClassName).Name.Number;
  uStack_dc = (param_1->ClassName).Variant.ComparisonIndex.Value;
  uStack_d8 = (param_1->ClassName).Variant.Number;
  iStack_d4 = (param_1->Version).Major;
  local_88 = *(longlong *)&this->field_0x10;
  iVar1 = (param_1->Version).Minor;
  local_f8 = (code *)CONCAT35(local_f8._5_3_,0xffffffff);
  local_60 = 0;
  uStack_f0._0_1_ = param_1->Type;
  uStack_f0._1_3_ = *(undefined3 *)&param_1->field_0x1;
  uStack_ec = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uStack_e8 = (param_1->ClassName).Namespace.Number;
  uStack_e4 = (param_1->ClassName).Name.ComparisonIndex.Value;
  local_c8 = uStack_e0;
  uStack_c4 = uStack_dc;
  uStack_c0 = uStack_d8;
  iStack_bc = iStack_d4;
  if (local_88 != 0) {
    puVar2 = (undefined8 *)&this->field_0x20;
    if (*(undefined8 **)&this->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&this->field_0x38;
    }
    (**(code **)*puVar2)(uStack_f0,&local_78);
  }
  lStack_50 = CONCAT44(uStack_ec,uStack_f0);
  local_48 = uStack_e8;
  uStack_44 = uStack_e4;
  uStack_40 = uStack_e0;
  uStack_3c = uStack_dc;
  local_58 = (longlong)local_f8;
  local_38 = CONCAT44(iStack_bc,uStack_c0);
  local_b8 = (code *)0x0;
  local_30 = iVar1;
  local_90 = FMemory::Malloc(0x70,0x10);
  *local_90 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar3 = local_90 + 2;
  *plVar3 = local_88;
  local_90[7] = local_60;
  local_60 = 0;
  local_90[4] = local_78;
  local_90[5] = lStack_70;
  local_90[6] = local_68;
  if (*plVar3 != 0) {
    local_88 = 0;
  }
  local_90[8] = local_58;
  local_90[9] = lStack_50;
  *(uint *)(local_90 + 10) = local_48;
  *(uint *)((longlong)local_90 + 0x54) = uStack_44;
  *(uint *)(local_90 + 0xb) = uStack_40;
  *(uint *)((longlong)local_90 + 0x5c) = uStack_3c;
  local_90[0xc] = local_38;
  *(int *)(local_90 + 0xd) = local_30;
  if (plVar3 != (longlong *)0x0) {
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
               ::Call;
  }
  if (local_88 != 0) {
    (**(code **)(local_78 + 0x10))();
  }
  local_d0 = 0;
  local_f8 = local_b8;
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar3 = local_90;
    }
    (**(code **)*plVar3)(plVar3,&uStack_e8);
  }
  FConstClassAccessPtr::FConstClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> *)&local_f8);
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar3 = local_90;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDependencyWithID @ 14adfc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfc307) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfc30b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetDependencyWithID
          (FDocumentAccessPtr *this,FClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClass_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_*>
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
  FClassAccessPtr::FClassAccessPtr
            (__return_storage_ptr__,(TFunction<FMetasoundFrontendClass_*___cdecl(void)> *)&local_d8)
  ;
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDependencyWithID @ 14adfc390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014adfc497) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014adfc49b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetDependencyWithID
          (FDocumentAccessPtr *this,FConstClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
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
  FConstClassAccessPtr::FConstClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendClass_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetRootGraph @ 14ae010b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae01185) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014ae01189 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FGraphClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetRootGraph
          (FDocumentAccessPtr *this,FGraphClassAccessPtr *__return_storage_ptr__)

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
               TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,FMetasoundFrontendGraphClass_*>
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
  FGraphClassAccessPtr::FGraphClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendGraphClass_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetRootGraph @ 14ae01210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae012e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014ae012e9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstGraphClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetRootGraph
          (FDocumentAccessPtr *this,FConstGraphClassAccessPtr *__return_storage_ptr__)

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
               TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,FMetasoundFrontendGraphClass_const_*>
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
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendGraphClass_const_*___cdecl(void)> *)local_88);
  if (local_48 != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSubgraphWithID @ 14ae01500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae01607) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae0160b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FGraphClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetSubgraphWithID
          (FDocumentAccessPtr *this,FGraphClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

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
  TFunction<FMetasoundFrontendGraphClass_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFGraphClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendGraphClass_*>
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
  FGraphClassAccessPtr::FGraphClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendGraphClass_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSubgraphWithID @ 14ae01690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae01797) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014ae0179b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FConstGraphClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::GetSubgraphWithID
          (FDocumentAccessPtr *this,FConstGraphClassAccessPtr *__return_storage_ptr__,FGuid *param_1
          )

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
  TFunction<FMetasoundFrontendGraphClass_const_*___cdecl(void)> local_38;
  
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,FMetasoundFrontendGraphClass_const_*>
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
  FConstGraphClassAccessPtr::FConstGraphClassAccessPtr
            (__return_storage_ptr__,
             (TFunction<FMetasoundFrontendGraphClass_const_*___cdecl(void)> *)&local_d8);
  if (local_98 != (code *)0x0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FDocumentAccessPtr @ 14ae1a900

FDocumentAccessPtr * __thiscall
Metasound::Frontend::FDocumentAccessPtr::FDocumentAccessPtr(FDocumentAccessPtr *this)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)&this->field_0x20 =
       &
       ___7__TFunction_OwnedObject_P6APEAUFMetasoundFrontendDocument__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&this->field_0x28 =
       `Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::
       TAccessPtr<FMetasoundFrontendDocument>'::__l1::<lambda_25_>::<lambda_invoker_cdecl>;
  if (&this->field_0x28 != (undefined1 *)0x0) {
    *(code **)&this->field_0x10 =
         UE::Core::Private::Function::
         TFunctionRefCaller<FMetasoundFrontendDocument_*_(__cdecl*)(void),FMetasoundFrontendDocument_*>
         ::Call;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
  pcVar1 = *(code **)&this->field_0x10;
  plVar4 = (longlong *)&this->field_0x20;
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    plVar4 = *(longlong **)&this->field_0x38;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4);
  if (pcVar1 == UE::Core::Private::Function::
                TFunctionRefCaller<FMetasoundFrontendDocument_*_(__cdecl*)(void),FMetasoundFrontendDocument_*>
                ::Call) {
    uVar3 = (*(code *)*puVar2)();
  }
  else {
    uVar3 = (*pcVar1)(puVar2);
  }
  *(undefined8 *)this = uVar3;
  return this;
}

