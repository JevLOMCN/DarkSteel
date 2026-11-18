// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4afd90

UScriptStruct * __cdecl FRigUnit_ToRigSpace_Location::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Location.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Location.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location,(UObject *)pUVar1,
                         L"RigUnit_ToRigSpace_Location");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Location.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ToRigSpace_Location.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4afeb0

UScriptStruct * __thiscall
FRigUnit_ToRigSpace_Location::GetExecuteContextStruct(FRigUnit_ToRigSpace_Location *this)

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

// Execute @ 14a4b0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ToRigSpace_Location::Execute(FRigUnit_ToRigSpace_Location *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Value,&this->Global);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52e970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ToRigSpace_Location::Execute
          (FRigUnit_ToRigSpace_Location *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Global);
  return;
}

// RigVMExecute @ 14a559240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToRigSpace_Location::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  FControlRigExecuteContext *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pTVar6,pTVar3);
  return;
}

// StaticExecute @ 14a59d6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToRigSpace_Location::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  dVar1 = *(double *)&param_1->field_0x70 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar2 = *(double *)&param_1->field_0x78 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = *(double *)&param_1->field_0x80 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = *(double *)&param_1->field_0x88 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar12 = (param_2->field0_0x0)._s_0.Z - *(double *)&param_1->field_0xa0;
  auVar20._8_4_ = SUB84(dVar2,0);
  auVar20._0_8_ = dVar1;
  auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar3;
  auVar18._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar21 = blendpd(auVar20,auVar18,2);
  dVar7 = (param_2->field0_0x0)._s_0.X - *(double *)&param_1->field_0x90;
  dVar8 = (param_2->field0_0x0)._s_0.Y - *(double *)&param_1->field_0x98;
  uVar27 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar31._8_4_ = SUB84(dVar8,0);
  auVar31._0_8_ = dVar7;
  auVar31._12_4_ = uVar27;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar2;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = uVar27;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar12;
  auVar18 = blendpd(auVar17,auVar25,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar1 - dVar2 * dVar7;
  auVar32._8_8_ = dVar12 * dVar2 - auVar13._8_8_ * dVar8;
  auVar19._0_8_ = auVar18._0_8_ * dVar3 - auVar21._0_8_ * dVar12;
  auVar19._8_8_ = auVar18._8_8_ * dVar4 - auVar21._8_8_ * 0.0;
  dVar5 = auVar32._8_8_ + auVar32._8_8_;
  dVar6 = auVar19._0_8_ + auVar19._0_8_;
  uVar27 = SUB84(dVar6,0);
  uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar18 = blendpd(auVar32,auVar19,2);
  auVar29._8_4_ = uVar27;
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = uVar28;
  auVar14._8_4_ = uVar27;
  auVar14._0_8_ = dVar5;
  auVar14._12_4_ = uVar28;
  auVar24._8_4_ = uVar27;
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = uVar28;
  auVar33._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar33._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar18 = *(undefined1 (*) [16])&param_1->field_0xb0;
  auVar30._0_8_ = auVar29._8_8_ * dVar1 - dVar5 * dVar2;
  auVar30._8_8_ = auVar33._0_8_ * dVar2 - auVar14._8_8_ * dVar3;
  auVar25 = blendpd(auVar24,auVar33,2);
  auVar15._8_4_ = SUB84(auVar33._8_8_,0);
  auVar15._0_8_ = auVar33._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  auVar26._0_8_ = auVar25._0_8_ * dVar3 - auVar33._0_8_ * auVar21._0_8_;
  auVar26._8_8_ = auVar25._8_8_ * dVar4 - auVar15._8_8_ * auVar21._8_8_;
  auVar25 = *(undefined1 (*) [16])&param_1->field_0xc0;
  lVar9 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar25._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar25._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar22._0_8_ =
       (double)CONCAT44(auVar18._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar18._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = auVar18._8_4_ & _UNK_15061cc88;
  auVar22._12_4_ = auVar18._12_4_ & _UNK_15061cc8c;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  lVar10 = -(ulonglong)(auVar22._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar11 = -(ulonglong)(auVar22._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar23._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar10 & auVar18._0_4_);
  auVar23._8_4_ = ~(uint)lVar11 & auVar18._8_4_;
  auVar23._12_4_ = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar18._12_4_;
  auVar16._8_4_ = SUB84(auVar30._8_8_,0);
  auVar16._0_8_ = auVar30._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  auVar21._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar21._0_8_ = auVar25._0_8_;
  auVar21._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar25 = blendpd(auVar30,auVar26,2);
  (param_3->field0_0x0)._s_0.X = auVar23._0_8_ * (dVar5 * dVar4 + dVar7 + auVar16._8_8_);
  (param_3->field0_0x0)._s_0.Y = auVar23._8_8_ * (dVar6 * dVar4 + dVar8 + auVar26._0_8_);
  (param_3->field0_0x0)._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar9 & auVar18._0_4_) *
       (auVar33._0_8_ * dVar4 + dVar12 + auVar25._0_8_);
  return;
}

