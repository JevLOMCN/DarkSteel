// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11d140

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionMakeRelative::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionMakeRelative");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11d1c0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionMakeRelative::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionMakeRelative *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a11d2b0

void __thiscall
FRigVMFunction_MathQuaternionMakeRelative::Execute(FRigVMFunction_MathQuaternionMakeRelative *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  
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
  dVar17 = __real_3e45798ee0000000;
  dVar13 = (this->Global).Z;
  dVar14 = (this->Global).W;
  dVar15 = (this->Global).X;
  dVar16 = (this->Global).Y;
  dVar8 = (this->Parent).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = (this->Parent).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar10 = (this->Parent).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = (this->Parent).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar11,0);
  auVar27._0_8_ = dVar10;
  auVar27._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar28._0_8_ = auVar27._8_8_ * dVar13;
  auVar28._8_8_ = dVar11 * dVar14;
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  (this->Local).X =
       dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       auVar27._8_8_ * dVar15 +
       dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Local).Y =
       auVar30._8_8_ * dVar13 * dVar7 + dVar11 * dVar16 + auVar21._8_8_ * dVar14 * dVar2 +
       dVar10 * dVar15 * dVar25;
  dVar6 = dVar8 * dVar16 * dVar5 + auVar28._0_8_ + dVar9 * dVar15 * dVar6 + dVar10 * dVar14 * dVar20
  ;
  dVar7 = dVar8 * dVar15 * dVar1 + auVar28._8_8_ + dVar9 * dVar16 * dVar4 + dVar10 * dVar13 * dVar3;
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar35;
  (this->Local).Z = dVar6;
  (this->Local).W = (double)auVar31._8_8_;
  dVar1 = (this->Local).X;
  dVar2 = (this->Local).Y;
  auVar22._8_4_ = SUB84(dVar7,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar35;
  dVar20 = dVar6 * dVar6 + dVar1 * dVar1;
  dVar25 = auVar22._8_8_ * dVar7 + dVar2 * dVar2;
  dVar5 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar29._8_4_ = SUB84(dVar20,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar29 = sqrtpd(auVar28,auVar29);
  uVar18 = -(ulonglong)(dVar17 <= dVar5);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar33 = (uint)(uVar18 >> 0x20);
  uVar34 = (uint)(uVar19 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
  auVar32._0_8_ = uVar18 & (ulonglong)(auVar31._0_8_ * dVar1);
  uVar12 = uVar19 & (ulonglong)(auVar31._8_8_ * dVar2);
  auVar32._8_4_ = (undefined4)uVar12;
  auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  (this->Local).X = (double)SUB168(auVar32 | auVar23,0);
  (this->Local).Y = (double)SUB168(auVar32 | auVar23,8);
  auVar24._0_8_ = (ulonglong)(auVar29._0_8_ * dVar6) & uVar18;
  uVar19 = (ulonglong)(auVar29._8_8_ * dVar7) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  (this->Local).Z = (double)SUB168(auVar26 | auVar24,0);
  (this->Local).W = (double)SUB168(auVar26 | auVar24,8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a10a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathQuaternionMakeRelative::Execute
          (FRigVMFunction_MathQuaternionMakeRelative *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  
  dVar17 = __real_3e45798ee0000000;
  dVar13 = (this->Global).Z;
  dVar14 = (this->Global).W;
  dVar15 = (this->Global).X;
  dVar16 = (this->Global).Y;
  dVar8 = (this->Parent).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = (this->Parent).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar10 = (this->Parent).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = (this->Parent).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar11,0);
  auVar27._0_8_ = dVar10;
  auVar27._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar28._0_8_ = auVar27._8_8_ * dVar13;
  auVar28._8_8_ = dVar11 * dVar14;
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  (this->Local).X =
       dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       auVar27._8_8_ * dVar15 +
       dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Local).Y =
       auVar30._8_8_ * dVar13 * dVar7 + dVar11 * dVar16 + auVar21._8_8_ * dVar14 * dVar2 +
       dVar10 * dVar15 * dVar25;
  dVar6 = dVar8 * dVar16 * dVar5 + auVar28._0_8_ + dVar9 * dVar15 * dVar6 + dVar10 * dVar14 * dVar20
  ;
  dVar7 = dVar8 * dVar15 * dVar1 + auVar28._8_8_ + dVar9 * dVar16 * dVar4 + dVar10 * dVar13 * dVar3;
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar35;
  (this->Local).Z = dVar6;
  (this->Local).W = (double)auVar31._8_8_;
  dVar1 = (this->Local).X;
  dVar2 = (this->Local).Y;
  auVar22._8_4_ = SUB84(dVar7,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar35;
  dVar20 = dVar6 * dVar6 + dVar1 * dVar1;
  dVar25 = auVar22._8_8_ * dVar7 + dVar2 * dVar2;
  dVar5 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar29._8_4_ = SUB84(dVar20,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar29 = sqrtpd(auVar28,auVar29);
  uVar18 = -(ulonglong)(dVar17 <= dVar5);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar33 = (uint)(uVar18 >> 0x20);
  uVar34 = (uint)(uVar19 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
  auVar32._0_8_ = uVar18 & (ulonglong)(auVar31._0_8_ * dVar1);
  uVar12 = uVar19 & (ulonglong)(auVar31._8_8_ * dVar2);
  auVar32._8_4_ = (undefined4)uVar12;
  auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  (this->Local).X = (double)SUB168(auVar32 | auVar23,0);
  (this->Local).Y = (double)SUB168(auVar32 | auVar23,8);
  auVar24._0_8_ = (ulonglong)(auVar29._0_8_ * dVar6) & uVar18;
  uVar19 = (ulonglong)(auVar29._8_8_ * dVar7) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  (this->Local).Z = (double)SUB168(auVar26 | auVar24,0);
  (this->Local).W = (double)SUB168(auVar26 | auVar24,8);
  return;
}

// RigVMExecute @ 14a1c7cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathQuaternionMakeRelative::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TQuat<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TQuat<double> *pTVar6;
  TQuat<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
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
    pTVar6 = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TQuat<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
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
  pTVar3 = (TQuat<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1df5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathQuaternionMakeRelative::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,
          TQuat<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  
  dVar17 = __real_3e45798ee0000000;
  dVar13 = param_2->Z;
  dVar14 = param_2->W;
  dVar15 = param_2->X;
  dVar16 = param_2->Y;
  dVar8 = param_3->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = param_3->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar10 = param_3->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = param_3->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar11,0);
  auVar27._0_8_ = dVar10;
  auVar27._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar21._8_4_ = SUB84(dVar9,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar28._0_8_ = auVar27._8_8_ * dVar13;
  auVar28._8_8_ = dVar11 * dVar14;
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  param_4->X = dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               auVar27._8_8_ * dVar15 +
               dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  param_4->Y = auVar30._8_8_ * dVar13 * dVar7 + dVar11 * dVar16 + auVar21._8_8_ * dVar14 * dVar2 +
               dVar10 * dVar15 * dVar25;
  dVar6 = dVar8 * dVar16 * dVar5 + auVar28._0_8_ + dVar9 * dVar15 * dVar6 + dVar10 * dVar14 * dVar20
  ;
  dVar7 = dVar8 * dVar15 * dVar1 + auVar28._8_8_ + dVar9 * dVar16 * dVar4 + dVar10 * dVar13 * dVar3;
  uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar35;
  param_4->Z = dVar6;
  param_4->W = (double)auVar31._8_8_;
  dVar1 = param_4->X;
  dVar2 = param_4->Y;
  auVar22._8_4_ = SUB84(dVar7,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar35;
  dVar20 = dVar6 * dVar6 + dVar1 * dVar1;
  dVar25 = auVar22._8_8_ * dVar7 + dVar2 * dVar2;
  dVar5 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar29._8_4_ = SUB84(dVar20,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar29 = sqrtpd(auVar28,auVar29);
  uVar18 = -(ulonglong)(dVar17 <= dVar5);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar33 = (uint)(uVar18 >> 0x20);
  uVar34 = (uint)(uVar19 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
  auVar32._0_8_ = uVar18 & (ulonglong)(auVar31._0_8_ * dVar1);
  uVar12 = uVar19 & (ulonglong)(auVar31._8_8_ * dVar2);
  auVar32._8_4_ = (undefined4)uVar12;
  auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  param_4->X = (double)SUB168(auVar32 | auVar23,0);
  param_4->Y = (double)SUB168(auVar32 | auVar23,8);
  auVar24._0_8_ = (ulonglong)(auVar29._0_8_ * dVar6) & uVar18;
  uVar19 = (ulonglong)(auVar29._8_8_ * dVar7) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  param_4->Z = (double)SUB168(auVar26 | auVar24,0);
  param_4->W = (double)SUB168(auVar26 | auVar24,8);
  return;
}

