// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4b04d0

UScriptStruct * __cdecl FRigUnit_ToWorldSpace_Rotation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Rotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Rotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation,(UObject *)pUVar1,
                         L"RigUnit_ToWorldSpace_Rotation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Rotation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ToWorldSpace_Rotation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b0550

UScriptStruct * __thiscall
FRigUnit_ToWorldSpace_Rotation::GetExecuteContextStruct(FRigUnit_ToWorldSpace_Rotation *this)

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

// Execute @ 14a4b09a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ToWorldSpace_Rotation::Execute(FRigUnit_ToWorldSpace_Rotation *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [112];
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_2b8);
  if ((FRigVMNameCache *)local_2b8._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_2b8._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  dVar6 = (this->Value).Z;
  dVar7 = (this->Value).W;
  dVar8 = (this->Value).X;
  dVar9 = (this->Value).Y;
  dVar2 = local_248 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dStack_230 * dVar8 +
          dStack_240 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          local_238 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = local_248 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dStack_230 * dVar9 +
          dStack_240 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_238 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = local_248 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dStack_230 * dVar6 +
          dStack_240 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          local_238 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = local_248 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dStack_230 * dVar7 +
          dStack_240 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_238 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (this->World).X = dVar2;
  (this->World).Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (this->World).Z = dVar5;
  (this->World).W = (double)auVar4._8_8_;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_2b8);
  return;
}

// Execute @ 14a52ec50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ToWorldSpace_Rotation::Execute
          (FRigUnit_ToWorldSpace_Rotation *this,FControlRigExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar3 = (this->Value).Z;
  dVar7 = (this->Value).W;
  dVar8 = (this->Value).X;
  dVar9 = (this->Value).Y;
  dVar10 = *(double *)&param_1->field_0x70;
  dVar11 = *(double *)&param_1->field_0x78;
  dVar12 = *(double *)&param_1->field_0x80;
  dVar13 = *(double *)&param_1->field_0x88;
  dVar5 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar13 * dVar3 +
          dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar7 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar13 * dVar8 +
          dVar11 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (this->World).X = dVar2;
  (this->World).Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (this->World).Z = dVar5;
  (this->World).W = (double)auVar4._8_8_;
  return;
}

// RigVMExecute @ 14a5599e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToWorldSpace_Rotation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  double *pdVar21;
  FControlRigExecuteContext *pFVar22;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar21 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar21 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pauVar3 = (undefined1 (*) [16])param_2->DataPtr[1].Ptr;
  pFVar22 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  dVar12 = *pdVar21;
  dVar13 = pdVar21[1];
  dVar14 = pdVar21[2];
  dVar15 = pdVar21[3];
  dVar16 = *(double *)&pFVar22->field_0x70;
  dVar17 = *(double *)&pFVar22->field_0x78;
  dVar18 = *(double *)&pFVar22->field_0x80;
  dVar19 = *(double *)&pFVar22->field_0x88;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar19 * dVar15 +
           dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar19 * dVar13 +
          dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar18 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar16 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar19 * dVar12 +
                 dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar18 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *pauVar3 = auVar8;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ =
       dVar16 * dVar13 * dVar5 + dVar19 * dVar14 + dVar17 * dVar12 * dVar6 + dVar18 * dVar15 * dVar7
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  pauVar3[1] = auVar10;
  return;
}

// StaticExecute @ 14a59dc10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToWorldSpace_Rotation::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar3 = param_2->Z;
  dVar7 = param_2->W;
  dVar8 = param_2->X;
  dVar9 = param_2->Y;
  dVar10 = *(double *)&param_1->field_0x70;
  dVar11 = *(double *)&param_1->field_0x78;
  dVar12 = *(double *)&param_1->field_0x80;
  dVar13 = *(double *)&param_1->field_0x88;
  dVar5 = dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar13 * dVar3 +
          dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar7 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar13 * dVar8 +
          dVar11 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar13 * dVar9 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  param_3->X = dVar2;
  param_3->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  param_3->Z = dVar5;
  param_3->W = (double)auVar4._8_8_;
  return;
}

