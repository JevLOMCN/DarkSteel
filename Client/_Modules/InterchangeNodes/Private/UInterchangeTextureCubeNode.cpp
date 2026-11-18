// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e47afd0

UClass * __cdecl UInterchangeTextureCubeNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureCubeNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton;
}

// UInterchangeTextureCubeNode @ 14e489790

UInterchangeTextureCubeNode * __thiscall
UInterchangeTextureCubeNode::UInterchangeTextureCubeNode
          (UInterchangeTextureCubeNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureCubeNode__6B_;
  return this;
}

// UInterchangeTextureCubeNode @ 14e4897c0

UInterchangeTextureCubeNode * __thiscall
UInterchangeTextureCubeNode::UInterchangeTextureCubeNode(UInterchangeTextureCubeNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureCubeNode__6B_;
  return this;
}

// ~UInterchangeTextureCubeNode @ 14e48b8a0

void __thiscall
UInterchangeTextureCubeNode::~UInterchangeTextureCubeNode(UInterchangeTextureCubeNode *this)

{
  *(undefined ***)this = &___7UInterchangeTextureNode__6B_;
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

// GetPrivateStaticClass @ 14e4997e0

UClass * __cdecl UInterchangeTextureCubeNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureCubeNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeNode.InnerSingleton;
}

// GetTypeName @ 14e49ae90

FString * __thiscall
UInterchangeTextureCubeNode::GetTypeName
          (UInterchangeTextureCubeNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TextureCubeNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeTextureCubeNode @ 14e4a8b70

void __cdecl UInterchangeTextureCubeNode::StaticRegisterNativesUInterchangeTextureCubeNode(void)

{
  return;
}

