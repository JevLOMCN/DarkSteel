// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5709a0

UClass * __cdecl UDefaultRootCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DefaultRootCameraNode",
               &Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton,
               StaticRegisterNativesUDefaultRootCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDefaultRootCameraNode>,
               InternalVTableHelperCtorCaller<UDefaultRootCameraNode>,local_res8,
               URootCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton;
}

// UDefaultRootCameraNode @ 14d58fc30

UDefaultRootCameraNode * __thiscall
UDefaultRootCameraNode::UDefaultRootCameraNode(UDefaultRootCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->BaseLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  (this->MainLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  (this->GlobalLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  (this->VisualLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  return this;
}

// UDefaultRootCameraNode @ 14d58fc80

UDefaultRootCameraNode * __thiscall
UDefaultRootCameraNode::UDefaultRootCameraNode
          (UDefaultRootCameraNode *this,FObjectInitializer *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  UBlendStackCameraNode *pUVar3;
  FName local_res8;
  
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BaseLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->MainLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  (this->GlobalLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  (this->VisualLayer).field0_0x0.DebugPtr = (UBlendStackCameraNode *)0x0;
  ::FName::FName(&local_res8,L"BaseLayer");
  FVar1 = local_res8;
  pUVar2 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
  pUVar3 = (UBlendStackCameraNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar2,pUVar2,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UBlendStackCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3->BlendStackType = AdditivePersistent;
  pUVar3->Layer = Base;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->BaseLayer).field0_0x0.DebugPtr = pUVar3;
  ::FName::FName(&local_res8,L"MainLayer");
  FVar1 = local_res8;
  pUVar2 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
  pUVar3 = (UBlendStackCameraNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar2,pUVar2,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UBlendStackCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3->BlendStackType = IsolatedTransient;
  pUVar3->Layer = Main;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MainLayer).field0_0x0.DebugPtr = pUVar3;
  ::FName::FName(&local_res8,L"GlobalLayer");
  FVar1 = local_res8;
  pUVar2 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
  pUVar3 = (UBlendStackCameraNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar2,pUVar2,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UBlendStackCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3->BlendStackType = AdditivePersistent;
  pUVar3->Layer = Global;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->GlobalLayer).field0_0x0.DebugPtr = pUVar3;
  ::FName::FName(&local_res8,L"VisualLayer");
  pUVar2 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
  pUVar3 = (UBlendStackCameraNode *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,local_res8,pUVar2,pUVar2,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UBlendStackCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3->BlendStackType = AdditivePersistent;
  pUVar3->Layer = Visual;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->VisualLayer).field0_0x0.DebugPtr = pUVar3;
  return this;
}

// ~UDefaultRootCameraNode @ 14d591e40

void __thiscall UDefaultRootCameraNode::~UDefaultRootCameraNode(UDefaultRootCameraNode *this)

{
  this->_padding_ = (longlong)&URootCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&URootCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9f50

UClass * __cdecl UDefaultRootCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DefaultRootCameraNode",
               &Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton,
               StaticRegisterNativesUDefaultRootCameraNode,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDefaultRootCameraNode>,
               InternalVTableHelperCtorCaller<UDefaultRootCameraNode>,local_res8,
               URootCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d5b8ad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluator * __thiscall
UDefaultRootCameraNode::OnBuildEvaluator
          (UDefaultRootCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FDefaultRootCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0xa80,0x10);
  memset(pFVar1,0,0xa80);
  pFVar1 = UE::Cameras::FDefaultRootCameraNodeEvaluator::FDefaultRootCameraNodeEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// StaticRegisterNativesUDefaultRootCameraNode @ 14d5d0e60

void __cdecl UDefaultRootCameraNode::StaticRegisterNativesUDefaultRootCameraNode(void)

{
  return;
}

