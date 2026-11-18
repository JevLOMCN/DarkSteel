// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// BuildNewProcessCommandLineArgsImpl @ 14dc78430

void __thiscall
UMovieGraphSettingNode::BuildNewProcessCommandLineArgsImpl
          (UMovieGraphSettingNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetFormatResolveArgs @ 14dc80670

void __thiscall
UMovieGraphSettingNode::GetFormatResolveArgs
          (UMovieGraphSettingNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  return;
}

// GetNodeInstanceName @ 14dc80a10

FString * __thiscall
UMovieGraphSettingNode::GetNodeInstanceName
          (UMovieGraphSettingNode *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// PostFlatten @ 14dc85280

void __thiscall UMovieGraphSettingNode::PostFlatten(UMovieGraphSettingNode *this)

{
  return;
}

// PrepareForFlattening @ 14dc852c0

void __thiscall
UMovieGraphSettingNode::PrepareForFlattening
          (UMovieGraphSettingNode *this,UMovieGraphSettingNode *param_1)

{
  return;
}

// StaticClass @ 14dc89a90

UClass * __cdecl UMovieGraphSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSettingNode,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSettingNode>,aFStackX_8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton;
}

// UpdateTelemetry @ 14dc8c8d0

void __thiscall
UMovieGraphSettingNode::UpdateTelemetry
          (UMovieGraphSettingNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  return;
}

// UMovieGraphSettingNode @ 14dcb1320

UMovieGraphSettingNode * __thiscall
UMovieGraphSettingNode::UMovieGraphSettingNode(UMovieGraphSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphSettingNode__6B_;
  return this;
}

// UMovieGraphSettingNode @ 14dcb1350

UMovieGraphSettingNode * __thiscall
UMovieGraphSettingNode::UMovieGraphSettingNode(UMovieGraphSettingNode *this)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  *(undefined ***)this = &___7UMovieGraphSettingNode__6B_;
  return this;
}

// ~UMovieGraphSettingNode @ 14dcb3400

void __thiscall UMovieGraphSettingNode::~UMovieGraphSettingNode(UMovieGraphSettingNode *this)

{
  *(undefined ***)this = &___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// GetInputPinProperties @ 14dcce710

/* WARNING: Removing unreachable block (ram,0x00014dcce78b) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSettingNode::GetInputPinProperties
          (UMovieGraphSettingNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// GetOutputPinProperties @ 14dcd01d0

/* WARNING: Removing unreachable block (ram,0x00014dcd024b) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSettingNode::GetOutputPinProperties
          (UMovieGraphSettingNode *this,
          TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x20;
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined8 *)pFVar2 = 0;
  pFVar2[8] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  pFVar2[0x18] = (FScriptContainerElement)0x0;
  pFVar2[0x19] = (FScriptContainerElement)0x1;
  pFVar2[0x1a] = (FScriptContainerElement)0x0;
  pFVar2[0x1b] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd33b0

UClass * __cdecl UMovieGraphSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSettingNode,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSettingNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton;
}

// ResolveTokenContainingProperties @ 14dce1b20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSettingNode::ResolveTokenContainingProperties
          (UMovieGraphSettingNode *this,TFunction<void___cdecl(FString_&)> *param_1,
          FMovieGraphTokenResolveContext *param_2)

{
  return;
}

// StaticRegisterNativesUMovieGraphSettingNode @ 14dce6880

void __cdecl UMovieGraphSettingNode::StaticRegisterNativesUMovieGraphSettingNode(void)

{
  return;
}

