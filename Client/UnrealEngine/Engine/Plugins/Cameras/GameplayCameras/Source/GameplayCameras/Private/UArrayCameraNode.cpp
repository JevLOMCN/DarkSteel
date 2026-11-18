// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d5e03b0

UClass * __cdecl UArrayCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ArrayCameraNode",
               &Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton,
               StaticRegisterNativesUArrayCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UArrayCameraNode>,
               InternalVTableHelperCtorCaller<UArrayCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton;
}

// UArrayCameraNode @ 14d5fd300

UArrayCameraNode * __thiscall
UArrayCameraNode::UArrayCameraNode(UArrayCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// UArrayCameraNode @ 14d5fd340

UArrayCameraNode * __thiscall
UArrayCameraNode::UArrayCameraNode(UArrayCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// ~UArrayCameraNode @ 14d600610

void __thiscall UArrayCameraNode::~UArrayCameraNode(UArrayCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetEvaluatorAllocationInfo @ 14d61a2d0

TTuple<int,int> __cdecl UArrayCameraNode::GetEvaluatorAllocationInfo(void)

{
  TTuple<int,int> in_RCX;
  
  *(undefined4 *)in_RCX = 0x30;
  *(undefined4 *)((longlong)in_RCX + 4) = 8;
  return in_RCX;
}

// GetPrivateStaticClass @ 14d61b8e0

UClass * __cdecl UArrayCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ArrayCameraNode",
               &Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton,
               StaticRegisterNativesUArrayCameraNode,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UArrayCameraNode>,
               InternalVTableHelperCtorCaller<UArrayCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArrayCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d624e10

FCameraNodeEvaluator * __thiscall
UArrayCameraNode::OnBuildEvaluator(UArrayCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x30,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  this_01[1]._padding_ = 0;
  *(undefined8 *)&this_01[1].bAutoCameraPoseMovementTrail = 0;
  this_01->_padding_ = (longlong)&___7FArrayCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// OnGetChildren @ 14d627840

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UArrayCameraNode::OnGetChildren
          (UArrayCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar5;
  undefined4 uStack_c;
  
  pFVar2 = (this->Children).AllocatorInstance.Data;
  iVar1 = (this->Children).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->Storage)._padding_ = (longlong)pFVar2;
  (__return_storage_ptr__->Storage)._padding_ = CONCAT44(uStack_c,iVar1);
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// StaticRegisterNativesUArrayCameraNode @ 14d6390d0

void __cdecl UArrayCameraNode::StaticRegisterNativesUArrayCameraNode(void)

{
  return;
}

