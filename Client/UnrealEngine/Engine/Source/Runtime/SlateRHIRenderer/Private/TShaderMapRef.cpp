// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// TShaderMapRef<FSlateElementVS> @ 145fe57a0

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

TShaderMapRef<FSlateElementVS> * __thiscall
TShaderMapRef<FSlateElementVS>::TShaderMapRef<FSlateElementVS>
          (TShaderMapRef<FSlateElementVS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FSlateElementVS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FSlateElementVS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FSlateElementVS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FSlateElementVS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSlateElementVS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<FSlatePostProcessResample2x2PS> @ 145fe5880

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

TShaderMapRef<FSlatePostProcessResample2x2PS> * __thiscall
TShaderMapRef<FSlatePostProcessResample2x2PS>::TShaderMapRef<FSlatePostProcessResample2x2PS>
          (TShaderMapRef<FSlatePostProcessResample2x2PS> *this,FGlobalShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderType *pFVar3;
  FName this_00;
  TShaderMapRef<FSlatePostProcessResample2x2PS> *pTVar4;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = (FShaderType *)FSlatePostProcessResample2x2PS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar3,0);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FSlatePostProcessResample2x2PS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<FSlatePostProcessResample2x2PS> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSlatePostProcessResample2x2PS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

