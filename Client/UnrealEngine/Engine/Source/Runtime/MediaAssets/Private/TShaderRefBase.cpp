// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 14

// GetPixelShader @ 146c2b600

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
TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FARGB16BigConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2b700

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
TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FBMPConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2b800

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
TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FNV12ConvertAsBytesPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2b900

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
TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FNV12ConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2ba00

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
TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FP010ConvertAsUINT16sPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2bb00

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
TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FP010ConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2bc00

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
TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FRGBConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2bd00

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
TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable> *this,bool param_1)

{
  int iVar1;
  FShaderMapResource *this_00;
  FReadTextureExternalPS *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIPixelShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FReadTextureExternalPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2be00

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
TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FVYUConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2bf00

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
TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FYCoCgConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2c000

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
TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FYUVY416ConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2c100

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
TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FYUVv210ConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetPixelShader @ 146c2c200

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
TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable>::GetPixelShader
          (TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FYUVv216ConvertPS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIPixelShader *)aVar6;
}

// GetVertexShader @ 146c2e2a0

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
TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetVertexShader
          (TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable> *this,bool param_1)

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
  if (this->ShaderContent != (FMediaShadersVS *)0x0) {
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
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIVertexShader *)aVar6;
}

