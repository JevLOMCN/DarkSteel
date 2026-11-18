// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// StaticClass @ 14d647880

UClass * __cdecl UCameraRigInput2DSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInput2DSlot",
               &Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton,
               StaticRegisterNativesUCameraRigInput2DSlot,0xf0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigInput2DSlot>,
               InternalVTableHelperCtorCaller<UCameraRigInput2DSlot>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton;
}

// UCameraRigInput2DSlot @ 14d656cb0

UCameraRigInput2DSlot * __thiscall
UCameraRigInput2DSlot::UCameraRigInput2DSlot(UCameraRigInput2DSlot *this,FVTableHelper *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  (this->RevertAxisX).VariableID.Value = 0xffffffff;
  (this->ClampX).MinValue = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->NormalizeX).MaxValue = 360.0;
  (this->NormalizeY).MaxValue = 360.0;
  (this->ClampX).MaxValue = 0.0;
  (this->ClampX).bClampMin = false;
  (this->ClampX).bClampMax = false;
  (this->ClampY).MinValue = 0.0;
  (this->ClampY).MaxValue = 0.0;
  (this->ClampY).bClampMin = false;
  (this->ClampY).bClampMax = false;
  (this->NormalizeX).bNormalize = false;
  (this->NormalizeY).bNormalize = false;
  (this->RevertAxisX).Value = false;
  (this->RevertAxisX).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->RevertAxisY).Value = false;
  (this->RevertAxisY).VariableID.Value = 0xffffffff;
  (this->RevertAxisY).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->Speed).Value.field0_0x0._s_0.X = 1.0;
  (this->Speed).Value.field0_0x0._s_0.Y = 1.0;
  (this->Speed).VariableID.Value = 0xffffffff;
  (this->Speed).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->BuiltInVariable = YawPitch;
  (this->CustomVariable).VariableID.Value = 0xffffffff;
  (this->CustomVariable).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->bIsPreBlended = true;
  (this->InputSlotParameters_DEPRECATED).bIsAccumulated = true;
  (this->InputSlotParameters_DEPRECATED).bIsPreBlended = true;
  this->SpeedVariableID = 0xffffffff;
  this->VariableID = 0xffffffff;
  return this;
}

// UCameraRigInput2DSlot @ 14d656db0

UCameraRigInput2DSlot * __thiscall
UCameraRigInput2DSlot::UCameraRigInput2DSlot
          (UCameraRigInput2DSlot *this,FObjectInitializer *param_1)

{
  UCameraNode::UCameraNode((UCameraNode *)this,param_1);
  (this->RevertAxisX).VariableID.Value = 0xffffffff;
  (this->ClampX).MinValue = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->NormalizeX).MaxValue = 360.0;
  (this->NormalizeY).MaxValue = 360.0;
  (this->ClampX).MaxValue = 0.0;
  (this->ClampX).bClampMin = false;
  (this->ClampX).bClampMax = false;
  (this->ClampY).MinValue = 0.0;
  (this->ClampY).MaxValue = 0.0;
  (this->ClampY).bClampMin = false;
  (this->ClampY).bClampMax = false;
  (this->NormalizeX).bNormalize = false;
  (this->NormalizeY).bNormalize = false;
  (this->RevertAxisX).Value = false;
  (this->RevertAxisX).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->RevertAxisY).Value = false;
  (this->RevertAxisY).VariableID.Value = 0xffffffff;
  (this->RevertAxisY).Variable.field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
  (this->Speed).Value.field0_0x0._s_0.X = 1.0;
  (this->Speed).Value.field0_0x0._s_0.Y = 1.0;
  (this->Speed).VariableID.Value = 0xffffffff;
  (this->Speed).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->BuiltInVariable = YawPitch;
  (this->CustomVariable).VariableID.Value = 0xffffffff;
  (this->CustomVariable).Variable.field0_0x0.DebugPtr = (UVector2dCameraVariable *)0x0;
  this->bIsPreBlended = true;
  (this->InputSlotParameters_DEPRECATED).bIsAccumulated = true;
  (this->InputSlotParameters_DEPRECATED).bIsPreBlended = true;
  this->SpeedVariableID = 0xffffffff;
  this->VariableID = 0xffffffff;
  return this;
}

// ~UCameraRigInput2DSlot @ 14d658260

void __thiscall UCameraRigInput2DSlot::~UCameraRigInput2DSlot(UCameraRigInput2DSlot *this)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  return;
}

// GetPrivateStaticClass @ 14d660510

UClass * __cdecl UCameraRigInput2DSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInput2DSlot",
               &Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton,
               StaticRegisterNativesUCameraRigInput2DSlot,0xf0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigInput2DSlot>,
               InternalVTableHelperCtorCaller<UCameraRigInput2DSlot>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton;
}

// OnBuild @ 14d6640e0

void __thiscall
UCameraRigInput2DSlot::OnBuild(UCameraRigInput2DSlot *this,FCameraObjectBuildContext *param_1)

{
  UVector2dCameraVariable *this_00;
  UScriptStruct *pUVar1;
  FCameraBuildLog *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FBuiltInCameraVariables *this_02;
  FCameraVariableDefinition *pFVar8;
  FText *pFVar9;
  FString local_88;
  FText local_78;
  uint local_68;
  ECameraVariableType local_64;
  UScriptStruct *local_60;
  FScriptContainerElement local_58;
  FScriptContainerElement local_57;
  FScriptContainerElement local_56;
  uint local_50;
  ECameraVariableType local_4c;
  UScriptStruct *local_48;
  FScriptContainerElement local_40;
  FScriptContainerElement local_3f;
  FScriptContainerElement local_3e;
  FCameraVariableDefinition local_38;
  
  local_68 = 0xffffffff;
  local_64 = Boolean;
  local_60 = (UScriptStruct *)0x0;
  local_58 = (FScriptContainerElement)0x0;
  local_56 = (FScriptContainerElement)0x0;
  if (this->BuiltInVariable == None) {
    this_00 = (this->CustomVariable).Variable.field0_0x0.DebugPtr;
    if (this_00 == (UVector2dCameraVariable *)0x0) {
      if (this->bIsPreBlended == false) {
        return;
      }
      this_01 = param_1->BuildLog;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"CameraRigInputSlot",L"PreBlendedInputSlotRequiresVariable",
                          L"An input slot with pre-blend enabled must specify a variable (built-in or custom) to blend with other input slots"
                         );
      UE::Cameras::FCameraBuildLog::AddMessage(this_01,Error,(UObject *)this,pFVar9);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      goto LAB_14d6641da;
    }
    pFVar8 = UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this_00,&local_38);
  }
  else {
    this_02 = UE::Cameras::FBuiltInCameraVariables::Get();
    pFVar8 = UE::Cameras::FBuiltInCameraVariables::GetDefinition(this_02,this->BuiltInVariable);
  }
  local_68 = (pFVar8->VariableID).Value;
  local_64 = pFVar8->VariableType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar8->BlendableStructType).field0_0x0.DebugPtr, pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_60 = (pFVar8->BlendableStructType).field0_0x0.DebugPtr;
  local_58 = (FScriptContainerElement)pFVar8->bIsPrivate;
  local_56 = (FScriptContainerElement)pFVar8->bAutoReset;
LAB_14d6641da:
  if (local_68 != 0xffffffff) {
    pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
    local_57 = (FScriptContainerElement)0x1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar2 + (longlong)(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax
                  * 0x18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
    if (iVar6 == (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&(param_1->AllocationInfo).VariableTableInfo,
                         &(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax);
    }
    (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = iVar6 + 1;
    pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data
             + (longlong)iVar6 * 0x18;
    *(uint *)pFVar2 = local_68;
    *(ECameraVariableType *)(pFVar2 + 4) = local_64;
    *(UScriptStruct **)(pFVar2 + 8) = local_60;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UScriptStruct *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_60);
    }
    pFVar2[0x10] = local_58;
    pFVar2[0x11] = local_57;
    pFVar2[0x12] = local_56;
    ::FString::FString(&local_88,L"Speed");
    local_48 = local_60;
    local_4c = local_64;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UScriptStruct *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_60);
    }
    local_40 = local_58;
    local_3f = local_57;
    local_3e = local_56;
    iVar6 = local_88.Data.ArrayNum + -1;
    FVar4.Data = local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar4.Data);
    local_50 = (local_68 >> 2) + 0x9e3779b9 + uVar7 + local_68 * 0x40 ^ local_68;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar2 + (longlong)(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax
                  * 0x18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum;
    if (iVar6 == (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&(param_1->AllocationInfo).VariableTableInfo,
                         &(param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayMax);
    }
    (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.ArrayNum = iVar6 + 1;
    pFVar2 = (param_1->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data
             + (longlong)iVar6 * 0x18;
    *(uint *)pFVar2 = local_50;
    *(ECameraVariableType *)(pFVar2 + 4) = local_4c;
    *(UScriptStruct **)(pFVar2 + 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UScriptStruct *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    pFVar2[0x10] = local_40;
    pFVar2[0x11] = local_3f;
    pFVar2[0x12] = local_3e;
    (this->VariableID).Value = local_68;
    (this->SpeedVariableID).Value = local_50;
  }
  return;
}

// OnBuildEvaluator @ 14d6657f0

FCameraNodeEvaluator * __thiscall
UCameraRigInput2DSlot::OnBuildEvaluator
          (UCameraRigInput2DSlot *this,FCameraNodeEvaluatorBuilder *param_1)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigInput2DSlotEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)param_1->Storage;
  pFVar1 = UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
           BuildObjectUninitialized(this_00,0x78,8);
  pFVar1 = UE::Cameras::FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(pFVar1);
  UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return (FCameraNodeEvaluator *)pFVar1;
}

// PostLoad @ 14d66f520

void __thiscall UCameraRigInput2DSlot::PostLoad(UCameraRigInput2DSlot *this)

{
  if ((this->InputSlotParameters_DEPRECATED).bIsPreBlended == false) {
    (this->InputSlotParameters_DEPRECATED).bIsPreBlended = true;
    this->bIsPreBlended = false;
  }
  UCameraNode::PostLoad((UCameraNode *)this);
  return;
}

// StaticRegisterNativesUCameraRigInput2DSlot @ 14d673330

void __cdecl UCameraRigInput2DSlot::StaticRegisterNativesUCameraRigInput2DSlot(void)

{
  return;
}

