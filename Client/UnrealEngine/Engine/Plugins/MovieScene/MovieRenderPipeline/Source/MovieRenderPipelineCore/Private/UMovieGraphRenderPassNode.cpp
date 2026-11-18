// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dc67920

UClass * __cdecl UMovieGraphRenderPassNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPassNode,0xd8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPassNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton;
}

// UMovieGraphRenderPassNode @ 14dc73790

UMovieGraphRenderPassNode * __thiscall
UMovieGraphRenderPassNode::UMovieGraphRenderPassNode
          (UMovieGraphRenderPassNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRenderPassNode__6B_;
  (this->RendererName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererName).Data.ArrayNum = 0;
  (this->RendererName).Data.ArrayMax = 0;
  (this->RendererSubName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererSubName).Data.ArrayNum = 0;
  (this->RendererSubName).Data.ArrayMax = 0;
  return this;
}

// ~UMovieGraphRenderPassNode @ 14dc74880

void __thiscall
UMovieGraphRenderPassNode::~UMovieGraphRenderPassNode(UMovieGraphRenderPassNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderPassNode__6B_;
  pFVar1 = (this->RendererSubName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GatherOutputPassesImpl @ 14dc7ebe0

void __thiscall
UMovieGraphRenderPassNode::GatherOutputPassesImpl
          (UMovieGraphRenderPassNode *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetCoolingDownFrameCount @ 14dc7f550

int __thiscall UMovieGraphRenderPassNode::GetCoolingDownFrameCount(UMovieGraphRenderPassNode *this)

{
  return 0;
}

// GetNumSceneViewsRenderedImpl @ 14dc811e0

int __thiscall
UMovieGraphRenderPassNode::GetNumSceneViewsRenderedImpl(UMovieGraphRenderPassNode *this)

{
  return 0;
}

// GetOutputTypeRestrictionsImpl @ 14dc81380

TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRenderPassNode::GetOutputTypeRestrictionsImpl
          (UMovieGraphRenderPassNode *this,
          TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dc822a0

UClass * __cdecl UMovieGraphRenderPassNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPassNode,0xd8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPassNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton;
}

// GetRendererNameImpl @ 14dc82ae0

FString * __thiscall
UMovieGraphRenderPassNode::GetRendererNameImpl
          (UMovieGraphRenderPassNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->RendererName);
  return __return_storage_ptr__;
}

// GetRendererSubNameImpl @ 14dc82b10

FString * __thiscall
UMovieGraphRenderPassNode::GetRendererSubNameImpl
          (UMovieGraphRenderPassNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->RendererSubName);
  return __return_storage_ptr__;
}

// RenderImpl @ 14dc86970

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphRenderPassNode::RenderImpl
          (UMovieGraphRenderPassNode *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  return;
}

// ResolveTokenContainingProperties @ 14dc88800

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphRenderPassNode::ResolveTokenContainingProperties
          (UMovieGraphRenderPassNode *this,TFunction<void___cdecl(FString_&)> *param_1,
          FMovieGraphTokenResolveContext *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UMovieGraphSettingNode::ResolveTokenContainingProperties
            ((UMovieGraphSettingNode *)this,param_1,param_2);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar2 = *(longlong **)&param_1->field_0x28;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
  (*UNRECOVERED_JUMPTABLE)(uVar1,&this->RendererName);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar2 = *(longlong **)&param_1->field_0x28;
  }
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014dc8888e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,&this->RendererSubName);
  return;
}

// SetupImpl @ 14dc896a0

void __thiscall
UMovieGraphRenderPassNode::SetupImpl
          (UMovieGraphRenderPassNode *this,FMovieGraphRenderPassSetupData *param_1)

{
  return;
}

// StaticRegisterNativesUMovieGraphRenderPassNode @ 14dc89c80

void __cdecl UMovieGraphRenderPassNode::StaticRegisterNativesUMovieGraphRenderPassNode(void)

{
  return;
}

// TeardownImpl @ 14dc89e50

void __thiscall UMovieGraphRenderPassNode::TeardownImpl(UMovieGraphRenderPassNode *this)

{
  return;
}

