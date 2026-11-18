// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a17be60

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionToAxisAndAngle");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a17bf40

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionToAxisAndAngle::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionToAxisAndAngle *this)

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

// Execute @ 14a17c1a0

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
FRigVMFunction_MathQuaternionToAxisAndAngle::Execute
          (FRigVMFunction_MathQuaternionToAxisAndAngle *this)

{
  FRigVMExecuteContext local_118;
  
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
  StaticExecute(&local_118,&this->Value,&this->Axis,&this->Angle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a1630

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
FRigVMFunction_MathQuaternionToAxisAndAngle::Execute
          (FRigVMFunction_MathQuaternionToAxisAndAngle *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Axis,&this->Angle);
  return;
}

// RigVMExecute @ 14a1c8cf0

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
FRigVMFunction_MathQuaternionToAxisAndAngle::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    pTVar7 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar4 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar7,pTVar3,pfVar4);
  return;
}

// StaticExecute @ 14a1dff10

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
FRigVMFunction_MathQuaternionToAxisAndAngle::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          float *param_4)

{
  undefined8 uVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  dVar4 = param_2->X;
  dVar5 = param_2->Y;
  dVar6 = param_2->Z;
  dVar7 = param_2->W;
  dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar15 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar2 = dVar15 + dVar13;
  dVar13 = dVar13 + dVar15;
  auVar17._8_4_ = SUB84(dVar13,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar17 = sqrtpd(in_XMM4,auVar17);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
  uVar11 = (uint)(uVar9 >> 0x20);
  uVar12 = (uint)(uVar10 >> 0x20);
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  local_48._0_8_ = uVar9 & (ulonglong)(auVar18._0_8_ * dVar4);
  uVar3 = uVar10 & (ulonglong)(auVar18._8_8_ * dVar5);
  local_48._8_4_ = (undefined4)uVar3;
  local_48._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar18._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar18._4_4_ =
       ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar18._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar18._12_4_ =
       ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_48 = local_48 | auVar18;
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  local_38._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  local_38._4_4_ =
       ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  local_38._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_38._12_4_ =
       ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar14._0_8_ = (ulonglong)(auVar17._0_8_ * dVar6) & uVar9;
  uVar10 = (ulonglong)(auVar17._8_8_ * dVar7) & uVar10;
  auVar14._8_4_ = (undefined4)uVar10;
  auVar14._12_4_ = (undefined4)(uVar10 >> 0x20);
  local_38 = local_38 | auVar14;
  UE::Math::TQuat<double>::ToAxisAndAngle((TQuat<double> *)local_48,param_3,param_4);
  uVar11 = (uint)*(undefined8 *)&param_3->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar12,uVar11) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar12,uVar11) == __real_3f1a36e2e0000000) &&
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
      uVar11 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar12 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar12,uVar11) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar12,uVar11) == __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
     uVar11 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar12 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar12,uVar11) < __real_3f1a36e2e0000000 ||
     (double)CONCAT44(uVar12,uVar11) == __real_3f1a36e2e0000000)) {
    (param_3->field0_0x0)._s_0.X = 1.0;
    (param_3->field0_0x0)._s_0.Y = 0.0;
    (param_3->field0_0x0)._s_0.Z = 0.0;
    *param_4 = 0.0;
  }
  fVar8 = __real_40c90fdb;
  fVar19 = __real_3f800000;
  if (*param_4 < 0.0) {
    fVar19 = __real_bf800000;
  }
  fVar16 = (float)((uint)*param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  *param_4 = fVar16;
  if (fVar8 < fVar16) {
    fVar16 = FGenericPlatformMath::Fmod(fVar16,fVar8);
  }
  if (__real_40490fdb < fVar16) {
    fVar19 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
    fVar16 = fVar8 - fVar16;
  }
  *param_4 = fVar16 * fVar19;
  return;
}

