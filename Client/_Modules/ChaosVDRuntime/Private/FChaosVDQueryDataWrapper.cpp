// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 4

// StaticStruct @ 1436c9720

UScriptStruct * __cdecl FChaosVDQueryDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper,(UObject *)pUVar1,
                         L"ChaosVDQueryDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDQueryDataWrapper.OuterSingleton;
}

// FChaosVDQueryDataWrapper @ 1436d5120

FChaosVDQueryDataWrapper * __thiscall
FChaosVDQueryDataWrapper::FChaosVDQueryDataWrapper(FChaosVDQueryDataWrapper *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  this->ID = -1;
  this->ParentQueryID = -1;
  this->WorldSolverID = -1;
  this->InputGeometryKey = 0;
  this->bIsRetryQuery = false;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->GeometryOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->GeometryOrientation).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->GeometryOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->GeometryOrientation).W = dVar3;
  this->Type = Invalid;
  this->Mode = Invalid;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->EndLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CollisionQueryParams)._padding_ = (longlong)&___7FChaosVDCollisionQueryParams__6B_;
  (this->CollisionQueryParams).bTraceComplex = 0;
  (this->CollisionQueryParams).bReplaceHitWithSubComponents = 0;
  (this->CollisionQueryParams).bTraceIntoSubComponents = 0;
  (this->CollisionQueryParams).bSkipNarrowPhase = 0;
  (this->CollisionQueryParams).bIgnoreTouches = 0;
  (this->CollisionQueryParams).bIgnoreBlocks = 0;
  (this->CollisionQueryParams).bReturnPhysicalMaterial = 0;
  (this->CollisionQueryParams).bReturnFaceIndex = 0;
  (this->CollisionQueryParams).bFindInitialOverlaps = 0;
  (this->CollisionResponseParams)._padding_ = (longlong)&___7FChaosVDCollisionResponseParams__6B_;
  *(undefined1 *)&(this->CollisionQueryParams)._padding_ = 0;
  (this->CollisionQueryParams).TraceTag.ComparisonIndex = 0;
  (this->CollisionQueryParams).TraceTag.Number = 0;
  (this->CollisionQueryParams).OwnerTag.ComparisonIndex = 0;
  (this->CollisionQueryParams).OwnerTag.Number = 0;
  (this->CollisionQueryParams).IgnoreMask = '\0';
  (this->CollisionQueryParams).IgnoredComponentsIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionQueryParams).IgnoredComponentsIDs.ArrayNum = 0;
  (this->CollisionQueryParams).IgnoredComponentsIDs.ArrayMax = 0;
  (this->CollisionQueryParams).IgnoredActorsIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionQueryParams).IgnoredActorsIDs.ArrayNum = 0;
  (this->CollisionQueryParams).IgnoredActorsIDs.ArrayMax = 0;
  (this->CollisionQueryParams).IgnoredActorsNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionQueryParams).IgnoredActorsNames.ArrayNum = 0;
  (this->CollisionQueryParams).IgnoredActorsNames.ArrayMax = 0;
  (this->CollisionQueryParams).IgnoredComponentsNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionQueryParams).IgnoredComponentsNames.ArrayNum = 0;
  (this->CollisionQueryParams).IgnoredComponentsNames.ArrayMax = 0;
  *(undefined1 *)&(this->CollisionResponseParams)._padding_ = 0;
  (this->CollisionResponseParams).FlagsPerChannel.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_char>)0x0;
  this->CollisionChannel = -1;
  (this->CollisionResponseParams).FlagsPerChannel.ArrayNum = 0;
  (this->CollisionResponseParams).FlagsPerChannel.ArrayMax = 0x20;
  (this->CollisionObjectQueryParams)._padding_ =
       (longlong)&___7FChaosVDCollisionObjectQueryParams__6B_;
  *(undefined1 *)&(this->CollisionObjectQueryParams)._padding_ = 0;
  (this->CollisionObjectQueryParams).ObjectTypesToQuery = '\0';
  (this->CollisionObjectQueryParams).IgnoreMask = '\0';
  (this->SQVisitData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SQVisitData).ArrayNum = 0;
  (this->SQVisitData).ArrayMax = 0;
  (this->Hits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hits).ArrayNum = 0;
  (this->Hits).ArrayMax = 0;
  (this->SubQueriesIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubQueriesIDs).ArrayNum = 0;
  (this->SubQueriesIDs).ArrayMax = 0;
  this->CurrentVisitIndex = 0;
  return this;
}

// ~FChaosVDQueryDataWrapper @ 1436d5880

void __thiscall FChaosVDQueryDataWrapper::~FChaosVDQueryDataWrapper(FChaosVDQueryDataWrapper *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_char> FVar2;
  
  pFVar1 = (this->SubQueriesIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SQVisitData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->CollisionResponseParams).FlagsPerChannel.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->CollisionQueryParams).IgnoredComponentsNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionQueryParams).IgnoredActorsNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionQueryParams).IgnoredActorsIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionQueryParams).IgnoredComponentsIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Serialize @ 1436dff30

bool __thiscall
FChaosVDQueryDataWrapper::Serialize(FChaosVDQueryDataWrapper *this,FArchive *param_1)

{
  uint *puVar1;
  EChaosVDSceneQueryType *pEVar2;
  EChaosVDSceneQueryMode *pEVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  EChaosVDSceneQueryType *pEVar8;
  EChaosVDSceneQueryMode *pEVar9;
  
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->ID = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &this->ParentQueryID;
  puVar4 = &param_1->field_0x2a;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar5 = &this->WorldSolverID;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bIsRetryQuery);
  puVar1 = &this->InputGeometryKey;
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->GeometryOrientation);
  pEVar2 = &this->Type;
  pEVar8 = (EChaosVDSceneQueryType *)**(undefined8 **)&param_1->field_0x8;
  if ((EChaosVDSceneQueryType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
    }
  }
  else {
    *pEVar2 = *pEVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar3 = &this->Mode;
  pEVar9 = (EChaosVDSceneQueryMode *)**(undefined8 **)&param_1->field_0x8;
  if ((EChaosVDSceneQueryMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
    }
  }
  else {
    *pEVar3 = *pEVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->StartLocation);
  UE::Math::operator<<(param_1,&this->EndLocation);
  piVar5 = &this->CollisionChannel;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FChaosVDCollisionQueryParams::Serialize(&this->CollisionQueryParams,param_1);
  ::operator<<(param_1,(bool *)&(this->CollisionResponseParams)._padding_);
  if ((char)(this->CollisionResponseParams)._padding_ != '\0') {
    TArrayPrivateFriend::
    Serialize<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&(this->CollisionResponseParams).FlagsPerChannel);
  }
  FChaosVDCollisionObjectQueryParams::Serialize(&this->CollisionObjectQueryParams,param_1);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

