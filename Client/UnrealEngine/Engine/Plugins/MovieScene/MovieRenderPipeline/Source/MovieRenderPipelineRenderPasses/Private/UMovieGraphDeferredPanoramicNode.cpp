// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 18

// StaticClass @ 14ddb9bc0

UClass * __cdecl UMovieGraphDeferredPanoramicNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphDeferredPanoramicNode",
               &Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDeferredPanoramicNode,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDeferredPanoramicNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDeferredPanoramicNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton;
}

// UMovieGraphDeferredPanoramicNode @ 14ddc6180

UMovieGraphDeferredPanoramicNode * __thiscall
UMovieGraphDeferredPanoramicNode::UMovieGraphDeferredPanoramicNode
          (UMovieGraphDeferredPanoramicNode *this,FVTableHelper *param_1)

{
  UMovieGraphRenderPassNode::UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieGraphDeferredPanoramicNode__6B_;
  return this;
}

// UMovieGraphDeferredPanoramicNode @ 14ddc61d0

UMovieGraphDeferredPanoramicNode * __thiscall
UMovieGraphDeferredPanoramicNode::UMovieGraphDeferredPanoramicNode
          (UMovieGraphDeferredPanoramicNode *this)

{
  UMovieGraphImagePassBaseNode::UMovieGraphImagePassBaseNode((UMovieGraphImagePassBaseNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphDeferredPanoramicNode__6B_;
  this->NumHorizontalSteps = 8;
  this->NumVerticalSteps = 3;
  this->bFollowCameraOrientation = true;
  this->bAllocateHistoryPerPane = false;
  this->bPageToSystemMemory = false;
  this->SpatialSampleCount = 1;
  this->AntiAliasingMethod = '\x04';
  this->Filter = Bilinear;
  this->bWriteAllSamples = false;
  this->bDisableToneCurve = false;
  this->bAllowOCIO = true;
  this->ViewModeIndex = '\x03';
  ::FString::operator=((FString *)&this->_padding_,L"DeferredPanoramic");
  return this;
}

// ~UMovieGraphDeferredPanoramicNode @ 14ddcb690

void __thiscall
UMovieGraphDeferredPanoramicNode::~UMovieGraphDeferredPanoramicNode
          (UMovieGraphDeferredPanoramicNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphImagePassBaseNode__6B_;
  DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>,int>
            ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
              *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode((UMovieGraphRenderPassNode *)this);
  return;
}

// CreateInstance @ 14ddd9f90

TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
 __thiscall UMovieGraphDeferredPanoramicNode::CreateInstance(UMovieGraphDeferredPanoramicNode *this)

{
  FMovieGraphDeferredPanoramicPass *pFVar1;
  FMovieGraphImagePassBase *in_RDX;
  
  pFVar1 = ::operator_new(0xd8);
  if (pFVar1 != (FMovieGraphDeferredPanoramicPass *)0x0) {
    pFVar1 = UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::
             FMovieGraphDeferredPanoramicPass(pFVar1);
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphImagePassBase,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphImagePassBase>_>
          )in_RDX;
}

// GetAllowOCIO @ 14dddf250

bool __thiscall
UMovieGraphDeferredPanoramicNode::GetAllowOCIO(UMovieGraphDeferredPanoramicNode *this)

{
  return this->bAllowOCIO;
}

// GetAntiAliasingMethod @ 14dddf2b0

EAntiAliasingMethod __thiscall
UMovieGraphDeferredPanoramicNode::GetAntiAliasingMethod(UMovieGraphDeferredPanoramicNode *this)

{
  return (EAntiAliasingMethod)(this->AntiAliasingMethod).Value;
}

// GetDisableToneCurve @ 14dddfdb0

bool __thiscall
UMovieGraphDeferredPanoramicNode::GetDisableToneCurve(UMovieGraphDeferredPanoramicNode *this)

{
  return this->bDisableToneCurve;
}

// GetEnableHistoryPerTile @ 14dddfe50

bool __thiscall
UMovieGraphDeferredPanoramicNode::GetEnableHistoryPerTile(UMovieGraphDeferredPanoramicNode *this)

{
  return this->bAllocateHistoryPerPane;
}

// GetFormatResolveArgs @ 14dde0700

void __thiscall
UMovieGraphDeferredPanoramicNode::GetFormatResolveArgs
          (UMovieGraphDeferredPanoramicNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  code *pcVar1;
  bool bVar2;
  UEnum *pUVar3;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FString *local_238;
  FString *local_230;
  FString local_228;
  FString *local_218;
  FString *local_210;
  FString local_208;
  FString *local_1f8;
  FString *local_1f0;
  FString local_1e8;
  FString *local_1d8;
  FString *local_1d0;
  FString local_1c8;
  FString *local_1b8;
  FString *local_1b0;
  FString local_1a8;
  FString *local_198;
  FString *local_190;
  FString local_188;
  FString *local_178;
  FString *local_170;
  FString local_168;
  FString local_158;
  FString *local_148;
  FString *local_140;
  FString local_138;
  FString local_128;
  FString *local_118;
  FString *local_110;
  FString local_108;
  FString local_f8;
  FString *local_e8;
  FString *local_e0;
  FString local_d8;
  FString local_c8;
  FString *local_b8;
  FString *local_b0;
  FString local_a8;
  FString *local_98;
  FString *local_90;
  FString local_88;
  FString *local_78;
  FString *local_70;
  FString local_68;
  FString *local_58;
  FString *local_50;
  FString local_48;
  
  UE::MoviePipeline::GetMetadataPrefixPath(&local_338,param_2);
  local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Data.ArrayNum = 0;
  local_328.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_328,this->NumHorizontalSteps);
  ::FString::FString(&local_228,L"pano_count_h");
  local_238 = &local_228;
  local_230 = &local_328;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)&local_238);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.Data.ArrayNum = 0;
  local_318.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_318,this->NumHorizontalSteps);
  ::FString::PrintfImpl(&local_208,L"%s/paneCountH");
  local_218 = &local_208;
  local_210 = &local_318;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000020,
             (bool *)&local_218);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.Data.ArrayNum = 0;
  local_308.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_308,this->NumVerticalSteps);
  ::FString::FString(&local_1e8,L"pano_count_v");
  local_1f8 = &local_1e8;
  local_1f0 = &local_308;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_288,(bool *)&local_1f8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = 0;
  local_2f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2f8,this->NumVerticalSteps);
  ::FString::PrintfImpl(&local_1c8,L"%s/paneCountV");
  local_1d8 = &local_1c8;
  local_1d0 = &local_2f8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_288 + 4),
             (bool *)&local_1d8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2e8,(uint)this->bFollowCameraOrientation);
  ::FString::FString(&local_1a8,L"pano_follow_orientation");
  local_1b8 = &local_1a8;
  local_1b0 = &local_2e8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_280,(bool *)&local_1b8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2d8,(uint)this->bFollowCameraOrientation);
  ::FString::PrintfImpl(&local_188,L"%s/followOrientation");
  local_198 = &local_188;
  local_190 = &local_2d8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_280 + 4),
             (bool *)&local_198);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  pUVar3 = StaticEnum<enum_EAntiAliasingMethod>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_258);
  ::FName::ToString(&local_258,&local_158);
  ::FString::FString(&local_168,L"aaMethod");
  local_178 = &local_168;
  local_170 = &local_158;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_278,(bool *)&local_178);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pUVar3 = StaticEnum<enum_EAntiAliasingMethod>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_250);
  ::FName::ToString(&local_250,&local_128);
  ::FString::PrintfImpl(&local_138,L"%s/aaMethod");
  local_148 = &local_138;
  local_140 = &local_128;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_278 + 4),
             (bool *)&local_148);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pUVar3 = StaticEnum<enum_EMoviePipelinePanoramicFilterType>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_248);
  ::FName::ToString(&local_248,&local_f8);
  ::FString::FString(&local_108,L"pano_filter");
  local_118 = &local_108;
  local_110 = &local_f8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_270,(bool *)&local_118);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pUVar3 = StaticEnum<enum_EMoviePipelinePanoramicFilterType>();
  if ((pUVar3 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UEnum::GetNameByValue(pUVar3,(long64)&local_240);
  ::FName::ToString(&local_240,&local_c8);
  ::FString::PrintfImpl(&local_d8,L"%s/filter");
  local_e8 = &local_d8;
  local_e0 = &local_c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_270 + 4),
             (bool *)&local_e8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2c8,(uint)this->bDisableToneCurve);
  ::FString::FString(&local_a8,L"disable_tonecurve");
  local_b8 = &local_a8;
  local_b0 = &local_2c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_268,(bool *)&local_b8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2b8,(uint)this->bDisableToneCurve);
  ::FString::PrintfImpl(&local_88,L"%s/disableTonecurve");
  local_98 = &local_88;
  local_90 = &local_2b8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_268 + 4),
             (bool *)&local_98);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2a8,(uint)this->bAllocateHistoryPerPane);
  ::FString::FString(&local_68,L"history_per_pane");
  local_78 = &local_68;
  local_70 = &local_2a8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)local_260,(bool *)&local_78);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_298,(uint)this->bAllocateHistoryPerPane);
  ::FString::PrintfImpl(&local_48,L"%s/historyPerPane");
  local_58 = &local_48;
  local_50 = &local_298;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)(local_260 + 4),
             (bool *)&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumSpatialSamples @ 14dde2380

int __thiscall
UMovieGraphDeferredPanoramicNode::GetNumSpatialSamples(UMovieGraphDeferredPanoramicNode *this)

{
  return this->SpatialSampleCount;
}

// GetOverrideAntiAliasing @ 14dde2ee0

bool __thiscall
UMovieGraphDeferredPanoramicNode::GetOverrideAntiAliasing(UMovieGraphDeferredPanoramicNode *this)

{
  return this->bOverride_AntiAliasingMethod;
}

// GetPrivateStaticClass @ 14dde3420

UClass * __cdecl UMovieGraphDeferredPanoramicNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieGraphImagePassBaseNode::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MovieGraphDeferredPanoramicNode",
               &Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDeferredPanoramicNode,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDeferredPanoramicNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDeferredPanoramicNode>,local_res8,
               UMovieGraphImagePassBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDeferredPanoramicNode.InnerSingleton;
}

// GetShowFlags @ 14dde5da0

FEngineShowFlags * __thiscall
UMovieGraphDeferredPanoramicNode::GetShowFlags
          (UMovieGraphDeferredPanoramicNode *this,FEngineShowFlags *__return_storage_ptr__)

{
  undefined1 *puVar1;
  
  UMovieGraphShowFlags::GetShowFlags((UMovieGraphShowFlags *)this->_padding_,__return_storage_ptr__)
  ;
  __return_storage_ptr__->Vignette = 0;
  __return_storage_ptr__->DepthOfField = 0;
  __return_storage_ptr__->SceneColorFringe = 0;
  __return_storage_ptr__->PhysicalMaterialMasks = 0;
  return __return_storage_ptr__;
}

// GetViewModeIndex @ 14dde6380

EViewModeIndex __thiscall
UMovieGraphDeferredPanoramicNode::GetViewModeIndex(UMovieGraphDeferredPanoramicNode *this)

{
  return (EViewModeIndex)(this->ViewModeIndex).Value;
}

// GetWriteAllSamples @ 14dde69d0

bool __thiscall
UMovieGraphDeferredPanoramicNode::GetWriteAllSamples(UMovieGraphDeferredPanoramicNode *this)

{
  return this->bWriteAllSamples;
}

// StaticRegisterNativesUMovieGraphDeferredPanoramicNode @ 14ddff180

void __cdecl
UMovieGraphDeferredPanoramicNode::StaticRegisterNativesUMovieGraphDeferredPanoramicNode(void)

{
  return;
}

// UpdateTelemetry @ 14de02bd0

void __thiscall
UMovieGraphDeferredPanoramicNode::UpdateTelemetry
          (UMovieGraphDeferredPanoramicNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesPanoramic = true;
  return;
}

