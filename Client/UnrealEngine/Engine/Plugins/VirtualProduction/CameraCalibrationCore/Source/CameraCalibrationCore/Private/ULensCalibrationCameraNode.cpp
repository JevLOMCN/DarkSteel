// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// StaticClass @ 14d67a270

UClass * __cdecl ULensCalibrationCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensCalibrationCameraNode",
               &Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton,
               StaticRegisterNativesULensCalibrationCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULensCalibrationCameraNode>,
               InternalVTableHelperCtorCaller<ULensCalibrationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton;
}

// ULensCalibrationCameraNode @ 14d6aaea0

ULensCalibrationCameraNode * __thiscall
ULensCalibrationCameraNode::ULensCalibrationCameraNode
          (ULensCalibrationCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->LensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  return this;
}

// ULensCalibrationCameraNode @ 14d6aaee0

ULensCalibrationCameraNode * __thiscall
ULensCalibrationCameraNode::ULensCalibrationCameraNode
          (ULensCalibrationCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->LensFile).field0_0x0.DebugPtr = (ULensFile *)0x0;
  return this;
}

// ~ULensCalibrationCameraNode @ 14d6ace50

void __thiscall
ULensCalibrationCameraNode::~ULensCalibrationCameraNode(ULensCalibrationCameraNode *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d6d8540

UClass * __cdecl ULensCalibrationCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensCalibrationCameraNode",
               &Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton,
               StaticRegisterNativesULensCalibrationCameraNode,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULensCalibrationCameraNode>,
               InternalVTableHelperCtorCaller<ULensCalibrationCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensCalibrationCameraNode.InnerSingleton;
}

// OnBuildEvaluator @ 14d6e4a30

FCameraNodeEvaluator * __thiscall
ULensCalibrationCameraNode::OnBuildEvaluator
          (ULensCalibrationCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  int *piVar1;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCameraNodeEvaluator *pFVar6;
  FCameraNodeEvaluator *local_18 [2];
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar6 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x30,8);
  *(undefined4 *)&pFVar6->field_0x9 = 0;
  *(undefined2 *)&pFVar6->field_0xd = 0;
  pFVar6->field_0xf = 0;
  *(undefined8 *)&pFVar6->PrivateFlags = 7;
  pFVar6->bAutoCameraPoseMovementTrail = true;
  (pFVar6->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar6->_padding_ = (longlong)&___7FLensCalibrationCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar6[1]._padding_ = 0;
  *(undefined8 *)&pFVar6[1].bAutoCameraPoseMovementTrail = 0;
  pFVar2 = (this_00->ObjectInfos).AllocatorInstance.Data;
  local_18[0] = pFVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this_00->ObjectInfos).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCameraNodeEvaluator *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this_00->ObjectInfos).ArrayNum;
  piVar1 = &(this_00->ObjectInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this_00->ObjectInfos).AllocatorInstance,piVar1);
  }
  (this_00->ObjectInfos).ArrayNum = iVar5 + 1;
  *(FCameraNodeEvaluator **)((this_00->ObjectInfos).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  return pFVar6;
}

// StaticRegisterNativesULensCalibrationCameraNode @ 14d6f01b0

void __cdecl ULensCalibrationCameraNode::StaticRegisterNativesULensCalibrationCameraNode(void)

{
  return;
}

