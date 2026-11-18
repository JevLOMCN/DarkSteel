// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dcf7780

UClass * __cdecl UMovieGraphSamplingMethodNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSamplingMethodNode",
               &Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSamplingMethodNode,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSamplingMethodNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSamplingMethodNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton;
}

// UMovieGraphSamplingMethodNode @ 14dd0b170

UMovieGraphSamplingMethodNode * __thiscall
UMovieGraphSamplingMethodNode::UMovieGraphSamplingMethodNode
          (UMovieGraphSamplingMethodNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphSamplingMethodNode__6B_;
  *(undefined8 *)&this->SamplingMethodClass = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x8 = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x10 = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x18 = 0;
  return this;
}

// UMovieGraphSamplingMethodNode @ 14dd0b1c0

UMovieGraphSamplingMethodNode * __thiscall
UMovieGraphSamplingMethodNode::UMovieGraphSamplingMethodNode(UMovieGraphSamplingMethodNode *this)

{
  UClass *pUVar1;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphSamplingMethodNode__6B_;
  pUVar1 = Z_Construct_UClass_UMovieGraphLinearTimeStep_NoRegister();
  *(undefined8 *)&this->SamplingMethodClass = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x8 = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x10 = 0;
  *(undefined8 *)&(this->SamplingMethodClass).field_0x18 = 0;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->SamplingMethodClass,(UObject *)pUVar1);
  this->TemporalSampleCount = 1;
  return this;
}

// ~UMovieGraphSamplingMethodNode @ 14dd0dd70

void __thiscall
UMovieGraphSamplingMethodNode::~UMovieGraphSamplingMethodNode(UMovieGraphSamplingMethodNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphSamplingMethodNode__6B_;
  pvVar1 = *(void **)&(this->SamplingMethodClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23eb0

EMovieGraphBranchRestriction __thiscall
UMovieGraphSamplingMethodNode::GetBranchRestriction(UMovieGraphSamplingMethodNode *this)

{
  return Globals;
}

// GetFormatResolveArgs @ 14dd25f10

void __thiscall
UMovieGraphSamplingMethodNode::GetFormatResolveArgs
          (UMovieGraphSamplingMethodNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  UClass *pUVar1;
  FScriptContainerElement *pFVar2;
  FName local_res8;
  FString local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->TemporalSampleCount);
  ::FString::FString((FString *)local_18,L"ts_count");
  local_28._0_8_ = local_18;
  local_28._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8,(bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,this->TemporalSampleCount);
  ::FString::FString((FString *)local_28,L"unreal/sampling/temporalSampleCount");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&local_res8,
             (bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar1 = FSoftClassPath::ResolveClass(&this->SamplingMethodClass);
  if (pUVar1 == (UClass *)0x0) {
    ::FString::FString(&local_38,L"Unknown");
    ::FString::FString((FString *)local_28,L"sampling_mode");
    local_18._0_8_ = local_28;
    local_18._8_8_ = &local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8,(bool *)local_18);
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_38,L"Unknown");
    ::FString::FString((FString *)local_28,L"unreal/sampling/mode");
    local_18._0_8_ = local_28;
    local_18._8_8_ = &local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&local_res8,
               (bool *)local_18);
    pFVar2 = (FScriptContainerElement *)local_28._0_8_;
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    ::FString::FString((FString *)local_18,L"sampling_mode");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)param_1,(FString *)local_18,&local_38);
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
    ::FString::FString((FString *)local_18,L"unreal/sampling/mode");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&param_1->FileMetadata,(FString *)local_18,&local_38);
    pFVar2 = (FScriptContainerElement *)local_18._0_8_;
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd2d030

UClass * __cdecl UMovieGraphSamplingMethodNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSamplingMethodNode",
               &Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSamplingMethodNode,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSamplingMethodNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSamplingMethodNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSamplingMethodNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphSamplingMethodNode @ 14dd45360

void __cdecl UMovieGraphSamplingMethodNode::StaticRegisterNativesUMovieGraphSamplingMethodNode(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b6d0

void __thiscall
UMovieGraphSamplingMethodNode::UpdateTelemetry
          (UMovieGraphSamplingMethodNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->TemporalSampleCount = this->TemporalSampleCount;
  return;
}

