// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d5e1eb0

UClass * __cdecl USimpleFixedTimeBlendCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SimpleFixedTimeBlendCameraNode",
               &Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSimpleFixedTimeBlendCameraNode,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleFixedTimeBlendCameraNode>,
               InternalVTableHelperCtorCaller<USimpleFixedTimeBlendCameraNode>,local_res8,
               USimpleBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton;
}

// USimpleFixedTimeBlendCameraNode @ 14d5ff6d0

USimpleFixedTimeBlendCameraNode * __thiscall
USimpleFixedTimeBlendCameraNode::USimpleFixedTimeBlendCameraNode
          (USimpleFixedTimeBlendCameraNode *this,FVTableHelper *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  (this->BlendTime).Value = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->BlendTime).VariableID.Value = 0xffffffff;
  (this->BlendTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  return this;
}

// USimpleFixedTimeBlendCameraNode @ 14d5ff720

USimpleFixedTimeBlendCameraNode * __thiscall
USimpleFixedTimeBlendCameraNode::USimpleFixedTimeBlendCameraNode
          (USimpleFixedTimeBlendCameraNode *this,FObjectInitializer *param_1)

{
  UBlendCameraNode::UBlendCameraNode((UBlendCameraNode *)this,param_1);
  (this->BlendTime).Value = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->BlendTime).VariableID.Value = 0xffffffff;
  (this->BlendTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  return this;
}

// ~USimpleFixedTimeBlendCameraNode @ 14d600f70

void __thiscall
USimpleFixedTimeBlendCameraNode::~USimpleFixedTimeBlendCameraNode
          (USimpleFixedTimeBlendCameraNode *this)

{
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USimpleBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UBlendCameraNode::~UBlendCameraNode((UBlendCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d61d620

UClass * __cdecl USimpleFixedTimeBlendCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SimpleFixedTimeBlendCameraNode",
               &Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton,
               StaticRegisterNativesUSimpleFixedTimeBlendCameraNode,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleFixedTimeBlendCameraNode>,
               InternalVTableHelperCtorCaller<USimpleFixedTimeBlendCameraNode>,local_res8,
               USimpleBlendCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleFixedTimeBlendCameraNode.InnerSingleton;
}

// StaticRegisterNativesUSimpleFixedTimeBlendCameraNode @ 14d639460

void __cdecl
USimpleFixedTimeBlendCameraNode::StaticRegisterNativesUSimpleFixedTimeBlendCameraNode(void)

{
  return;
}

