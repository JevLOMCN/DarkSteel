// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// GetRHIShaderBase @ 145f2ee90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>::
GetRHIShaderBase(TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
                 *this,EShaderFrequency param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FBuildLandscapeTileDataCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FBuildLandscapeTileDataCS *)0x0) {
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
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

