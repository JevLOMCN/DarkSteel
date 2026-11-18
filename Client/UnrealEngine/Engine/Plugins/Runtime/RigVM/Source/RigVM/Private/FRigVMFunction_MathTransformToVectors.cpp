// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a151af0

UScriptStruct * __cdecl FRigVMFunction_MathTransformToVectors::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToVectors.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToVectors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToVectors,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformToVectors");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToVectors_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToVectors.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToVectors.OuterSingleton;
}

// GetExecuteContextStruct @ 14a151b70

UScriptStruct * __thiscall
FRigVMFunction_MathTransformToVectors::GetExecuteContextStruct
          (FRigVMFunction_MathTransformToVectors *this)

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

// Execute @ 14a1521e0

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
FRigVMFunction_MathTransformToVectors::Execute(FRigVMFunction_MathTransformToVectors *this)

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

// FRigVMFunction_MathTransformToVectors @ 14a190130

FRigVMFunction_MathTransformToVectors * __thiscall
FRigVMFunction_MathTransformToVectors::FRigVMFunction_MathTransformToVectors
          (FRigVMFunction_MathTransformToVectors *this)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  *(undefined ***)this = &___7FRigVMFunction_MathTransformToVectors__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.ZW.m128d_f64 = auVar9;
  *&(this->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Value).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Value).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  (this->Up).field0_0x0._s_0.X = 0.0;
  (this->Up).field0_0x0._s_0.Y = 0.0;
  (this->Up).field0_0x0._s_0.Z = 0.0;
  dVar10 = (this->Up).field0_0x0._s_0.X;
  dVar11 = (this->Up).field0_0x0._s_0.Y;
  dVar1 = (this->Up).field0_0x0._s_0.Z;
  (this->Right).field0_0x0._s_0.X = dVar10;
  (this->Right).field0_0x0._s_0.Y = dVar11;
  (this->Forward).field0_0x0._s_0.X = dVar10;
  (this->Forward).field0_0x0._s_0.Y = dVar11;
  (this->Right).field0_0x0._s_0.Z = dVar1;
  (this->Forward).field0_0x0._s_0.Z = dVar1;
  return this;
}

// Execute @ 14a1a26c0

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
FRigVMFunction_MathTransformToVectors::Execute
          (FRigVMFunction_MathTransformToVectors *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Forward,&this->Right,&this->Up);
  return;
}

// RigVMExecute @ 14a1cce90

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
FRigVMFunction_MathTransformToVectors::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
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
    pTVar6 = (TTransform<double> *)pFVar7->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
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

// StaticExecute @ 14a1e4130

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
FRigVMFunction_MathTransformToVectors::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TVector<double> *param_3,
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
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  dVar3 = __real_3ff0000000000000;
  dVar9 = (param_2->Rotation).XY.m128d_f64[0];
  dVar11 = (param_2->Rotation).XY.m128d_f64[1];
  dVar12 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar16 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar6 = dVar9 * dVar9 + dVar12 * dVar12;
  dVar8 = dVar11 * dVar11 + dVar16 * dVar16;
  dVar1 = dVar8 + dVar6;
  dVar6 = dVar6 + dVar8;
  auVar10._8_4_ = SUB84(dVar6,0);
  auVar10._0_8_ = dVar1;
  auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar10 = sqrtpd(in_XMM3,auVar10);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar10);
  uVar4 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
  uVar13 = (uint)(uVar4 >> 0x20);
  uVar14 = (uint)(uVar5 >> 0x20);
  auVar18._0_8_ = uVar4 & (ulonglong)(auVar17._0_8_ * dVar9);
  uVar2 = uVar5 & (ulonglong)(auVar17._8_8_ * dVar11);
  auVar18._8_4_ = (undefined4)uVar2;
  auVar18._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._4_4_ =
       ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar10 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar10);
  auVar15._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar15._4_4_ =
       ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar15._12_4_ =
       ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar7._0_8_ = (ulonglong)(auVar10._0_8_ * dVar12) & uVar4;
  uVar5 = (ulonglong)(auVar10._8_8_ * dVar16) & uVar5;
  auVar7._8_4_ = (undefined4)uVar5;
  auVar7._12_4_ = (undefined4)(uVar5 >> 0x20);
  dVar8 = SUB168(auVar18 | auVar17,8);
  dVar11 = SUB168(auVar15 | auVar7,0);
  dVar12 = dVar11 + dVar11;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar8 + dVar8) >> 0x20) ^ uVar14,
                           SUB84(dVar8 + dVar8,0) ^ uVar13);
  dVar16 = SUB168(auVar18 | auVar17,0);
  dVar1 = SUB168(auVar15 | auVar7,8);
  (param_3->field0_0x0)._s_0.X = (dVar8 * dVar6 - dVar12 * dVar11) + __real_3ff0000000000000;
  (param_3->field0_0x0)._s_0.Y = dVar12 * dVar1 - dVar16 * dVar6;
  dVar9 = dVar16 + dVar16;
  (param_3->field0_0x0)._s_0.Z = dVar1 * dVar6 + dVar12 * dVar16;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar11 + dVar11) >> 0x20) ^ uVar14,
                           SUB84(dVar11 + dVar11,0) ^ uVar13);
  (param_4->field0_0x0)._s_0.X = dVar1 * dVar6 + dVar9 * dVar8;
  dVar12 = dVar8 + dVar8;
  (param_4->field0_0x0)._s_0.Y = (dVar11 * dVar6 - dVar9 * dVar16) + dVar3;
  (param_4->field0_0x0)._s_0.Z = dVar9 * dVar1 - dVar8 * dVar6;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar16 + dVar16) >> 0x20) ^ uVar14,
                           SUB84(dVar16 + dVar16,0) ^ uVar13);
  (param_5->field0_0x0)._s_0.X = dVar12 * dVar1 - dVar11 * dVar6;
  (param_5->field0_0x0)._s_0.Y = dVar1 * dVar6 + dVar12 * dVar11;
  (param_5->field0_0x0)._s_0.Z = (dVar16 * dVar6 - dVar12 * dVar8) + dVar3;
  return;
}

