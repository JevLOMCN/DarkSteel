// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 1456fb220

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
FStochasticLightingTileClassificationMarkCS::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1456fbc40

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

FShader * __cdecl FStochasticLightingTileClassificationMarkCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 14570be80

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

FGlobalShaderType * __cdecl FStochasticLightingTileClassificationMarkCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,
                 L"FStochasticLightingTileClassificationMarkCS",
                 L"/Engine/Private/StochasticLighting/StochasticLightingTileClassification.usf",
                 L"StochasticLightingTileClassificationMarkCS",5,0xc00,ConstructSerializedInstance,
                 ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,
                         L"/Engine/Private/StochasticLighting/StochasticLightingTileClassification.usf"
                        );
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
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
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FStochasticLightingTileClassificationMarkCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 145710440

FTypeLayoutDesc * __thiscall
FStochasticLightingTileClassificationMarkCS::GetTypeLayout
          (FStochasticLightingTileClassificationMarkCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FStochasticLigh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStochasticLightingTileClassificationMarkCS,0>::Do
    ;
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

// InternalDestroy @ 145717310

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
FStochasticLightingTileClassificationMarkCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 145721de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FStochasticLightingTileClassificationMarkCS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  EMaterialSource EVar12;
  char cVar13;
  char cVar14;
  undefined8 local_68;
  uint local_38;
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
  TStack_34;
  
  uVar2 = *(uint *)&param_1->field_0x4;
  iVar8 = (int)uVar2 % 2;
  if (((iVar8 != 0) && (iVar8 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_38 = (uint)(iVar8 == 1);
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
  ::
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
            (&TStack_34,(int)uVar2 / 2);
  if ((0xbff < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  cVar13 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  EVar12 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar6 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar10 = TStack_34.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar7 = TStack_34.Tail.Tail.Tail.Tail.DimensionValue;
  cVar9 = TStack_34.Tail.Tail.Tail.DimensionValue;
  cVar11 = TStack_34.Tail.Tail.DimensionValue;
  cVar14 = TStack_34.Tail.DimensionValue;
  local_68 = CONCAT44(TStack_34.DimensionValue,local_38);
  EVar1 = *(EShaderPlatform *)param_1;
  bVar4 = Substrate::IsSubstrateEnabled();
  if (bVar4) {
    bVar4 = Substrate::IsSubstrateBlendableGBufferEnabled(EVar1);
    if (!bVar4) {
      cVar9 = '\0';
    }
  }
  else {
    cVar13 = '\0';
    cVar9 = '\0';
  }
  if (TStack_34.DimensionValue == Both) {
    EVar12 = GBuffer;
  }
  if (EVar12 == GBuffer) {
    if (cVar13 != '\0') {
      cVar11 = '\0';
      local_68 = 0;
    }
LAB_145721f33:
    if ((bool)cVar14 != false) goto LAB_145721f3f;
  }
  else {
    cVar13 = '\0';
    if (EVar12 != HairStrands) {
      cVar11 = '\0';
      cVar7 = '\0';
      local_68 = 0;
      goto LAB_145721f33;
    }
    cVar14 = '\0';
  }
  cVar7 = '\0';
LAB_145721f3f:
  if (cVar11 == '\0') {
    cVar10 = '\0';
  }
  if (cVar7 == '\0') {
    cVar6 = '\0';
  }
  if (((((local_68._0_1_ == (iVar8 == 1)) &&
        ((EStochasticSampleOffset)((ulonglong)local_68 >> 0x20) == TStack_34.DimensionValue)) &&
       (((bool)cVar14 == TStack_34.Tail.DimensionValue &&
        (((((bool)cVar11 == TStack_34.Tail.Tail.DimensionValue &&
           ((bool)cVar9 == TStack_34.Tail.Tail.Tail.DimensionValue)) &&
          ((bool)cVar7 == TStack_34.Tail.Tail.Tail.Tail.DimensionValue)) &&
         (((bool)cVar10 == TStack_34.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
          ((bool)cVar6 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))))))) &&
      (EVar12 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)) &&
     (((bool)cVar13 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
      ((bVar4 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false), bVar4 ||
       (bVar4 = MegaLights::ShouldCompileShaders(*(EShaderPlatform *)param_1), bVar4)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ShouldCompilePermutationImpl @ 145722510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FStochasticLightingTileClassificationMarkCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  EMaterialSource EVar12;
  char cVar13;
  char cVar14;
  undefined8 uStack_68;
  uint uStack_38;
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
  TStack_34;
  
  uVar2 = param_1->PermutationId;
  iVar8 = (int)uVar2 % 2;
  if (((iVar8 != 0) && (iVar8 != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uStack_38 = (uint)(iVar8 == 1);
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
  ::
  TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
            (&TStack_34,(int)uVar2 / 2);
  if ((0xbff < uVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  cVar13 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  EVar12 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar6 = TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar10 = TStack_34.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  cVar7 = TStack_34.Tail.Tail.Tail.Tail.DimensionValue;
  cVar9 = TStack_34.Tail.Tail.Tail.DimensionValue;
  cVar11 = TStack_34.Tail.Tail.DimensionValue;
  cVar14 = TStack_34.Tail.DimensionValue;
  uStack_68 = CONCAT44(TStack_34.DimensionValue,uStack_38);
  EVar1 = param_1->Platform;
  bVar4 = Substrate::IsSubstrateEnabled();
  if (bVar4) {
    bVar4 = Substrate::IsSubstrateBlendableGBufferEnabled(EVar1);
    if (!bVar4) {
      cVar9 = '\0';
    }
  }
  else {
    cVar13 = '\0';
    cVar9 = '\0';
  }
  if (TStack_34.DimensionValue == Both) {
    EVar12 = GBuffer;
  }
  if (EVar12 == GBuffer) {
    if (cVar13 != '\0') {
      cVar11 = '\0';
      uStack_68 = 0;
    }
LAB_145721f33:
    if ((bool)cVar14 != false) goto LAB_145721f3f;
  }
  else {
    cVar13 = '\0';
    if (EVar12 != HairStrands) {
      cVar11 = '\0';
      cVar7 = '\0';
      uStack_68 = 0;
      goto LAB_145721f33;
    }
    cVar14 = '\0';
  }
  cVar7 = '\0';
LAB_145721f3f:
  if (cVar11 == '\0') {
    cVar10 = '\0';
  }
  if (cVar7 == '\0') {
    cVar6 = '\0';
  }
  if (((((uStack_68._0_1_ == (iVar8 == 1)) &&
        ((EStochasticSampleOffset)((ulonglong)uStack_68 >> 0x20) == TStack_34.DimensionValue)) &&
       (((bool)cVar14 == TStack_34.Tail.DimensionValue &&
        (((((bool)cVar11 == TStack_34.Tail.Tail.DimensionValue &&
           ((bool)cVar9 == TStack_34.Tail.Tail.Tail.DimensionValue)) &&
          ((bool)cVar7 == TStack_34.Tail.Tail.Tail.Tail.DimensionValue)) &&
         (((bool)cVar10 == TStack_34.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
          ((bool)cVar6 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))))))) &&
      (EVar12 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)) &&
     (((bool)cVar13 == TStack_34.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
      ((bVar4 = DoesPlatformSupportLumenGI(param_1->Platform,false), bVar4 ||
       (bVar4 = MegaLights::ShouldCompileShaders(param_1->Platform), bVar4)))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// ShouldPrecachePermutationImpl @ 145722ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FStochasticLightingTileClassificationMarkCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 145723a70

FTypeLayoutDesc * __cdecl FStochasticLightingTileClassificationMarkCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FStochasticLigh;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStochasticLightingTileClassificationMarkCS,0>::Do
    ;
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

