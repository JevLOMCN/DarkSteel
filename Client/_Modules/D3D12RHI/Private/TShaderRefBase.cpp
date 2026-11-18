// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetWorkGraphShader @ 145aabf20

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

FRHIWorkGraphShader * __thiscall
TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>::GetWorkGraphShader
          (TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FDispatchShaderBundleWorkGraph *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIWorkGraphShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FDispatchShaderBundleWorkGraph *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIWorkGraphShader *)(*pcVar3)();
      return pFVar5;
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (((aVar6 == (atomic<FRHIShader_*>)0x0) &&
        (aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true),
        aVar6 == (atomic<FRHIShader_*>)0x0)) &&
       (aVar6 = (atomic<FRHIShader_*>)0x0, 4 < (byte)LogShaders._0_1_)) {
      this_01 = this->ShaderContent;
      pFVar2 = this->ShaderMap;
      if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIWorkGraphShader *)(*pcVar3)();
        return pFVar5;
      }
      FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      return (FRHIWorkGraphShader *)0x0;
    }
  }
  return (FRHIWorkGraphShader *)aVar6;
}

