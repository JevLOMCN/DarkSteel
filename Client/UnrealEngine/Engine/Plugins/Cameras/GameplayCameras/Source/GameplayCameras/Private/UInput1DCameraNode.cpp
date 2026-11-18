// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d647ad0

UClass * __cdecl UInput1DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input1DCameraNode",
               &Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton,
               StaticRegisterNativesUInput1DCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInput1DCameraNode>,
               InternalVTableHelperCtorCaller<UInput1DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton;
}

// UInput1DCameraNode @ 14d657510

UInput1DCameraNode * __thiscall
UInput1DCameraNode::UInput1DCameraNode(UInput1DCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UInput1DCameraNode @ 14d657550

UInput1DCameraNode * __thiscall
UInput1DCameraNode::UInput1DCameraNode(UInput1DCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UInput1DCameraNode @ 14d658530

void __thiscall UInput1DCameraNode::~UInput1DCameraNode(UInput1DCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660e10

UClass * __cdecl UInput1DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input1DCameraNode",
               &Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton,
               StaticRegisterNativesUInput1DCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInput1DCameraNode>,
               InternalVTableHelperCtorCaller<UInput1DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton;
}

// StaticRegisterNativesUInput1DCameraNode @ 14d6733f0

void __cdecl UInput1DCameraNode::StaticRegisterNativesUInput1DCameraNode(void)

{
  return;
}

