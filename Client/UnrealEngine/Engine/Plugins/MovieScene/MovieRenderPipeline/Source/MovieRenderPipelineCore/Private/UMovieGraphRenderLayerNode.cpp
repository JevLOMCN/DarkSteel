// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf6f20

UClass * __cdecl UMovieGraphRenderLayerNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayerNode",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayerNode,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRenderLayerNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayerNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton;
}

// UMovieGraphRenderLayerNode @ 14dd0b040

UMovieGraphRenderLayerNode * __thiscall
UMovieGraphRenderLayerNode::UMovieGraphRenderLayerNode
          (UMovieGraphRenderLayerNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerNode__6B_;
  (this->LayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerName).Data.ArrayNum = 0;
  (this->LayerName).Data.ArrayMax = 0;
  return this;
}

// UMovieGraphRenderLayerNode @ 14dd0b080

UMovieGraphRenderLayerNode * __thiscall
UMovieGraphRenderLayerNode::UMovieGraphRenderLayerNode(UMovieGraphRenderLayerNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerNode__6B_;
  (this->LayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerName).Data.ArrayNum = 0;
  (this->LayerName).Data.ArrayMax = 0;
  ::FString::operator=(&this->LayerName,L"beauty");
  return this;
}

// ~UMovieGraphRenderLayerNode @ 14dd0dd10

void __thiscall
UMovieGraphRenderLayerNode::~UMovieGraphRenderLayerNode(UMovieGraphRenderLayerNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerNode__6B_;
  pFVar1 = (this->LayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetPrivateStaticClass @ 14dd2ceb0

UClass * __cdecl UMovieGraphRenderLayerNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayerNode",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderLayerNode,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphRenderLayerNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayerNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphRenderLayerNode @ 14dd45310

void __cdecl UMovieGraphRenderLayerNode::StaticRegisterNativesUMovieGraphRenderLayerNode(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b6c0

void __thiscall
UMovieGraphRenderLayerNode::UpdateTelemetry
          (UMovieGraphRenderLayerNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->RenderLayerCount = param_1->RenderLayerCount + 1;
  return;
}

