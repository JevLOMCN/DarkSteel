// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e47aca0

UClass * __cdecl UInterchangeTextureCubeArrayNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureCubeArrayNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeArrayNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeArrayNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeArrayNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton;
}

// UInterchangeTextureCubeArrayNode @ 14e489730

UInterchangeTextureCubeArrayNode * __thiscall
UInterchangeTextureCubeArrayNode::UInterchangeTextureCubeArrayNode
          (UInterchangeTextureCubeArrayNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureCubeArrayNode__6B_;
  return this;
}

// UInterchangeTextureCubeArrayNode @ 14e489760

UInterchangeTextureCubeArrayNode * __thiscall
UInterchangeTextureCubeArrayNode::UInterchangeTextureCubeArrayNode
          (UInterchangeTextureCubeArrayNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureCubeArrayNode__6B_;
  return this;
}

// ~UInterchangeTextureCubeArrayNode @ 14e48b830

void __thiscall
UInterchangeTextureCubeArrayNode::~UInterchangeTextureCubeArrayNode
          (UInterchangeTextureCubeArrayNode *this)

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

// GetPrivateStaticClass @ 14e499720

UClass * __cdecl UInterchangeTextureCubeArrayNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureCubeArrayNode",
               &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureCubeArrayNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureCubeArrayNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureCubeArrayNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.InnerSingleton;
}

// GetTypeName @ 14e49ae60

FString * __thiscall
UInterchangeTextureCubeArrayNode::GetTypeName
          (UInterchangeTextureCubeArrayNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TextureCubeArrayNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeTextureCubeArrayNode @ 14e4a8b60

void __cdecl
UInterchangeTextureCubeArrayNode::StaticRegisterNativesUInterchangeTextureCubeArrayNode(void)

{
  return;
}

