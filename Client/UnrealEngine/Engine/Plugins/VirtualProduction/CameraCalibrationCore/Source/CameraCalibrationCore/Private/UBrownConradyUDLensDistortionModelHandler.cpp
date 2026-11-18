// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 15

// StaticClass @ 14d67b360

UClass * __cdecl UBrownConradyUDLensDistortionModelHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyUDLensDistortionModelHandler",
               &Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUBrownConradyUDLensDistortionModelHandler,0xf0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrownConradyUDLensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UBrownConradyUDLensDistortionModelHandler>,local_res8,
               ULensDistortionModelHandlerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton;
}

// UBrownConradyUDLensDistortionModelHandler @ 14d6a9bc0

UBrownConradyUDLensDistortionModelHandler * __thiscall
UBrownConradyUDLensDistortionModelHandler::UBrownConradyUDLensDistortionModelHandler
          (UBrownConradyUDLensDistortionModelHandler *this,FVTableHelper *param_1)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UBrownConradyUDLensDistortionModelHandler__6B_;
  (this->BrownConradyUDParameters).K1 = 0.0;
  (this->BrownConradyUDParameters).K2 = 0.0;
  (this->BrownConradyUDParameters).K3 = 0.0;
  (this->BrownConradyUDParameters).K4 = 0.0;
  (this->BrownConradyUDParameters).K5 = 0.0;
  (this->BrownConradyUDParameters).K6 = 0.0;
  (this->BrownConradyUDParameters).P1 = 0.0;
  (this->BrownConradyUDParameters).P2 = 0.0;
  return this;
}

// UBrownConradyUDLensDistortionModelHandler @ 14d6a9c10

UBrownConradyUDLensDistortionModelHandler * __thiscall
UBrownConradyUDLensDistortionModelHandler::UBrownConradyUDLensDistortionModelHandler
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this);
  this->_padding_ = (longlong)&___7UBrownConradyUDLensDistortionModelHandler__6B_;
  (this->BrownConradyUDParameters).K1 = 0.0;
  (this->BrownConradyUDParameters).K2 = 0.0;
  (this->BrownConradyUDParameters).K3 = 0.0;
  (this->BrownConradyUDParameters).K4 = 0.0;
  (this->BrownConradyUDParameters).K5 = 0.0;
  (this->BrownConradyUDParameters).K6 = 0.0;
  (this->BrownConradyUDParameters).P1 = 0.0;
  (this->BrownConradyUDParameters).P2 = 0.0;
  return this;
}

// ~UBrownConradyUDLensDistortionModelHandler @ 14d6acac0

void __thiscall
UBrownConradyUDLensDistortionModelHandler::~UBrownConradyUDLensDistortionModelHandler
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  this->_padding_ = (longlong)&___7ULensDistortionModelHandlerBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d6b18b0

void __thiscall
`UBrownConradyUDLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::operator()
          (void *this,UMaterialInstanceDynamic *param_1)

{
  float fVar1;
  double dVar2;
  FName *pFVar3;
  FName local_res8;
  
  fVar1 = *(float *)(*(longlong *)this + 0xd0);
  pFVar3 = ::FName::FName(&local_res8,"k1");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xd4);
  pFVar3 = ::FName::FName(&local_res8,"k2");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xd8);
  pFVar3 = ::FName::FName(&local_res8,"k3");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xdc);
  pFVar3 = ::FName::FName(&local_res8,"k4");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe0);
  pFVar3 = ::FName::FName(&local_res8,"k5");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe4);
  pFVar3 = ::FName::FName(&local_res8,"k6");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe8);
  pFVar3 = ::FName::FName(&local_res8,"p1");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xec);
  pFVar3 = ::FName::FName(&local_res8,"p2");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  dVar2 = *(double *)(*(longlong *)this + 0x58);
  pFVar3 = ::FName::FName(&local_res8,"cx");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,(float)dVar2);
  dVar2 = *(double *)(*(longlong *)this + 0x60);
  pFVar3 = ::FName::FName(&local_res8,"cy");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,(float)dVar2);
  dVar2 = *(double *)(*(longlong *)this + 0x48);
  pFVar3 = ::FName::FName(&local_res8,"fx");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,(float)dVar2);
  dVar2 = *(double *)(*(longlong *)this + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"fy");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,(float)dVar2);
  return;
}

// ComputeDistortedUV @ 14d6bb430

TVector2<double> * __thiscall
UBrownConradyUDLensDistortionModelHandler::ComputeDistortedUV
          (UBrownConradyUDLensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = this->_padding_;
  uVar3 = this->_padding_;
  dVar8 = (double)this->_padding_;
  uVar9 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar10,uVar9) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar10,uVar9) == __real_3e45798ee2308c3a) ||
     (uVar9 = (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar10 = (uint)((ulonglong)uVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar10,uVar9) < __real_3e45798ee2308c3a ||
     (double)CONCAT44(uVar10,uVar9) == __real_3e45798ee2308c3a)) {
    dVar8 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  }
  else {
    dVar7 = (param_1->field0_0x0)._s_0.X - (double)this->_padding_;
    dVar4 = __real_3ff0000000000000 / (double)uVar2;
    dVar5 = ((param_1->field0_0x0)._s_0.Y - dVar8) / (double)uVar3;
    dVar6 = dVar4 * dVar7;
    fVar13 = (float)(dVar5 * dVar5 + dVar6 * dVar6);
    fVar11 = fVar13 * fVar13;
    fVar12 = fVar11 * fVar13 * (this->BrownConradyUDParameters).K3 +
             fVar11 * (this->BrownConradyUDParameters).K2 +
             fVar13 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
    fVar11 = fVar11 * fVar13 * (this->BrownConradyUDParameters).K6 +
             fVar11 * (this->BrownConradyUDParameters).K5 +
             fVar13 * (this->BrownConradyUDParameters).K4 + __real_3f800000;
    if (__real_38d1b717 < (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = fVar12 / fVar11;
    }
    fVar11 = (this->BrownConradyUDParameters).P2;
    fVar1 = (this->BrownConradyUDParameters).P1;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (((dVar4 + dVar4) * dVar7 * dVar6 + (double)fVar13) * (double)fVar11 +
          (double)(fVar1 + fVar1) * dVar6 * dVar5 + (double)fVar12 * dVar6) * (double)uVar2 +
         (double)this->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (((double)(fVar11 + fVar11) * dVar6 + (double)fVar12) * dVar5 +
         ((dVar5 + dVar5) * dVar5 + (double)fVar13) * (double)fVar1) * (double)uVar3 + dVar8;
  }
  return __return_storage_ptr__;
}

// ComputeUndistortedUV @ 14d6bca20

TVector2<double> * __thiscall
UBrownConradyUDLensDistortionModelHandler::ComputeUndistortedUV
          (UBrownConradyUDLensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  
  uVar1 = this->_padding_;
  uVar3 = this->_padding_;
  uVar2 = this->_padding_;
  uVar4 = this->_padding_;
  uVar14 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar15,uVar14) &&
       (double)CONCAT44(uVar15,uVar14) != __real_3e45798ee2308c3a) &&
     (uVar14 = (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar15 = (uint)((ulonglong)uVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3e45798ee2308c3a <= (double)CONCAT44(uVar15,uVar14) &&
     (double)CONCAT44(uVar15,uVar14) != __real_3e45798ee2308c3a)) {
    dVar5 = ((param_1->field0_0x0)._s_0.X - (double)uVar2) / (double)uVar1;
    dVar16 = ((param_1->field0_0x0)._s_0.Y - (double)uVar4) / (double)uVar3;
    lVar13 = 2;
    fVar17 = (this->BrownConradyUDParameters).P2;
    fVar19 = (this->BrownConradyUDParameters).P1;
    dVar9 = (double)fVar17;
    dVar11 = (double)fVar19;
    dVar10 = (double)(fVar19 + fVar19);
    dVar12 = (double)(fVar17 + fVar17);
    dVar18 = dVar5;
    dVar6 = dVar16;
    do {
      fVar20 = (float)(dVar6 * dVar6 + dVar18 * dVar18);
      fVar17 = fVar20 * fVar20;
      fVar19 = (this->BrownConradyUDParameters).K2 * fVar17 +
               (this->BrownConradyUDParameters).K3 * fVar17 * fVar20 +
               fVar20 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
      fVar17 = (this->BrownConradyUDParameters).K5 * fVar17 +
               (this->BrownConradyUDParameters).K6 * fVar17 * fVar20 +
               (this->BrownConradyUDParameters).K4 * fVar20 + __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar19 = fVar19 / fVar17;
      }
      fVar17 = __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar17 = __real_3f800000 / fVar19;
      }
      dVar7 = (dVar16 - (((dVar6 + dVar6) * dVar6 + (double)fVar20) * dVar11 +
                        dVar18 * dVar12 * dVar6)) * (double)fVar17;
      dVar6 = (dVar5 - (((dVar18 + dVar18) * dVar18 + (double)fVar20) * dVar9 +
                       dVar18 * dVar10 * dVar6)) * (double)fVar17;
      fVar20 = (float)(dVar7 * dVar7 + dVar6 * dVar6);
      fVar17 = fVar20 * fVar20;
      fVar19 = (this->BrownConradyUDParameters).K2 * fVar17 +
               (this->BrownConradyUDParameters).K3 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
      fVar17 = (this->BrownConradyUDParameters).K5 * fVar17 +
               (this->BrownConradyUDParameters).K6 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K4 + __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar19 = fVar19 / fVar17;
      }
      fVar17 = __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar17 = __real_3f800000 / fVar19;
      }
      dVar18 = (dVar16 - (((dVar7 + dVar7) * dVar7 + (double)fVar20) * dVar11 +
                         dVar6 * dVar12 * dVar7)) * (double)fVar17;
      dVar6 = (dVar5 - (((dVar6 + dVar6) * dVar6 + (double)fVar20) * dVar9 + dVar6 * dVar10 * dVar7)
              ) * (double)fVar17;
      fVar20 = (float)(dVar18 * dVar18 + dVar6 * dVar6);
      fVar17 = fVar20 * fVar20;
      fVar19 = (this->BrownConradyUDParameters).K2 * fVar17 +
               (this->BrownConradyUDParameters).K3 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
      fVar17 = (this->BrownConradyUDParameters).K5 * fVar17 +
               (this->BrownConradyUDParameters).K6 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K4 + __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar19 = fVar19 / fVar17;
      }
      fVar17 = __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar17 = __real_3f800000 / fVar19;
      }
      dVar7 = (dVar16 - (((dVar18 + dVar18) * dVar18 + (double)fVar20) * dVar11 +
                        dVar6 * dVar12 * dVar18)) * (double)fVar17;
      dVar6 = (dVar5 - (((dVar6 + dVar6) * dVar6 + (double)fVar20) * dVar9 + dVar6 * dVar10 * dVar18
                       )) * (double)fVar17;
      fVar20 = (float)(dVar7 * dVar7 + dVar6 * dVar6);
      fVar17 = fVar20 * fVar20;
      fVar19 = (this->BrownConradyUDParameters).K2 * fVar17 +
               (this->BrownConradyUDParameters).K3 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
      fVar17 = (this->BrownConradyUDParameters).K5 * fVar17 +
               (this->BrownConradyUDParameters).K6 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K4 + __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar19 = fVar19 / fVar17;
      }
      fVar17 = __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar17 = __real_3f800000 / fVar19;
      }
      dVar8 = (dVar16 - (((dVar7 + dVar7) * dVar7 + (double)fVar20) * dVar11 +
                        dVar6 * dVar12 * dVar7)) * (double)fVar17;
      dVar6 = (dVar5 - (((dVar6 + dVar6) * dVar6 + (double)fVar20) * dVar9 + dVar6 * dVar10 * dVar7)
              ) * (double)fVar17;
      fVar20 = (float)(dVar8 * dVar8 + dVar6 * dVar6);
      fVar17 = fVar20 * fVar20;
      fVar19 = (this->BrownConradyUDParameters).K2 * fVar17 +
               (this->BrownConradyUDParameters).K3 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K1 + __real_3f800000;
      fVar17 = (this->BrownConradyUDParameters).K5 * fVar17 +
               (this->BrownConradyUDParameters).K6 * fVar20 * fVar17 +
               fVar20 * (this->BrownConradyUDParameters).K4 + __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar19 = fVar19 / fVar17;
      }
      fVar17 = __real_3f800000;
      if (__real_38d1b717 < (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar17 = __real_3f800000 / fVar19;
      }
      dVar18 = (dVar5 - (((dVar6 + dVar6) * dVar6 + (double)fVar20) * dVar9 + dVar6 * dVar10 * dVar8
                        )) * (double)fVar17;
      dVar6 = (dVar16 - (((dVar8 + dVar8) * dVar8 + (double)fVar20) * dVar11 +
                        dVar6 * dVar12 * dVar8)) * (double)fVar17;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar5 = (double)this->_padding_;
    dVar9 = (double)this->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * (double)uVar3 + (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar18 * dVar5 + dVar9;
    return __return_storage_ptr__;
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  return __return_storage_ptr__;
}

// ExecuteDistortionShader @ 14d6c7b80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UBrownConradyUDLensDistortionModelHandler::ExecuteDistortionShader
          (UBrownConradyUDLensDistortionModelHandler *this,FRDGBuilder *param_1,
          FLensDistortionState *param_2,float param_3,float param_4,TVector2<double> *param_5,
          FRDGTexture **param_6)

{
  int *piVar1;
  code *pcVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FRDGTextureUAV *pFVar8;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar9;
  FName this_01;
  FRDGEventName *pFVar10;
  FShaderParametersMetadata *pFVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 *local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  TIntVector3<int>_u_0 local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FBrownConradyUDDistortionCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58 [2];
  
  puVar13 = (undefined8 *)0x0;
  local_b0 = *(undefined8 *)&((*param_6)->Desc).field_0x24;
  iVar12 = (int)local_b0;
  if ((iVar12 < 1) || ((int)((ulonglong)local_b0 >> 0x20) < 1)) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
    }
  }
  else {
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
    if (puVar7 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      puVar7[10] = 0;
      *puVar7 = &___7__TObject_VFParameters_FBrownConradyUDDistortionCS___FRDGAllocator__6B_;
      puVar13 = puVar7;
    }
    local_c8 = puVar13;
    if ((((undefined8 **)param_1->_padding_ <= &local_c8) &&
        (&local_c8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar6 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_c8;
    pFVar8 = FRDGBuilder::CreateUAV(param_1,*param_6,None,PF_Unknown);
    fVar4 = __real_3f800000;
    iVar6 = local_b0._4_4_;
    puVar13[10] = pFVar8;
    *(float *)(puVar13 + 3) = param_3;
    *(float *)((longlong)puVar13 + 0x1c) = param_4;
    TVar3._s_0.Y = fVar4 / (float)local_b0._4_4_;
    TVar3._s_0.X = fVar4 / (float)iVar12;
    (((FParameters *)(puVar13 + 2))->ThreadIdToUV).field0_0x0 = TVar3;
    local_c0 = (float)(param_2->ImageCenter).PrincipalPoint.field0_0x0._s_0.X;
    fStack_bc = (float)(param_2->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y;
    puVar13[5] = CONCAT44(fStack_bc,local_c0);
    local_b8 = (float)(param_2->FocalLengthInfo).FxFy.field0_0x0._s_0.X;
    fStack_b4 = (float)(param_2->FocalLengthInfo).FxFy.field0_0x0._s_0.Y;
    puVar13[4] = CONCAT44(fStack_b4,local_b8);
    if ((param_2->DistortionInfo).Parameters.ArrayNum == 8) {
      *(undefined4 *)(puVar13 + 6) =
           *(undefined4 *)(param_2->DistortionInfo).Parameters.AllocatorInstance.Data;
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((longlong)puVar13 + 0x34) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 4);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(puVar13 + 7) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 8);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((longlong)puVar13 + 0x3c) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0xc);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(puVar13 + 8) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x10);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((longlong)puVar13 + 0x44) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x14);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(puVar13 + 9) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x18);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x1c);
    }
    else {
      if (2 < (byte)LogCameraCalibrationCore._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
      }
      puVar13[6] = 0;
      uVar14 = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      *(undefined4 *)(puVar13 + 9) = 0;
    }
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar14;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar9 = (FShaderType *)FBrownConradyUDDistortionCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_98,pFVar9,0);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      ::FName::ToString((FName *)this_01,&local_80);
      FBrownConradyUDDistortionCS::GetStaticType();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FBrownConradyUDDistortionCS::GetStaticType();
    local_68.ShaderContent = (FBrownConradyUDDistortionCS *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    pFVar10 = FRDGEventName::FRDGEventName(local_58,1,L"BrownConradyUDDistortionDisplacementMap");
    pFVar11 = FBrownConradyUDDistortionCS::FParameters::FTypeInfo::GetStructMetadata();
    local_a8._s_0.Z = 1;
    local_a8._s_0.X = (int)(iVar12 + 7 + (iVar12 + 7 >> 0x1f & 7U)) >> 3;
    local_a8._s_0.Y = (int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3;
    FComputeShaderUtils::AddPass<FBrownConradyUDDistortionCS>
              (param_1,pFVar10,Compute,&local_68,pFVar11,(FParameters *)(puVar13 + 2),
               (TIntVector3<int> *)&local_a8._s_0);
    if (local_58[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_58[0].FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDistortionShaderPath @ 14d6d3a50

FString * __thiscall
UBrownConradyUDLensDistortionModelHandler::GetDistortionShaderPath
          (UBrownConradyUDLensDistortionModelHandler *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"/Plugin/CameraCalibrationCore/Private/BrownConradyUDDistortion.usf");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d6d7e00

UClass * __cdecl UBrownConradyUDLensDistortionModelHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyUDLensDistortionModelHandler",
               &Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUBrownConradyUDLensDistortionModelHandler,0xf0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrownConradyUDLensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UBrownConradyUDLensDistortionModelHandler>,local_res8,
               ULensDistortionModelHandlerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyUDLensDistortionModelHandler.InnerSingleton;
}

// InitDistortionMaterials @ 14d6de2e0

void __thiscall
UBrownConradyUDLensDistortionModelHandler::InitDistortionMaterials
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  UObject *pUVar1;
  UTexture *pUVar2;
  UClass *pUVar3;
  FName FVar4;
  TSoftObjectPtr<UMaterialInterface> *pTVar5;
  UMaterialInstanceDynamic *pUVar6;
  UMaterialInterface *pUVar7;
  UMaterialInterface *pUVar8;
  FName *pFVar9;
  FName local_res8;
  
  pUVar8 = (UMaterialInterface *)0x0;
  if (this->_padding_ == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[6].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    pUVar7 = pUVar8;
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar7 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    this->_padding_ = (longlong)pUVar6;
  }
  if (this->_padding_ == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[2].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    pUVar7 = pUVar8;
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar7 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    this->_padding_ = (longlong)pUVar6;
  }
  if (this->_padding_ == 0) {
    pUVar3 = UCameraCalibrationSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
    FVar4 = (FName)StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar4 != (FName)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
    }
    local_res8 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    pTVar5 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
             ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                     *)&pUVar1[4].field_0x20,
                    (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
    if (pTVar5 != (TSoftObjectPtr<UMaterialInterface> *)0x0) {
      pUVar8 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(pTVar5);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar6 = UMaterialInstanceDynamic::Create(pUVar8,(UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    this->_padding_ = (longlong)pUVar6;
  }
  pUVar6 = (UMaterialInstanceDynamic *)this->_padding_;
  pUVar2 = (UTexture *)this->_padding_;
  pFVar9 = ::FName::FName(&local_res8,"UndistortionDisplacementMap");
  UMaterialInstanceDynamic::SetTextureParameterValue(pUVar6,*pFVar9,pUVar2);
  pUVar6 = (UMaterialInstanceDynamic *)this->_padding_;
  pUVar2 = (UTexture *)this->_padding_;
  pFVar9 = ::FName::FName(&local_res8,"DistortionDisplacementMap");
  UMaterialInstanceDynamic::SetTextureParameterValue(pUVar6,*pFVar9,pUVar2);
  ULensDistortionModelHandlerBase::SetDistortionState
            ((ULensDistortionModelHandlerBase *)this,(FLensDistortionState *)&this->_padding_);
  return;
}

// InitializeHandler @ 14d6debd0

void __thiscall
UBrownConradyUDLensDistortionModelHandler::InitializeHandler
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  UClass *pUVar1;
  
  pUVar1 = UBrownConradyUDLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return;
}

// InterpretDistortionParameters @ 14d6e0f50

void __thiscall
UBrownConradyUDLensDistortionModelHandler::InterpretDistortionParameters
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  int iVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  UClass *pUVar4;
  ULensModel *pUVar5;
  UPackage *pUVar6;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = ULensModel::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = (UClass *)this->_padding_;
        goto LAB_14d6e0fa1;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d6e0fa1:
  pUVar5 = UClass::GetDefaultObject<ULensModel>(pUVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar5 + 0x2d8);
  if (Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrownConradyUDDistortionParameters,
                         (UObject *)pUVar6,L"BrownConradyUDDistortionParameters");
  }
                    /* WARNING: Could not recover jumptable at 0x00014d6e1004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pUVar5,Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.
                    OuterSingleton,&this->_padding_,&this->BrownConradyUDParameters);
  return;
}

// StaticRegisterNativesUBrownConradyUDLensDistortionModelHandler @ 14d6f00b0

void __cdecl
UBrownConradyUDLensDistortionModelHandler::
StaticRegisterNativesUBrownConradyUDLensDistortionModelHandler(void)

{
  return;
}

// UpdateMaterialParameters @ 14d6f5340

void __thiscall
UBrownConradyUDLensDistortionModelHandler::UpdateMaterialParameters
          (UBrownConradyUDLensDistortionModelHandler *this)

{
  UBrownConradyUDLensDistortionModelHandler *local_res8 [4];
  
  local_res8[0] = this;
  `UBrownConradyUDLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::
  operator()(local_res8,(UMaterialInstanceDynamic *)this->_padding_);
  `UBrownConradyUDLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::
  operator()(local_res8,(UMaterialInstanceDynamic *)this->_padding_);
  return;
}

