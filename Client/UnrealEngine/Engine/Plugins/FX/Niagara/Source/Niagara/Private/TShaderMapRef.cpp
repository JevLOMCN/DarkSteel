// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TShaderMapRef<FNiagaraSortKeyGenCS> @ 1492cff40

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

TShaderMapRef<FNiagaraSortKeyGenCS> * __thiscall
TShaderMapRef<FNiagaraSortKeyGenCS>::TShaderMapRef<FNiagaraSortKeyGenCS>
          (TShaderMapRef<FNiagaraSortKeyGenCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FName this_00;
  TShaderMapRef<FNiagaraSortKeyGenCS> *pTVar6;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  bVar4 = (param_2->Tail).Tail.DimensionValue;
  bVar1 = (param_2->Tail).DimensionValue;
  bVar2 = param_2->DimensionValue;
  pFVar5 = (FShaderType *)FNiagaraSortKeyGenCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_28,pFVar5,
             (-(uint)(bVar1 != false) & 2) + (-(uint)(bVar4 != false) & 4) + (uint)(bVar2 != false))
  ;
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    FNiagaraSortKeyGenCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TShaderMapRef<FNiagaraSortKeyGenCS> *)(*pcVar3)();
      return pTVar6;
    }
  }
  FNiagaraSortKeyGenCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

