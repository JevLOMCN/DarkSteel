// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d645820

UClass * __cdecl UAutoRotateInput2DCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AutoRotateInput2DCameraNode",
               &Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton,
               StaticRegisterNativesUAutoRotateInput2DCameraNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutoRotateInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UAutoRotateInput2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton;
}

// UAutoRotateInput2DCameraNode @ 14d656600

UAutoRotateInput2DCameraNode * __thiscall
UAutoRotateInput2DCameraNode::UAutoRotateInput2DCameraNode
          (UAutoRotateInput2DCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  (this->DirectionVector).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->DirectionVector).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  (this->WaitTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->DeactivationThreshold).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Interpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->FreezeControlRotation).Value = false;
  (this->FreezeControlRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->EnableAutoRotate).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoRotateYaw).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoRotatePitch).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->InputNode).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  (this->WaitTime).Value = 1.0;
  (this->WaitTime).VariableID.Value = 0xffffffff;
  (this->DeactivationThreshold).Value = 0.01;
  (this->DeactivationThreshold).VariableID.Value = 0xffffffff;
  (this->FreezeControlRotation).VariableID.Value = 0xffffffff;
  (this->EnableAutoRotate).Value = true;
  (this->EnableAutoRotate).VariableID.Value = 0xffffffff;
  (this->AutoRotateYaw).Value = true;
  (this->AutoRotateYaw).VariableID.Value = 0xffffffff;
  (this->AutoRotatePitch).Value = true;
  (this->AutoRotatePitch).VariableID.Value = 0xffffffff;
  return this;
}

// UAutoRotateInput2DCameraNode @ 14d6566d0

UAutoRotateInput2DCameraNode * __thiscall
UAutoRotateInput2DCameraNode::UAutoRotateInput2DCameraNode
          (UAutoRotateInput2DCameraNode *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DirectionVector).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->WaitTime).Value = 1.0;
  (this->DirectionVector).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  (this->WaitTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->DeactivationThreshold).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->Interpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)0x0;
  (this->FreezeControlRotation).Value = false;
  (this->FreezeControlRotation).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->EnableAutoRotate).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoRotateYaw).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->AutoRotatePitch).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->InputNode).field0_0x0.DebugPtr = (UInput2DCameraNode *)0x0;
  (this->WaitTime).VariableID.Value = 0xffffffff;
  (this->DeactivationThreshold).Value = 0.01;
  (this->DeactivationThreshold).VariableID.Value = 0xffffffff;
  (this->FreezeControlRotation).VariableID.Value = 0xffffffff;
  (this->EnableAutoRotate).Value = true;
  (this->EnableAutoRotate).VariableID.Value = 0xffffffff;
  (this->AutoRotateYaw).Value = true;
  (this->AutoRotateYaw).VariableID.Value = 0xffffffff;
  (this->AutoRotatePitch).Value = true;
  (this->AutoRotatePitch).VariableID.Value = 0xffffffff;
  pFVar3 = ::FName::FName(&local_res8,"Interpolator");
  FVar2 = *pFVar3;
  pUVar4 = UCriticalDamperValueInterpolator::StaticClass();
  pUVar5 = FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  *(undefined4 *)(pUVar5 + 1) = 0x41200000;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (this->Interpolator).field0_0x0.DebugPtr = (UCameraValueInterpolator *)pUVar5;
  return this;
}

// ~UAutoRotateInput2DCameraNode @ 14d658160

void __thiscall
UAutoRotateInput2DCameraNode::~UAutoRotateInput2DCameraNode(UAutoRotateInput2DCameraNode *this)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660220

UClass * __cdecl UAutoRotateInput2DCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AutoRotateInput2DCameraNode",
               &Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton,
               StaticRegisterNativesUAutoRotateInput2DCameraNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutoRotateInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UAutoRotateInput2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton;
}

// OnBuild @ 14d663ae0

void __thiscall
UAutoRotateInput2DCameraNode::OnBuild
          (UAutoRotateInput2DCameraNode *this,FCameraObjectBuildContext *param_1)

{
  FCameraVariableDefinition *pFVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBuiltInCameraVariables *pFVar7;
  
  pFVar7 = UE::Cameras::FBuiltInCameraVariables::Get();
  pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  pFVar1 = &pFVar7->ControlRotationDefinition;
  if ((pFVar2 <= pFVar1) &&
     (pFVar1 < pFVar2 + (longlong)
                        (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax *
                        0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
  if (iVar6 == (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&(param_1->AllocationInfo).VariableTableInfo,
                       &(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax);
  }
  (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = iVar6 + 1;
  pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data +
           (longlong)iVar6 * 0x18;
  *(uint *)pFVar2 = (pFVar1->VariableID).Value;
  *(ECameraVariableType *)(pFVar2 + 4) = (pFVar7->ControlRotationDefinition).VariableType;
  pUVar3 = (pFVar7->ControlRotationDefinition).BlendableStructType.field0_0x0.DebugPtr;
  *(UScriptStruct **)(pFVar2 + 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar2[0x10] = (FScriptContainerElement)(pFVar7->ControlRotationDefinition).bIsPrivate;
  pFVar2[0x11] = (FScriptContainerElement)(pFVar7->ControlRotationDefinition).bIsInput;
  pFVar1 = &pFVar7->FreezeControlRotationDefinition;
  pFVar2[0x12] = (FScriptContainerElement)(pFVar7->ControlRotationDefinition).bAutoReset;
  pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  if ((pFVar2 <= pFVar1) &&
     (pFVar1 < pFVar2 + (longlong)
                        (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax *
                        0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
  if (iVar6 == (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&(param_1->AllocationInfo).VariableTableInfo,
                       &(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax);
  }
  (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = iVar6 + 1;
  pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data +
           (longlong)iVar6 * 0x18;
  *(uint *)pFVar2 = (pFVar1->VariableID).Value;
  *(ECameraVariableType *)(pFVar2 + 4) = (pFVar7->FreezeControlRotationDefinition).VariableType;
  pUVar3 = (pFVar7->FreezeControlRotationDefinition).BlendableStructType.field0_0x0.DebugPtr;
  *(UScriptStruct **)(pFVar2 + 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar2[0x10] = (FScriptContainerElement)(pFVar7->FreezeControlRotationDefinition).bIsPrivate;
  pFVar2[0x11] = (FScriptContainerElement)(pFVar7->FreezeControlRotationDefinition).bIsInput;
  pFVar2[0x12] = (FScriptContainerElement)(pFVar7->FreezeControlRotationDefinition).bAutoReset;
  return;
}

// OnBuildEvaluator @ 14d665610

FCameraNodeEvaluator * __thiscall
UAutoRotateInput2DCameraNode::OnBuildEvaluator
          (UAutoRotateInput2DCameraNode *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x108,8);
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1[2].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[3]._padding_ = 0;
  pFVar1[3].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[4]._padding_ = 0;
  pFVar1[4].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  pFVar1[5]._padding_ = 0;
  pFVar1[5].PrivateCameraNode.field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1[5].PrivateFlags = 0;
  *(undefined8 *)&pFVar1[7].PrivateFlags = 0;
  *(undefined1 *)&pFVar1[8]._padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FAutoRotateInput2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&pFVar1[2].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[2].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[3].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[3].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[4].bAutoCameraPoseMovementTrail = 0xffffffff;
  pFVar1[4].PrivateFlags = ~None;
  *(undefined4 *)&pFVar1[5].bAutoCameraPoseMovementTrail = 0xffffffff;
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,pFVar1);
  return pFVar1;
}

// OnGetChildren @ 14d667560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<TObjectPtr<UCameraNode>_> * __thiscall
UAutoRotateInput2DCameraNode::OnGetChildren
          (UAutoRotateInput2DCameraNode *this,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TObjectChildrenView<TObjectPtr<UCameraNode>_> *pTVar3;
  ForElementType<TObjectPtr<UCameraNode>_> FVar4;
  ulonglong uVar5;
  undefined1 auStackY_88 [32];
  TObjectPtr<UInput2DCameraNode>_u_0 local_48;
  ForElementType<TObjectPtr<UCameraNode>_> local_40;
  undefined4 local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48 = (TObjectPtr<UInput2DCameraNode>_u_0)(this->InputNode).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_48.DebugPtr != (UInput2DCameraNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
  local_18 = 1;
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  local_40.SecondaryData = (ForElementType<TObjectPtr<UCameraNode>_>)0x0;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_>
            (8,8,1,0,&local_40,1,&local_14);
  FVar4 = (ForElementType<TObjectPtr<UCameraNode>_>)&local_40;
  if (local_40.SecondaryData != (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
    FVar4 = local_40.SecondaryData;
  }
  ConstructItems<TObjectPtr<UCameraNode>,TObjectPtr<UCameraNode>,int>
            ((void *)FVar4,(TObjectPtr<UCameraNode> *)&local_48.ObjectPtr,1);
  uVar5 = (ulonglong)(__return_storage_ptr__->Storage).TypeIndex;
  if (1 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TObjectChildrenView<TObjectPtr<UCameraNode>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<TArrayView<TObjectPtr<UCameraNode>,int>_>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<TObjectPtr<UCameraNode>,int>,TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(__return_storage_ptr__);
  }
  (__return_storage_ptr__->Storage)._padding_ = 0;
  if (local_40.SecondaryData == (ForElementType<TObjectPtr<UCameraNode>_>)0x0) {
    (__return_storage_ptr__->Storage)._padding_ = local_40.InlineData._0_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_40.InlineData._8_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_40.InlineData._16_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_40.InlineData._24_8_;
  }
  (__return_storage_ptr__->Storage)._padding_ = (longlong)local_40.SecondaryData;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = local_18;
  *(int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4) = local_14;
  (__return_storage_ptr__->Storage).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAutoRotateInput2DCameraNode @ 14d6732c0

void __cdecl UAutoRotateInput2DCameraNode::StaticRegisterNativesUAutoRotateInput2DCameraNode(void)

{
  return;
}

