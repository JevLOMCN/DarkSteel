// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d6451c0

UClass * __cdecl UInput2DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input2DCameraNode",
               &Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInput2DCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UInput2DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton;
}

// UInput2DCameraNode @ 14d657590

UInput2DCameraNode * __thiscall
UInput2DCameraNode::UInput2DCameraNode(UInput2DCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UInput2DCameraNode @ 14d6575d0

UInput2DCameraNode * __thiscall
UInput2DCameraNode::UInput2DCameraNode(UInput2DCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UInput2DCameraNode @ 14d658550

void __thiscall UInput2DCameraNode::~UInput2DCameraNode(UInput2DCameraNode *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660ed0

UClass * __cdecl UInput2DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input2DCameraNode",
               &Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton,
               StaticRegisterNativesUInput2DCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UInput2DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton;
}

// StaticRegisterNativesUInput2DCameraNode @ 14d673400

void __cdecl UInput2DCameraNode::StaticRegisterNativesUInput2DCameraNode(void)

{
  return;
}

