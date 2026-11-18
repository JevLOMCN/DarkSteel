// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4bc480

UScriptStruct * __cdecl FRigUnit_QuaternionToAngle::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAngle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle,(UObject *)pUVar1,
                         L"RigUnit_QuaternionToAngle");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAngle.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAngle.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bc640

UScriptStruct * __thiscall
FRigUnit_QuaternionToAngle::GetExecuteContextStruct(FRigUnit_QuaternionToAngle *this)

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

// Execute @ 14a4bc800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_QuaternionToAngle::Execute(FRigUnit_QuaternionToAngle *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Axis,&this->Argument,&this->Angle);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4bc8d0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_QuaternionToAngle::GetUpgradeInfo
          (FRigUnit_QuaternionToAngle *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a52be30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_QuaternionToAngle::Execute
          (FRigUnit_QuaternionToAngle *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Axis,&this->Argument,&this->Angle);
  return;
}

// RigVMExecute @ 14a54e880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionToAngle::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
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
  pfVar3 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pfVar3);
  return;
}

// StaticExecute @ 14a58b590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionToAngle::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          float *param_4)

{
  double dVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar26;
  uint uVar27;
  undefined1 auVar25 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  TVector<double>_u_0 local_c8;
  TQuat<double> local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  TQuat<double> local_68 [3];
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar1;
  dVar15 = (param_2->field0_0x0)._s_0.Y;
  dVar20 = (param_2->field0_0x0)._s_0.Z;
  uVar28 = SUB84(__real_3ff0000000000000,0);
  uVar6 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  dVar21 = dVar15 * dVar15 + dVar1 * dVar1 + dVar20 * dVar20;
  if (dVar21 == __real_3ff0000000000000) {
    local_c8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_c8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_c8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar21) {
    dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
    auVar23._0_8_ = dVar1 * dVar21;
    auVar23._8_8_ = 0;
    local_c8._s_0.Y = dVar15 * dVar21;
    local_c8._s_0.Z = dVar20 * dVar21;
    local_c8._s_0.X = auVar23._0_8_;
  }
  else {
    local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar20 = param_3->X;
  dVar21 = param_3->Y;
  dVar7 = param_3->Z;
  dVar8 = param_3->W;
  dVar15 = dVar7 * dVar7 + dVar20 * dVar20;
  dVar19 = dVar8 * dVar8 + dVar21 * dVar21;
  dVar1 = dVar19 + dVar15;
  dVar15 = dVar15 + dVar19;
  auVar24._8_4_ = SUB84(dVar15,0);
  auVar24._0_8_ = dVar1;
  auVar24._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar23 = sqrtpd(auVar23,auVar24);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  uVar26 = (uint)(uVar11 >> 0x20);
  uVar27 = (uint)(uVar13 >> 0x20);
  local_88._0_8_ = uVar11 & (ulonglong)(auVar24._0_8_ * dVar20);
  uVar12 = uVar13 & (ulonglong)(auVar24._8_8_ * dVar21);
  local_88._8_4_ = (undefined4)uVar12;
  local_88._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88 = local_88 | auVar16;
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar22._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar22._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar22._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar23._0_8_ * dVar7) & uVar11;
  uVar13 = (ulonglong)(auVar23._8_8_ * dVar8) & uVar13;
  auVar17._8_4_ = (undefined4)uVar13;
  auVar17._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar22 = auVar22 | auVar17;
  local_78 = auVar22;
  UE::Math::TQuat<double>::ToSwingTwist
            ((TQuat<double> *)local_88,(TVector<double> *)&local_c8._s_0,local_68,&local_a8);
  uVar29 = SUB84(__real_bff0000000000000,0);
  uVar30 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
  if ((__real_bff0000000000000 <= local_a8.W) &&
     (uVar29 = SUB84(local_a8.W,0), uVar30 = (int)((ulonglong)local_a8.W >> 0x20),
     dVar9 <= local_a8.W)) {
    uVar29 = uVar28;
    uVar30 = (int)uVar6;
  }
  dVar15 = local_a8.X * local_a8.X + local_a8.Z * local_a8.Z;
  dVar20 = local_a8.Y * local_a8.Y + 0.0;
  dVar1 = dVar20 + dVar15;
  dVar15 = dVar15 + dVar20;
  auVar3._8_4_ = SUB84(dVar15,0);
  auVar3._0_8_ = dVar1;
  auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar23 = sqrtpd(auVar22,auVar3);
  uVar12 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar11 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar15)
  ;
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  uVar13 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar25._0_8_ = uVar12 & (ulonglong)(auVar24._0_8_ * local_a8.X);
  uVar6 = uVar11 & (ulonglong)(auVar24._8_8_ * local_a8.Y);
  auVar25._8_4_ = (undefined4)uVar6;
  auVar25._12_4_ = (undefined4)(uVar6 >> 0x20);
  fVar2 = GlobalVectorConstants::Float1000.m128_f32[2];
  auVar4._4_4_ = ~(uint)(uVar12 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar4._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar4._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar4._12_4_ =
       ~(uint)(uVar11 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar25 = auVar25 | auVar4;
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  dVar1 = acos((double)CONCAT44(uVar30,uVar29));
  fVar10 = __real_43b40000;
  auVar24 = ZEXT416((uint)__real_43b40000);
  fVar14 = FGenericPlatformMath::Fmod((float)(dVar1 + dVar1) * __real_42652ee0,__real_43b40000);
  auVar5._4_8_ = auVar24._8_8_;
  auVar5._0_4_ = auVar25._4_4_;
  auVar18._0_8_ = auVar5._0_8_ << 0x20;
  auVar18._8_4_ = auVar25._8_4_;
  auVar18._12_4_ = auVar25._12_4_;
  *param_4 = fVar14;
  if (auVar18._8_8_ * local_c8._s_0.Y + auVar25._0_8_ * local_c8._s_0.X +
      (double)(CONCAT44(~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(double)fVar2 >> 0x20),
                        ~(uint)uVar13 & SUB84((double)fVar2,0)) |
              uVar13 & (ulonglong)(auVar23._0_8_ * local_a8.Z)) * local_c8._s_0.Z < 0.0) {
    *param_4 = fVar10 - fVar14;
  }
  return;
}

