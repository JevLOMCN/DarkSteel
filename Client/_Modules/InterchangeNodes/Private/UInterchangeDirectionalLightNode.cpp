// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e4760e0

UClass * __cdecl UInterchangeDirectionalLightNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeDirectionalLightNode",
               &Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDirectionalLightNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDirectionalLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeDirectionalLightNode>,local_res8,
               UInterchangeBaseLightNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton;
}

// UInterchangeDirectionalLightNode @ 14e486260

UInterchangeDirectionalLightNode * __thiscall
UInterchangeDirectionalLightNode::UInterchangeDirectionalLightNode
          (UInterchangeDirectionalLightNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseLightNode::UInterchangeBaseLightNode((UInterchangeBaseLightNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeDirectionalLightNode__6B_;
  return this;
}

// UInterchangeDirectionalLightNode @ 14e486290

UInterchangeDirectionalLightNode * __thiscall
UInterchangeDirectionalLightNode::UInterchangeDirectionalLightNode
          (UInterchangeDirectionalLightNode *this)

{
  UInterchangeBaseLightNode::UInterchangeBaseLightNode((UInterchangeBaseLightNode *)this);
  *(undefined ***)this = &___7UInterchangeDirectionalLightNode__6B_;
  return this;
}

// ~UInterchangeDirectionalLightNode @ 14e48ab30

void __thiscall
UInterchangeDirectionalLightNode::~UInterchangeDirectionalLightNode
          (UInterchangeDirectionalLightNode *this)

{
  *(undefined ***)this = &___7UInterchangeBaseLightNode__6B_;
  if (*(void **)&this->field_0x90 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x90);
  }
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// GetPrivateStaticClass @ 14e4982f0

UClass * __cdecl UInterchangeDirectionalLightNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeDirectionalLightNode",
               &Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDirectionalLightNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDirectionalLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeDirectionalLightNode>,local_res8,
               UInterchangeBaseLightNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDirectionalLightNode.InnerSingleton;
}

// GetTypeName @ 14e49a8e0

FString * __thiscall
UInterchangeDirectionalLightNode::GetTypeName
          (UInterchangeDirectionalLightNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"DirectionalLightNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeDirectionalLightNode @ 14e4a8530

void __cdecl
UInterchangeDirectionalLightNode::StaticRegisterNativesUInterchangeDirectionalLightNode(void)

{
  return;
}

