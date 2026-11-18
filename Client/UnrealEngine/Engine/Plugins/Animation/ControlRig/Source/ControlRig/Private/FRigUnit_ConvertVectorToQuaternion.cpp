// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a498080

UScriptStruct * __cdecl FRigUnit_ConvertVectorToQuaternion::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertVectorToQuaternion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertVectorToQuaternion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion,
                         (UObject *)pUVar1,L"RigUnit_ConvertVectorToQuaternion");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertVectorToQuaternion.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConvertVectorToQuaternion.OuterSingleton;
}

// GetExecuteContextStruct @ 14a498120

UScriptStruct * __thiscall
FRigUnit_ConvertVectorToQuaternion::GetExecuteContextStruct
          (FRigUnit_ConvertVectorToQuaternion *this)

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

// Execute @ 14a498710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertVectorToQuaternion::Execute(FRigUnit_ConvertVectorToQuaternion *this)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  undefined1 auStack_2e8 [40];
  TRotator<double> local_2c0;
  TQuat<double> local_2a8;
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  if ((FRigVMNameCache *)local_288._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_288._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  UE::Math::TVector<double>::ToOrientationRotator(&this->Input,&local_2c0);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_2c0,&local_2a8);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  (this->Result).X = pTVar8->X;
  (this->Result).Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  (this->Result).Z = dVar3;
  (this->Result).W = dVar4;
  dVar5 = (this->Result).X;
  dVar6 = (this->Result).Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  (this->Result).X = (double)SUB168(auVar17 | auVar16,0);
  (this->Result).Y = (double)SUB168(auVar17 | auVar16,8);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  (this->Result).Z = (double)SUB168(auVar14 | auVar12,0);
  (this->Result).W = (double)SUB168(auVar14 | auVar12,8);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetUpgradeInfo @ 14a4988b0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ConvertVectorToQuaternion::GetUpgradeInfo
          (FRigUnit_ConvertVectorToQuaternion *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a526240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertVectorToQuaternion::Execute
          (FRigUnit_ConvertVectorToQuaternion *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TRotator<double> local_68;
  TQuat<double> local_48 [2];
  
  UE::Math::TVector<double>::ToOrientationRotator(&this->Input,&local_68);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_68,local_48);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  (this->Result).X = pTVar8->X;
  (this->Result).Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  (this->Result).Z = dVar3;
  (this->Result).W = dVar4;
  dVar5 = (this->Result).X;
  dVar6 = (this->Result).Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  (this->Result).X = (double)SUB168(auVar17 | auVar16,0);
  (this->Result).Y = (double)SUB168(auVar17 | auVar16,8);
  (this->Result).Z = (double)SUB168(auVar14 | auVar12,0);
  (this->Result).W = (double)SUB168(auVar14 | auVar12,8);
  return;
}

// RigVMExecute @ 14a539db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertVectorToQuaternion::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TVector<double> *this;
  TQuat<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  TRotator<double> local_68;
  TQuat<double> local_48 [2];
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TVector<double> *)pFVar2->Ptr;
  }
  else {
    this = (TVector<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pauVar3 = (undefined1 (*) [16])param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  UE::Math::TVector<double>::ToOrientationRotator(this,&local_68);
  pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_68,local_48);
  dVar11 = __real_3e45798ee0000000;
  dVar5 = pTVar13->Y;
  *(double *)*pauVar3 = pTVar13->X;
  *(double *)(*pauVar3 + 8) = dVar5;
  dVar7 = pTVar13->Z;
  dVar8 = pTVar13->W;
  *(double *)pauVar3[1] = dVar7;
  *(double *)(pauVar3[1] + 8) = dVar8;
  dVar9 = *(double *)*pauVar3;
  dVar10 = *(double *)(*pauVar3 + 8);
  dVar16 = dVar7 * dVar7 + dVar9 * dVar9;
  dVar18 = dVar8 * dVar8 + dVar10 * dVar10;
  dVar5 = dVar18 + dVar16;
  dVar16 = dVar16 + dVar18;
  auVar20._8_4_ = SUB84(dVar16,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar20 = sqrtpd(in_XMM4,auVar20);
  uVar14 = -(ulonglong)(dVar11 <= dVar5);
  uVar15 = -(ulonglong)(dVar11 <= dVar16);
  uVar23 = (uint)(uVar14 >> 0x20);
  uVar24 = (uint)(uVar15 >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  auVar22._0_8_ = uVar14 & (ulonglong)(auVar21._0_8_ * dVar9);
  uVar6 = uVar15 & (ulonglong)(auVar21._8_8_ * dVar10);
  auVar22._8_4_ = (undefined4)uVar6;
  auVar22._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar21._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  auVar19._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar19._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar19._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar20._0_8_ * dVar7) & uVar14;
  uVar15 = (ulonglong)(auVar20._8_8_ * dVar8) & uVar15;
  auVar17._8_4_ = (undefined4)uVar15;
  auVar17._12_4_ = (undefined4)(uVar15 >> 0x20);
  *pauVar3 = auVar22 | auVar21;
  pauVar3[1] = auVar19 | auVar17;
  return;
}

// StaticExecute @ 14a56a080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertVectorToQuaternion::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TQuat<double> *param_3)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TRotator<double> local_68;
  TQuat<double> local_48 [2];
  
  UE::Math::TVector<double>::ToOrientationRotator(param_2,&local_68);
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_68,local_48);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  param_3->X = pTVar8->X;
  param_3->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  param_3->Z = dVar3;
  param_3->W = dVar4;
  dVar5 = param_3->X;
  dVar6 = param_3->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  param_3->X = (double)SUB168(auVar17 | auVar16,0);
  param_3->Y = (double)SUB168(auVar17 | auVar16,8);
  param_3->Z = (double)SUB168(auVar14 | auVar12,0);
  param_3->W = (double)SUB168(auVar14 | auVar12,8);
  return;
}

