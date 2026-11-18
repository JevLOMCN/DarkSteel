// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 27

// Call @ 14636abf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FChaosBreakEvent_const_&),void,FChaosBreakEvent_const_&>::Call
          (void *param_1,FChaosBreakEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014636abf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14636ac00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FChaosCrumblingEvent_const_&),void,FChaosCrumblingEvent_const_&>
::Call(void *param_1,FChaosCrumblingEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014636ac06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14636ac10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FChaosRemovalEvent_const_&),void,FChaosRemovalEvent_const_&>::
Call(void *param_1,FChaosRemovalEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014636ac16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14636ac20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterAndInitializePhysicsProxy'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  UGeometryCollectionComponent *this;
  
  this = (UGeometryCollectionComponent *)FWeakObjectPtr::Get(param_1);
  if (this != (UGeometryCollectionComponent *)0x0) {
    UGeometryCollectionComponent::OnPostPhysicsSync(this);
    return;
  }
  return;
}

// Call @ 14636ac50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::ProcessRepDataOnPT'::__l5::<lambda_1>,void,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  ::`anonymous_namespace'::ProcessRepDataCommon
            ((float)*param_2,(float)*param_3,(FGeometryCollectionRepData *)((longlong)param_1 + 8),
             *(FGeometryCollectionPhysicsProxy **)param_1,*(int **)((longlong)param_1 + 0x40),
             *(int **)((longlong)param_1 + 0x50),*(double **)((longlong)param_1 + 0x48),
             *(bool *)((longlong)param_1 + 0x58));
  return;
}

// Call @ 14636aca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::ProcessRepDynamicDataOnPT'::__l5::<lambda_1>,void,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  ::`anonymous_namespace'::ProcessRepDynamicDataCommon
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             (FGeometryCollectionRepDynamicData *)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x20),*(bool *)((longlong)param_1 + 0x28),*param_3,
             *param_2,*(double **)((longlong)param_1 + 0x30));
  return;
}

// Call @ 14636acf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::ProcessRepStateDataOnPT'::__l5::<lambda_1>,void,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  ::`anonymous_namespace'::ProcessRepStateDataCommon
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             (FGeometryCollectionRepStateData *)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x48));
  return;
}

// Call @ 14636ad10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RequestUpdateRepData'::__l8::<lambda_1>,void>::
Call(void *param_1)

{
  ENetMode EVar1;
  
  if ((bool)(*(UActorComponent **)param_1)->bReplicates) {
    EVar1 = UActorComponent::InternalGetNetMode(*(UActorComponent **)param_1);
    if (EVar1 != NM_Client) {
                    /* WARNING: Could not recover jumptable at 0x00014636ad3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)param_1 + 0xb38))();
      return;
    }
  }
  return;
}

// Call @ 14636ad50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::SendDynamicDataToSceneProxy'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNaniteGeometryCollectionSceneProxy::SetDynamicData_RenderThread
            (*(FNaniteGeometryCollectionSceneProxy **)param_1,(FRHICommandListBase *)param_2,
             *(FGeometryCollectionDynamicData **)((longlong)param_1 + 8),
             (TMatrix<double> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14636ad70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::LineTrace<ChaosInterface::FRaycastHit>'::__l9::<lambda_1>,bool,Chaos::FPhysicsObject_const_*,Chaos::FShapeInstanceProxy_*>
::Call(void *param_1,FPhysicsObject **param_2,FShapeInstanceProxy **param_3)

{
  bool bVar1;
  
  bVar1 = `Chaos::FPhysicsObjectCollisionInterface<0>::LineTrace<ChaosInterface::FRaycastHit>'::__l9
          ::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14636ad90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GeometryCollectionDebugDraw::Draw'::__l10::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `GeometryCollectionDebugDraw::Draw'::__l10::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 14636adc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l20::<lambda_1>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x20) = 1;
  return;
}

// Call @ 14636ade0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::DoCustomNavigableGeometryExport'::__l60::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UGeometryCollectionComponent::DoCustomNavigableGeometryExport'::__l60::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14636adf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterAndInitializePhysicsProxy'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  UGeometryCollectionComponent *this;
  
  this = (UGeometryCollectionComponent *)FWeakObjectPtr::Get(param_1);
  if (this != (UGeometryCollectionComponent *)0x0) {
    UGeometryCollectionComponent::LoadCollisionProfiles(this);
    return;
  }
  return;
}

// Call @ 14636ae20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::SendDynamicDataToSceneProxy'::__l17::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGeometryCollectionSceneProxy::SetDynamicData_RenderThread
            (*(FGeometryCollectionSceneProxy **)param_1,(FRHICommandListBase *)param_2,
             *(FGeometryCollectionDynamicData **)((longlong)param_1 + 8));
  return;
}

// Call @ 14636ae40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l23::<lambda_2>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbe0) + 0x21) = 1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbd0) + 0x8b9) = 1;
  return;
}

// Call @ 14636ae70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterAndInitializePhysicsProxy'::__l2::<lambda_3>,void,UE::Math::TTransform<double>_const_&,TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>_&,TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&>
::Call(void *param_1,TTransform<double> *param_2,
      TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_3,
      TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *param_4)

{
  VectorRegister4Double *pVVar1;
  __m128d *p_Var2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  UBodySetupCore *this;
  FGeometryCollectionPhysicsProxy *pFVar7;
  code *pcVar8;
  bool bVar9;
  TEnumAsByte<ECollisionTraceFlag> TVar10;
  uint uVar11;
  Type TVar12;
  undefined7 extraout_var;
  TTransform<float> *pTVar13;
  undefined7 extraout_var_00;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_328 [32];
  longlong lStack_308;
  longlong lStack_300;
  FBodyCollisionFilterData FStack_2f0;
  FBodyCollisionFlags aFStack_2c0 [2];
  TArray<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTStack_2b8;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *pTStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  FGeometryAddParams FStack_288;
  TTransform<double> TStack_118;
  TTransform<double> TStack_b8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_328;
  uVar14 = 0;
  lVar5 = *(longlong *)(*(longlong *)param_1 + 0x5a0);
  if (0 < *(int *)(lVar5 + 0xd8)) {
    lVar15 = 0;
    pTStack_2b8 = param_4;
    pTStack_2b0 = param_3;
    do {
      lVar6 = *(longlong *)(*(longlong *)param_1 + 0x5a0);
      iVar4 = *(int *)(lVar6 + 0xd8);
      uVar11 = 0;
      if ((int)uVar14 < iVar4) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if (uVar11 == 0) {
        lStack_308 = (longlong)(int)uVar14;
        lStack_300 = (longlong)iVar4;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar6 = *(longlong *)(lVar15 + *(longlong *)(lVar6 + 0xd0));
      if ((lVar6 != 0) &&
         (this = *(UBodySetupCore **)(lVar6 + 0x1d8), this != (UBodySetupCore *)0x0)) {
        FStack_2f0.SimFilter.Word2 = 0;
        FStack_2f0.SimFilter.Word3 = 0;
        FStack_2f0.SimFilter.Word0 = 0;
        FStack_2f0.SimFilter.Word1 = 0;
        FStack_2f0.QuerySimpleFilter.Word2 = 0;
        FStack_2f0.QuerySimpleFilter.Word3 = 0;
        FStack_2f0.QuerySimpleFilter.Word0 = 0;
        FStack_2f0.QuerySimpleFilter.Word1 = 0;
        FStack_2f0.QueryComplexFilter.Word2 = 0;
        FStack_2f0.QueryComplexFilter.Word3 = 0;
        FStack_2f0.QueryComplexFilter.Word0 = 0;
        FStack_2f0.QueryComplexFilter.Word1 = 0;
        aFStack_2c0[0].bEnableSimCollisionSimple = false;
        aFStack_2c0[0].bEnableSimCollisionComplex = false;
        aFStack_2c0[0].bEnableQueryCollision = false;
        aFStack_2c0[0].bEnableProbeCollision = false;
        FBodyInstance::BuildBodyFilterData
                  ((FBodyInstance *)(*(longlong *)param_1 + 0x390),&FStack_2f0,-1);
        TVar10 = UBodySetupCore::GetCollisionTraceFlag(this);
        cVar3 = *(char *)CONCAT71(extraout_var,TVar10.Value);
        TVar12 = FBodyInstance::GetCollisionEnabled_CheckOwner
                           ((FBodyInstance *)(*(longlong *)param_1 + 0x390));
        FBodyInstance::BuildBodyCollisionFlags(aFStack_2c0,TVar12,cVar3 == '\x03');
        pTVar13 = FGeometryCollectionProxyMeshData::GetMeshTransform
                            ((FGeometryCollectionProxyMeshData *)(lVar5 + 0xd0),uVar14);
        FStack_288.ComplexMaterials.DataPtr = (UPhysicalMaterial **)0x0;
        FStack_288.ComplexMaterials.ArrayNum = 0;
        FStack_288.ComplexMaterialMasks.DataPtr = (FPhysicalMaterialMaskParams *)0x0;
        FStack_288.ComplexMaterialMasks.ArrayNum = 0;
        FStack_288.ChaosTriMeshes.DataPtr = (TSharedPtr<Chaos::FTriangleMeshImplicitObject,1> *)0x0;
        TStack_b8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar13->Rotation).m128_f32[1],0);
        TStack_b8.Rotation.XY.m128d_f64[0] = (double)(pTVar13->Rotation).m128_f32[0];
        TStack_b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Rotation).m128_f32[1] >> 0x20);
        FStack_288.ChaosTriMeshes.ArrayNum = 0;
        FStack_288.TriMeshGeometries.DataPtr =
             (TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)0x0;
        FStack_288.TriMeshGeometries.ArrayNum = 0;
        FStack_288.bDoubleSided = (bool)(this[3].PhysicsType.Value >> 3 & 1);
        TStack_b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar13->Rotation).m128_f32[3],0);
        TStack_b8.Rotation.ZW.m128d_f64[0] = (double)(pTVar13->Rotation).m128_f32[2];
        TStack_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Rotation).m128_f32[3] >> 0x20);
        TStack_b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)(pTVar13->Translation).m128_f32[1],0);
        TStack_b8.Translation.XY.m128d_f64[0] = (double)(pTVar13->Translation).m128_f32[0];
        TStack_b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Translation).m128_f32[1] >> 0x20);
        TStack_b8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)(pTVar13->Scale3D).m128_f32[1],0);
        TStack_b8.Scale3D.XY.m128d_f64[0] = (double)(pTVar13->Scale3D).m128_f32[0];
        TStack_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Scale3D).m128_f32[1] >> 0x20);
        TStack_b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)(pTVar13->Translation).m128_f32[3],0);
        TStack_b8.Translation.ZW.m128d_f64[0] = (double)(pTVar13->Translation).m128_f32[2];
        TStack_b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Translation).m128_f32[3] >> 0x20);
        TStack_b8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)(pTVar13->Scale3D).m128_f32[3],0);
        TStack_b8.Scale3D.ZW.m128d_f64[0] = (double)(pTVar13->Scale3D).m128_f32[2];
        TStack_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)(pTVar13->Scale3D).m128_f32[3] >> 0x20);
        FStack_288.WorldTransform.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        FStack_288.WorldTransform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        FStack_288.WorldTransform.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        FStack_288.WorldTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        FStack_288.WorldTransform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        FStack_288.WorldTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        FStack_288.WorldTransform.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        FStack_288.WorldTransform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        FStack_288.WorldTransform.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        FStack_288.WorldTransform.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        FStack_288.WorldTransform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        FStack_288.WorldTransform.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        FStack_288.WorldTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        FStack_288.WorldTransform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        FStack_288.WorldTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        FStack_288.WorldTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        FStack_288.WorldTransform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        FStack_288.WorldTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        FStack_288.CollisionData.CollisionFilterData.QuerySimpleFilter.Word0 =
             FStack_2f0.QuerySimpleFilter.Word0;
        FStack_288.CollisionData.CollisionFilterData.QuerySimpleFilter.Word1 =
             FStack_2f0.QuerySimpleFilter.Word1;
        FStack_288.CollisionData.CollisionFilterData.QuerySimpleFilter.Word2 =
             FStack_2f0.QuerySimpleFilter.Word2;
        FStack_288.CollisionData.CollisionFilterData.QuerySimpleFilter.Word3 =
             FStack_2f0.QuerySimpleFilter.Word3;
        FStack_288.CollisionData.CollisionFilterData.SimFilter.Word0 = FStack_2f0.SimFilter.Word0;
        FStack_288.CollisionData.CollisionFilterData.SimFilter.Word1 = FStack_2f0.SimFilter.Word1;
        FStack_288.CollisionData.CollisionFilterData.SimFilter.Word2 = FStack_2f0.SimFilter.Word2;
        FStack_288.CollisionData.CollisionFilterData.SimFilter.Word3 = FStack_2f0.SimFilter.Word3;
        FStack_288.CollisionData.CollisionFlags = aFStack_2c0[0];
        FStack_288.CollisionData.CollisionFilterData.QueryComplexFilter.Word0 =
             FStack_2f0.QueryComplexFilter.Word0;
        FStack_288.CollisionData.CollisionFilterData.QueryComplexFilter.Word1 =
             FStack_2f0.QueryComplexFilter.Word1;
        FStack_288.CollisionData.CollisionFilterData.QueryComplexFilter.Word2 =
             FStack_2f0.QueryComplexFilter.Word2;
        FStack_288.CollisionData.CollisionFilterData.QueryComplexFilter.Word3 =
             FStack_2f0.QueryComplexFilter.Word3;
        TVar10 = UBodySetupCore::GetCollisionTraceFlag(this);
        FStack_288.CollisionTraceType =
             (ECollisionTraceFlag)*(byte *)CONCAT71(extraout_var_00,TVar10.Value);
        pFVar7 = (*(UGeometryCollectionComponent **)param_1)->PhysicsProxy;
        FStack_288.WorldTransform.Rotation.XY.m128d_f64 =
             *&(pFVar7->WorldTransform_External).Rotation.XY.m128d_f64;
        FStack_288.WorldTransform.Rotation.ZW.m128d_f64 =
             *&(pFVar7->WorldTransform_External).Rotation.ZW.m128d_f64;
        FStack_288.WorldTransform.Translation.XY.m128d_f64 =
             *&(pFVar7->WorldTransform_External).Translation.XY.m128d_f64;
        FStack_288.WorldTransform.Translation.ZW.m128d_f64 =
             *&(pFVar7->WorldTransform_External).Translation.ZW.m128d_f64;
        pVVar1 = &(pFVar7->WorldTransform_External).Scale3D;
        dStack_2a8 = (pVVar1->XY).m128d_f64[0];
        dStack_2a0 = (pFVar7->WorldTransform_External).Scale3D.XY.m128d_f64[1];
        FStack_288.WorldTransform.Scale3D.XY.m128d_f64 = *&(pVVar1->XY).m128d_f64;
        p_Var2 = &(pFVar7->WorldTransform_External).Scale3D.ZW;
        dStack_298 = p_Var2->m128d_f64[0];
        FStack_288.WorldTransform.Scale3D.ZW.m128d_f64 = *&p_Var2->m128d_f64;
        FStack_288.Scale.field0_0x0._s_0.X = dStack_2a8;
        FStack_288.Scale.field0_0x0._s_0.Y = dStack_2a0;
        FStack_288.Scale.field0_0x0._s_0.Z = dStack_298;
        FStack_288.SimpleMaterial =
             UGeometryCollectionComponent::GetPhysicalMaterial
                       (*(UGeometryCollectionComponent **)param_1);
        TStack_118.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        TStack_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        TStack_118.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        TStack_118.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        TStack_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        TStack_118.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        TStack_118.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        TStack_118.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        TStack_118.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        TStack_118.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        TStack_118.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        TStack_118.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        TStack_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        TStack_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        TStack_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        TStack_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        TStack_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        TStack_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&TStack_118,param_2,&TStack_b8);
        FStack_288.Geometry = (FKAggregateGeom *)(this + 1);
        FStack_288.LocalTransform.Rotation.XY.m128d_f64[0] = TStack_118.Rotation.XY.m128d_f64[0];
        FStack_288.LocalTransform.Rotation.XY.m128d_f64[1] = TStack_118.Rotation.XY.m128d_f64[1];
        FStack_288.LocalTransform.Rotation.ZW.m128d_f64[0] = TStack_118.Rotation.ZW.m128d_f64[0];
        FStack_288.LocalTransform.Rotation.ZW.m128d_f64[1] = TStack_118.Rotation.ZW.m128d_f64[1];
        FStack_288.LocalTransform.Translation.XY.m128d_f64[0] =
             TStack_118.Translation.XY.m128d_f64[0];
        FStack_288.LocalTransform.Translation.XY.m128d_f64[1] =
             TStack_118.Translation.XY.m128d_f64[1];
        FStack_288.LocalTransform.Translation.ZW.m128d_f64[0] =
             TStack_118.Translation.ZW.m128d_f64[0];
        FStack_288.LocalTransform.Translation.ZW.m128d_f64[1] =
             TStack_118.Translation.ZW.m128d_f64[1];
        FStack_288.LocalTransform.Scale3D.XY.m128d_f64[0] = TStack_118.Scale3D.XY.m128d_f64[0];
        FStack_288.LocalTransform.Scale3D.XY.m128d_f64[1] = TStack_118.Scale3D.XY.m128d_f64[1];
        FStack_288.LocalTransform.Scale3D.ZW.m128d_f64[0] = TStack_118.Scale3D.ZW.m128d_f64[0];
        FStack_288.LocalTransform.Scale3D.ZW.m128d_f64[1] = TStack_118.Scale3D.ZW.m128d_f64[1];
        ChaosInterface::CreateGeometry(&FStack_288,pTStack_2b0,pTStack_2b8);
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < *(int *)(lVar5 + 0xd8));
  }
  return;
}

// Call @ 14636ae80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l26::<lambda_3>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x23) = 1;
  return;
}

// Call @ 14636aea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l29::<lambda_4>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbe0) + 0x21) = 1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbd0) + 0x8b9) = 1;
  return;
}

// Call @ 14636aed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterAndInitializePhysicsProxy'::__l44::<lambda_4>,void>
::Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  int iVar3;
  ClusterId *pCVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  FRigidClusteredFlags_u_0 *pFVar6;
  longlong lVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined1 auStackX_8 [8];
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  
  FStack_38.Data = (FScriptContainerElement *)0x0;
  iStack_30 = *(int *)(*(longlong *)param_1 + 0x348);
  lVar7 = (longlong)iStack_30;
  _Src = *(void **)(*(longlong *)param_1 + 0x340);
  if (iStack_30 == 0) {
    iStack_2c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iStack_30,0,&FStack_38,iStack_30,&iStack_2c);
    memcpy(FStack_38.Data,_Src,lVar7 << 3);
  }
  iVar3 = iStack_30;
  pFVar1 = FStack_38.Data + (longlong)iStack_30 * 8;
  FVar9.Data = FStack_38.Data;
  do {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (FVar9.Data == pFVar1) {
      if (FStack_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data);
      }
      return;
    }
    pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)FVar9.Data;
    if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      if (*(char *)((longlong)param_1 + 0xc) == '\0') {
        iVar10 = -1;
      }
      else {
        iVar10 = 0;
        pTVar8 = pTVar2;
        while( true ) {
          pCVar4 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar8,
                              *(int *)&pTVar8->field_0x8);
          if (pCVar4->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
          pCVar4 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar8,
                              *(int *)&pTVar8->field_0x8);
          pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pCVar4->Id->field_0xc) {
            pTVar5 = pCVar4->Id;
          }
          if (pTVar5 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
          pCVar4 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar8,
                              *(int *)&pTVar8->field_0x8);
          if (pCVar4->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            iVar10 = iVar10 + 1;
          }
          else {
            pCVar4 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                               (*(TPBDRigidClusteredParticles<double,3> **)pTVar8,
                                *(int *)&pTVar8->field_0x8);
            pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pCVar4->Id->field_0xc) {
              pTVar8 = pCVar4->Id;
            }
            iVar10 = iVar10 + 1;
          }
        }
      }
      if (iVar10 <= *(int *)((longlong)param_1 + 8)) {
        pFVar6 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                            (*(TPBDRigidClusteredParticles<double,3> **)pTVar2,
                             *(int *)&pTVar2->field_0x8)->field0_0x0;
        pFVar6->Bits = pFVar6->Bits | 4;
      }
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// Call @ 14636aee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l32::<lambda_5>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbe0) + 0x21) = 1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbd0) + 0x8b9) = 1;
  return;
}

// Call @ 14636af10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l38::<lambda_6>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x20) = 1;
  return;
}

// Call @ 14636af30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UGeometryCollectionComponent::RegisterForEvents'::__l44::<lambda_7>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x23) = 1;
  return;
}

// Call @ 1463ae2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNaniteGeometryCollectionSceneProxy::FlushGPUSceneUpdate_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  FPrimitiveSceneInfo *this;
  longlong lVar2;
  bool bVar3;
  
  this = *(FPrimitiveSceneInfo **)(*(longlong *)param_1 + 0x228);
  if ((this != (FPrimitiveSceneInfo *)0x0) &&
     ((*(uint *)(*(longlong *)param_1 + 0x838) >> 3 & 1) != 0)) {
    bVar3 = FPrimitiveSceneInfo::RequestGPUSceneUpdate(this,ChangedAll);
    lVar2 = *(longlong *)param_1;
    puVar1 = (uint *)(lVar2 + 0x838);
    *puVar1 = *puVar1 & 0xfffffff7;
    puVar1 = (uint *)(lVar2 + 0x838);
    *puVar1 = *puVar1 | (bVar3 ^ 1) << 3;
  }
  return;
}

// Call @ 1463ae310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender'::__l2::<lambda_1>,void,int,int,int,void_*>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,void **param_5)

{
  `AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 1463ae330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionSceneProxyBase::UpdateSkinnedPositions'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionSceneProxyBase::UpdateSkinnedPositions'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1463ae340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionParticlesData::Sync'::__l11::<lambda_2>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  
  lVar1 = *(longlong *)param_1;
  piVar6 = (int *)(lVar1 + 8);
  lVar4 = (longlong)*(int *)(lVar1 + 0x14);
  *piVar6 = *piVar6 + 1;
  *(int *)(lVar1 + 0xc + lVar4 * 4) = *piVar6;
  uVar5 = 0;
  do {
    if (((int)uVar5 < 0) || (0x1c < uVar5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                         ,0xaf,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(ulonglong *)(piVar6 + lVar4 * 0xb2 + (ulonglong)(uVar5 >> 6) * 2 + 4) >> (uVar5 & 0x3f) &
        1) == 0) {
      FGeometryCollectionParticlesData::FData::Reset
                ((FData *)(piVar6 + lVar4 * 0xb2 + 4),(EGeometryCollectionParticlesData)uVar5);
    }
    else if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionParticlesData.cpp"
                         ,0x85,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x1d);
  *(undefined8 *)(piVar6 + lVar4 * 0xb2 + 6) = *(undefined8 *)(piVar6 + lVar4 * 0xb2 + 4);
  LOCK();
  *(int *)(*(longlong *)param_1 + 0x5a8) = *(int *)(*(longlong *)param_1 + 0x5a8) + 1;
  UNLOCK();
  return;
}

