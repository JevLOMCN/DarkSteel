// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 36

// StaticClass @ 14966c5b0

UClass * __cdecl UBaseBrushTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BaseBrushTool",
               &Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton,
               StaticRegisterNativesUBaseBrushTool,0x2d8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseBrushTool>,
               InternalVTableHelperCtorCaller<UBaseBrushTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton;
}

// UBaseBrushTool @ 149683180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBaseBrushTool * __thiscall
UBaseBrushTool::UBaseBrushTool(UBaseBrushTool *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this,param_1);
  this->WorldToLocalScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->BrushProperties).field0_0x0.DebugPtr = (UBrushBaseProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->bInBrushStroke = false;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  memset(&(this->LastBrushStamp).HitResult,0,0x100);
  (this->LastBrushStamp).HitResult.Time = 1.0;
  this_00 = &(this->PropertyClass).SoftObjectPtr.field_0x18;
  (this->LastBrushStamp).HitResult.MyItem = -1;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastBrushStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  (this->BrushRelativeSizeRange).Min = 3.4028235e+38;
  (this->BrushRelativeSizeRange).Max = -3.4028235e+38;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->ActivePressure = 1.0;
  (this->BrushStampIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  (this->BrushAdjusterBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  this->bEnabled = true;
  return this;
}

// UBaseBrushTool @ 1496832d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBaseBrushTool * __thiscall UBaseBrushTool::UBaseBrushTool(UBaseBrushTool *this)

{
  undefined1 *this_00;
  UClass *local_res8;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  this->WorldToLocalScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->BrushProperties).field0_0x0.DebugPtr = (UBrushBaseProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->bInBrushStroke = false;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  memset(&(this->LastBrushStamp).HitResult,0,0x100);
  (this->LastBrushStamp).HitResult.Time = 1.0;
  this_00 = &(this->PropertyClass).SoftObjectPtr.field_0x18;
  (this->LastBrushStamp).HitResult.MyItem = -1;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastBrushStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->LastBrushStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastBrushStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  (this->BrushRelativeSizeRange).Min = 3.4028235e+38;
  (this->BrushRelativeSizeRange).Max = -3.4028235e+38;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PropertyClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->BrushStampIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  this->ActivePressure = 1.0;
  (this->BrushAdjusterBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  this->bEnabled = true;
  local_res8 = UBrushBaseProperties::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->PropertyClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UBaseBrushTool @ 149689460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::~UBaseBrushTool(UBaseBrushTool *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  pvVar1 = *(void **)&(this->PropertyClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USingleSelectionTool::_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// CanBeginClickDragSequence @ 1496966d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputRayHit * __thiscall
UBaseBrushTool::CanBeginClickDragSequence
          (UBaseBrushTool *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  undefined1 *puVar1;
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
  
  puVar1 = &this[-1].LastBrushStamp.HitResult.TraceEnd.field_0x10;
  if ((this->LastBrushStamp).HitResult.TraceEnd.field_0x8 != '\0') {
    memset(local_108,0,0x100);
    local_50 = 0;
    uStack_48 = 0;
    local_104 = 0x3f800000;
    local_64 = 0xffffffff;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0xffffffff;
    uStack_34 = 0;
    cVar2 = (**(code **)(*(longlong *)puVar1 + 0x3b8))(puVar1,param_1,local_108);
    if (cVar2 != '\0') {
      FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_100);
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DecreaseBrushFalloffAction @ 14969c010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::DecreaseBrushFalloffAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->BrushFalloffAmount - __real_3ca3d70a;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->BrushFalloffAmount = fVar2;
                    /* WARNING: Could not recover jumptable at 0x00014969c048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// DecreaseBrushSizeAction @ 14969c060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::DecreaseBrushSizeAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  if (pUVar1->bSpecifyRadius == false) {
    fVar2 = pUVar1->BrushSize - __real_3ccccccd;
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    pUVar1->BrushSize = fVar2;
  }
  else {
    fVar2 = pUVar1->BrushRadius * ___real_3f68ba2e;
    if (fVar2 <= __real_3f800000) {
      fVar2 = __real_3f800000;
    }
    pUVar1->BrushRadius = fVar2;
  }
  RecalculateBrushRadius(this);
                    /* WARNING: Could not recover jumptable at 0x00014969c0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// DecreaseBrushStrengthAction @ 14969c0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::DecreaseBrushStrengthAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->BrushStrength - __real_3ca3d70a;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->BrushStrength = fVar2;
                    /* WARNING: Could not recover jumptable at 0x00014969c128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// DrawHUD @ 14969d2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBaseBrushTool::DrawHUD(UBaseBrushTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  bool bVar1;
  UTwoAxisPropertyEditInputBehavior *this_00;
  
  UInteractiveTool::DrawHUD((UInteractiveTool *)this,param_1,param_2);
  bVar1 = FWeakObjectPtr::IsValid(&(this->BrushEditBehavior).WeakPtr);
  if (bVar1) {
    this_00 = (UTwoAxisPropertyEditInputBehavior *)
              FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
    UTwoAxisPropertyEditInputBehavior::DrawHUD(this_00,param_1,param_2);
  }
  return;
}

// EstimateMaximumTargetDimension @ 14969e720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall UBaseBrushTool::EstimateMaximumTargetDimension(UBaseBrushTool *this)

{
  return __real_4059000000000000;
}

// GetActivePressure @ 14969f970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall UBaseBrushTool::GetActivePressure(UBaseBrushTool *this)

{
  return this->ActivePressure;
}

// GetCurrentBrushRadius @ 1496a07f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall UBaseBrushTool::GetCurrentBrushRadius(UBaseBrushTool *this)

{
  double dVar1;
  UBrushBaseProperties *pUVar2;
  double dVar3;
  
  pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
  if (((pUVar2 != (UBrushBaseProperties *)0x0) &&
      (pUVar2->bToolSupportsPressureSensitivity != false)) &&
     (pUVar2->bEnablePressureSensitivity != false)) {
    dVar1 = this->CurrentBrushRadius;
    dVar3 = (double)(**(code **)(this->_padding_ + 0x460))();
    return dVar3 * dVar1;
  }
  return this->CurrentBrushRadius;
}

// GetCurrentBrushRadiusLocal @ 1496a0850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

double __thiscall UBaseBrushTool::GetCurrentBrushRadiusLocal(UBaseBrushTool *this)

{
  float fVar1;
  double dVar2;
  
  fVar1 = this->WorldToLocalScale;
  dVar2 = (double)(**(code **)(this->_padding_ + 0x440))();
  return dVar2 * (double)fVar1;
}

// GetPrivateStaticClass @ 1496a4050

UClass * __cdecl UBaseBrushTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BaseBrushTool",
               &Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton,
               StaticRegisterNativesUBaseBrushTool,0x2d8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseBrushTool>,
               InternalVTableHelperCtorCaller<UBaseBrushTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseBrushTool.InnerSingleton;
}

// IncreaseBrushFalloffAction @ 1496abf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::IncreaseBrushFalloffAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->BrushFalloffAmount + __real_3ca3d70a;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->BrushFalloffAmount = fVar2;
                    /* WARNING: Could not recover jumptable at 0x0001496abf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// IncreaseBrushSizeAction @ 1496abfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::IncreaseBrushSizeAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  if (pUVar1->bSpecifyRadius == false) {
    fVar2 = pUVar1->BrushSize + __real_3ccccccd;
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    pUVar1->BrushSize = fVar2;
  }
  else {
    fVar2 = pUVar1->BrushRadius * __real_3f8ccccd;
    if (__real_447a0000 <= fVar2) {
      fVar2 = __real_447a0000;
    }
    pUVar1->BrushRadius = fVar2;
  }
  RecalculateBrushRadius(this);
                    /* WARNING: Could not recover jumptable at 0x0001496ac019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// IncreaseBrushStrengthAction @ 1496ac030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::IncreaseBrushStrengthAction(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->BrushStrength + __real_3ca3d70a;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->BrushStrength = fVar2;
                    /* WARNING: Could not recover jumptable at 0x0001496ac068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->BrushProperties).field0_0x0.DebugPtr);
  return;
}

// IsInBrushStroke @ 1496ae110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBaseBrushTool::IsInBrushStroke(UBaseBrushTool *this)

{
  return this->bInBrushStroke;
}

// OnBeginDrag @ 1496b4770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::OnBeginDrag(UBaseBrushTool *this,TRay<double> *param_1)

{
  float fVar1;
  UBrushBaseProperties *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  FHitResult *pFVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_108;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  memset(&local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar7 = (**(code **)(this->_padding_ + 0x3b8))(this,param_1,&local_108);
  if (cVar7 != '\0') {
    pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
    lVar10 = 2;
    fVar1 = pUVar2->BrushRadius;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.X = local_e0;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.Y = dStack_d8;
    (this->LastBrushStamp).Radius = fVar1;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.Z = local_d0;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.X = local_c8;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.Y = dStack_c0;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.Z = local_b8;
    pFVar8 = &(this->LastBrushStamp).HitResult;
    puVar9 = &local_108;
    do {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      pFVar8->FaceIndex = (int)uVar3;
      pFVar8->Time = (float)(int)((ulonglong)uVar3 >> 0x20);
      pFVar8->Distance = (float)(int)uVar4;
      pFVar8->_padding_ = (int)((ulonglong)uVar4 >> 0x20);
      uVar3 = puVar9[4];
      uVar4 = puVar9[5];
      *(undefined8 *)&pFVar8->Location = uVar5;
      *(undefined8 *)&(pFVar8->Location).field_0x8 = uVar6;
      uVar5 = puVar9[6];
      uVar6 = puVar9[7];
      *(undefined8 *)&(pFVar8->Location).field_0x10 = uVar3;
      *(undefined8 *)&pFVar8->ImpactPoint = uVar4;
      uVar3 = puVar9[8];
      uVar4 = puVar9[9];
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8 = uVar5;
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10 = uVar6;
      uVar5 = puVar9[10];
      uVar6 = puVar9[0xb];
      *(undefined8 *)&pFVar8->Normal = uVar3;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = uVar4;
      uVar3 = puVar9[0xc];
      uVar4 = puVar9[0xd];
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = uVar5;
      *(undefined8 *)&pFVar8->ImpactNormal = uVar6;
      uVar5 = puVar9[0xe];
      uVar6 = puVar9[0xf];
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8 = uVar3;
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10 = uVar4;
      *(undefined8 *)&pFVar8->TraceStart = uVar5;
      *(undefined8 *)&(pFVar8->TraceStart).field_0x8 = uVar6;
      lVar10 = lVar10 + -1;
      pFVar8 = (FHitResult *)&(pFVar8->TraceStart).field_0x10;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
    (this->LastBrushStamp).Falloff = pUVar2->BrushFalloffAmount;
  }
  this->bInBrushStroke = true;
  return;
}

// OnCancelDrag @ 1496b4bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::OnCancelDrag(UBaseBrushTool *this)

{
  this->bInBrushStroke = false;
  return;
}

// OnEndDrag @ 1496b5c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::OnEndDrag(UBaseBrushTool *this,TRay<double> *param_1)

{
  this->bInBrushStroke = false;
  return;
}

// OnPropertyModified @ 1496b5d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBaseBrushTool::OnPropertyModified(UBaseBrushTool *this,UObject *param_1,FProperty *param_2)

{
  UBrushBaseProperties *pUVar1;
  bool bVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  if (pUVar1 == (UBrushBaseProperties *)0x0) {
    bVar2 = param_1 == (UObject *)0x0;
  }
  else {
    bVar2 = pUVar1 == (UBrushBaseProperties *)param_1;
  }
  if (!bVar2) {
    return;
  }
  fVar4 = __real_3f800000 / this->WorldToLocalScale;
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar5 = fVar4 * (this->BrushRelativeSizeRange).Max;
  fVar4 = fVar4 * (this->BrushRelativeSizeRange).Min;
  if (pUVar1->bSpecifyRadius != false) {
    dVar3 = (double)pUVar1->BrushRadius;
    this->CurrentBrushRadius = dVar3;
    pUVar1->BrushSize = (float)(((dVar3 + dVar3) - (double)fVar4) / (double)(fVar5 - fVar4));
    return;
  }
  if (fVar5 < fVar4) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (fVar5 - fVar4) * pUVar1->BrushSize + fVar4;
  }
  fVar5 = fVar4 * __real_3f000000;
  this->CurrentBrushRadius = (double)fVar4 * __real_3fe0000000000000;
  pUVar1->BrushRadius = fVar5;
  return;
}

// OnTick @ 1496b5e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::OnTick(UBaseBrushTool *this,float param_1)

{
  float fVar1;
  undefined4 in_XMM1_Db;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x400))(this,CONCAT44(in_XMM1_Db,param_1));
  this->ActivePressure = (double)fVar1;
  return;
}

// OnUpdateDrag @ 1496b5e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::OnUpdateDrag(UBaseBrushTool *this,TRay<double> *param_1)

{
  float fVar1;
  UBrushBaseProperties *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  FHitResult *pFVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_108;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  memset(&local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar7 = (**(code **)(this->_padding_ + 0x3b8))(this,param_1,&local_108);
  if (cVar7 != '\0') {
    pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
    lVar10 = 2;
    fVar1 = pUVar2->BrushRadius;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.X = local_e0;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.Y = dStack_d8;
    (this->LastBrushStamp).Radius = fVar1;
    (this->LastBrushStamp).WorldPosition.field0_0x0._s_0.Z = local_d0;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.X = local_c8;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.Y = dStack_c0;
    (this->LastBrushStamp).WorldNormal.field0_0x0._s_0.Z = local_b8;
    pFVar8 = &(this->LastBrushStamp).HitResult;
    puVar9 = &local_108;
    do {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      pFVar8->FaceIndex = (int)uVar3;
      pFVar8->Time = (float)(int)((ulonglong)uVar3 >> 0x20);
      pFVar8->Distance = (float)(int)uVar4;
      pFVar8->_padding_ = (int)((ulonglong)uVar4 >> 0x20);
      uVar3 = puVar9[4];
      uVar4 = puVar9[5];
      *(undefined8 *)&pFVar8->Location = uVar5;
      *(undefined8 *)&(pFVar8->Location).field_0x8 = uVar6;
      uVar5 = puVar9[6];
      uVar6 = puVar9[7];
      *(undefined8 *)&(pFVar8->Location).field_0x10 = uVar3;
      *(undefined8 *)&pFVar8->ImpactPoint = uVar4;
      uVar3 = puVar9[8];
      uVar4 = puVar9[9];
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8 = uVar5;
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10 = uVar6;
      uVar5 = puVar9[10];
      uVar6 = puVar9[0xb];
      *(undefined8 *)&pFVar8->Normal = uVar3;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = uVar4;
      uVar3 = puVar9[0xc];
      uVar4 = puVar9[0xd];
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = uVar5;
      *(undefined8 *)&pFVar8->ImpactNormal = uVar6;
      uVar5 = puVar9[0xe];
      uVar6 = puVar9[0xf];
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8 = uVar3;
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10 = uVar4;
      *(undefined8 *)&pFVar8->TraceStart = uVar5;
      *(undefined8 *)&(pFVar8->TraceStart).field_0x8 = uVar6;
      lVar10 = lVar10 + -1;
      pFVar8 = (FHitResult *)&(pFVar8->TraceStart).field_0x10;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
    (this->LastBrushStamp).Falloff = pUVar2->BrushFalloffAmount;
  }
  return;
}

// OnUpdateHover @ 1496b6280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBaseBrushTool::OnUpdateHover(UBaseBrushTool *this,FInputDeviceRay *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  UTwoAxisPropertyEditInputBehavior *this_00;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  TVector2<double>_u_0 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  bVar8 = FWeakObjectPtr::IsValid
                    ((FWeakObjectPtr *)&(this->LastBrushStamp).HitResult.TraceStart.field_0x8);
  if (bVar8) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  &(this->LastBrushStamp).HitResult.TraceStart.field_0x8);
    if (*(char *)(pUVar10 + 2) != '\0') {
      return true;
    }
    this_00 = (UTwoAxisPropertyEditInputBehavior *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  &(this->LastBrushStamp).HitResult.TraceStart.field_0x8);
    local_128._s_0.X = (param_1->ScreenPosition).field0_0x0._s_0.X;
    local_128._s_0.Y = (param_1->ScreenPosition).field0_0x0._s_0.Y;
    UTwoAxisPropertyEditInputBehavior::ResetOrigin
              (this_00,(TVector2<double> *)&local_128._s_0,true,false);
  }
  memset(&local_108,0,0x100);
  uStack_110 = 0xffffffff;
  puVar1 = &this[-1].LastBrushStamp.HitResult.TraceEnd.field_0x8;
  local_118 = 0;
  uStack_10c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  cVar9 = (**(code **)(*(longlong *)puVar1 + 0x3b8))(puVar1,param_1,&local_108);
  if (cVar9 != '\0') {
    lVar3 = this->_padding_;
    lVar13 = 2;
    uVar2 = *(undefined4 *)(lVar3 + 0xb8);
    this->_padding_ = local_e0;
    this->_padding_ = lStack_d8;
    *(undefined4 *)&this->_padding_ = uVar2;
    this->_padding_ = local_d0;
    this->_padding_ = local_c8;
    this->_padding_ = lStack_c0;
    this->_padding_ = local_b8;
    plVar11 = &this->_padding_;
    plVar12 = &local_108;
    do {
      lVar4 = plVar12[1];
      lVar5 = plVar12[2];
      lVar6 = plVar12[3];
      *plVar11 = *plVar12;
      plVar11[1] = lVar4;
      lVar4 = plVar12[4];
      lVar7 = plVar12[5];
      plVar11[2] = lVar5;
      plVar11[3] = lVar6;
      lVar5 = plVar12[6];
      lVar6 = plVar12[7];
      plVar11[4] = lVar4;
      plVar11[5] = lVar7;
      lVar4 = plVar12[8];
      lVar7 = plVar12[9];
      plVar11[6] = lVar5;
      plVar11[7] = lVar6;
      lVar5 = plVar12[10];
      lVar6 = plVar12[0xb];
      plVar11[8] = lVar4;
      plVar11[9] = lVar7;
      lVar4 = plVar12[0xc];
      lVar7 = plVar12[0xd];
      plVar11[10] = lVar5;
      plVar11[0xb] = lVar6;
      lVar5 = plVar12[0xe];
      lVar6 = plVar12[0xf];
      plVar11[0xc] = lVar4;
      plVar11[0xd] = lVar7;
      plVar11[0xe] = lVar5;
      plVar11[0xf] = lVar6;
      lVar13 = lVar13 + -1;
      plVar11 = plVar11 + 0x10;
      plVar12 = plVar12 + 0x10;
    } while (lVar13 != 0);
    *(undefined4 *)&(this->LastBrushStamp).HitResult.ImpactPoint = *(undefined4 *)(lVar3 + 0xc4);
  }
  return true;
}

// RecalculateBrushRadius @ 1496b7120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::RecalculateBrushRadius(UBaseBrushTool *this)

{
  UBrushBaseProperties *pUVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_3f800000 / this->WorldToLocalScale;
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar4 = fVar3 * (this->BrushRelativeSizeRange).Max;
  fVar3 = fVar3 * (this->BrushRelativeSizeRange).Min;
  if (pUVar1->bSpecifyRadius != false) {
    dVar2 = (double)pUVar1->BrushRadius;
    this->CurrentBrushRadius = dVar2;
    pUVar1->BrushSize = (float)(((dVar2 + dVar2) - (double)fVar3) / (double)(fVar4 - fVar3));
    return;
  }
  if (fVar4 < fVar3) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (fVar4 - fVar3) * pUVar1->BrushSize + fVar3;
  }
  fVar4 = fVar3 * __real_3f000000;
  this->CurrentBrushRadius = (double)fVar3 * __real_3fe0000000000000;
  pUVar1->BrushRadius = fVar4;
  return;
}

// RegisterActions @ 1496b71d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBaseBrushTool::RegisterActions(UBaseBrushTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_88;
  FText local_78;
  FText local_68;
  code *local_58 [2];
  undefined **local_48;
  UBaseBrushTool *local_40;
  undefined8 local_30;
  
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,void>::Call;
  local_30 = 0;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushIncreaseSizeTooltip",
                      L"Press this key to increase brush radius by a percentage of its current size."
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushIncreaseSize",L"Increase Brush Size");
  ::FString::FString(&local_88,L"BrushIncreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271a,&local_88,pFVar2,pFVar1,'\0',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,void>::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushDecreaseSizeTooltip",
                      L"Press this key to decrease brush radius by a percentage of its current size."
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushDecreaseSize",L"Decrease Brush Size");
  ::FString::FString(&local_88,L"BrushDecreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271b,&local_88,pFVar2,pFVar1,'\0',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,void>::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushIncreaseFalloffTooltip",
                      L"Press this key to increase brush falloff by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushIncreaseFalloff",L"Increase Brush Falloff")
  ;
  ::FString::FString(&local_88,L"BrushIncreaseFalloff");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271c,&local_88,pFVar2,pFVar1,'\x05',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,void>::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushDecreaseFalloffTooltip",
                      L"Press this key to decrease brush falloff by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushDecreaseFalloff",L"Decrease Brush Falloff")
  ;
  ::FString::FString(&local_88,L"BrushDecreaseFalloff");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271d,&local_88,pFVar2,pFVar1,'\x05',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_5>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,void>::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushIncreaseStrengthTooltip",
                      L"Press this key to increase brush strength by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushIncreaseStrength",
                      L"Increase Brush Strength");
  ::FString::FString(&local_88,L"BrushIncreaseStrength");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271e,&local_88,pFVar2,pFVar1,'\x01',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_6>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,void>::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UBaseBrushTool",L"BrushDecreaseStrengthTooltip",
                      L"Press this key to decrease brush strength by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UBaseBrushTool",L"BrushDecreaseStrength",
                      L"Decrease Brush Strength");
  ::FString::FString(&local_88,L"BrushDecreaseStrength");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271f,&local_88,pFVar2,pFVar1,'\x01',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 1496b86e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::Render(UBaseBrushTool *this,IToolsContextRenderAPI *param_1)

{
  if (this->bEnabled != false) {
    UInteractiveTool::Render((UInteractiveTool *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001496b8702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x470))(this);
    return;
  }
  return;
}

// SetBrushEnabled @ 1496bd320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::SetBrushEnabled(UBaseBrushTool *this,bool param_1)

{
  UBrushStampIndicator *pUVar1;
  
  pUVar1 = (this->BrushStampIndicator).field0_0x0.DebugPtr;
  this->bEnabled = param_1;
  pUVar1->bVisible = param_1;
  return;
}

// Setup @ 1496c1210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBaseBrushTool::Setup(UBaseBrushTool *this)

{
  undefined1 *this_00;
  TWeakObjectPtr<ULocalTwoAxisPropertyEditInputBehavior,FWeakObjectPtr> *this_01;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  FName *pFVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  FUObjectItem *pFVar15;
  UBrushBaseProperties *pUVar16;
  UObject *pUVar17;
  FText *pFVar18;
  UTwoAxisPropertyEditInputBehavior *this_02;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_128 [32];
  UBaseBrushTool *local_108;
  undefined1 local_100 [32];
  UBaseBrushTool *local_e0;
  FName local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  code *local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  UMeshSurfacePointTool::Setup((UMeshSurfacePointTool *)this);
  pFVar12 = ::FName::FName((FName *)local_100,L"Brush");
  FVar2 = *pFVar12;
  pUVar13 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->PropertyClass);
  if ((pUVar13 == (UClass *)0x0) &&
     (this_00 = &(this->PropertyClass).SoftObjectPtr.field_0x8, *(longlong *)this_00 != 0)) {
    pUVar14 = (UClass *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    bVar10 = (*IsInAsyncLoadingThread)();
    if ((bVar10) && (pUVar14 != (UClass *)0x0)) {
      pFVar15 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4));
      if (((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_1496c12cc;
LAB_1496c12fd:
      if (((uint)pUVar14->_padding_ >> 0x1e & 1) != 0) goto LAB_1496c130b;
      bVar10 = true;
    }
    else {
LAB_1496c12cc:
      local_108 = (UBaseBrushTool *)pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->PropertyClass,(FObjectPtr)&local_108);
      if (pUVar14 != (UClass *)0x0) goto LAB_1496c12fd;
LAB_1496c130b:
      bVar10 = false;
    }
    pUVar13 = (UClass *)0x0;
    if (bVar10) {
      pUVar13 = pUVar14;
    }
  }
  if (pUVar13 != (UClass *)0x0) {
    pUVar14 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar14->_padding_;
    if ((iVar1 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar14->_padding_)) {
      pUVar14 = UBrushBaseProperties::StaticClass();
      if (pUVar14 != (UClass *)0x0) {
        iVar1 = (int)pUVar14->_padding_;
        if (((int)pUVar13->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar14->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_1496c1378;
      }
    }
  }
  pUVar13 = (UClass *)0x0;
LAB_1496c1378:
  local_108 = (UBaseBrushTool *)0x0;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar14 = UBrushBaseProperties::StaticClass();
  CheckIsClassChildOf_Internal(pUVar14,pUVar13);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_100 + 0x18),pUVar13);
  local_b8 = 0;
  lStack_b0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_e0 = this;
  local_d8 = FVar2;
  pUVar16 = (UBrushBaseProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_100 + 0x18));
  if (local_a8 != 0) {
    plVar20 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar20 = local_80;
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UBrushBaseProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->BrushProperties).field0_0x0.DebugPtr = pUVar16;
  dVar4 = (double)(**(code **)(this->_padding_ + 0x458))(this);
  (this->BrushRelativeSizeRange).Max = (float)dVar4;
  (this->BrushRelativeSizeRange).Min = (float)dVar4 * __real_3c23d70a;
  RecalculateBrushRadius(this);
  (**(code **)(this->_padding_ + 0x318))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x468))(this);
  cVar11 = (**(code **)(this->_padding_ + 0x450))(this);
  if (cVar11 != '\0') {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_ULocalTwoAxisPropertyEditInputBehavior_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_100 + 0x18),pUVar13);
    local_e0 = this;
    pUVar17 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_100 + 0x18))
    ;
    if (local_a8 != 0) {
      plVar20 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar20 = local_80;
      }
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
    this_01 = &this->BrushEditBehavior;
    local_108 = (UBaseBrushTool *)pUVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar17);
    }
    FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_108);
    uStack_40 = (longlong *)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_1>,1,0>::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_1>,float>::Call;
    uStack_50 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    lVar6 = *(longlong *)&pUVar17[4].field_0x10;
    lVar7 = *(longlong *)&pUVar17[4].field_0x18;
    lVar8 = *(longlong *)&pUVar17[4].field_0x20;
    lVar9 = *(longlong *)(pUVar17 + 5);
    lVar5 = *(longlong *)&pUVar17[5].field_0x8;
    plVar20 = *(longlong **)&pUVar17[5].field_0x10;
    *(code **)&pUVar17[4].field_0x10 = local_68;
    *(longlong *)&pUVar17[4].field_0x18 = lStack_60;
    *(undefined4 *)&pUVar17[4].field_0x20 = (undefined4)local_58;
    *(undefined4 *)&pUVar17[4].field_0x24 = local_58._4_4_;
    *(undefined4 *)(pUVar17 + 5) = (undefined4)uStack_50;
    *(undefined4 *)&pUVar17[5].field_0x4 = uStack_50._4_4_;
    *(undefined4 *)&pUVar17[5].field_0x8 = (undefined4)local_48;
    *(undefined4 *)&pUVar17[5].field_0xc = local_48._4_4_;
    *(undefined4 *)&pUVar17[5].field_0x10 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar17[5].field_0x14 = uStack_40._4_4_;
    local_68 = (code *)lVar6;
    lStack_60 = lVar7;
    local_58 = (undefined **)lVar8;
    uStack_50 = (UBaseBrushTool *)lVar9;
    local_48 = lVar5;
    uStack_40 = plVar20;
    if (lVar6 != 0) {
      plVar19 = &local_58;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    uStack_40 = (longlong *)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_2>,1,0>::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_2>,void,float>::Call;
    uStack_50 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    lVar6 = *(longlong *)&pUVar17[5].field_0x18;
    lVar7 = *(longlong *)&pUVar17[5].field_0x20;
    lVar8 = *(longlong *)(pUVar17 + 6);
    lVar9 = *(longlong *)&pUVar17[6].field_0x8;
    lVar5 = *(longlong *)&pUVar17[6].field_0x10;
    plVar20 = *(longlong **)&pUVar17[6].field_0x18;
    *(code **)&pUVar17[5].field_0x18 = local_68;
    *(longlong *)&pUVar17[5].field_0x20 = lStack_60;
    *(undefined4 *)(pUVar17 + 6) = (undefined4)local_58;
    *(undefined4 *)&pUVar17[6].field_0x4 = local_58._4_4_;
    *(undefined4 *)&pUVar17[6].field_0x8 = (undefined4)uStack_50;
    *(undefined4 *)&pUVar17[6].field_0xc = uStack_50._4_4_;
    *(undefined4 *)&pUVar17[6].field_0x10 = (undefined4)local_48;
    *(undefined4 *)&pUVar17[6].field_0x14 = local_48._4_4_;
    *(undefined4 *)&pUVar17[6].field_0x18 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar17[6].field_0x1c = uStack_40._4_4_;
    local_68 = (code *)lVar6;
    lStack_60 = lVar7;
    local_58 = (undefined **)lVar8;
    uStack_50 = (UBaseBrushTool *)lVar9;
    local_48 = lVar5;
    uStack_40 = plVar20;
    if (lVar6 != 0) {
      plVar19 = &local_58;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    uStack_40 = (longlong *)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_3>,1,0>::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_3>,float,float>::Call;
    uStack_50 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    lVar6 = *(longlong *)&pUVar17[6].field_0x20;
    lVar7 = *(longlong *)(pUVar17 + 7);
    lVar8 = *(longlong *)&pUVar17[7].field_0x8;
    lVar9 = *(longlong *)&pUVar17[7].field_0x10;
    lVar5 = *(longlong *)&pUVar17[7].field_0x18;
    plVar20 = *(longlong **)&pUVar17[7].field_0x20;
    *(code **)&pUVar17[6].field_0x20 = local_68;
    *(longlong *)(pUVar17 + 7) = lStack_60;
    *(undefined4 *)&pUVar17[7].field_0x8 = (undefined4)local_58;
    *(undefined4 *)&pUVar17[7].field_0xc = local_58._4_4_;
    *(undefined4 *)&pUVar17[7].field_0x10 = (undefined4)uStack_50;
    *(undefined4 *)&pUVar17[7].field_0x14 = uStack_50._4_4_;
    *(undefined4 *)&pUVar17[7].field_0x18 = (undefined4)local_48;
    *(undefined4 *)&pUVar17[7].field_0x1c = local_48._4_4_;
    *(undefined4 *)&pUVar17[7].field_0x20 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar17[7].field_0x24 = uStack_40._4_4_;
    local_68 = (code *)lVar6;
    lStack_60 = lVar7;
    local_58 = (undefined **)lVar8;
    uStack_50 = (UBaseBrushTool *)lVar9;
    local_48 = lVar5;
    uStack_40 = plVar20;
    if (lVar6 != 0) {
      plVar19 = &local_58;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_100,L"UBaseBrushTool",L"BrushRadius",L"Radius");
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    FText::operator=((FText *)(pUVar17 + 8),pFVar18);
    if ((FName)local_100._0_8_ != (FName)0x0) {
      (**(code **)(*(longlong *)local_100._0_8_ + 0x10))();
    }
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    *(undefined4 *)&pUVar17[8].field_0x10 = 0x3a83126f;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    uStack_40 = (longlong *)0x0;
    pUVar17[8].field_0x14 = 1;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_4>,1,0>::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_4>,float>::Call;
    uStack_50 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    lVar6 = *(longlong *)&pUVar17[9].field_0x8;
    lVar7 = *(longlong *)&pUVar17[9].field_0x10;
    lVar8 = *(longlong *)&pUVar17[9].field_0x18;
    lVar9 = *(longlong *)&pUVar17[9].field_0x20;
    lVar5 = *(longlong *)(pUVar17 + 10);
    plVar20 = *(longlong **)&pUVar17[10].field_0x8;
    *(code **)&pUVar17[9].field_0x8 = local_68;
    *(longlong *)&pUVar17[9].field_0x10 = lStack_60;
    *(undefined4 *)&pUVar17[9].field_0x18 = (undefined4)local_58;
    *(undefined4 *)&pUVar17[9].field_0x1c = local_58._4_4_;
    *(undefined4 *)&pUVar17[9].field_0x20 = (undefined4)uStack_50;
    *(undefined4 *)&pUVar17[9].field_0x24 = uStack_50._4_4_;
    *(undefined4 *)(pUVar17 + 10) = (undefined4)local_48;
    *(undefined4 *)&pUVar17[10].field_0x4 = local_48._4_4_;
    *(undefined4 *)&pUVar17[10].field_0x8 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar17[10].field_0xc = uStack_40._4_4_;
    local_68 = (code *)lVar6;
    lStack_60 = lVar7;
    local_58 = (undefined **)lVar8;
    uStack_50 = (UBaseBrushTool *)lVar9;
    local_48 = lVar5;
    uStack_40 = plVar20;
    if (lVar6 != 0) {
      plVar19 = &local_58;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    uStack_40 = (longlong *)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UBaseBrushTool::Setup'::`5'::<lambda_5>,1,0>::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UBaseBrushTool::Setup'::__l5::<lambda_5>,void,float>::Call;
    uStack_50 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    lVar6 = *(longlong *)&pUVar17[10].field_0x10;
    lVar7 = *(longlong *)&pUVar17[10].field_0x18;
    lVar8 = *(longlong *)&pUVar17[10].field_0x20;
    lVar9 = *(longlong *)(pUVar17 + 0xb);
    lVar5 = *(longlong *)&pUVar17[0xb].field_0x8;
    plVar20 = *(longlong **)&pUVar17[0xb].field_0x10;
    *(code **)&pUVar17[10].field_0x10 = local_68;
    *(longlong *)&pUVar17[10].field_0x18 = lStack_60;
    *(undefined4 *)&pUVar17[10].field_0x20 = (undefined4)local_58;
    *(undefined4 *)&pUVar17[10].field_0x24 = local_58._4_4_;
    *(undefined4 *)(pUVar17 + 0xb) = (undefined4)uStack_50;
    *(undefined4 *)&pUVar17[0xb].field_0x4 = uStack_50._4_4_;
    *(undefined4 *)&pUVar17[0xb].field_0x8 = (undefined4)local_48;
    *(undefined4 *)&pUVar17[0xb].field_0xc = local_48._4_4_;
    *(undefined4 *)&pUVar17[0xb].field_0x10 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar17[0xb].field_0x14 = uStack_40._4_4_;
    local_68 = (code *)lVar6;
    lStack_60 = lVar7;
    local_58 = (undefined **)lVar8;
    uStack_50 = (UBaseBrushTool *)lVar9;
    local_48 = lVar5;
    uStack_40 = plVar20;
    if (lVar6 != 0) {
      plVar19 = &local_58;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_100,L"UBaseBrushTool",L"BrushStrength",L"Strength");
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    FText::operator=((FText *)&pUVar17[0xc].field_0x20,pFVar18);
    if ((FName)local_100._0_8_ != (FName)0x0) {
      (**(code **)(*(longlong *)local_100._0_8_ + 0x10))();
    }
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    *(undefined4 *)&pUVar17[0xd].field_0x8 = 0x3ba3d70a;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    pUVar17[0xd].field_0xc = 1;
    local_108 = this;
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddWeakLambda<UBaseBrushTool,_UBaseBrushTool::Setup_::__l5::<lambda_6>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar17[0xe].field_0x20,(UBaseBrushTool *)local_100,(<lambda_6> *)this);
    this_02 = (UTwoAxisPropertyEditInputBehavior *)FWeakObjectPtr::Get(&this_01->WeakPtr);
    pUVar13 = (UClass *)(this_02 + 1);
    if (this_02 == (UTwoAxisPropertyEditInputBehavior *)0x0) {
      pUVar13 = (UClass *)0x0;
    }
    UTwoAxisPropertyEditInputBehavior::Initialize
              (this_02,(ITwoAxisPropertyEditBehaviorTarget *)pUVar13);
    pcVar3 = *(code **)(this->_padding_ + 0x2f8);
    pUVar17 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (*pcVar3)(this,pUVar17,0);
  }
  return;
}

// SetupBrushStampIndicator @ 1496c2370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBaseBrushTool::SetupBrushStampIndicator(UBaseBrushTool *this)

{
  int iVar1;
  code *pcVar2;
  UInteractiveToolManager *pUVar3;
  UInteractiveGizmoManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UBrushStampIndicator *pUVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->BrushStampIndicator).field0_0x0.DebugPtr == (UBrushStampIndicator *)0x0) {
    pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar4 = UInteractiveToolManager::GetPairedGizmoManager(pUVar3);
    pcVar2 = *(code **)(pUVar4->_padding_ + 0x2c0);
    pUVar5 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar6);
    local_98._8_8_ = pUVar5;
    pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    (*pcVar2)(pUVar4,&BaseBrushIndicatorGizmoType,pUVar5);
    pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pUVar4 = UInteractiveToolManager::GetPairedGizmoManager(pUVar3);
    local_c8 = (void *)0x0;
    local_c0 = 0;
    pUVar7 = (UBrushStampIndicator *)
             (**(code **)(pUVar4->_padding_ + 0x2d0))
                       (pUVar4,&BaseBrushIndicatorGizmoType,&local_c8,this);
    if (pUVar7 == (UBrushStampIndicator *)0x0) {
      pFVar8 = GetTypeName<UBrushStampIndicator>(&local_b8);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar6 = Z_Construct_UClass_UBrushStampIndicator_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pFVar8 = GetTypeName<UBrushStampIndicator>(&local_b8);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_a8,(UInteractiveGizmo *)pUVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->BrushStampIndicator).field0_0x0.DebugPtr = pUVar7;
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
}

// Shutdown @ 1496c2580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::Shutdown(UBaseBrushTool *this,EToolShutdownType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496c2583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x478))();
  return;
}

// ShutdownBrushStampIndicator @ 1496c2670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::ShutdownBrushStampIndicator(UBaseBrushTool *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UInteractiveToolManager *pUVar1;
  UInteractiveGizmoManager *pUVar2;
  
  if ((this->BrushStampIndicator).field0_0x0.DebugPtr != (UBrushStampIndicator *)0x0) {
    pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(pUVar1);
    (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,(this->BrushStampIndicator).field0_0x0.DebugPtr)
    ;
    (this->BrushStampIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
    pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(pUVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x0001496c26e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar2,&BaseBrushIndicatorGizmoType,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// StaticRegisterNativesUBaseBrushTool @ 1496c2750

void __cdecl UBaseBrushTool::StaticRegisterNativesUBaseBrushTool(void)

{
  return;
}

// SupportsBrushAdjustmentInput @ 1496c2dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBaseBrushTool::SupportsBrushAdjustmentInput(UBaseBrushTool *this)

{
  return true;
}

// UpdateBrushStampIndicator @ 1496c3910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBaseBrushTool::UpdateBrushStampIndicator(UBaseBrushTool *this)

{
  UBrushStampIndicator *pUVar1;
  UBrushBaseProperties *pUVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  FLinearColor *pFVar6;
  
  if ((this->BrushStampIndicator).field0_0x0.DebugPtr != (UBrushStampIndicator *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->BrushEditBehavior).WeakPtr);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
      pFVar6 = &FLinearColor::Green;
      pUVar1 = (this->BrushStampIndicator).field0_0x0.DebugPtr;
      if (*(char *)(pUVar5 + 2) != '\0') {
        pFVar6 = &FLinearColor::White;
      }
      uVar3 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
      *(undefined8 *)&(pUVar1->LineColor).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
      *(undefined8 *)((longlong)&(pUVar1->LineColor).field0_0x0 + 8) = uVar3;
    }
    pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
    pUVar1 = (this->BrushStampIndicator).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2f0))
              (pUVar1,pUVar2->BrushRadius,&(this->LastBrushStamp).WorldPosition,
               &(this->LastBrushStamp).WorldNormal,pUVar2->BrushFalloffAmount,pUVar2->BrushStrength)
    ;
  }
  return;
}

