// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a17c760

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionToVectors::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToVectors.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToVectors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionToVectors");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToVectors_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToVectors.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionToVectors.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17c7e0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionToVectors::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionToVectors *this)

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

// Execute @ 14a17c900

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
FRigVMFunction_MathQuaternionToVectors::Execute(FRigVMFunction_MathQuaternionToVectors *this)

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
  StaticExecute(&local_118,&this->Value,&this->Forward,&this->Right,&this->Up);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a16d0

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
FRigVMFunction_MathQuaternionToVectors::Execute
          (FRigVMFunction_MathQuaternionToVectors *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Forward,&this->Right,&this->Up);
  return;
}

// RigVMExecute @ 14a1c90c0

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
FRigVMFunction_MathQuaternionToVectors::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TQuat<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  TVector<double> *pTVar8;
  FRigVMExecuteContext *pFVar9;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TQuat<double> *)pFVar7->Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
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
  pTVar2 = (TVector<double> *)param_2->DataPtr[1].Ptr;
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar9,pTVar6,pTVar2,pTVar3,pTVar8);
  return;
}

// StaticExecute @ 14a1e0120

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
FRigVMFunction_MathQuaternionToVectors::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar8;
  undefined1 auVar7 [16];
  double dVar9;
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  
  dVar3 = __real_3ff0000000000000;
  dVar9 = param_2->X;
  dVar10 = param_2->Y;
  dVar12 = param_2->Z;
  dVar13 = param_2->W;
  dVar6 = dVar12 * dVar12 + dVar9 * dVar9;
  dVar8 = dVar13 * dVar13 + dVar10 * dVar10;
  dVar1 = dVar8 + dVar6;
  dVar6 = dVar6 + dVar8;
  auVar11._8_4_ = SUB84(dVar6,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar11 = sqrtpd(in_XMM3,auVar11);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
  uVar4 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
  uVar14 = (uint)(uVar4 >> 0x20);
  uVar15 = (uint)(uVar5 >> 0x20);
  auVar18._0_8_ = uVar4 & (ulonglong)(auVar17._0_8_ * dVar9);
  uVar2 = uVar5 & (ulonglong)(auVar17._8_8_ * dVar10);
  auVar18._8_4_ = (undefined4)uVar2;
  auVar18._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._4_4_ =
       ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar11 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar11);
  auVar16._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar16._4_4_ =
       ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar16._12_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar7._0_8_ = (ulonglong)(auVar11._0_8_ * dVar12) & uVar4;
  uVar5 = (ulonglong)(auVar11._8_8_ * dVar13) & uVar5;
  auVar7._8_4_ = (undefined4)uVar5;
  auVar7._12_4_ = (undefined4)(uVar5 >> 0x20);
  dVar19 = SUB168(auVar18 | auVar17,8);
  dVar12 = SUB168(auVar16 | auVar7,0);
  dVar13 = dVar12 + dVar12;
  dVar6 = SUB168(auVar16 | auVar7,8);
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar9 = (double)CONCAT44((uint)((ulonglong)(dVar19 + dVar19) >> 0x20) ^ uVar15,
                           SUB84(dVar19 + dVar19,0) ^ uVar14);
  dVar1 = SUB168(auVar18 | auVar17,0);
  dVar10 = dVar1 + dVar1;
  (param_3->field0_0x0)._s_0.X = (dVar19 * dVar9 - dVar12 * dVar13) + __real_3ff0000000000000;
  (param_3->field0_0x0)._s_0.Y = dVar6 * dVar13 - dVar1 * dVar9;
  dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar12 + dVar12) >> 0x20) ^ uVar15,
                           SUB84(dVar12 + dVar12,0) ^ uVar14);
  (param_3->field0_0x0)._s_0.Z = dVar6 * dVar9 + dVar1 * dVar13;
  (param_4->field0_0x0)._s_0.X = dVar6 * dVar8 + dVar10 * dVar19;
  dVar13 = dVar19 + dVar19;
  (param_4->field0_0x0)._s_0.Y = (dVar12 * dVar8 - dVar10 * dVar1) + dVar3;
  (param_4->field0_0x0)._s_0.Z = dVar10 * dVar6 - dVar19 * dVar8;
  dVar9 = (double)CONCAT44((uint)((ulonglong)(dVar1 + dVar1) >> 0x20) ^ uVar15,
                           SUB84(dVar1 + dVar1,0) ^ uVar14);
  (param_5->field0_0x0)._s_0.X = dVar13 * dVar6 - dVar12 * dVar9;
  (param_5->field0_0x0)._s_0.Y = dVar6 * dVar9 + dVar13 * dVar12;
  (param_5->field0_0x0)._s_0.Z = (dVar1 * dVar9 - dVar13 * dVar19) + dVar3;
  return;
}

