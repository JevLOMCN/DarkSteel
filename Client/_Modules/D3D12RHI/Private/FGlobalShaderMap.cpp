// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// GetShader<FDispatchShaderBundleWorkGraph> @ 145a89a70

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

TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> * __thiscall
FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>
          (FGlobalShaderMap *this,
          TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  pFVar3 = FDispatchShaderBundleWorkGraph::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar4 = (FShaderType *)FDispatchShaderBundleWorkGraph::GetStaticType();
  GetShader(this,&local_28,pFVar4,0);
  if ((FDispatchShaderBundleWorkGraph *)local_28.ShaderContent ==
      (FDispatchShaderBundleWorkGraph *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_18);
    FDispatchShaderBundleWorkGraph::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FDispatchShaderBundleWorkGraph::GetStaticType();
  __return_storage_ptr__->ShaderContent = (FDispatchShaderBundleWorkGraph *)local_28.ShaderContent;
  __return_storage_ptr__->ShaderMap = local_28.ShaderMap;
  return __return_storage_ptr__;
}

// operator() @ 1504d6930

bool __thiscall
`FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9018551304275885896>);
  if (bVar2) {
    FDispatchShaderBundleWorkGraph::GetStaticType();
    FDispatchShaderBundleWorkGraph::GetStaticType();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9018551304275885896>,
                       &`public:___cdecl_`public:_class_TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>___cdecl_FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

