// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1508a0

UScriptStruct * __cdecl FRigVMFunction_MathTransformToEulerTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformToEulerTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a150920

UScriptStruct * __thiscall
FRigVMFunction_MathTransformToEulerTransform::GetExecuteContextStruct
          (FRigVMFunction_MathTransformToEulerTransform *this)

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

// Execute @ 14a150c30

void __thiscall
FRigVMFunction_MathTransformToEulerTransform::Execute
          (FRigVMFunction_MathTransformToEulerTransform *this)

{
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
  FEulerTransform::FromFTransform(&this->Result,&this->Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformToEulerTransform @ 14a190000

FRigVMFunction_MathTransformToEulerTransform * __thiscall
FRigVMFunction_MathTransformToEulerTransform::FRigVMFunction_MathTransformToEulerTransform
          (FRigVMFunction_MathTransformToEulerTransform *this)

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
  
  *(undefined ***)this = &___7FRigVMFunction_MathTransformToEulerTransform__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Result).Location.field0_0x0._s_0.X = 0.0;
  (this->Result).Location.field0_0x0._s_0.Y = 0.0;
  (this->Result).Location.field0_0x0._s_0.Z = 0.0;
  (this->Result).Rotation.Pitch = 0.0;
  (this->Result).Rotation.Yaw = 0.0;
  (this->Result).Rotation.Roll = 0.0;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Result).Scale.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Result).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->Result).Scale.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
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
  uVar9 = FEulerTransform::Identity.Location.field0_0x0._s_0.Y;
  (this->Result).Location.field0_0x0._s_0.X = FEulerTransform::Identity.Location.field0_0x0._s_0.X;
  (this->Result).Location.field0_0x0._s_0.Y = (double)uVar9;
  dVar10 = FEulerTransform::Identity.Rotation.Pitch;
  (this->Result).Location.field0_0x0._s_0.Z = FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
  (this->Result).Rotation.Pitch = dVar10;
  dVar10 = FEulerTransform::Identity.Rotation.Roll;
  (this->Result).Rotation.Yaw = FEulerTransform::Identity.Rotation.Yaw;
  (this->Result).Rotation.Roll = dVar10;
  uVar9 = FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
  (this->Result).Scale.field0_0x0._s_0.X = FEulerTransform::Identity.Scale.field0_0x0._s_0.X;
  (this->Result).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->Result).Scale.field0_0x0._s_0.Z = FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
  return this;
}

// Execute @ 14a1a26a0

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
FRigVMFunction_MathTransformToEulerTransform::Execute
          (FRigVMFunction_MathTransformToEulerTransform *this,FRigVMExecuteContext *param_1)

{
  FEulerTransform::FromFTransform(&this->Result,&this->Value);
  return;
}

// RigVMExecute @ 14a1ccda0

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
FRigVMFunction_MathTransformToEulerTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FEulerTransform *this;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    pTVar5 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  this = (FEulerTransform *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  FEulerTransform::FromFTransform(this,pTVar5);
  return;
}

// StaticExecute @ 14a1e4120

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
FRigVMFunction_MathTransformToEulerTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,FEulerTransform *param_3)

{
  FEulerTransform::FromFTransform(param_3,param_2);
  return;
}

