// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4af400

UScriptStruct * __cdecl FRigUnit_ToWorldSpace_Location::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Location.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Location.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location,(UObject *)pUVar1,
                         L"RigUnit_ToWorldSpace_Location");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Location.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Location.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4af480

UScriptStruct * __thiscall
FRigUnit_ToWorldSpace_Location::GetExecuteContextStruct(FRigUnit_ToWorldSpace_Location *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4af6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ToWorldSpace_Location::Execute(FRigUnit_ToWorldSpace_Location *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [112];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_2c8);
  if ((FRigVMNameCache *)local_2c8._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_2c8._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  dVar14 = local_258._8_8_;
  local_208 = (this->Value).field0_0x0._s_0.Z * local_208;
  dStack_200 = dStack_200 * 0.0;
  local_218 = local_218 * (this->Value).field0_0x0._s_0.X;
  dStack_210 = dStack_210 * (this->Value).field0_0x0._s_0.Y;
  uVar11 = (undefined4)((ulonglong)dStack_210 >> 0x20);
  dVar2 = local_248._8_8_;
  dVar1 = local_248._0_8_;
  auVar16._8_4_ = SUB84(dStack_210,0);
  auVar16._0_8_ = local_218;
  auVar16._12_4_ = uVar11;
  auVar15 = blendpd(local_258,local_248,2);
  auVar17._0_8_ = auVar16._8_8_ * local_258._0_8_ - local_218 * dVar14;
  auVar17._8_8_ = local_208 * dVar14 - dStack_210 * dVar1;
  auVar3._8_4_ = SUB84(dStack_210,0);
  auVar3._0_8_ = local_218;
  auVar3._12_4_ = uVar11;
  auVar4._8_4_ = SUB84(dStack_200,0);
  auVar4._0_8_ = local_208;
  auVar4._12_4_ = (int)((ulonglong)dStack_200 >> 0x20);
  auVar4 = blendpd(auVar3,auVar4,2);
  auVar5._0_8_ = auVar4._0_8_ * dVar1 - local_208 * auVar15._0_8_;
  auVar5._8_8_ = auVar4._8_8_ * dVar2 - dStack_200 * auVar15._8_8_;
  auVar4 = blendpd(auVar17,auVar5,2);
  auVar6._8_4_ = local_248._8_4_;
  auVar6._0_8_ = dVar2;
  auVar6._12_4_ = local_248._12_4_;
  dVar9 = auVar17._8_8_ + auVar17._8_8_;
  dVar10 = auVar5._0_8_ + auVar5._0_8_;
  auVar18._0_8_ = auVar4._0_8_ + auVar4._0_8_;
  auVar18._8_8_ = auVar4._8_8_ + auVar4._8_8_;
  auVar12._8_4_ = SUB84(dVar10,0);
  auVar12._0_8_ = dVar9;
  uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar12._12_4_ = uVar11;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = dVar9;
  auVar7._12_4_ = uVar11;
  auVar13._0_8_ = auVar12._8_8_ * local_258._0_8_ - dVar9 * dVar14;
  auVar13._8_8_ = auVar18._0_8_ * dVar14 - dVar10 * dVar1;
  auVar4 = blendpd(auVar7,auVar18,2);
  auVar8._0_8_ = auVar4._0_8_ * dVar1 - auVar18._0_8_ * auVar15._0_8_;
  auVar8._8_8_ = auVar4._8_8_ * dVar2 - auVar18._8_8_ * auVar15._8_8_;
  auVar4 = blendpd(auVar13,auVar8,2);
  (this->World).field0_0x0._s_0.X = dVar2 * dVar9 + local_218 + auVar13._8_8_ + local_238;
  (this->World).field0_0x0._s_0.Y = auVar6._8_8_ * dVar10 + dStack_210 + auVar8._0_8_ + dStack_230;
  (this->World).field0_0x0._s_0.Z = dVar2 * auVar18._0_8_ + local_208 + auVar4._0_8_ + local_228;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_2c8);
  return;
}

// Execute @ 14a52eb10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ToWorldSpace_Location::Execute
          (FRigUnit_ToWorldSpace_Location *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar2 = *(undefined1 (*) [16])&param_1->field_0x80;
  dVar8 = *(double *)&param_1->field_0x88;
  dVar4 = *(double *)&param_1->field_0xb0 * (this->Value).field0_0x0._s_0.X;
  dVar5 = *(double *)&param_1->field_0xb8 * (this->Value).field0_0x0._s_0.Y;
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar9 = *(undefined1 (*) [16])&param_1->field_0x70;
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar6 = (this->Value).field0_0x0._s_0.Z * *(double *)&param_1->field_0xc0;
  dVar7 = *(double *)&param_1->field_0xc8 * 0.0;
  auVar11 = blendpd(auVar9,auVar2,2);
  dVar1 = auVar2._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar1 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar1 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar2._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])&param_1->field_0x70;
  auVar19 = blendpd(auVar18,auVar10,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar3 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar1 * dVar3;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar2,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar1 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar2._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar1 = *(double *)&param_1->field_0xa0;
  dVar3 = dVar3 * dVar8 + dVar5 + auVar13._0_8_ + *(double *)&param_1->field_0x98;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_ + *(double *)&param_1->field_0x90;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(this->World).field0_0x0 = auVar2;
  (this->World).field0_0x0._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_ + dVar1;
  return;
}

// RigVMExecute @ 14a5597c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToWorldSpace_Location::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  double *pdVar14;
  FControlRigExecuteContext *pFVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar14 = (double *)pFVar4->Ptr;
  }
  else {
    pdVar14 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  if (iVar3 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pauVar5 = (undefined1 (*) [16])param_2->DataPtr[1].Ptr;
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  auVar2 = *(undefined1 (*) [16])&pFVar15->field_0x80;
  dVar10 = pdVar14[2] * *(double *)&pFVar15->field_0xc0;
  dVar11 = *(double *)&pFVar15->field_0xc8 * 0.0;
  dVar12 = *(double *)&pFVar15->field_0x88;
  dVar8 = *(double *)&pFVar15->field_0xb0 * *pdVar14;
  dVar9 = *(double *)&pFVar15->field_0xb8 * pdVar14[1];
  uVar23 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar16 = *(undefined1 (*) [16])&pFVar15->field_0x70;
  auVar18 = blendpd(auVar16,auVar2,2);
  auVar24._8_4_ = SUB84(dVar9,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = uVar23;
  dVar1 = auVar2._0_8_;
  auVar25._0_8_ = auVar24._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
  auVar25._8_8_ = dVar10 * auVar16._8_8_ - dVar1 * dVar9;
  auVar26._8_4_ = SUB84(dVar9,0);
  auVar26._0_8_ = dVar8;
  auVar26._12_4_ = uVar23;
  auVar16._8_4_ = SUB84(dVar11,0);
  auVar16._0_8_ = dVar10;
  auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar16 = blendpd(auVar26,auVar16,2);
  auVar17._0_8_ = auVar16._0_8_ * dVar1 - auVar18._0_8_ * dVar10;
  auVar17._8_8_ = auVar16._8_8_ * auVar2._8_8_ - auVar18._8_8_ * dVar11;
  auVar16 = *(undefined1 (*) [16])&pFVar15->field_0x70;
  auVar26 = blendpd(auVar25,auVar17,2);
  auVar27._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar27._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  dVar11 = auVar25._8_8_ + auVar25._8_8_;
  dVar7 = auVar17._0_8_ + auVar17._0_8_;
  uVar23 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar21._8_4_ = SUB84(dVar7,0);
  auVar21._0_8_ = dVar11;
  auVar21._12_4_ = uVar23;
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar11;
  auVar19._12_4_ = uVar23;
  auVar26 = blendpd(auVar19,auVar27,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar11;
  auVar22._8_8_ = auVar27._0_8_ * auVar16._8_8_ - dVar1 * dVar7;
  auVar18._8_4_ = SUB84(auVar22._8_8_,0);
  auVar18._0_8_ = auVar22._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar16 = blendpd(auVar16,auVar2,2);
  auVar20._0_8_ = auVar26._0_8_ * dVar1 - auVar16._0_8_ * auVar27._0_8_;
  auVar20._8_8_ = auVar26._8_8_ * auVar2._8_8_ - auVar16._8_8_ * auVar27._8_8_;
  auVar16 = blendpd(auVar22,auVar20,2);
  dVar1 = *(double *)&pFVar15->field_0xa0;
  dVar7 = dVar7 * dVar12 + dVar9 + auVar20._0_8_ + *(double *)&pFVar15->field_0x98;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar11 * dVar12 + dVar8 + auVar18._8_8_ + *(double *)&pFVar15->field_0x90;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *pauVar5 = auVar2;
  *(double *)pauVar5[1] = auVar27._0_8_ * dVar12 + dVar10 + auVar16._0_8_ + dVar1;
  return;
}

// StaticExecute @ 14a59dad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToWorldSpace_Location::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar2 = *(undefined1 (*) [16])&param_1->field_0x80;
  auVar9 = *(undefined1 (*) [16])&param_1->field_0x70;
  dVar8 = *(double *)&param_1->field_0x88;
  dVar4 = (param_2->field0_0x0)._s_0.X * *(double *)&param_1->field_0xb0;
  dVar5 = (param_2->field0_0x0)._s_0.Y * *(double *)&param_1->field_0xb8;
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_2->field0_0x0)._s_0.Z * *(double *)&param_1->field_0xc0;
  dVar7 = *(double *)&param_1->field_0xc8 * 0.0;
  auVar11 = blendpd(auVar9,auVar2,2);
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar1 = auVar2._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar1 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar1 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar2._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])&param_1->field_0x70;
  auVar19 = blendpd(auVar18,auVar10,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar3 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar1 * dVar3;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar2,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar1 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar2._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar1 = *(double *)&param_1->field_0xa0;
  dVar3 = dVar3 * dVar8 + dVar5 + auVar13._0_8_ + *(double *)&param_1->field_0x98;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_ + *(double *)&param_1->field_0x90;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&param_3->field0_0x0 = auVar2;
  (param_3->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_ + dVar1;
  return;
}

