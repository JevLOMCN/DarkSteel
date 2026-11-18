// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e47b690

UClass * __cdecl UInterchangeTextureLightProfileNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureLightProfileNode",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureLightProfileNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureLightProfileNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfileNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton;
}

// UInterchangeTextureLightProfileNode @ 14e4897f0

UInterchangeTextureLightProfileNode * __thiscall
UInterchangeTextureLightProfileNode::UInterchangeTextureLightProfileNode
          (UInterchangeTextureLightProfileNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureLightProfileNode__6B_;
  return this;
}

// UInterchangeTextureLightProfileNode @ 14e489820

UInterchangeTextureLightProfileNode * __thiscall
UInterchangeTextureLightProfileNode::UInterchangeTextureLightProfileNode
          (UInterchangeTextureLightProfileNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  *(undefined ***)this = &___7UInterchangeTextureLightProfileNode__6B_;
  return this;
}

// ~UInterchangeTextureLightProfileNode @ 14e48b910

void __thiscall
UInterchangeTextureLightProfileNode::~UInterchangeTextureLightProfileNode
          (UInterchangeTextureLightProfileNode *this)

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

// GetPrivateStaticClass @ 14e4998a0

UClass * __cdecl UInterchangeTextureLightProfileNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeTextureLightProfileNode",
               &Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureLightProfileNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTextureLightProfileNode>,
               InternalVTableHelperCtorCaller<UInterchangeTextureLightProfileNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.InnerSingleton;
}

// GetTypeName @ 14e49aec0

FString * __thiscall
UInterchangeTextureLightProfileNode::GetTypeName
          (UInterchangeTextureLightProfileNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TextureLightProfileNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeTextureLightProfileNode @ 14e4a8b80

void __cdecl
UInterchangeTextureLightProfileNode::StaticRegisterNativesUInterchangeTextureLightProfileNode(void)

{
  return;
}

