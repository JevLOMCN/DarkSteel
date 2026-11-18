// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FNavigationRelevantData @ 14737c050

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::FNavigationRelevantData
          (FNavigationRelevantData *this,FNavigationRelevantData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uint uVar10;
  
  *(undefined8 *)&this->CollisionData = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->CollisionData).field_0x8 = 0;
  *(undefined8 *)&this->CollisionData = *(undefined8 *)&param_1->CollisionData;
  *(undefined8 *)&param_1->CollisionData = 0;
  *(undefined4 *)&(this->CollisionData).field_0x10 =
       *(undefined4 *)&(param_1->CollisionData).field_0x10;
  *(undefined4 *)&(this->CollisionData).field_0x14 =
       *(undefined4 *)&(param_1->CollisionData).field_0x14;
  *(undefined8 *)&(param_1->CollisionData).field_0x10 = 0;
  *(undefined8 *)&this->VoxelData = 0;
  *(undefined8 *)&(this->VoxelData).field_0x8 = 0;
  *(undefined8 *)&this->VoxelData = *(undefined8 *)&param_1->VoxelData;
  *(undefined8 *)&param_1->VoxelData = 0;
  *(undefined4 *)&(this->VoxelData).field_0x10 = *(undefined4 *)&(param_1->VoxelData).field_0x10;
  *(undefined4 *)&(this->VoxelData).field_0x14 = *(undefined4 *)&(param_1->VoxelData).field_0x14;
  *(undefined8 *)&(param_1->VoxelData).field_0x10 = 0;
  dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->Bounds).Pad[0];
  uVar4 = (param_1->Bounds).Pad[1];
  uVar5 = (param_1->Bounds).Pad[2];
  uVar6 = (param_1->Bounds).Pad[3];
  uVar7 = (param_1->Bounds).Pad[4];
  uVar8 = (param_1->Bounds).Pad[5];
  uVar9 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavDataPerInstanceTransformDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)
              &param_1->NavDataPerInstanceTransformDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldUseGeometryDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ShouldUseGeometryDelegate);
  FCompositeNavModifier::FCompositeNavModifier(&this->Modifiers,&param_1->Modifiers);
  (this->SourceElement).Object = (param_1->SourceElement).Object;
  pTVar1 = (param_1->SourceElement).SharedReferenceCount.ReferenceController;
  (this->SourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0x110,0,1) ^ param_1->bPendingLazyGeometryGathering) &
           1 ^ *(undefined4 *)&this->field_0x110;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 2 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 4 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 8 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  *(uint *)&this->field_0x110 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 0x20 ^ uVar10;
  return this;
}

// FNavigationRelevantData @ 14737c1c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::FNavigationRelevantData(FNavigationRelevantData *this,UObject *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  *(uint *)&(this->Modifiers)._padding_ = (uint)(this->Modifiers)._padding_ & 0xfffffffe;
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  (this->Modifiers).bHasPotentialLinks = 0;
  (this->Modifiers).bRasterizeAsFilledConvexVolume = 0;
  (this->Modifiers).bMaskFillCollisionUnderneathForNavmesh = 0;
  (this->Modifiers).bFillCollisionUnderneathForNavmesh = 0;
  (this->Modifiers).bIsPerInstanceModifier = 0;
  (this->Modifiers).bHasLowAreaModifiers = 0;
  (this->Modifiers).bAdjustHeight = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->CollisionData = 0;
  *(undefined8 *)&(this->CollisionData).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionData).field_0x10 = 0;
  *(undefined8 *)&this->VoxelData = 0;
  *(undefined8 *)&(this->VoxelData).field_0x8 = 0;
  *(undefined8 *)&(this->VoxelData).field_0x10 = 0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)&this->NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->NavDataPerInstanceTransformDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavDataPerInstanceTransformDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ShouldUseGeometryDelegate = 0;
  *(undefined8 *)&(this->ShouldUseGeometryDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldUseGeometryDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate.field_0x10 = 0;
  (this->Modifiers).Areas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).Areas.ArrayNum = 0;
  (this->Modifiers).Areas.ArrayMax = 0;
  (this->Modifiers).SimpleLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).SimpleLinks.ArrayNum = 0;
  (this->Modifiers).SimpleLinks.ArrayMax = 0;
  (this->Modifiers).CustomLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).CustomLinks.ArrayNum = 0;
  (this->Modifiers).CustomLinks.ArrayMax = 0;
  (this->Modifiers).NavMeshResolution = Invalid;
  pTVar2 = ::operator_new(0x130);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFNavigationElement___00_SharedPointerInternals__6B_
    ;
    FNavigationElement::FNavigationElement
              ((FNavigationElement *)(pTVar2 + 1),param_1,0xffffffffffffffff);
    pTVar3 = pTVar2;
  }
  TSharedRef<FNavigationElement_const_,1>::TSharedRef<FNavigationElement_const_,1>
            (&this->SourceElement,(FNavigationElement *)(pTVar3 + 1),pTVar3);
  this->bPendingLazyGeometryGathering = 0;
  this->bLoadedData = 0;
  this->bShouldSkipDirtyAreaOnAddOrRemove = 0;
  this->bSupportsGatheringGeometrySlices = 0;
  this->bPendingChildLazyModifiersGathering = 0;
  this->bPendingLazyModifiersGathering = 0;
  return this;
}

// FNavigationRelevantData @ 14737c300

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::FNavigationRelevantData
          (FNavigationRelevantData *this,FNavigationRelevantData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uint uVar10;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  TNavStatArray<unsigned_char>::TNavStatArray<unsigned_char>
            (&this->CollisionData,&param_1->CollisionData);
  TNavStatArray<unsigned_char>::TNavStatArray<unsigned_char>(&this->VoxelData,&param_1->VoxelData);
  dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->Bounds).Pad[0];
  uVar4 = (param_1->Bounds).Pad[1];
  uVar5 = (param_1->Bounds).Pad[2];
  uVar6 = (param_1->Bounds).Pad[3];
  uVar7 = (param_1->Bounds).Pad[4];
  uVar8 = (param_1->Bounds).Pad[5];
  uVar9 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  *(undefined8 *)&this->NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->NavDataPerInstanceTransformDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavDataPerInstanceTransformDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->NavDataPerInstanceTransformDelegate,
             &param_1->NavDataPerInstanceTransformDelegate);
  *(undefined8 *)&this->ShouldUseGeometryDelegate = 0;
  *(undefined8 *)&(this->ShouldUseGeometryDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldUseGeometryDelegate).field_0x10 = 0;
  TDelegate<bool___cdecl(FNavDataConfig_const_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShouldUseGeometryDelegate,&param_1->ShouldUseGeometryDelegate);
  FCompositeNavModifier::FCompositeNavModifier(&this->Modifiers,&param_1->Modifiers);
  (this->SourceElement).Object = (param_1->SourceElement).Object;
  pTVar1 = (param_1->SourceElement).SharedReferenceCount.ReferenceController;
  (this->SourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0x110,0,1) ^ param_1->bPendingLazyGeometryGathering) &
           1 ^ *(undefined4 *)&this->field_0x110;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 2 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 4 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 8 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x110 = uVar10;
  *(uint *)&this->field_0x110 = (uVar10 ^ *(uint *)&param_1->field_0x110) & 0x20 ^ uVar10;
  return this;
}

// operator= @ 14737e540

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::operator=(FNavigationRelevantData *this,FNavigationRelevantData *param_1)

{
  TNavStatArray<unsigned_char> *pTVar1;
  TNavStatArray<unsigned_char> *pTVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNavigationElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uint uVar14;
  
  pTVar1 = &param_1->CollisionData;
  pTVar2 = &this->CollisionData;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->CollisionData).field_0x10 =
         *(undefined4 *)&(param_1->CollisionData).field_0x10;
    *(undefined4 *)&(this->CollisionData).field_0x14 =
         *(undefined4 *)&(param_1->CollisionData).field_0x14;
    *(undefined8 *)&(param_1->CollisionData).field_0x10 = 0;
  }
  pTVar1 = &param_1->VoxelData;
  pTVar2 = &this->VoxelData;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->VoxelData).field_0x10 = *(undefined4 *)&(param_1->VoxelData).field_0x10;
    *(undefined4 *)&(this->VoxelData).field_0x14 = *(undefined4 *)&(param_1->VoxelData).field_0x14;
    *(undefined8 *)&(param_1->VoxelData).field_0x10 = 0;
  }
  dVar3 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar7 = (param_1->Bounds).Pad[0];
  uVar8 = (param_1->Bounds).Pad[1];
  uVar9 = (param_1->Bounds).Pad[2];
  uVar10 = (param_1->Bounds).Pad[3];
  uVar11 = (param_1->Bounds).Pad[4];
  uVar12 = (param_1->Bounds).Pad[5];
  uVar13 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar7;
  (this->Bounds).Pad[1] = uVar8;
  (this->Bounds).Pad[2] = uVar9;
  (this->Bounds).Pad[3] = uVar10;
  (this->Bounds).Pad[4] = uVar11;
  (this->Bounds).Pad[5] = uVar12;
  (this->Bounds).Pad[6] = uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavDataPerInstanceTransformDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)
              &param_1->NavDataPerInstanceTransformDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldUseGeometryDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ShouldUseGeometryDelegate);
  FCompositeNavModifier::operator=(&this->Modifiers,&param_1->Modifiers);
  pTVar4 = (param_1->SourceElement).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->SourceElement).Object;
  pTVar6 = (this->SourceElement).SharedReferenceCount.ReferenceController;
  (this->SourceElement).Object = (param_1->SourceElement).Object;
  (this->SourceElement).SharedReferenceCount.ReferenceController = pTVar4;
  (param_1->SourceElement).Object = pFVar5;
  (param_1->SourceElement).SharedReferenceCount.ReferenceController = pTVar6;
  uVar14 = (ZPULL(*(undefined4 *)&this->field_0x110,0,1) ^ param_1->bPendingLazyGeometryGathering) &
           1 ^ *(undefined4 *)&this->field_0x110;
  *(uint *)&this->field_0x110 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x110) & 2 ^ uVar14;
  *(uint *)&this->field_0x110 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x110) & 4 ^ uVar14;
  *(uint *)&this->field_0x110 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x110) & 8 ^ uVar14;
  *(uint *)&this->field_0x110 = uVar14;
  uVar14 = (uVar14 ^ *(uint *)&param_1->field_0x110) & 0x10 ^ uVar14;
  *(uint *)&this->field_0x110 = uVar14;
  *(uint *)&this->field_0x110 = (uVar14 ^ *(uint *)&param_1->field_0x110) & 0x20 ^ uVar14;
  return this;
}

// operator= @ 14737e6e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::operator=(FNavigationRelevantData *this,FNavigationRelevantData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uint uVar12;
  
  TNavStatArray<unsigned_char>::operator=(&this->CollisionData,&param_1->CollisionData);
  TNavStatArray<unsigned_char>::operator=(&this->VoxelData,&param_1->VoxelData);
  dVar4 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar4;
  uVar5 = (param_1->Bounds).Pad[0];
  uVar6 = (param_1->Bounds).Pad[1];
  uVar7 = (param_1->Bounds).Pad[2];
  uVar8 = (param_1->Bounds).Pad[3];
  uVar9 = (param_1->Bounds).Pad[4];
  uVar10 = (param_1->Bounds).Pad[5];
  uVar11 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar5;
  (this->Bounds).Pad[1] = uVar6;
  (this->Bounds).Pad[2] = uVar7;
  (this->Bounds).Pad[3] = uVar8;
  (this->Bounds).Pad[4] = uVar9;
  (this->Bounds).Pad[5] = uVar10;
  (this->Bounds).Pad[6] = uVar11;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->NavDataPerInstanceTransformDelegate,
             &param_1->NavDataPerInstanceTransformDelegate);
  TDelegate<bool___cdecl(FNavDataConfig_const_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShouldUseGeometryDelegate,&param_1->ShouldUseGeometryDelegate);
  FCompositeNavModifier::operator=(&this->Modifiers,&param_1->Modifiers);
  pTVar1 = (param_1->SourceElement).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->SourceElement).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SourceElement).SharedReferenceCount.ReferenceController;
  (this->SourceElement).Object = pFVar2;
  (this->SourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar12 = (ZPULL(*(undefined4 *)&this->field_0x110,0,1) ^ param_1->bPendingLazyGeometryGathering) &
           1 ^ *(undefined4 *)&this->field_0x110;
  *(uint *)&this->field_0x110 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x110) & 2 ^ uVar12;
  *(uint *)&this->field_0x110 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x110) & 4 ^ uVar12;
  *(uint *)&this->field_0x110 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x110) & 8 ^ uVar12;
  *(uint *)&this->field_0x110 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x110) & 0x10 ^ uVar12;
  *(uint *)&this->field_0x110 = uVar12;
  *(uint *)&this->field_0x110 = (uVar12 ^ *(uint *)&param_1->field_0x110) & 0x20 ^ uVar12;
  return this;
}

// GetModifierForAgent @ 14739e240

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FNavigationRelevantData::GetModifierForAgent
          (FNavigationRelevantData *this,FCompositeNavModifier *__return_storage_ptr__,
          FNavAgentProperties *param_1)

{
  FCompositeNavModifier *pFVar1;
  FWeakObjectPtr local_res8 [4];
  FCompositeNavModifier local_b8;
  FCompositeNavModifier local_60;
  
  pFVar1 = &this->Modifiers;
  if ((pFVar1->_padding_ & 1) != 0) {
    local_res8[0] = (((this->SourceElement).Object)->OwnerUObject).WeakPtr;
    pFVar1 = FCompositeNavModifier::GetInstantiatedMetaModifier
                       (pFVar1,&local_b8,param_1,
                        (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_res8);
    FCompositeNavModifier::FCompositeNavModifier(__return_storage_ptr__,pFVar1);
    if (local_b8.CustomLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.CustomLinks.AllocatorInstance.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)local_b8.SimpleLinks.AllocatorInstance.Data,
               local_b8.SimpleLinks.ArrayNum);
    if ((FSimpleLinkNavModifier *)local_b8.SimpleLinks.AllocatorInstance.Data !=
        (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_b8.SimpleLinks.AllocatorInstance.Data);
    }
    DestructItems<FAreaNavModifier,int>
              ((FAreaNavModifier *)local_b8.Areas.AllocatorInstance.Data,local_b8.Areas.ArrayNum);
    if ((FAreaNavModifier *)local_b8.Areas.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_b8.Areas.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &local_b8.NavDataPerInstanceTransformDelegate);
    return __return_storage_ptr__;
  }
  pFVar1 = FCompositeNavModifier::FCompositeNavModifier(&local_60,pFVar1);
  FCompositeNavModifier::FCompositeNavModifier(__return_storage_ptr__,pFVar1);
  if (local_60.CustomLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.CustomLinks.AllocatorInstance.Data);
  }
  DestructItems<FSimpleLinkNavModifier,int>
            ((FSimpleLinkNavModifier *)local_60.SimpleLinks.AllocatorInstance.Data,
             local_60.SimpleLinks.ArrayNum);
  if ((FSimpleLinkNavModifier *)local_60.SimpleLinks.AllocatorInstance.Data !=
      (FSimpleLinkNavModifier *)0x0) {
    FMemory::Free(local_60.SimpleLinks.AllocatorInstance.Data);
  }
  DestructItems<FAreaNavModifier,int>
            ((FAreaNavModifier *)local_60.Areas.AllocatorInstance.Data,local_60.Areas.ArrayNum);
  if ((FAreaNavModifier *)local_60.Areas.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
    FMemory::Free(local_60.Areas.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_60.NavDataPerInstanceTransformDelegate);
  return __return_storage_ptr__;
}

// GetOwner @ 14739fde0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

UObject * __thiscall FNavigationRelevantData::GetOwner(FNavigationRelevantData *this)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (((this->SourceElement).Object)->OwnerUObject).WeakPtr;
  pUVar1 = FWeakObjectPtr::Get(local_res8);
  return pUVar1;
}

// GetOwnerPtr @ 14739fe10

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FNavigationRelevantData::GetOwnerPtr(FNavigationRelevantData *this)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res8;
  
  local_res8 = (((this->SourceElement).Object)->OwnerUObject).WeakPtr;
  FVar1 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = FVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// HasPerInstanceTransforms @ 1473a2930

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FNavigationRelevantData::HasPerInstanceTransforms(FNavigationRelevantData *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NavDataPerInstanceTransformDelegate,&local_28);
  if ((*(int *)&(this->NavDataPerInstanceTransformDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->NavDataPerInstanceTransformDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsCollisionDataValid @ 1473a6410

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNavigationRelevantData::IsCollisionDataValid(FNavigationRelevantData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar1 = *(int *)&(this->CollisionData).field_0x10;
  if ((iVar1 != 0) && ((iVar1 < 4 || (**(int **)&this->CollisionData != iVar1)))) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2480537187616030453>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationTypes.cpp"
                       ,0x10b,"bIsValid");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (1 < (byte)LogNavigation._0_1_) {
      ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_28,L"IsValid=%s, Min=(%s), Max=(%s)");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FNavigationElement::GetName((this->SourceElement).Object,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return true;
}

// IsMatchingFilter @ 1473a6c90

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FNavigationRelevantData::IsMatchingFilter
          (FNavigationRelevantData *this,FNavigationRelevantDataFilter *param_1)

{
  if (((param_1->bExcludeLoadedData == 0) || (this->bLoadedData == 0)) &&
     ((((param_1->bIncludeGeometry != 0 &&
        ((*(int *)&(this->VoxelData).field_0x10 != 0 ||
         (*(int *)&(this->CollisionData).field_0x10 != 0)))) ||
       ((param_1->bIncludeOffmeshLinks != 0 &&
        ((((this->Modifiers).bHasPotentialLinks != 0 || (0 < (this->Modifiers).SimpleLinks.ArrayNum)
          ) || (0 < (this->Modifiers).CustomLinks.ArrayNum)))))) ||
      (((param_1->bIncludeAreas != 0 && (0 < (this->Modifiers).Areas.ArrayNum)) ||
       ((param_1->bIncludeMetaAreas != 0 && (((this->Modifiers)._padding_ & 1) != 0)))))))) {
    return true;
  }
  return false;
}

// Shrink @ 1473b8760

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FNavigationRelevantData::Shrink(FNavigationRelevantData *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)&(this->CollisionData).field_0x10;
  puVar1 = &(this->CollisionData).field_0x14;
  if (*(int *)puVar1 != iVar3) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,iVar3,(ForAnyElementType *)&this->CollisionData,iVar3,(int *)puVar1);
  }
  iVar3 = *(int *)&(this->VoxelData).field_0x10;
  if (*(int *)&(this->VoxelData).field_0x14 != iVar3) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,iVar3,(ForAnyElementType *)&this->VoxelData,iVar3,
               (int *)&(this->VoxelData).field_0x14);
  }
  iVar3 = (this->Modifiers).Areas.ArrayNum;
  piVar2 = &(this->Modifiers).Areas.ArrayMax;
  if (*piVar2 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar3,&(this->Modifiers).Areas.AllocatorInstance,iVar3,piVar2);
  }
  iVar3 = (this->Modifiers).SimpleLinks.ArrayNum;
  piVar2 = &(this->Modifiers).SimpleLinks.ArrayMax;
  if (*piVar2 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar3,&(this->Modifiers).SimpleLinks.AllocatorInstance,iVar3,piVar2);
  }
  iVar3 = (this->Modifiers).CustomLinks.ArrayNum;
  piVar2 = &(this->Modifiers).CustomLinks.ArrayMax;
  if (*piVar2 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar3,&(this->Modifiers).CustomLinks.AllocatorInstance,iVar3,piVar2);
  }
  return;
}

