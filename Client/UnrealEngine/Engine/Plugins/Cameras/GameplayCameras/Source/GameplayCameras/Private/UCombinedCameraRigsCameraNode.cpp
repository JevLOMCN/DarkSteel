// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d575e50

UClass * __cdecl UCombinedCameraRigsCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CombinedCameraRigsCameraNode",
               &Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton,
               StaticRegisterNativesUCombinedCameraRigsCameraNode,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCombinedCameraRigsCameraNode>,
               InternalVTableHelperCtorCaller<UCombinedCameraRigsCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton;
}

// UCombinedCameraRigsCameraNode @ 14d58fb50

UCombinedCameraRigsCameraNode * __thiscall
UCombinedCameraRigsCameraNode::UCombinedCameraRigsCameraNode
          (UCombinedCameraRigsCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->CameraRigReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigReferences).ArrayNum = 0;
  (this->CameraRigReferences).ArrayMax = 0;
  return this;
}

// UCombinedCameraRigsCameraNode @ 14d58fb90

UCombinedCameraRigsCameraNode * __thiscall
UCombinedCameraRigsCameraNode::UCombinedCameraRigsCameraNode
          (UCombinedCameraRigsCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->CameraRigReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigReferences).ArrayNum = 0;
  (this->CameraRigReferences).ArrayMax = 0;
  return this;
}

// ~UCombinedCameraRigsCameraNode @ 14d591de0

void __thiscall
UCombinedCameraRigsCameraNode::~UCombinedCameraRigsCameraNode(UCombinedCameraRigsCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  DestructItems<FCameraRigAssetReference,int>
            ((FCameraRigAssetReference *)(this->CameraRigReferences).AllocatorInstance.Data,
             (this->CameraRigReferences).ArrayNum);
  pFVar1 = (this->CameraRigReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetAllCombinationCameraRigs @ 14d5a6020

void __cdecl
UCombinedCameraRigsCameraNode::GetAllCombinationCameraRigs
          (UCameraRigAsset *param_1,
          TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TObjectPtr<UCameraNode> *this;
  UCameraNode *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong lVar9;
  UCameraRigAsset *local_res8;
  undefined1 local_res18 [8];
  longlong local_28 [2];
  
  if (param_1 == (UCameraRigAsset *)0x0) {
    return;
  }
  this = &param_1->RootNode;
  local_res8 = param_1;
  if ((this->field0_0x0).DebugPtr != (UCameraNode *)0x0) {
    pUVar7 = StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this,pUVar7);
    if ((bVar4) && (pUVar1 = (this->field0_0x0).DebugPtr, pUVar1 != (UCameraNode *)0x0)) {
      lVar9 = pUVar1[1]._padding_;
      iVar6 = (int)pUVar1[1]._padding_;
      lVar8 = (longlong)iVar6 * 0x130 + lVar9;
      while( true ) {
        if ((int)pUVar1[1]._padding_ != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FCameraRigAssetReference_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (lVar9 == lVar8) break;
        local_28[0] = *(longlong *)(lVar9 + 0x38);
        if (local_28[0] != 0) {
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
        }
        lVar9 = lVar9 + 0x130;
      }
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res8) &&
      ((FScriptContainerElement *)&local_res8 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(UCameraRigAsset **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res8;
  return;
}

// GetPrivateStaticClass @ 14d5a9dd0

UClass * __cdecl UCombinedCameraRigsCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CombinedCameraRigsCameraNode",
               &Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton,
               StaticRegisterNativesUCombinedCameraRigsCameraNode,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCombinedCameraRigsCameraNode>,
               InternalVTableHelperCtorCaller<UCombinedCameraRigsCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d5b8a60

FCameraNodeEvaluator * __thiscall
UCombinedCameraRigsCameraNode::OnBuildEvaluator
          (UCombinedCameraRigsCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar1->field_0x9 = 0;
  *(undefined2 *)&pFVar1->field_0xd = 0;
  pFVar1->field_0xf = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 7;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1[1]._padding_ = 0;
  *(undefined8 *)&pFVar1[1].bAutoCameraPoseMovementTrail = 0;
  pFVar1->_padding_ = (longlong)&___7FCombinedCameraRigsCameraNodeEvaluator_Cameras_UE__6B_;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// StaticRegisterNativesUCombinedCameraRigsCameraNode @ 14d5d0e40

void __cdecl UCombinedCameraRigsCameraNode::StaticRegisterNativesUCombinedCameraRigsCameraNode(void)

{
  return;
}

