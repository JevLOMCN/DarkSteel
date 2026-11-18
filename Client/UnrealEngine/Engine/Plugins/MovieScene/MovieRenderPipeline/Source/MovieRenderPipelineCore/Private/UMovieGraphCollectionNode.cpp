// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dcf5400

UClass * __cdecl UMovieGraphCollectionNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollectionNode",
               &Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollectionNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphCollectionNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCollectionNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton;
}

// UMovieGraphCollectionNode @ 14dd09f40

UMovieGraphCollectionNode * __thiscall
UMovieGraphCollectionNode::UMovieGraphCollectionNode
          (UMovieGraphCollectionNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->bOverride_Collection = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphCollectionNode__6B_;
  (this->Collection).field0_0x0.DebugPtr = (UMovieGraphCollection *)0x0;
  return this;
}

// UMovieGraphCollectionNode @ 14dd09f80

UMovieGraphCollectionNode * __thiscall
UMovieGraphCollectionNode::UMovieGraphCollectionNode(UMovieGraphCollectionNode *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphCollection *pUVar4;
  FName local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->bOverride_Collection = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphCollectionNode__6B_;
  (this->Collection).field0_0x0.DebugPtr = (UMovieGraphCollection *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"Collection");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UMovieGraphCollection_NoRegister();
  pUVar4 = (UMovieGraphCollection *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Collection).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMovieGraphCollectionNode @ 14dd0d7b0

void __thiscall
UMovieGraphCollectionNode::~UMovieGraphCollectionNode(UMovieGraphCollectionNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphCollectionNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetNodeInstanceName @ 14dd291a0

FString * __thiscall
UMovieGraphCollectionNode::GetNodeInstanceName
          (UMovieGraphCollectionNode *this,FString *__return_storage_ptr__)

{
  UMovieGraphCollection *this_00;
  FScriptContainerElement *_Src;
  FString *pFVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  FString local_28;
  FString local_18;
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if (this_00 == (UMovieGraphCollection *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_18);
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = UMovieGraphCollection::GetCollectionName(this_00);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    lVar3 = (longlong)local_28.Data.ArrayNum;
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2c2d0

UClass * __cdecl UMovieGraphCollectionNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollectionNode",
               &Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCollectionNode,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphCollectionNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCollectionNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionNode.InnerSingleton;
}

// RegisterDelegates @ 14dd3b550

void __thiscall UMovieGraphCollectionNode::RegisterDelegates(UMovieGraphCollectionNode *this)

{
  return;
}

// StaticRegisterNativesUMovieGraphCollectionNode @ 14dd45180

void __cdecl UMovieGraphCollectionNode::StaticRegisterNativesUMovieGraphCollectionNode(void)

{
  return;
}

