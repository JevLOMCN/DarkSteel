// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 32

// StaticClass @ 14966bd80

UClass * __cdecl UMeshSurfacePointTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointTool",
               &Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointTool,0x128,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSurfacePointTool>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton;
}

// UMeshSurfacePointTool @ 149687860

UMeshSurfacePointTool * __thiscall
UMeshSurfacePointTool::UMeshSurfacePointTool(UMeshSurfacePointTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->bShiftToggle = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bCtrlToggle = false;
  (this->LastWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->StylusAPI = (IToolStylusStateProviderAPI *)0x0;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UMeshSurfacePointTool @ 149687930

UMeshSurfacePointTool * __thiscall
UMeshSurfacePointTool::UMeshSurfacePointTool(UMeshSurfacePointTool *this)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->bShiftToggle = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bCtrlToggle = false;
  (this->LastWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->StylusAPI = (IToolStylusStateProviderAPI *)0x0;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UMeshSurfacePointTool @ 14968a6f0

void __thiscall UMeshSurfacePointTool::~UMeshSurfacePointTool(UMeshSurfacePointTool *this)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// BeginHoverSequenceHitTest @ 149692980

FInputRayHit * __thiscall
UMeshSurfacePointTool::BeginHoverSequenceHitTest
          (UMeshSurfacePointTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1
          )

{
  double dVar1;
  char cVar2;
  undefined1 local_108 [4];
  undefined4 local_104;
  float local_100;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar2 = (**(code **)(this[-1]._padding_ + 0x3b8))(&this[-1]._padding_,param_1,local_108);
  if (cVar2 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_100);
  }
  return __return_storage_ptr__;
}

// CanBeginClickDragSequence @ 149696820

FInputRayHit * __thiscall
UMeshSurfacePointTool::CanBeginClickDragSequence
          (UMeshSurfacePointTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1
          )

{
  char cVar1;
  undefined1 local_108 [4];
  undefined4 local_104;
  float local_100;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar1 = (**(code **)(this[-1]._padding_ + 0x3b8))(&this[-1]._padding_,param_1,local_108);
  if (cVar1 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_100);
  }
  return __return_storage_ptr__;
}

// GetCtrlToggle @ 1496a07e0

bool __thiscall UMeshSurfacePointTool::GetCtrlToggle(UMeshSurfacePointTool *this)

{
  return this->bCtrlToggle;
}

// GetCurrentDevicePressure @ 1496a0890

float __thiscall UMeshSurfacePointTool::GetCurrentDevicePressure(UMeshSurfacePointTool *this)

{
  float fVar1;
  
  if (this->StylusAPI != (IToolStylusStateProviderAPI *)0x0) {
    fVar1 = (float)(**(code **)*this->StylusAPI)();
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1;
  }
  return __real_3f800000;
}

// GetPrivateStaticClass @ 1496a6e60

UClass * __cdecl UMeshSurfacePointTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSurfacePointTool",
               &Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton,
               StaticRegisterNativesUMeshSurfacePointTool,0x128,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSurfacePointTool>,
               InternalVTableHelperCtorCaller<UMeshSurfacePointTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSurfacePointTool.InnerSingleton;
}

// GetShiftToggle @ 1496a7ed0

bool __thiscall UMeshSurfacePointTool::GetShiftToggle(UMeshSurfacePointTool *this)

{
  return this->bShiftToggle;
}

// GetTargetWorld @ 1496a8ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UMeshSurfacePointTool::GetTargetWorld(UMeshSurfacePointTool *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->TargetWorld).WeakPtr);
  return pUVar1;
}

// GetWorldSpaceFocusPoint @ 1496ab1d0

bool __thiscall
UMeshSurfacePointTool::GetWorldSpaceFocusPoint
          (UMeshSurfacePointTool *this,TRay<double> *param_1,TVector<double> *param_2)

{
  char cVar1;
  undefined1 local_108 [4];
  undefined4 local_104;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar1 = (**(code **)(this[-1]._padding_ + 0x3b8))(&this[-1]._padding_,param_1,local_108);
  if (cVar1 != '\0') {
    (param_2->field0_0x0)._s_0.X = local_e0;
    (param_2->field0_0x0)._s_0.Y = dStack_d8;
    (param_2->field0_0x0)._s_0.Z = local_d0;
  }
  return cVar1 != '\0';
}

// HitTest @ 1496abd80

bool __thiscall
UMeshSurfacePointTool::HitTest
          (UMeshSurfacePointTool *this,TRay<double> *param_1,FHitResult *param_2)

{
  UObjectBaseUtility *this_00;
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001496abdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2);
  return (bool)uVar1;
}

// OnBeginDrag @ 1496b48e0

void __thiscall
UMeshSurfacePointTool::OnBeginDrag(UMeshSurfacePointTool *this,TRay<double> *param_1)

{
  return;
}

// OnBeginHover @ 1496b4b30

void __thiscall
UMeshSurfacePointTool::OnBeginHover(UMeshSurfacePointTool *this,FInputDeviceRay *param_1)

{
  return;
}

// OnCancelDrag @ 1496b4bc0

void __thiscall UMeshSurfacePointTool::OnCancelDrag(UMeshSurfacePointTool *this)

{
  return;
}

// OnClickDrag @ 1496b4be0

void __thiscall
UMeshSurfacePointTool::OnClickDrag(UMeshSurfacePointTool *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  lVar1 = this[-1]._padding_;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar5;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uVar3 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uVar3 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001496b4c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3c8))();
  return;
}

// OnClickPress @ 1496b50d0

void __thiscall
UMeshSurfacePointTool::OnClickPress(UMeshSurfacePointTool *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  lVar1 = this[-1]._padding_;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar5;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uVar3 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uVar3 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001496b50fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3c0))();
  return;
}

// OnClickRelease @ 1496b56c0

void __thiscall
UMeshSurfacePointTool::OnClickRelease(UMeshSurfacePointTool *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  lVar1 = this[-1]._padding_;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar5;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uVar3 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uVar3 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  *(undefined4 *)&this->_padding_ = uVar3;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001496b56ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3d0))();
  return;
}

// OnEndDrag @ 1496b5c60

void __thiscall UMeshSurfacePointTool::OnEndDrag(UMeshSurfacePointTool *this,TRay<double> *param_1)

{
  return;
}

// OnEndHover @ 1496b5ca0

void __thiscall UMeshSurfacePointTool::OnEndHover(UMeshSurfacePointTool *this)

{
  return;
}

// OnTerminateDragSequence @ 1496b5d70

void __thiscall UMeshSurfacePointTool::OnTerminateDragSequence(UMeshSurfacePointTool *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496b5d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x3d8))();
  return;
}

// OnUpdateDrag @ 1496b5ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMeshSurfacePointTool::OnUpdateDrag(UMeshSurfacePointTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FTextFormat local_188;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TSharedPtr<FCulture,1> local_168;
  TSharedPtr<FCulture,1> local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  int local_108 [2];
  float local_100;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  memset(local_108,0,0x100);
  uStack_170 = 0xffffffff;
  local_178 = 0;
  uStack_16c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_108[1] = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x3b8))(this,param_1);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pcVar1 = *(code **)(*plVar3 + 0x360);
    pFVar4 = FText::AsNumber(&local_128,local_100,(FNumberFormattingOptions *)0x0,&local_158);
    local_168.Object = (FCulture *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = FText::AsNumber(&local_118,local_108[0],(FNumberFormattingOptions *)0x0,&local_168);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_138,L"UMeshSurfacePointTool",L"OnUpdateDragMessage",
                        L"UMeshSurfacePointTool::OnUpdateDrag: Hit triangle index {0} at ray distance {1}"
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_188,pFVar6,Default);
    pFVar4 = FText::Format<FText,FText>(&local_148,pFVar7,pFVar5,pFVar4);
    (*pcVar1)(plVar3,pFVar4,0);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnUpdateHover @ 1496b6430

bool __thiscall
UMeshSurfacePointTool::OnUpdateHover(UMeshSurfacePointTool *this,FInputDeviceRay *param_1)

{
  return true;
}

// OnUpdateModifierState @ 1496b6660

void __thiscall
UMeshSurfacePointTool::OnUpdateModifierState(UMeshSurfacePointTool *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    *(bool *)&this->_padding_ = param_2;
    return;
  }
  if (param_1 == 2) {
    *(bool *)((longlong)&this->_padding_ + 1) = param_2;
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 1496b667c

/* [thunk]:public: virtual void __cdecl UMeshSurfacePointTool::OnUpdateModifierState`adjustor{8}'
   (int,bool) __ptr64 */

void __thiscall
UMeshSurfacePointTool::OnUpdateModifierState_adjustor_8__
          (UMeshSurfacePointTool *this,int param_1,bool param_2)

{
  OnUpdateModifierState((UMeshSurfacePointTool *)&this[-1].TargetWorld,param_1,param_2);
  return;
}

// SetCtrlToggle @ 1496bd3f0

void __thiscall UMeshSurfacePointTool::SetCtrlToggle(UMeshSurfacePointTool *this,bool param_1)

{
  this->bCtrlToggle = param_1;
  return;
}

// SetShiftToggle @ 1496bfbd0

void __thiscall UMeshSurfacePointTool::SetShiftToggle(UMeshSurfacePointTool *this,bool param_1)

{
  this->bShiftToggle = param_1;
  return;
}

// SetStylusAPI @ 1496bfe20

void __thiscall
UMeshSurfacePointTool::SetStylusAPI
          (UMeshSurfacePointTool *this,IToolStylusStateProviderAPI *param_1)

{
  this->StylusAPI = param_1;
  return;
}

// SetWorld @ 1496c0de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSurfacePointTool::SetWorld(UMeshSurfacePointTool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Setup @ 1496c1b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshSurfacePointTool::Setup(UMeshSurfacePointTool *this)

{
  UObject *pUVar1;
  UClickDragInputBehavior *pUVar2;
  UMouseHoverBehavior *pUVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UClickDragInputBehavior>(pUVar1);
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = FInputDeviceState::IsShiftKeyDown;
  local_40 = (undefined ***)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar2->Modifiers,1,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = FInputDeviceState::IsCtrlKeyDown;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar2->Modifiers,2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  (**(code **)(*(longlong *)pUVar2 + 0x378))(pUVar2,&this->_padding_);
  (**(code **)(this->_padding_ + 0x2f8))(this,pUVar2,0);
  pUVar1 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UMouseHoverBehavior>(pUVar1);
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = FInputDeviceState::IsShiftKeyDown;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar3->Modifiers,1,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = FInputDeviceState::IsCtrlKeyDown;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar3->Modifiers,2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar4 = local_40;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3,&this->_padding_);
  (**(code **)(this->_padding_ + 0x2f8))(this,pUVar3,0);
  return;
}

// StaticRegisterNativesUMeshSurfacePointTool @ 1496c2cc0

void __cdecl UMeshSurfacePointTool::StaticRegisterNativesUMeshSurfacePointTool(void)

{
  return;
}

