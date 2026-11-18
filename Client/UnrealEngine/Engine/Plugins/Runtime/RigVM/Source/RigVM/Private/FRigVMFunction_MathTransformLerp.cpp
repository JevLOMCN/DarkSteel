// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1571e0

UScriptStruct * __cdecl FRigVMFunction_MathTransformLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformLerp.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a157260

UScriptStruct * __thiscall
FRigVMFunction_MathTransformLerp::GetExecuteContextStruct(FRigVMFunction_MathTransformLerp *this)

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

// Execute @ 14a1574c0

void __thiscall FRigVMFunction_MathTransformLerp::Execute(FRigVMFunction_MathTransformLerp *this)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
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
  pTVar2 = FRigVMMathLibrary::LerpTransform(&local_68,&this->A,&this->B,this->T);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (this->Result).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (this->Result).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformLerp @ 14a18f450

FRigVMFunction_MathTransformLerp * __thiscall
FRigVMFunction_MathTransformLerp::FRigVMFunction_MathTransformLerp
          (FRigVMFunction_MathTransformLerp *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformLerp__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->A).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->A).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->B).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->B).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar20;
  *&(this->Result).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Result).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Result).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Result).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Result).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Result).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  dVar21 = (this->Result).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->B).Rotation.XY.m128d_f64[0] = (this->Result).Rotation.XY.m128d_f64[0];
  (this->B).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->B).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->B).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->B).Translation.XY.m128d_f64[0] = dVar21;
  (this->B).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->B).Translation.ZW.m128d_f64[0] = dVar22;
  (this->B).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->B).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->B).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Rotation.XY.m128d_f64[0];
  dVar24 = (this->Result).Rotation.XY.m128d_f64[1];
  (this->B).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->B).Scale3D.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->A).Rotation.XY.m128d_f64[0] = dVar21;
  (this->A).Rotation.XY.m128d_f64[1] = dVar24;
  this->T = 0.0;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->A).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->A).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->A).Translation.XY.m128d_f64[0] = dVar21;
  (this->A).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->A).Translation.ZW.m128d_f64[0] = dVar22;
  (this->A).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->A).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->A).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->A).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->A).Scale3D.ZW.m128d_f64[1] = dVar23;
  return this;
}

// Execute @ 14a1a23a0

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
FRigVMFunction_MathTransformLerp::Execute
          (FRigVMFunction_MathTransformLerp *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  pTVar2 = FRigVMMathLibrary::LerpTransform(&local_68,&this->A,&this->B,this->T);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (this->Result).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (this->Result).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// RigVMExecute @ 14a1cc010

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
FRigVMFunction_MathTransformLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  TTransform<double> *pTVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  TTransform<double> *pTVar9;
  FRigVMExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TTransform<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pTVar5,pTVar6,fVar1,pTVar9);
  return;
}

// StaticExecute @ 14a1e39e0

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
FRigVMFunction_MathTransformLerp::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          float param_4,TTransform<double> *param_5)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  pTVar2 = FRigVMMathLibrary::LerpTransform(&local_68,param_2,param_3,param_4);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_5->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_5->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_5->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_5->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_5->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_5->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_5->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_5->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_5->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_5->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_5->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_5->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

