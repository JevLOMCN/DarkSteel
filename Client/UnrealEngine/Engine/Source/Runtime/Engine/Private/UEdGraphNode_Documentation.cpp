// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147b27540

UClass * __cdecl UEdGraphNode_Documentation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphNode_Documentation",
               &Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton,
               StaticRegisterNativesUEdGraphNode_Documentation,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEdGraphNode_Documentation>,
               InternalVTableHelperCtorCaller<UEdGraphNode_Documentation>,local_res8,
               UEdGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton;
}

// UEdGraphNode_Documentation @ 147b3af70

UEdGraphNode_Documentation * __thiscall
UEdGraphNode_Documentation::UEdGraphNode_Documentation
          (UEdGraphNode_Documentation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEdGraphNode_Documentation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Link).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Link).Data.ArrayNum = 0;
  (this->Link).Data.ArrayMax = 0;
  (this->Excerpt).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Excerpt).Data.ArrayNum = 0;
  (this->Excerpt).Data.ArrayMax = 0;
  return this;
}

// UEdGraphNode_Documentation @ 147b3aff0

UEdGraphNode_Documentation * __thiscall
UEdGraphNode_Documentation::UEdGraphNode_Documentation
          (UEdGraphNode_Documentation *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfb;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Link).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Link).Data.ArrayNum = 0;
  (this->Link).Data.ArrayMax = 0;
  (this->Excerpt).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Excerpt).Data.ArrayNum = 0;
  (this->Excerpt).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UEdGraphNode_Documentation__6B_;
  ::FString::operator=(&this->Link,L"Shared/GraphNodes/Blueprint");
  ::FString::operator=(&this->Excerpt,L"UEdGraphNode_Documentation");
  return this;
}

// ~UEdGraphNode_Documentation @ 147b3d6c0

void __thiscall
UEdGraphNode_Documentation::~UEdGraphNode_Documentation(UEdGraphNode_Documentation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEdGraphNode_Documentation__6B_;
  pFVar1 = (this->Excerpt).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Link).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEdGraphNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6be40

UClass * __cdecl UEdGraphNode_Documentation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EdGraphNode_Documentation",
               &Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton,
               StaticRegisterNativesUEdGraphNode_Documentation,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEdGraphNode_Documentation>,
               InternalVTableHelperCtorCaller<UEdGraphNode_Documentation>,local_res8,
               UEdGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdGraphNode_Documentation.InnerSingleton;
}

// StaticRegisterNativesUEdGraphNode_Documentation @ 147b8ec00

void __cdecl UEdGraphNode_Documentation::StaticRegisterNativesUEdGraphNode_Documentation(void)

{
  return;
}

