// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 145869330

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FVolumetricFogLightFunctionPS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMaterialShader *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    pFVar1 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,param_1->PermutationId,
               param_1->ParameterMap,pFVar1,false);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145869ef0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FVolumetricFogLightFunctionPS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetParameters @ 145872880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FParameters * __thiscall
FVolumetricFogLightFunctionPS::GetParameters
          (FVolumetricFogLightFunctionPS *this,FParameters *__return_storage_ptr__,
          FSceneView *param_1,FLightSceneInfo *param_2,TVector2<double> *param_3,
          TMatrix<float> *param_4)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  FLightSceneProxy *pFVar5;
  double dVar6;
  double dVar7;
  TVector2<float>_u_0 TVar8;
  TVector4<float> *pTVar9;
  TVector<float> *pTVar10;
  undefined1 auStack_208 [32];
  TVector4<float>_u_0 local_1e8;
  double local_1d8;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  fVar1 = __real_3f800000;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  (__return_storage_ptr__->LightFunctionParameters).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(__return_storage_ptr__->LightFunctionParameters).field0_0x0 = 0;
  (__return_storage_ptr__->LightFunctionParameters).field0_0x0._s_0.Z = 0.0;
  pTVar9 = FLightFunctionSharedParameters::GetLightFunctionSharedParameters
                     ((TVector4<float> *)&local_1e8._s_0,param_2,fVar1);
  uVar2 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->LightFunctionParameters).field0_0x0 =
       *(undefined8 *)&pTVar9->field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->LightFunctionParameters).field0_0x0 + 8) =
       uVar2;
  fVar1 = param_2->Proxy->LightFunctionDisabledBrightness;
  (__return_storage_ptr__->LightFunctionParameters2).field0_0x0._s_0.X =
       param_2->Proxy->LightFunctionFadeDistance;
  (__return_storage_ptr__->LightFunctionParameters2).field0_0x0._s_0.Y = fVar1;
  (__return_storage_ptr__->LightFunctionParameters2).field0_0x0._s_0.Z = 0.0;
  dVar3 = __real_3ff0000000000000;
  pFVar5 = param_2->Proxy;
  local_1c8.M[0][1] = 0.0;
  local_1c8.M[1][0] = 0.0;
  local_1d8 = (pFVar5->LightFunctionScale).field0_0x0._s_0.Z;
  local_1c8.M[0][0] = __real_3ff0000000000000 / local_1d8;
  local_1c8.M[0][2] = 0.0;
  local_1c8.M[0][3] = 0.0;
  local_1c8.M[1][1] = __real_3ff0000000000000 / (pFVar5->LightFunctionScale).field0_0x0._s_0.Y;
  local_1c8.M[2][3] = 0.0;
  local_1c8.M[1][2] = 0.0;
  local_1c8.M[1][3] = 0.0;
  local_1c8.M[2][2] = __real_3ff0000000000000 / (pFVar5->LightFunctionScale).field0_0x0._s_0.X;
  local_1c8.M[2][0] = 0.0;
  local_1c8.M[2][1] = 0.0;
  local_1c8.M[3][0] = 0.0;
  local_1c8.M[3][1] = 0.0;
  local_1c8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1c8.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_c8,&pFVar5->WorldToLight,&local_1c8);
  local_148.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_148.M[1][1] = _UNK_15061cbc8;
  local_148.M[0][2] = 0.0;
  local_148.M[0][3] = 0.0;
  local_148.M[1][2] = 0.0;
  local_148.M[1][3] = 0.0;
  local_148.M[2][0] = 0.0;
  local_148.M[2][1] = 0.0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 + 0x10);
  local_148.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_148.M[0][1] = _UNK_150689518;
  local_148.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_148.M[2][3] = _UNK_150689518;
  local_148.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  local_148.M[3][3] = dVar3;
  local_148.M[3][0]._0_4_ =
       *(uint *)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 ^
       (uint)__xmm_80000000000000008000000000000000;
  local_148.M[3][0]._4_4_ =
       *(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 + 4) ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_148.M[3][1]._0_4_ =
       *(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 + 8) ^
       _UNK_15066df78;
  local_148.M[3][1]._4_4_ =
       *(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 + 0xc) ^
       _UNK_15066df7c;
  VectorMatrixMultiply(&local_1c8,&local_148,&local_c8);
  *(ulonglong *)(__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[0] =
       CONCAT44((float)local_1c8.M[0][1],(float)local_1c8.M[0][0]);
  *(ulonglong *)((__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[0] + 2) =
       CONCAT44((float)local_1c8.M[0][3],(float)local_1c8.M[0][2]);
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[1][0] = (float)local_1c8.M[1][0];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[1][1] = (float)local_1c8.M[1][1];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[1][2] = (float)local_1c8.M[1][2];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[1][3] = (float)local_1c8.M[1][3];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[2][0] = (float)local_1c8.M[2][0];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[2][1] = (float)local_1c8.M[2][1];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[2][2] = (float)local_1c8.M[2][2];
  (__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[2][3] = (float)local_1c8.M[2][3];
  *(ulonglong *)(__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[3] =
       CONCAT44((float)local_1c8.M[3][1],(float)local_1c8.M[3][0]);
  *(ulonglong *)((__return_storage_ptr__->LightFunctionTranslatedWorldToLight).M[3] + 2) =
       CONCAT44((float)local_1c8.M[3][3],(float)local_1c8.M[3][2]);
  local_1e8._s_0.X = (float)(param_3->field0_0x0)._s_0.X;
  local_1e8._s_0.Y = (float)(param_3->field0_0x0)._s_0.Y;
  TVar8._s_0.Y = local_1e8._s_0.Y;
  TVar8._s_0.X = local_1e8._s_0.X;
  (__return_storage_ptr__->LightFunctionTexelSize).field0_0x0 = TVar8;
  uVar2 = *(undefined8 *)(param_4->M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->ShadowToTranslatedWorld).M[0] =
       *(undefined8 *)param_4->M[0];
  *(undefined8 *)((__return_storage_ptr__->ShadowToTranslatedWorld).M[0] + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_4->M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->ShadowToTranslatedWorld).M[1] =
       *(undefined8 *)param_4->M[1];
  *(undefined8 *)((__return_storage_ptr__->ShadowToTranslatedWorld).M[1] + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_4->M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->ShadowToTranslatedWorld).M[2] =
       *(undefined8 *)param_4->M[2];
  *(undefined8 *)((__return_storage_ptr__->ShadowToTranslatedWorld).M[2] + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_4->M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->ShadowToTranslatedWorld).M[3] =
       *(undefined8 *)param_4->M[3];
  *(undefined8 *)((__return_storage_ptr__->ShadowToTranslatedWorld).M[3] + 2) = uVar2;
  pFVar5 = param_2->Proxy;
  dVar6 = (pFVar5->Position).field0_0x0._s_0.Y;
  dVar7 = (pFVar5->Position).field0_0x0._s_0.Z;
  dVar3 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar4 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LightTranslatedWorldPosition).field0_0x0._s_0.X =
       (float)((pFVar5->Position).field0_0x0._s_0.X +
              (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X);
  (__return_storage_ptr__->LightTranslatedWorldPosition).field0_0x0._s_0.Y = (float)(dVar6 + dVar4);
  (__return_storage_ptr__->LightTranslatedWorldPosition).field0_0x0._s_0.Z = (float)(dVar7 + dVar3);
  pTVar10 = GetCamRelativeLightPosition
                      ((TVector<float> *)&local_1e8._s_0,&param_1->ViewMatrices,param_2);
  *(undefined8 *)&(__return_storage_ptr__->CameraRelativeLightPosition).field0_0x0 =
       *(undefined8 *)&pTVar10->field0_0x0;
  (__return_storage_ptr__->CameraRelativeLightPosition).field0_0x0._s_0.Z =
       (pTVar10->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetStaticType @ 145876fc0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialShaderType * __cdecl FVolumetricFogLightFunctionPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Material,pFVar4,L"FVolumetricFogLightFunctionPS",
                 L"/Engine/Private/VolumetricFogLightFunction.usf",L"Main",3,4,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/VolumetricFogLightFunction.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FVolumetricFogLightFunctionPS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14587a090

FTypeLayoutDesc * __thiscall
FVolumetricFogLightFunctionPS::GetTypeLayout(FVolumetricFogLightFunctionPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FVolumetricFogL;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FVolumetricFogLightFunctionPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 14587e890

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FVolumetricFogLightFunctionPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf8);
  return;
}

// ShouldCompilePermutationImpl @ 14588b340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FVolumetricFogLightFunctionPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return param_1[1].PermutationId == 2;
}

// ShouldPrecachePermutationImpl @ 14588b9b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FVolumetricFogLightFunctionPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 14588e750

FTypeLayoutDesc * __cdecl FVolumetricFogLightFunctionPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FVolumetricFogL;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FVolumetricFogLightFunctionPS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

