// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 7

// StaticClass @ 14e47d600

UClass * __cdecl UInterchangeVolumeTextureNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeVolumeTextureNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTextureNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTextureNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTextureNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton;
}

// UInterchangeVolumeTextureNode @ 14e48a0e0

UInterchangeVolumeTextureNode * __thiscall
UInterchangeVolumeTextureNode::UInterchangeVolumeTextureNode
          (UInterchangeVolumeTextureNode *this,FVTableHelper *param_1)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeVolumeTextureNode__6B_;
  return this;
}

// UInterchangeVolumeTextureNode @ 14e48a110

UInterchangeVolumeTextureNode * __thiscall
UInterchangeVolumeTextureNode::UInterchangeVolumeTextureNode(UInterchangeVolumeTextureNode *this)

{
  UInterchangeTextureNode::UInterchangeTextureNode((UInterchangeTextureNode *)this);
  *(undefined ***)this = &___7UInterchangeVolumeTextureNode__6B_;
  return this;
}

// ~UInterchangeVolumeTextureNode @ 14e48bb70

void __thiscall
UInterchangeVolumeTextureNode::~UInterchangeVolumeTextureNode(UInterchangeVolumeTextureNode *this)

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

// GetPrivateStaticClass @ 14e499d20

UClass * __cdecl UInterchangeVolumeTextureNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeVolumeTextureNode",
               &Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTextureNode,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTextureNode>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTextureNode>,local_res8,
               UInterchangeTextureNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.InnerSingleton;
}

// GetTypeName @ 14e49afe0

FString * __thiscall
UInterchangeVolumeTextureNode::GetTypeName
          (UInterchangeVolumeTextureNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"VolumeTextureNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeVolumeTextureNode @ 14e4a8cd0

void __cdecl UInterchangeVolumeTextureNode::StaticRegisterNativesUInterchangeVolumeTextureNode(void)

{
  return;
}

