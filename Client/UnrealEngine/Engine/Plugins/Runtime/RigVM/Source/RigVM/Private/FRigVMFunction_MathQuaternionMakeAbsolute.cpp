// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11d9f0

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionMakeAbsolute");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11da70

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionMakeAbsolute::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionMakeAbsolute *this)

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

// Execute @ 14a11dce0

void __thiscall
FRigVMFunction_MathQuaternionMakeAbsolute::Execute(FRigVMFunction_MathQuaternionMakeAbsolute *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
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
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  
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
  dVar11 = (this->Local).Z;
  dVar12 = (this->Local).W;
  dVar13 = (this->Local).X;
  dVar14 = (this->Local).Y;
  uVar1 = (this->Parent).X;
  uVar2 = (this->Parent).Y;
  dVar15 = (this->Parent).Z;
  dVar16 = (this->Parent).W;
  auVar29._8_4_ = (int)uVar1;
  auVar29._0_8_ = uVar1;
  auVar29._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar27._0_8_ = dVar16 * dVar11;
  auVar27._8_8_ = dVar16 * dVar12;
  auVar21._8_4_ = (int)uVar2;
  auVar21._0_8_ = uVar2;
  auVar21._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  (this->Global).X =
       (double)uVar1 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar16 * dVar13 +
       (double)uVar2 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Global).Y =
       auVar29._8_8_ * dVar11 * dVar9 + dVar16 * dVar14 + auVar21._8_8_ * dVar12 * dVar4 +
       dVar15 * dVar13 * dVar25;
  dVar8 = (double)uVar1 * dVar14 * dVar7 + auVar27._0_8_ + (double)uVar2 * dVar13 * dVar8 +
          dVar15 * dVar12 * dVar20;
  dVar9 = (double)uVar1 * dVar13 * dVar3 + auVar27._8_8_ + (double)uVar2 * dVar14 * dVar6 +
          dVar15 * dVar11 * dVar5;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  (this->Global).Z = dVar8;
  (this->Global).W = (double)auVar30._8_8_;
  dVar3 = (this->Global).X;
  dVar4 = (this->Global).Y;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar34;
  dVar20 = dVar8 * dVar8 + dVar3 * dVar3;
  dVar25 = auVar22._8_8_ * dVar9 + dVar4 * dVar4;
  dVar7 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar18 = -(ulonglong)(dVar17 <= dVar7);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar32 = (uint)(uVar18 >> 0x20);
  uVar33 = (uint)(uVar19 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar31._0_8_ = uVar18 & (ulonglong)(auVar30._0_8_ * dVar3);
  uVar10 = uVar19 & (ulonglong)(auVar30._8_8_ * dVar4);
  auVar31._8_4_ = (undefined4)uVar10;
  auVar31._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  (this->Global).X = (double)SUB168(auVar31 | auVar23,0);
  (this->Global).Y = (double)SUB168(auVar31 | auVar23,8);
  auVar24._0_8_ = (ulonglong)(auVar28._0_8_ * dVar8) & uVar18;
  uVar19 = (ulonglong)(auVar28._8_8_ * dVar9) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  (this->Global).Z = (double)SUB168(auVar26 | auVar24,0);
  (this->Global).W = (double)SUB168(auVar26 | auVar24,8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0f00

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
FRigVMFunction_MathQuaternionMakeAbsolute::Execute
          (FRigVMFunction_MathQuaternionMakeAbsolute *this,FRigVMExecuteContext *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
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
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  
  dVar17 = __real_3e45798ee0000000;
  dVar11 = (this->Local).Z;
  dVar12 = (this->Local).W;
  dVar13 = (this->Local).X;
  dVar14 = (this->Local).Y;
  uVar1 = (this->Parent).X;
  uVar2 = (this->Parent).Y;
  auVar29._8_4_ = (int)uVar1;
  auVar29._0_8_ = uVar1;
  auVar29._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar15 = (this->Parent).Z;
  dVar16 = (this->Parent).W;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar21._8_4_ = (int)uVar2;
  auVar21._0_8_ = uVar2;
  auVar21._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar27._0_8_ = dVar16 * dVar11;
  auVar27._8_8_ = dVar16 * dVar12;
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  (this->Global).X =
       (double)uVar1 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar16 * dVar13 +
       (double)uVar2 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Global).Y =
       auVar29._8_8_ * dVar11 * dVar9 + dVar16 * dVar14 + auVar21._8_8_ * dVar12 * dVar4 +
       dVar15 * dVar13 * dVar5;
  dVar8 = (double)uVar1 * dVar14 * dVar7 + auVar27._0_8_ + (double)uVar2 * dVar13 * dVar20 +
          dVar15 * dVar12 * dVar8;
  dVar9 = (double)uVar1 * dVar13 * dVar3 + auVar27._8_8_ + (double)uVar2 * dVar14 * dVar25 +
          dVar15 * dVar11 * dVar6;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  (this->Global).Z = dVar8;
  (this->Global).W = (double)auVar30._8_8_;
  dVar3 = (this->Global).X;
  dVar4 = (this->Global).Y;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar34;
  dVar20 = dVar8 * dVar8 + dVar3 * dVar3;
  dVar25 = auVar22._8_8_ * dVar9 + dVar4 * dVar4;
  dVar7 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar18 = -(ulonglong)(dVar17 <= dVar7);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar32 = (uint)(uVar18 >> 0x20);
  uVar33 = (uint)(uVar19 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar31._0_8_ = uVar18 & (ulonglong)(auVar30._0_8_ * dVar3);
  uVar10 = uVar19 & (ulonglong)(auVar30._8_8_ * dVar4);
  auVar31._8_4_ = (undefined4)uVar10;
  auVar31._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar24._0_8_ = (ulonglong)(auVar28._0_8_ * dVar8) & uVar18;
  uVar19 = (ulonglong)(auVar28._8_8_ * dVar9) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  (this->Global).X = (double)SUB168(auVar31 | auVar23,0);
  (this->Global).Y = (double)SUB168(auVar31 | auVar23,8);
  (this->Global).Z = (double)SUB168(auVar26 | auVar24,0);
  (this->Global).W = (double)SUB168(auVar26 | auVar24,8);
  return;
}

// RigVMExecute @ 14a1c7b50

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
FRigVMFunction_MathQuaternionMakeAbsolute::RigVMExecute
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

// StaticExecute @ 14a1df430

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
FRigVMFunction_MathQuaternionMakeAbsolute::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,
          TQuat<double> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
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
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  
  dVar17 = __real_3e45798ee0000000;
  dVar11 = param_2->Z;
  dVar12 = param_2->W;
  dVar13 = param_2->X;
  dVar14 = param_2->Y;
  uVar1 = param_3->X;
  uVar2 = param_3->Y;
  auVar29._8_4_ = (int)uVar1;
  auVar29._0_8_ = uVar1;
  auVar29._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar15 = param_3->Z;
  dVar16 = param_3->W;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar21._8_4_ = (int)uVar2;
  auVar21._0_8_ = uVar2;
  auVar21._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar27._0_8_ = dVar16 * dVar11;
  auVar27._8_8_ = dVar16 * dVar12;
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  param_4->X = (double)uVar1 * dVar12 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar16 * dVar13 +
               (double)uVar2 * dVar11 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  param_4->Y = auVar29._8_8_ * dVar11 * dVar9 + dVar16 * dVar14 + auVar21._8_8_ * dVar12 * dVar4 +
               dVar15 * dVar13 * dVar5;
  dVar8 = (double)uVar1 * dVar14 * dVar7 + auVar27._0_8_ + (double)uVar2 * dVar13 * dVar20 +
          dVar15 * dVar12 * dVar8;
  dVar9 = (double)uVar1 * dVar13 * dVar3 + auVar27._8_8_ + (double)uVar2 * dVar14 * dVar25 +
          dVar15 * dVar11 * dVar6;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  param_4->Z = dVar8;
  param_4->W = (double)auVar30._8_8_;
  dVar3 = param_4->X;
  dVar4 = param_4->Y;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar34;
  dVar20 = dVar8 * dVar8 + dVar3 * dVar3;
  dVar25 = auVar22._8_8_ * dVar9 + dVar4 * dVar4;
  dVar7 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar18 = -(ulonglong)(dVar17 <= dVar7);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar32 = (uint)(uVar18 >> 0x20);
  uVar33 = (uint)(uVar19 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar31._0_8_ = uVar18 & (ulonglong)(auVar30._0_8_ * dVar3);
  uVar10 = uVar19 & (ulonglong)(auVar30._8_8_ * dVar4);
  auVar31._8_4_ = (undefined4)uVar10;
  auVar31._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  auVar26._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar26._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar26._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar24._0_8_ = (ulonglong)(auVar28._0_8_ * dVar8) & uVar18;
  uVar19 = (ulonglong)(auVar28._8_8_ * dVar9) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  param_4->X = (double)SUB168(auVar31 | auVar23,0);
  param_4->Y = (double)SUB168(auVar31 | auVar23,8);
  param_4->Z = (double)SUB168(auVar26 | auVar24,0);
  param_4->W = (double)SUB168(auVar26 | auVar24,8);
  return;
}

