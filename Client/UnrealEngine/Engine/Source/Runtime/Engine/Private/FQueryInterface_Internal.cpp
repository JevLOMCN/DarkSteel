// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Overlap @ 1478486c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::Overlap
          (EQueryInfo param_1,EThreadQueryContext param_2,UWorld *param_3,FOverlapQueryData *param_4
          ,FCommonQueryData *param_5,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  UWorld *local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_1 == GatherAll) {
    bVar1 = ForwardThreadContextType_Overlap<0,UWorld_const_*_&,Chaos::FOverlapQueryData_const_&,Chaos::FCommonQueryData_const_&,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>_&>
                      (param_2,local_res18,param_4,param_5,param_6);
    return bVar1;
  }
  if (param_1 == IsBlocking) {
    bVar1 = ForwardThreadContextType_Overlap<1,UWorld_const_*_&,Chaos::FOverlapQueryData_const_&,Chaos::FCommonQueryData_const_&,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>_&>
                      (param_2,local_res18,param_4,param_5,param_6);
    return bVar1;
  }
  if (param_1 == IsAnything) {
    bVar1 = ForwardThreadContextType_Overlap<2,UWorld_const_*_&,Chaos::FOverlapQueryData_const_&,Chaos::FCommonQueryData_const_&,TArray<FOverlapResult,TSizedDefaultAllocator<32>_>_&>
                      (param_2,local_res18,param_4,param_5,param_6);
    return bVar1;
  }
  return false;
}

// RaycastMulti @ 147859990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::RaycastMulti
          (EThreadQueryContext param_1,UWorld *param_2,FRayQueryData *param_3,
          FCommonQueryData *param_4,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  FDefaultAccelContainer local_res8 [32];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->End).field0_0x0._s_0.X;
  local_28._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
  if (param_1 == GTData) {
    local_48._s_0.X = local_28._s_0.X;
    local_48._s_0.Y = local_28._s_0.Y;
    local_48._s_0.Z = local_28._s_0.Z;
    local_28._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                      (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                       (TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,
                       param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                       &param_4->ObjectParams,local_res8);
    return bVar1;
  }
  local_48._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,1>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                    (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                     (TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0,
                     param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                     &param_4->ObjectParams,local_res8);
  return bVar1;
}

// RaycastSingle @ 14785acb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::RaycastSingle
          (EThreadQueryContext param_1,UWorld *param_2,FRayQueryData *param_3,
          FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  FDefaultAccelContainer local_res8 [32];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->End).field0_0x0._s_0.X;
  local_28._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
  if (param_1 == GTData) {
    local_48._s_0.X = local_28._s_0.X;
    local_48._s_0.Y = local_28._s_0.Y;
    local_48._s_0.Z = local_28._s_0.Z;
    local_28._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,0>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                      (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                       (TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,
                       param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                       &param_4->ObjectParams,local_res8);
    return bVar1;
  }
  local_48._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,0>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                    (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                     (TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0,
                     param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                     &param_4->ObjectParams,local_res8);
  return bVar1;
}

// RaycastTest @ 14785c150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::RaycastTest
          (EThreadQueryContext param_1,UWorld *param_2,FRayQueryData *param_3,
          FCommonQueryData *param_4,FHitResult *param_5)

{
  bool bVar1;
  FDefaultAccelContainer local_res8 [32];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->End).field0_0x0._s_0.X;
  local_28._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
  if (param_1 == GTData) {
    local_48._s_0.X = local_28._s_0.X;
    local_48._s_0.Y = local_28._s_0.Y;
    local_48._s_0.Z = local_28._s_0.Z;
    local_28._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    local_28._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FRaycastHit,0,2>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                      (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                       (TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,
                       param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                       &param_4->ObjectParams,local_res8);
    return bVar1;
  }
  local_48._s_0.X = (param_3->Start).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
  bVar1 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTRaycastHit,0,2>,FRaycastSQAdditionalInputs,FDefaultAccelContainer>
                    (param_2,param_5,(FRaycastSQAdditionalInputs *)local_res8,
                     (TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0,
                     param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,
                     &param_4->ObjectParams,local_res8);
  return bVar1;
}

// SweepMulti @ 1478775d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::SweepMulti
          (EThreadQueryContext param_1,UWorld *param_2,FSweepQueryData *param_3,
          FCommonQueryData *param_4,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_5)

{
  FQueryShape *pFVar1;
  longlong *plVar2;
  TQuat<double> *pTVar3;
  FCollisionObjectQueryParams *pFVar4;
  longlong lVar5;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  bool bVar7;
  TRefCountPtr<Chaos::FImplicitObject> TStackX_18;
  TVector<double>_u_0 TStack_c8;
  TVector<double>_u_0 TStack_a8;
  undefined1 auStack_88 [16];
  TQuat<double> *pTStack_78;
  FGeomSQAdditionalInputs FStack_68;
  
  pFVar1 = &param_3->QueryShape;
  pTVar3 = &param_3->GeomRot;
  pFVar4 = &param_4->ObjectParams;
  if ((param_3->QueryShape).ConvexData.ArrayNum == 0) {
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&FStack_68.ShapeAdapter,pTVar3,&pFVar1->CollisionShape);
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    FStack_68.CollisionShape = &pFVar1->CollisionShape;
    if (param_1 == GTData) {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&FStack_68.ShapeAdapter);
  }
  else {
    TStackX_18.Reference = (FImplicitObject *)0x0;
    ConvertToConvex(pFVar1,&TStackX_18);
    TVar6.Reference = TStackX_18.Reference;
    FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)auStack_88);
    auStack_88._8_8_ = auStack_88;
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    pTStack_78 = pTVar3;
    if (param_1 == GTData) {
      TStack_c8._s_0.X = TStack_a8._s_0.X;
      TStack_c8._s_0.Y = TStack_a8._s_0.Y;
      TStack_c8._s_0.Z = TStack_a8._s_0.Z;
      TStack_a8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_a8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_a8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_a8._s_0,(TVector<double> *)&TStack_c8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,1>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_c8._s_0,(TVector<double> *)&TStack_a8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)auStack_88);
    if (TVar6.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &(TVar6.Reference)->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&(TVar6.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar6.Reference)->_padding_)(TVar6.Reference,1);
      }
    }
  }
  return bVar7;
}

// SweepSingle @ 147877a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::SweepSingle
          (EThreadQueryContext param_1,UWorld *param_2,FSweepQueryData *param_3,
          FCommonQueryData *param_4,FHitResult *param_5)

{
  FQueryShape *pFVar1;
  longlong *plVar2;
  TQuat<double> *pTVar3;
  FCollisionObjectQueryParams *pFVar4;
  longlong lVar5;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  bool bVar7;
  TRefCountPtr<Chaos::FImplicitObject> TStackX_18;
  TVector<double>_u_0 TStack_c8;
  TVector<double>_u_0 TStack_a8;
  undefined1 auStack_88 [16];
  TQuat<double> *pTStack_78;
  FGeomSQAdditionalInputs FStack_68;
  
  pFVar1 = &param_3->QueryShape;
  pTVar3 = &param_3->GeomRot;
  pFVar4 = &param_4->ObjectParams;
  if ((param_3->QueryShape).ConvexData.ArrayNum == 0) {
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&FStack_68.ShapeAdapter,pTVar3,&pFVar1->CollisionShape);
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    FStack_68.CollisionShape = &pFVar1->CollisionShape;
    if (param_1 == GTData) {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&FStack_68.ShapeAdapter);
  }
  else {
    TStackX_18.Reference = (FImplicitObject *)0x0;
    ConvertToConvex(pFVar1,&TStackX_18);
    TVar6.Reference = TStackX_18.Reference;
    FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)auStack_88);
    auStack_88._8_8_ = auStack_88;
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    pTStack_78 = pTVar3;
    if (param_1 == GTData) {
      TStack_c8._s_0.X = TStack_a8._s_0.X;
      TStack_c8._s_0.Y = TStack_a8._s_0.Y;
      TStack_c8._s_0.Z = TStack_a8._s_0.Z;
      TStack_a8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_a8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_a8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_a8._s_0,(TVector<double> *)&TStack_c8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,0>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_c8._s_0,(TVector<double> *)&TStack_a8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)auStack_88);
    if (TVar6.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &(TVar6.Reference)->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&(TVar6.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar6.Reference)->_padding_)(TVar6.Reference,1);
      }
    }
  }
  return bVar7;
}

// SweepTest @ 147877da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Chaos::Private::FQueryInterface_Internal::SweepTest
          (EThreadQueryContext param_1,UWorld *param_2,FSweepQueryData *param_3,
          FCommonQueryData *param_4,FHitResult *param_5)

{
  FQueryShape *pFVar1;
  longlong *plVar2;
  TQuat<double> *pTVar3;
  FCollisionObjectQueryParams *pFVar4;
  longlong lVar5;
  TRefCountPtr<Chaos::FImplicitObject> TVar6;
  bool bVar7;
  TRefCountPtr<Chaos::FImplicitObject> TStackX_18;
  TVector<double>_u_0 TStack_c8;
  TVector<double>_u_0 TStack_a8;
  undefined1 auStack_88 [16];
  TQuat<double> *pTStack_78;
  FGeomSQAdditionalInputs FStack_68;
  
  pFVar1 = &param_3->QueryShape;
  pTVar3 = &param_3->GeomRot;
  pFVar4 = &param_4->ObjectParams;
  if ((param_3->QueryShape).ConvexData.ArrayNum == 0) {
    FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
              (&FStack_68.ShapeAdapter,pTVar3,&pFVar1->CollisionShape);
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
    TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
    FStack_68.CollisionShape = &pFVar1->CollisionShape;
    if (param_1 == GTData) {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,&FStack_68,(TVector<double> *)&TStack_c8._s_0,
                         (TVector<double> *)&TStack_a8._s_0,param_4->TraceChannel,&param_4->Params,
                         &param_4->ResponseParams,pFVar4,(FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&FStack_68.ShapeAdapter);
  }
  else {
    TStackX_18.Reference = (FImplicitObject *)0x0;
    ConvertToConvex(pFVar1,&TStackX_18);
    TVar6.Reference = TStackX_18.Reference;
    FChaosEngineInterface::GetGeometryCollection((FImplicitObject *)auStack_88);
    auStack_88._8_8_ = auStack_88;
    TStack_a8._s_0.Z = (param_3->End).field0_0x0._s_0.Z;
    TStack_a8._s_0.X = (param_3->End).field0_0x0._s_0.X;
    TStack_a8._s_0.Y = (param_3->End).field0_0x0._s_0.Y;
    pTStack_78 = pTVar3;
    if (param_1 == GTData) {
      TStack_c8._s_0.X = TStack_a8._s_0.X;
      TStack_c8._s_0.Y = TStack_a8._s_0.Y;
      TStack_c8._s_0.Z = TStack_a8._s_0.Z;
      TStack_a8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_a8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_a8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_a8._s_0,(TVector<double> *)&TStack_c8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    else {
      TStack_c8._s_0.X = (param_3->Start).field0_0x0._s_0.X;
      TStack_c8._s_0.Y = (param_3->Start).field0_0x0._s_0.Y;
      TStack_c8._s_0.Z = (param_3->Start).field0_0x0._s_0.Z;
      bVar7 = TSceneCastCommonImp<TSQTraits<ChaosInterface::FPTSweepHit,1,2>,FGeomCollectionSQAdditionalInputs,FDefaultAccelContainer>
                        (param_2,param_5,(FGeomCollectionSQAdditionalInputs *)(auStack_88 + 8),
                         (TVector<double> *)&TStack_c8._s_0,(TVector<double> *)&TStack_a8._s_0,
                         param_4->TraceChannel,&param_4->Params,&param_4->ResponseParams,pFVar4,
                         (FDefaultAccelContainer *)&TStackX_18);
    }
    FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
              ((FPhysicsGeometryCollection_Chaos *)auStack_88);
    if (TVar6.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar2 = &(TVar6.Reference)->_padding_;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (*(int *)((longlong)&(TVar6.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar6.Reference)->_padding_)(TVar6.Reference,1);
      }
    }
  }
  return bVar7;
}

