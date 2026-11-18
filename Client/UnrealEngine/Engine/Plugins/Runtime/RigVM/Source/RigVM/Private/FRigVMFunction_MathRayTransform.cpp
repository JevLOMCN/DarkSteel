// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a17ae80

UScriptStruct * __cdecl FRigVMFunction_MathRayTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform,(UObject *)pUVar1
                         ,L"RigVMFunction_MathRayTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayTransform.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17afa0

UScriptStruct * __thiscall
FRigVMFunction_MathRayTransform::GetExecuteContextStruct(FRigVMFunction_MathRayTransform *this)

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

// Execute @ 14a17b0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_MathRayTransform::Execute(FRigVMFunction_MathRayTransform *this)

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
  StaticExecute(&local_118,&this->Ray,&this->Transform,&this->Result);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathRayTransform @ 14a18e8d0

FRigVMFunction_MathRayTransform * __thiscall
FRigVMFunction_MathRayTransform::FRigVMFunction_MathRayTransform
          (FRigVMFunction_MathRayTransform *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRayTransform__6B_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Ray).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Ray).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->Ray).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->Ray).Direction.field0_0x0._s_0.X = 0.0;
  (this->Ray).Direction.field0_0x0._s_0.Y = 0.0;
  (this->Ray).Direction.field0_0x0._s_0.Z = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->Result).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->Result).Direction.field0_0x0._s_0.X = 0.0;
  (this->Result).Direction.field0_0x0._s_0.Y = 0.0;
  (this->Result).Direction.field0_0x0._s_0.Z = 1.0;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar9 = __real_3ff0000000000000;
  (this->Result).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).Origin.field0_0x0._s_0.Y = (double)uVar11;
  (this->Ray).Origin.field0_0x0._s_0.X = (double)uVar10;
  (this->Ray).Origin.field0_0x0._s_0.Y = (double)uVar11;
  *(undefined4 *)((longlong)&(this->Result).Origin.field0_0x0 + 0x10) = uVar12;
  *(undefined4 *)((longlong)&(this->Result).Origin.field0_0x0 + 0x14) = uVar13;
  *(undefined4 *)&(this->Result).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Result).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->Ray).Origin.field0_0x0 + 0x10) = uVar12;
  *(undefined4 *)((longlong)&(this->Ray).Origin.field0_0x0 + 0x14) = uVar13;
  *(undefined4 *)&(this->Ray).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 4) = 0;
  uVar12 = (undefined4)uVar9;
  uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)((longlong)&(this->Result).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Result).Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->Result).Direction.field0_0x0 + 0x10) = uVar12;
  *(undefined4 *)((longlong)&(this->Result).Direction.field0_0x0 + 0x14) = uVar13;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 0x10) = uVar12;
  *(undefined4 *)((longlong)&(this->Ray).Direction.field0_0x0 + 0x14) = uVar13;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// Execute @ 14a1a1fc0

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
FRigVMFunction_MathRayTransform::Execute
          (FRigVMFunction_MathRayTransform *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Ray,&this->Transform,&this->Result);
  return;
}

// RigVMExecute @ 14a1cb360

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
FRigVMFunction_MathRayTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TRay<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TRay<double> *pTVar6;
  TTransform<double> *pTVar7;
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
    pTVar6 = (TRay<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TRay<double> *)
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
    pTVar7 = (TTransform<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
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
  pTVar3 = (TRay<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pTVar3);
  return;
}

// StaticExecute @ 14a1e28e0

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
FRigVMFunction_MathRayTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TRay<double> *param_2,TTransform<double> *param_3,
          TRay<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar24 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar7 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_3->Scale3D).XY.m128d_f64[0] * (param_2->Origin).field0_0x0._s_0.X;
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1] * (param_2->Origin).field0_0x0._s_0.Y;
  uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar26._8_4_ = SUB84(dVar4,0);
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = uVar25;
  dVar5 = (param_2->Origin).field0_0x0._s_0.Z * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar15 = blendpd(auVar9,auVar24,2);
  dVar1 = auVar24._0_8_;
  auVar27._0_8_ = auVar26._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar27._8_8_ = dVar5 * auVar9._8_8_ - dVar1 * dVar4;
  auVar8._8_4_ = SUB84(dVar4,0);
  auVar8._0_8_ = dVar3;
  auVar8._12_4_ = uVar25;
  auVar28._8_4_ = SUB84(dVar6,0);
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar9 = blendpd(auVar8,auVar28,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar1 - auVar15._0_8_ * dVar5;
  auVar10._8_8_ = auVar9._8_8_ * auVar24._8_8_ - auVar15._8_8_ * dVar6;
  auVar9 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar28 = blendpd(auVar27,auVar10,2);
  auVar29._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar29._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  dVar6 = auVar27._8_8_ + auVar27._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar20._8_4_ = SUB84(dVar2,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar25;
  auVar16._8_4_ = SUB84(dVar2,0);
  auVar16._0_8_ = dVar6;
  auVar16._12_4_ = uVar25;
  auVar28 = blendpd(auVar16,auVar29,2);
  auVar21._0_8_ = auVar20._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar6;
  auVar21._8_8_ = auVar29._0_8_ * auVar9._8_8_ - dVar1 * dVar2;
  auVar9 = blendpd(auVar9,auVar24,2);
  auVar11._8_4_ = SUB84(auVar21._8_8_,0);
  auVar11._0_8_ = auVar21._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
  auVar17._0_8_ = auVar28._0_8_ * dVar1 - auVar9._0_8_ * auVar29._0_8_;
  auVar17._8_8_ = auVar28._8_8_ * auVar24._8_8_ - auVar9._8_8_ * auVar29._8_8_;
  auVar9 = blendpd(auVar21,auVar17,2);
  dVar2 = dVar2 * dVar7 + dVar4 + auVar17._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  dVar1 = (param_3->Translation).ZW.m128d_f64[0];
  auVar24._8_4_ = SUB84(dVar2,0);
  auVar24._0_8_ = dVar6 * dVar7 + dVar3 + auVar11._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  auVar24._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Origin).field0_0x0 = auVar24;
  (param_4->Origin).field0_0x0._s_0.Z = auVar29._0_8_ * dVar7 + dVar5 + auVar9._0_8_ + dVar1;
  auVar24 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar5 = (param_2->Direction).field0_0x0._s_0.Z * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar7 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_3->Scale3D).XY.m128d_f64[0] * (param_2->Direction).field0_0x0._s_0.X;
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1] * (param_2->Direction).field0_0x0._s_0.Y;
  uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar3;
  auVar30._12_4_ = uVar25;
  dVar1 = auVar24._0_8_;
  auVar28 = blendpd(auVar9,auVar24,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar31._8_8_ = dVar5 * auVar9._8_8_ - dVar1 * dVar4;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar25;
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar9 = blendpd(auVar12,auVar15,2);
  auVar13._0_8_ = auVar9._0_8_ * dVar1 - auVar28._0_8_ * dVar5;
  auVar13._8_8_ = auVar9._8_8_ * auVar24._8_8_ - auVar28._8_8_ * dVar6;
  auVar9 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar28 = blendpd(auVar31,auVar13,2);
  auVar32._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar32._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  dVar6 = auVar31._8_8_ + auVar31._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar22._8_4_ = SUB84(dVar2,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar25;
  auVar18._8_4_ = SUB84(dVar2,0);
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar25;
  auVar28 = blendpd(auVar18,auVar32,2);
  auVar23._0_8_ = auVar22._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar6;
  auVar23._8_8_ = auVar32._0_8_ * auVar9._8_8_ - dVar1 * dVar2;
  auVar14._8_4_ = SUB84(auVar23._8_8_,0);
  auVar14._0_8_ = auVar23._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar24,2);
  auVar19._0_8_ = auVar28._0_8_ * dVar1 - auVar9._0_8_ * auVar32._0_8_;
  auVar19._8_8_ = auVar28._8_8_ * auVar24._8_8_ - auVar9._8_8_ * auVar32._8_8_;
  auVar24 = blendpd(auVar23,auVar19,2);
  dVar1 = dVar2 * dVar7 + dVar4 + auVar19._0_8_;
  auVar9._8_4_ = SUB84(dVar1,0);
  auVar9._0_8_ = dVar6 * dVar7 + dVar3 + auVar14._8_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Direction).field0_0x0 = auVar9;
  (param_4->Direction).field0_0x0._s_0.Z = auVar32._0_8_ * dVar7 + dVar5 + auVar24._0_8_;
  return;
}

