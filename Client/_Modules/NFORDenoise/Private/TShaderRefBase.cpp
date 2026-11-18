// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 24

// GetComputeShader @ 14e9ef3d0

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
TShaderRefBase<NFORDenoise::FAccumulateBufferToTextureCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FAccumulateBufferToTextureCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FAccumulateBufferToTextureCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FAccumulateBufferToTextureCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef4d0

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
TShaderRefBase<NFORDenoise::FAdjustFeatureRangeCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FAdjustFeatureRangeCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FAdjustFeatureRangeCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FAdjustFeatureRangeCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef5d0

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
TShaderRefBase<NFORDenoise::FClassifyPreAlbedoDivideMaskIdCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<NFORDenoise::FClassifyPreAlbedoDivideMaskIdCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FClassifyPreAlbedoDivideMaskIdCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FClassifyPreAlbedoDivideMaskIdCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef6d0

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
TShaderRefBase<NFORDenoise::FCombineFilteredImageCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FCombineFilteredImageCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FCombineFilteredImageCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FCombineFilteredImageCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef7d0

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
TShaderRefBase<NFORDenoise::FCopyTextureSingleChannelCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FCopyTextureSingleChannelCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FCopyTextureSingleChannelCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FCopyTextureSingleChannelCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef8d0

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
TShaderRefBase<NFORDenoise::FCopyTextureToBufferCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FCopyTextureToBufferCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FCopyTextureToBufferCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FCopyTextureToBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9ef9d0

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
TShaderRefBase<NFORDenoise::FGenerateSelectionMapCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FGenerateSelectionMapCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FGenerateSelectionMapCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FGenerateSelectionMapCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9efad0

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
TShaderRefBase<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FInPlaceBatchedMatrixMultiplicationCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9efbd0

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
TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FLinearSolverBuildIndirectDispatchArgsCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9efcd0

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
TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FLinearSolverCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9efdd0

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
TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FLinearSolverIndirectCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9efed0

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
TShaderRefBase<NFORDenoise::FMSEEstimationCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FMSEEstimationCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FMSEEstimationCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FMSEEstimationCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9effd0

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
TShaderRefBase<NFORDenoise::FNonLocalMeanFilteringCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FNonLocalMeanFilteringCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FNonLocalMeanFilteringCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNonLocalMeanFilteringCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f00d0

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
TShaderRefBase<NFORDenoise::FNonLocalMeanGetSqauredDistanceToAtlasCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<NFORDenoise::FNonLocalMeanGetSqauredDistanceToAtlasCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FNonLocalMeanGetSqauredDistanceToAtlasCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNonLocalMeanGetSqauredDistanceToAtlasCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f01d0

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
TShaderRefBase<NFORDenoise::FNonLocalMeanReshapeBufferCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FNonLocalMeanReshapeBufferCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FNonLocalMeanReshapeBufferCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNonLocalMeanReshapeBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f02d0

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
TShaderRefBase<NFORDenoise::FNonLocalMeanSeperableFilterPatchSqauredDistanceCS,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<NFORDenoise::FNonLocalMeanSeperableFilterPatchSqauredDistanceCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FNonLocalMeanSeperableFilterPatchSqauredDistanceCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNonLocalMeanSeperableFilterPatchSqauredDistanceCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f03d0

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
TShaderRefBase<NFORDenoise::FNonLocalMeanWeightsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FNonLocalMeanWeightsCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FNonLocalMeanWeightsCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNonLocalMeanWeightsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f04d0

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
TShaderRefBase<NFORDenoise::FNormalizeRadianceVarianceByAlbedoCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<NFORDenoise::FNormalizeRadianceVarianceByAlbedoCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FNormalizeRadianceVarianceByAlbedoCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNormalizeRadianceVarianceByAlbedoCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f05d0

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
TShaderRefBase<NFORDenoise::FNormalizeTextureCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FNormalizeTextureCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FNormalizeTextureCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FNormalizeTextureCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f06d0

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
TShaderRefBase<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage,FShaderMapPointerTable>
::GetComputeShader(TShaderRefBase<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FReconstructSpatialTemporalImage *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f07d0

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
TShaderRefBase<NFORDenoise::FTextureAccumulateCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FTextureAccumulateCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FTextureAccumulateCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FTextureAccumulateCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f08d0

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
TShaderRefBase<NFORDenoise::FTextureAccumulateConstantCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FTextureAccumulateConstantCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FTextureAccumulateConstantCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FTextureAccumulateConstantCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f09d0

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
TShaderRefBase<NFORDenoise::FTextureDivideCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FTextureDivideCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FTextureDivideCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FTextureDivideCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14e9f0ad0

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
TShaderRefBase<NFORDenoise::FTextureMultiplyCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<NFORDenoise::FTextureMultiplyCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FTextureMultiplyCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NFORDenoise::FTextureMultiplyCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

