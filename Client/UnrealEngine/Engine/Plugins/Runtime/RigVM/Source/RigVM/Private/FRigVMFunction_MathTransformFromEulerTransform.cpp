// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a14ec90

UScriptStruct * __cdecl FRigVMFunction_MathTransformFromEulerTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform,
                           (UObject *)pUVar1,L"RigVMFunction_MathTransformFromEulerTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform
                    .OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a14efb0

UScriptStruct * __thiscall
FRigVMFunction_MathTransformFromEulerTransform::GetExecuteContextStruct
          (FRigVMFunction_MathTransformFromEulerTransform *this)

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

// Execute @ 14a14f610

void __thiscall
FRigVMFunction_MathTransformFromEulerTransform::Execute
          (FRigVMFunction_MathTransformFromEulerTransform *this)

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
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->EulerTransform).Rotation,&local_28);
  dVar3 = (this->EulerTransform).Location.field0_0x0._s_0.X;
  dVar4 = (this->EulerTransform).Location.field0_0x0._s_0.Y;
  dVar1 = (this->EulerTransform).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->EulerTransform).Scale.field0_0x0._s_0.X;
  dVar9 = (this->EulerTransform).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->EulerTransform).Scale.field0_0x0._s_0.Z;
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

// GetUpgradeInfo @ 14a14f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathTransformFromEulerTransform::GetUpgradeInfo
          (FRigVMFunction_MathTransformFromEulerTransform *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_118 [32];
  FString local_e8;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_d8;
  FRigVMFunction_MathTransformFromEulerTransformV2 local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  FRigVMFunction_MathTransformFromEulerTransformV2::FRigVMFunction_MathTransformFromEulerTransformV2
            (&local_c8);
  local_c8.Value.Location.field0_0x0._s_0.X = (this->EulerTransform).Location.field0_0x0._s_0.X;
  local_c8.Value.Location.field0_0x0._s_0.Y = (this->EulerTransform).Location.field0_0x0._s_0.Y;
  local_c8.Value.Location.field0_0x0._s_0.Z = (this->EulerTransform).Location.field0_0x0._s_0.Z;
  local_c8.Value.Rotation.Pitch = (this->EulerTransform).Rotation.Pitch;
  local_c8.Value.Rotation.Yaw = (this->EulerTransform).Rotation.Yaw;
  local_c8.Value.Rotation.Roll = (this->EulerTransform).Rotation.Roll;
  local_c8.Value.Scale.field0_0x0._s_0.X = (this->EulerTransform).Scale.field0_0x0._s_0.X;
  local_c8.Value.Scale.field0_0x0._s_0.Y = (this->EulerTransform).Scale.field0_0x0._s_0.Y;
  local_c8.Value.Scale.field0_0x0._s_0.Z = (this->EulerTransform).Scale.field0_0x0._s_0.Z;
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
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform,
                           (UObject *)pUVar1,L"RigVMFunction_MathTransformFromEulerTransform");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_e8.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::
         RigVMFunctions;
    local_e8.Data.ArrayNum = 1;
    local_d8._12_4_ = local_e8.Data.ArrayMax;
    local_d8.ArrayNum = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform
                      .OuterSingleton,&local_d8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform.
       OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformFromEulerTransformV2");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_e8.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::
         RigVMFunctions;
    local_e8.Data.ArrayNum = 1;
    local_d8._12_4_ = local_e8.Data.ArrayMax;
    local_d8.ArrayNum = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2
                      .OuterSingleton,&local_d8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2.
       OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_c8);
  ::FString::FString((FString *)&local_d8,L"Value");
  ::FString::FString(&local_e8,L"EulerTransform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_e8,(FString *)&local_d8,true,true);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  return __return_storage_ptr__;
}

// FRigVMFunction_MathTransformFromEulerTransform @ 14a18f070

FRigVMFunction_MathTransformFromEulerTransform * __thiscall
FRigVMFunction_MathTransformFromEulerTransform::FRigVMFunction_MathTransformFromEulerTransform
          (FRigVMFunction_MathTransformFromEulerTransform *this)

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
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformFromEulerTransform__6B_;
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

// Execute @ 14a1a2180

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
FRigVMFunction_MathTransformFromEulerTransform::Execute
          (FRigVMFunction_MathTransformFromEulerTransform *this,FRigVMExecuteContext *param_1)

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
  
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->EulerTransform).Rotation,&local_28);
  dVar3 = (this->EulerTransform).Location.field0_0x0._s_0.X;
  dVar4 = (this->EulerTransform).Location.field0_0x0._s_0.Y;
  dVar1 = (this->EulerTransform).Location.field0_0x0._s_0.Z;
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  dVar8 = (this->EulerTransform).Scale.field0_0x0._s_0.X;
  dVar9 = (this->EulerTransform).Scale.field0_0x0._s_0.Y;
  dVar2 = (this->EulerTransform).Scale.field0_0x0._s_0.Z;
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

// RigVMExecute @ 14a1cbae0

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
FRigVMFunction_MathTransformFromEulerTransform::RigVMExecute
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

// StaticExecute @ 14a1e37d0

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
FRigVMFunction_MathTransformFromEulerTransform::StaticExecute
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

