// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticClass @ 14d644be0

UClass * __cdecl UCameraShakeCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraShakeCameraNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton;
}

// UCameraShakeCameraNode @ 14d656eb0

UCameraShakeCameraNode * __thiscall
UCameraShakeCameraNode::UCameraShakeCameraNode(UCameraShakeCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
  FCameraShakeAssetReference::FCameraShakeAssetReference(&this->CameraShakeReference);
  this->EvaluationMode = VisualLayer;
  return this;
}

// UCameraShakeCameraNode @ 14d656f00

UCameraShakeCameraNode * __thiscall
UCameraShakeCameraNode::UCameraShakeCameraNode
          (UCameraShakeCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
  FCameraShakeAssetReference::FCameraShakeAssetReference(&this->CameraShakeReference);
  this->EvaluationMode = VisualLayer;
  return this;
}

// ~UCameraShakeCameraNode @ 14d658280

void __thiscall UCameraShakeCameraNode::~UCameraShakeCameraNode(UCameraShakeCameraNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
  (this->CameraShakeReference)._padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pvVar1 = (void *)(this->CameraShakeReference)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->CameraShakeReference)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraShakeReference)._padding_);
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetCustomCameraNodeParameters @ 14d65fd30

void __thiscall
UCameraShakeCameraNode::GetCustomCameraNodeParameters
          (UCameraShakeCameraNode *this,FCustomCameraNodeParameterInfos *param_1)

{
  FBaseCameraObjectReference::GetCustomCameraNodeParameters
            ((FBaseCameraObjectReference *)&this->_padding_,param_1);
  return;
}

// GetPrivateStaticClass @ 14d6605d0

UClass * __cdecl UCameraShakeCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton,
               StaticRegisterNativesUCameraShakeCameraNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton;
}

// OnBuild @ 14d664480

void __thiscall
UCameraShakeCameraNode::OnBuild(UCameraShakeCameraNode *this,FCameraObjectBuildContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCameraShakeAsset *pUVar3;
  FCameraBuildLog *this_00;
  FCameraVariableDefinition *pFVar4;
  FCameraContextDataDefinition *pFVar5;
  FText *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FText local_58;
  FCameraObjectAllocationInfo local_48;
  
  pUVar3 = (this->CameraShakeReference).CameraShake.field0_0x0.DebugPtr;
  if (pUVar3 == (UCameraShakeAsset *)0x0) {
    this_00 = param_1->BuildLog;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"CameraShakeCameraNode",L"MissingCameraShake",
                        L"No camera shake specified on camera shake node.");
    UE::Cameras::FCameraBuildLog::AddMessage(this_00,Error,(UObject *)this,pFVar6);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    local_48.EvaluatorInfo = *(FCameraNodeEvaluatorAllocationInfo *)&pUVar3->_padding_;
    local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    iVar2 = (int)pUVar3->_padding_;
    pFVar4 = (FCameraVariableDefinition *)pUVar3->_padding_;
    local_48.VariableTableInfo.VariableDefinitions.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_48.VariableTableInfo.VariableDefinitions.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,0,(ForAnyElementType *)&local_48.VariableTableInfo,iVar2,
                 &local_48.VariableTableInfo.VariableDefinitions.ArrayMax);
      ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
                (local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data,pFVar4,iVar2)
      ;
    }
    local_48.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    iVar2 = (int)pUVar3->_padding_;
    pFVar5 = (FCameraContextDataDefinition *)pUVar3->_padding_;
    local_48.ContextDataTableInfo.DataDefinitions.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_48.ContextDataTableInfo.DataDefinitions.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,0,(ForAnyElementType *)&local_48.ContextDataTableInfo,iVar2,
                 &local_48.ContextDataTableInfo.DataDefinitions.ArrayMax);
      ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
                (local_48.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data,pFVar5,iVar2);
    }
    iVar2 = local_48.VariableTableInfo.VariableDefinitions.ArrayNum;
    if (this->EvaluationMode == VisualLayer) {
      pFVar1 = local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data +
               (longlong)local_48.VariableTableInfo.VariableDefinitions.ArrayNum * 0x18;
      FVar7.Data = local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
      while( true ) {
        if (local_48.VariableTableInfo.VariableDefinitions.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FCameraVariableDefinition,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        FVar7.Data[0x10] = (FScriptContainerElement)0x0;
        FVar7.Data = FVar7.Data + 0x18;
      }
    }
    FCameraObjectAllocationInfo::Append(&param_1->AllocationInfo,&local_48);
    if (local_48.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data);
    }
    if (local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data);
    }
  }
  return;
}

// OnBuildEvaluator @ 14d665840

FCameraNodeEvaluator * __thiscall
UCameraShakeCameraNode::OnBuildEvaluator
          (UCameraShakeCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  this_01 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
            BuildObjectUninitialized(this_00,0x40,8);
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->bAutoCameraPoseMovementTrail = true;
  this_01->PrivateFlags = Default;
  *(undefined8 *)&this_01[1].bAutoCameraPoseMovementTrail = 0;
  this_01[1].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&this_01[1].PrivateFlags = 0;
  this_01->_padding_ = (longlong)&___7FCameraShakeCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined1 *)&this_01[1]._padding_ = 1;
  UE::Cameras::FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,NeedsParameterUpdate);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return this_01;
}

// OnPreBuild @ 14d668cc0

void __thiscall
UCameraShakeCameraNode::OnPreBuild(UCameraShakeCameraNode *this,FCameraBuildLog *param_1)

{
  UCameraShakeAsset *this_00;
  
  this_00 = (this->CameraShakeReference).CameraShake.field0_0x0.DebugPtr;
  if (this_00 != (UCameraShakeAsset *)0x0) {
    UCameraShakeAsset::BuildCameraShake(this_00,param_1);
  }
  FBaseCameraObjectReference::RebuildParametersIfNeeded
            ((FBaseCameraObjectReference *)&this->CameraShakeReference);
  return;
}

// StaticRegisterNativesUCameraShakeCameraNode @ 14d673340

void __cdecl UCameraShakeCameraNode::StaticRegisterNativesUCameraShakeCameraNode(void)

{
  return;
}

// _getUObject @ 14d676480

UObject * __thiscall UCameraShakeCameraNode::_getUObject(UCameraShakeCameraNode *this)

{
  return (UObject *)&this[-1].CameraShakeReference._padding_;
}

// _getUObject`adjustor{16}' @ 14d67648c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCameraShakeCameraNode::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UCameraShakeCameraNode::_getUObject_adjustor_16__(UCameraShakeCameraNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCameraShakeCameraNode *)&this[-1].CameraShakeReference.CameraShake);
  return (UObject *)pUVar1;
}

