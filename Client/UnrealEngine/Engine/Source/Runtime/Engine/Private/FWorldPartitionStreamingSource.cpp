// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FWorldPartitionStreamingSource @ 1479a6230

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionStreamingSource * __thiscall
FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
          (FWorldPartitionStreamingSource *this,FWorldPartitionStreamingSource *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  double dVar5;
  
  pTVar1 = &this->TargetGrids;
  this->Name = param_1->Name;
  pTVar2 = &param_1->TargetGrids;
  dVar5 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar5;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar5 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar5;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->TargetState = param_1->TargetState;
  this->bBlockOnSlowLoading = param_1->bBlockOnSlowLoading;
  this->Priority = param_1->Priority;
  dVar5 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar5;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  this->bUseVelocityContributionToCellsSorting = param_1->bUseVelocityContributionToCellsSorting;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  this->TargetBehavior = param_1->TargetBehavior;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x34 = 0;
  (this->TargetGrids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetGrids).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->TargetGrids).Elements.field_0x10;
    *(undefined4 *)&(this->TargetGrids).Elements.field_0x8 =
         *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x8;
    _Src = &(param_1->TargetGrids).Elements.field_0x10;
    *(undefined4 *)&(this->TargetGrids).Elements.field_0xc =
         *(undefined4 *)&(param_1->TargetGrids).Elements.field_0xc;
    *(undefined8 *)&(param_1->TargetGrids).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->TargetGrids).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->TargetGrids).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->TargetGrids).Elements.field_0x20 =
           *(undefined8 *)&(param_1->TargetGrids).Elements.field_0x20;
      *(undefined8 *)&(param_1->TargetGrids).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->TargetGrids).Elements.field_0x28 =
           *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x28;
      *(undefined4 *)&(this->TargetGrids).Elements.field_0x2c =
           *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x2c;
      *(undefined8 *)&(param_1->TargetGrids).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->TargetGrids).Elements.field_0x30 =
         *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x30;
    *(undefined4 *)&(this->TargetGrids).Elements.field_0x34 =
         *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x34;
    *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->TargetGrids).Elements.field_0x34 = 0;
  }
  if ((param_1->TargetGrids).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->TargetGrids).Hash.InlineData =
         *(undefined4 *)(param_1->TargetGrids).Hash.InlineData;
  }
  FVar4 = (this->TargetGrids).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->TargetGrids).Hash.SecondaryData = (param_1->TargetGrids).Hash.SecondaryData;
  (param_1->TargetGrids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetGrids).HashSize = (param_1->TargetGrids).HashSize;
  (param_1->TargetGrids).HashSize = 0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
            (&this->TargetHLODLayers,&param_1->TargetHLODLayers);
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).AllocatorInstance.Data = (param_1->Shapes).AllocatorInstance.Data;
  (param_1->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = (param_1->Shapes).ArrayNum;
  (this->Shapes).ArrayMax = (param_1->Shapes).ArrayMax;
  (param_1->Shapes).ArrayNum = 0;
  (param_1->Shapes).ArrayMax = 0;
  this->bReplay = param_1->bReplay;
  this->bRemote = param_1->bRemote;
  this->bForce2D = param_1->bForce2D;
  this->Hash2D = param_1->Hash2D;
  this->Hash3D = param_1->Hash3D;
  dVar5 = (param_1->QuantizedLocation).field0_0x0._s_0.Y;
  (this->QuantizedLocation).field0_0x0._s_0.X = (param_1->QuantizedLocation).field0_0x0._s_0.X;
  (this->QuantizedLocation).field0_0x0._s_0.Y = dVar5;
  (this->QuantizedLocation).field0_0x0._s_0.Z = (param_1->QuantizedLocation).field0_0x0._s_0.Z;
  dVar5 = (param_1->QuantizedRotation).Yaw;
  (this->QuantizedRotation).Pitch = (param_1->QuantizedRotation).Pitch;
  (this->QuantizedRotation).Yaw = dVar5;
  (this->QuantizedRotation).Roll = (param_1->QuantizedRotation).Roll;
  this->ExtraRadius = param_1->ExtraRadius;
  this->ExtraAngle = param_1->ExtraAngle;
  return this;
}

// FWorldPartitionStreamingSource @ 14834c420

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionStreamingSource * __thiscall
FWorldPartitionStreamingSource::FWorldPartitionStreamingSource(FWorldPartitionStreamingSource *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->Name).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Name).Number = 0;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->TargetState = Activated;
  this->bBlockOnSlowLoading = false;
  this->Priority = Default;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DebugColor).field0_0x0.Bits = 0;
  *(undefined8 *)&(this->TargetGrids).Elements = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x20 = 0;
  this->bUseVelocityContributionToCellsSorting = false;
  this->TargetBehavior = Include;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x30 = 0xffffffff;
  (this->TargetGrids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetGrids).HashSize = 0;
  *(undefined8 *)&(this->TargetHLODLayers).Elements = 0;
  *(undefined8 *)&(this->TargetHLODLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetHLODLayers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x30 = 0xffffffff;
  (this->TargetHLODLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetHLODLayers).HashSize = 0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  this->bReplay = false;
  this->bRemote = false;
  this->bForce2D = false;
  this->Hash2D = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->Hash3D = 0;
  (this->QuantizedLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->QuantizedLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->QuantizedLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->QuantizedRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->QuantizedRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->ExtraRadius = 0.0;
  this->ExtraAngle = 0.0;
  (this->QuantizedRotation).Roll = dVar2;
  return this;
}

// operator() @ 148a82ce0

void __thiscall
`FWorldPartitionStreamingSource::CalcBounds'::__l2::<lambda_1>::operator()
          (void *this,FSphericalSector *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined7 uStack_27;
  
  dVar1 = param_1->Radius;
  dVar2 = (param_1->Center).field0_0x0._s_0.X;
  dVar8 = (param_1->Center).field0_0x0._s_0.Y;
  dVar11 = (param_1->Center).field0_0x0._s_0.Z;
  dVar9 = dVar2 + dVar1;
  pauVar3 = *(undefined1 (**) [16])this;
  dVar2 = dVar2 - dVar1;
  dVar7 = dVar8 + dVar1;
  dVar10 = dVar11 + dVar1;
  dVar8 = dVar8 - dVar1;
  dVar11 = dVar11 - dVar1;
  if (pauVar3[3][0] != '\0') {
    if (*(double *)*pauVar3 <= dVar2) {
      dVar2 = *(double *)*pauVar3;
    }
    if (*(double *)(*pauVar3 + 8) <= dVar8) {
      dVar8 = *(double *)(*pauVar3 + 8);
    }
    if (dVar9 <= *(double *)(pauVar3[1] + 8)) {
      dVar9 = *(double *)(pauVar3[1] + 8);
    }
    if (dVar10 <= *(double *)(pauVar3[2] + 8)) {
      dVar10 = *(double *)(pauVar3[2] + 8);
    }
    dVar1 = *(double *)pauVar3[1];
    if (dVar11 <= *(double *)pauVar3[1]) {
      dVar1 = dVar11;
    }
    *(double *)*pauVar3 = dVar2;
    *(double *)(*pauVar3 + 8) = dVar8;
    *(double *)(pauVar3[1] + 8) = dVar9;
    *(double *)(pauVar3[2] + 8) = dVar10;
    *(double *)pauVar3[1] = dVar1;
    dVar1 = *(double *)pauVar3[2];
    if (*(double *)pauVar3[2] <= dVar7) {
      dVar1 = dVar7;
    }
    *(double *)pauVar3[2] = dVar1;
    return;
  }
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *pauVar3 = auVar4;
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  pauVar3[1] = auVar6;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  pauVar3[2] = auVar5;
  *(ulonglong *)pauVar3[3] = CONCAT71(uStack_27,1);
  return;
}

// ForEachShape @ 148a92d50

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionStreamingSource::ForEachShape
          (FWorldPartitionStreamingSource *this,float param_1,FName param_2,bool param_3,
          TFunctionRef<void___cdecl(FSphericalSector_const_&)> *param_4)

{
  bool bVar1;
  TFunctionRef<void___cdecl(FSphericalSector_const_&)> local_28 [2];
  
  bVar1 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                    (&this->TargetGrids,this->TargetBehavior,param_2);
  if (bVar1) {
    local_28[0]._0_8_ = *(undefined8 *)param_4;
    local_28[0]._8_8_ = *(undefined8 *)&param_4->field_0x8;
    FStreamingSourceShapeHelper::ForEachShape
              (param_1,param_1,param_3,&this->Location,&this->Rotation,&this->Shapes,local_28,
               this->ExtraRadius,this->ExtraAngle);
  }
  return;
}

// FWorldPartitionStreamingSource @ 148ab4ab0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldPartitionStreamingSource * __thiscall
FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
          (FWorldPartitionStreamingSource *this,FWorldPartitionStreamingSource *param_1)

{
  int *piVar1;
  TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  this->Name = param_1->Name;
  dVar4 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar4;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar4 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar4;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->TargetState = param_1->TargetState;
  this->bBlockOnSlowLoading = param_1->bBlockOnSlowLoading;
  this->Priority = param_1->Priority;
  dVar4 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar4;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  this->bUseVelocityContributionToCellsSorting = param_1->bUseVelocityContributionToCellsSorting;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  this->TargetBehavior = param_1->TargetBehavior;
  *(undefined8 *)&(this->TargetGrids).Elements = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetGrids).Elements.field_0x34 = 0;
  (this->TargetGrids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetGrids).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&this->TargetGrids,&param_1->TargetGrids);
  *(undefined8 *)&(this->TargetHLODLayers).Elements = 0;
  *(undefined8 *)&(this->TargetHLODLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetHLODLayers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetHLODLayers).Elements.field_0x34 = 0;
  (this->TargetHLODLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetHLODLayers).HashSize = 0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::operator=
            (&this->TargetHLODLayers,&param_1->TargetHLODLayers);
  pTVar2 = &this->Shapes;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Shapes).ArrayMax;
  iVar3 = (param_1->Shapes).ArrayNum;
  _Src = (param_1->Shapes).AllocatorInstance.Data;
  (this->Shapes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x48);
  }
  this->bReplay = param_1->bReplay;
  this->bRemote = param_1->bRemote;
  this->bForce2D = param_1->bForce2D;
  this->Hash2D = param_1->Hash2D;
  this->Hash3D = param_1->Hash3D;
  dVar4 = (param_1->QuantizedLocation).field0_0x0._s_0.Y;
  (this->QuantizedLocation).field0_0x0._s_0.X = (param_1->QuantizedLocation).field0_0x0._s_0.X;
  (this->QuantizedLocation).field0_0x0._s_0.Y = dVar4;
  (this->QuantizedLocation).field0_0x0._s_0.Z = (param_1->QuantizedLocation).field0_0x0._s_0.Z;
  dVar4 = (param_1->QuantizedRotation).Yaw;
  (this->QuantizedRotation).Pitch = (param_1->QuantizedRotation).Pitch;
  (this->QuantizedRotation).Yaw = dVar4;
  (this->QuantizedRotation).Roll = (param_1->QuantizedRotation).Roll;
  this->ExtraRadius = param_1->ExtraRadius;
  this->ExtraAngle = param_1->ExtraAngle;
  return this;
}

// ~FWorldPartitionStreamingSource @ 148ab7100

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWorldPartitionStreamingSource::~FWorldPartitionStreamingSource
          (FWorldPartitionStreamingSource *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->Shapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TargetHLODLayers).HashSize = 0;
  FVar2 = (this->TargetHLODLayers).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TargetHLODLayers).Elements);
  (this->TargetGrids).HashSize = 0;
  FVar2 = (this->TargetGrids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TargetGrids).Elements);
  return;
}

// ToString @ 148adbb90

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FWorldPartitionStreamingSource::ToString
          (FWorldPartitionStreamingSource *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  EUnit EVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  bool bVar16;
  FString *pFVar17;
  void *pvVar18;
  longlong lVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 auVar27 [16];
  undefined1 local_res8 [8];
  FString *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  TStringBuilderBase<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_158;
  int local_138;
  wchar_t *local_130;
  FString local_128;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FString local_b8;
  FString local_a8 [2];
  undefined4 local_7c;
  
  dVar5 = (this->Velocity).field0_0x0._s_0.Y;
  dVar6 = (this->Velocity).field0_0x0._s_0.Z;
  local_178.Base = (wchar_t *)0x0;
  local_178.CurPos = (wchar_t *)0x0;
  dVar7 = (this->Velocity).field0_0x0._s_0.X;
  auVar27._0_8_ = dVar7 * dVar7;
  auVar27._8_8_ = 0;
  local_178.End = (wchar_t *)0x0;
  iVar24 = 3;
  if (DebugDisplaySpeedUnit < 3) {
    iVar24 = DebugDisplaySpeedUnit;
  }
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  EVar8 = SupportedUnits[iVar24];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar5 * dVar5 + auVar27._0_8_ + dVar6 * dVar6;
  auVar27 = sqrtpd(auVar27,auVar12);
  local_res10 = __return_storage_ptr__;
  FUnitConversion::Convert<double>(auVar27._0_8_,CentimetersPerSecond,EVar8);
  local_130 = FUnitConversion::GetUnitDisplayString(EVar8);
  UE::Math::TRotator<double>::ToCompactString(&this->Rotation,&local_b8);
  if (((this->TargetState != Loaded) && (this->TargetState != Activated)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                          ,0xe6,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    pFVar17 = (FString *)(*pcVar11)();
    return pFVar17;
  }
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_178,
             L"Priority: %d | %s | %s | %s | Pos: X=%lld,Y=%lld,Z=%lld | Rot: %s | Vel: %d %s");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (this->bForce2D != false) {
    if (local_178.End < local_178.CurPos + 10) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,10);
    }
    pvVar18 = FGenericPlatformString::Memcpy(local_178.CurPos,L" | Force2D",0x14);
    local_178.CurPos = (wchar_t *)((longlong)pvVar18 + 0x14);
  }
  if ((this->Shapes).ArrayNum != 0) {
    if (local_178.End < local_178.CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(&local_178,3);
    }
    pvVar18 = FGenericPlatformString::Memcpy(local_178.CurPos,L" | ",6);
    uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar14 = __real_3f800000;
    fVar13 = __real_322bcc77;
    iVar24 = (this->Shapes).ArrayNum;
    local_178.CurPos = (wchar_t *)((longlong)pvVar18 + 6);
    pFVar21 = (this->Shapes).AllocatorInstance.Data;
    pFVar3 = pFVar21 + (longlong)iVar24 * 0x48;
    while( true ) {
      if ((this->Shapes).ArrayNum != iVar24) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStreamingSourceShape_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar21 == pFVar3) break;
      local_158.End = (wchar_t *)0x0;
      local_158.bIsDynamic = false;
      local_158.bIsExternal = false;
      local_158.Base = (wchar_t *)0x0;
      local_158.CurPos = (wchar_t *)0x0;
      if (pFVar21[0xc] != (FScriptContainerElement)0x0) {
        TStringBuilderBase<wchar_t>::Extend(&local_158,9);
        pvVar18 = FGenericPlatformString::Memcpy(local_158.CurPos,L"IsSector ",0x12);
        local_158.CurPos = (wchar_t *)((longlong)pvVar18 + 0x12);
      }
      if (*pFVar21 == (FScriptContainerElement)0x0) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"Radius: %d");
      }
      else {
        if (local_158.End < local_158.CurPos + 0x15) {
          TStringBuilderBase<wchar_t>::Extend(&local_158,0x15);
        }
        pvVar18 = FGenericPlatformString::Memcpy(local_158.CurPos,L"UsesGridLoadingRange ",0x2a);
        local_158.CurPos = (wchar_t *)((longlong)pvVar18 + 0x2a);
        if (fVar13 < (float)((uint)(*(float *)(pFVar21 + 4) - fVar14) & uVar23)) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"Scale: %3.2f");
        }
      }
      if (local_158.End < local_158.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_158,1);
      }
      *local_158.CurPos = L'\0';
      ::FString::FString(&local_128,local_158.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"Shape[%d]: %s ");
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      pFVar21 = pFVar21 + 0x48;
    }
    if (((int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1) < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount <= Len()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                            ,0xe8,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar17 = (FString *)(*pcVar11)();
      return pFVar17;
    }
    local_178.CurPos = local_178.CurPos + -1;
  }
  iVar24 = 0;
  if (0.0 < this->ExtraRadius) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L" | Extra Radius: %d ");
  }
  if (0.0 < this->ExtraAngle) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L" | Extra Angle: %d ");
  }
  if (*(int *)&(this->TargetGrids).Elements.field_0x8 !=
      *(int *)&(this->TargetGrids).Elements.field_0x34) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L" | %s TargetGrids: ");
    puVar1 = &(this->TargetGrids).Elements.field_0x10;
    iVar9 = *(int *)&(this->TargetGrids).Elements.field_0x28;
    pTVar2 = &this->TargetGrids;
    uStack_10c = 1;
    iStack_fc = iVar24;
    local_f8 = iVar24;
    if (iVar9 != 0) {
      puVar26 = *(uint **)&(this->TargetGrids).Elements.field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uVar23 = *puVar26;
      while (uVar23 == 0) {
        lVar19 = (longlong)iVar24;
        local_f8 = local_f8 + 0x20;
        iVar24 = iVar24 + 1;
        iStack_fc = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_148adc0e0;
        uVar23 = puVar26[lVar19 + 1];
      }
      uStack_10c = -uVar23 & uVar23;
      uVar4 = (ulonglong)uStack_10c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_res20 = (int)lVar19;
      iStack_fc = local_f8 + -1 + local_res20;
      if (iVar9 < iStack_fc) {
        iStack_fc = iVar9;
      }
    }
LAB_148adc0e0:
    uVar23 = *(uint *)&(this->TargetGrids).Elements.field_0x28;
    uStack_f4 = local_7c;
    iStack_f0 = *(int *)&(this->TargetGrids).Elements.field_0x8 -
                *(int *)&(this->TargetGrids).Elements.field_0x34;
    uVar22 = uVar23 & 0xffffffe0;
    uStack_100 = 0xffffffff;
    TStack_e0._padding_ = CONCAT44(uStack_10c,iVar24);
    TStack_e0.CurrentBitIndex = iStack_fc;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar23 >> 5;
    TStack_e0._28_4_ = local_7c;
    TStack_e0.BaseBitIndex = local_f8;
    uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
    local_118 = pTVar2;
    iStack_110 = iVar24;
    local_108 = puVar1;
    local_e8 = pTVar2;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar23 < 0) || (iVar9 < (int)uVar23)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar17 = (FString *)(*pcVar11)();
      return pFVar17;
    }
    uVar10 = *(uint *)&(this->TargetGrids).Elements.field_0x28;
    if (uVar23 != uVar10) {
      puVar25 = *(undefined1 **)&(this->TargetGrids).Elements.field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar20 * 4);
      while (uVar23 == 0) {
        lVar19 = (longlong)iVar20;
        uVar22 = uVar22 + 0x20;
        iVar20 = iVar20 + 1;
        uVar23 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_148adc1e0;
        uVar23 = *(uint *)(puVar25 + lVar19 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_138 = (int)lVar19;
      uVar23 = local_138 + -1 + uVar22;
      if ((int)uVar10 < (int)uVar23) {
        uVar23 = uVar10;
      }
    }
LAB_148adc1e0:
    while( true ) {
      pTVar15 = local_e8;
      if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
          (int)uStack_c0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_e0.CurrentBitIndex == uVar23) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar15 == pTVar2)) break;
      ::FName::ToString((FName *)((longlong)TStack_e0.CurrentBitIndex * 0x10 +
                                 *(longlong *)&pTVar15->Elements),local_a8);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%s, ");
      if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    if (((int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1) < 2) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount <= Len()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                            ,0xe8,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      pFVar17 = (FString *)(*pcVar11)();
      return pFVar17;
    }
    local_178.CurPos = local_178.CurPos + -2;
  }
  if (local_178.End < local_178.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_178,1);
  }
  *local_178.CurPos = L'\0';
  ::FString::FString(local_res10,local_178.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  return local_res10;
}

// UpdateHash @ 148add590

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWorldPartitionStreamingSource::UpdateHash(FWorldPartitionStreamingSource *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  FHashBuilder *this_00;
  int iVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  FHashBuilder local_res8 [2];
  
  dVar16 = (this->QuantizedLocation).field0_0x0._s_0.Y - (this->Location).field0_0x0._s_0.Y;
  dVar14 = (this->QuantizedLocation).field0_0x0._s_0.X - (this->Location).field0_0x0._s_0.X;
  dVar13 = (this->QuantizedLocation).field0_0x0._s_0.Z - (this->Location).field0_0x0._s_0.Z;
  auVar15._0_8_ = dVar14 * dVar14;
  auVar15._8_8_ = 0;
  auVar17._0_8_ = dVar16 * dVar16 + auVar15._0_8_ + dVar13 * dVar13;
  auVar17._8_8_ = 0;
  auVar15 = sqrtpd(auVar15,auVar17);
  if ((double)LocationQuantization < auVar15._0_8_) {
    dVar14 = (this->Location).field0_0x0._s_0.Y;
    dVar13 = (this->Location).field0_0x0._s_0.Z;
    (this->QuantizedLocation).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X;
    (this->QuantizedLocation).field0_0x0._s_0.Y = dVar14;
    (this->QuantizedLocation).field0_0x0._s_0.Z = dVar13;
  }
  dVar16 = (this->Rotation).Yaw - (this->QuantizedRotation).Yaw;
  dVar13 = (this->Rotation).Pitch - (this->QuantizedRotation).Pitch;
  dVar14 = (this->Rotation).Roll - (this->QuantizedRotation).Roll;
  if ((double)RotationQuantization <
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar14 = (this->Rotation).Yaw;
    dVar13 = (this->Rotation).Roll;
    (this->QuantizedRotation).Pitch = (this->Rotation).Pitch;
    (this->QuantizedRotation).Yaw = dVar14;
    (this->QuantizedRotation).Roll = dVar13;
  }
  FVar6 = this->Name;
  bVar1 = this->bBlockOnSlowLoading;
  bVar2 = this->bUseVelocityContributionToCellsSorting;
  bVar3 = this->bReplay;
  bVar4 = this->bRemote;
  bVar5 = this->bForce2D;
  local_res8[0].Hash = 0xffffffff;
  uVar9 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar6.Number + local_res8[0].Hash * 0x40 + (local_res8[0].Hash >> 2) + 0x9e3779b9
          ^ local_res8[0].Hash;
  uVar9 = (uVar9 >> 2) + this->TargetState + 0x9e3779b9 + uVar9 * 0x40 ^ uVar9;
  uVar9 = (uVar9 >> 2) +
          (-(uint)(bVar5 != false) & 0x10 | -(uint)(bVar4 != false) & 8 |
           -(uint)(bVar3 != false) & 4 | -(uint)(bVar2 != false) & 2 | (uint)(bVar1 != false)) +
          uVar9 * 0x40 + -0x61c88647 ^ uVar9;
  uVar9 = (uVar9 >> 2) + this->Priority + 0x9e3779b9 + uVar9 * 0x40 ^ uVar9;
  local_res8[0].Hash = (uint)this->TargetBehavior + uVar9 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9
  ;
  this_00 = FHashBuilder::Append<FName>(local_res8,&this->TargetGrids);
  FHashBuilder::Append<FStreamingSourceShape>(this_00,&this->Shapes);
  dVar14 = __real_4000000000000000;
  dVar13 = __real_3fe0000000000000;
  if (0.0 < this->ExtraRadius) {
    local_res8[0].Hash =
         local_res8[0].Hash ^
         (int)this->ExtraRadius + local_res8[0].Hash * 0x40 + (local_res8[0].Hash >> 2) + 0x9e3779b9
    ;
  }
  if (0.0 < this->ExtraAngle) {
    local_res8[0].Hash =
         local_res8[0].Hash ^
         (int)this->ExtraAngle + -0x61c88647 + local_res8[0].Hash * 0x40 + (local_res8[0].Hash >> 2)
    ;
  }
  if (LocationQuantization < 1) {
    uVar8 = *(undefined8 *)&(this->Location).field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&(this->Location).field0_0x0 + 8);
    uVar9 = local_res8[0].Hash * 0x40 + (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20) * 0x17 +
            (local_res8[0].Hash >> 2) + 0x9e3779b9 ^ local_res8[0].Hash;
    uVar9 = uVar9 * 0x40 + (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20) * 0x17 + -0x61c88647 +
            (uVar9 >> 2) ^ uVar9;
  }
  else {
    lVar12 = (longlong)
             ROUND((__real_4000000000000000 / (double)LocationQuantization) *
                   (this->QuantizedLocation).field0_0x0._s_0.X - __real_3fe0000000000000);
    dVar16 = (this->QuantizedLocation).field0_0x0._s_0.Y;
    uVar9 = (int)(lVar12 >> 1) + -0x61c88647 + local_res8[0].Hash * 0x40 +
            (int)(lVar12 >> 0x21) * 0x17 + (local_res8[0].Hash >> 2) ^ local_res8[0].Hash;
    lVar12 = (longlong)
             ROUND((dVar16 + dVar16) / (double)LocationQuantization - __real_3fe0000000000000);
    uVar9 = uVar9 * 0x40 + (int)(lVar12 >> 1) + (int)(lVar12 >> 0x21) * 0x17 + -0x61c88647 +
            (uVar9 >> 2) ^ uVar9;
  }
  if (RotationQuantization < 1) {
    dVar16 = (this->Rotation).Yaw;
    iVar10 = (int)((ulonglong)dVar16 >> 0x20);
  }
  else {
    dVar16 = (this->Rotation).Yaw;
    lVar12 = (longlong)
             ROUND((dVar16 + dVar16) / (double)RotationQuantization - __real_3fe0000000000000);
    dVar16 = (double)(lVar12 >> 1);
    iVar10 = (int)(lVar12 >> 0x21);
  }
  uVar9 = SUB84(dVar16,0) + -0x61c88647 + iVar10 * 0x17 + uVar9 * 0x40 + (uVar9 >> 2) ^ uVar9;
  this->Hash2D = ~uVar9;
  if (LocationQuantization < 1) {
    uVar8 = *(undefined8 *)((longlong)&(this->Location).field0_0x0 + 0x10);
    iVar10 = (int)((ulonglong)uVar8 >> 0x20) * 0x17 + -0x61c88647 + (int)uVar8 + uVar9 * 0x40;
  }
  else {
    dVar16 = (this->QuantizedLocation).field0_0x0._s_0.Z;
    lVar12 = (longlong)ROUND((dVar16 + dVar16) / (double)LocationQuantization - dVar13);
    iVar10 = (int)(lVar12 >> 0x21) * 0x17 + -0x61c88647 + uVar9 * 0x40 + (int)(lVar12 >> 1);
  }
  uVar9 = (uVar9 >> 2) + iVar10 ^ uVar9;
  if (RotationQuantization < 1) {
    dVar13 = (this->QuantizedRotation).Pitch;
    dVar14 = (this->QuantizedRotation).Roll;
    uVar9 = (uVar9 >> 2) +
            (int)((ulonglong)dVar13 >> 0x20) * 0x17 + SUB84(dVar13,0) + -0x61c88647 + uVar9 * 0x40 ^
            uVar9;
    iVar10 = SUB84(dVar14,0) + uVar9 * 0x40;
    iVar11 = (int)((ulonglong)dVar14 >> 0x20) * 0x17 + -0x61c88647;
  }
  else {
    dVar16 = (this->QuantizedRotation).Roll;
    lVar12 = (longlong)
             ROUND((dVar14 / (double)RotationQuantization) * (this->QuantizedRotation).Pitch -
                   dVar13);
    uVar9 = (uVar9 >> 2) +
            (int)(lVar12 >> 0x21) * 0x17 + (int)(lVar12 >> 1) + -0x61c88647 + uVar9 * 0x40 ^ uVar9;
    lVar12 = (longlong)ROUND((dVar16 + dVar16) / (double)RotationQuantization - dVar13);
    iVar11 = uVar9 * 0x40 + (int)(lVar12 >> 1);
    iVar10 = (int)(lVar12 >> 0x21) * 0x17 + -0x61c88647;
  }
  this->Hash3D = ~(iVar10 + iVar11 + (uVar9 >> 2) ^ uVar9);
  return;
}

