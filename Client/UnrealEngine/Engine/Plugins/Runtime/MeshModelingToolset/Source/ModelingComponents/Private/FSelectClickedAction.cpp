// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// IsHitByClick @ 14cb220d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputRayHit * __thiscall
FSelectClickedAction::IsHitByClick
          (FSelectClickedAction *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(void **)&this->ExternalCanClickPredicate != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ExternalCanClickPredicate);
    plVar1 = *(longlong **)&(this->ExternalCanClickPredicate).field_0x28;
    pcVar2 = *(code **)&this->ExternalCanClickPredicate;
    plVar5 = (longlong *)&(this->ExternalCanClickPredicate).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    if (cVar3 == '\0') {
      FInputRayHit::FInputRayHit(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  DoRayCast(this,__return_storage_ptr__,param_1,false);
  return __return_storage_ptr__;
}

// OnClicked @ 14cb24890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSelectClickedAction::OnClicked(FSelectClickedAction *this,FInputDeviceRay *param_1)

{
  FInputRayHit local_48;
  
  DoRayCast(this,&local_48,param_1,true);
  return;
}

// OnUpdateModifierState @ 14cb286c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSelectClickedAction::OnUpdateModifierState(FSelectClickedAction *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    this->bShiftModifierToggle = param_2;
  }
  return;
}

// DoRayCast @ 14cb84790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputRayHit * __thiscall
FSelectClickedAction::DoRayCast
          (FSelectClickedAction *this,FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1,
          bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TVector<double>_u_0 local_128;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined2 uStack_10b;
  undefined1 uStack_109;
  FHitResult local_108;
  
  memset(&local_108,0,0x100);
  uStack_110 = 0xffffffff;
  uStack_10b = 0;
  pTVar7 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  if ((this->VisibleComponentsToIgnore).ArrayNum != 0) {
    pTVar7 = &this->VisibleComponentsToIgnore;
  }
  uStack_109 = 0;
  local_128._s_0.Z = 0.0;
  uStack_10c = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  pTVar6 = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  if ((this->InvisibleComponentsToHitTest).ArrayNum != 0) {
    pTVar6 = &this->InvisibleComponentsToHitTest;
  }
  local_108.Time = 1.0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  if (this->SnapManager == (USceneSnappingManager *)0x0) {
    local_128._s_0.X =
         (param_1->WorldRay).Direction.field0_0x0._s_0.X * __real_4290000000000000 +
         (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    local_128._s_0.Z =
         (param_1->WorldRay).Direction.field0_0x0._s_0.Z * __real_4290000000000000 +
         (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    local_128._s_0.Y =
         (param_1->WorldRay).Direction.field0_0x0._s_0.Y * __real_4290000000000000 +
         (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    bVar3 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                      (this->World,&local_108,(TVector<double> *)param_1,
                       (TVector<double> *)&local_128._s_0,pTVar7,pTVar6);
  }
  else {
    bVar3 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                      (this->SnapManager,&local_108,&param_1->WorldRay,pTVar7,pTVar6);
  }
  if (bVar3 == false) {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    if ((param_2) && (*(void **)&this->OnClickedPositionFunc != (void *)0x0)) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->OnClickedPositionFunc);
      plVar1 = *(longlong **)&(this->OnClickedPositionFunc).field_0x28;
      pcVar2 = *(code **)&this->OnClickedPositionFunc;
      plVar5 = (longlong *)&(this->OnClickedPositionFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_108);
    }
    FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_108.Distance);
  }
  return __return_storage_ptr__;
}

