// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a14ff00

UScriptStruct * __cdecl FRigVMFunction_MathTransformFromEulerTransformV2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformFromEulerTransformV2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2
                    .OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
         OuterSingleton;
}

// FRigVMFunction_MathTransformFromEulerTransformV2 @ 14a18f190

FRigVMFunction_MathTransformFromEulerTransformV2 * __thiscall
FRigVMFunction_MathTransformFromEulerTransformV2::FRigVMFunction_MathTransformFromEulerTransformV2
          (FRigVMFunction_MathTransformFromEulerTransformV2 *this)

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
  double dVar10;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformFromEulerTransformV2__6B_;
  (this->Value).Location.field0_0x0._s_0.X = 0.0;
  (this->Value).Location.field0_0x0._s_0.Y = 0.0;
  (this->Value).Location.field0_0x0._s_0.Z = 0.0;
  (this->Value).Rotation.Pitch = 0.0;
  (this->Value).Rotation.Yaw = 0.0;
  (this->Value).Rotation.Roll = 0.0;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Value).Scale.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Value).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->Value).Scale.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = FEulerTransform::Identity.Location.field0_0x0._s_0.Y;
  (this->Value).Location.field0_0x0._s_0.X = FEulerTransform::Identity.Location.field0_0x0._s_0.X;
  (this->Value).Location.field0_0x0._s_0.Y = (double)uVar9;
  dVar10 = FEulerTransform::Identity.Rotation.Pitch;
  (this->Value).Location.field0_0x0._s_0.Z = FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
  (this->Value).Rotation.Pitch = dVar10;
  dVar10 = FEulerTransform::Identity.Rotation.Roll;
  (this->Value).Rotation.Yaw = FEulerTransform::Identity.Rotation.Yaw;
  (this->Value).Rotation.Roll = dVar10;
  uVar9 = FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
  (this->Value).Scale.field0_0x0._s_0.X = FEulerTransform::Identity.Scale.field0_0x0._s_0.X;
  (this->Value).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->Value).Scale.field0_0x0._s_0.Z = FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
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
  return this;
}

// Execute @ 14a1a21e0

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
FRigVMFunction_MathTransformFromEulerTransformV2::Execute
          (FRigVMFunction_MathTransformFromEulerTransformV2 *this,FRigVMExecuteContext *param_1)

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
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->Value).Rotation,&local_28);
  dVar3 = (this->Value).Location.field0_0x0._s_0.X;
  dVar4 = (this->Value).Location.field0_0x0._s_0.Y;
  dVar1 = (this->Value).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->Value).Scale.field0_0x0._s_0.X;
  dVar9 = (this->Value).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->Value).Scale.field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = pTVar10->X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  return;
}

// Execute @ 14a1a2240

void __thiscall
FRigVMFunction_MathTransformFromEulerTransformV2::Execute
          (FRigVMFunction_MathTransformFromEulerTransformV2 *this)

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
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
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
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->Value).Rotation,&local_28);
  dVar3 = (this->Value).Location.field0_0x0._s_0.X;
  dVar4 = (this->Value).Location.field0_0x0._s_0.Y;
  dVar1 = (this->Value).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->Value).Scale.field0_0x0._s_0.X;
  dVar9 = (this->Value).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->Value).Scale.field0_0x0._s_0.Z;
  (this->Result).Rotation.XY.m128d_f64[0] = pTVar10->X;
  (this->Result).Rotation.XY.m128d_f64[1] = dVar5;
  (this->Result).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar7;
  (this->Result).Translation.XY.m128d_f64[0] = dVar3;
  (this->Result).Translation.XY.m128d_f64[1] = dVar4;
  (this->Result).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Result).Translation.ZW.m128d_f64[1] = 0.0;
  (this->Result).Scale3D.XY.m128d_f64[0] = dVar8;
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->Result).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = 0.0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetExecuteContextStruct @ 14a1ab850

UScriptStruct * __thiscall
FRigVMFunction_MathTransformFromEulerTransformV2::GetExecuteContextStruct
          (FRigVMFunction_MathTransformFromEulerTransformV2 *this)

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

// RigVMExecute @ 14a1cbc00

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
FRigVMFunction_MathTransformFromEulerTransformV2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  double *pdVar15;
  TQuat<double> *pTVar16;
  TQuat<double> local_28;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar15 = (double *)pFVar4->Ptr;
  }
  else {
    pdVar15 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  if (iVar3 < 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pdVar5 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pTVar16 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)(pdVar15 + 3),&local_28);
  dVar7 = *pdVar15;
  dVar8 = pdVar15[1];
  dVar1 = pdVar15[2];
  dVar9 = pdVar15[6];
  dVar10 = pdVar15[7];
  dVar2 = pdVar15[8];
  dVar11 = pTVar16->Y;
  dVar12 = pTVar16->Z;
  dVar13 = pTVar16->W;
  *pdVar5 = pTVar16->X;
  pdVar5[1] = dVar11;
  pdVar5[2] = dVar12;
  pdVar5[3] = dVar13;
  pdVar5[4] = dVar7;
  pdVar5[5] = dVar8;
  pdVar5[6] = dVar1;
  pdVar5[7] = 0.0;
  pdVar5[8] = dVar9;
  pdVar5[9] = dVar10;
  pdVar5[10] = dVar2;
  pdVar5[0xb] = 0.0;
  return;
}

// StaticExecute @ 14a1e3830

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
FRigVMFunction_MathTransformFromEulerTransformV2::StaticExecute
          (FRigVMExecuteContext *param_1,FEulerTransform *param_2,TTransform<double> *param_3)

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
  TQuat<double> *pTVar10;
  TQuat<double> local_28;
  
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&param_2->Rotation,&local_28);
  dVar3 = (param_2->Location).field0_0x0._s_0.X;
  dVar4 = (param_2->Location).field0_0x0._s_0.Y;
  dVar1 = (param_2->Location).field0_0x0._s_0.Z;
  dVar5 = (param_2->Scale).field0_0x0._s_0.X;
  dVar6 = (param_2->Scale).field0_0x0._s_0.Y;
  dVar2 = (param_2->Scale).field0_0x0._s_0.Z;
  dVar7 = pTVar10->Y;
  dVar8 = pTVar10->Z;
  dVar9 = pTVar10->W;
  (param_3->Rotation).XY.m128d_f64[0] = pTVar10->X;
  (param_3->Rotation).XY.m128d_f64[1] = dVar7;
  (param_3->Rotation).ZW.m128d_f64[0] = dVar8;
  (param_3->Rotation).ZW.m128d_f64[1] = dVar9;
  (param_3->Translation).XY.m128d_f64[0] = dVar3;
  (param_3->Translation).XY.m128d_f64[1] = dVar4;
  (param_3->Translation).ZW.m128d_f64[0] = dVar1;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  (param_3->Scale3D).XY.m128d_f64[0] = dVar5;
  (param_3->Scale3D).XY.m128d_f64[1] = dVar6;
  (param_3->Scale3D).ZW.m128d_f64[0] = dVar2;
  (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

