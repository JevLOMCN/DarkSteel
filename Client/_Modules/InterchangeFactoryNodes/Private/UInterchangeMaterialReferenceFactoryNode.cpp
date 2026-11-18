// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 8

// StaticClass @ 14e517d30

UClass * __cdecl UInterchangeMaterialReferenceFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialReferenceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialReferenceFactoryNode,0x1d0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMaterialReferenceFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialReferenceFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton;
}

// UInterchangeMaterialReferenceFactoryNode @ 14e531630

UInterchangeMaterialReferenceFactoryNode * __thiscall
UInterchangeMaterialReferenceFactoryNode::UInterchangeMaterialReferenceFactoryNode
          (UInterchangeMaterialReferenceFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  ::FString::operator=((FString *)&this->field_0x1c0,L"IsMaterialImportEnabled");
  *(undefined ***)this = &___7UInterchangeMaterialReferenceFactoryNode__6B_;
  return this;
}

// UInterchangeMaterialReferenceFactoryNode @ 14e531680

UInterchangeMaterialReferenceFactoryNode * __thiscall
UInterchangeMaterialReferenceFactoryNode::UInterchangeMaterialReferenceFactoryNode
          (UInterchangeMaterialReferenceFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  ::FString::operator=((FString *)&this->field_0x1c0,L"IsMaterialImportEnabled");
  *(undefined ***)this = &___7UInterchangeMaterialReferenceFactoryNode__6B_;
  return this;
}

// ~UInterchangeMaterialReferenceFactoryNode @ 14e535cc0

void __thiscall
UInterchangeMaterialReferenceFactoryNode::~UInterchangeMaterialReferenceFactoryNode
          (UInterchangeMaterialReferenceFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeBaseMaterialFactoryNode__6B_;
  if (*(void **)&this->field_0x1c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1c0);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetObjectClass @ 14e559260

UClass * __thiscall
UInterchangeMaterialReferenceFactoryNode::GetObjectClass
          (UInterchangeMaterialReferenceFactoryNode *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UMaterialInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInterface",
               &Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton,
               UMaterialInterface::StaticRegisterNativesUMaterialInterface,0xe8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialInterface>,
               InternalVTableHelperCtorCaller<UMaterialInterface>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInterface.InnerSingleton;
}

// GetPrivateStaticClass @ 14e55ad90

UClass * __cdecl UInterchangeMaterialReferenceFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialReferenceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialReferenceFactoryNode,0x1d0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMaterialReferenceFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialReferenceFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialReferenceFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d770

FString * __thiscall
UInterchangeMaterialReferenceFactoryNode::GetTypeName
          (UInterchangeMaterialReferenceFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MaterialReferenceFactoryNode");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeMaterialReferenceFactoryNode @ 14e57f630

void __cdecl
UInterchangeMaterialReferenceFactoryNode::
StaticRegisterNativesUInterchangeMaterialReferenceFactoryNode(void)

{
  return;
}

