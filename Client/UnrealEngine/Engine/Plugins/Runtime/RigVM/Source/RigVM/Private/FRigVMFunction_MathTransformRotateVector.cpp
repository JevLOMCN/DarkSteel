// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a159060

UScriptStruct * __cdecl FRigVMFunction_MathTransformRotateVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformRotateVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformRotateVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformRotateVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformRotateVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformRotateVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a159140

UScriptStruct * __thiscall
FRigVMFunction_MathTransformRotateVector::GetExecuteContextStruct
          (FRigVMFunction_MathTransformRotateVector *this)

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

// Execute @ 14a1594d0

void __thiscall
FRigVMFunction_MathTransformRotateVector::Execute(FRigVMFunction_MathTransformRotateVector *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
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
  auVar1 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
  dVar6 = (this->Vector).field0_0x0._s_0.Z * (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar8 = (this->Transform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->Transform).Scale3D.XY.m128d_f64[0] * (this->Vector).field0_0x0._s_0.X;
  dVar5 = (this->Transform).Scale3D.XY.m128d_f64[1] * (this->Vector).field0_0x0._s_0.Y;
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar11 = blendpd(auVar9,auVar1,2);
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar3 = auVar1._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar10,2);
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
  auVar9 = blendpd(auVar9,auVar1,2);
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar13._0_8_ = auVar19._0_8_ * dVar3 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(this->Result).field0_0x0 = auVar1;
  (this->Result).field0_0x0._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformRotateVector @ 14a18fd20

FRigVMFunction_MathTransformRotateVector * __thiscall
FRigVMFunction_MathTransformRotateVector::FRigVMFunction_MathTransformRotateVector
          (FRigVMFunction_MathTransformRotateVector *this)

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
  undefined8 uVar11;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformRotateVector__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar9;
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
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar11;
  (this->Result).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = (this->Result).field0_0x0._s_0.Y;
  dVar1 = (this->Result).field0_0x0._s_0.Z;
  (this->Vector).field0_0x0._s_0.X = (this->Result).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar10;
  (this->Vector).field0_0x0._s_0.Z = dVar1;
  return this;
}

// Execute @ 14a1a2510

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
FRigVMFunction_MathTransformRotateVector::Execute
          (FRigVMFunction_MathTransformRotateVector *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
  dVar8 = (this->Transform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->Transform).Scale3D.XY.m128d_f64[0] * (this->Vector).field0_0x0._s_0.X;
  dVar5 = (this->Transform).Scale3D.XY.m128d_f64[1] * (this->Vector).field0_0x0._s_0.Y;
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar6 = (this->Vector).field0_0x0._s_0.Z * (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar11 = blendpd(auVar9,auVar1,2);
  dVar3 = auVar1._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar10,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar1,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar3 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(this->Result).field0_0x0 = auVar1;
  (this->Result).field0_0x0._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_;
  return;
}

// RigVMExecute @ 14a1cc970

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
FRigVMFunction_MathTransformRotateVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 (*pauVar14) [16];
  double *pdVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pauVar14 = (undefined1 (*) [16])pFVar3->Ptr;
  }
  else {
    pauVar14 = (undefined1 (*) [16])
               FRigVMPropertyPath::GetData_Internal
                         (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar2 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar15 = (double *)pFVar3[1].Ptr;
  }
  else {
    pdVar15 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  if (iVar2 < 3) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pauVar4 = (undefined1 (*) [16])param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  auVar1 = pauVar14[1];
  dVar10 = pdVar15[2] * *(double *)pauVar14[5];
  dVar11 = *(double *)(pauVar14[5] + 8) * 0.0;
  dVar12 = *(double *)(pauVar14[1] + 8);
  dVar8 = *(double *)pauVar14[4] * *pdVar15;
  dVar9 = *(double *)(pauVar14[4] + 8) * pdVar15[1];
  uVar23 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar16 = *pauVar14;
  auVar18 = blendpd(auVar16,auVar1,2);
  auVar24._8_4_ = SUB84(dVar9,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = uVar23;
  dVar7 = auVar1._0_8_;
  auVar25._0_8_ = auVar24._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
  auVar25._8_8_ = dVar10 * auVar16._8_8_ - dVar7 * dVar9;
  auVar26._8_4_ = SUB84(dVar9,0);
  auVar26._0_8_ = dVar8;
  auVar26._12_4_ = uVar23;
  auVar16._8_4_ = SUB84(dVar11,0);
  auVar16._0_8_ = dVar10;
  auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar16 = blendpd(auVar26,auVar16,2);
  auVar17._0_8_ = auVar16._0_8_ * dVar7 - auVar18._0_8_ * dVar10;
  auVar17._8_8_ = auVar16._8_8_ * auVar1._8_8_ - auVar18._8_8_ * dVar11;
  auVar16 = *pauVar14;
  auVar26 = blendpd(auVar25,auVar17,2);
  auVar27._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar27._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  dVar11 = auVar25._8_8_ + auVar25._8_8_;
  dVar6 = auVar17._0_8_ + auVar17._0_8_;
  uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar11;
  auVar21._12_4_ = uVar23;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar11;
  auVar19._12_4_ = uVar23;
  auVar26 = blendpd(auVar19,auVar27,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar11;
  auVar22._8_8_ = auVar27._0_8_ * auVar16._8_8_ - dVar7 * dVar6;
  auVar18._8_4_ = SUB84(auVar22._8_8_,0);
  auVar18._0_8_ = auVar22._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar16 = blendpd(auVar16,auVar1,2);
  auVar20._0_8_ = auVar26._0_8_ * dVar7 - auVar16._0_8_ * auVar27._0_8_;
  auVar20._8_8_ = auVar26._8_8_ * auVar1._8_8_ - auVar16._8_8_ * auVar27._8_8_;
  auVar16 = blendpd(auVar22,auVar20,2);
  dVar7 = dVar6 * dVar12 + dVar9 + auVar20._0_8_;
  auVar1._8_4_ = SUB84(dVar7,0);
  auVar1._0_8_ = dVar11 * dVar12 + dVar8 + auVar18._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *pauVar4 = auVar1;
  *(double *)pauVar4[1] = auVar27._0_8_ * dVar12 + dVar10 + auVar16._0_8_;
  return;
}

// StaticExecute @ 14a1e3fb0

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
FRigVMFunction_MathTransformRotateVector::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar9 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_3->field0_0x0)._s_0.X * (param_2->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_3->field0_0x0)._s_0.Y * (param_2->Scale3D).XY.m128d_f64[1];
  uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_3->field0_0x0)._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar11 = blendpd(auVar9,auVar1,2);
  auVar17._8_4_ = SUB84(dVar5,0);
  auVar17._0_8_ = dVar4;
  auVar17._12_4_ = uVar16;
  dVar3 = auVar1._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar19,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar10,2);
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar7 = auVar18._8_8_ + auVar18._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar16;
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar1,2);
  auVar13._0_8_ = auVar19._0_8_ * dVar3 - auVar9._0_8_ * auVar20._0_8_;
  auVar13._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar9._8_8_ * auVar20._8_8_;
  auVar9 = blendpd(auVar15,auVar13,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar1;
  (param_4->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_;
  return;
}

