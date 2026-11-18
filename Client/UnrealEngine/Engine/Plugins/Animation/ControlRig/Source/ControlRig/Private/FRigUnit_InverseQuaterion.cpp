// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4b9b60

UScriptStruct * __cdecl FRigUnit_InverseQuaterion::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion,(UObject *)pUVar1,
                         L"RigUnit_InverseQuaterion");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b9be0

UScriptStruct * __thiscall
FRigUnit_InverseQuaterion::GetExecuteContextStruct(FRigUnit_InverseQuaterion *this)

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

// Execute @ 14a4b9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_InverseQuaterion::Execute(FRigUnit_InverseQuaterion *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auStack_2b8 [48];
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
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
  dVar7 = __real_3e45798ee0000000;
  dVar2 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = *(double *)&this->field_0x20 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&this->field_0x28 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar10 = (undefined4)((ulonglong)dVar3 >> 0x20);
  *(double *)&this->field_0x30 =
       *(double *)&this->field_0x10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  *(double *)&this->field_0x38 = *(double *)&this->field_0x18 * dVar2;
  auVar17._8_4_ = SUB84(dVar3,0);
  auVar17._0_8_ = dVar1;
  auVar17._12_4_ = uVar10;
  *(undefined1 (*) [16])&this->field_0x40 = auVar17;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = uVar10;
  dVar5 = *(double *)&this->field_0x30;
  dVar6 = *(double *)&this->field_0x38;
  dVar11 = dVar1 * dVar1 + dVar5 * dVar5;
  dVar15 = auVar12._8_8_ * dVar3 + dVar6 * dVar6;
  dVar2 = dVar15 + dVar11;
  dVar11 = dVar11 + dVar15;
  auVar18._8_4_ = SUB84(dVar11,0);
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar17 = sqrtpd(in_XMM4,auVar18);
  uVar8 = -(ulonglong)(dVar7 <= dVar2);
  uVar9 = -(ulonglong)(dVar7 <= dVar11);
  uVar20 = (uint)(uVar8 >> 0x20);
  uVar21 = (uint)(uVar9 >> 0x20);
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar19._0_8_ = uVar8 & (ulonglong)(auVar18._0_8_ * dVar5);
  uVar4 = uVar9 & (ulonglong)(auVar18._8_8_ * dVar6);
  auVar19._8_4_ = (undefined4)uVar4;
  auVar19._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar13._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar13._4_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar13._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar13._12_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar16._4_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar16._12_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  *(undefined1 (*) [16])&this->field_0x30 = auVar19 | auVar13;
  auVar14._0_8_ = (ulonglong)(auVar17._0_8_ * dVar1) & uVar8;
  uVar9 = (ulonglong)(auVar17._8_8_ * dVar3) & uVar9;
  auVar14._8_4_ = (undefined4)uVar9;
  auVar14._12_4_ = (undefined4)(uVar9 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x40 = auVar16 | auVar14;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetUpgradeInfo @ 14a4ba110

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_InverseQuaterion::GetUpgradeInfo
          (FRigUnit_InverseQuaterion *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_78;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  FRigVMStruct local_58 [2];
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
  local_48 = *(undefined8 *)&this->field_0x10;
  uStack_40 = *(undefined8 *)&this->field_0x18;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_38 = *(undefined8 *)&this->field_0x20;
  uStack_30 = *(undefined8 *)&this->field_0x28;
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
  local_58[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionInverse__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion,(UObject *)pUVar1,
                         L"RigUnit_InverseQuaterion");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::RigVMFunctions;
    local_78.Data.ArrayNum = 1;
    local_68._12_4_ = local_78.Data.ArrayMax;
    local_68.ArrayNum = 1;
    local_68.DataPtr = Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton,
               &local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_InverseQuaterion.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionInverse::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_58);
  ::FString::FString((FString *)&local_68,L"Value");
  ::FString::FString(&local_78,L"Argument");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_78,(FString *)&local_68,true,true);
  if ((FRigVMCompiledInFunction *)local_78.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52a3d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_InverseQuaterion::Execute
          (FRigUnit_InverseQuaterion *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  
  dVar2 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = *(double *)&this->field_0x20 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&this->field_0x28 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
  *(double *)&this->field_0x30 =
       *(double *)&this->field_0x10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  *(double *)&this->field_0x38 = *(double *)&this->field_0x18 * dVar2;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar1;
  auVar16._12_4_ = uVar9;
  *(undefined1 (*) [16])&this->field_0x40 = auVar16;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = uVar9;
  dVar5 = *(double *)&this->field_0x30;
  dVar6 = *(double *)&this->field_0x38;
  dVar10 = dVar1 * dVar1 + dVar5 * dVar5;
  dVar14 = auVar11._8_8_ * dVar3 + dVar6 * dVar6;
  dVar2 = dVar14 + dVar10;
  dVar10 = dVar10 + dVar14;
  auVar17._8_4_ = SUB84(dVar10,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar16 = sqrtpd(in_XMM4,auVar17);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar19 = (uint)(uVar7 >> 0x20);
  uVar20 = (uint)(uVar8 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  auVar18._0_8_ = uVar7 & (ulonglong)(auVar17._0_8_ * dVar5);
  uVar4 = uVar8 & (ulonglong)(auVar17._8_8_ * dVar6);
  auVar18._8_4_ = (undefined4)uVar4;
  auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar12._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  auVar15._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar15._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar15._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar13._0_8_ = (ulonglong)(auVar16._0_8_ * dVar1) & uVar7;
  uVar8 = (ulonglong)(auVar16._8_8_ * dVar3) & uVar8;
  auVar13._8_4_ = (undefined4)uVar8;
  auVar13._12_4_ = (undefined4)(uVar8 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x30 = auVar18 | auVar12;
  *(undefined1 (*) [16])&this->field_0x40 = auVar15 | auVar13;
  return;
}

// RigVMExecute @ 14a5496d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_InverseQuaterion::RigVMExecute
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
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  double *pdVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar27;
  
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
    pdVar13 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar13 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
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
  dVar11 = __real_3e45798ee0000000;
  dVar17 = pdVar13[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = pdVar13[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar7 = pdVar13[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
  *(double *)*pauVar3 = *pdVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  *(double *)(*pauVar3 + 8) = dVar17 * dVar6;
  auVar23._8_4_ = SUB84(dVar7,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar16;
  pauVar3[1] = auVar23;
  auVar18._8_4_ = SUB84(dVar7,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar16;
  dVar9 = *(double *)*pauVar3;
  dVar10 = *(double *)(*pauVar3 + 8);
  dVar17 = dVar5 * dVar5 + dVar9 * dVar9;
  dVar21 = auVar18._8_8_ * dVar7 + dVar10 * dVar10;
  dVar6 = dVar21 + dVar17;
  dVar17 = dVar17 + dVar21;
  auVar24._8_4_ = SUB84(dVar17,0);
  auVar24._0_8_ = dVar6;
  auVar24._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar23 = sqrtpd(in_XMM4,auVar24);
  uVar14 = -(ulonglong)(dVar11 <= dVar6);
  uVar15 = -(ulonglong)(dVar11 <= dVar17);
  uVar26 = (uint)(uVar14 >> 0x20);
  uVar27 = (uint)(uVar15 >> 0x20);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
  auVar25._0_8_ = uVar14 & (ulonglong)(auVar24._0_8_ * dVar9);
  uVar8 = uVar15 & (ulonglong)(auVar24._8_8_ * dVar10);
  auVar25._8_4_ = (undefined4)uVar8;
  auVar25._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar19._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar19._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar19._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar22._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar22._4_4_ =
       ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar22._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar20._0_8_ = (ulonglong)(auVar23._0_8_ * dVar5) & uVar14;
  uVar15 = (ulonglong)(auVar23._8_8_ * dVar7) & uVar15;
  auVar20._8_4_ = (undefined4)uVar15;
  auVar20._12_4_ = (undefined4)(uVar15 >> 0x20);
  *pauVar3 = auVar25 | auVar19;
  pauVar3[1] = auVar22 | auVar20;
  return;
}

// StaticExecute @ 14a5827e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_InverseQuaterion::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  
  dVar10 = param_2->Y;
  dVar2 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = param_2->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = param_2->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
  param_3->X = param_2->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  param_3->Y = dVar10 * dVar2;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar1;
  auVar16._12_4_ = uVar9;
  param_3->Z = dVar1;
  param_3->W = (double)auVar16._8_8_;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = uVar9;
  dVar5 = param_3->X;
  dVar6 = param_3->Y;
  dVar10 = dVar1 * dVar1 + dVar5 * dVar5;
  dVar14 = auVar11._8_8_ * dVar3 + dVar6 * dVar6;
  dVar2 = dVar14 + dVar10;
  dVar10 = dVar10 + dVar14;
  auVar17._8_4_ = SUB84(dVar10,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar16 = sqrtpd(in_XMM4,auVar17);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar19 = (uint)(uVar7 >> 0x20);
  uVar20 = (uint)(uVar8 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  auVar18._0_8_ = uVar7 & (ulonglong)(auVar17._0_8_ * dVar5);
  uVar4 = uVar8 & (ulonglong)(auVar17._8_8_ * dVar6);
  auVar18._8_4_ = (undefined4)uVar4;
  auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar12._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar12._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  auVar15._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar15._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar15._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar13._0_8_ = (ulonglong)(auVar16._0_8_ * dVar1) & uVar7;
  uVar8 = (ulonglong)(auVar16._8_8_ * dVar3) & uVar8;
  auVar13._8_4_ = (undefined4)uVar8;
  auVar13._12_4_ = (undefined4)(uVar8 >> 0x20);
  param_3->X = (double)SUB168(auVar18 | auVar12,0);
  param_3->Y = (double)SUB168(auVar18 | auVar12,8);
  param_3->Z = (double)SUB168(auVar15 | auVar13,0);
  param_3->W = (double)SUB168(auVar15 | auVar13,8);
  return;
}

