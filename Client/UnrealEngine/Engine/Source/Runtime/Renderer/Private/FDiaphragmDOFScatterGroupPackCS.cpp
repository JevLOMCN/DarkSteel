// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ConstructCompiledInstance @ 14513d090

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
_anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::ConstructCompiledInstance
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

// ConstructSerializedInstance @ 14513de60

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

FShader * __cdecl _anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 145151630

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

FGlobalShaderType * __cdecl _anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::_TSS0) {
    _Init_thread_header(&`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::_TSS0);
    if (`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      if ((`FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] & 2) == 0)
      {
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._8_8_ =
             u_FDiaphragmDOFSc;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._32_8_ =
             Freeze::DefaultWriteMemoryImage;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x67] | 2;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._40_8_ =
             Freeze::DefaultUnfrozenCopy;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._48_8_ =
             Freeze::DefaultAppendHash;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._56_8_ =
             Freeze::DefaultGetTargetAlignment;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._64_8_ =
             Freeze::DefaultToString;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._24_8_ =
             InternalDestroy;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._72_8_ =
             TGetDefaultObjectHelper<`anonymous_namespace'::FDiaphragmDOFScatterGroupPackCS,0>::Do;
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer._0_8_ = u_BASE;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x58] = 0xe0;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x59] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5a] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5b] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x60] = '\b';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x61] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x62] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[99] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[100] = '\0';
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5c] = 0xff;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5d] = 0xff;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5e] = 0xff;
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x5f] = 0xff;
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x2a] = '\x04';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x65] + '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x10] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x10];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x11] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x11];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x12] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x12];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x13] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x13];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x14] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x14];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x15] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x15];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x16] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x16];
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x17] =
             `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x17];
        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer._16_8_ =
             `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
             FieldBuffer;
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x20] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x21] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x22] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x23] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x24] = '\x01';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x25] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x26] = '\0';
        `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
        FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)
            `InternalInitializeBaseHelper<FDiaphragmDOFScatterGroupPackCS,FGlobalShader>'::`2'::
            FieldBuffer._8_8_)->Interface != NonVirtual) {
          `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] =
               `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer[0x66] +
               '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer);
      }
      FShaderType::FShaderType
                ((FShaderType *)&`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::StaticType,
                 Global,(FTypeLayoutDesc *)
                        `FDiaphragmDOFScatterGroupPackCS::StaticGetTypeLayout'::`2'::TypeBuffer,
                 L"FDiaphragmDOFScatterGroupPackCS",
                 L"/Engine/Private/DiaphragmDOF/DOFHybridScatterCompilation.usf",
                 L"ScatterGroupPackMainCS",5,4,ConstructSerializedInstance,ConstructCompiledInstance
                 ,ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      `FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::StaticType._0_8_ =
           FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DiaphragmDOF/DOFHybridScatterCompilation.usf");
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
      atexit(``anonymous_namespace'::FDiaphragmDOFScatterGroupPackCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::_TSS0);
      return &`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::StaticType;
    }
  }
  return &`FDiaphragmDOFScatterGroupPackCS::GetStaticType'::`2'::StaticType;
}

// InternalDestroy @ 145159fe0

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
_anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutation @ 145160700

bool __cdecl
_anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x29e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsDOFHybridScattering != 0) {
    uVar2 = *(uint *)&param_1->field_0x4;
    uVar8 = (int)uVar2 / 2;
    iVar6 = (int)uVar2 % 2;
    if ((iVar6 != 0) && (iVar6 != 1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = uVar8 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar7 != 0) && (uVar7 != 1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((int)uVar8 / 2 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (3 < uVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((iVar6 == 1) || (uVar7 == 1)) {
      bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation(param_1);
      return bVar4;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 145161350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
_anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x29e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsDOFHybridScattering != 0) {
    uVar2 = param_1->PermutationId;
    uVar8 = (int)uVar2 / 2;
    iVar6 = (int)uVar2 % 2;
    if ((iVar6 != 0) && (iVar6 != 1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = uVar8 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar7 != 0) && (uVar7 != 1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((int)uVar8 / 2 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (1 < uVar8) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (3 < uVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((iVar6 == 1) || (uVar7 == 1)) {
      bVar4 = FDiaphragmDOFShader::ShouldCompilePermutation
                        ((FGlobalShaderPermutationParameters *)param_1);
      return bVar4;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 145161c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
_anon_85C081EE::FDiaphragmDOFScatterGroupPackCS::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

