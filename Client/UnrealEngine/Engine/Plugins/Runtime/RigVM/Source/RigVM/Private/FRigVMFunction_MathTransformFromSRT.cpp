// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a15a5e0

UScriptStruct * __cdecl FRigVMFunction_MathTransformFromSRT::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromSRT.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromSRT.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformFromSRT");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromSRT.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromSRT.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15a6e0

UScriptStruct * __thiscall
FRigVMFunction_MathTransformFromSRT::GetExecuteContextStruct
          (FRigVMFunction_MathTransformFromSRT *this)

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

// Execute @ 14a15a9f0

void __thiscall
FRigVMFunction_MathTransformFromSRT::Execute(FRigVMFunction_MathTransformFromSRT *this)

{
  double dVar1;
  EEulerRotationOrder EVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
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
  dVar3 = (this->Location).field0_0x0._s_0.Y;
  EVar2 = this->RotationOrder;
  dVar1 = (this->Location).field0_0x0._s_0.Z;
  (this->Transform).Translation.XY.m128d_f64[0] = (this->Location).field0_0x0._s_0.X;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  pTVar5 = AnimationCore::QuatFromEuler(&local_28,&this->Rotation,EVar2,false);
  dVar1 = pTVar5->Y;
  dVar3 = pTVar5->Z;
  dVar4 = pTVar5->W;
  (this->Transform).Rotation.XY.m128d_f64[0] = pTVar5->X;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar3;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar3 = (this->Scale).field0_0x0._s_0.Y;
  dVar1 = (this->Scale).field0_0x0._s_0.Z;
  (this->Transform).Scale3D.XY.m128d_f64[0] = (this->Scale).field0_0x0._s_0.X;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  FEulerTransform::FromFTransform(&this->EulerTransform,&this->Transform);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformFromSRT @ 14a18f2b0

FRigVMFunction_MathTransformFromSRT * __thiscall
FRigVMFunction_MathTransformFromSRT::FRigVMFunction_MathTransformFromSRT
          (FRigVMFunction_MathTransformFromSRT *this)

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
  
  *(undefined ***)this = &___7FRigVMFunction_MathTransformFromSRT__6B_;
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
  (this->EulerTransform).Location.field0_0x0._s_0.X = 0.0;
  (this->EulerTransform).Location.field0_0x0._s_0.Y = 0.0;
  (this->EulerTransform).Location.field0_0x0._s_0.Z = 0.0;
  (this->EulerTransform).Rotation.Pitch = 0.0;
  (this->EulerTransform).Rotation.Yaw = 0.0;
  (this->EulerTransform).Rotation.Roll = 0.0;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->EulerTransform).Scale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->EulerTransform).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->EulerTransform).Scale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar9;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Rotation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Rotation).field0_0x0._s_0.Y = (double)uVar9;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotationOrder = XYZ;
  (this->Rotation).field0_0x0._s_0.Z = (double)uVar9;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar9;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
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
  uVar9 = FEulerTransform::Identity.Location.field0_0x0._s_0.Y;
  (this->EulerTransform).Location.field0_0x0._s_0.X =
       FEulerTransform::Identity.Location.field0_0x0._s_0.X;
  (this->EulerTransform).Location.field0_0x0._s_0.Y = (double)uVar9;
  dVar10 = FEulerTransform::Identity.Rotation.Pitch;
  (this->EulerTransform).Location.field0_0x0._s_0.Z =
       FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
  (this->EulerTransform).Rotation.Pitch = dVar10;
  dVar10 = FEulerTransform::Identity.Rotation.Roll;
  (this->EulerTransform).Rotation.Yaw = FEulerTransform::Identity.Rotation.Yaw;
  (this->EulerTransform).Rotation.Roll = dVar10;
  uVar9 = FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
  (this->EulerTransform).Scale.field0_0x0._s_0.X = FEulerTransform::Identity.Scale.field0_0x0._s_0.X
  ;
  (this->EulerTransform).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->EulerTransform).Scale.field0_0x0._s_0.Z = FEulerTransform::Identity.Scale.field0_0x0._s_0.Z
  ;
  return this;
}

// Execute @ 14a1a2300

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
FRigVMFunction_MathTransformFromSRT::Execute
          (FRigVMFunction_MathTransformFromSRT *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  EEulerRotationOrder EVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
  TQuat<double> local_28;
  
  dVar3 = (this->Location).field0_0x0._s_0.Y;
  EVar2 = this->RotationOrder;
  dVar1 = (this->Location).field0_0x0._s_0.Z;
  (this->Transform).Translation.XY.m128d_f64[0] = (this->Location).field0_0x0._s_0.X;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  (this->Transform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  pTVar5 = AnimationCore::QuatFromEuler(&local_28,&this->Rotation,EVar2,false);
  dVar1 = pTVar5->Y;
  dVar3 = pTVar5->Z;
  dVar4 = pTVar5->W;
  (this->Transform).Rotation.XY.m128d_f64[0] = pTVar5->X;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = dVar3;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar3 = (this->Scale).field0_0x0._s_0.Y;
  dVar1 = (this->Scale).field0_0x0._s_0.Z;
  (this->Transform).Scale3D.XY.m128d_f64[0] = (this->Scale).field0_0x0._s_0.X;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  FEulerTransform::FromFTransform(&this->EulerTransform,&this->Transform);
  return;
}

// RigVMExecute @ 14a1cbd20

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
FRigVMFunction_MathTransformFromSRT::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EEulerRotationOrder EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  EEulerRotationOrder *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  TVector<double> *pTVar9;
  TTransform<double> *pTVar10;
  FEulerTransform *pFVar11;
  FRigVMExecuteContext *pFVar12;
  
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
    pTVar5 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
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
    pTVar6 = (TVector<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
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
    pEVar7 = pFVar8[2].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  EVar1 = *pEVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = (FEulerTransform *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar12,pTVar5,pTVar6,EVar1,pTVar9,pTVar10,pFVar11);
  return;
}

// StaticExecute @ 14a1e3890

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
FRigVMFunction_MathTransformFromSRT::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          EEulerRotationOrder param_4,TVector<double> *param_5,TTransform<double> *param_6,
          FEulerTransform *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (param_6->Translation).XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  (param_6->Translation).XY.m128d_f64[1] = dVar2;
  (param_6->Translation).ZW.m128d_f64[0] = dVar1;
  (param_6->Translation).ZW.m128d_f64[1] = 0.0;
  pTVar4 = AnimationCore::QuatFromEuler(&local_28,param_3,param_4,false);
  dVar1 = pTVar4->Z;
  dVar2 = pTVar4->W;
  dVar3 = pTVar4->Y;
  (param_6->Rotation).XY.m128d_f64[0] = pTVar4->X;
  (param_6->Rotation).XY.m128d_f64[1] = dVar3;
  (param_6->Rotation).ZW.m128d_f64[0] = dVar1;
  (param_6->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  dVar1 = (param_5->field0_0x0)._s_0.Z;
  (param_6->Scale3D).XY.m128d_f64[0] = (param_5->field0_0x0)._s_0.X;
  (param_6->Scale3D).XY.m128d_f64[1] = dVar2;
  (param_6->Scale3D).ZW.m128d_f64[0] = dVar1;
  (param_6->Scale3D).ZW.m128d_f64[1] = 0.0;
  FEulerTransform::FromFTransform(param_7,param_6);
  return;
}

