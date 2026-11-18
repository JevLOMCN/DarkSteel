// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 6

// StaticClass @ 14e51db00

UClass * __cdecl UInterchangeDirectionalLightFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeDirectionalLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDirectionalLightFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDirectionalLightFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeDirectionalLightFactoryNode>,local_res8,
               UInterchangeBaseLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton;
}

// UInterchangeDirectionalLightFactoryNode @ 14e52fe40

UInterchangeDirectionalLightFactoryNode * __thiscall
UInterchangeDirectionalLightFactoryNode::UInterchangeDirectionalLightFactoryNode
          (UInterchangeDirectionalLightFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode
            ((UInterchangeBaseLightFactoryNode *)this,param_1);
  *(undefined ***)this = &___7UInterchangeDirectionalLightFactoryNode__6B_;
  return this;
}

// UInterchangeDirectionalLightFactoryNode @ 14e52fe70

UInterchangeDirectionalLightFactoryNode * __thiscall
UInterchangeDirectionalLightFactoryNode::UInterchangeDirectionalLightFactoryNode
          (UInterchangeDirectionalLightFactoryNode *this)

{
  UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode
            ((UInterchangeBaseLightFactoryNode *)this);
  *(undefined ***)this = &___7UInterchangeDirectionalLightFactoryNode__6B_;
  return this;
}

// ~UInterchangeDirectionalLightFactoryNode @ 14e5355a0

void __thiscall
UInterchangeDirectionalLightFactoryNode::~UInterchangeDirectionalLightFactoryNode
          (UInterchangeDirectionalLightFactoryNode *this)

{
  *(undefined ***)this = &___7UInterchangeDirectionalLightFactoryNode__6B_;
  UInterchangeBaseLightFactoryNode::~UInterchangeBaseLightFactoryNode
            ((UInterchangeBaseLightFactoryNode *)this);
  return;
}

// GetPrivateStaticClass @ 14e55a250

UClass * __cdecl UInterchangeDirectionalLightFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeDirectionalLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeDirectionalLightFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeDirectionalLightFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeDirectionalLightFactoryNode>,local_res8,
               UInterchangeBaseLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.InnerSingleton;
}

// StaticRegisterNativesUInterchangeDirectionalLightFactoryNode @ 14e57f2a0

void __cdecl
UInterchangeDirectionalLightFactoryNode::
StaticRegisterNativesUInterchangeDirectionalLightFactoryNode(void)

{
  return;
}

