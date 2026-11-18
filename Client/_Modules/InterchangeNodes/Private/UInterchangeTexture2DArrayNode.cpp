// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e47a750

UClass * __cdecl UInterchangeTexture2DArrayNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTexture2DArrayNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DArrayNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DArrayNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DArrayNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton;
}

// UInterchangeTexture2DArrayNode @ 14e4894b0

UInterchangeTexture2DArrayNode * __thiscall
UInterchangeTexture2DArrayNode::UInterchangeTexture2DArrayNode
          (UInterchangeTexture2DArrayNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTexture2DArrayNode__6B_;
  return this;
}

// UInterchangeTexture2DArrayNode @ 14e4894e0

UInterchangeTexture2DArrayNode * __thiscall
UInterchangeTexture2DArrayNode::UInterchangeTexture2DArrayNode(UInterchangeTexture2DArrayNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  *(undefined ***)this = &___7UInterchangeTexture2DArrayNode__6B_;
  return this;
}

// ~UInterchangeTexture2DArrayNode @ 14e48b6f0

void __thiscall
UInterchangeTexture2DArrayNode::~UInterchangeTexture2DArrayNode
          (UInterchangeTexture2DArrayNode *this)

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

// GetPrivateStaticClass @ 14e4994e0

UClass * __cdecl UInterchangeTexture2DArrayNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTexture2DArrayNode",
               &Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTexture2DArrayNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTexture2DArrayNode>,
               InternalVTableHelperCtorCaller<UInterchangeTexture2DArrayNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.InnerSingleton;
}

// GetTypeName @ 14e49add0

FString * __thiscall
UInterchangeTexture2DArrayNode::GetTypeName
          (UInterchangeTexture2DArrayNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Texture2DArrayNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeTexture2DArrayNode @ 14e4a8b00

void __cdecl
UInterchangeTexture2DArrayNode::StaticRegisterNativesUInterchangeTexture2DArrayNode(void)

{
  return;
}

