// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 53

// GetPixelShader @ 1476b2a60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementMaskedGammaPS<1> *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementMaskedGammaPS<1> *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b2b60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementMaskedGammaPS<0> *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementMaskedGammaPS<0> *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b2c60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementAlphaOnlyPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementAlphaOnlyPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b2d60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable> *this,
          bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementColorChannelMaskPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementColorChannelMaskPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b2e60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable> *this,
          bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementDistanceFieldGammaPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementDistanceFieldGammaPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b2f60

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementGammaAlphaOnlyPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementGammaAlphaOnlyPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b3060

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementHitProxyPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementHitProxyPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 1476b3160

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

FRHIPixelShader * __thiscall
TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetVertexShader @ 1476b63d0

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

FRHIVertexShader * __thiscall
TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FSimpleElementVS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimpleElementVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetPixelShader @ 147a55df0

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

FRHIPixelShader * __thiscall
TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FCubemapTexturePropertiesPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FCubemapTexturePropertiesPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 147a55ef0

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

FRHIPixelShader * __thiscall
TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FIESLightProfilePS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FIESLightProfilePS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetVertexShader @ 147a5c180

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

FRHIVertexShader * __thiscall
TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FCubemapTexturePropertiesVS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FCubemapTexturePropertiesVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetComputeShader @ 147ae48c0

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
TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FUploadHeightFieldToAtlasCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147ae49c0

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
TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FUploadVisibilityToAtlasCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147c55800

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
TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FGPUSkinCacheCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUSkinCacheCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147c55900

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
TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FInitDynamicMeshBoundsCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147c55a00

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
TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FRecomputeTangentsPerTriangleCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRecomputeTangentsPerTriangleCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147c55b00

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
TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FRecomputeTangentsPerVertexCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRecomputeTangentsPerVertexCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147cfb7f0

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
TShaderRefBase<FCopyUIntBufferCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FCopyUIntBufferCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FCopyUIntBufferCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FCopyUIntBufferCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyUIntBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147cfb8f0

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
TShaderRefBase<FRadixSortClearOffsetsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRadixSortClearOffsetsCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FRadixSortClearOffsetsCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FRadixSortClearOffsetsCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRadixSortClearOffsetsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147cfb9f0

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
TShaderRefBase<FRadixSortDownsweepCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRadixSortDownsweepCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FRadixSortDownsweepCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FRadixSortDownsweepCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRadixSortDownsweepCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147cfbaf0

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
TShaderRefBase<FRadixSortSpineCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRadixSortSpineCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FRadixSortSpineCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FRadixSortSpineCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRadixSortSpineCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147cfbbf0

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
TShaderRefBase<FRadixSortUpsweepCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRadixSortUpsweepCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FRadixSortUpsweepCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FRadixSortUpsweepCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRadixSortUpsweepCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147fd13a0

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
TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FClearStreamingRequestCount_CS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Nanite::FClearStreamingRequestCount_CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147fd14a0

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
TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FScatterUpdates_CS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Nanite::FScatterUpdates_CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 147fd15a0

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
TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FTranscodePageToGPU_CS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Nanite::FTranscodePageToGPU_CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 148110540

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
TShaderRefBase<FParticleBoundsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FParticleBoundsCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FParticleBoundsCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleBoundsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetPixelShader @ 148118300

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

FRHIPixelShader * __thiscall
TShaderRefBase<TParticleSimulationPS<1>,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<TParticleSimulationPS<1>,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (TParticleSimulationPS<1> *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TParticleSimulationPS<1>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 148118400

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

FRHIPixelShader * __thiscall
TShaderRefBase<TParticleSimulationPS<2>,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<TParticleSimulationPS<2>,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (TParticleSimulationPS<2> *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TParticleSimulationPS<2>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 148118500

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

FRHIPixelShader * __thiscall
TShaderRefBase<TParticleSimulationPS<0>,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<TParticleSimulationPS<0>,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (TParticleSimulationPS<0> *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TParticleSimulationPS<0>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 148118600

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

FRHIPixelShader * __thiscall
TShaderRefBase<FParticleSimVisualizePS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FParticleSimVisualizePS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleSimVisualizePS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleSimVisualizePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetVertexShader @ 14811c730

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

FRHIVertexShader * __thiscall
TShaderRefBase<FParticleCurveInjectionVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FParticleCurveInjectionVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleCurveInjectionVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleCurveInjectionVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetVertexShader @ 14811c830

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

FRHIVertexShader * __thiscall
TShaderRefBase<FParticleInjectionVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FParticleInjectionVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleInjectionVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleInjectionVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetVertexShader @ 14811c930

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

FRHIVertexShader * __thiscall
TShaderRefBase<FParticleSimVisualizeVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FParticleSimVisualizeVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleSimVisualizeVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleSimVisualizeVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetVertexShader @ 14811ca30

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

FRHIVertexShader * __thiscall
TShaderRefBase<FParticleTileVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FParticleTileVS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIVertexShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleTileVS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIVertexShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
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
              pFVar5 = (FRHIVertexShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleTileVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

// GetRHIShaderBase @ 14817d320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FParticleSortKeyGenCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FParticleSortKeyGenCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        plVar1 = &pFVar4->_padding_;
        if ((*plVar1 & 1) != 0) {
          uVar9 = (uint)((ulonglong)*plVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FParticleSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetComputeShader @ 14837fa50

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
TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FBuildPhysicsFieldClipmapCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FBuildPhysicsFieldClipmapCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14837fb50

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
TShaderRefBase<FCopyResidentBrickSHCoefficientsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FCopyResidentBrickSHCoefficientsCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FCopyResidentBrickSHCoefficientsCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyResidentBrickSHCoefficientsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14837fc50

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
TShaderRefBase<FCopyResidentBricksCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FCopyResidentBricksCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FCopyResidentBricksCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyResidentBricksCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14837fd50

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
TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FMoveWholeIndirectionTextureCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14837fe50

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
TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FPatchIndirectionTextureCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14837ff50

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
TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FRemoveSubLevelBricksCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 148380050

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
TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FResetPhysicsFieldClipmapCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FResetPhysicsFieldClipmapCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14846af90

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
TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FMemcpy_CS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<Nanite::FMemcpy_CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14846b090

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
TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FSpecularProfileConvolveCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSpecularProfileConvolveCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14846b190

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
TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FSpecularProfileCopyCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSpecularProfileCopyCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 148647a40

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
TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FGPUMorphNormalizeCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FGPUMorphNormalizeCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUMorphNormalizeCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 148647b40

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
TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FGPUMorphUpdateCS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FGPUMorphUpdateCS *)0x0) {
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
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
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
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FGPUMorphUpdateCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14873a810

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
TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>
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
  if (this->ShaderContent != (FSparseVolumeTextureUpdateFromSparseBufferCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSparseVolumeTextureUpdateFromSparseBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14873a910

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
TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable> *this)

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
  if (this->ShaderContent != (FSparseVolumeTextureUpdatePageTableCS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSparseVolumeTextureUpdatePageTableCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetRHIShaderBase @ 14895b5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FCompositeAnimatedVectorFieldCS,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FCompositeAnimatedVectorFieldCS,FShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FCompositeAnimatedVectorFieldCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FCompositeAnimatedVectorFieldCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        plVar1 = &pFVar4->_padding_;
        if ((*plVar1 & 1) != 0) {
          uVar9 = (uint)((ulonglong)*plVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCompositeAnimatedVectorFieldCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetRHIShaderBase @ 1489ec9d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable> *this,EShaderFrequency param_1,
          bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FCopyCompressCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FCopyCompressCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)&this->ShaderContent->field_0xd4;
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        puVar1 = &pFVar4->field_0xc0;
        if ((*puVar1 & 1) != 0) {
          uVar9 = (uint)(*(ulonglong *)puVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyCompressCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetPixelShader @ 148b41f40

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

FRHIPixelShader * __thiscall
TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FScreenUnwrapSlicesPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FScreenUnwrapSlicesPS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIPixelShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,param_1);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIPixelShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenUnwrapSlicesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

