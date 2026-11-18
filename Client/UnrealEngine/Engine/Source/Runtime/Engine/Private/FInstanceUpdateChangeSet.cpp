// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FInstanceUpdateChangeSet @ 147cc4c10

FInstanceUpdateChangeSet * __thiscall
FInstanceUpdateChangeSet::FInstanceUpdateChangeSet
          (FInstanceUpdateChangeSet *this,FInstanceUpdateChangeSet *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  FInstanceAttributeTracker::FInstanceAttributeTracker
            (&this->InstanceAttributeTracker,&param_1->InstanceAttributeTracker);
  this->bNeedFullUpdate = param_1->bNeedFullUpdate;
  this->Flags = param_1->Flags;
  this->ForceFullFlags = param_1->ForceFullFlags;
  this->bUpdateAllInstanceTransforms = param_1->bUpdateAllInstanceTransforms;
  bVar1 = param_1->bIdentityIdMap;
  (this->IndexToIdMapDeltaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bIdentityIdMap = bVar1;
  (this->IndexToIdMapDeltaData).AllocatorInstance.Data =
       (param_1->IndexToIdMapDeltaData).AllocatorInstance.Data;
  (param_1->IndexToIdMapDeltaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexToIdMapDeltaData).ArrayNum = (param_1->IndexToIdMapDeltaData).ArrayNum;
  (this->IndexToIdMapDeltaData).ArrayMax = (param_1->IndexToIdMapDeltaData).ArrayMax;
  (param_1->IndexToIdMapDeltaData).ArrayNum = 0;
  (param_1->IndexToIdMapDeltaData).ArrayMax = 0;
  iVar2 = param_1->NumCustomDataFloats;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumCustomDataFloats = iVar2;
  (this->Transforms).AllocatorInstance.Data = (param_1->Transforms).AllocatorInstance.Data;
  (param_1->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = (param_1->Transforms).ArrayNum;
  (this->Transforms).ArrayMax = (param_1->Transforms).ArrayMax;
  (param_1->Transforms).ArrayNum = 0;
  (param_1->Transforms).ArrayMax = 0;
  (this->PrevTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevTransforms).AllocatorInstance.Data = (param_1->PrevTransforms).AllocatorInstance.Data;
  (param_1->PrevTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevTransforms).ArrayNum = (param_1->PrevTransforms).ArrayNum;
  (this->PrevTransforms).ArrayMax = (param_1->PrevTransforms).ArrayMax;
  (param_1->PrevTransforms).ArrayNum = 0;
  (param_1->PrevTransforms).ArrayMax = 0;
  (this->PerInstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceCustomData).AllocatorInstance.Data =
       (param_1->PerInstanceCustomData).AllocatorInstance.Data;
  (param_1->PerInstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceCustomData).ArrayNum = (param_1->PerInstanceCustomData).ArrayNum;
  (this->PerInstanceCustomData).ArrayMax = (param_1->PerInstanceCustomData).ArrayMax;
  (param_1->PerInstanceCustomData).ArrayNum = 0;
  (param_1->PerInstanceCustomData).ArrayMax = 0;
  (this->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).AllocatorInstance.Data =
       (param_1->InstanceSkinningData).AllocatorInstance.Data;
  (param_1->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).ArrayNum = (param_1->InstanceSkinningData).ArrayNum;
  (this->InstanceSkinningData).ArrayMax = (param_1->InstanceSkinningData).ArrayMax;
  (param_1->InstanceSkinningData).ArrayNum = 0;
  (param_1->InstanceSkinningData).ArrayMax = 0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data =
       (param_1->InstanceLightShadowUVBias).AllocatorInstance.Data;
  (param_1->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).ArrayNum = (param_1->InstanceLightShadowUVBias).ArrayNum;
  (this->InstanceLightShadowUVBias).ArrayMax = (param_1->InstanceLightShadowUVBias).ArrayMax;
  (param_1->InstanceLightShadowUVBias).ArrayNum = 0;
  (param_1->InstanceLightShadowUVBias).ArrayMax = 0;
  (this->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).AllocatorInstance.Data =
       (param_1->InstanceLocalBounds).AllocatorInstance.Data;
  (param_1->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).ArrayNum = (param_1->InstanceLocalBounds).ArrayNum;
  (this->InstanceLocalBounds).ArrayMax = (param_1->InstanceLocalBounds).ArrayMax;
  (param_1->InstanceLocalBounds).ArrayNum = 0;
  (param_1->InstanceLocalBounds).ArrayMax = 0;
  *(undefined8 *)&this->GeneratePerInstanceRandomIds =
       *(undefined8 *)&param_1->GeneratePerInstanceRandomIds;
  *(undefined8 *)&(this->GeneratePerInstanceRandomIds).field_0x28 =
       *(undefined8 *)&(param_1->GeneratePerInstanceRandomIds).field_0x28;
  *(undefined8 *)&(param_1->GeneratePerInstanceRandomIds).field_0x28 = 0;
  uVar3 = *(undefined8 *)&(param_1->GeneratePerInstanceRandomIds).field_0x18;
  *(undefined8 *)&(this->GeneratePerInstanceRandomIds).field_0x10 =
       *(undefined8 *)&(param_1->GeneratePerInstanceRandomIds).field_0x10;
  *(undefined8 *)&(this->GeneratePerInstanceRandomIds).field_0x18 = uVar3;
  *(undefined8 *)&(this->GeneratePerInstanceRandomIds).field_0x20 =
       *(undefined8 *)&(param_1->GeneratePerInstanceRandomIds).field_0x20;
  if (*(longlong *)&this->GeneratePerInstanceRandomIds != 0) {
    *(undefined8 *)&param_1->GeneratePerInstanceRandomIds = 0;
  }
  uVar3 = *(undefined8 *)
           ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 =
       *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8) =
       uVar3;
  uVar3 = *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_1->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4) = uVar3;
  dVar4 = (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y = dVar4;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
  (this->PreviousPrimitiveToRelativeWorld).bIsSet = false;
  bVar1 = (param_1->PreviousPrimitiveToRelativeWorld).bIsSet;
  (this->PreviousPrimitiveToRelativeWorld).bIsSet = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined8 *)
             ((longlong)
              &(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[0].field0_0x0 +
             8);
    *(undefined8 *)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[0].field0_0x0
         = *(undefined8 *)
            &(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[0].field0_0x0 + 8
     ) = uVar3;
    uVar3 = *(undefined8 *)
             &(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[1].field0_0x0 + 4
     ) = *(undefined8 *)
          ((longlong)
           &(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[1].field0_0x0 + 4);
    *(undefined8 *)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[2].field0_0x0
         = uVar3;
    uVar3 = *(undefined8 *)
             ((longlong)&(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.Origin.field0_0x0 +
             4);
    *(undefined8 *)
     ((longlong)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[2].field0_0x0 + 8
     ) = *(undefined8 *)
          ((longlong)
           &(param_1->PreviousPrimitiveToRelativeWorld).TypedValue.TransformRows[2].field0_0x0 + 8);
    *(undefined8 *)
     ((longlong)&(this->PreviousPrimitiveToRelativeWorld).TypedValue.Origin.field0_0x0 + 4) = uVar3;
  }
  this->AbsMaxDisplacement = param_1->AbsMaxDisplacement;
  this->NumSourceInstances = param_1->NumSourceInstances;
  this->MaxInstanceId = param_1->MaxInstanceId;
  (this->PrecomputedOptimizationData).Object = (param_1->PrecomputedOptimizationData).Object;
  (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController =
       (param_1->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController;
  (param_1->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->PrecomputedOptimizationData).Object = (FPrecomputedInstanceSpatialHashData *)0x0;
  return this;
}

// ~FInstanceUpdateChangeSet @ 147cc8a20

void __thiscall FInstanceUpdateChangeSet::~FInstanceUpdateChangeSet(FInstanceUpdateChangeSet *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->GeneratePerInstanceRandomIds != 0) {
    plVar1 = *(longlong **)&(this->GeneratePerInstanceRandomIds).field_0x28;
    plVar4 = (longlong *)&(this->GeneratePerInstanceRandomIds).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->InstanceLocalBounds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceLightShadowUVBias).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceSkinningData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PerInstanceCustomData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PrevTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->IndexToIdMapDeltaData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->InstanceAttributeTracker).Removed.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar2 = (this->InstanceAttributeTracker).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetCustomDataReader @ 147cfc2d0

FReader * __thiscall
FInstanceUpdateChangeSet::GetCustomDataReader
          (FInstanceUpdateChangeSet *this,FReader *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FReader *pFVar5;
  int iVar6;
  byte bVar7;
  undefined8 local_48;
  TArray<float,TSizedDefaultAllocator<32>_> *local_38;
  ulonglong uStack_30;
  FInstanceUpdateChangeSet *pFStack_28;
  uint uStack_1c;
  undefined4 uStack_14;
  
  iVar1 = this->NumCustomDataFloats;
  iVar2 = this->NumSourceInstances;
  bVar7 = *(byte *)&this->Flags >> 1;
  if ((bVar7 & 1) == 0) {
    uStack_1c = CONCAT31(uStack_1c._1_3_,bVar7) & 0xffffff01;
    uStack_30 = 1;
    pFStack_28 = (FInstanceUpdateChangeSet *)0x0;
  }
  else {
    if (((this->bNeedFullUpdate == false) && ((*(byte *)&this->ForceFullFlags >> 1 & 1) == 0)) &&
       (iVar6 = (this->InstanceAttributeTracker).NumChanged[2] +
                (this->InstanceAttributeTracker).NumChanged[0], iVar6 != iVar2)) {
      local_48 = CONCAT44(iVar6,(undefined4)local_48) & 0xffffffffffffff00;
    }
    else {
      local_48 = CONCAT44(iVar2,(undefined4)local_48);
      local_48 = CONCAT71(local_48._1_7_,1);
      iVar6 = iVar2;
    }
    uStack_1c = CONCAT31(uStack_1c._1_3_,bVar7) & 0xffffff01;
    uStack_30 = local_48;
    pFStack_28 = this;
    if (((this->PerInstanceCustomData).ArrayNum != iVar6 * iVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsEnabled || DeltaDataArray.Num() == Delta.GetNumItems() * ElementStride"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                           ,0x10d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReader *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_38 = &this->PerInstanceCustomData;
  (__return_storage_ptr__->Setup).DeltaDataArray = local_38;
  (__return_storage_ptr__->Setup).Delta.bFullUpdate = (bool)(undefined1)uStack_30;
  *(undefined3 *)&(__return_storage_ptr__->Setup).Delta.field_0x1 = uStack_30._1_3_;
  (__return_storage_ptr__->Setup).Delta.NumItems = uStack_30._4_4_;
  (__return_storage_ptr__->Setup).Delta.Tracker = &pFStack_28->InstanceAttributeTracker;
  (__return_storage_ptr__->Setup).ElementStride = iVar1;
  (__return_storage_ptr__->Setup).bIsEnabled = (bool)(char)uStack_1c;
  *(int3 *)&(__return_storage_ptr__->Setup).field_0x1d = (int3)(uStack_1c >> 8);
  *(ulonglong *)&(__return_storage_ptr__->Setup).NumInstances = CONCAT44(uStack_14,iVar2);
  return __return_storage_ptr__;
}

// GetLocalBoundsReader @ 147d08f20

FReader * __thiscall
FInstanceUpdateChangeSet::GetLocalBoundsReader
          (FInstanceUpdateChangeSet *this,FReader *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  bool bVar5;
  FReader *pFVar6;
  int iStack_20;
  undefined4 local_18;
  undefined3 uStack_17;
  
  bVar4 = *(byte *)&this->Flags >> 5;
  iVar1 = this->NumSourceInstances;
  if ((bVar4 & 1) == 0) {
    iStack_20 = 0;
  }
  else {
    iStack_20 = iVar1;
    if ((this->InstanceLocalBounds).ArrayNum != iVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsEnabled || DeltaDataArray.Num() == Delta.GetNumItems() * ElementStride"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                         ,0x10d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FReader *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  uVar3 = CONCAT44(iVar1,CONCAT31(uStack_17,bVar4)) & 0xffffffffffffff01;
  (__return_storage_ptr__->Setup).DeltaDataArray = &this->InstanceLocalBounds;
  (__return_storage_ptr__->Setup).Delta = (FIdentityDeltaRange)iStack_20;
  (__return_storage_ptr__->Setup).ElementStride = 1;
  (__return_storage_ptr__->Setup).bIsEnabled = (bool)(char)uVar3;
  *(int3 *)&(__return_storage_ptr__->Setup).field_0x11 = (int3)(uVar3 >> 8);
  (__return_storage_ptr__->Setup).NumInstances = (int)(uVar3 >> 0x20);
  return __return_storage_ptr__;
}

// SetSharedLocalBounds @ 147d2b6a0

void __thiscall
FInstanceUpdateChangeSet::SetSharedLocalBounds
          (FInstanceUpdateChangeSet *this,FRenderBounds *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar13;
  
  if (((*(byte *)&this->Flags & 0x20) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Flags.bHasPerInstanceLocalBounds",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceUpdateChangeSet.cpp"
                         ,0x40,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar13 = &this->InstanceLocalBounds;
  iVar3 = (this->InstanceLocalBounds).ArrayNum;
  piVar1 = &(this->InstanceLocalBounds).ArrayNum;
  if (iVar3 < 1) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,1 - iVar3,&pTVar13->AllocatorInstance,piVar1,
                        &(this->InstanceLocalBounds).ArrayMax);
    DefaultConstructItems<FRenderBounds,int>
              ((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x18,1 - iVar3);
  }
  else if (1 < iVar3) {
    uVar12 = iVar3 - 1;
    if ((int)uVar12 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar12 == 0) goto LAB_147d2b7e7;
    pFVar11 = (pTVar13->AllocatorInstance).Data + 0x18;
    if (~uVar12 + *piVar1 != 0) {
      memmove(pFVar11,pFVar11 + (longlong)(int)uVar12 * 0x18,
              (longlong)(int)(~uVar12 + *piVar1) * 0x18);
    }
    *piVar1 = *piVar1 - uVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&pTVar13->AllocatorInstance,*piVar1,&(this->InstanceLocalBounds).ArrayMax);
  }
LAB_147d2b7e7:
  fVar5 = (param_1->Min).field0_0x0._s_0.X;
  fVar6 = (param_1->Min).field0_0x0._s_0.Y;
  fVar7 = (param_1->Min).field0_0x0._s_0.Z;
  fVar8 = (param_1->Max).field0_0x0._s_0.X;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Max).field0_0x0 + 4);
  if ((*piVar1 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = (pTVar13->AllocatorInstance).Data;
  *(float *)pFVar11 = fVar5;
  *(float *)(pFVar11 + 4) = fVar6;
  *(float *)(pFVar11 + 8) = fVar7;
  *(float *)(pFVar11 + 0xc) = fVar8;
  *(undefined8 *)(pFVar11 + 0x10) = uVar2;
  return;
}

// GetPrevTransformWriter @ 147da71d0

FWriter * __thiscall
FInstanceUpdateChangeSet::GetPrevTransformWriter
          (FInstanceUpdateChangeSet *this,FWriter *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_48;
  FInstanceUpdateChangeSet *pFStack_40;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_> local_38;
  
  if ((this->bUpdateAllInstanceTransforms == false) && ((*(byte *)&this->ForceFullFlags & 4) == 0))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_38.bIsEnabled = (bool)(*(byte *)&this->Flags >> 2 & 1);
  if (local_38.bIsEnabled == false) {
    local_48 = 0;
    pFStack_40 = (FInstanceUpdateChangeSet *)0x0;
  }
  else {
    iVar1 = this->NumSourceInstances;
    pFStack_40 = this;
    if ((this->bNeedFullUpdate != false) || (bVar2)) {
      local_48 = CONCAT44(iVar1,(undefined4)local_48);
    }
    else {
      iVar3 = (this->InstanceAttributeTracker).NumChanged[1] +
              (this->InstanceAttributeTracker).NumChanged[0];
      local_48 = CONCAT44(iVar1,(undefined4)local_48);
      if (iVar3 != iVar1) {
        local_48 = CONCAT44(iVar3,(undefined4)local_48) & 0xffffffffffffff00;
        goto LAB_147da7251;
      }
    }
  }
  local_48 = CONCAT71(local_48._1_7_,1);
LAB_147da7251:
  local_38.DeltaDataArray = &this->PrevTransforms;
  local_38.ElementStride = 1;
  local_38.Delta.bFullUpdate = (bool)(undefined1)local_48;
  local_38.Delta._1_3_ = local_48._1_3_;
  local_38.Delta.NumItems = local_48._4_4_;
  local_38.Delta.Tracker = &pFStack_40->InstanceAttributeTracker;
  local_38.NumInstances = this->NumSourceInstances;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::GetWriter
            (&local_38,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTransformWriter @ 147daa060

FWriter * __thiscall
FInstanceUpdateChangeSet::GetTransformWriter
          (FInstanceUpdateChangeSet *this,FWriter *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FWriter *pFVar4;
  int local_48;
  int iStack_44;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  iVar1 = this->NumSourceInstances;
  if (((this->bNeedFullUpdate == false) && (this->bUpdateAllInstanceTransforms == false)) &&
     (iStack_44 = (this->InstanceAttributeTracker).NumChanged[1] +
                  (this->InstanceAttributeTracker).NumChanged[0], iStack_44 != iVar1)) {
    local_48 = (uint)local_48._1_3_ << 8;
  }
  else {
    local_48 = CONCAT31(local_48._1_3_,1);
    iStack_44 = iVar1;
  }
  if (((this->Transforms).ArrayNum != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FWriter *)(*pcVar2)();
    return pFVar4;
  }
  (__return_storage_ptr__->Setup).DeltaDataArray = &this->Transforms;
  (__return_storage_ptr__->Setup).Delta.bFullUpdate = (bool)(char)local_48;
  *(int3 *)&(__return_storage_ptr__->Setup).Delta.field_0x1 = (int3)((uint)local_48 >> 8);
  (__return_storage_ptr__->Setup).Delta.NumItems = iStack_44;
  (__return_storage_ptr__->Setup).Delta.Tracker = &this->InstanceAttributeTracker;
  (__return_storage_ptr__->Setup).ElementStride = 1;
  (__return_storage_ptr__->Setup).bIsEnabled = true;
  *(undefined3 *)&(__return_storage_ptr__->Setup).field_0x1d = uStack_1c._1_3_;
  *(ulonglong *)&(__return_storage_ptr__->Setup).NumInstances = CONCAT44(uStack_14,iVar1);
  return __return_storage_ptr__;
}

