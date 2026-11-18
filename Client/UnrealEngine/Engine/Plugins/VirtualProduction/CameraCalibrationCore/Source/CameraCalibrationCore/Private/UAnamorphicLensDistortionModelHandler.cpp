// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 16

// StaticClass @ 14d678ea0

UClass * __cdecl UAnamorphicLensDistortionModelHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"AnamorphicLensDistortionModelHandler",
               &Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUAnamorphicLensDistortionModelHandler,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnamorphicLensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UAnamorphicLensDistortionModelHandler>,local_res8,
               ULensDistortionModelHandlerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton;
}

// UAnamorphicLensDistortionModelHandler @ 14d6a9980

UAnamorphicLensDistortionModelHandler * __thiscall
UAnamorphicLensDistortionModelHandler::UAnamorphicLensDistortionModelHandler
          (UAnamorphicLensDistortionModelHandler *this,FVTableHelper *param_1)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAnamorphicLensDistortionModelHandler__6B_;
  (this->AnamorphicParameters).CX04 = 0.0;
  (this->AnamorphicParameters).CX22 = 0.0;
  (this->AnamorphicParameters).CX24 = 0.0;
  (this->AnamorphicParameters).CX44 = 0.0;
  (this->AnamorphicParameters).CY02 = 0.0;
  (this->AnamorphicParameters).CY04 = 0.0;
  (this->AnamorphicParameters).CY22 = 0.0;
  (this->AnamorphicParameters).CY24 = 0.0;
  (this->AnamorphicParameters).CY44 = 0.0;
  (this->AnamorphicParameters).PixelAspect = 1.0;
  (this->AnamorphicParameters).CX02 = 0.0;
  (this->AnamorphicParameters).SqueezeX = 1.0;
  (this->AnamorphicParameters).SqueezeY = 1.0;
  (this->AnamorphicParameters).LensRotation = 0.0;
  return this;
}

// UAnamorphicLensDistortionModelHandler @ 14d6a99f0

UAnamorphicLensDistortionModelHandler * __thiscall
UAnamorphicLensDistortionModelHandler::UAnamorphicLensDistortionModelHandler
          (UAnamorphicLensDistortionModelHandler *this)

{
  ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase
            ((ULensDistortionModelHandlerBase *)this);
  this->_padding_ = (longlong)&___7UAnamorphicLensDistortionModelHandler__6B_;
  (this->AnamorphicParameters).CX04 = 0.0;
  (this->AnamorphicParameters).CX22 = 0.0;
  (this->AnamorphicParameters).CX24 = 0.0;
  (this->AnamorphicParameters).CX44 = 0.0;
  (this->AnamorphicParameters).CY02 = 0.0;
  (this->AnamorphicParameters).CY04 = 0.0;
  (this->AnamorphicParameters).CY22 = 0.0;
  (this->AnamorphicParameters).CY24 = 0.0;
  (this->AnamorphicParameters).CY44 = 0.0;
  (this->AnamorphicParameters).PixelAspect = 1.0;
  (this->AnamorphicParameters).CX02 = 0.0;
  (this->AnamorphicParameters).SqueezeX = 1.0;
  (this->AnamorphicParameters).SqueezeY = 1.0;
  (this->AnamorphicParameters).LensRotation = 0.0;
  return this;
}

// ~UAnamorphicLensDistortionModelHandler @ 14d6ac9e0

void __thiscall
UAnamorphicLensDistortionModelHandler::~UAnamorphicLensDistortionModelHandler
          (UAnamorphicLensDistortionModelHandler *this)

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

// operator() @ 14d6b15e0

void __thiscall
`UAnamorphicLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::operator()
          (void *this,UMaterialInstanceDynamic *param_1)

{
  float fVar1;
  float fVar2;
  FName *pFVar3;
  FName local_res8;
  
  fVar1 = *(float *)(*(longlong *)this + 0xd0);
  pFVar3 = ::FName::FName(&local_res8,"pixel_aspect");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xd0);
  fVar2 = *(float *)(*(longlong *)this + 0x68);
  pFVar3 = ::FName::FName(&local_res8,"w_fb");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1 * fVar2);
  fVar1 = *(float *)(*(longlong *)this + 0x6c);
  pFVar3 = ::FName::FName(&local_res8,"h_fb");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xd4);
  pFVar3 = ::FName::FName(&local_res8,"cx02");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xd8);
  pFVar3 = ::FName::FName(&local_res8,"cx04");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xdc);
  pFVar3 = ::FName::FName(&local_res8,"cx22");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe0);
  pFVar3 = ::FName::FName(&local_res8,"cx24");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe4);
  pFVar3 = ::FName::FName(&local_res8,"cx44");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xe8);
  pFVar3 = ::FName::FName(&local_res8,"cy02");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xec);
  pFVar3 = ::FName::FName(&local_res8,"cy04");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xf0);
  pFVar3 = ::FName::FName(&local_res8,"cy22");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xf4);
  pFVar3 = ::FName::FName(&local_res8,"cy24");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xf8);
  pFVar3 = ::FName::FName(&local_res8,"cy44");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0xfc);
  pFVar3 = ::FName::FName(&local_res8,"sx");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0x100);
  pFVar3 = ::FName::FName(&local_res8,"sy");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  fVar1 = *(float *)(*(longlong *)this + 0x104);
  pFVar3 = ::FName::FName(&local_res8,"phi_mnt");
  UMaterialInstanceDynamic::SetScalarParameterValue(param_1,*pFVar3,fVar1);
  return;
}

// ComputeDistortedUV @ 14d6bb050

TVector2<double> * __thiscall
UAnamorphicLensDistortionModelHandler::ComputeDistortedUV
          (UAnamorphicLensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  uint uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar17 [16];
  
  dVar8 = __real_3fe0000000000000;
  fVar1 = (this->AnamorphicParameters).PixelAspect;
  dVar6 = (double)(fVar1 * *(float *)&this->_padding_);
  dVar5 = (double)*(float *)((longlong)&this->_padding_ + 4);
  uVar10 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar11,uVar10) < __real_3e45798ee2308c3a ||
        (double)CONCAT44(uVar11,uVar10) == __real_3e45798ee2308c3a) ||
      (uVar10 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar11 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar11,uVar10) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar11,uVar10) == __real_3e45798ee2308c3a)) ||
     ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  }
  else {
    auVar17._0_8_ = dVar6 * dVar6 + dVar5 * dVar5;
    auVar17._8_8_ = 0;
    auVar17 = sqrtpd(unaff_XMM15,auVar17);
    dVar16 = auVar17._0_8_ * __real_3fe0000000000000;
    __libm_sse2_sincos_();
    dVar7 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    lVar9 = 10;
    dVar14 = (__real_3ff0000000000000 / dVar16) * dVar5 * ((param_1->field0_0x0)._s_0.Y - dVar8);
    dVar13 = (__real_3ff0000000000000 / dVar16) * dVar6 * ((param_1->field0_0x0)._s_0.X - dVar8);
    dVar15 = dVar7 * dVar14 - (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar13;
    dVar12 = (dVar7 * dVar13 + (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar14) /
             (double)fVar1;
    dVar13 = dVar15;
    dVar14 = dVar12;
    do {
      dVar4 = dVar13 * dVar13 + dVar14 * dVar14;
      dVar3 = dVar4 * dVar4;
      dVar13 = FGenericPlatformMath::Atan2(dVar13,dVar14);
      dVar2 = cos(dVar13 * __real_4010000000000000);
      dVar13 = cos(dVar13 + dVar13);
      dVar14 = dVar12 / ((((double)(this->AnamorphicParameters).CX24 * dVar3 +
                          (double)(this->AnamorphicParameters).CX22 * dVar4) * dVar13 +
                          (double)(this->AnamorphicParameters).CX44 * dVar3 * dVar2 +
                          (double)(this->AnamorphicParameters).CX04 * dVar3 +
                         (double)(this->AnamorphicParameters).CX02 * dVar4 + __real_3ff0000000000000
                         ) * (double)(this->AnamorphicParameters).SqueezeX);
      dVar13 = dVar15 / ((((double)(this->AnamorphicParameters).CY24 * dVar3 +
                          (double)(this->AnamorphicParameters).CY22 * dVar4) * dVar13 +
                          (double)(this->AnamorphicParameters).CY44 * dVar3 * dVar2 +
                          (double)(this->AnamorphicParameters).CY04 * dVar3 +
                         (double)(this->AnamorphicParameters).CY02 * dVar4 + __real_3ff0000000000000
                         ) * (double)(this->AnamorphicParameters).SqueezeY);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((dVar14 * dVar7 - dVar13 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)) *
          (double)(this->AnamorphicParameters).PixelAspect * dVar16) / dVar6 + dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((dVar14 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) + dVar13 * dVar7) * dVar16)
         / dVar5 + dVar8;
  }
  return __return_storage_ptr__;
}

// ComputeUndistortedUV @ 14d6bc430

TVector2<double> * __thiscall
UAnamorphicLensDistortionModelHandler::ComputeUndistortedUV
          (UAnamorphicLensDistortionModelHandler *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  uint uVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar14 [16];
  
  dVar10 = __real_3fe0000000000000;
  fVar1 = (this->AnamorphicParameters).PixelAspect;
  dVar3 = (double)(fVar1 * *(float *)&this->_padding_);
  dVar11 = (double)*(float *)((longlong)&this->_padding_ + 4);
  uVar7 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar8,uVar7) < __real_3e45798ee2308c3a ||
        (double)CONCAT44(uVar8,uVar7) == __real_3e45798ee2308c3a) ||
      (uVar7 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar8 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar8,uVar7) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar8,uVar7) == __real_3e45798ee2308c3a)) ||
     ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    dVar11 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
  }
  else {
    auVar14._0_8_ = dVar3 * dVar3 + dVar11 * dVar11;
    auVar14._8_8_ = 0;
    auVar14 = sqrtpd(unaff_XMM15,auVar14);
    dVar13 = auVar14._0_8_ * __real_3fe0000000000000;
    __libm_sse2_sincos_();
    dVar6 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dVar9 = (__real_3ff0000000000000 / dVar13) * dVar11 * ((param_1->field0_0x0)._s_0.Y - dVar10);
    dVar10 = ((__real_3ff0000000000000 / dVar13) * dVar3 * ((param_1->field0_0x0)._s_0.X - dVar10))
             / (double)fVar1;
    dVar12 = dVar6 * dVar10 + (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar9;
    dVar5 = dVar6 * dVar9 - (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar10;
    dVar4 = dVar5 * dVar5 + dVar12 * dVar12;
    dVar2 = dVar4 * dVar4;
    dVar10 = FGenericPlatformMath::Atan2(dVar5,dVar12);
    dVar9 = cos(dVar10 * __real_4010000000000000);
    dVar10 = cos(dVar10 + dVar10);
    dVar12 = (((double)(this->AnamorphicParameters).CX22 * dVar4 +
              (double)(this->AnamorphicParameters).CX24 * dVar2) * dVar10 +
              (double)(this->AnamorphicParameters).CX44 * dVar2 * dVar9 +
              (double)(this->AnamorphicParameters).CX04 * dVar2 +
             (double)(this->AnamorphicParameters).CX02 * dVar4 + __real_3ff0000000000000) *
             (double)(this->AnamorphicParameters).PixelAspect *
             (double)(this->AnamorphicParameters).SqueezeX * dVar12;
    dVar10 = (((double)(this->AnamorphicParameters).CY22 * dVar4 +
              (double)(this->AnamorphicParameters).CY24 * dVar2) * dVar10 +
              (double)(this->AnamorphicParameters).CY44 * dVar2 * dVar9 +
              (double)(this->AnamorphicParameters).CY04 * dVar2 +
             (double)(this->AnamorphicParameters).CY02 * dVar4 + __real_3ff0000000000000) * dVar5 *
             (double)(this->AnamorphicParameters).SqueezeY;
    dVar11 = ((dVar10 * dVar6 + (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar12) *
             dVar13) / dVar11 + __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((dVar6 * dVar12 - dVar10 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)) * dVar13)
         / dVar3 + __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
  }
  return __return_storage_ptr__;
}

// ExecuteDistortionShader @ 14d6c7380

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
UAnamorphicLensDistortionModelHandler::ExecuteDistortionShader
          (UAnamorphicLensDistortionModelHandler *this,FRDGBuilder *param_1,
          FLensDistortionState *param_2,float param_3,float param_4,TVector2<double> *param_5,
          FRDGTexture **param_6)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FRDGTextureUAV *pFVar9;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar10;
  FName this_01;
  FRDGEventName *pFVar11;
  FShaderParametersMetadata *pFVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 *local_d8;
  float local_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  TIntVector3<int>_u_0 local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [8];
  FString local_80;
  TShaderRefBase<FAnamorphicDistortionCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58 [2];
  
  puVar14 = (undefined8 *)0x0;
  local_b0 = *(undefined8 *)&((*param_6)->Desc).field_0x24;
  iVar13 = (int)local_b0;
  if ((iVar13 < 1) || ((int)((ulonglong)local_b0 >> 0x20) < 1)) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore)
      ;
    }
  }
  else {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x80,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      puVar8[4] = 0;
      *puVar8 = &___7__TObject_VFParameters_FAnamorphicDistortionCS___FRDGAllocator__6B_;
      puVar14 = puVar8;
    }
    local_d8 = puVar14;
    if ((((undefined8 **)param_1->_padding_ <= &local_d8) &&
        (&local_d8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_d8;
    pFVar9 = FRDGBuilder::CreateUAV(param_1,*param_6,None,PF_Unknown);
    fVar2 = __real_3f800000;
    iVar7 = local_b0._4_4_;
    puVar14[4] = pFVar9;
    *(float *)(puVar14 + 3) = param_3;
    TVar5._s_0.Y = fVar2 / (float)local_b0._4_4_;
    TVar5._s_0.X = fVar2 / (float)iVar13;
    (((FParameters *)(puVar14 + 2))->ThreadIdToUV).field0_0x0 = TVar5;
    *(float *)((longlong)puVar14 + 0x1c) = param_4;
    if ((param_2->DistortionInfo).Parameters.ArrayNum == 0xe) {
      fVar2 = *(float *)(param_2->DistortionInfo).Parameters.AllocatorInstance.Data;
      fStack_cc = (float)(param_5->field0_0x0)._s_0.Y;
      local_d0 = (float)((double)fVar2 * (param_5->field0_0x0)._s_0.X);
      puVar14[7] = CONCAT44(fStack_cc,local_d0);
      *(float *)(puVar14 + 6) = fVar2;
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((longlong)puVar14 + 0x4c) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 4);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(puVar14 + 10) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 8);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((longlong)puVar14 + 0x54) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0xc);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 5) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(puVar14 + 0xb) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x10);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((longlong)puVar14 + 0x5c) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x14);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(puVar14 + 0xc) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x18);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((longlong)puVar14 + 100) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x1c);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(puVar14 + 0xd) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x20);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((longlong)puVar14 + 0x6c) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x24);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 0xb) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(puVar14 + 0xe) =
           *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x28);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 0xd) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x30);
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 0xc) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c8 = *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x2c)
      ;
      puVar14[8] = CONCAT44(uVar15,local_c8);
      uStack_c4 = uVar15;
      if (((param_2->DistortionInfo).Parameters.ArrayNum < 0xe) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = *(undefined4 *)((param_2->DistortionInfo).Parameters.AllocatorInstance.Data + 0x34);
    }
    else {
      if (2 < (byte)LogCameraCalibrationCore._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
      }
      local_b8 = 0x3f800000;
      uStack_b4 = 0x3f800000;
      dVar3 = (param_5->field0_0x0)._s_0.Y;
      local_c0 = (float)(param_5->field0_0x0)._s_0.X;
      *(undefined4 *)(puVar14 + 6) = 0x3f800000;
      *(undefined8 *)((longlong)puVar14 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x54) = 0;
      *(undefined8 *)((longlong)puVar14 + 0x5c) = 0;
      *(undefined8 *)((longlong)puVar14 + 100) = 0;
      fStack_bc = (float)dVar3;
      *(undefined8 *)((longlong)puVar14 + 0x6c) = 0;
      uVar15 = 0;
      puVar14[7] = CONCAT44(fStack_bc,local_c0);
      puVar14[8] = 0x3f8000003f800000;
    }
    *(undefined4 *)(puVar14 + 9) = uVar15;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar10 = (FShaderType *)FAnamorphicDistortionCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_98,pFVar10,0);
    if (local_98.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
      ::FName::ToString((FName *)this_01,&local_80);
      FAnamorphicDistortionCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FAnamorphicDistortionCS::GetStaticType();
    local_68.ShaderContent = (FAnamorphicDistortionCS *)local_98.ShaderContent;
    local_68.ShaderMap = local_98.ShaderMap;
    pFVar11 = FRDGEventName::FRDGEventName(local_58,1,L"AnamorphicDistortionDisplacementMap");
    pFVar12 = FAnamorphicDistortionCS::FParameters::FTypeInfo::GetStructMetadata();
    local_a8._s_0.Z = 1;
    local_a8._s_0.X = (int)(iVar13 + 7 + (iVar13 + 7 >> 0x1f & 7U)) >> 3;
    local_a8._s_0.Y = (int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3;
    FComputeShaderUtils::AddPass<FAnamorphicDistortionCS>
              (param_1,pFVar11,Compute,&local_68,pFVar12,(FParameters *)(puVar14 + 2),
               (TIntVector3<int> *)&local_a8._s_0);
    if (local_58[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_58[0].FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDistortionShaderPath @ 14d6d3a20

FString * __thiscall
UAnamorphicLensDistortionModelHandler::GetDistortionShaderPath
          (UAnamorphicLensDistortionModelHandler *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"/Plugin/CameraCalibrationCore/Private/AnamorphicDistortion.usf");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d6d7b00

UClass * __cdecl UAnamorphicLensDistortionModelHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"AnamorphicLensDistortionModelHandler",
               &Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton,
               StaticRegisterNativesUAnamorphicLensDistortionModelHandler,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnamorphicLensDistortionModelHandler>,
               InternalVTableHelperCtorCaller<UAnamorphicLensDistortionModelHandler>,local_res8,
               ULensDistortionModelHandlerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.InnerSingleton;
}

// InitDistortionMaterials @ 14d6ddca0

void __thiscall
UAnamorphicLensDistortionModelHandler::InitDistortionMaterials
          (UAnamorphicLensDistortionModelHandler *this)

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

// InitializeHandler @ 14d6deb50

void __thiscall
UAnamorphicLensDistortionModelHandler::InitializeHandler
          (UAnamorphicLensDistortionModelHandler *this)

{
  UClass *pUVar1;
  
  pUVar1 = UAnamorphicLensModel::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  return;
}

// InterpretDistortionParameters @ 14d6e0e90

void __thiscall
UAnamorphicLensDistortionModelHandler::InterpretDistortionParameters
          (UAnamorphicLensDistortionModelHandler *this)

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
        goto LAB_14d6e0ee1;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d6e0ee1:
  pUVar5 = UClass::GetDefaultObject<ULensModel>(pUVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar5 + 0x2d8);
  if (Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters,(UObject *)pUVar6
                         ,L"AnamorphicDistortionParameters");
  }
                    /* WARNING: Could not recover jumptable at 0x00014d6e0f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pUVar5,Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton
             ,&this->_padding_,&this->AnamorphicParameters);
  return;
}

// IsForwardDistorting @ 14d6e1b60

bool __thiscall
UAnamorphicLensDistortionModelHandler::IsForwardDistorting
          (UAnamorphicLensDistortionModelHandler *this)

{
  return false;
}

// StaticRegisterNativesUAnamorphicLensDistortionModelHandler @ 14d6f0070

void __cdecl
UAnamorphicLensDistortionModelHandler::StaticRegisterNativesUAnamorphicLensDistortionModelHandler
          (void)

{
  return;
}

// UpdateMaterialParameters @ 14d6f5300

void __thiscall
UAnamorphicLensDistortionModelHandler::UpdateMaterialParameters
          (UAnamorphicLensDistortionModelHandler *this)

{
  UAnamorphicLensDistortionModelHandler *local_res8 [4];
  
  local_res8[0] = this;
  `UAnamorphicLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::operator()
            (local_res8,(UMaterialInstanceDynamic *)this->_padding_);
  `UAnamorphicLensDistortionModelHandler::UpdateMaterialParameters'::__l2::<lambda_1>::operator()
            (local_res8,(UMaterialInstanceDynamic *)this->_padding_);
  return;
}

