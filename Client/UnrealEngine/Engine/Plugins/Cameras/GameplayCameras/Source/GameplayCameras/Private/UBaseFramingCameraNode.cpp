// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d5e09c0

UClass * __cdecl UBaseFramingCameraNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BaseFramingCameraNode",
               &Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUBaseFramingCameraNode,0x170,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseFramingCameraNode>,
               InternalVTableHelperCtorCaller<UBaseFramingCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton;
}

// UBaseFramingCameraNode @ 14d5fd660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBaseFramingCameraNode * __thiscall
UBaseFramingCameraNode::UBaseFramingCameraNode(UBaseFramingCameraNode *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  (this->TargetLocation).VariableID.Value = 0xffffffff;
  (this->TargetLocation).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TargetInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBaseFramingCameraNode__6B_;
  (this->TargetInfos).ArrayNum = 0;
  (this->TargetInfos).ArrayMax = 0;
  (this->TargetInfosDataID).Value = 0xffffffff;
  (this->SetTargetDistance).Value = false;
  (this->SetTargetDistance).VariableID.Value = 0xffffffff;
  (this->SetTargetDistance).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->InitializeWithIdealFraming).Value = true;
  (this->InitializeWithIdealFraming).VariableID.Value = 0xffffffff;
  (this->InitializeWithIdealFraming).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  FVector2dCameraParameter::FVector2dCameraParameter(&this->IdealFramingLocation);
  (this->ReframeDampingFactor).Value = 0.0;
  (this->ReframeDampingFactor).VariableID.Value = 0xffffffff;
  (this->ReframeDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->LowReframeDampingFactor).Value = 0.0;
  (this->LowReframeDampingFactor).VariableID.Value = 0xffffffff;
  (this->LowReframeDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ReengageTime).Value = 0.0;
  (this->ReengageTime).VariableID.Value = 0xffffffff;
  (this->ReengageTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->DisengageTime).Value = 0.0;
  (this->DisengageTime).VariableID.Value = 0xffffffff;
  (this->DisengageTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->TargetMovementAnticipationTime).Value = 0.0;
  (this->TargetMovementAnticipationTime).VariableID.Value = 0xffffffff;
  (this->TargetMovementAnticipationTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->DeadZone).Value.Left = 0.0;
  (this->DeadZone).Value.Top = 0.0;
  (this->DeadZone).Value.Right = 0.0;
  (this->DeadZone).Value.Bottom = 0.0;
  (this->DeadZone).VariableID.Value = 0xffffffff;
  (this->SoftZone).Value.Left = 0.0;
  (this->SoftZone).Value.Top = 0.0;
  (this->SoftZone).Value.Right = 0.0;
  (this->SoftZone).Value.Bottom = 0.0;
  (this->SoftZone).VariableID.Value = 0xffffffff;
  (this->TargetInfo_DEPRECATED).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TargetInfo_DEPRECATED).SocketName.ComparisonIndex = 0;
  (this->TargetInfo_DEPRECATED).SocketName.Number = 0;
  (this->TargetInfo_DEPRECATED).BoneName.ComparisonIndex = 0;
  (this->TargetInfo_DEPRECATED).BoneName.Number = 0;
  (this->TargetInfo_DEPRECATED).TargetShape = Point;
  (this->TargetInfo_DEPRECATED).TargetSize = 10.0;
  (this->TargetInfo_DEPRECATED).Weight = 1.0;
  return this;
}

// UBaseFramingCameraNode @ 14d5fd7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBaseFramingCameraNode * __thiscall
UBaseFramingCameraNode::UBaseFramingCameraNode
          (UBaseFramingCameraNode *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  (this->TargetLocation).VariableID.Value = 0xffffffff;
  (this->TargetLocation).Variable.field0_0x0.DebugPtr = (UVector3dCameraVariable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TargetInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBaseFramingCameraNode__6B_;
  (this->TargetInfos).ArrayNum = 0;
  (this->TargetInfos).ArrayMax = 0;
  (this->TargetInfosDataID).Value = 0xffffffff;
  (this->SetTargetDistance).Value = false;
  (this->SetTargetDistance).VariableID.Value = 0xffffffff;
  (this->SetTargetDistance).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->InitializeWithIdealFraming).Value = true;
  (this->InitializeWithIdealFraming).VariableID.Value = 0xffffffff;
  (this->InitializeWithIdealFraming).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  FVector2dCameraParameter::FVector2dCameraParameter(&this->IdealFramingLocation);
  (this->ReframeDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ReframeDampingFactor).VariableID.Value = 0xffffffff;
  (this->LowReframeDampingFactor).Value = -1.0;
  (this->LowReframeDampingFactor).VariableID = 0xffffffff;
  (this->LowReframeDampingFactor).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ReengageTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->DisengageTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->TargetMovementAnticipationTime).Variable.field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
  (this->ReengageTime).VariableID.Value = 0xffffffff;
  (this->DisengageTime).VariableID.Value = 0xffffffff;
  (this->TargetMovementAnticipationTime).Value = 0.0;
  (this->TargetMovementAnticipationTime).VariableID.Value = 0xffffffff;
  (this->DeadZone).Value.Left = 0.2;
  (this->DeadZone).Value.Top = 0.2;
  (this->DeadZone).Value.Right = 0.2;
  (this->DeadZone).Value.Bottom = 0.2;
  (this->DeadZone).VariableID.Value = 0xffffffff;
  (this->SoftZone).Value.Left = 0.05;
  (this->SoftZone).Value.Top = 0.05;
  (this->SoftZone).Value.Right = 0.05;
  (this->SoftZone).Value.Bottom = 0.05;
  (this->SoftZone).VariableID.Value = 0xffffffff;
  (this->TargetInfo_DEPRECATED).Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TargetInfo_DEPRECATED).SocketName.ComparisonIndex = 0;
  (this->TargetInfo_DEPRECATED).SocketName.Number = 0;
  (this->TargetInfo_DEPRECATED).BoneName.ComparisonIndex = 0;
  (this->TargetInfo_DEPRECATED).BoneName.Number = 0;
  (this->TargetInfo_DEPRECATED).TargetShape = Point;
  (this->TargetInfo_DEPRECATED).TargetSize = 10.0;
  (this->TargetInfo_DEPRECATED).Weight = 1.0;
  (this->SetTargetDistance).Value = true;
  (this->IdealFramingLocation).Value.field0_0x0._s_0.X = 0.5;
  (this->IdealFramingLocation).Value.field0_0x0._s_0.Y = 0.5;
  (this->ReframeDampingFactor).Value = 10.0;
  (this->ReengageTime).Value = 1.0;
  (this->DisengageTime).Value = 1.0;
  return this;
}

// ~UBaseFramingCameraNode @ 14d6006f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBaseFramingCameraNode::~UBaseFramingCameraNode(UBaseFramingCameraNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBaseFramingCameraNode__6B_;
  pFVar1 = (this->TargetInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetCustomCameraNodeParameters @ 14d619eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBaseFramingCameraNode::GetCustomCameraNodeParameters
          (UBaseFramingCameraNode *this,FCustomCameraNodeParameterInfos *param_1)

{
  UScriptStruct *pUVar1;
  FName *pFVar2;
  FName local_res8;
  
  pUVar1 = FCameraFramingZone::StaticStruct();
  pFVar2 = ::FName::FName(&local_res8,8,L"DeadZone",FNAME_Add);
  FCustomCameraNodeParameterInfos::AddBlendableParameter
            (param_1,*pFVar2,BlendableStruct,pUVar1,
             (uchar *)&(this->LowReframeDampingFactor).Variable,
             (FCameraVariableID *)&(this->DisengageTime).Variable);
  pUVar1 = FCameraFramingZone::StaticStruct();
  pFVar2 = ::FName::FName(&local_res8,8,L"SoftZone",FNAME_Add);
  FCustomCameraNodeParameterInfos::AddBlendableParameter
            (param_1,*pFVar2,BlendableStruct,pUVar1,(uchar *)&this->TargetMovementAnticipationTime,
             (FCameraVariableID *)&(this->DeadZone).Value.Right);
  return;
}

// GetPrivateStaticClass @ 14d61bca0

UClass * __cdecl UBaseFramingCameraNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BaseFramingCameraNode",
               &Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton,
               StaticRegisterNativesUBaseFramingCameraNode,0x170,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseFramingCameraNode>,
               InternalVTableHelperCtorCaller<UBaseFramingCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseFramingCameraNode.InnerSingleton;
}

// PostLoad @ 14d62e410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBaseFramingCameraNode::PostLoad(UBaseFramingCameraNode *this)

{
  int *piVar1;
  FCameraActorTargetInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  AActor *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  UCameraNode::PostLoad((UCameraNode *)this);
  if (((this->TargetInfos).ArrayNum == 0) &&
     (pFVar2 = &this->TargetInfo_DEPRECATED, (pFVar2->Actor).field0_0x0.DebugPtr != (AActor *)0x0))
  {
    pFVar3 = (this->TargetInfos).AllocatorInstance.Data;
    if ((pFVar3 <= pFVar2) &&
       ((pFVar2 < pFVar3 + (longlong)(this->TargetInfos).ArrayMax * 0x28 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->TargetInfos).ArrayNum;
    piVar1 = &(this->TargetInfos).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->TargetInfos).AllocatorInstance,piVar1);
    }
    lVar8 = (longlong)iVar7;
    (this->TargetInfos).ArrayNum = iVar7 + 1;
    pFVar3 = (this->TargetInfos).AllocatorInstance.Data;
    pAVar4 = (pFVar2->Actor).field0_0x0.DebugPtr;
    *(AActor **)(pFVar3 + lVar8 * 0x28) = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    *(FName *)(pFVar3 + lVar8 * 0x28 + 8) = (this->TargetInfo_DEPRECATED).SocketName;
    *(FName *)(pFVar3 + lVar8 * 0x28 + 0x10) = (this->TargetInfo_DEPRECATED).BoneName;
    pFVar3[lVar8 * 0x28 + 0x18] = (FScriptContainerElement)(this->TargetInfo_DEPRECATED).TargetShape
    ;
    *(float *)(pFVar3 + lVar8 * 0x28 + 0x1c) = (this->TargetInfo_DEPRECATED).TargetSize;
    *(float *)(pFVar3 + lVar8 * 0x28 + 0x20) = (this->TargetInfo_DEPRECATED).Weight;
    (pFVar2->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
    (this->TargetInfo_DEPRECATED).TargetShape = Point;
    (this->TargetInfo_DEPRECATED).SocketName.ComparisonIndex = 0;
    (this->TargetInfo_DEPRECATED).SocketName.Number = 0;
    (this->TargetInfo_DEPRECATED).BoneName.ComparisonIndex = 0;
    (this->TargetInfo_DEPRECATED).BoneName.Number = 0;
    (this->TargetInfo_DEPRECATED).TargetSize = 10.0;
    (this->TargetInfo_DEPRECATED).Weight = 1.0;
  }
  return;
}

// StaticRegisterNativesUBaseFramingCameraNode @ 14d639120

void __cdecl UBaseFramingCameraNode::StaticRegisterNativesUBaseFramingCameraNode(void)

{
  return;
}

// _getUObject @ 14d63f2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UBaseFramingCameraNode::_getUObject(UBaseFramingCameraNode *this)

{
  return (UObject *)&this[-1].TargetInfo_DEPRECATED;
}

// _getUObject`adjustor{16}' @ 14d63f2ac

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBaseFramingCameraNode::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UBaseFramingCameraNode::_getUObject_adjustor_16__(UBaseFramingCameraNode *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBaseFramingCameraNode *)&this[-1].TargetInfo_DEPRECATED.TargetShape);
  return (UObject *)pUVar1;
}

