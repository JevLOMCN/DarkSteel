// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146e7a8e0

UClass * __cdecl UBehaviorTree::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTree",
               &Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton,
               StaticRegisterNativesUBehaviorTree,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTree>,InternalVTableHelperCtorCaller<UBehaviorTree>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton;
}

// UBehaviorTree @ 146e81100

UBehaviorTree * __thiscall UBehaviorTree::UBehaviorTree(UBehaviorTree *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlackboardAssetProvider__;
  (this->RootNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->BlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->RootDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDecorators).ArrayNum = 0;
  (this->RootDecorators).ArrayMax = 0;
  (this->RootDecoratorOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDecoratorOps).ArrayNum = 0;
  (this->RootDecoratorOps).ArrayMax = 0;
  return this;
}

// UBehaviorTree @ 146e81150

UBehaviorTree * __thiscall
UBehaviorTree::UBehaviorTree(UBehaviorTree *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlackboardAssetProvider__;
  (this->RootNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->BlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->RootDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDecorators).ArrayNum = 0;
  (this->RootDecorators).ArrayMax = 0;
  (this->RootDecoratorOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDecoratorOps).ArrayNum = 0;
  (this->RootDecoratorOps).ArrayMax = 0;
  return this;
}

// ~UBehaviorTree @ 146e81ed0

void __thiscall UBehaviorTree::~UBehaviorTree(UBehaviorTree *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlackboardAssetProvider__;
  pFVar1 = (this->RootDecoratorOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IBlackboardAssetProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBlackboardAsset @ 146e8d6b0

UBlackboardData * __thiscall UBehaviorTree::GetBlackboardAsset(UBehaviorTree *this)

{
  return (UBlackboardData *)this->_padding_;
}

// GetPrivateStaticClass @ 146e8f3d0

UClass * __cdecl UBehaviorTree::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BehaviorTree",
               &Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton,
               StaticRegisterNativesUBehaviorTree,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBehaviorTree>,InternalVTableHelperCtorCaller<UBehaviorTree>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBehaviorTree.InnerSingleton;
}

// StaticRegisterNativesUBehaviorTree @ 146ea01e0

void __cdecl UBehaviorTree::StaticRegisterNativesUBehaviorTree(void)

{
  return;
}

// _getUObject @ 146ea61c0

UObject * __thiscall UBehaviorTree::_getUObject(UBehaviorTree *this)

{
  return (UObject *)&this[-1].RootDecorators;
}

