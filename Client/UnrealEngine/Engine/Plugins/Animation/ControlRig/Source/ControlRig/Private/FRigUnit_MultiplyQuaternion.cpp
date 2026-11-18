// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4b84f0

UScriptStruct * __cdecl FRigUnit_MultiplyQuaternion::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion,(UObject *)pUVar1,
                         L"RigUnit_MultiplyQuaternion");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b8570

UScriptStruct * __thiscall
FRigUnit_MultiplyQuaternion::GetExecuteContextStruct(FRigUnit_MultiplyQuaternion *this)

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

// Execute @ 14a4b8a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_MultiplyQuaternion::Execute(FRigUnit_MultiplyQuaternion *this)

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
  undefined1 auStack_2e8 [48];
  undefined1 local_2b8 [592];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2e8;
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
  dVar17 = __real_3e45798ee0000000;
  dVar11 = *(double *)&this->field_0x40;
  dVar12 = *(double *)&this->field_0x48;
  dVar13 = *(double *)&this->field_0x30;
  dVar14 = *(double *)&this->field_0x38;
  auVar28 = *(undefined1 (*) [16])&this->field_0x10;
  dVar15 = *(double *)&this->field_0x20;
  dVar16 = *(double *)&this->field_0x28;
  dVar6 = auVar28._0_8_;
  auVar29._8_4_ = auVar28._0_4_;
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = auVar28._4_4_;
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar27._0_8_ = dVar16 * dVar11;
  auVar27._8_8_ = dVar16 * dVar12;
  dVar7 = auVar28._8_8_;
  auVar21._8_4_ = auVar28._8_4_;
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = auVar28._12_4_;
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  *(double *)&this->field_0x50 =
       dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar16 * dVar13 +
       dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  *(double *)&this->field_0x58 =
       auVar29._8_8_ * dVar11 * dVar9 + dVar16 * dVar14 + auVar21._8_8_ * dVar12 * dVar2 +
       dVar15 * dVar13 * dVar25;
  dVar8 = dVar6 * dVar14 * dVar5 + auVar27._0_8_ + dVar7 * dVar13 * dVar8 + dVar15 * dVar12 * dVar20
  ;
  dVar9 = dVar6 * dVar13 * dVar1 + auVar27._8_8_ + dVar7 * dVar14 * dVar4 + dVar15 * dVar11 * dVar3;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  *(undefined1 (*) [16])&this->field_0x60 = auVar30;
  dVar1 = *(double *)&this->field_0x50;
  dVar2 = *(double *)&this->field_0x58;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar34;
  dVar20 = dVar8 * dVar8 + dVar1 * dVar1;
  dVar25 = auVar22._8_8_ * dVar9 + dVar2 * dVar2;
  dVar5 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar18 = -(ulonglong)(dVar17 <= dVar5);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar32 = (uint)(uVar18 >> 0x20);
  uVar33 = (uint)(uVar19 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar31._0_8_ = uVar18 & (ulonglong)(auVar30._0_8_ * dVar1);
  uVar10 = uVar19 & (ulonglong)(auVar30._8_8_ * dVar2);
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
  *(undefined1 (*) [16])&this->field_0x50 = auVar31 | auVar23;
  auVar24._0_8_ = (ulonglong)(auVar28._0_8_ * dVar8) & uVar18;
  uVar19 = (ulonglong)(auVar28._8_8_ * dVar9) & uVar19;
  auVar24._8_4_ = (undefined4)uVar19;
  auVar24._12_4_ = (undefined4)(uVar19 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x60 = auVar26 | auVar24;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_2b8);
  return;
}

// GetUpgradeInfo @ 14a4b8c80

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_MultiplyQuaternion::GetUpgradeInfo
          (FRigUnit_MultiplyQuaternion *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_98;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_88;
  FRigVMStruct local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_68 = *(undefined8 *)&this->field_0x10;
  uStack_60 = *(undefined8 *)&this->field_0x18;
  local_78[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionMul__6B_;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_58 = *(undefined8 *)&this->field_0x20;
  uStack_50 = *(undefined8 *)&this->field_0x28;
  local_48 = *(undefined8 *)&this->field_0x30;
  uStack_40 = *(undefined8 *)&this->field_0x38;
  local_38 = *(undefined8 *)&this->field_0x40;
  uStack_30 = *(undefined8 *)&this->field_0x48;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion,(UObject *)pUVar1,
                         L"RigUnit_MultiplyQuaternion");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_98.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::RigVMFunctions;
    local_98.Data.ArrayNum = 1;
    local_88._12_4_ = local_98.Data.ArrayMax;
    local_88.ArrayNum = 1;
    local_88.DataPtr = Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton,
               &local_88);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_MultiplyQuaternion.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionMul::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_78);
  ::FString::FString((FString *)&local_88,L"A");
  ::FString::FString(&local_98,L"Argument0");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_98,(FString *)&local_88,true,true);
  if ((FRigVMCompiledInFunction *)local_98.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  ::FString::FString(&local_98,L"B");
  ::FString::FString((FString *)&local_88,L"Argument1");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_88,&local_98,true,true);
  if (local_88.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_98.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52add0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_MultiplyQuaternion::Execute
          (FRigUnit_MultiplyQuaternion *this,FControlRigExecuteContext *param_1)

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
  dVar11 = *(double *)&this->field_0x40;
  dVar12 = *(double *)&this->field_0x48;
  dVar13 = *(double *)&this->field_0x30;
  dVar14 = *(double *)&this->field_0x38;
  auVar28 = *(undefined1 (*) [16])&this->field_0x10;
  dVar6 = auVar28._0_8_;
  auVar29._8_4_ = auVar28._0_4_;
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = auVar28._4_4_;
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar15 = *(double *)&this->field_0x20;
  dVar16 = *(double *)&this->field_0x28;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar7 = auVar28._8_8_;
  auVar21._8_4_ = auVar28._8_4_;
  auVar21._0_8_ = dVar7;
  auVar21._12_4_ = auVar28._12_4_;
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar27._0_8_ = dVar16 * dVar11;
  auVar27._8_8_ = dVar16 * dVar12;
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  *(double *)&this->field_0x50 =
       dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar16 * dVar13 +
       dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  *(double *)&this->field_0x58 =
       auVar29._8_8_ * dVar11 * dVar9 + dVar16 * dVar14 + auVar21._8_8_ * dVar12 * dVar2 +
       dVar15 * dVar13 * dVar3;
  dVar8 = dVar6 * dVar14 * dVar5 + auVar27._0_8_ + dVar7 * dVar13 * dVar20 + dVar15 * dVar12 * dVar8
  ;
  dVar9 = dVar6 * dVar13 * dVar1 + auVar27._8_8_ + dVar7 * dVar14 * dVar25 + dVar15 * dVar11 * dVar4
  ;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  *(undefined1 (*) [16])&this->field_0x60 = auVar30;
  dVar1 = *(double *)&this->field_0x50;
  dVar2 = *(double *)&this->field_0x58;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar34;
  dVar20 = dVar8 * dVar8 + dVar1 * dVar1;
  dVar25 = auVar22._8_8_ * dVar9 + dVar2 * dVar2;
  dVar5 = dVar25 + dVar20;
  dVar20 = dVar20 + dVar25;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar18 = -(ulonglong)(dVar17 <= dVar5);
  uVar19 = -(ulonglong)(dVar17 <= dVar20);
  uVar32 = (uint)(uVar18 >> 0x20);
  uVar33 = (uint)(uVar19 >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar31._0_8_ = uVar18 & (ulonglong)(auVar30._0_8_ * dVar1);
  uVar10 = uVar19 & (ulonglong)(auVar30._8_8_ * dVar2);
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
  *(undefined1 (*) [16])&this->field_0x50 = auVar31 | auVar23;
  *(undefined1 (*) [16])&this->field_0x60 = auVar26 | auVar24;
  return;
}

// RigVMExecute @ 14a54b7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MultiplyQuaternion::RigVMExecute
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
  FControlRigExecuteContext *pFVar8;
  
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
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a585e50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MultiplyQuaternion::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,
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
  dVar11 = param_3->Z;
  dVar12 = param_3->W;
  dVar13 = param_3->X;
  dVar14 = param_3->Y;
  uVar1 = param_2->X;
  uVar2 = param_2->Y;
  auVar29._8_4_ = (int)uVar1;
  auVar29._0_8_ = uVar1;
  auVar29._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar15 = param_2->Z;
  dVar16 = param_2->W;
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

