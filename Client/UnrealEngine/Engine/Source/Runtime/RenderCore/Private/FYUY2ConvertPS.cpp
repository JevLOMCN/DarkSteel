// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// ConstructCompiledInstance @ 145d17f20

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
FYUY2ConvertPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this,param_1);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145d1ac60

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

FShader * __cdecl FYUY2ConvertPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 145d3c960

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

FGlobalShaderType * __cdecl FYUY2ConvertPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FYUY2ConvertPS",
                 L"/Engine/Private/MediaShaders.usf",L"YUY2ConvertPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/MediaShaders.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FYUY2ConvertPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145d40f90

FTypeLayoutDesc * __thiscall FYUY2ConvertPS::GetTypeLayout(FYUY2ConvertPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FYUY2ConvertPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FYUY2ConvertPS,0>::Do;
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
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

// InternalDestroy @ 145d43f70

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
FYUY2ConvertPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// SetParameters @ 145d4e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FYUY2ConvertPS::SetParameters
          (FYUY2ConvertPS *this,FRHIBatchedShaderParameters *param_1,
          TRefCountPtr<FRHITexture> param_2,TIntPoint<int> *param_3,TMatrix<double> *param_4,
          TVector<double> *param_5,bool param_6,EToneMapMethod param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  FRHIUniformBuffer *this_00;
  FRHIUniformBufferLayout *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  longlong lVar11;
  FShaderParametersMetadata *pFVar12;
  TRefCountPtr<FRHIUniformBuffer> TVar13;
  FHashedName FVar14;
  FShaderUniformBufferParameter *pFVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined1 auStack_1f8 [32];
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FRHIResource *local_1c8;
  FHashedName local_1c0;
  FHashedName local_1b8 [2];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int local_e8;
  uint local_e4;
  float local_e0;
  float local_dc;
  longlong *local_d8;
  ForAnyElementType local_d0;
  FRHISamplerState *local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1a8 = param_4->M[0][0];
  dStack_1a0 = param_4->M[0][1];
  local_188 = param_4->M[1][0];
  dStack_180 = param_4->M[1][1];
  dVar7 = param_4->M[0][2];
  local_d8 = (longlong *)(param_2.Reference)->_padding_;
  local_178 = param_4->M[1][2];
  local_168 = param_4->M[2][0];
  dStack_160 = param_4->M[2][1];
  dVar8 = param_4->M[2][2];
  local_128 = (float)local_1a8;
  fStack_124 = (float)dStack_1a0;
  local_148 = param_4->M[3][0];
  dStack_140 = param_4->M[3][1];
  dVar9 = param_4->M[3][2];
  dVar1 = *(double *)&param_5->field0_0x0;
  dStack_170 = (param_5->field0_0x0)._s_0.Y;
  dVar2 = *(double *)((longlong)&param_5->field0_0x0 + 0x10);
  local_e8 = (param_3->field0_0x0)._s_0.X;
  fStack_120 = (float)dVar7;
  fStack_11c = (float)dVar1;
  local_d0.Data =
       (FScriptContainerElement *)
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_c8 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
  local_198._8_4_ = SUB84(dVar1,0);
  local_198._0_8_ = dVar7;
  local_198._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_118 = (float)local_188;
  fStack_114 = (float)dStack_180;
  local_e4 = (uint)param_6;
  fStack_110 = (float)local_178;
  fStack_10c = (float)dStack_170;
  fStack_100 = (float)dVar8;
  fStack_fc = (float)dVar2;
  local_108 = (float)local_168;
  fStack_104 = (float)dStack_160;
  local_f8 = (float)local_148;
  fStack_f4 = (float)dStack_140;
  fStack_f0 = (float)dVar9;
  fStack_ec = (float)__real_3ff0000000000000;
  local_158._8_4_ = SUB84(dVar2,0);
  local_158._0_8_ = dVar8;
  local_158._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_138._8_4_ = SUB84(__real_3ff0000000000000,0);
  local_138._0_8_ = dVar9;
  local_138._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  lVar11 = (**(code **)(*local_d8 + 0x20))();
  iVar3 = (param_3->field0_0x0)._s_0.Y;
  uVar4 = *(uint *)(lVar11 + 0x28);
  lVar11 = (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x20))();
  local_e0 = (__real_3f000000 / (float)*(uint *)(lVar11 + 0x24)) *
             (float)(param_3->field0_0x0)._s_0.X;
  local_dc = (float)iVar3 / (float)uVar4;
  pFVar12 = FYUY2ConvertUB::GetStructMetadata();
  pwVar17 = L"";
  if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1d8 = (FScriptContainerElement *)CONCAT44(local_1d8._4_4_,1);
  TVar13 = RHICreateUniformBuffer
                     (&local_1c8,(FRHIUniformBufferLayout *)&local_128,
                      (EUniformBufferUsage)(pFVar12->Layout).Reference,ValidateResources);
  this_00 = (FRHIUniformBuffer *)(TVar13.Reference)->_padding_;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar12 = FYUY2ConvertUB::GetStructMetadata();
    if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this_00->Layout).Reference;
    if ((pFVar12->Layout).Reference != pFVar5) {
      if ((pFVar5->Name).Data.ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data;
      }
      pFVar12 = FYUY2ConvertUB::GetStructMetadata();
      if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pFVar12->Layout).Reference;
      if ((pFVar5->Name).Data.ArrayNum != 0) {
        pwVar17 = (wchar_t *)(pFVar5->Name).Data.AllocatorInstance.Data;
      }
      local_1d8 = (FScriptContainerElement *)pwVar17;
      local_1d0 = (FScriptContainerElement *)pwVar16;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  if (local_1c8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1c8);
  }
  pFVar12 = FYUY2ConvertUB::GetStructMetadata();
  FHashedName::FHashedName(&local_1c0,&pFVar12->ShaderVariableHashedName);
  FVar14.Hash = (ulong64)FHashedName::FHashedName(local_1b8,&local_1c0);
  pFVar15 = FShader::GetUniformBufferParameter((FShader *)this,FVar14);
  if (pFVar15->BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,pFVar15,this_00);
  }
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  return;
}

// ShouldCompilePermutationImpl @ 145d4fee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FYUY2ConvertPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 145d50880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FYUY2ConvertPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145d5f290

FTypeLayoutDesc * __cdecl FYUY2ConvertPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FYUY2ConvertPS;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FYUY2ConvertPS,0>::Do;
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
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
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

