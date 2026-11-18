// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a146d90

UScriptStruct * __cdecl FRigVMFunction_MathMatrixFromTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixFromTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a146e10

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixFromTransform::GetExecuteContextStruct
          (FRigVMFunction_MathMatrixFromTransform *this)

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

// Execute @ 14a147040

void __thiscall
FRigVMFunction_MathMatrixFromTransform::Execute(FRigVMFunction_MathMatrixFromTransform *this)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
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
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_88);
  dVar1 = pTVar2->M[0][1];
  (this->Result).M[0][0] = pTVar2->M[0][0];
  (this->Result).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->Result).M[0][2] = pTVar2->M[0][2];
  (this->Result).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->Result).M[1][0] = pTVar2->M[1][0];
  (this->Result).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->Result).M[1][2] = pTVar2->M[1][2];
  (this->Result).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->Result).M[2][0] = pTVar2->M[2][0];
  (this->Result).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->Result).M[2][2] = pTVar2->M[2][2];
  (this->Result).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->Result).M[3][0] = pTVar2->M[3][0];
  (this->Result).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->Result).M[3][2] = pTVar2->M[3][2];
  (this->Result).M[3][3] = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a147460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathMatrixFromTransform::GetUpgradeInfo
          (FRigVMFunction_MathMatrixFromTransform *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_158 [32];
  FString local_128;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_118;
  FRigVMStruct local_108 [2];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_98 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_90 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_88 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_80 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_78 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_70 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_68 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_60 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_58 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_50 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_48 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_40 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_38 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_30 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_f8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_f0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_108[0] = (FRigVMStruct)&___7FRigVMFunction_MathMatrixFromTransformV2__6B_;
  local_28 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_20 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_e8 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_e0 = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_d8 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_d0 = (this->Transform).Translation.XY.m128d_f64[1];
  local_c8 = (this->Transform).Translation.ZW.m128d_f64[0];
  dStack_c0 = (this->Transform).Translation.ZW.m128d_f64[1];
  local_b8 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_b0 = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_a8 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_a0 = (this->Transform).Scale3D.ZW.m128d_f64[1];
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
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixFromTransform");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_128.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::RigVMFunctions;
    local_128.Data.ArrayNum = 1;
    local_118._12_4_ = local_128.Data.ArrayMax;
    local_118.ArrayNum = 1;
    local_118.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.
                      OuterSingleton,&local_118);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransform.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixFromTransformV2");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_128.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::RigVMFunctions;
    local_128.Data.ArrayNum = 1;
    local_118._12_4_ = local_128.Data.ArrayMax;
    local_118.ArrayNum = 1;
    local_118.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.
                      OuterSingleton,&local_118);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_108);
  ::FString::FString((FString *)&local_118,L"Value");
  ::FString::FString(&local_128,L"Transform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_128,(FString *)&local_118,true,true);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_118.DataPtr);
  }
  return __return_storage_ptr__;
}

// FRigVMFunction_MathMatrixFromTransform @ 14a18d9b0

FRigVMFunction_MathMatrixFromTransform * __thiscall
FRigVMFunction_MathMatrixFromTransform::FRigVMFunction_MathMatrixFromTransform
          (FRigVMFunction_MathMatrixFromTransform *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathMatrixFromTransform__6B_;
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
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Result).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Result).M[0][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Result).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Result).M[0][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Result).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Result).M[1][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Result).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Result).M[1][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Result).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Result).M[2][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Result).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Result).M[2][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Result).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Result).M[3][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Result).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Result).M[3][3] = dVar9;
  return this;
}

// Execute @ 14a1a0970

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
FRigVMFunction_MathMatrixFromTransform::Execute
          (FRigVMFunction_MathMatrixFromTransform *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Transform,&local_88);
  dVar1 = pTVar2->M[0][1];
  (this->Result).M[0][0] = pTVar2->M[0][0];
  (this->Result).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->Result).M[0][2] = pTVar2->M[0][2];
  (this->Result).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->Result).M[1][0] = pTVar2->M[1][0];
  (this->Result).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->Result).M[1][2] = pTVar2->M[1][2];
  (this->Result).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->Result).M[2][0] = pTVar2->M[2][0];
  (this->Result).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->Result).M[2][2] = pTVar2->M[2][2];
  (this->Result).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->Result).M[3][0] = pTVar2->M[3][0];
  (this->Result).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->Result).M[3][2] = pTVar2->M[3][2];
  (this->Result).M[3][3] = dVar1;
  return;
}

// RigVMExecute @ 14a1c6450

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
FRigVMFunction_MathMatrixFromTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TTransform<double> *this;
  TMatrix<double> *pTVar7;
  TMatrix<double> local_88;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    this = (TTransform<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar3 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(this,&local_88);
  dVar5 = pTVar7->M[0][1];
  *pdVar3 = pTVar7->M[0][0];
  pdVar3[1] = dVar5;
  dVar5 = pTVar7->M[0][3];
  pdVar3[2] = pTVar7->M[0][2];
  pdVar3[3] = dVar5;
  dVar5 = pTVar7->M[1][1];
  pdVar3[4] = pTVar7->M[1][0];
  pdVar3[5] = dVar5;
  dVar5 = pTVar7->M[1][3];
  pdVar3[6] = pTVar7->M[1][2];
  pdVar3[7] = dVar5;
  dVar5 = pTVar7->M[2][1];
  pdVar3[8] = pTVar7->M[2][0];
  pdVar3[9] = dVar5;
  dVar5 = pTVar7->M[2][3];
  pdVar3[10] = pTVar7->M[2][2];
  pdVar3[0xb] = dVar5;
  dVar5 = pTVar7->M[3][1];
  pdVar3[0xc] = pTVar7->M[3][0];
  pdVar3[0xd] = dVar5;
  dVar5 = pTVar7->M[3][3];
  pdVar3[0xe] = pTVar7->M[3][2];
  pdVar3[0xf] = dVar5;
  return;
}

// StaticExecute @ 14a1debb0

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
FRigVMFunction_MathMatrixFromTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TMatrix<double> *param_3)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_88);
  dVar1 = pTVar2->M[0][1];
  param_3->M[0][0] = pTVar2->M[0][0];
  param_3->M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  param_3->M[0][2] = pTVar2->M[0][2];
  param_3->M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  param_3->M[1][0] = pTVar2->M[1][0];
  param_3->M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  param_3->M[1][2] = pTVar2->M[1][2];
  param_3->M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  param_3->M[2][0] = pTVar2->M[2][0];
  param_3->M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  param_3->M[2][2] = pTVar2->M[2][2];
  param_3->M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  param_3->M[3][0] = pTVar2->M[3][0];
  param_3->M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  param_3->M[3][2] = pTVar2->M[3][2];
  param_3->M[3][3] = dVar1;
  return;
}

