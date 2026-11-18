// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148aa7be0

UScriptStruct * __cdecl FWorldPartitionStreamingQuerySource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource,
                         (UObject *)pUVar1,L"WorldPartitionStreamingQuerySource");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionStreamingQuerySource.OuterSingleton;
}

// FWorldPartitionStreamingQuerySource @ 148ab4830

FWorldPartitionStreamingQuerySource * __thiscall
FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
          (FWorldPartitionStreamingQuerySource *this,FWorldPartitionStreamingQuerySource *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  dVar6 = (param_1->Location).field0_0x0._s_0.Y;
  pTVar1 = &this->DataLayers;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar6;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  this->Radius = param_1->Radius;
  this->bUseGridLoadingRange = param_1->bUseGridLoadingRange;
  piVar2 = &(this->DataLayers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->DataLayers).ArrayNum;
  pFVar5 = (param_1->DataLayers).AllocatorInstance.Data;
  (this->DataLayers).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  this->bDataLayersOnly = param_1->bDataLayersOnly;
  this->bSpatialQuery = param_1->bSpatialQuery;
  dVar6 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar6;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
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
  pTVar3 = &this->Shapes;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Shapes).ArrayMax;
  iVar4 = (param_1->Shapes).ArrayNum;
  pFVar5 = (param_1->Shapes).AllocatorInstance.Data;
  (this->Shapes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x48);
  }
  return this;
}

// FWorldPartitionStreamingQuerySource @ 148ab49e0

FWorldPartitionStreamingQuerySource * __thiscall
FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
          (FWorldPartitionStreamingQuerySource *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DataLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayers).ArrayNum = 0;
  (this->DataLayers).ArrayMax = 0;
  *(undefined8 *)&(this->TargetGrids).Elements = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetGrids).Elements.field_0x20 = 0;
  this->Radius = 0.0;
  this->TargetBehavior = Include;
  this->bUseGridLoadingRange = true;
  this->bDataLayersOnly = false;
  this->bSpatialQuery = true;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
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
  return this;
}

