// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf6bf0

UClass * __cdecl UMovieGraphRemoveRenderSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRemoveRenderSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRemoveRenderSettingNode,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRemoveRenderSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRemoveRenderSettingNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton;
}

// UMovieGraphRemoveRenderSettingNode @ 14dd0b000

UMovieGraphRemoveRenderSettingNode * __thiscall
UMovieGraphRemoveRenderSettingNode::UMovieGraphRemoveRenderSettingNode
          (UMovieGraphRemoveRenderSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRemoveRenderSettingNode__6B_;
  (this->NodeType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UMovieGraphRemoveRenderSettingNode @ 14dd0dcf0

void __thiscall
UMovieGraphRemoveRenderSettingNode::~UMovieGraphRemoveRenderSettingNode
          (UMovieGraphRemoveRenderSettingNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphRemoveRenderSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// GetInputPinProperties @ 14dd26840

/* WARNING: Removing unreachable block (ram,0x00014dd268bb) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRemoveRenderSettingNode::GetInputPinProperties
          (UMovieGraphRemoveRenderSettingNode *this,
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

// GetOutputPinProperties @ 14dd2ae90

/* WARNING: Removing unreachable block (ram,0x00014dd2af0b) */

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphRemoveRenderSettingNode::GetOutputPinProperties
          (UMovieGraphRemoveRenderSettingNode *this,
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

// GetPrivateStaticClass @ 14dd2cdf0

UClass * __cdecl UMovieGraphRemoveRenderSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRemoveRenderSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphRemoveRenderSettingNode,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRemoveRenderSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRemoveRenderSettingNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRemoveRenderSettingNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphRemoveRenderSettingNode @ 14dd45300

void __cdecl
UMovieGraphRemoveRenderSettingNode::StaticRegisterNativesUMovieGraphRemoveRenderSettingNode(void)

{
  return;
}

