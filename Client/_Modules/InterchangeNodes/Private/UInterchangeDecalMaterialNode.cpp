// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 6

// StaticClass @ 14e4777e0

UClass * __cdecl UInterchangeDecalMaterialNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeDecalMaterialNode",
               &Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalMaterialNode,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalMaterialNode>,
               InternalVTableHelperCtorCaller<UInterchangeDecalMaterialNode>,local_res8,
               UInterchangeShaderNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton;
}

// UInterchangeDecalMaterialNode @ 14e486040

UInterchangeDecalMaterialNode * __thiscall
UInterchangeDecalMaterialNode::UInterchangeDecalMaterialNode
          (UInterchangeDecalMaterialNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"ShaderType");
  this->_padding_ = (longlong)&___7UInterchangeDecalMaterialNode__6B_;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDiffuseTexturePathKey).Key,L"DiffuseTexturePath");
  (this->Macro_CustomNormalTexturePathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomNormalTexturePathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomNormalTexturePathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomNormalTexturePathKey).Key,L"NormalTexturePath");
  return this;
}

// UInterchangeDecalMaterialNode @ 14e4860d0

UInterchangeDecalMaterialNode * __thiscall
UInterchangeDecalMaterialNode::UInterchangeDecalMaterialNode(UInterchangeDecalMaterialNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"ShaderType");
  this->_padding_ = (longlong)&___7UInterchangeDecalMaterialNode__6B_;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDiffuseTexturePathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDiffuseTexturePathKey).Key,L"DiffuseTexturePath");
  (this->Macro_CustomNormalTexturePathKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomNormalTexturePathKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomNormalTexturePathKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomNormalTexturePathKey).Key,L"NormalTexturePath");
  return this;
}

// ~UInterchangeDecalMaterialNode @ 14e48aa70

void __thiscall
UInterchangeDecalMaterialNode::~UInterchangeDecalMaterialNode(UInterchangeDecalMaterialNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeDecalMaterialNode__6B_;
  pFVar1 = (this->Macro_CustomNormalTexturePathKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDiffuseTexturePathKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeShaderNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// GetPrivateStaticClass @ 14e498170

UClass * __cdecl UInterchangeDecalMaterialNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeDecalMaterialNode",
               &Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDecalMaterialNode,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDecalMaterialNode>,
               InternalVTableHelperCtorCaller<UInterchangeDecalMaterialNode>,local_res8,
               UInterchangeShaderNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeDecalMaterialNode @ 14e4a84e0

void __cdecl UInterchangeDecalMaterialNode::StaticRegisterNativesUInterchangeDecalMaterialNode(void)

{
  return;
}

