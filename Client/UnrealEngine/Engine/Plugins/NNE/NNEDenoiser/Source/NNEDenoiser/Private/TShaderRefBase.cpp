// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 7

// GetComputeShader @ 14eaf8710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS,FShaderMapPointerTable>
                 *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FAutoExposureDownsampleCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS,FShaderMapPointerTable>
                 *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FAutoExposureReduceCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS,FShaderMapPointerTable>
                   *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FAutoExposureReduceFinalCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8a10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS,FShaderMapPointerTable>
                   *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FBufferTextureMappedCopyCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS,FShaderMapPointerTable>
                 *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FDefaultIOProcessCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8c10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS,FShaderMapPointerTable>
                   *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FTextureBufferMappedCopyCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14eaf8d10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

FRHIComputeShader * __thiscall
TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS,FShaderMapPointerTable>
                 *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FTransferFunctionOidnCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

