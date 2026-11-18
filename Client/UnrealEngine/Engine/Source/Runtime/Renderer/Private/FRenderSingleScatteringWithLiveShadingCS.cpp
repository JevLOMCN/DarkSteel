// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144a6e880

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
FRenderSingleScatteringWithLiveShadingCS<0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMeshMaterialShader *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x130);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    ((FShaderResourceParameter *)&this[1]._padding_)->BaseIndex = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0;
    pFVar1 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,param_1->PermutationId,
               param_1->ParameterMap,pFVar1,false);
    FRenderLightingCacheLooseBindings::Bind
              ((FRenderLightingCacheLooseBindings *)(this + 1),param_1->ParameterMap);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144a701e0

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

FShader * __cdecl FRenderSingleScatteringWithLiveShadingCS<0>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x130);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0x130);
    FMaterialShader::FMaterialShader(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144a82fc0

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

FMeshMaterialShaderType * __cdecl FRenderSingleScatteringWithLiveShadingCS<0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"FRenderSingleScatteringWithLiveShadingDirectCS",
                 L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingPipeline.usf"
                 ,L"RenderSingleScatteringWithLiveShadingCS",5,0x60,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x130,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,
                         L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingPipeline.usf"
                        );
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FRenderSingleScatteringWithLiveShadingCS<0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144a8da20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FRenderSingleScatteringWithLiveShadingCS<0>::GetTypeLayout
          (FRenderSingleScatteringWithLiveShadingCS<0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRenderSingleSc;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderSingleScatteringWithLiveShadingCS<0>,0>::Do
    ;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRenderSingleScatteringWithLiveShadingCS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderLooseBindings";
    DAT_1550ba15a = Freeze::FindFieldNameLength(L"ShaderLooseBindings");
    _DAT_1550ba138 = FRenderLightingCacheLooseBindings::StaticGetTypeLayout();
    DAT_1550ba140 = ::TypeBuffer[0x10];
    DAT_1550ba140_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550ba140_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550ba140_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550ba140_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550ba140_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550ba140_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550ba140_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderSingleScatteringWithLiveShadingCS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550ba148 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550ba150 = 0x108;
    _DAT_1550ba154 = 1;
    _DAT_1550ba158 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// InternalDestroy @ 144a9adb0

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
FRenderSingleScatteringWithLiveShadingCS<0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x130);
  return;
}

// ShouldCompilePermutation @ 144ab0450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRenderSingleScatteringWithLiveShadingCS<0>::ShouldCompilePermutation
          (FMaterialShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_28 [5];
  undefined1 auStack_23 [11];
  undefined1 auStack_13 [11];
  
  uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar9 = (int)uVar1 >> 0x1f & 3;
  uVar6 = uVar1 + uVar9;
  iVar7 = (uVar6 & 3) - uVar9;
  uVar6 = (int)uVar6 >> 2;
  if (((3 < iVar7) || (iVar7 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = uVar6 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar9 != 0) && (uVar9 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
  ::
  TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
            ((TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
              *)(auStack_13 + 3),(int)uVar6 / 2);
  if ((0x17 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((0x5f < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  auVar3[4] = uVar9 == 1;
  auVar3._0_4_ = iVar7;
  auVar3._5_11_ = auStack_13;
  unique0x100000dd = auVar3._4_10_;
  if (iVar7 == 3) {
    iVar8 = 3;
  }
  else {
    iVar8 = 2;
    auStack_23 = auStack_13;
    local_28 = (undefined1  [5])0x100000000;
  }
  if (((((iVar8 == iVar7) && (SUB101(stack0xffffffffffffffdc,0) == (uVar9 == 1))) &&
       (auStack_23._3_4_ == auStack_13._3_4_)) &&
      (((char)((unkuint10)stack0xffffffffffffffdc >> 0x40) == auStack_13[7] &&
       ((char)((unkuint10)stack0xffffffffffffffdc >> 0x48) == auStack_13[8])))) &&
     ((bVar4 = DoesPlatformSupportHeterogeneousVolumes((EShaderPlatform)param_1->_padding_), bVar4
      && (((int)(param_1->MaterialParameters)._padding_ == 3 &&
          (((param_1->MaterialParameters)._padding_ & 0x800000000000000U) != 0)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ShouldCompilePermutationImpl @ 144ab07d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FRenderSingleScatteringWithLiveShadingCS<0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_28 [5];
  undefined1 auStack_23 [11];
  undefined1 auStack_13 [11];
  
  uVar1 = param_1->PermutationId;
  uVar9 = (int)uVar1 >> 0x1f & 3;
  uVar6 = uVar1 + uVar9;
  iVar7 = (uVar6 & 3) - uVar9;
  uVar6 = (int)uVar6 >> 2;
  if (((3 < iVar7) || (iVar7 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = uVar6 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar9 != 0) && (uVar9 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
  ::
  TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
            ((TShaderPermutationDomain<FRenderSingleScatteringWithLiveShadingCS<0>::FAVSMSampleMode,FRenderSingleScatteringWithLiveShadingCS<0>::FSupportOverlappingVolumes,FRenderSingleScatteringWithLiveShadingCS<0>::FWriteVelocity>
              *)(auStack_13 + 3),(int)uVar6 / 2);
  if ((0x17 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((0x5f < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  auVar3[4] = uVar9 == 1;
  auVar3._0_4_ = iVar7;
  auVar3._5_11_ = auStack_13;
  unique0x100000dd = auVar3._4_10_;
  if (iVar7 == 3) {
    iVar8 = 3;
  }
  else {
    iVar8 = 2;
    auStack_23 = auStack_13;
    auStack_28 = (undefined1  [5])0x100000000;
  }
  if (((((iVar8 == iVar7) && (SUB101(stack0xffffffffffffffdc,0) == (uVar9 == 1))) &&
       (auStack_23._3_4_ == auStack_13._3_4_)) &&
      (((char)((unkuint10)stack0xffffffffffffffdc >> 0x40) == auStack_13[7] &&
       ((char)((unkuint10)stack0xffffffffffffffdc >> 0x48) == auStack_13[8])))) &&
     ((bVar4 = DoesPlatformSupportHeterogeneousVolumes(param_1->Platform), bVar4 &&
      ((param_1[1].PermutationId == 3 &&
       ((*(ulonglong *)&param_1[4].Flags & 0x800000000000000) != 0)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ShouldPrecachePermutationImpl @ 144ab1170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FRenderSingleScatteringWithLiveShadingCS<0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144ab1bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FRenderSingleScatteringWithLiveShadingCS<0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FRenderSingleSc;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FRenderSingleScatteringWithLiveShadingCS<0>,0>::Do
    ;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FRenderSingleScatteringWithLiveShadingCS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderLooseBindings";
    DAT_1550ba15a = Freeze::FindFieldNameLength(L"ShaderLooseBindings");
    _DAT_1550ba138 = FRenderLightingCacheLooseBindings::StaticGetTypeLayout();
    DAT_1550ba140 = ::TypeBuffer[0x10];
    DAT_1550ba140_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550ba140_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550ba140_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550ba140_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550ba140_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550ba140_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550ba140_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FRenderSingleScatteringWithLiveShadingCS<0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1550ba148 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550ba150 = 0x108;
    _DAT_1550ba154 = 1;
    _DAT_1550ba158 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

