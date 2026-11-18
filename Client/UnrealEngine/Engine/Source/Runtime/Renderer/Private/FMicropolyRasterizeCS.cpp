// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144f8a070

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
FMicropolyRasterizeCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FMaterialShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              ((FShaderParameterBindings *)this,(FShader *)this,iVar1,pFVar2,pFVar3,false);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8cb60

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

FShader * __cdecl FMicropolyRasterizeCS::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0xf8);
  if (this != (FMaterialShader *)0x0) {
    memset(this,0,0xf8);
    FMaterialShader::FMaterialShader(this);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144fbc5f0

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

FMaterialShaderType * __cdecl FMicropolyRasterizeCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FMaterialShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Material,pFVar5,L"FMicropolyRasterizeCS",
                 L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"MicropolyRasterize",5,0x2000,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0xf8,pFVar4);
      ::StaticType._0_8_ = &___7FMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/Nanite/NaniteRasterizer.usf");
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0x7e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FMaterialShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FMicropolyRasterizeCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144fc5320

FTypeLayoutDesc * __thiscall FMicropolyRasterizeCS::GetTypeLayout(FMicropolyRasterizeCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FMicropolyRaste;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMicropolyRasterizeCS,0>::Do;
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

// InternalDestroy @ 144fcaee0

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
FMicropolyRasterizeCS::InternalDestroy
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

// ShouldCompilePermutation @ 144fe6250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMicropolyRasterizeCS::ShouldCompilePermutation(FMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  local_18;
  
  bVar4 = DoesPlatformSupportNanite((EShaderPlatform)param_1->_padding_,true);
  if (bVar4) {
    TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
    ::
    TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
              (&local_18,*(int *)((longlong)&param_1->_padding_ + 4));
    uVar1 = (ushort)param_1->_padding_;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x1fc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsUInt64ImageAtomics != 0) &&
       (((local_18.Tail.Tail.DimensionValue == false || (local_18.DimensionValue == false)) ||
        (local_18.Tail.Tail.Tail.DimensionValue != false)))) {
      uVar2 = (param_1->MaterialParameters)._padding_;
      if ((((((uVar2 & 1) != 0) || (local_18.Tail.DimensionValue == (bool)((byte)uVar2 >> 4 & 1)))
           && ((local_18.Tail.Tail.Tail.DimensionValue == false ||
               (local_18.DimensionValue != false)))) &&
          (bVar4 = FNaniteMaterialShader::ShouldCompileProgrammablePermutation
                             (&param_1->MaterialParameters,
                              local_18.Tail.Tail.Tail.Tail.Tail.DimensionValue,
                              local_18.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue,false), bVar4))
         && (((local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
              (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false)) ||
             ((((uVar2 & 1) != 0 || ((uVar2 >> 0x14 & 1) != 0)) &&
              ((local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false ||
               (local_18.Tail.Tail.Tail.Tail.Tail.DimensionValue != false)))))))) {
        if (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
          cVar7 = local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
          if (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
            bVar4 = NaniteSplineMeshesSupported();
            if (!bVar4) {
              return false;
            }
            if (((param_1->MaterialParameters)._padding_ & 0x200000001U) == 0) {
              return false;
            }
          }
        }
        else {
          bVar4 = NaniteVoxelsSupported();
          if (!bVar4) {
            return false;
          }
          if (((param_1->MaterialParameters)._padding_ & 1) == 0) {
            return false;
          }
          if (local_18.Tail.DimensionValue != false) {
            return false;
          }
          cVar7 = '\0';
          if (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
            return false;
          }
        }
        if ((((local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue ==
               false) ||
             (((bVar4 = NaniteSkinnedMeshesSupported(), bVar4 &&
               (((param_1->MaterialParameters)._padding_ & 0x400000001U) != 0)) && (cVar7 == '\0')))
             ) && ((local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                    DimensionValue == false ||
                   (((((param_1->MaterialParameters)._padding_ & 1) != 0 &&
                     (local_18.Tail.Tail.Tail.Tail.Tail.DimensionValue == false)) &&
                    ((local_18.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
                     ((local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
                      (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false)))))
                    ))))) &&
           ((plVar6 = &(param_1->MaterialParameters)._padding_,
            local_18.Tail.Tail.Tail.Tail.DimensionValue == false ||
            ((((param_1->MaterialParameters)._padding_ & 2) != 0 || ((*plVar6 & 1) != 0)))))) {
          uVar2 = *plVar6;
          bVar8 = (byte)*plVar6 & 1;
          if ((uVar2 >> 0x34 & 1) != 0) {
            if (((uVar2 & 0x800004) == 0) ||
               (((uVar2 >> 0x2f & 1) == 0 && ((int)(param_1->MaterialParameters)._padding_ < 1)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((((((uVar2 >> 0x16 & 1) != 0) || (bVar4)) || ((uVar2 & 0x100000) != 0)) ||
                ((((param_1->MaterialParameters)._padding_ & 2) != 0 ||
                 (((param_1->MaterialParameters)._padding_ & 0x4000000000000) != 0)))) ||
               ((uVar2 & 0x800004) != 0)) {
              bVar8 = 1;
            }
          }
          bVar4 = DoesPlatformSupportNanite((EShaderPlatform)param_1->_padding_,true);
          if (((bVar4) && ((int)(param_1->MaterialParameters)._padding_ == 0)) && (bVar8 != 0)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe9dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FMicropolyRasterizeCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EShaderPermutationFlags *pEVar6;
  char cVar7;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  TStack_18;
  
  bVar4 = DoesPlatformSupportNanite(param_1->Platform,true);
  if (bVar4) {
    TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
    ::
    TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
              (&TStack_18,param_1->PermutationId);
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x1fc,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsUInt64ImageAtomics != 0) &&
       (((TStack_18.Tail.Tail.DimensionValue == false || (TStack_18.DimensionValue == false)) ||
        (TStack_18.Tail.Tail.Tail.DimensionValue != false)))) {
      uVar2 = *(ulonglong *)&param_1[4].Flags;
      if ((((((uVar2 & 1) != 0) || (TStack_18.Tail.DimensionValue == (bool)((byte)uVar2 >> 4 & 1)))
           && ((TStack_18.Tail.Tail.Tail.DimensionValue == false ||
               (TStack_18.DimensionValue != false)))) &&
          (bVar4 = FNaniteMaterialShader::ShouldCompileProgrammablePermutation
                             ((FMaterialShaderParameters *)&param_1[1].PermutationId,
                              TStack_18.Tail.Tail.Tail.Tail.Tail.DimensionValue,
                              TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue,false), bVar4))
         && (((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
              (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false)) ||
             ((((uVar2 & 1) != 0 || ((uVar2 >> 0x14 & 1) != 0)) &&
              ((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false ||
               (TStack_18.Tail.Tail.Tail.Tail.Tail.DimensionValue != false)))))))) {
        if (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
          cVar7 = TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
          if (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
            bVar4 = NaniteSplineMeshesSupported();
            if (!bVar4) {
              return false;
            }
            if ((*(ulonglong *)&param_1[4].Flags & 0x200000001) == 0) {
              return false;
            }
          }
        }
        else {
          bVar4 = NaniteVoxelsSupported();
          if (!bVar4) {
            return false;
          }
          if ((param_1[4].Flags & HasEditorOnlyData) == None) {
            return false;
          }
          if (TStack_18.Tail.DimensionValue != false) {
            return false;
          }
          cVar7 = '\0';
          if (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
            return false;
          }
        }
        if ((((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue ==
               false) ||
             (((bVar4 = NaniteSkinnedMeshesSupported(), bVar4 &&
               ((*(ulonglong *)&param_1[4].Flags & 0x400000001) != 0)) && (cVar7 == '\0')))) &&
            ((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue
              == false ||
             ((((param_1[4].Flags & HasEditorOnlyData) != None &&
               (TStack_18.Tail.Tail.Tail.Tail.Tail.DimensionValue == false)) &&
              ((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
               ((TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false &&
                (TStack_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false))))))))))
           && ((pEVar6 = &param_1[4].Flags, TStack_18.Tail.Tail.Tail.Tail.DimensionValue == false ||
               (((param_1[5].PermutationId & 2) != 0 || ((*pEVar6 & HasEditorOnlyData) != None))))))
        {
          uVar2 = *(ulonglong *)pEVar6;
          uVar5 = (char)*pEVar6 & HasEditorOnlyData;
          if ((uVar2 >> 0x34 & 1) != 0) {
            if (((uVar2 & 0x800004) == 0) ||
               (((uVar2 >> 0x2f & 1) == 0 && (param_1[3].PermutationId < 1)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((((((uVar2 >> 0x16 & 1) != 0) || (bVar4)) || ((uVar2 & 0x100000) != 0)) ||
                (((param_1[5].PermutationId & 2) != 0 || ((param_1[1].Flags & 0x40000) != None))))
               || ((uVar2 & 0x800004) != 0)) {
              uVar5 = HasEditorOnlyData;
            }
          }
          bVar4 = DoesPlatformSupportNanite(param_1->Platform,true);
          if (((bVar4) && (param_1[1].PermutationId == 0)) && (uVar5 != None)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144feadf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FMicropolyRasterizeCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144ff3960

FTypeLayoutDesc * __cdecl FMicropolyRasterizeCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xf8;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FMicropolyRaste;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMicropolyRasterizeCS,0>::Do;
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

