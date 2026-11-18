// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// Create @ 145ffaba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSlateDrawShaderBindings * __cdecl
FSlateDrawShaderBindings::Create
          (FRDGBuilder *param_1,TShaderRefBase<FShader,FShaderMapPointerTable> *param_2)

{
  FShaderParameterMapInfo *pFVar1;
  code *pcVar2;
  FShaderMapBase *pFVar3;
  bool bVar4;
  uint uVar5;
  FSlateDrawShaderBindings *pFVar6;
  void *_Dst;
  FMeshDrawShaderBindingsLayout local_res8;
  
  pFVar1 = &param_2->ShaderContent->ParameterMapInfo;
  local_res8.ParameterMapInfo = pFVar1;
  if (param_2->ShaderContent == (FShader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                       ,0x1a,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateDrawShaderBindings *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar5 = FMeshDrawShaderBindingsLayout::GetDataSizeBytes(&local_res8);
  _Dst = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,(ulonglong)uVar5,0x10);
  memset(_Dst,0,(ulonglong)uVar5);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  pFVar6->_padding_ = (longlong)pFVar1;
  pFVar6->_padding_ = (longlong)_Dst;
  pFVar3 = param_2->ShaderMap;
  (pFVar6->Shader).ShaderContent = param_2->ShaderContent;
  (pFVar6->Shader).ShaderMap = pFVar3;
  return pFVar6;
}

// SetOnCommandList @ 146024ae0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateDrawShaderBindings::SetOnCommandList(FSlateDrawShaderBindings *this,FRHICommandList *param_1)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> *this_00;
  int iVar1;
  FShaderMapResource *this_01;
  code *pcVar2;
  bool bVar3;
  FRHIBatchedShaderParameters *pFVar4;
  atomic<FRHIShader_*> aVar5;
  atomic<FRHIShader_*> aVar6;
  FReadOnlyMeshDrawSingleShaderBindings local_18;
  
  pFVar4 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  local_18._padding_ = this->_padding_;
  local_18.Data = (uchar *)this->_padding_;
  FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar4,&local_18);
  aVar6 = (atomic<FRHIShader_*>)0x0;
  this_00 = &this->Shader;
  aVar5 = aVar6;
  if (this_00->ShaderContent != (FShader *)0x0) {
    this_01 = (((this->Shader).ShaderMap)->Resource).Reference;
    if ((this_01 == (FShaderMapResource *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = this_00->ShaderContent->ResourceIndex;
    aVar5 = (this_01->RHIShaders).Ptr[iVar1];
    if (((aVar5 == (atomic<FRHIShader_*>)0x0) &&
        (aVar5 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_01,iVar1,true),
        aVar5 == (atomic<FRHIShader_*>)0x0)) && (aVar5 = aVar6, 4 < (byte)LogShaders._0_1_)) {
      TShaderRefBase<FShader,FShaderMapPointerTable>::GetType(this_00);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_class_FRHIGraphicsShader*___ptr64___cdecl_TShaderRefBase<FShader,FShaderMapPointerTable>::GetGraphicsShader(bool)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)aVar5,pFVar4);
  return;
}

