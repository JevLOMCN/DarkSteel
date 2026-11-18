// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 118

// GetbNeverNeedsCookedCollisionData_WrapperImpl @ 147994530

void __cdecl
USplineMeshComponent::GetbNeverNeedsCookedCollisionData_WrapperImpl(void *param_1,void *param_2)

{
  *(byte *)param_2 = *(byte *)((longlong)param_1 + 0x77d) >> 3 & 1;
  return;
}

// SetbNeverNeedsCookedCollisionData_WrapperImpl @ 147994550

void __cdecl
USplineMeshComponent::SetbNeverNeedsCookedCollisionData_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)param_2;
  lVar2 = *(longlong *)((longlong)param_1 + 0x770);
  *(byte *)((longlong)param_1 + 0x77d) =
       (cVar1 << 3 ^ *(byte *)((longlong)param_1 + 0x77d)) & 8 ^
       *(byte *)((longlong)param_1 + 0x77d);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0xd9) = (*(byte *)(lVar2 + 0xd9) ^ cVar1 << 3) & 8 ^ *(byte *)(lVar2 + 0xd9);
  }
  return;
}

// StaticClass @ 1479945e0

UClass * __cdecl USplineMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMeshComponent",
               &Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton,
               StaticRegisterNativesUSplineMeshComponent,0x780,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineMeshComponent>,
               InternalVTableHelperCtorCaller<USplineMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton;
}

// USplineMeshComponent @ 1479a7400

USplineMeshComponent * __thiscall
USplineMeshComponent::USplineMeshComponent(USplineMeshComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  (this->SplineParams).NaniteClusterBoundsScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7USplineMeshComponent__6B_;
  (this->SplineParams).StartPos.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartRoll = 0.0;
  (this->SplineParams).EndRoll = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y = 0.0;
  (this->CachedMeshBodySetupGuid).A = 0;
  (this->CachedMeshBodySetupGuid).B = 0;
  (this->CachedMeshBodySetupGuid).C = 0;
  (this->CachedMeshBodySetupGuid).D = 0;
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  (this->CachedNavigationBounds).IsValid = '\0';
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  return this;
}

// USplineMeshComponent @ 1479a7540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

USplineMeshComponent * __thiscall
USplineMeshComponent::USplineMeshComponent(USplineMeshComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  (this->SplineParams).NaniteClusterBoundsScale = 1.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.X = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7USplineMeshComponent__6B_;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartRoll = 0.0;
  (this->SplineParams).EndRoll = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y = 0.0;
  (this->CachedMeshBodySetupGuid).A = 0;
  (this->CachedMeshBodySetupGuid).B = 0;
  (this->CachedMeshBodySetupGuid).C = 0;
  (this->CachedMeshBodySetupGuid).D = 0;
  (this->CachedNavigationBounds).IsValid = '\0';
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  this->VirtualTextureMainPassMaxDrawDistance = 0.0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar2 = *pbVar2 & 0xbf;
  (this->SplineUpDir).field0_0x0._s_0.Z = 1.0;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = 100.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.X = 1.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = 1.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = 100.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X = 100.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.X = 1.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = 1.0;
  puVar3 = &this->field_0x77d;
  this->bAllowSplineEditingPerInstance = '\0';
  this->bNeverNeedsCookedCollisionData = '\0';
  this->bMeshDirty = '\0';
  this->bSmoothInterpRollScale = '\0';
  this->SplineBoundaryMin = 0.0;
  this->SplineBoundaryMax = 0.0;
  return this;
}

// ~USplineMeshComponent @ 1479a9920

void __thiscall USplineMeshComponent::~USplineMeshComponent(USplineMeshComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// operator() @ 1479abde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USplineMeshComponent::CollectPSOPrecacheData'::__l2::<lambda_1>::operator()
          (void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_148 [32];
  FDataType local_118;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  plVar2 = *(longlong **)((longlong)this + 8);
  if (param_2 < (int)plVar2[1]) {
    if (param_2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)(*plVar2 + 0x40 + (longlong)param_2 * 0x50) != 0) {
      bVar4 = true;
      goto LAB_1479abe74;
    }
  }
  bVar4 = false;
LAB_1479abe74:
  iVar1 = *(int *)this;
  local_118._padding_._4_4_ = 4;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._6_1_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_118.PreSkinPositionComponent.StreamOffset = 0;
  local_118.PreSkinPositionComponent.Offset = '\0';
  local_118.PreSkinPositionComponent.Stride = '\0';
  local_118.PreSkinPositionComponent.Type.Value = '\0';
  local_118.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_118.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_._4_2_ = 0xff;
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&(param_1->VertexBuffers).PositionVertexBuffer,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&(param_1->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (&(param_1->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_118,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (&(param_1->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_118,iVar1);
  if (bVar4) {
    FColorVertexBuffer::BindDefaultColorVertexBuffer
              ((FVertexFactory *)0x0,(FStaticMeshDataType *)&local_118,
               FColorSizeForComponentOverride);
  }
  else {
    FColorVertexBuffer::BindColorVertexBuffer
              (&(param_1->VertexBuffers).ColorVertexBuffer,(FVertexFactory *)0x0,
               (FStaticMeshDataType *)&local_118);
  }
  FLocalVertexFactory::GetVertexElements(GMaxRHIFeatureLevel,Default,param_3,&local_118,param_4);
  return;
}

// AllocateStaticLightingMesh @ 1479b1a50

FStaticMeshStaticLightingMesh * __thiscall
USplineMeshComponent::AllocateStaticLightingMesh
          (USplineMeshComponent *this,int param_1,
          TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FStaticMeshStaticLightingMesh *this_00;
  
  this_00 = ::operator_new(0x250);
  if (this_00 != (FStaticMeshStaticLightingMesh *)0x0) {
    *(undefined4 *)&this_00->field_0x248 = 0;
    *(undefined **)&this_00->field_0x8 = &FSplineStaticLightingMesh::_vbtable_;
    *(undefined ***)&this_00->field_0x240 = &___7FRefCountedObject__6B_;
    FStaticMeshStaticLightingMesh::FStaticMeshStaticLightingMesh
              (this_00,(UStaticMeshComponent *)this,param_1,param_2);
    *(undefined ***)this_00 = &FSplineStaticLightingMesh::_vftable__for__FStaticLightingMesh__;
    *(undefined ***)(&this_00->field_0x8 + *(int *)(*(longlong *)&this_00->field_0x8 + 4)) =
         &FSplineStaticLightingMesh::_vftable__for__FRefCountedObject__;
    *(USplineMeshComponent **)&this_00->field_0x238 = this;
  }
  return this_00;
}

// ApplyComponentInstanceData @ 1479b2cc0

void __thiscall
USplineMeshComponent::ApplyComponentInstanceData
          (USplineMeshComponent *this,FSplineMeshInstanceData *param_1)

{
  undefined1 uVar1;
  double dVar2;
  
  if ((param_1 != (FSplineMeshInstanceData *)0x0) &&
     (uVar1 = this->field_0x77d, this->bAllowSplineEditingPerInstance != 0)) {
    dVar2 = (param_1->StartPos).field0_0x0._s_0.Y;
    (this->SplineParams).StartPos.field0_0x0._s_0.X = (param_1->StartPos).field0_0x0._s_0.X;
    (this->SplineParams).StartPos.field0_0x0._s_0.Y = dVar2;
    (this->SplineParams).StartPos.field0_0x0._s_0.Z = (param_1->StartPos).field0_0x0._s_0.Z;
    dVar2 = (param_1->EndPos).field0_0x0._s_0.Y;
    (this->SplineParams).EndPos.field0_0x0._s_0.X = (param_1->EndPos).field0_0x0._s_0.X;
    (this->SplineParams).EndPos.field0_0x0._s_0.Y = dVar2;
    (this->SplineParams).EndPos.field0_0x0._s_0.Z = (param_1->EndPos).field0_0x0._s_0.Z;
    dVar2 = (param_1->StartTangent).field0_0x0._s_0.Y;
    (this->SplineParams).StartTangent.field0_0x0._s_0.X = (param_1->StartTangent).field0_0x0._s_0.X;
    (this->SplineParams).StartTangent.field0_0x0._s_0.Y = dVar2;
    (this->SplineParams).StartTangent.field0_0x0._s_0.Z = (param_1->StartTangent).field0_0x0._s_0.Z;
    if ((((param_1->EndTangent).field0_0x0._s_0.X !=
          (this->SplineParams).EndTangent.field0_0x0._s_0.X) ||
        ((param_1->EndTangent).field0_0x0._s_0.Y !=
         (this->SplineParams).EndTangent.field0_0x0._s_0.Y)) ||
       ((param_1->EndTangent).field0_0x0._s_0.Z != (this->SplineParams).EndTangent.field0_0x0._s_0.Z
       )) {
      dVar2 = (param_1->EndTangent).field0_0x0._s_0.Y;
      (this->SplineParams).EndTangent.field0_0x0._s_0.X = (param_1->EndTangent).field0_0x0._s_0.X;
      (this->SplineParams).EndTangent.field0_0x0._s_0.Y = dVar2;
      (this->SplineParams).EndTangent.field0_0x0._s_0.Z = (param_1->EndTangent).field0_0x0._s_0.Z;
      this->field_0x77d = uVar1 | 4;
    }
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// CalcBounds @ 1479b67f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
USplineMeshComponent::CalcBounds
          (USplineMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  UStaticMesh *this_00;
  undefined8 uVar2;
  TBoxSphereBounds<double,double> *pTVar3;
  FSplineMeshSceneProxyDesc *this_01;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auStackY_208 [32];
  TBoxSphereBounds<double,double> local_1d8;
  FSplineMeshSceneProxyDesc local_1a0;
  TVector<double>_u_0 local_90;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = (UStaticMesh *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this_00 == (UStaticMesh *)0x0) goto LAB_1479b683c;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 != (UStaticMesh *)0x0) {
    pTVar3 = UStaticMesh::GetBounds(this_00,&local_1d8);
    this_01 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_1a0,this);
    FSplineMeshSceneProxyDesc::ComputeDistortedBounds
              (this_01,(TBox<double> *)&local_90._s_0,param_1,pTVar3,
               (TBoxSphereBounds<double,double> *)0x0);
    local_68 = local_68 - local_90._s_0.Z;
    local_70 = local_70 - local_90._s_0.Y;
    dVar6 = local_68 * __real_3fe0000000000000;
    dVar1 = (local_78 - local_90._s_0.X) * __real_3fe0000000000000;
    dVar7 = local_70 * __real_3fe0000000000000;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + local_90._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar7 + local_90._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar6 + local_90._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar7;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar6;
    dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    auVar4._0_8_ = dVar1 * dVar1;
    auVar4._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (local_68 * local_68 + local_70 * local_70) * __real_3fd0000000000000 +
                   auVar4._0_8_;
    auVar5 = sqrtpd(auVar4,auVar5);
    __return_storage_ptr__->SphereRadius = auVar5._0_8_;
    return __return_storage_ptr__;
  }
LAB_1479b683c:
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// CalcSliceTransform @ 1479b7240

TTransform<double> * __thiscall
USplineMeshComponent::CalcSliceTransform
          (USplineMeshComponent *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  FSplineMeshSceneProxyDesc *this_00;
  FSplineMeshSceneProxyDesc local_128;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_128,this);
  FSplineMeshSceneProxyDesc::CalcSliceTransform(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CalcSliceTransformAtSplineOffset @ 1479b7290

TTransform<double> * __thiscall
USplineMeshComponent::CalcSliceTransformAtSplineOffset
          (USplineMeshComponent *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2,float param_3)

{
  FSplineMeshSceneProxyDesc *this_00;
  FSplineMeshSceneProxyDesc local_138;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_138,this);
  FSplineMeshSceneProxyDesc::CalcSliceTransformAtSplineOffset
            (this_00,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CalculateShaderParams @ 1479b7300

FSplineMeshShaderParams * __thiscall
USplineMeshComponent::CalculateShaderParams
          (USplineMeshComponent *this,FSplineMeshShaderParams *__return_storage_ptr__)

{
  FSplineMeshSceneProxyDesc *this_00;
  FSplineMeshSceneProxyDesc local_118;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_118,this);
  FSplineMeshSceneProxyDesc::CalculateShaderParams(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CollectPSOPrecacheData @ 1479b8a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USplineMeshComponent::CollectPSOPrecacheData
          (USplineMeshComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  double *pdVar1;
  TVector2<double> *pTVar2;
  UObject *pUVar3;
  UStaticMesh *this_00;
  bool bVar4;
  FStaticMeshRenderData *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FVertexFactoryType *pFVar8;
  undefined1 auStackY_188 [32];
  FPSOPrecacheParams_u_0 local_158;
  code *local_150;
  undefined4 *local_148;
  undefined4 local_140 [2];
  longlong *local_138;
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar3 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar3);
  }
  else if (pUVar3 == (UObject *)0x0) {
    return;
  }
  this_00 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar5 = UStaticMesh::GetRenderData(this_00);
  if (pFVar5 != (FStaticMeshRenderData *)0x0) {
    pUVar3 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_140[0] = *(undefined4 *)&pUVar3[0xb].field_0x8;
    uVar6 = 0;
    pdVar1 = &(this->SplineParams).StartScale.field0_0x0._s_0.Y;
    local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.AssetName.Data.ArrayNum = 0;
    local_128.AssetName.Data.ArrayMax = 0;
    local_138 = &this->_padding_;
    local_128.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_128.Entries.ArrayNum = 0;
    local_128.Entries.ArrayMax = 4;
    local_128.FallbackMaterial = (UMaterialInterface *)0x0;
    uVar7 = uVar6;
    if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
      uVar7 = 0x20000;
    }
    pTVar2 = &(this->SplineParams).StartScale;
    if ((pTVar2->field0_0x0)._s_0.X <= 0.0 && (pTVar2->field0_0x0)._s_0.X != 0.0) {
      uVar6 = 0x20000;
    }
    local_128.bCompatibleWithLumenCardSharing = '\0';
    local_128.bHasSky = '\0';
    local_128.bHasMasked = '\0';
    local_128.bHasAnyError = '\0';
    local_158.Data = uVar7 ^ uVar6 ^ ((param_1->field0_0x0).Data | 0x100);
    bVar4 = UStaticMeshComponent::ShouldCreateNaniteProxy((UStaticMeshComponent *)this,&local_128);
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`USplineMeshComponent::CollectPSOPrecacheData'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                ::Call;
    local_148 = local_140;
    pFVar8 = &FNaniteVertexFactory::StaticType;
    if (!bVar4) {
      pFVar8 = &FSplineMeshVertexFactory::StaticType;
    }
    FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<UStaticMeshComponent>
              ((UStaticMeshComponent *)this,pFVar8,(FPSOPrecacheParams *)&local_158._s_0,
               (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                *)&local_150,param_2);
    if (local_128.Entries.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
    }
    if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeDistortedBounds @ 1479b8db0

TBox<double> * __thiscall
USplineMeshComponent::ComputeDistortedBounds
          (USplineMeshComponent *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TBoxSphereBounds<double,double> *param_2,
          TBoxSphereBounds<double,double> *param_3)

{
  FSplineMeshSceneProxyDesc *this_00;
  FSplineMeshSceneProxyDesc local_118;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_118,this);
  FSplineMeshSceneProxyDesc::ComputeDistortedBounds
            (this_00,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ComputeRatioAlongSpline @ 1479b8f60

float __thiscall
USplineMeshComponent::ComputeRatioAlongSpline(USplineMeshComponent *this,float param_1)

{
  FSplineMeshSceneProxyDesc *this_00;
  float fVar1;
  FSplineMeshSceneProxyDesc local_128;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_128,this);
  fVar1 = FSplineMeshSceneProxyDesc::ComputeRatioAlongSpline(this_00,param_1);
  return fVar1;
}

// ComputeVisualMeshSplineTRange @ 1479b92e0

void __thiscall
USplineMeshComponent::ComputeVisualMeshSplineTRange
          (USplineMeshComponent *this,float *param_1,float *param_2)

{
  FSplineMeshSceneProxyDesc *this_00;
  FSplineMeshSceneProxyDesc local_118;
  
  this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_118,this);
  FSplineMeshSceneProxyDesc::ComputeVisualMeshSplineTRange(this_00,param_1,param_2);
  return;
}

// ContainsPhysicsTriMeshData @ 1479b9330

bool __thiscall
USplineMeshComponent::ContainsPhysicsTriMeshData(USplineMeshComponent *this,bool param_1)

{
  UObject *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (UObject *)this[-1].SplineParams.EndScale.field0_0x0._s_0.Y;
  if (pUVar1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar1 = *(UObject **)((longlong)&this[-1].SplineParams.EndScale.field0_0x0 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001479b9393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pUVar1[5].field_0x18 + 0x20))(&pUVar1[5].field_0x18,param_1);
    return (bool)uVar2;
  }
  return false;
}

// CreateStaticMeshSceneProxy @ 1479bc5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
USplineMeshComponent::CreateStaticMeshSceneProxy
          (USplineMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  bool bVar1;
  EPSOPrecacheProxyCreationStrategy EVar2;
  FNaniteSplineMeshSceneProxy *pFVar3;
  FSplineMeshSceneProxy *this_00;
  FLLMScope local_res20 [2];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res20,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(local_18,StaticMesh,true);
  bVar1 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority((UPrimitiveComponent *)this,High);
  if (bVar1) {
    EVar2 = GetPSOPrecacheProxyCreationStrategy();
    if (EVar2 != DelayUntilPSOPrecached) goto LAB_1479bc63b;
  }
  else {
LAB_1479bc63b:
    if (param_2) {
      bVar1 = NaniteSplineMeshesSupported();
      if ((bVar1) && (GSplineMeshRenderNanite != 0)) {
        pFVar3 = ::operator_new(0xe30);
        if (pFVar3 != (FNaniteSplineMeshSceneProxy *)0x0) {
          pFVar3 = FNaniteSplineMeshSceneProxy::FNaniteSplineMeshSceneProxy(pFVar3,param_1,this);
          goto LAB_1479bc695;
        }
        goto LAB_1479bc693;
      }
    }
    this_00 = ::operator_new(0xda0);
    if (this_00 != (FSplineMeshSceneProxy *)0x0) {
      pFVar3 = (FNaniteSplineMeshSceneProxy *)
               FSplineMeshSceneProxy::FSplineMeshSceneProxy(this_00,this);
      goto LAB_1479bc695;
    }
  }
LAB_1479bc693:
  pFVar3 = (FNaniteSplineMeshSceneProxy *)0x0;
LAB_1479bc695:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res20);
  return (FPrimitiveSceneProxy *)pFVar3;
}

// DestroyBodySetup @ 1479bc8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USplineMeshComponent::DestroyBodySetup(USplineMeshComponent *this)

{
  UBodySetup *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  this_00 = (this->BodySetup).field0_0x0.DebugPtr;
  if (this_00 != (UBodySetup *)0x0) {
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    do {
      lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar5 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar4 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
      if (bVar3) {
        (pFVar4->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar3);
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar4,Async);
    (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  }
  return;
}

// DoCustomNavigableGeometryExport @ 1479bde10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
USplineMeshComponent::DoCustomNavigableGeometryExport
          (USplineMeshComponent *this,FNavigableGeometryExport *param_1)

{
  char cVar1;
  UObject *pUVar2;
  UStaticMesh *pUVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  UNavCollisionBase *pUVar15;
  double *pdVar16;
  FSplineMeshSceneProxyDesc *pFVar17;
  uint uVar18;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined4 uVar31;
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  undefined4 uVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStackY_4d8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_460;
  double dStack_458;
  double local_450;
  double local_448 [3];
  double local_430;
  double local_428;
  double *local_420;
  double *local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  FSplineMeshSceneProxyDesc local_3b0;
  FSplineMeshSceneProxyDesc local_2a0;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  ulonglong uVar19;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  pUVar2 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UObject *)0x0) {
      return true;
    }
    UE::GC::MarkAsReachable(pUVar2);
  }
  else if (pUVar2 == (UObject *)0x0) {
    return true;
  }
  pUVar3 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar15 = UStaticMesh::GetNavCollision(pUVar3);
  if (pUVar15 != (UNavCollisionBase *)0x0) {
    pUVar3 = (UStaticMesh *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar15 = UStaticMesh::GetNavCollision(pUVar3);
    if (pUVar15->bIsDynamicObstacle == 0) {
      if (pUVar15->bHasConvexGeometry != 0) {
        cVar1 = *(char *)((longlong)&this->_padding_ + 4);
        local_448[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_448[1] = _UNK_150689688;
        local_448[2] = __real_3ff0000000000000;
        if (cVar1 == '\0') {
          pdVar16 = local_448;
        }
        else if (cVar1 == '\x01') {
          pdVar16 = local_448 + 1;
        }
        else {
          if ((cVar1 != '\x02') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x1fd,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
          pdVar16 = local_448 + 2;
        }
        uVar13 = *(uint *)&(pUVar15->TriMeshCollision).VertexBuffer.field_0x10;
        uVar20 = 0;
        iVar14 = *(int *)&(pUVar15->ConvexCollision).VertexBuffer.field_0x10;
        *pdVar16 = 0.0;
        if ((int)uVar13 < iVar14) {
          uVar13 = *(uint *)&(pUVar15->ConvexCollision).VertexBuffer.field_0x10;
        }
        local_488.Data = (FScriptContainerElement *)0x0;
        local_480 = 0;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if (0 < (int)uVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar13,&local_488,0,(int *)((longlong)&local_480 + 4));
        }
        dVar10 = __real_c7efffffe0000000;
        dVar9 = __real_47efffffe0000000;
        iVar14 = *(int *)&(pUVar15->ConvexCollision).VertexBuffer.field_0x10;
        uVar19 = uVar20;
        uVar21 = uVar20;
        if (0 < iVar14) {
          do {
            uVar18 = (uint)uVar19;
            uVar13 = 0;
            if ((int)uVar18 < iVar14) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            lVar22 = *(longlong *)&(pUVar15->ConvexCollision).VertexBuffer;
            cVar1 = *(char *)((longlong)&this->_padding_ + 4);
            pdVar16 = (double *)(lVar22 + uVar21);
            local_478 = *pdVar16;
            dStack_470 = pdVar16[1];
            local_468 = *(double *)(lVar22 + 0x10 + uVar21);
            dVar50 = local_478;
            if ((((cVar1 != '\0') && (dVar50 = dStack_470, cVar1 != '\x01')) &&
                (dVar50 = local_468, cVar1 != '\x02')) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                    ,0x1fd,L""), dVar50 = local_468, bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            local_430 = dVar50;
            if ((dVar50 < dVar10) || (dVar9 < dVar50)) {
              local_420 = &local_430;
              `UE::SplineMesh::RealToFloatChecked'::__l2::<lambda_1>::operator()(&local_420);
            }
            dVar50 = local_430;
            pFVar17 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc
                                (&local_3b0,(USplineMeshComponent *)&this[-1]._padding_);
            FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar17,&local_188,(float)dVar50);
            dVar55 = local_188.Rotation.XY.m128d_f64[1];
            local_400 = local_448[2] * local_468;
            local_410 = local_448[0] * local_478;
            dStack_408 = local_448[1] * dStack_470;
            dVar50 = local_188.Rotation.ZW.m128d_f64[0];
            dVar6 = local_188.Rotation.ZW.m128d_f64[1];
            dVar30 = local_400 * local_188.Scale3D.ZW.m128d_f64[0];
            dVar46 = local_188.Scale3D.ZW.m128d_f64[1] * 0.0;
            dVar8 = local_188.Scale3D.XY.m128d_f64[0] * local_410;
            dVar23 = local_188.Scale3D.XY.m128d_f64[1] * dStack_408;
            uVar31 = (undefined4)((ulonglong)dVar23 >> 0x20);
            auVar56._8_4_ = SUB84(dVar23,0);
            auVar56._0_8_ = dVar8;
            auVar56._12_4_ = uVar31;
            auVar51._8_4_ = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
            auVar51._0_8_ = dVar55;
            auVar51._12_4_ = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
            auVar32._8_4_ = SUB84(dVar23,0);
            auVar32._0_8_ = dVar8;
            auVar32._12_4_ = uVar31;
            auVar33._8_4_ = SUB84(dVar46,0);
            auVar33._0_8_ = dVar30;
            auVar33._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            auVar33 = blendpd(auVar32,auVar33,2);
            auVar57._0_8_ = auVar56._8_8_ * local_188.Rotation.XY.m128d_f64[0] - dVar55 * dVar8;
            auVar57._8_8_ = dVar30 * dVar55 - auVar51._8_8_ * dVar23;
            auVar47._8_4_ = SUB84(auVar57._8_8_,0);
            auVar47._0_8_ = auVar57._0_8_;
            auVar47._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
            auVar51 = blendpd((undefined1  [16])local_188.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_188.Rotation.ZW.m128d_f64,2);
            auVar34._0_8_ = auVar33._0_8_ * dVar50 - auVar51._0_8_ * dVar30;
            auVar34._8_8_ = auVar33._8_8_ * dVar6 - auVar51._8_8_ * dVar46;
            auVar33 = blendpd(auVar57,auVar34,2);
            dVar46 = auVar47._8_8_ + auVar47._8_8_;
            dVar48 = auVar34._0_8_ + auVar34._0_8_;
            auVar58._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar58._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            uVar31 = SUB84(dVar48,0);
            auVar40._8_4_ = uVar31;
            auVar40._0_8_ = dVar46;
            uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
            auVar40._12_4_ = uVar49;
            auVar24._8_4_ = uVar31;
            auVar24._0_8_ = dVar46;
            auVar24._12_4_ = uVar49;
            auVar35._8_4_ = uVar31;
            auVar35._0_8_ = dVar46;
            auVar35._12_4_ = uVar49;
            auVar33 = blendpd(auVar35,auVar58,2);
            auVar41._0_8_ = auVar40._8_8_ * local_188.Rotation.XY.m128d_f64[0] - dVar46 * dVar55;
            auVar41._8_8_ = auVar58._0_8_ * dVar55 - auVar24._8_8_ * dVar50;
            auVar25._8_4_ = SUB84(auVar58._8_8_,0);
            auVar25._0_8_ = auVar58._0_8_;
            auVar25._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
            auVar36._0_8_ = auVar33._0_8_ * dVar50 - auVar58._0_8_ * auVar51._0_8_;
            auVar36._8_8_ = auVar33._8_8_ * dVar6 - auVar25._8_8_ * auVar51._8_8_;
            auVar26._8_4_ = SUB84(auVar41._8_8_,0);
            auVar26._0_8_ = auVar41._0_8_;
            auVar26._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
            auVar33 = blendpd(auVar41,auVar36,2);
            local_478 = dVar46 * dVar6 + dVar8 + auVar26._8_8_ +
                        local_188.Translation.XY.m128d_f64[0];
            dStack_470 = dVar48 * dVar6 + dVar23 + auVar36._0_8_ +
                         local_188.Translation.XY.m128d_f64[1];
            local_468 = auVar58._0_8_ * dVar6 + dVar30 + auVar33._0_8_ +
                        local_188.Translation.ZW.m128d_f64[0];
            local_3f8 = local_478;
            dStack_3f0 = dStack_470;
            local_3e8 = local_468;
            if (((local_488.Data <= (FScriptContainerElement *)&local_478) &&
                ((FScriptContainerElement *)&local_478 <
                 local_488.Data + (longlong)(int)local_480._4_4_ * 0x18)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            iVar14 = (int)local_480;
            if ((int)local_480 == local_480._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_488,(int *)((longlong)&local_480 + 4));
            }
            local_480 = CONCAT44(local_480._4_4_,iVar14 + 1);
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18) = local_478;
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18 + 8) = dStack_470;
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18 + 0x10) = local_468;
            iVar14 = *(int *)&(pUVar15->ConvexCollision).VertexBuffer.field_0x10;
            uVar19 = (ulonglong)(uVar18 + 1);
            uVar21 = uVar21 + 0x18;
          } while ((int)(uVar18 + 1) < iVar14);
        }
        (**(code **)((longlong)*param_1 + 0x30))
                  (param_1,local_488.Data,local_480 & 0xffffffff,
                   *(undefined8 *)&(pUVar15->ConvexCollision).IndexBuffer);
        uVar19 = local_480;
        uVar13 = local_480._4_4_;
        local_480 = (ulonglong)local_480._4_4_ << 0x20;
        if (((longlong)uVar19 < 0) && (uVar13 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_488,0,(int *)((longlong)&local_480 + 4));
        }
        iVar14 = *(int *)&(pUVar15->TriMeshCollision).VertexBuffer.field_0x10;
        if (0 < iVar14) {
          lVar22 = 0;
          do {
            uVar18 = (uint)uVar20;
            uVar13 = 0;
            if ((int)uVar18 < iVar14) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            lVar4 = *(longlong *)&(pUVar15->TriMeshCollision).VertexBuffer;
            cVar1 = *(char *)((longlong)&this->_padding_ + 4);
            pdVar16 = (double *)(lVar4 + lVar22);
            local_460 = *pdVar16;
            dStack_458 = pdVar16[1];
            local_450 = *(double *)(lVar4 + 0x10 + lVar22);
            dVar50 = local_460;
            if ((((cVar1 != '\0') && (dVar50 = dStack_458, cVar1 != '\x01')) &&
                (dVar50 = local_450, cVar1 != '\x02')) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                    ,0x1fd,L""), dVar50 = local_450, bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            local_428 = dVar50;
            if ((dVar50 < dVar10) || (dVar9 < dVar50)) {
              local_418 = &local_428;
              `UE::SplineMesh::RealToFloatChecked'::__l2::<lambda_1>::operator()(&local_418);
            }
            dVar50 = local_428;
            pFVar17 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc
                                (&local_2a0,(USplineMeshComponent *)&this[-1]._padding_);
            FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar17,&local_128,(float)dVar50);
            local_3d0 = local_448[2] * local_450;
            local_3e0 = local_448[0] * local_460;
            dStack_3d8 = local_448[1] * dStack_458;
            dVar46 = local_128.Rotation.XY.m128d_f64[1];
            dVar6 = local_128.Rotation.ZW.m128d_f64[1];
            dVar50 = local_128.Rotation.ZW.m128d_f64[0];
            dVar8 = local_3d0 * local_128.Scale3D.ZW.m128d_f64[0];
            dVar23 = local_128.Scale3D.ZW.m128d_f64[1] * 0.0;
            dVar55 = local_128.Scale3D.XY.m128d_f64[0] * local_3e0;
            dVar48 = local_128.Scale3D.XY.m128d_f64[1] * dStack_3d8;
            auVar27._8_4_ = local_128.Rotation.ZW.m128d_f64[0]._0_4_;
            auVar27._0_8_ = dVar46;
            auVar27._12_4_ = local_128.Rotation.ZW.m128d_f64[0]._4_4_;
            auVar52._8_4_ = SUB84(dVar48,0);
            auVar52._0_8_ = dVar55;
            uVar31 = (undefined4)((ulonglong)dVar48 >> 0x20);
            auVar52._12_4_ = uVar31;
            auVar37._8_4_ = SUB84(dVar48,0);
            auVar37._0_8_ = dVar55;
            auVar37._12_4_ = uVar31;
            auVar7._8_4_ = SUB84(dVar23,0);
            auVar7._0_8_ = dVar8;
            auVar7._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
            auVar33 = blendpd(auVar37,auVar7,2);
            auVar53._0_8_ = auVar52._8_8_ * local_128.Rotation.XY.m128d_f64[0] - dVar46 * dVar55;
            auVar53._8_8_ = dVar8 * dVar46 - auVar27._8_8_ * dVar48;
            auVar51 = blendpd((undefined1  [16])local_128.Rotation.XY.m128d_f64,
                              (undefined1  [16])local_128.Rotation.ZW.m128d_f64,2);
            auVar38._0_8_ = auVar33._0_8_ * dVar50 - auVar51._0_8_ * dVar8;
            auVar38._8_8_ = auVar33._8_8_ * dVar6 - auVar51._8_8_ * dVar23;
            auVar28._8_4_ = SUB84(auVar53._8_8_,0);
            auVar28._0_8_ = auVar53._0_8_;
            auVar28._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
            dVar23 = auVar28._8_8_ + auVar28._8_8_;
            dVar30 = auVar38._0_8_ + auVar38._0_8_;
            auVar33 = blendpd(auVar53,auVar38,2);
            auVar39._8_4_ = local_128.Rotation.ZW.m128d_f64[1]._0_4_;
            auVar39._0_8_ = dVar6;
            auVar39._12_4_ = local_128.Rotation.ZW.m128d_f64[1]._4_4_;
            auVar44._8_4_ = SUB84(dVar30,0);
            auVar44._0_8_ = dVar23;
            uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
            auVar44._12_4_ = uVar31;
            auVar54._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar54._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            auVar42._8_4_ = SUB84(dVar30,0);
            auVar42._0_8_ = dVar23;
            auVar42._12_4_ = uVar31;
            auVar33 = blendpd(auVar42,auVar54,2);
            auVar45._0_8_ = auVar44._8_8_ * local_128.Rotation.XY.m128d_f64[0] - dVar46 * dVar23;
            auVar45._8_8_ = auVar54._0_8_ * dVar46 - dVar50 * dVar30;
            auVar29._8_4_ = SUB84(auVar45._8_8_,0);
            auVar29._0_8_ = auVar45._0_8_;
            auVar29._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
            auVar43._0_8_ = auVar33._0_8_ * dVar50 - auVar51._0_8_ * auVar54._0_8_;
            auVar43._8_8_ = auVar33._8_8_ * dVar6 - auVar51._8_8_ * auVar54._8_8_;
            auVar33 = blendpd(auVar45,auVar43,2);
            local_460 = dVar6 * dVar23 + dVar55 + auVar29._8_8_ +
                        local_128.Translation.XY.m128d_f64[0];
            dStack_458 = auVar39._8_8_ * dVar30 + dVar48 + auVar43._0_8_ +
                         local_128.Translation.XY.m128d_f64[1];
            local_450 = dVar6 * auVar54._0_8_ + dVar8 + auVar33._0_8_ +
                        local_128.Translation.ZW.m128d_f64[0];
            local_3c8 = local_460;
            dStack_3c0 = dStack_458;
            local_3b8 = local_450;
            if (((local_488.Data <= (FScriptContainerElement *)&local_460) &&
                ((FScriptContainerElement *)&local_460 <
                 local_488.Data + (longlong)(int)local_480._4_4_ * 0x18)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            iVar14 = (int)local_480;
            if ((int)local_480 == local_480._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_488,(int *)((longlong)&local_480 + 4));
            }
            uVar20 = (ulonglong)(uVar18 + 1);
            local_480 = CONCAT44(local_480._4_4_,iVar14 + 1);
            lVar22 = lVar22 + 0x18;
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18) = local_460;
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18 + 8) = dStack_458;
            *(double *)(local_488.Data + (longlong)iVar14 * 0x18 + 0x10) = local_450;
            iVar14 = *(int *)&(pUVar15->TriMeshCollision).VertexBuffer.field_0x10;
          } while ((int)(uVar18 + 1) < iVar14);
        }
        (**(code **)((longlong)*param_1 + 0x30))
                  (param_1,local_488.Data,local_480 & 0xffffffff,
                   *(undefined8 *)&(pUVar15->TriMeshCollision).IndexBuffer);
        if (local_488.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.Data);
        }
        return false;
      }
    }
    else {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<604511664749937640>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineMeshComponent.cpp"
                          ,1000,"!NavCollision->IsDynamicObstacle()");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
    }
  }
  return true;
}

// GetAxisValueRef @ 1479c4390

double * __cdecl USplineMeshComponent::GetAxisValueRef(TVector<double> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (param_2 == X) {
    return (double *)param_1;
  }
  if (param_2 == Y) {
    return (double *)((longlong)&param_1->field0_0x0 + 8);
  }
  if (param_2 == Z) {
    return (double *)((longlong)&param_1->field0_0x0 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                     ,0x1fd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pdVar3 = (double *)(*pcVar1)();
    return pdVar3;
  }
  return (double *)((longlong)&param_1->field0_0x0 + 0x10);
}

// GetBodySetup @ 1479c4490

UBodySetup * __thiscall USplineMeshComponent::GetBodySetup(USplineMeshComponent *this)

{
  UBodySetup *pUVar1;
  UBodySetup *pUVar2;
  
  pUVar1 = (this->BodySetup).field0_0x0.DebugPtr;
  if (pUVar1 == (UBodySetup *)0x0) {
    return (UBodySetup *)0x0;
  }
  if ((pUVar1->TriMeshGeometries).ArrayNum == 0) {
    pUVar2 = (UBodySetup *)0x0;
    if (0 < (pUVar1->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
            (pUVar1->AggGeom).MLLevelSetElems.ArrayNum +
            (pUVar1->AggGeom).SkinnedLevelSetElems.ArrayNum +
            (pUVar1->AggGeom).LevelSetElems.ArrayNum +
            (pUVar1->AggGeom).TaperedCapsuleElems.ArrayNum + (pUVar1->AggGeom).ConvexElems.ArrayNum
            + (pUVar1->AggGeom).SphylElems.ArrayNum + (pUVar1->AggGeom).BoxElems.ArrayNum +
            (pUVar1->AggGeom).SphereElems.ArrayNum) {
      pUVar2 = pUVar1;
    }
    return pUVar2;
  }
  return pUVar1;
}

// GetBodySetup @ 1479c44f0

UBodySetup * __thiscall USplineMeshComponent::GetBodySetup(USplineMeshComponent *this)

{
  UBodySetup *pUVar1;
  
  pUVar1 = (this->BodySetup).field0_0x0.DebugPtr;
  if ((pUVar1 == (UBodySetup *)0x0) ||
     (((pUVar1->TriMeshGeometries).ArrayNum == 0 &&
      ((pUVar1->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
       (pUVar1->AggGeom).MLLevelSetElems.ArrayNum + (pUVar1->AggGeom).SkinnedLevelSetElems.ArrayNum
       + (pUVar1->AggGeom).LevelSetElems.ArrayNum + (pUVar1->AggGeom).TaperedCapsuleElems.ArrayNum +
       (pUVar1->AggGeom).ConvexElems.ArrayNum + (pUVar1->AggGeom).SphylElems.ArrayNum +
       (pUVar1->AggGeom).BoxElems.ArrayNum + (pUVar1->AggGeom).SphereElems.ArrayNum < 1)))) {
    pUVar1 = (UBodySetup *)0x0;
  }
  return pUVar1;
}

// GetBoundaryMax @ 1479c4600

float __thiscall USplineMeshComponent::GetBoundaryMax(USplineMeshComponent *this)

{
  return this->SplineBoundaryMax;
}

// GetBoundaryMin @ 1479c4610

float __thiscall USplineMeshComponent::GetBoundaryMin(USplineMeshComponent *this)

{
  return this->SplineBoundaryMin;
}

// GetComponentInstanceData @ 1479c5630

TStructOnScope<FActorComponentInstanceData> * __thiscall
USplineMeshComponent::GetComponentInstanceData
          (USplineMeshComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 uVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  UPackage *pUVar8;
  FStaticMeshComponentInstanceData *this_00;
  int iVar9;
  FStructOnScope *this_01;
  uint uVar10;
  UScriptStruct *local_res8;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  if (this->bAllowSplineEditingPerInstance == 0) {
    FStructOnScope::FStructOnScope(&local_30);
    local_30._padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
    FStructOnScope::Destroy(&local_30);
    if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData,
                           (UObject *)pUVar8,L"StaticMeshComponentInstanceData");
      if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_1479c58cb;
    }
    else {
LAB_1479c58cb:
      pUVar6 = Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton;
      local_res8 = Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable
                  ((UObject *)
                   Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton
                  );
      }
      FWeakObjectPtr::operator=(&local_30.ScriptStruct.WeakPtr,(FObjectPtr)&local_res8);
      iVar9 = (int)*(short *)((longlong)&pUVar6->_padding_ + 4);
      uVar10 = (int)pUVar6->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
      uVar7 = 1;
      if (uVar10 != 0) {
        uVar7 = uVar10;
      }
      local_30.SampleStructMemory = FMemory::Malloc((longlong)(int)uVar7,0);
      FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
                ((FStaticMeshComponentInstanceData *)local_30.SampleStructMemory,
                 (UStaticMeshComponent *)this);
      local_30.OwnsMemory = true;
    }
    if ((FStructOnScope *)__return_storage_ptr__ != &local_30) {
      if (*(code **)(*(longlong *)__return_storage_ptr__ + 0x48) == FStructOnScope::Reset) {
        FStructOnScope::Reset((FStructOnScope *)__return_storage_ptr__);
      }
      else {
        (**(code **)(*(longlong *)__return_storage_ptr__ + 0x48))();
      }
      *(int *)&__return_storage_ptr__->field_0x8 = local_30.ScriptStruct.WeakPtr.ObjectIndex;
      *(int *)&__return_storage_ptr__->field_0xc = local_30.ScriptStruct.WeakPtr.ObjectSerialNumber;
      *(uchar **)&__return_storage_ptr__->field_0x10 = local_30.SampleStructMemory;
      __return_storage_ptr__->field_0x20 = local_30.OwnsMemory;
      local_30.OwnsMemory = false;
      if (*(code **)(local_30._padding_ + 0x48) == FStructOnScope::Reset) {
        FStructOnScope::Reset(&local_30);
      }
      else {
        (**(code **)(local_30._padding_ + 0x48))();
      }
    }
    this_01 = &local_30;
    goto LAB_1479c5985;
  }
  FStructOnScope::FStructOnScope(&local_58);
  local_58._padding_ = (longlong)&___7__TStructOnScope_UFActorComponentInstanceData____6B_;
  FStructOnScope::Destroy(&local_58);
  if (Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshInstanceData,(UObject *)pUVar8,
                         L"SplineMeshInstanceData");
    if (Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1479c56bc;
  }
  else {
LAB_1479c56bc:
    pUVar6 = Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton;
    local_res8 = Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FSplineMeshInstanceData.OuterSingleton
                );
    }
    FWeakObjectPtr::operator=(&local_58.ScriptStruct.WeakPtr,(FObjectPtr)&local_res8);
    iVar9 = (int)*(short *)((longlong)&pUVar6->_padding_ + 4);
    uVar10 = (int)pUVar6->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
    uVar7 = 1;
    if (uVar10 != 0) {
      uVar7 = uVar10;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar7,0);
    local_58.SampleStructMemory = (uchar *)this_00;
    FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
              (this_00,(UStaticMeshComponent *)this);
    *(undefined ***)this_00 = &___7FSplineMeshInstanceData__6B_;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this_00->field_0x168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(this_00 + 1) = uVar5;
    *(double *)&this_00[1].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this_00[1].field_0x18 = uVar5;
    *(double *)&this_00[1].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this_00[1].field_0x30 = uVar5;
    *(double *)&this_00[1].field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this_00[1].field_0x48 = uVar5;
    *(double *)&this_00[1].field_0x50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar4 = (this->SplineParams).StartPos.field0_0x0._s_0.Y;
    *(double *)&this_00->field_0x168 = (this->SplineParams).StartPos.field0_0x0._s_0.X;
    *(double *)(this_00 + 1) = dVar4;
    *(double *)&this_00[1].field_0x8 = (this->SplineParams).StartPos.field0_0x0._s_0.Z;
    dVar4 = (this->SplineParams).EndPos.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x10 = (this->SplineParams).EndPos.field0_0x0._s_0.X;
    *(double *)&this_00[1].field_0x18 = dVar4;
    *(double *)&this_00[1].field_0x20 = (this->SplineParams).EndPos.field0_0x0._s_0.Z;
    dVar4 = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
    *(double *)&this_00[1].field_0x28 = (this->SplineParams).StartTangent.field0_0x0._s_0.X;
    *(double *)&this_00[1].field_0x30 = dVar4;
    *(double *)&this_00[1].field_0x38 = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
    uVar1 = *(undefined4 *)((longlong)&(this->SplineParams).EndTangent.field0_0x0 + 4);
    uVar2 = *(undefined4 *)((longlong)&(this->SplineParams).EndTangent.field0_0x0 + 8);
    uVar3 = *(undefined4 *)((longlong)&(this->SplineParams).EndTangent.field0_0x0 + 0xc);
    *(undefined4 *)&this_00[1].field_0x40 =
         *(undefined4 *)&(this->SplineParams).EndTangent.field0_0x0;
    *(undefined4 *)&this_00[1].field_0x44 = uVar1;
    *(undefined4 *)&this_00[1].field_0x48 = uVar2;
    *(undefined4 *)&this_00[1].field_0x4c = uVar3;
    *(double *)&this_00[1].field_0x50 = (this->SplineParams).EndTangent.field0_0x0._s_0.Z;
    local_58.OwnsMemory = true;
  }
  if ((FStructOnScope *)__return_storage_ptr__ != &local_58) {
    if (*(code **)(*(longlong *)__return_storage_ptr__ + 0x48) == FStructOnScope::Reset) {
      FStructOnScope::Reset((FStructOnScope *)__return_storage_ptr__);
    }
    else {
      (**(code **)(*(longlong *)__return_storage_ptr__ + 0x48))();
    }
    *(int *)&__return_storage_ptr__->field_0x8 = local_58.ScriptStruct.WeakPtr.ObjectIndex;
    *(int *)&__return_storage_ptr__->field_0xc = local_58.ScriptStruct.WeakPtr.ObjectSerialNumber;
    *(uchar **)&__return_storage_ptr__->field_0x10 = local_58.SampleStructMemory;
    __return_storage_ptr__->field_0x20 = local_58.OwnsMemory;
    local_58.OwnsMemory = false;
    if (*(code **)(local_58._padding_ + 0x48) == FStructOnScope::Reset) {
      FStructOnScope::Reset(&local_58);
      this_01 = &local_58;
      goto LAB_1479c5985;
    }
    (**(code **)(local_58._padding_ + 0x48))();
  }
  this_01 = &local_58;
LAB_1479c5985:
  FStructOnScope::~FStructOnScope(this_01);
  return __return_storage_ptr__;
}

// GetEndOffset @ 1479c9490

TVector2<double> * __thiscall
USplineMeshComponent::GetEndOffset
          (USplineMeshComponent *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->SplineParams).EndOffset.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).EndOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetEndPosition @ 1479c94b0

TVector<double> * __thiscall
USplineMeshComponent::GetEndPosition
          (USplineMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SplineParams).EndPos.field0_0x0._s_0.Y;
  dVar1 = (this->SplineParams).EndPos.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).EndPos.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetEndRoll @ 1479c94e0

float __thiscall USplineMeshComponent::GetEndRoll(USplineMeshComponent *this)

{
  return (this->SplineParams).EndRoll;
}

// GetEndScale @ 1479c94f0

TVector2<double> * __thiscall
USplineMeshComponent::GetEndScale
          (USplineMeshComponent *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->SplineParams).EndScale.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).EndScale.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetEndTangent @ 1479c9510

TVector<double> * __thiscall
USplineMeshComponent::GetEndTangent
          (USplineMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SplineParams).EndTangent.field0_0x0._s_0.Y;
  dVar1 = (this->SplineParams).EndTangent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).EndTangent.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetForwardAxis @ 1479c9b70

Type __thiscall USplineMeshComponent::GetForwardAxis(USplineMeshComponent *this)

{
  return (Type)(this->ForwardAxis).Value;
}

// GetMeshId @ 1479cbbf0

void __thiscall USplineMeshComponent::GetMeshId(USplineMeshComponent *this,FString *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  UObject *pUVar3;
  UBodySetup *pUVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  short sVar8;
  ForAnyElementType FVar9;
  int iVar10;
  uchar local_res8 [8];
  ulonglong local_res18;
  float local_res20 [2];
  float local_1c8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1c0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1a8;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 TStack_c0;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  TVector2<double>_u_0 TStack_90;
  TVector<double>_u_0 TStack_80;
  TVector2<double>_u_0 local_68;
  TVector<double>_u_0 local_58;
  TVector2<double>_u_0 TStack_40;
  undefined8 uStack_30;
  
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar3 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    (**(code **)(*(longlong *)&pUVar3[5].field_0x18 + 0x38))(&pUVar3[5].field_0x18,param_1);
  }
  pUVar4 = (this->BodySetup).field0_0x0.DebugPtr;
  if ((pUVar4 != (UBodySetup *)0x0) &&
     ((((pUVar4->BodySetupGuid).D == (this->CachedMeshBodySetupGuid).D &&
       (pUVar4->BodySetupGuid).C == (this->CachedMeshBodySetupGuid).C) &&
      (pUVar4->BodySetupGuid).B == (this->CachedMeshBodySetupGuid).B) &&
      (pUVar4->BodySetupGuid).A == (this->CachedMeshBodySetupGuid).A)) {
    bVar6 = this->field_0x77d;
    local_d8._s_0.X = (this->SplineParams).StartPos.field0_0x0._s_0.X;
    local_d8._s_0.Y = (this->SplineParams).StartPos.field0_0x0._s_0.Y;
    local_d8._s_0.Z = (this->SplineParams).StartPos.field0_0x0._s_0.Z;
    TStack_c0._s_0.X = (this->SplineParams).StartTangent.field0_0x0._s_0.X;
    TStack_c0._s_0.Y = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
    TStack_c0._s_0.Z = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
    local_a8._s_0.X = (this->SplineParams).StartScale.field0_0x0._s_0.X;
    local_a8._s_0.Y = (this->SplineParams).StartScale.field0_0x0._s_0.Y;
    local_98._0_4_ = (uint)(this->SplineParams).StartRoll;
    local_98._4_4_ = (this->SplineParams).EndRoll;
    TStack_90._s_0.X = (this->SplineParams).StartOffset.field0_0x0._s_0.X;
    TStack_90._s_0.Y = (this->SplineParams).StartOffset.field0_0x0._s_0.Y;
    TStack_80._s_0.X = (this->SplineParams).EndPos.field0_0x0._s_0.X;
    TStack_80._s_0.Y = (this->SplineParams).EndPos.field0_0x0._s_0.Y;
    TStack_80._s_0.Z = (this->SplineParams).EndPos.field0_0x0._s_0.Z;
    local_58._s_0.X = (this->SplineParams).EndTangent.field0_0x0._s_0.X;
    local_58._s_0.Y = (this->SplineParams).EndTangent.field0_0x0._s_0.Y;
    local_68._s_0.X = (this->SplineParams).EndScale.field0_0x0._s_0.X;
    local_68._s_0.Y = (this->SplineParams).EndScale.field0_0x0._s_0.Y;
    local_58._s_0.Z = (this->SplineParams).EndTangent.field0_0x0._s_0.Z;
    TStack_40._s_0.X = (this->SplineParams).EndOffset.field0_0x0._s_0.X;
    TStack_40._s_0.Y = (this->SplineParams).EndOffset.field0_0x0._s_0.Y;
    uStack_30 = *(undefined8 *)&(this->SplineParams).NaniteClusterBoundsScale;
    local_res8[0] = (this->ForwardAxis).Value;
    local_f8._s_0.X = (this->SplineUpDir).field0_0x0._s_0.X;
    local_f8._s_0.Y = (this->SplineUpDir).field0_0x0._s_0.Y;
    local_f8._s_0.Z = (this->SplineUpDir).field0_0x0._s_0.Z;
    local_res20[0] = this->SplineBoundaryMin;
    local_1c8[0] = this->SplineBoundaryMax;
    iVar10 = 0;
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x100,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
    local_res18 = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_1a8.Bytes = &local_1c0;
    local_1a8.ArchiveName.ComparisonIndex.Value = 0;
    local_1a8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
    local_1a8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector<double> *)&local_d8._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector<double> *)&TStack_c0._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector2<double> *)&local_a8._s_0);
    if (*(undefined4 **)(local_1a8._padding_ + 8) < *(undefined4 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,&local_98,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,(uint *)&local_98);
      }
    }
    else {
      local_98 = CONCAT44(local_98._4_4_,**(undefined4 **)local_1a8._padding_);
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 4;
    }
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector2<double> *)&TStack_90._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector<double> *)&TStack_80._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector<double> *)&local_58._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector2<double> *)&local_68._s_0);
    if (*(undefined4 **)(local_1a8._padding_ + 8) < *(undefined4 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
                    (&local_1a8,(uint *)((longlong)&local_98 + 4),4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped
                  ((FArchive *)&local_1a8,(uint *)((longlong)&local_98 + 4));
      }
    }
    else {
      local_98 = CONCAT44(**(undefined4 **)local_1a8._padding_,(uint)local_98);
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 4;
    }
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector2<double> *)&TStack_40._s_0);
    UE::Math::operator<<((FArchive *)&local_1a8,(TVector<double> *)&local_f8._s_0);
    if (*(ulonglong *)(local_1a8._padding_ + 8) < *(ulonglong *)local_1a8._padding_ + 4) {
      uVar5 = local_res18 >> 0x20;
      local_res18 = local_res18 & 0xffffffff00000000;
      if ((local_1a8._padding_ & 1U) == 0) {
        local_res18 = CONCAT44((int)uVar5,(uint)(bVar6 >> 1)) & 0xffffffff00000001;
      }
      if (*(code **)(local_1a8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,&local_res18,4);
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x188))();
      }
      if (1 < (uint)local_res18) {
        FArchiveState::SetError((FArchiveState *)&local_1a8);
      }
    }
    else {
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 4;
    }
    if (*(uchar **)(local_1a8._padding_ + 8) < *(uchar **)local_1a8._padding_ + 1) {
      if (*(code **)(local_1a8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_res8,1);
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x188))();
      }
    }
    else {
      local_res8[0] = **(uchar **)local_1a8._padding_;
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 1;
    }
    if (*(float **)(local_1a8._padding_ + 8) < *(float **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_res20,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = **(float **)local_1a8._padding_;
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 4;
    }
    if (*(float **)(local_1a8._padding_ + 8) < *(float **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_1c8,4);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,(uint *)local_1c8);
      }
    }
    else {
      local_1c8[0] = **(float **)local_1a8._padding_;
      *(ulonglong *)local_1a8._padding_ = *(ulonglong *)local_1a8._padding_ + 4;
    }
    FVar9.Data = local_1c0.AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    iVar7 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    ::FString::Reserve(param_1,local_1c0.ArrayNum + 1 + iVar7);
    if (0 < local_1c0.ArrayNum) {
      do {
        FVar1 = *FVar9.Data;
        sVar8 = 0x37;
        bVar6 = (byte)FVar1 >> 4;
        if (bVar6 < 10) {
          sVar8 = 0x30;
        }
        ::FString::AppendChar(param_1,sVar8 + (ushort)bVar6);
        bVar6 = (byte)FVar1 & 0xf;
        sVar8 = 0x37;
        if (bVar6 < 10) {
          sVar8 = 0x30;
        }
        ::FString::AppendChar(param_1,sVar8 + (ushort)bVar6);
        iVar10 = iVar10 + 1;
        FVar9.Data = FVar9.Data + 1;
      } while (iVar10 < local_1c0.ArrayNum);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
  }
  return;
}

// GetMeshId @ 1479cc190

void __thiscall USplineMeshComponent::GetMeshId(USplineMeshComponent *this,FString *param_1)

{
  GetMeshId((USplineMeshComponent *)&this[-1]._padding_,param_1);
  return;
}

// GetNavigationBounds @ 1479cc610

TBox<double> * __thiscall
USplineMeshComponent::GetNavigationBounds
          (USplineMeshComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = *(undefined1 *)&this->_padding_;
  uVar6 = *(undefined1 *)((longlong)&this->_padding_ + 1);
  uVar7 = *(undefined1 *)((longlong)&this->_padding_ + 2);
  uVar8 = *(undefined1 *)((longlong)&this->_padding_ + 3);
  uVar9 = *(undefined1 *)((longlong)&this->_padding_ + 4);
  uVar10 = *(undefined1 *)((longlong)&this->_padding_ + 5);
  uVar11 = *(undefined1 *)((longlong)&this->_padding_ + 6);
  uVar12 = *(undefined1 *)((longlong)&this->_padding_ + 7);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetPhysicsTriMeshData @ 1479ccc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
USplineMeshComponent::GetPhysicsTriMeshData
          (USplineMeshComponent *this,FTriMeshCollisionData *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  float *pfVar16;
  FScriptContainerElement *pFVar17;
  FSplineMeshSceneProxyDesc *this_00;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  float local_260 [8];
  double local_240;
  double local_228;
  FSplineMeshSceneProxyDesc local_220;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_288;
  pUVar5 = (UObject *)this[-1].SplineParams.EndScale.field0_0x0._s_0.Y;
  if (pUVar5 == (UObject *)0x0) {
    bVar14 = false;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pUVar5 = *(UObject **)((longlong)&this[-1].SplineParams.EndScale.field0_0x0 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (**(code **)(*(longlong *)&pUVar5[5].field_0x18 + 0x10))(&pUVar5[5].field_0x18,param_1,param_2);
    cVar3 = *(char *)((longlong)&this->_padding_ + 4);
    local_260[0] = 1.0;
    local_260[1] = 1.0;
    local_260[2] = 1.0;
    if (cVar3 == '\0') {
      pfVar16 = local_260;
    }
    else if (cVar3 == '\x01') {
      pfVar16 = local_260 + 1;
    }
    else {
      if ((cVar3 != '\x02') &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                              ,0x21e,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      pfVar16 = local_260 + 2;
    }
    iVar4 = (param_1->Vertices).ArrayNum;
    pFVar19 = (param_1->Vertices).AllocatorInstance.Data;
    pFVar18 = pFVar19 + 8;
    *pfVar16 = 0.0;
    pFVar1 = pFVar19 + (longlong)iVar4 * 0xc;
    while( true ) {
      if ((param_1->Vertices).ArrayNum != iVar4) {
        local_268[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_268);
      }
      if (pFVar19 == pFVar1) break;
      cVar3 = *(char *)((longlong)&this->_padding_ + 4);
      pFVar17 = pFVar19;
      if (cVar3 != '\0') {
        if (cVar3 == '\x01') {
          pFVar17 = pFVar18 + -4;
        }
        else {
          pFVar17 = pFVar18;
          if ((cVar3 != '\x02') &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x21e,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
        }
      }
      fVar2 = *(float *)pFVar17;
      this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc
                          (&local_220,(USplineMeshComponent *)&this[-1]._padding_);
      FSplineMeshSceneProxyDesc::CalcSliceTransform(this_00,&local_108,fVar2);
      local_240 = (double)(local_260[2] * *(float *)pFVar18);
      dVar12 = local_240 * local_108.Scale3D.ZW.m128d_f64[0];
      dVar13 = local_108.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar10 = local_108.Scale3D.XY.m128d_f64[0] * (double)(local_260[0] * *(float *)pFVar19);
      dVar11 = local_108.Scale3D.XY.m128d_f64[1] * (double)(local_260[1] * *(float *)(pFVar18 + -4))
      ;
      uVar28 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar26 = local_108.Rotation.XY.m128d_f64[1];
      dVar9 = local_108.Rotation.ZW.m128d_f64[1];
      dVar8 = local_108.Rotation.ZW.m128d_f64[0];
      auVar29._8_4_ = SUB84(dVar11,0);
      auVar29._0_8_ = dVar10;
      auVar29._12_4_ = uVar28;
      auVar27._8_4_ = SUB84(dVar11,0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar28;
      auVar30._0_8_ = auVar29._8_8_ * local_108.Rotation.XY.m128d_f64[0] - dVar26 * dVar10;
      auVar30._8_8_ = dVar12 * dVar26 - dVar8 * dVar11;
      auVar20._8_4_ = SUB84(dVar13,0);
      auVar20._0_8_ = dVar12;
      auVar20._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar20 = blendpd(auVar27,auVar20,2);
      auVar27 = blendpd((undefined1  [16])local_108.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_108.Rotation.ZW.m128d_f64,2);
      auVar21._0_8_ = auVar20._0_8_ * dVar8 - auVar27._0_8_ * dVar12;
      auVar21._8_8_ = auVar20._8_8_ * dVar9 - auVar27._8_8_ * dVar13;
      auVar20 = blendpd(auVar30,auVar21,2);
      dVar13 = auVar30._8_8_ + auVar30._8_8_;
      dVar7 = auVar21._0_8_ + auVar21._0_8_;
      uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar31._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar31._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar24._8_4_ = SUB84(dVar7,0);
      auVar24._0_8_ = dVar13;
      auVar24._12_4_ = uVar28;
      auVar22._8_4_ = SUB84(dVar7,0);
      auVar22._0_8_ = dVar13;
      auVar22._12_4_ = uVar28;
      auVar20 = blendpd(auVar22,auVar31,2);
      auVar25._0_8_ = auVar24._8_8_ * local_108.Rotation.XY.m128d_f64[0] - dVar13 * dVar26;
      auVar25._8_8_ = auVar31._0_8_ * dVar26 - dVar7 * dVar8;
      auVar23._0_8_ = auVar20._0_8_ * dVar8 - auVar31._0_8_ * auVar27._0_8_;
      auVar23._8_8_ = auVar20._8_8_ * dVar9 - auVar31._8_8_ * auVar27._8_8_;
      auVar20 = blendpd(auVar25,auVar23,2);
      *(float *)pFVar19 =
           (float)(dVar13 * dVar9 + dVar10 + auVar25._8_8_ + local_108.Translation.XY.m128d_f64[0]);
      local_228 = auVar31._0_8_ * dVar9 + dVar12 + auVar20._0_8_ +
                  local_108.Translation.ZW.m128d_f64[0];
      *(float *)(pFVar18 + -4) =
           (float)(dVar7 * dVar9 + dVar11 + auVar23._0_8_ + local_108.Translation.XY.m128d_f64[1]);
      pFVar19 = pFVar19 + 0xc;
      *(float *)pFVar18 = (float)local_228;
      pFVar18 = pFVar18 + 0xc;
    }
    param_1->bDeformableMesh = 1;
    bVar14 = true;
  }
  return bVar14;
}

// GetPrivateStaticClass @ 1479cdf80

UClass * __cdecl USplineMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMeshComponent",
               &Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton,
               StaticRegisterNativesUSplineMeshComponent,0x780,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USplineMeshComponent>,
               InternalVTableHelperCtorCaller<USplineMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USplineMeshComponent.InnerSingleton;
}

// GetSocketTransform @ 1479d0bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
USplineMeshComponent::GetSocketTransform
          (USplineMeshComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  TVector<double> *pTVar1;
  double dVar2;
  uchar uVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  UStaticMeshSocket *pUVar12;
  TTransform<double> *pTVar13;
  TQuat<double> *pTVar14;
  FSplineMeshSceneProxyDesc *this_00;
  TVector<double> *pTVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_408 [32];
  double local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  double dStack_3d8;
  double local_3d0;
  TVector<double> *local_3c8;
  double *local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  TQuat<double> local_398;
  FSplineMeshSceneProxyDesc local_378;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_408;
  if (param_1 != (FName)0x0) {
    pUVar12 = UStaticMeshComponent::GetSocketByName((UStaticMeshComponent *)this,param_1);
    if (pUVar12 != (UStaticMeshSocket *)0x0) {
      uVar3 = (this->ForwardAxis).Value;
      if (uVar3 == '\0') {
        uVar16 = 0;
        uVar17 = 0;
        dStack_3d8 = ___xmm_3ff00000000000003ff0000000000000;
        local_3d0 = _UNK_150689688;
      }
      else {
        uVar16 = (undefined4)__real_3ff0000000000000;
        uVar17 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        dStack_3d8 = ___xmm_3ff00000000000000000000000000000;
        local_3d0 = _UNK_15061cbc8;
        if ((uVar3 != '\x01') &&
           (dStack_3d8 = ___xmm_00000000000000003ff0000000000000, local_3d0 = _UNK_150689518,
           uVar3 != '\x02')) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                              ,0x22e,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TTransform<double> *)(*pcVar5)();
            return pTVar13;
          }
          local_3e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uStack_3dc = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          dStack_3d8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          local_3d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        }
      }
      local_3c8 = (TVector<double> *)((longlong)&(pUVar12->RelativeLocation).field0_0x0 + 8);
      pTVar1 = (TVector<double> *)((longlong)&(pUVar12->RelativeLocation).field0_0x0 + 0x10);
      dVar9 = dStack_3d8 * (local_3c8->field0_0x0)._s_0.X;
      dVar10 = local_3d0 * (pTVar1->field0_0x0)._s_0.X;
      dVar2 = (pUVar12->RelativeLocation).field0_0x0._s_0.X;
      pTVar14 = UE::Math::TRotator<double>::Quaternion(&pUVar12->RelativeRotation,&local_398);
      uVar3 = (this->ForwardAxis).Value;
      local_3b8 = pTVar14->X;
      dStack_3b0 = pTVar14->Y;
      local_3a8 = pTVar14->Z;
      dStack_3a0 = pTVar14->W;
      local_268.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
      local_268.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar17,uVar16) * dVar2;
      local_268.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_268.Translation.ZW.m128d_f64[1] = 0.0;
      local_268.Scale3D.ZW.m128d_f64[0] = (pUVar12->RelativeScale).field0_0x0._s_0.Z;
      local_268.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_268.Scale3D.XY.m128d_f64[0] = (pUVar12->RelativeScale).field0_0x0._s_0.X;
      local_268.Scale3D.XY.m128d_f64[1] = (pUVar12->RelativeScale).field0_0x0._s_0.Y;
      local_268.Rotation.XY.m128d_f64[0] = local_3b8;
      local_268.Rotation.XY.m128d_f64[1] = dStack_3b0;
      local_268.Rotation.ZW.m128d_f64[0] = local_3a8;
      local_268.Rotation.ZW.m128d_f64[1] = dStack_3a0;
      local_268.Translation.ZW.m128d_f64[0] = dVar10;
      if (uVar3 == '\0') {
        pTVar15 = &pUVar12->RelativeLocation;
      }
      else {
        pTVar15 = local_3c8;
        if (((uVar3 != '\x01') && (pTVar15 = pTVar1, uVar3 != '\x02')) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                ,0x1ed,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TTransform<double> *)(*pcVar5)();
          return pTVar13;
        }
      }
      local_3e8 = *(double *)&pTVar15->field0_0x0;
      uVar16 = SUB84(local_3e8,0);
      uVar17 = (undefined4)((ulonglong)local_3e8 >> 0x20);
      if ((local_3e8 < __real_c7efffffe0000000) || (__real_47efffffe0000000 < local_3e8)) {
        local_3c0 = &local_3e8;
        `UE::SplineMesh::RealToFloatChecked'::__l2::<lambda_1>::operator()(&local_3c0);
        uVar16 = SUB84(local_3e8,0);
        uVar17 = (undefined4)((ulonglong)local_3e8 >> 0x20);
      }
      this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_378,this);
      FSplineMeshSceneProxyDesc::CalcSliceTransform
                (this_00,&local_e8,(float)(double)CONCAT44(uVar17,uVar16));
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_1a8,&local_268,&local_e8);
      dVar2 = local_1a8.Translation.XY.m128d_f64[0];
      dVar9 = local_1a8.Translation.XY.m128d_f64[1];
      local_268.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
      local_268.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
      local_268.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
      local_268.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
      local_268.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
      local_268.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
      local_268.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
      local_268.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
      local_268.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
      local_268.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
      local_268.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
      local_268.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
      if (param_2 == RTS_World) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar6;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar7;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar8;
        fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar6;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar7;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar8;
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar6;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar7;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar8;
        UE::Math::TTransform<double>::Multiply
                  (__return_storage_ptr__,&local_268,(TTransform<double> *)&this->_padding_);
        return __return_storage_ptr__;
      }
      if (param_2 == RTS_Actor) {
        lVar4 = this->_padding_;
        if (lVar4 != 0) {
          local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_148.Rotation.XY.m128d_f64[1] = (double)fVar6;
          local_148.Rotation.ZW.m128d_f64[0] = (double)fVar7;
          local_148.Rotation.ZW.m128d_f64[1] = (double)fVar8;
          local_148.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_148.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_148.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_148.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_148.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_148,&local_268,(TTransform<double> *)&this->_padding_);
          lVar4 = *(longlong *)(lVar4 + 0x1b8);
          if (lVar4 != 0) {
            UE::Math::TTransform<double>::GetRelativeTransform
                      (&local_148,__return_storage_ptr__,(TTransform<double> *)(lVar4 + 0x1f0));
            return __return_storage_ptr__;
          }
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&local_148,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
          return __return_storage_ptr__;
        }
      }
      else if (param_2 == RTS_Component) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
             local_1a8.Translation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
             local_1a8.Translation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
        return __return_storage_ptr__;
      }
    }
    pUVar12 = UStaticMeshComponent::GetSocketByName((UStaticMeshComponent *)this,param_1);
    if (pUVar12 != (UStaticMeshSocket *)0x0) {
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_208.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      bVar11 = UStaticMeshSocket::GetSocketTransform
                         (pUVar12,&local_208,(UStaticMeshComponent *)this);
      if (bVar11) {
        if (param_2 == RTS_World) {
          (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
          (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
          (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
          (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
          (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
               local_208.Translation.XY.m128d_f64[0];
          (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
               local_208.Translation.XY.m128d_f64[1];
          (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
               local_208.Translation.ZW.m128d_f64[0];
          (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
               local_208.Translation.ZW.m128d_f64[1];
          (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
          (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
          (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
          (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
          return __return_storage_ptr__;
        }
        if (param_2 == RTS_Actor) {
          if (this->_padding_ != 0) {
            lVar4 = *(longlong *)(this->_padding_ + 0x1b8);
            if (lVar4 != 0) {
              UE::Math::TTransform<double>::GetRelativeTransform
                        (&local_208,__return_storage_ptr__,(TTransform<double> *)(lVar4 + 0x1f0));
              return __return_storage_ptr__;
            }
            UE::Math::TTransform<double>::GetRelativeTransform
                      (&local_208,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
            return __return_storage_ptr__;
          }
        }
        else if (param_2 == RTS_Component) {
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&local_208,__return_storage_ptr__,(TTransform<double> *)&this->_padding_);
          return __return_storage_ptr__;
        }
      }
    }
  }
  USceneComponent::GetSocketTransform
            ((USceneComponent *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetSplineUpDir @ 1479d1a70

TVector<double> * __thiscall
USplineMeshComponent::GetSplineUpDir
          (USplineMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SplineUpDir).field0_0x0._s_0.Y;
  dVar1 = (this->SplineUpDir).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineUpDir).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetStartOffset @ 1479d1aa0

TVector2<double> * __thiscall
USplineMeshComponent::GetStartOffset
          (USplineMeshComponent *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->SplineParams).StartOffset.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).StartOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetStartPosition @ 1479d1ac0

TVector<double> * __thiscall
USplineMeshComponent::GetStartPosition
          (USplineMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SplineParams).StartPos.field0_0x0._s_0.Y;
  dVar1 = (this->SplineParams).StartPos.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).StartPos.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetStartRoll @ 1479d1af0

float __thiscall USplineMeshComponent::GetStartRoll(USplineMeshComponent *this)

{
  return (this->SplineParams).StartRoll;
}

// GetStartScale @ 1479d1b00

TVector2<double> * __thiscall
USplineMeshComponent::GetStartScale
          (USplineMeshComponent *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->SplineParams).StartScale.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).StartScale.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetStartTangent @ 1479d1b20

TVector<double> * __thiscall
USplineMeshComponent::GetStartTangent
          (USplineMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
  dVar1 = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SplineParams).StartTangent.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetTextureStreamingTransformScale @ 1479d3160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall USplineMeshComponent::GetTextureStreamingTransformScale(USplineMeshComponent *this)

{
  double dVar1;
  UStaticMesh *this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  TBoxSphereBounds<double,double> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  double local_148;
  double *local_140;
  TBoxSphereBounds<double,double> local_138;
  TMatrix<double> local_f8;
  
  dVar5 = __real_3ff0000000000000;
  local_148 = __real_3ff0000000000000;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    this_00 = (UStaticMesh *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pTVar6 = UStaticMesh::GetBounds(this_00,&local_138);
    UE::Math::TTransform<double>::ToMatrixWithScale
              ((TTransform<double> *)&this->_padding_,&local_f8);
    auVar16 = *(undefined1 (*) [16])&(pTVar6->BoxExtent).field0_0x0;
    dVar1 = (pTVar6->BoxExtent).field0_0x0._s_0.Z;
    dVar7 = auVar16._0_8_;
    dVar4 = auVar16._8_8_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = auVar16._4_4_;
    local_f8.M[0][1] = auVar17._8_8_ * local_f8.M[0][1];
    auVar11._8_4_ = SUB84(dVar1,0);
    auVar11._0_8_ = dVar1;
    auVar11._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_f8.M[2][1] = auVar11._8_8_ * local_f8.M[2][1];
    auVar16._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar7 * local_f8.M[0][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar7 * local_f8.M[0][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar16._8_4_ = SUB84(local_f8.M[0][1],0) & _UNK_15061cc88;
    auVar16._12_4_ = (uint)((ulonglong)local_f8.M[0][1] >> 0x20) & _UNK_15061cc8c;
    auVar12._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar1 * local_f8.M[2][0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1 * local_f8.M[2][0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar12._8_4_ = SUB84(local_f8.M[2][1],0) & _UNK_15061cc88;
    auVar12._12_4_ = (uint)((ulonglong)local_f8.M[2][1] >> 0x20) & _UNK_15061cc8c;
    local_138.BoxExtent.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar4 * local_f8.M[1][2]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar4 * local_f8.M[1][2],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)(dVar7 * local_f8.M[0][2]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar7 * local_f8.M[0][2],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)(dVar1 * local_f8.M[2][2]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1 * local_f8.M[2][2],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar4 * local_f8.M[1][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4 * local_f8.M[1][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar16._0_8_ +
            auVar12._0_8_;
    dVar4 = (double)CONCAT44((uint)((ulonglong)(dVar4 * local_f8.M[1][1]) >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar4 * local_f8.M[1][1],0) & _UNK_15061cc88) + auVar16._8_8_ +
            auVar12._8_8_;
    dVar1 = dVar5;
    if ((dVar5 <= dVar7) && (dVar1 = (double)this->_padding_ / dVar7, dVar1 <= dVar5)) {
      dVar1 = dVar5;
    }
    dVar7 = dVar1;
    if ((dVar5 <= dVar4) && (dVar7 = (double)this->_padding_ / dVar4, dVar7 <= dVar1)) {
      dVar7 = dVar1;
    }
    local_148 = dVar7;
    if ((dVar5 <= local_138.BoxExtent.field0_0x0._s_0.Z) &&
       (local_148 = (double)this->_padding_ / local_138.BoxExtent.field0_0x0._s_0.Z,
       local_148 <= dVar7)) {
      local_148 = dVar7;
    }
  }
  if ((local_148 < __real_c7efffffe0000000) || (__real_47efffffe0000000 < local_148)) {
    local_140 = &local_148;
    `UE::SplineMesh::RealToFloatChecked'::__l2::<lambda_1>::operator()(&local_140);
  }
  uVar22 = (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = *(uint *)((longlong)&this->_padding_ + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)this->_padding_ & _UNK_15061cc88;
  uVar25 = *(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c;
  uVar18 = (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = *(uint *)((longlong)&this->_padding_ + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)this->_padding_ & _UNK_15061cc88;
  uVar21 = *(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c;
  auVar8._4_4_ = uVar23;
  auVar8._0_4_ = uVar22;
  auVar8._8_4_ = uVar24;
  auVar8._12_4_ = uVar25;
  auVar15._4_4_ = uVar23;
  auVar15._0_4_ = uVar22;
  auVar15._8_4_ = uVar24;
  auVar15._12_4_ = uVar25;
  auVar9._12_4_ = uVar19;
  auVar9._8_4_ = uVar18;
  auVar9._0_8_ = auVar8._8_8_;
  auVar13._4_4_ = uVar19;
  auVar13._0_4_ = uVar18;
  auVar13._12_4_ = uVar23;
  auVar13._8_4_ = uVar22;
  auVar16 = maxpd(auVar15,auVar9);
  auVar10._4_4_ = uVar23;
  auVar10._0_4_ = uVar22;
  auVar10._8_4_ = uVar24;
  auVar10._12_4_ = uVar25;
  auVar3._4_4_ = uVar25;
  auVar3._0_4_ = uVar24;
  auVar17 = maxpd(auVar16,auVar13);
  auVar2._4_4_ = uVar19;
  auVar2._0_4_ = uVar18;
  auVar2._8_4_ = uVar20;
  auVar2._12_4_ = uVar21;
  auVar16 = blendpd(auVar10,auVar2,2);
  auVar14._4_4_ = uVar19;
  auVar14._0_4_ = uVar18;
  auVar14._8_4_ = uVar20;
  auVar14._12_4_ = uVar21;
  auVar16 = maxpd(auVar14,auVar16);
  auVar3._8_4_ = uVar20;
  auVar3._12_4_ = uVar21;
  maxpd(auVar16,auVar3);
  return (float)auVar17._0_8_ * (float)local_148;
}

// GetTriMeshSizeEstimates @ 1479d3a00

bool __thiscall
USplineMeshComponent::GetTriMeshSizeEstimates
          (USplineMeshComponent *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  UObject *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (UObject *)this[-1].SplineParams.EndScale.field0_0x0._s_0.Y;
  if (pUVar1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar1 = *(UObject **)((longlong)&this[-1].SplineParams.EndScale.field0_0x0 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001479d3a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)&pUVar1[5].field_0x18 + 0x18))
                      (&pUVar1[5].field_0x18,param_1,param_2);
    return (bool)uVar2;
  }
  return false;
}

// GetVirtualTextureMainPassMaxDrawDistance @ 1479d5290

float __thiscall
USplineMeshComponent::GetVirtualTextureMainPassMaxDrawDistance(USplineMeshComponent *this)

{
  return this->VirtualTextureMainPassMaxDrawDistance;
}

// InitVertexFactory @ 1479d83d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USplineMeshComponent::InitVertexFactory
          (USplineMeshComponent *this,int param_1,FColorVertexBuffer *param_2)

{
  byte bVar1;
  UStaticMesh *pUVar2;
  UWorld *pUVar3;
  
  pUVar3 = (UWorld *)this->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar1 = (pUVar3->FeatureLevel).Value;
  pUVar2 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FSplineMeshSceneProxyDesc::InitVertexFactory(pUVar2,(uint)bVar1,param_1,param_2);
  return;
}

// OnCreatePhysicsState @ 1479db880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USplineMeshComponent::OnCreatePhysicsState(USplineMeshComponent *this)

{
  byte bVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  pUVar2 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UObject *)0x0) {
LAB_1479db914:
      uVar7 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      goto LAB_1479db91d;
    }
    UE::GC::MarkAsReachable(pUVar2);
  }
  else if (pUVar2 == (UObject *)0x0) goto LAB_1479db914;
  pUVar2 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  lVar3 = *(longlong *)&pUVar2[0xb].field_0x20;
  uVar10 = *(uint *)(lVar3 + 0x108);
  uVar9 = *(uint *)(lVar3 + 0x10c);
  uVar8 = *(uint *)(lVar3 + 0x110);
  uVar7 = *(uint *)(lVar3 + 0x114);
LAB_1479db91d:
  if (((uVar7 != (this->CachedMeshBodySetupGuid).D || uVar8 != (this->CachedMeshBodySetupGuid).C) ||
      uVar9 != (this->CachedMeshBodySetupGuid).B) || uVar10 != (this->CachedMeshBodySetupGuid).A) {
    RecreateCollision(this);
  }
  UPrimitiveComponent::OnCreatePhysicsState((UPrimitiveComponent *)this);
  cVar5 = (**(code **)(this->_padding_ + 0x4e0))(this);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  lVar3 = this->_padding_;
  *(byte *)((longlong)&this->_padding_ + 2) = (cVar5 << 6 ^ bVar1) & 0x40 ^ bVar1;
  if ((lVar3 != 0) && ((this->_padding_ & 0x18) == 8)) {
    return;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                       ,0x3c1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  return;
}

// PropagateSplineDeformationToMesh @ 1479df260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USplineMeshComponent::PropagateSplineDeformationToMesh
          (USplineMeshComponent *this,FMeshDescription *param_1)

{
  uchar uVar1;
  int iVar2;
  FMeshAttributeArraySetBase *pFVar3;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  USplineMeshComponent *pUVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  FMeshElementContainer *pFVar16;
  FAttributesSetEntry *pFVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  TArrayView<FVertexInstanceID,int> *pTVar19;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar20;
  TVector<float> *pTVar21;
  FSplineMeshSceneProxyDesc *pFVar22;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar23;
  FMeshAttributeArraySetBase *pFVar24;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar25;
  uint uVar26;
  int iVar27;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  float fVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auStack_638 [32];
  longlong local_618;
  longlong local_610;
  int local_608;
  FVertexInstanceID *local_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  int local_5e0;
  USplineMeshComponent *local_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  FMeshDescription *local_5a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_580;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_560;
  ulonglong local_558;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_550;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_530;
  double local_510;
  longlong local_508;
  FMeshElementContainer *pFStack_500;
  ulonglong local_4f8;
  undefined8 uStack_4f0;
  longlong local_4e8;
  FMeshElementContainer *pFStack_4e0;
  uint local_4d8;
  int iStack_4d4;
  int iStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8 [16];
  double local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined1 local_480 [16];
  double local_470;
  double local_468;
  double dStack_460;
  double local_458;
  undefined1 local_450 [16];
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  TArrayView<FVertexInstanceID,int> local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  FSplineMeshSceneProxyDesc local_3d0;
  FSplineMeshSceneProxyDesc local_2c0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_638;
  local_5d8 = this;
  local_5a8 = param_1;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar16->Attributes,MeshAttribute::Vertex::Position);
  pTVar23 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  if (((pFVar17 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar17->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = pTVar23;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar17 == (FAttributesSetEntry *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar17->Ptr).Ptr,
      *(uint *)&this_02->_padding_ != 1)) || (*(uint *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = pTVar23;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar17 == (FAttributesSetEntry *)0x0) ||
      (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar17->Ptr).Ptr,
      *(uint *)&this_00->_padding_ != 1)) || (*(uint *)((longlong)&this_00->_padding_ + 4) != 1)) {
    this_00 = pTVar23;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar17 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar17 == (FAttributesSetEntry *)0x0) ||
      (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar17->Ptr).Ptr,
      *(uint *)&pTVar28->_padding_ != 3)) || (*(uint *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
    pTVar28 = pTVar23;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  local_5a0._padding_._0_4_ = 0;
  local_5a0._padding_._4_4_ = 1;
  local_5a0.UnvisitedBitMask = 0xffffffff;
  local_5a0.CurrentBitIndex = 0;
  local_5a0.BaseBitIndex = 0;
  local_5a0.Array = &pFVar16->BitArray;
  if ((pFVar16->BitArray).NumBits != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5a0);
  }
  local_550._padding_ = CONCAT44(local_5a0._padding_._4_4_,(undefined4)local_5a0._padding_);
  local_550.CurrentBitIndex = local_5a0.CurrentBitIndex;
  local_550.UnvisitedBitMask = local_5a0.UnvisitedBitMask;
  local_550._28_4_ = local_5a0._28_4_;
  local_550.BaseBitIndex = local_5a0.BaseBitIndex;
  local_550.Array = local_5a0.Array;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_410,&pFVar16->BitArray,(pFVar16->BitArray).NumBits);
  uVar10 = __real_bf800000;
  uVar73 = __real_3f800000;
  dVar65 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  local_4f8._0_4_ = pTVar18->UnvisitedBitMask;
  local_4f8._4_4_ = pTVar18->CurrentBitIndex;
  uStack_4f0 = *(undefined8 *)&pTVar18->BaseBitIndex;
  local_508 = pTVar18->_padding_;
  pFStack_500 = (FMeshElementContainer *)pTVar18->Array;
  local_558 = local_4f8 >> 0x20;
  do {
    if ((local_550.CurrentBitIndex == (int)local_558) &&
       ((FMeshElementContainer *)local_550.Array == pFStack_500)) {
      pFVar16 = FMeshElementChannels::Get(param_1->VertexElements,0);
      local_580._padding_._0_4_ = 0;
      local_580._padding_._4_4_ = 1;
      local_580.UnvisitedBitMask = 0xffffffff;
      local_580.CurrentBitIndex = 0;
      local_580.BaseBitIndex = 0;
      local_580.Array = &pFVar16->BitArray;
      if ((pFVar16->BitArray).NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_580);
      }
      local_530._padding_ = CONCAT44(local_580._padding_._4_4_,(undefined4)local_580._padding_);
      local_530.CurrentBitIndex = local_580.CurrentBitIndex;
      local_530.UnvisitedBitMask = local_580.UnvisitedBitMask;
      local_530._28_4_ = local_580._28_4_;
      local_530.BaseBitIndex = local_580.BaseBitIndex;
      local_530.Array = local_580.Array;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_3f0,&pFVar16->BitArray,(pFVar16->BitArray).NumBits);
      pUVar11 = local_5d8;
      local_4d8 = pTVar18->UnvisitedBitMask;
      iVar2 = pTVar18->CurrentBitIndex;
      iStack_4d0 = pTVar18->BaseBitIndex;
      uStack_4cc = *(undefined4 *)&pTVar18->field_0x1c;
      local_4e8 = pTVar18->_padding_;
      pFStack_4e0 = (FMeshElementContainer *)pTVar18->Array;
      iStack_4d4 = iVar2;
      do {
        if ((local_530.CurrentBitIndex == iVar2) &&
           ((FMeshElementContainer *)local_530.Array == pFStack_4e0)) {
          return;
        }
        uVar1 = (pUVar11->ForwardAxis).Value;
        iVar27 = -1;
        if (local_530.CurrentBitIndex <
            ((TBitArray<FDefaultBitArrayAllocator> *)&(local_530.Array)->AllocatorInstance)->NumBits
           ) {
          iVar27 = local_530.CurrentBitIndex;
        }
        pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
        pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar27)
        ;
        if (uVar1 != '\0') {
          if (uVar1 == '\x01') {
            pTVar21 = (TVector<float> *)((longlong)&pTVar21->field0_0x0 + 4);
          }
          else {
            if ((uVar1 != '\x02') &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                    ,0x21e,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar21 = (TVector<float> *)((longlong)&pTVar21->field0_0x0 + 8);
          }
        }
        fVar59 = (pTVar21->field0_0x0)._s_0.X;
        pFVar22 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_2c0,pUVar11);
        FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar22,&local_148,fVar59);
        (pTVar21->field0_0x0)._s_0.X = 0.0;
        pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
        pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar27)
        ;
        dVar29 = local_148.Rotation.XY.m128d_f64[1];
        dVar6 = (double)(pTVar21->field0_0x0)._s_0.X;
        dVar64 = (double)(pTVar21->field0_0x0)._s_0.Y;
        local_440 = (double)(pTVar21->field0_0x0)._s_0.Z;
        dVar65 = local_148.Scale3D.XY.m128d_f64[0] * dVar6;
        dVar46 = local_148.Scale3D.XY.m128d_f64[1] * dVar64;
        uVar73 = (undefined4)((ulonglong)dVar46 >> 0x20);
        local_450._8_4_ = SUB84(dVar64,0);
        local_450._0_8_ = dVar6;
        local_450._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
        dVar6 = local_440 * local_148.Scale3D.ZW.m128d_f64[0];
        dVar64 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar55 = local_148.Rotation.ZW.m128d_f64[0];
        dVar60 = local_148.Rotation.ZW.m128d_f64[1];
        auVar80._8_4_ = SUB84(dVar46,0);
        auVar80._0_8_ = dVar65;
        auVar80._12_4_ = uVar73;
        auVar56._8_4_ = SUB84(dVar46,0);
        auVar56._0_8_ = dVar65;
        auVar56._12_4_ = uVar73;
        auVar31._8_4_ = SUB84(dVar64,0);
        auVar31._0_8_ = dVar6;
        auVar31._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
        auVar31 = blendpd(auVar56,auVar31,2);
        auVar56 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
        auVar81._0_8_ = auVar80._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar29 * dVar65;
        auVar81._8_8_ = dVar6 * dVar29 - dVar55 * dVar46;
        auVar71._8_4_ = SUB84(auVar81._8_8_,0);
        auVar71._0_8_ = auVar81._0_8_;
        auVar71._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
        auVar43._0_8_ = auVar31._0_8_ * dVar55 - auVar56._0_8_ * dVar6;
        auVar43._8_8_ = auVar31._8_8_ * dVar60 - auVar56._8_8_ * dVar64;
        auVar31 = blendpd(auVar81,auVar43,2);
        dVar64 = auVar71._8_8_ + auVar71._8_8_;
        dVar63 = auVar43._0_8_ + auVar43._0_8_;
        auVar82._0_8_ = auVar31._0_8_ + auVar31._0_8_;
        auVar82._8_8_ = auVar31._8_8_ + auVar31._8_8_;
        auVar53._8_4_ = SUB84(dVar63,0);
        auVar53._0_8_ = dVar64;
        uVar73 = (undefined4)((ulonglong)dVar63 >> 0x20);
        auVar53._12_4_ = uVar73;
        auVar44._8_4_ = SUB84(dVar63,0);
        auVar44._0_8_ = dVar64;
        auVar44._12_4_ = uVar73;
        auVar31 = blendpd(auVar44,auVar82,2);
        auVar54._0_8_ = auVar53._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar64 * dVar29;
        auVar54._8_8_ = auVar82._0_8_ * dVar29 - dVar63 * dVar55;
        auVar45._0_8_ = auVar31._0_8_ * dVar55 - auVar82._0_8_ * auVar56._0_8_;
        auVar45._8_8_ = auVar31._8_8_ * dVar60 - auVar82._8_8_ * auVar56._8_8_;
        auVar31 = blendpd(auVar54,auVar45,2);
        dVar65 = dVar64 * dVar60 + dVar65 + auVar54._8_8_ + local_148.Translation.XY.m128d_f64[0];
        dStack_430 = dVar63 * dVar60 + dVar46 + auVar45._0_8_ +
                     local_148.Translation.XY.m128d_f64[1];
        local_428 = auVar82._0_8_ * dVar60 + dVar6 + auVar31._0_8_ +
                    local_148.Translation.ZW.m128d_f64[0];
        fVar62 = (float)dStack_430;
        fVar59 = (float)local_428;
        local_438 = dVar65;
        pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
        pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar27)
        ;
        (pTVar21->field0_0x0)._s_0.X = (float)dVar65;
        (pTVar21->field0_0x0)._s_0.Y = fVar62;
        (pTVar21->field0_0x0)._s_0.Z = fVar59;
        local_530.UnvisitedBitMask = local_530.UnvisitedBitMask & ~local_530._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_530);
      } while( true );
    }
    local_560 = &param_1->TriangleVertexInstances;
    local_5e0 = -1;
    if (local_550.CurrentBitIndex <
        ((TBitArray<FDefaultBitArrayAllocator> *)&(local_550.Array)->AllocatorInstance)->NumBits) {
      local_5e0 = local_550.CurrentBitIndex;
    }
    local_5b0 = 0;
    local_5b8 = 0;
    local_608 = 0;
    do {
      lVar13 = local_5b0;
      lVar12 = local_5b8;
      iVar2 = local_608;
      pTVar19 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                          (local_560,&local_420,local_5e0);
      local_600 = pTVar19->DataPtr;
      if ((pTVar19->ArrayNum <= iVar2) &&
         (local_618 = lVar12, local_610 = (longlong)pTVar19->ArrayNum,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = *(int *)(&local_600->field_0x0 + lVar13);
      pFVar3 = (local_5a8->VertexInstanceVertices).ArrayPtr;
      if ((int)pFVar3[2].Type < 1) {
        local_618 = 0;
        local_610 = (longlong)(int)pFVar3[2].Type;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar24 = pFVar3 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
      }
      uVar26 = iVar2 * pFVar24->NumElements;
      uVar15 = 0;
      if ((int)uVar26 < (int)pFVar24->Type) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_618 = (longlong)(int)uVar26;
        local_610 = (longlong)(int)pFVar24->Type;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar27 = *(int *)(pFVar24->_padding_ + (longlong)(int)uVar26 * 4);
      local_600 = (FVertexInstanceID *)
                  CONCAT44(local_600._4_4_,(uint)(local_5d8->ForwardAxis).Value);
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar27);
      if ((int)local_600 != 0) {
        if ((int)local_600 == 1) {
          pTVar21 = (TVector<float> *)((longlong)&pTVar21->field0_0x0 + 4);
        }
        else {
          if (((int)local_600 != 2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x21e,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar21 = (TVector<float> *)((longlong)&pTVar21->field0_0x0 + 8);
        }
      }
      fVar59 = (pTVar21->field0_0x0)._s_0.X;
      pFVar22 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_3d0,local_5d8);
      FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar22,&local_1a8,fVar59);
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      dVar63 = (double)(pTVar21->field0_0x0)._s_0.X;
      dVar46 = (double)(pTVar21->field0_0x0)._s_0.Y;
      dVar60 = (double)(pTVar21->field0_0x0)._s_0.Z;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      dVar29 = (double)(pTVar21->field0_0x0)._s_0.Y;
      dVar64 = (double)(pTVar21->field0_0x0)._s_0.Z;
      dVar55 = (double)(pTVar21->field0_0x0)._s_0.X;
      local_5f8 = dVar29 * dVar60 - dVar64 * dVar46;
      local_5e8 = dVar55 * dVar46 - dVar29 * dVar63;
      dStack_5f0 = dVar64 * dVar63 - dVar55 * dVar60;
      dVar46 = dStack_5f0 * dStack_5f0 + local_5f8 * local_5f8 + local_5e8 * local_5e8;
      if (dVar46 != dVar6) {
        if (dVar65 <= dVar46) {
          local_510 = dVar6 / SQRT(dVar46);
          local_5f8 = local_510 * local_5f8;
          dStack_5f0 = local_510 * dStack_5f0;
          local_5e8 = local_510 * local_5e8;
        }
        else {
          local_5e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_5f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_5f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      dVar64 = dStack_5f0;
      dVar46 = local_5f8;
      iVar27 = (pTVar28->ArrayForChannels).ArrayNum;
      if (iVar27 < 1) {
        local_618 = 0;
        local_610 = (longlong)iVar27;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar4 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar28->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
      local_600 = (FVertexInstanceID *)&pTVar28->ArrayForChannels;
      if (pTVar4 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        local_600 = (FVertexInstanceID *)pTVar4;
      }
      uVar26 = iVar2 * *(int *)((((TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                                   *)local_600)->AllocatorInstance).InlineData + 0x10);
      iVar27 = *(int *)((((TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                           *)local_600)->AllocatorInstance).InlineData + 8);
      uVar15 = 0;
      if ((int)uVar26 < iVar27) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_618 = (longlong)(int)uVar26;
        local_610 = (longlong)iVar27;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dStack_5c8 = (double)*(float *)(*(longlong *)
                                       ((ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>
                                         *)&local_600->field_0x0)->InlineData +
                                     (longlong)(int)uVar26 * 4);
      local_5c0 = dStack_5c8 * local_5e8;
      local_5d0 = dStack_5c8 * dVar46;
      dStack_5c8 = dStack_5c8 * dVar64;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      dVar60 = local_1a8.Rotation.XY.m128d_f64[1];
      dVar46 = (double)(pTVar21->field0_0x0)._s_0.X;
      dVar55 = (double)(pTVar21->field0_0x0)._s_0.Y;
      local_4b8 = (double)(pTVar21->field0_0x0)._s_0.Z;
      dVar64 = local_1a8.Scale3D.XY.m128d_f64[0] * dVar46;
      dVar29 = local_1a8.Scale3D.XY.m128d_f64[1] * dVar55;
      uVar58 = (undefined4)((ulonglong)dVar29 >> 0x20);
      local_4c8._8_4_ = SUB84(dVar55,0);
      local_4c8._0_8_ = dVar46;
      local_4c8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      dVar46 = local_4b8 * local_1a8.Scale3D.ZW.m128d_f64[0];
      dVar55 = local_1a8.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar63 = local_1a8.Rotation.ZW.m128d_f64[0];
      dVar61 = local_1a8.Rotation.ZW.m128d_f64[1];
      auVar74._8_4_ = SUB84(dVar29,0);
      auVar74._0_8_ = dVar64;
      auVar74._12_4_ = uVar58;
      auVar56 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
      auVar75._0_8_ = auVar74._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar60 * dVar64;
      auVar75._8_8_ = dVar46 * dVar60 - dVar63 * dVar29;
      auVar30._8_4_ = SUB84(dVar29,0);
      auVar30._0_8_ = dVar64;
      auVar30._12_4_ = uVar58;
      auVar7._8_4_ = SUB84(dVar55,0);
      auVar7._0_8_ = dVar46;
      auVar7._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      auVar31 = blendpd(auVar30,auVar7,2);
      auVar66._8_4_ = SUB84(auVar75._8_8_,0);
      auVar66._0_8_ = auVar75._0_8_;
      auVar66._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      auVar32._0_8_ = auVar31._0_8_ * dVar63 - auVar56._0_8_ * dVar46;
      auVar32._8_8_ = auVar31._8_8_ * dVar61 - auVar56._8_8_ * dVar55;
      auVar31 = blendpd(auVar75,auVar32,2);
      dVar55 = auVar66._8_8_ + auVar66._8_8_;
      dVar72 = auVar32._0_8_ + auVar32._0_8_;
      auVar76._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar76._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar47._8_4_ = SUB84(dVar72,0);
      auVar47._0_8_ = dVar55;
      uVar58 = (undefined4)((ulonglong)dVar72 >> 0x20);
      auVar47._12_4_ = uVar58;
      auVar33._8_4_ = SUB84(dVar72,0);
      auVar33._0_8_ = dVar55;
      auVar33._12_4_ = uVar58;
      auVar31 = blendpd(auVar33,auVar76,2);
      auVar48._0_8_ = auVar47._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar55 * dVar60;
      auVar48._8_8_ = auVar76._0_8_ * dVar60 - dVar72 * dVar63;
      auVar34._0_8_ = auVar31._0_8_ * dVar63 - auVar76._0_8_ * auVar56._0_8_;
      auVar34._8_8_ = auVar31._8_8_ * dVar61 - auVar76._8_8_ * auVar56._8_8_;
      dVar64 = dVar55 * dVar61 + dVar64 + auVar48._8_8_;
      dStack_4a8 = dVar72 * dVar61 + dVar29 + auVar34._0_8_;
      auVar31 = blendpd(auVar48,auVar34,2);
      local_4a0 = auVar76._0_8_ * dVar61 + dVar46 + auVar31._0_8_;
      fVar62 = (float)dStack_4a8;
      fVar59 = (float)local_4a0;
      local_4b0 = dVar64;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      (pTVar21->field0_0x0)._s_0.X = (float)dVar64;
      (pTVar21->field0_0x0)._s_0.Y = fVar62;
      (pTVar21->field0_0x0)._s_0.Z = fVar59;
      dVar55 = local_1a8.Rotation.XY.m128d_f64[1];
      local_5c0 = local_5c0 * local_1a8.Scale3D.ZW.m128d_f64[0];
      dVar29 = local_1a8.Scale3D.ZW.m128d_f64[1] * 0.0;
      local_5d0 = local_1a8.Scale3D.XY.m128d_f64[0] * local_5d0;
      dStack_5c8 = local_1a8.Scale3D.XY.m128d_f64[1] * dStack_5c8;
      uVar58 = (undefined4)((ulonglong)dStack_5c8 >> 0x20);
      dVar46 = local_1a8.Rotation.ZW.m128d_f64[0];
      auVar56 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
      auVar67._8_4_ = SUB84(dStack_5c8,0);
      auVar67._0_8_ = local_5d0;
      auVar67._12_4_ = uVar58;
      dVar64 = local_1a8.Rotation.ZW.m128d_f64[1];
      auVar35._8_4_ = SUB84(dStack_5c8,0);
      auVar35._0_8_ = local_5d0;
      auVar35._12_4_ = uVar58;
      auVar68._0_8_ = auVar67._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - local_5d0 * dVar55;
      auVar68._8_8_ = local_5c0 * dVar55 - dStack_5c8 * dVar46;
      auVar8._8_4_ = SUB84(dVar29,0);
      auVar8._0_8_ = local_5c0;
      auVar8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar31 = blendpd(auVar35,auVar8,2);
      auVar57._8_4_ = SUB84(auVar68._8_8_,0);
      auVar57._0_8_ = auVar68._0_8_;
      auVar57._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      auVar36._0_8_ = auVar31._0_8_ * dVar46 - local_5c0 * auVar56._0_8_;
      auVar36._8_8_ = auVar31._8_8_ * dVar64 - dVar29 * auVar56._8_8_;
      auVar31 = blendpd(auVar68,auVar36,2);
      dVar29 = auVar57._8_8_ + auVar57._8_8_;
      dVar60 = auVar36._0_8_ + auVar36._0_8_;
      auVar69._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar69._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar49._8_4_ = SUB84(dVar60,0);
      auVar49._0_8_ = dVar29;
      uVar58 = (undefined4)((ulonglong)dVar60 >> 0x20);
      auVar49._12_4_ = uVar58;
      auVar37._8_4_ = SUB84(dVar60,0);
      auVar37._0_8_ = dVar29;
      auVar37._12_4_ = uVar58;
      auVar31 = blendpd(auVar37,auVar69,2);
      auVar50._0_8_ = auVar49._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar29 * dVar55;
      auVar50._8_8_ = auVar69._0_8_ * dVar55 - dVar60 * dVar46;
      auVar38._0_8_ = auVar31._0_8_ * dVar46 - auVar69._0_8_ * auVar56._0_8_;
      auVar38._8_8_ = auVar31._8_8_ * dVar64 - auVar69._8_8_ * auVar56._8_8_;
      auVar31 = blendpd(auVar50,auVar38,2);
      local_5d0 = dVar29 * dVar64 + local_5d0 + auVar50._8_8_;
      dStack_5c8 = dVar60 * dVar64 + dStack_5c8 + auVar38._0_8_;
      local_5c0 = auVar69._0_8_ * dVar64 + local_5c0 + auVar31._0_8_;
      local_498 = local_5d0;
      dStack_490 = dStack_5c8;
      local_488 = local_5c0;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      dVar46 = (double)(pTVar21->field0_0x0)._s_0.X;
      dVar60 = local_1a8.Rotation.XY.m128d_f64[1];
      dVar55 = (double)(pTVar21->field0_0x0)._s_0.Y;
      local_470 = (double)(pTVar21->field0_0x0)._s_0.Z;
      dVar64 = local_1a8.Scale3D.XY.m128d_f64[0] * dVar46;
      dVar29 = local_1a8.Scale3D.XY.m128d_f64[1] * dVar55;
      uVar58 = (undefined4)((ulonglong)dVar29 >> 0x20);
      local_480._8_4_ = SUB84(dVar55,0);
      local_480._0_8_ = dVar46;
      local_480._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      dVar63 = local_1a8.Rotation.ZW.m128d_f64[0];
      dVar61 = local_1a8.Rotation.ZW.m128d_f64[1];
      dVar46 = local_470 * local_1a8.Scale3D.ZW.m128d_f64[0];
      dVar55 = local_1a8.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar77._8_4_ = SUB84(dVar29,0);
      auVar77._0_8_ = dVar64;
      auVar77._12_4_ = uVar58;
      auVar39._8_4_ = SUB84(dVar29,0);
      auVar39._0_8_ = dVar64;
      auVar39._12_4_ = uVar58;
      auVar78._0_8_ = auVar77._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar64 * dVar60;
      auVar78._8_8_ = dVar46 * dVar60 - dVar29 * dVar63;
      auVar9._8_4_ = SUB84(dVar55,0);
      auVar9._0_8_ = dVar46;
      auVar9._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      auVar31 = blendpd(auVar39,auVar9,2);
      auVar70._8_4_ = SUB84(auVar78._8_8_,0);
      auVar70._0_8_ = auVar78._0_8_;
      auVar70._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
      auVar56 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
      auVar40._0_8_ = auVar31._0_8_ * dVar63 - dVar46 * auVar56._0_8_;
      auVar40._8_8_ = auVar31._8_8_ * dVar61 - dVar55 * auVar56._8_8_;
      auVar31 = blendpd(auVar78,auVar40,2);
      dVar55 = auVar70._8_8_ + auVar70._8_8_;
      dVar72 = auVar40._0_8_ + auVar40._0_8_;
      auVar79._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar79._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar51._8_4_ = SUB84(dVar72,0);
      auVar51._0_8_ = dVar55;
      uVar58 = (undefined4)((ulonglong)dVar72 >> 0x20);
      auVar51._12_4_ = uVar58;
      auVar41._8_4_ = SUB84(dVar72,0);
      auVar41._0_8_ = dVar55;
      auVar41._12_4_ = uVar58;
      auVar31 = blendpd(auVar41,auVar79,2);
      auVar52._0_8_ = auVar51._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar55 * dVar60;
      auVar52._8_8_ = auVar79._0_8_ * dVar60 - dVar72 * dVar63;
      auVar42._0_8_ = auVar31._0_8_ * dVar63 - auVar79._0_8_ * auVar56._0_8_;
      auVar42._8_8_ = auVar31._8_8_ * dVar61 - auVar79._8_8_ * auVar56._8_8_;
      dVar64 = dVar55 * dVar61 + dVar64 + auVar52._8_8_;
      dStack_460 = dVar72 * dVar61 + dVar29 + auVar42._0_8_;
      auVar31 = blendpd(auVar52,auVar42,2);
      local_458 = auVar79._0_8_ * dVar61 + dVar46 + auVar31._0_8_;
      fVar62 = (float)dStack_460;
      fVar59 = (float)local_458;
      local_468 = dVar64;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      (pTVar21->field0_0x0)._s_0.X = (float)dVar64;
      (pTVar21->field0_0x0)._s_0.Y = fVar62;
      (pTVar21->field0_0x0)._s_0.Z = fVar59;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      fVar59 = (pTVar21->field0_0x0)._s_0.X;
      dVar46 = (double)(pTVar21->field0_0x0)._s_0.Y;
      dVar29 = (double)(pTVar21->field0_0x0)._s_0.Z;
      pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,iVar2);
      dVar55 = (double)(pTVar21->field0_0x0)._s_0.Y;
      dVar64 = (double)(pTVar21->field0_0x0)._s_0.Z;
      uVar58 = uVar73;
      if (((dVar29 * dStack_5c8 - dVar46 * local_5c0) * (double)(pTVar21->field0_0x0)._s_0.X -
          (dVar55 * dVar29 - dVar64 * dVar46) * local_5d0) +
          (dVar55 * local_5c0 - dVar64 * dStack_5c8) * (double)fVar59 < __real_0000000000000000) {
        uVar58 = uVar10;
      }
      iVar27 = (pTVar28->ArrayForChannels).ArrayNum;
      if (iVar27 < 1) {
        local_618 = 0;
        local_610 = (longlong)iVar27;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar4 = *(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar28->ArrayForChannels).AllocatorInstance.SecondaryData.field_0x0;
      pTVar25 = &pTVar28->ArrayForChannels;
      if (pTVar4 != (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar25 = pTVar4;
      }
      uVar26 = iVar2 * *(int *)((pTVar25->AllocatorInstance).InlineData + 0x10);
      iVar2 = *(int *)((pTVar25->AllocatorInstance).InlineData + 8);
      uVar15 = 0;
      if ((int)uVar26 < iVar2) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_618 = (longlong)(int)uVar26;
        local_610 = (longlong)iVar2;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_5b0 = local_5b0 + 4;
      local_5b8 = local_5b8 + 1;
      local_608 = local_608 + 1;
      *(undefined4 *)
       (*(longlong *)(pTVar25->AllocatorInstance).InlineData + (longlong)(int)uVar26 * 4) = uVar58;
    } while (local_608 < 3);
    local_550.UnvisitedBitMask = local_550.UnvisitedBitMask & ~local_550._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_550);
    param_1 = local_5a8;
  } while( true );
}

// RecreateCollision @ 1479e0df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USplineMeshComponent::RecreateCollision(USplineMeshComponent *this)

{
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  TObjectPtr<UBodySetup> *this_00;
  byte bVar3;
  uchar uVar4;
  UBodySetup *pUVar5;
  UBodySetup *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  TObjectPtr<UBodySetup>_u_0 *pTVar15;
  USplineMeshComponent *pUVar16;
  TEnumAsByte<ECollisionTraceFlag> TVar17;
  bool bVar18;
  int iVar19;
  UClass *pUVar20;
  UObject *pUVar21;
  undefined7 extraout_var;
  double *pdVar22;
  FScriptContainerElement *pFVar23;
  FSplineMeshSceneProxyDesc *pFVar24;
  TQuat<double> *pTVar25;
  FUObjectItem *pFVar26;
  ulonglong uVar27;
  int *piVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType FVar32;
  FKConvexElem *pFVar33;
  FKConvexElem *pFVar34;
  float fVar35;
  uint uVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar97;
  undefined4 uVar99;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar96;
  undefined1 auVar52 [16];
  double dVar98;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  double dVar181;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  double dVar186;
  undefined4 uVar187;
  undefined1 auVar185 [16];
  uint uVar188;
  uint uVar189;
  uint uVar190;
  uint uVar191;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  double dVar205;
  UBodySetup *pUVar206;
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  double dVar236;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  double dVar237;
  UBodySetup *pUVar238;
  double dVar239;
  double dVar240;
  double dVar244;
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  double dVar245;
  double dVar246;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined4 uVar263;
  undefined4 uVar264;
  undefined1 auVar265 [16];
  uint uVar266;
  uint uVar267;
  undefined1 auStackY_918 [32];
  undefined1 local_8c8;
  undefined1 local_8c7;
  undefined1 local_8c6;
  undefined1 local_8c5;
  undefined1 local_8c4 [4];
  uint local_8c0;
  undefined1 local_8b8 [16];
  double local_8a8;
  double local_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  TVector<double>_u_0 local_878;
  UBodySetup *local_860;
  double local_858;
  double dStack_850;
  double local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  double local_830;
  TObjectPtr<UBodySetup>_u_0 *local_828;
  USplineMeshComponent *local_818;
  double dStack_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double local_7f0;
  double dStack_7e8;
  double local_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  undefined1 local_7a8 [16];
  double local_798;
  undefined1 local_790 [16];
  double local_780;
  undefined1 local_778 [16];
  double local_768;
  double local_760;
  double dStack_758;
  double local_750;
  double local_748;
  double dStack_740;
  double local_738;
  FObjectPtr_u_0 local_730;
  FObjectPtr_u_0 local_728;
  FObjectPtr_u_0 local_720;
  FObjectPtr_u_0 local_718;
  FObjectPtr_u_0 local_710;
  FObjectPtr_u_0 local_708;
  double *local_700;
  TVector<double>_u_0 local_6f8;
  TRotator<double> local_6e0;
  TQuat<double> local_6c8;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double local_690;
  double dStack_688;
  double local_680;
  double local_678;
  double dStack_670;
  undefined8 local_668;
  double local_660;
  double dStack_658;
  double local_650;
  double local_648;
  double dStack_640;
  undefined8 local_638;
  double local_630;
  double dStack_628;
  double local_620;
  double local_618;
  double dStack_610;
  undefined8 local_608;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double local_5e8;
  double dStack_5e0;
  undefined8 local_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  undefined1 local_5a0 [16];
  double local_590;
  double local_588;
  double dStack_580;
  double local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  double local_560;
  TQuat<double> local_558;
  FSplineMeshSceneProxyDesc local_538;
  FSplineMeshSceneProxyDesc local_428;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_918;
  plVar2 = &this->_padding_;
  local_818 = this;
  FObjectPtr::FObjectPtr((FObjectPtr *)&local_730,(FObjectPtr *)plVar2);
  this_00 = &this->BodySetup;
  pUVar5 = (this_00->field0_0x0).DebugPtr;
  local_828 = &this_00->field0_0x0;
  if (local_730.Handle == (UObject *)0x0) {
    if (pUVar5 != (UBodySetup *)0x0) {
      pFVar26 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
      if ((((uint)((ulonglong)(pFVar26->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsRooted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                              ,0xb8,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar5,RF_MirroredGarbage);
      pFVar26 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
      FUObjectItem::ThisThreadAtomicallySetFlag(pFVar26,Garbage);
      pFVar26 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
      FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar26,Async);
      (this_00->field0_0x0).DebugPtr = (UBodySetup *)0x0;
    }
  }
  else {
    if (pUVar5 == (UBodySetup *)0x0) {
      local_838 = 0;
      FObjectPtr::FObjectPtr((FObjectPtr *)&local_728,(FObjectPtr *)plVar2);
      pUVar21 = *(UObject **)&local_728.Handle[0xb].field_0x20;
      pUVar20 = Z_Construct_UClass_UBodySetup_NoRegister();
      pUVar21 = DuplicateObject_Internal(pUVar20,pUVar21,(UObject *)this,(FName)0x0);
      FObjectPtr::operator=((FObjectPtr *)this_00,pUVar21);
      UObjectBase::AtomicallySetFlags
                ((UObjectBase *)(this_00->field0_0x0).DebugPtr,RF_Transactional);
      (**(code **)(((this_00->field0_0x0).DebugPtr)->_padding_ + 0x2d0))();
    }
    else {
      (**(code **)(pUVar5->_padding_ + 0x2d0))(pUVar5);
      pUVar5 = (this_00->field0_0x0).DebugPtr;
      FObjectPtr::FObjectPtr((FObjectPtr *)&local_720,(FObjectPtr *)plVar2);
      UBodySetup::CopyBodyPropertiesFrom(pUVar5,*(UBodySetup **)&local_720.Handle[0xb].field_0x20);
      FObjectPtr::FObjectPtr((FObjectPtr *)&local_718,(FObjectPtr *)plVar2);
      *(undefined1 *)((longlong)&((this_00->field0_0x0).DebugPtr)->_padding_ + 1) =
           *(undefined1 *)(*(longlong *)&local_718.Handle[0xb].field_0x20 + 0x31);
    }
    FObjectPtr::FObjectPtr((FObjectPtr *)&local_710,(FObjectPtr *)plVar2);
    pUVar5 = (this_00->field0_0x0).DebugPtr;
    uVar11 = *(undefined8 *)(*(longlong *)&local_710.Handle[0xb].field_0x20 + 0x108);
    uVar12 = *(undefined8 *)(*(longlong *)&local_710.Handle[0xb].field_0x20 + 0x110);
    (pUVar5->BodySetupGuid).A = (int)uVar11;
    (pUVar5->BodySetupGuid).B = (int)((ulonglong)uVar11 >> 0x20);
    (pUVar5->BodySetupGuid).C = (int)uVar12;
    (pUVar5->BodySetupGuid).D = (int)((ulonglong)uVar12 >> 0x20);
    FObjectPtr::FObjectPtr((FObjectPtr *)&local_708,(FObjectPtr *)plVar2);
    pUVar5 = (this_00->field0_0x0).DebugPtr;
    uVar11 = *(undefined8 *)(*(longlong *)&local_708.Handle[0xb].field_0x20 + 0x108);
    uVar12 = *(undefined8 *)(*(longlong *)&local_708.Handle[0xb].field_0x20 + 0x110);
    (this->CachedMeshBodySetupGuid).A = (int)uVar11;
    (this->CachedMeshBodySetupGuid).B = (int)((ulonglong)uVar11 >> 0x20);
    (this->CachedMeshBodySetupGuid).C = (int)uVar12;
    (this->CachedMeshBodySetupGuid).D = (int)((ulonglong)uVar12 >> 0x20);
    bVar3 = pUVar5->field_0xd9;
    pUVar5->field_0xd9 = (bVar3 ^ this->field_0x77d) & 8 ^ bVar3;
    TVar17 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)(this_00->field0_0x0).DebugPtr)
    ;
    dVar38 = __real_3ff0000000000000;
    if (*(char *)CONCAT71(extraout_var,TVar17.Value) == '\x03') {
      FKAggregateGeom::EmptyElements(&((this_00->field0_0x0).DebugPtr)->AggGeom);
      (**(code **)(((this_00->field0_0x0).DebugPtr)->_padding_ + 0x2b0))();
    }
    else {
      local_860 = (UBodySetup *)__real_3ff0000000000000;
      local_878._s_0.Z = __real_3ff0000000000000;
      local_8b8 = ___xmm_3ff00000000000003ff0000000000000;
      local_878._0_16_ = ___xmm_3ff00000000000003ff0000000000000;
      pdVar22 = GetAxisValueRef((TVector<double> *)&local_878._s_0,(uint)(this->ForwardAxis).Value);
      uVar96 = _UNK_15061cc8c;
      uVar36 = _UNK_15061cc88;
      uVar267 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar266 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      *pdVar22 = 0.0;
      pUVar5 = (this_00->field0_0x0).DebugPtr;
      pFVar31 = (pUVar5->AggGeom).SphereElems.AllocatorInstance.Data;
      iVar19 = (pUVar5->AggGeom).SphereElems.ArrayNum;
      pFVar30 = pFVar31 + 0x40;
      pFVar29 = pFVar31 + (longlong)iVar19 * 0x50;
      while( true ) {
        if ((pUVar5->AggGeom).SphereElems.ArrayNum != iVar19) {
          local_8c8 = 0;
          `TCheckedPointerIterator<FKSphereElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8c8);
        }
        if (pFVar31 == pFVar29) break;
        uVar4 = (this->ForwardAxis).Value;
        if (uVar4 == '\0') {
          pFVar23 = pFVar30 + -0x10;
        }
        else if (uVar4 == '\x01') {
          pFVar23 = pFVar30 + -8;
        }
        else {
          pFVar23 = pFVar30;
          if ((uVar4 != '\x02') &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x1fd,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar35 = UE::SplineMesh::RealToFloatChecked(*(double *)pFVar23);
        CalcSliceTransform(this,&local_258,fVar35);
        *(double *)(pFVar30 + -0x10) = local_878._s_0.X * *(double *)(pFVar30 + -0x10);
        *(double *)(pFVar30 + -8) = local_878._s_0.Y * *(double *)(pFVar30 + -8);
        *(double *)pFVar30 = local_878._s_0.Z * *(double *)pFVar30;
        uVar188 = uVar266 & local_258.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar189 = uVar267 & local_258.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar190 = uVar36 & local_258.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar191 = uVar96 & local_258.Scale3D.ZW.m128d_f64[1]._4_4_;
        dVar237 = local_258.Rotation.ZW.m128d_f64[0];
        auVar100._4_4_ = uVar189;
        auVar100._0_4_ = uVar188;
        auVar192._0_8_ =
             CONCAT44(uVar267 & local_258.Scale3D.XY.m128d_f64[0]._4_4_,
                      uVar266 & local_258.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar192._8_4_ = uVar36 & local_258.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar192._12_4_ = uVar96 & local_258.Scale3D.XY.m128d_f64[1]._4_4_;
        dVar244 = local_258.Rotation.ZW.m128d_f64[1];
        auVar100._8_8_ = auVar192._0_8_;
        auVar39._8_4_ = auVar192._8_4_;
        auVar39._0_8_ = auVar192._0_8_;
        auVar39._12_4_ = auVar192._12_4_;
        auVar40._12_4_ = uVar189;
        auVar40._8_4_ = uVar188;
        auVar40._0_8_ = auVar39._8_8_;
        auVar153._8_4_ = auVar192._8_4_;
        auVar153._0_8_ = auVar192._0_8_;
        auVar153._12_4_ = auVar192._12_4_;
        auVar154 = maxpd(auVar153,auVar40);
        auVar41._8_4_ = auVar192._8_4_;
        auVar41._0_8_ = auVar192._0_8_;
        auVar41._12_4_ = auVar192._12_4_;
        auVar193._12_4_ = uVar191;
        auVar193._8_4_ = uVar190;
        auVar193._0_8_ = auVar192._8_8_;
        auVar155 = maxpd(auVar154,auVar100);
        auVar8._4_4_ = uVar189;
        auVar8._0_4_ = uVar188;
        auVar8._8_4_ = uVar190;
        auVar8._12_4_ = uVar191;
        auVar154 = blendpd(auVar41,auVar8,2);
        auVar101._4_4_ = uVar189;
        auVar101._0_4_ = uVar188;
        auVar101._8_4_ = uVar190;
        auVar101._12_4_ = uVar191;
        auVar154 = maxpd(auVar101,auVar154);
        *(float *)(pFVar30 + 8) = (float)auVar155._0_8_ * *(float *)(pFVar30 + 8);
        auVar261._0_8_ =
             *(double *)pFVar30 *
             (double)CONCAT44(local_258.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_258.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar261._8_8_ =
             (double)CONCAT44(local_258.Scale3D.ZW.m128d_f64[1]._4_4_,
                              local_258.Scale3D.ZW.m128d_f64[1]._0_4_) * 0.0;
        maxpd(auVar154,auVar193);
        dVar98 = local_258.Rotation.XY.m128d_f64[1];
        auVar155 = blendpd((undefined1  [16])local_258.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_258.Rotation.ZW.m128d_f64,2);
        dVar205 = local_258.Scale3D.XY.m128d_f64[0] * *(double *)(pFVar30 + -0x10);
        dVar236 = local_258.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar30 + -8);
        uVar99 = (undefined4)((ulonglong)dVar236 >> 0x20);
        auVar42._8_4_ = local_258.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar42._0_8_ = dVar98;
        auVar42._12_4_ = local_258.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar207._8_4_ = SUB84(dVar236,0);
        auVar207._0_8_ = dVar205;
        auVar207._12_4_ = uVar99;
        auVar102._8_4_ = SUB84(dVar236,0);
        auVar102._0_8_ = dVar205;
        auVar102._12_4_ = uVar99;
        auVar154 = blendpd(auVar102,auVar261,2);
        auVar208._0_8_ = auVar207._8_8_ * local_258.Rotation.XY.m128d_f64[0] - dVar98 * dVar205;
        auVar208._8_8_ = auVar261._0_8_ * dVar98 - auVar42._8_8_ * dVar236;
        auVar103._0_8_ = auVar154._0_8_ * dVar237 - auVar155._0_8_ * auVar261._0_8_;
        auVar103._8_8_ = auVar154._8_8_ * dVar244 - auVar155._8_8_ * auVar261._8_8_;
        auVar43._8_4_ = SUB84(auVar208._8_8_,0);
        auVar43._0_8_ = auVar208._0_8_;
        auVar43._12_4_ = (int)((ulonglong)auVar208._8_8_ >> 0x20);
        dVar37 = auVar43._8_8_ + auVar43._8_8_;
        dVar97 = auVar103._0_8_ + auVar103._0_8_;
        auVar154 = blendpd(auVar208,auVar103,2);
        auVar209._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar209._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        auVar182._8_4_ = SUB84(dVar97,0);
        auVar182._0_8_ = dVar37;
        uVar99 = (undefined4)((ulonglong)dVar97 >> 0x20);
        auVar182._12_4_ = uVar99;
        auVar104._8_4_ = local_258.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar104._0_8_ = dVar244;
        auVar104._12_4_ = local_258.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar156._8_4_ = SUB84(dVar97,0);
        auVar156._0_8_ = dVar37;
        auVar156._12_4_ = uVar99;
        auVar154 = blendpd(auVar156,auVar209,2);
        auVar183._0_8_ = auVar182._8_8_ * local_258.Rotation.XY.m128d_f64[0] - dVar98 * dVar37;
        auVar183._8_8_ = auVar209._0_8_ * dVar98 - dVar237 * dVar97;
        auVar157._0_8_ = auVar154._0_8_ * dVar237 - auVar155._0_8_ * auVar209._0_8_;
        auVar157._8_8_ = auVar154._8_8_ * dVar244 - auVar155._8_8_ * auVar209._8_8_;
        auVar44._8_4_ = SUB84(auVar183._8_8_,0);
        auVar44._0_8_ = auVar183._0_8_;
        auVar44._12_4_ = (int)((ulonglong)auVar183._8_8_ >> 0x20);
        pFVar31 = pFVar31 + 0x50;
        auVar154 = blendpd(auVar183,auVar157,2);
        local_588 = dVar244 * dVar37 + dVar205 + auVar44._8_8_ +
                    local_258.Translation.XY.m128d_f64[0];
        dStack_580 = auVar104._8_8_ * dVar97 + dVar236 + auVar157._0_8_ +
                     local_258.Translation.XY.m128d_f64[1];
        *(double *)(pFVar30 + -0x10) = local_588;
        *(double *)(pFVar30 + -8) = dStack_580;
        local_578 = dVar244 * auVar209._0_8_ + auVar261._0_8_ + auVar154._0_8_ +
                    local_258.Translation.ZW.m128d_f64[0];
        *(double *)pFVar30 = local_578;
        pFVar30 = pFVar30 + 0x50;
      }
      pUVar5 = (this_00->field0_0x0).DebugPtr;
      uVar11 = local_8b8._0_8_;
      uVar12 = local_8b8._8_8_;
      local_8c0 = (pUVar5->AggGeom).SphylElems.ArrayNum;
      uVar27 = (ulonglong)(int)local_8c0;
      pFVar31 = (pUVar5->AggGeom).SphylElems.AllocatorInstance.Data;
      pFVar30 = pFVar31 + 0x40;
      pFVar29 = pFVar31 + uVar27 * 0x68;
      while( true ) {
        if ((pUVar5->AggGeom).SphylElems.ArrayNum != (int)uVar27) {
          local_8c7 = 0;
          `TCheckedPointerIterator<FKSphylElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8c7);
        }
        pTVar15 = local_828;
        if (pFVar31 == pFVar29) break;
        uVar4 = (this->ForwardAxis).Value;
        if (uVar4 == '\0') {
          pFVar23 = pFVar30 + -0x10;
        }
        else if (uVar4 == '\x01') {
          pFVar23 = pFVar30 + -8;
        }
        else {
          pFVar23 = pFVar30;
          if ((uVar4 != '\x02') &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x1fd,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar35 = UE::SplineMesh::RealToFloatChecked(*(double *)pFVar23);
        pFVar24 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_428,this);
        FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar24,&local_198,fVar35);
        *(double *)(pFVar30 + -0x10) = local_878._s_0.X * *(double *)(pFVar30 + -0x10);
        *(double *)(pFVar30 + -8) = local_878._s_0.Y * *(double *)(pFVar30 + -8);
        *(double *)pFVar30 = local_878._s_0.Z * *(double *)pFVar30;
        local_6f8._s_0.Z = dVar38;
        local_6f8._s_0.X = (double)uVar11;
        local_6f8._s_0.Y = (double)uVar12;
        UE::Math::TTransform<double>::TTransform<double>
                  (&local_138,(TRotator<double> *)(pFVar30 + 8),(TVector<double> *)(pFVar30 + -0x10)
                   ,(TVector<double> *)&local_6f8._s_0);
        local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_2b8,&local_138,&local_198);
        auVar14._8_8_ = local_2b8.Rotation.ZW.m128d_f64[1];
        auVar14._0_8_ = local_2b8.Rotation.ZW.m128d_f64[0];
        auVar13._8_8_ = local_2b8.Rotation.XY.m128d_f64[1];
        auVar13._0_8_ = local_2b8.Rotation.XY.m128d_f64[0];
        local_560 = (double)*(float *)(pFVar30 + 0x24);
        local_570 = 0;
        uStack_568 = 0;
        dVar37 = local_2b8.Scale3D.XY.m128d_f64[0] * 0.0;
        dVar97 = local_2b8.Scale3D.XY.m128d_f64[1] * 0.0;
        dVar98 = local_560 * local_2b8.Scale3D.ZW.m128d_f64[0];
        dVar205 = local_2b8.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar247._8_4_ = SUB84(dVar97,0);
        auVar247._0_8_ = dVar37;
        uVar99 = (undefined4)((ulonglong)dVar97 >> 0x20);
        auVar247._12_4_ = uVar99;
        auVar45._8_4_ = SUB84(local_2b8.Rotation.ZW.m128d_f64[0],0);
        auVar45._0_8_ = local_2b8.Rotation.XY.m128d_f64[1];
        auVar45._12_4_ = (int)((ulonglong)local_2b8.Rotation.ZW.m128d_f64[0] >> 0x20);
        auVar248._0_8_ =
             auVar247._8_8_ * local_2b8.Rotation.XY.m128d_f64[0] -
             local_2b8.Rotation.XY.m128d_f64[1] * dVar37;
        auVar248._8_8_ = dVar98 * local_2b8.Rotation.XY.m128d_f64[1] - auVar45._8_8_ * dVar97;
        auVar155 = blendpd(auVar13,auVar14,2);
        auVar210._8_4_ = SUB84(auVar248._8_8_,0);
        auVar210._0_8_ = auVar248._0_8_;
        auVar210._12_4_ = (int)((ulonglong)auVar248._8_8_ >> 0x20);
        auVar105._8_4_ = SUB84(dVar97,0);
        auVar105._0_8_ = dVar37;
        auVar105._12_4_ = uVar99;
        auVar10._8_4_ = SUB84(dVar205,0);
        auVar10._0_8_ = dVar98;
        auVar10._12_4_ = (int)((ulonglong)dVar205 >> 0x20);
        auVar154 = blendpd(auVar105,auVar10,2);
        auVar106._0_8_ =
             auVar154._0_8_ * local_2b8.Rotation.ZW.m128d_f64[0] - auVar155._0_8_ * dVar98;
        auVar106._8_8_ =
             auVar154._8_8_ * local_2b8.Rotation.ZW.m128d_f64[1] - auVar155._8_8_ * dVar205;
        auVar154 = blendpd(auVar248,auVar106,2);
        dVar205 = auVar210._8_8_ + auVar210._8_8_;
        dVar236 = auVar106._0_8_ + auVar106._0_8_;
        auVar249._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar249._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar236,0);
        auVar158._8_4_ = uVar99;
        auVar158._0_8_ = dVar205;
        uVar187 = (undefined4)((ulonglong)dVar236 >> 0x20);
        auVar158._12_4_ = uVar187;
        auVar46._8_4_ = uVar99;
        auVar46._0_8_ = dVar205;
        auVar46._12_4_ = uVar187;
        auVar107._8_4_ = uVar99;
        auVar107._0_8_ = dVar205;
        auVar107._12_4_ = uVar187;
        auVar154 = blendpd(auVar107,auVar249,2);
        auVar159._0_8_ =
             auVar158._8_8_ * local_2b8.Rotation.XY.m128d_f64[0] -
             dVar205 * local_2b8.Rotation.XY.m128d_f64[1];
        auVar159._8_8_ =
             auVar249._0_8_ * local_2b8.Rotation.XY.m128d_f64[1] -
             auVar46._8_8_ * local_2b8.Rotation.ZW.m128d_f64[0];
        auVar47._8_4_ = SUB84(auVar249._8_8_,0);
        auVar47._0_8_ = auVar249._0_8_;
        auVar47._12_4_ = (int)((ulonglong)auVar249._8_8_ >> 0x20);
        auVar108._0_8_ =
             auVar154._0_8_ * local_2b8.Rotation.ZW.m128d_f64[0] - auVar249._0_8_ * auVar155._0_8_;
        auVar108._8_8_ =
             auVar154._8_8_ * local_2b8.Rotation.ZW.m128d_f64[1] - auVar47._8_8_ * auVar155._8_8_;
        auVar48._8_4_ = SUB84(auVar159._8_8_,0);
        auVar48._0_8_ = auVar159._0_8_;
        auVar48._12_4_ = (int)((ulonglong)auVar159._8_8_ >> 0x20);
        local_6a8 = dVar205 * local_2b8.Rotation.ZW.m128d_f64[1] + dVar37 + auVar48._8_8_;
        dStack_6a0 = dVar236 * local_2b8.Rotation.ZW.m128d_f64[1] + dVar97 + auVar108._0_8_;
        auVar154 = blendpd(auVar159,auVar108,2);
        local_698 = auVar249._0_8_ * local_2b8.Rotation.ZW.m128d_f64[1] + dVar98 + auVar154._0_8_;
        fVar35 = UE::SplineMesh::RealToFloatChecked
                           (SQRT(local_6a8 * local_6a8 + dStack_6a0 * dStack_6a0 +
                                 local_698 * local_698));
        *(float *)(pFVar30 + 0x24) = fVar35;
        auVar194._0_8_ =
             CONCAT44(uVar267 & local_198.Scale3D.XY.m128d_f64[0]._4_4_,
                      uVar266 & local_198.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar194._8_4_ = uVar36 & local_198.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar194._12_4_ = uVar96 & local_198.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar49._8_4_ = auVar194._8_4_;
        auVar49._0_8_ = auVar194._0_8_;
        auVar49._12_4_ = auVar194._12_4_;
        auVar160._8_4_ = auVar194._8_4_;
        auVar160._0_8_ = auVar194._0_8_;
        auVar160._12_4_ = auVar194._12_4_;
        uVar188 = uVar266 & local_198.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar189 = uVar267 & local_198.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar190 = uVar36 & local_198.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar191 = uVar96 & local_198.Scale3D.ZW.m128d_f64[1]._4_4_;
        auVar50._12_4_ = uVar189;
        auVar50._8_4_ = uVar188;
        auVar50._0_8_ = auVar49._8_8_;
        auVar109._4_4_ = uVar189;
        auVar109._0_4_ = uVar188;
        auVar154 = maxpd(auVar160,auVar50);
        auVar109._8_8_ = auVar194._0_8_;
        auVar51._8_4_ = auVar194._8_4_;
        auVar51._0_8_ = auVar194._0_8_;
        auVar51._12_4_ = auVar194._12_4_;
        auVar155 = maxpd(auVar154,auVar109);
        auVar9._4_4_ = uVar189;
        auVar9._0_4_ = uVar188;
        auVar9._8_4_ = uVar190;
        auVar9._12_4_ = uVar191;
        auVar154 = blendpd(auVar51,auVar9,2);
        auVar110._4_4_ = uVar189;
        auVar110._0_4_ = uVar188;
        auVar110._8_4_ = uVar190;
        auVar110._12_4_ = uVar191;
        auVar195._12_4_ = uVar191;
        auVar195._8_4_ = uVar190;
        auVar195._0_8_ = auVar194._8_8_;
        auVar154 = maxpd(auVar110,auVar154);
        *(float *)(pFVar30 + 0x20) = (float)auVar155._0_8_ * *(float *)(pFVar30 + 0x20);
        maxpd(auVar154,auVar195);
        local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_318.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_318.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_318.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_318.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_318,&local_138,&local_198);
        bVar18 = UE::Math::TTransform<double>::IsValid(&local_318);
        if ((!bVar18) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6356621301104246694>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\SphylElem.h"
                                ,0x5a,"InTransform.IsValid()"), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_6c8.X = local_318.Rotation.XY.m128d_f64[0];
        local_6c8.Y = local_318.Rotation.XY.m128d_f64[1];
        local_6c8.Z = local_318.Rotation.ZW.m128d_f64[0];
        local_6c8.W = local_318.Rotation.ZW.m128d_f64[1];
        UE::Math::TQuat<double>::Rotator(&local_6c8,&local_6e0);
        pFVar31 = pFVar31 + 0x68;
        uVar27 = (ulonglong)local_8c0;
        *(double *)(pFVar30 + 8) = local_6e0.Pitch;
        *(double *)(pFVar30 + 0x10) = local_6e0.Yaw;
        local_680 = local_318.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar30 + 0x18) = local_6e0.Roll;
        local_690 = local_318.Translation.XY.m128d_f64[0];
        dStack_688 = local_318.Translation.XY.m128d_f64[1];
        *(double *)(pFVar30 + -0x10) = local_318.Translation.XY.m128d_f64[0];
        *(double *)(pFVar30 + -8) = local_318.Translation.XY.m128d_f64[1];
        *(double *)pFVar30 = local_318.Translation.ZW.m128d_f64[0];
        pFVar30 = pFVar30 + 0x68;
      }
      pUVar5 = local_828->DebugPtr;
      local_8c0 = (pUVar5->AggGeom).BoxElems.ArrayNum;
      uVar27 = (ulonglong)(int)local_8c0;
      pFVar30 = (pUVar5->AggGeom).BoxElems.AllocatorInstance.Data;
      pFVar31 = pFVar30 + uVar27 * 0x70;
      while( true ) {
        dVar98 = _UNK_150689518;
        dVar38 = ___xmm_00000000000000003ff0000000000000;
        fVar35 = __real_3f000000;
        uVar266 = (uint)__xmm_80000000000000008000000000000000;
        uVar267 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        if ((pUVar5->AggGeom).BoxElems.ArrayNum != (int)uVar27) {
          local_8c6 = 0;
          `TCheckedPointerIterator<FKBoxElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8c6);
        }
        pUVar6 = pTVar15->DebugPtr;
        if (pFVar30 == pFVar31) break;
        iVar19 = (pUVar6->AggGeom).ConvexElems.ArrayNum;
        pTVar1 = &(pUVar6->AggGeom).ConvexElems;
        if (iVar19 == (pUVar6->AggGeom).ConvexElems.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x100,0x10,&pTVar1->AllocatorInstance,
                              &(pUVar6->AggGeom).ConvexElems.ArrayMax);
        }
        (pUVar6->AggGeom).ConvexElems.ArrayNum = iVar19 + 1;
        pFVar34 = (FKConvexElem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar19 * 0x100);
        DefaultConstructItems<FKConvexElem,int>(pFVar34,1);
        pUVar6 = (UBodySetup *)(double)(*(float *)(pFVar30 + 0x68) * fVar35);
        if ((double)(*(float *)(pFVar30 + 0x68) * fVar35) <= (double)local_860) {
          pUVar6 = local_860;
        }
        pUVar238 = (UBodySetup *)(double)(*(float *)(pFVar30 + 100) * fVar35);
        if ((double)(*(float *)(pFVar30 + 100) * fVar35) <= (double)local_860) {
          pUVar238 = local_860;
        }
        pUVar206 = (UBodySetup *)(double)(*(float *)(pFVar30 + 0x60) * fVar35);
        if ((double)(*(float *)(pFVar30 + 0x60) * fVar35) <= (double)local_860) {
          pUVar206 = local_860;
        }
        local_8a8 = (double)pUVar206;
        local_8a0 = (double)pUVar238;
        pTVar25 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)(pFVar30 + 0x48),&local_558);
        piVar28 = &(pFVar34->VertexData).ArrayMax;
        local_898 = pTVar25->X;
        dStack_890 = pTVar25->Y;
        local_888 = pTVar25->Z;
        dStack_880 = pTVar25->W;
        dVar236 = *(double *)(pFVar30 + 0x30);
        dVar37 = *(double *)(pFVar30 + 0x38);
        dVar205 = *(double *)(pFVar30 + 0x40);
        (pFVar34->VertexData).ArrayNum = 0;
        if (*piVar28 != 8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,8,&(pFVar34->VertexData).AllocatorInstance,0,piVar28);
        }
        dVar244 = dStack_880;
        dVar237 = local_888;
        dVar97 = dStack_890;
        auVar154._8_8_ = dStack_890;
        auVar154._0_8_ = local_898;
        auVar155._8_8_ = dStack_880;
        auVar155._0_8_ = local_888;
        uVar36 = (uint)pUVar206 ^ uVar266;
        uVar96 = (uint)((ulonglong)pUVar206 >> 0x20) ^ uVar267;
        local_858 = (double)CONCAT44(uVar96,uVar36);
        uVar188 = (uint)pUVar238 ^ uVar266;
        uVar189 = (uint)((ulonglong)pUVar238 >> 0x20) ^ uVar267;
        local_848 = (double)CONCAT44(uVar189,uVar188);
        auVar241._4_4_ = uVar96;
        auVar241._0_4_ = uVar36;
        auVar241._8_4_ = uVar188;
        auVar241._12_4_ = uVar189;
        uVar266 = (uint)pUVar6 ^ uVar266;
        uVar267 = (uint)((ulonglong)pUVar6 >> 0x20) ^ uVar267;
        auVar52._0_8_ = (double)CONCAT44(uVar96,uVar36);
        auVar52._8_4_ = uVar188;
        auVar52._12_4_ = uVar189;
        local_668 = CONCAT44(uVar267,uVar266);
        auVar250._0_8_ = (double)CONCAT44(uVar267,uVar266) * dVar38;
        auVar250._8_8_ = dVar98 * 0.0;
        auVar111._4_4_ = uVar96;
        auVar111._0_4_ = uVar36;
        auVar111._8_4_ = uVar188;
        auVar111._12_4_ = uVar189;
        auVar112 = blendpd(auVar111,auVar250,2);
        uVar263 = SUB84(local_888,0);
        uVar264 = (undefined4)((ulonglong)local_888 >> 0x20);
        auVar154 = blendpd(auVar154,auVar155,2);
        auVar242._0_8_ = auVar241._8_8_ * local_898 - auVar52._0_8_ * dStack_890;
        auVar242._8_8_ = auVar250._0_8_ * dStack_890 - auVar52._8_8_ * local_888;
        dVar38 = auVar154._0_8_;
        dVar98 = auVar154._8_8_;
        auVar184._8_4_ = SUB84(auVar242._8_8_,0);
        auVar184._0_8_ = auVar242._0_8_;
        auVar184._12_4_ = (int)((ulonglong)auVar242._8_8_ >> 0x20);
        auVar113._0_8_ = auVar112._0_8_ * local_888 - dVar38 * auVar250._0_8_;
        auVar113._8_8_ = auVar112._8_8_ * dStack_880 - dVar98 * auVar250._8_8_;
        auVar154 = blendpd(auVar242,auVar113,2);
        dVar181 = auVar184._8_8_ + auVar184._8_8_;
        dVar186 = auVar113._0_8_ + auVar113._0_8_;
        auVar243._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar243._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar161._8_4_ = uVar99;
        auVar161._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar161._12_4_ = uVar187;
        auVar53._8_4_ = uVar99;
        auVar53._0_8_ = dVar181;
        auVar53._12_4_ = uVar187;
        auVar114._8_4_ = uVar99;
        auVar114._0_8_ = dVar181;
        auVar114._12_4_ = uVar187;
        auVar154 = blendpd(auVar114,auVar243,2);
        auVar162._0_8_ = auVar161._8_8_ * local_898 - dVar181 * dStack_890;
        auVar162._8_8_ = auVar243._0_8_ * dStack_890 - auVar53._8_8_ * local_888;
        auVar54._8_4_ = SUB84(auVar243._8_8_,0);
        auVar54._0_8_ = auVar243._0_8_;
        auVar54._12_4_ = (int)((ulonglong)auVar243._8_8_ >> 0x20);
        auVar115._0_8_ = auVar154._0_8_ * local_888 - auVar243._0_8_ * dVar38;
        auVar115._8_8_ = auVar154._8_8_ * dStack_880 - auVar54._8_8_ * dVar98;
        auVar55._8_4_ = SUB84(auVar162._8_8_,0);
        auVar55._0_8_ = auVar162._0_8_;
        auVar55._12_4_ = (int)((ulonglong)auVar162._8_8_ >> 0x20);
        auVar154 = blendpd(auVar162,auVar115,2);
        local_778._0_8_ = dVar181 * dStack_880 + local_858 + auVar55._8_8_ + dVar236;
        local_778._8_8_ = dVar186 * dStack_880 + local_848 + auVar115._0_8_ + dVar37;
        local_768 = auVar243._0_8_ * dStack_880 + auVar250._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_678 = local_858;
        dStack_670 = local_848;
        if (((pFVar29 <= (FScriptContainerElement *)local_778) &&
            ((FScriptContainerElement *)local_778 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar251._0_8_ = (double)pUVar6 * ___xmm_00000000000000003ff0000000000000;
        auVar251._8_8_ = _UNK_150689518 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(undefined8 *)pFVar29 = local_778._0_8_;
        *(undefined8 *)(pFVar29 + 8) = local_778._8_8_;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_768;
        dVar239 = (double)local_8b8._0_8_ * local_858;
        dVar245 = (double)local_8b8._8_8_ * local_848;
        local_660 = local_858;
        dStack_658 = local_848;
        auVar211._8_4_ = SUB84(dVar245,0);
        auVar211._0_8_ = dVar239;
        uVar99 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar211._12_4_ = uVar99;
        auVar56._8_4_ = uVar263;
        auVar56._0_8_ = dVar97;
        auVar56._12_4_ = uVar264;
        auVar116._8_4_ = SUB84(dVar245,0);
        auVar116._0_8_ = dVar239;
        auVar116._12_4_ = uVar99;
        auVar212._0_8_ = auVar211._8_8_ * local_898 - dVar97 * dVar239;
        auVar212._8_8_ = auVar251._0_8_ * dStack_890 - auVar56._8_8_ * dVar245;
        auVar154 = blendpd(auVar116,auVar251,2);
        auVar196._8_4_ = SUB84(auVar212._8_8_,0);
        auVar196._0_8_ = auVar212._0_8_;
        auVar196._12_4_ = (int)((ulonglong)auVar212._8_8_ >> 0x20);
        auVar57._8_4_ = SUB84(auVar251._8_8_,0);
        auVar57._0_8_ = auVar251._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar251._8_8_ >> 0x20);
        auVar117._0_8_ = auVar154._0_8_ * local_888 - auVar251._0_8_ * dVar38;
        auVar117._8_8_ = auVar154._8_8_ * dStack_880 - auVar57._8_8_ * dVar98;
        auVar58._8_4_ = uVar263;
        auVar58._0_8_ = dVar97;
        auVar58._12_4_ = uVar264;
        auVar154 = blendpd(auVar212,auVar117,2);
        dVar181 = auVar196._8_8_ + auVar196._8_8_;
        dVar186 = auVar117._0_8_ + auVar117._0_8_;
        auVar213._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar213._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        auVar163._8_4_ = SUB84(dVar186,0);
        auVar163._0_8_ = dVar181;
        uVar99 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar163._12_4_ = uVar99;
        auVar118._8_4_ = SUB84(dVar186,0);
        auVar118._0_8_ = dVar181;
        auVar118._12_4_ = uVar99;
        auVar154 = blendpd(auVar118,auVar213,2);
        auVar164._0_8_ = auVar163._8_8_ * local_898 - dVar97 * dVar181;
        auVar164._8_8_ = auVar213._0_8_ * dStack_890 - auVar58._8_8_ * dVar186;
        auVar59._8_4_ = SUB84(auVar213._8_8_,0);
        auVar59._0_8_ = auVar213._0_8_;
        auVar59._12_4_ = (int)((ulonglong)auVar213._8_8_ >> 0x20);
        auVar119._0_8_ = auVar154._0_8_ * local_888 - auVar213._0_8_ * dVar38;
        auVar119._8_8_ = auVar154._8_8_ * dStack_880 - auVar59._8_8_ * dVar98;
        auVar60._8_4_ = SUB84(auVar164._8_8_,0);
        auVar60._0_8_ = auVar164._0_8_;
        auVar60._12_4_ = (int)((ulonglong)auVar164._8_8_ >> 0x20);
        auVar154 = blendpd(auVar164,auVar119,2);
        local_760 = dVar181 * dVar244 + dVar239 + auVar60._8_8_ + dVar236;
        dStack_758 = dVar186 * dVar244 + dVar245 + auVar119._0_8_ + dVar37;
        local_750 = auVar213._0_8_ * dVar244 + auVar251._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_650 = (double)pUVar6;
        if (((pFVar29 <= (FScriptContainerElement *)&local_760) &&
            ((FScriptContainerElement *)&local_760 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar252._0_8_ = (double)CONCAT44(uVar267,uVar266) * ___xmm_00000000000000003ff0000000000000
        ;
        auVar252._8_8_ = _UNK_150689518 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_760;
        *(double *)(pFVar29 + 8) = dStack_758;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_750;
        dVar239 = (double)local_8b8._0_8_ * local_858;
        dVar245 = (double)local_8b8._8_8_ * local_8a0;
        local_648 = local_858;
        dStack_640 = local_8a0;
        auVar214._8_4_ = SUB84(dVar245,0);
        auVar214._0_8_ = dVar239;
        uVar99 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar214._12_4_ = uVar99;
        local_638 = CONCAT44(uVar267,uVar266);
        auVar61._8_4_ = uVar263;
        auVar61._0_8_ = dVar97;
        auVar61._12_4_ = uVar264;
        auVar120._8_4_ = SUB84(dVar245,0);
        auVar120._0_8_ = dVar239;
        auVar120._12_4_ = uVar99;
        auVar215._0_8_ = auVar214._8_8_ * local_898 - dVar97 * dVar239;
        auVar215._8_8_ = auVar252._0_8_ * dStack_890 - auVar61._8_8_ * dVar245;
        auVar154 = blendpd(auVar120,auVar252,2);
        auVar197._8_4_ = SUB84(auVar215._8_8_,0);
        auVar197._0_8_ = auVar215._0_8_;
        auVar197._12_4_ = (int)((ulonglong)auVar215._8_8_ >> 0x20);
        auVar62._8_4_ = SUB84(auVar252._8_8_,0);
        auVar62._0_8_ = auVar252._0_8_;
        auVar62._12_4_ = (int)((ulonglong)auVar252._8_8_ >> 0x20);
        auVar121._0_8_ = auVar154._0_8_ * local_888 - auVar252._0_8_ * dVar38;
        auVar121._8_8_ = auVar154._8_8_ * dStack_880 - auVar62._8_8_ * dVar98;
        auVar154 = blendpd(auVar215,auVar121,2);
        dVar181 = auVar197._8_8_ + auVar197._8_8_;
        dVar186 = auVar121._0_8_ + auVar121._0_8_;
        auVar216._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar216._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar165._8_4_ = uVar99;
        auVar165._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar165._12_4_ = uVar187;
        auVar63._8_4_ = uVar99;
        auVar63._0_8_ = dVar181;
        auVar63._12_4_ = uVar187;
        auVar122._8_4_ = uVar99;
        auVar122._0_8_ = dVar181;
        auVar122._12_4_ = uVar187;
        auVar154 = blendpd(auVar122,auVar216,2);
        auVar166._0_8_ = auVar165._8_8_ * local_898 - dVar181 * dVar97;
        auVar166._8_8_ = auVar216._0_8_ * dStack_890 - auVar63._8_8_ * dVar237;
        auVar64._8_4_ = SUB84(auVar216._8_8_,0);
        auVar64._0_8_ = auVar216._0_8_;
        auVar64._12_4_ = (int)((ulonglong)auVar216._8_8_ >> 0x20);
        auVar123._0_8_ = auVar154._0_8_ * local_888 - auVar216._0_8_ * dVar38;
        auVar123._8_8_ = auVar154._8_8_ * dStack_880 - auVar64._8_8_ * dVar98;
        auVar65._8_4_ = SUB84(auVar166._8_8_,0);
        auVar65._0_8_ = auVar166._0_8_;
        auVar65._12_4_ = (int)((ulonglong)auVar166._8_8_ >> 0x20);
        auVar154 = blendpd(auVar166,auVar123,2);
        local_748 = dVar181 * dVar244 + dVar239 + auVar65._8_8_ + dVar236;
        dStack_740 = dVar186 * dVar244 + dVar245 + auVar123._0_8_ + dVar37;
        local_738 = auVar216._0_8_ * dVar244 + auVar252._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        if (((pFVar29 <= (FScriptContainerElement *)&local_748) &&
            ((FScriptContainerElement *)&local_748 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar253._0_8_ = (double)pUVar6 * ___xmm_00000000000000003ff0000000000000;
        auVar253._8_8_ = _UNK_150689518 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_748;
        *(double *)(pFVar29 + 8) = dStack_740;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_738;
        dVar239 = (double)local_8b8._0_8_ * local_858;
        dVar245 = (double)local_8b8._8_8_ * local_8a0;
        local_630 = local_858;
        dStack_628 = local_8a0;
        auVar217._8_4_ = SUB84(dVar245,0);
        auVar217._0_8_ = dVar239;
        uVar99 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar217._12_4_ = uVar99;
        auVar66._8_4_ = uVar263;
        auVar66._0_8_ = dVar97;
        auVar66._12_4_ = uVar264;
        auVar124._8_4_ = SUB84(dVar245,0);
        auVar124._0_8_ = dVar239;
        auVar124._12_4_ = uVar99;
        auVar218._0_8_ = auVar217._8_8_ * local_898 - dVar97 * dVar239;
        auVar218._8_8_ = auVar253._0_8_ * dStack_890 - auVar66._8_8_ * dVar245;
        auVar154 = blendpd(auVar124,auVar253,2);
        auVar198._8_4_ = SUB84(auVar218._8_8_,0);
        auVar198._0_8_ = auVar218._0_8_;
        auVar198._12_4_ = (int)((ulonglong)auVar218._8_8_ >> 0x20);
        auVar67._8_4_ = SUB84(auVar253._8_8_,0);
        auVar67._0_8_ = auVar253._0_8_;
        auVar67._12_4_ = (int)((ulonglong)auVar253._8_8_ >> 0x20);
        auVar125._0_8_ = auVar154._0_8_ * local_888 - auVar253._0_8_ * dVar38;
        auVar125._8_8_ = auVar154._8_8_ * dStack_880 - auVar67._8_8_ * dVar98;
        auVar154 = blendpd(auVar218,auVar125,2);
        dVar181 = auVar198._8_8_ + auVar198._8_8_;
        dVar186 = auVar125._0_8_ + auVar125._0_8_;
        auVar219._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar219._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar167._8_4_ = uVar99;
        auVar167._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar167._12_4_ = uVar187;
        auVar68._8_4_ = uVar99;
        auVar68._0_8_ = dVar181;
        auVar68._12_4_ = uVar187;
        auVar126._8_4_ = uVar99;
        auVar126._0_8_ = dVar181;
        auVar126._12_4_ = uVar187;
        auVar154 = blendpd(auVar126,auVar219,2);
        auVar168._0_8_ = auVar167._8_8_ * local_898 - dVar181 * dVar97;
        auVar168._8_8_ = auVar219._0_8_ * dStack_890 - auVar68._8_8_ * dVar237;
        auVar69._8_4_ = SUB84(auVar219._8_8_,0);
        auVar69._0_8_ = auVar219._0_8_;
        auVar69._12_4_ = (int)((ulonglong)auVar219._8_8_ >> 0x20);
        auVar127._0_8_ = auVar154._0_8_ * local_888 - auVar219._0_8_ * dVar38;
        auVar127._8_8_ = auVar154._8_8_ * dStack_880 - auVar69._8_8_ * dVar98;
        auVar70._8_4_ = SUB84(auVar168._8_8_,0);
        auVar70._0_8_ = auVar168._0_8_;
        auVar70._12_4_ = (int)((ulonglong)auVar168._8_8_ >> 0x20);
        auVar154 = blendpd(auVar168,auVar127,2);
        local_808 = dVar181 * dVar244 + dVar239 + auVar70._8_8_ + dVar236;
        dStack_800 = dVar186 * dVar244 + dVar245 + auVar127._0_8_ + dVar37;
        local_7f8 = auVar219._0_8_ * dVar244 + auVar253._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_620 = (double)pUVar6;
        if (((pFVar29 <= (FScriptContainerElement *)&local_808) &&
            ((FScriptContainerElement *)&local_808 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar254._0_8_ = (double)CONCAT44(uVar267,uVar266) * ___xmm_00000000000000003ff0000000000000
        ;
        auVar254._8_8_ = _UNK_150689518 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_808;
        *(double *)(pFVar29 + 8) = dStack_800;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_7f8;
        dVar239 = (double)local_8b8._0_8_ * local_8a8;
        dVar245 = (double)local_8b8._8_8_ * local_848;
        local_618 = local_8a8;
        dStack_610 = local_848;
        auVar220._8_4_ = SUB84(dVar245,0);
        auVar220._0_8_ = dVar239;
        uVar99 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar220._12_4_ = uVar99;
        local_608 = CONCAT44(uVar267,uVar266);
        auVar71._8_4_ = uVar263;
        auVar71._0_8_ = dVar97;
        auVar71._12_4_ = uVar264;
        auVar128._8_4_ = SUB84(dVar245,0);
        auVar128._0_8_ = dVar239;
        auVar128._12_4_ = uVar99;
        auVar221._0_8_ = auVar220._8_8_ * local_898 - dVar97 * dVar239;
        auVar221._8_8_ = auVar254._0_8_ * dStack_890 - auVar71._8_8_ * dVar245;
        auVar154 = blendpd(auVar128,auVar254,2);
        auVar199._8_4_ = SUB84(auVar221._8_8_,0);
        auVar199._0_8_ = auVar221._0_8_;
        auVar199._12_4_ = (int)((ulonglong)auVar221._8_8_ >> 0x20);
        auVar72._8_4_ = SUB84(auVar254._8_8_,0);
        auVar72._0_8_ = auVar254._0_8_;
        auVar72._12_4_ = (int)((ulonglong)auVar254._8_8_ >> 0x20);
        auVar129._0_8_ = auVar154._0_8_ * local_888 - auVar254._0_8_ * dVar38;
        auVar129._8_8_ = auVar154._8_8_ * dStack_880 - auVar72._8_8_ * dVar98;
        auVar154 = blendpd(auVar221,auVar129,2);
        dVar181 = auVar199._8_8_ + auVar199._8_8_;
        dVar186 = auVar129._0_8_ + auVar129._0_8_;
        auVar222._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar222._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar169._8_4_ = uVar99;
        auVar169._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar169._12_4_ = uVar187;
        auVar73._8_4_ = uVar99;
        auVar73._0_8_ = dVar181;
        auVar73._12_4_ = uVar187;
        auVar130._8_4_ = uVar99;
        auVar130._0_8_ = dVar181;
        auVar130._12_4_ = uVar187;
        auVar154 = blendpd(auVar130,auVar222,2);
        auVar170._0_8_ = auVar169._8_8_ * local_898 - dVar181 * dVar97;
        auVar170._8_8_ = auVar222._0_8_ * dStack_890 - auVar73._8_8_ * dVar237;
        auVar74._8_4_ = SUB84(auVar222._8_8_,0);
        auVar74._0_8_ = auVar222._0_8_;
        auVar74._12_4_ = (int)((ulonglong)auVar222._8_8_ >> 0x20);
        auVar131._0_8_ = auVar154._0_8_ * local_888 - auVar222._0_8_ * dVar38;
        auVar131._8_8_ = auVar154._8_8_ * dStack_880 - auVar74._8_8_ * dVar98;
        auVar75._8_4_ = SUB84(auVar170._8_8_,0);
        auVar75._0_8_ = auVar170._0_8_;
        auVar75._12_4_ = (int)((ulonglong)auVar170._8_8_ >> 0x20);
        auVar154 = blendpd(auVar170,auVar131,2);
        local_7f0 = dVar181 * dVar244 + dVar239 + auVar75._8_8_ + dVar236;
        dStack_7e8 = dVar186 * dVar244 + dVar245 + auVar131._0_8_ + dVar37;
        local_7e0 = auVar222._0_8_ * dVar244 + auVar254._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        if (((pFVar29 <= (FScriptContainerElement *)&local_7f0) &&
            ((FScriptContainerElement *)&local_7f0 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar255._0_8_ = (double)pUVar6 * ___xmm_00000000000000003ff0000000000000;
        auVar255._8_8_ = _UNK_150689518 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_7f0;
        *(double *)(pFVar29 + 8) = dStack_7e8;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_7e0;
        local_600 = local_8a8;
        dStack_5f8 = local_848;
        dVar239 = local_8a8 * (double)local_8b8._0_8_;
        dVar245 = local_848 * (double)local_8b8._8_8_;
        uVar99 = SUB84(dVar245,0);
        auVar223._8_4_ = uVar99;
        auVar223._0_8_ = dVar239;
        uVar187 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar223._12_4_ = uVar187;
        auVar76._8_4_ = uVar99;
        auVar76._0_8_ = dVar239;
        auVar76._12_4_ = uVar187;
        auVar132._8_4_ = uVar99;
        auVar132._0_8_ = dVar239;
        auVar132._12_4_ = uVar187;
        auVar154 = blendpd(auVar132,auVar255,2);
        auVar224._0_8_ = auVar223._8_8_ * local_898 - dVar239 * dVar97;
        auVar224._8_8_ = auVar255._0_8_ * dStack_890 - auVar76._8_8_ * dVar237;
        auVar77._8_4_ = SUB84(auVar255._8_8_,0);
        auVar77._0_8_ = auVar255._0_8_;
        auVar77._12_4_ = (int)((ulonglong)auVar255._8_8_ >> 0x20);
        auVar200._8_4_ = SUB84(auVar224._8_8_,0);
        auVar200._0_8_ = auVar224._0_8_;
        auVar200._12_4_ = (int)((ulonglong)auVar224._8_8_ >> 0x20);
        auVar133._0_8_ = auVar154._0_8_ * local_888 - auVar255._0_8_ * dVar38;
        auVar133._8_8_ = auVar154._8_8_ * dStack_880 - auVar77._8_8_ * dVar98;
        auVar154 = blendpd(auVar224,auVar133,2);
        dVar181 = auVar200._8_8_ + auVar200._8_8_;
        dVar186 = auVar133._0_8_ + auVar133._0_8_;
        auVar225._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar225._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar171._8_4_ = uVar99;
        auVar171._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar171._12_4_ = uVar187;
        auVar78._8_4_ = uVar99;
        auVar78._0_8_ = dVar181;
        auVar78._12_4_ = uVar187;
        auVar134._8_4_ = uVar99;
        auVar134._0_8_ = dVar181;
        auVar134._12_4_ = uVar187;
        auVar154 = blendpd(auVar134,auVar225,2);
        auVar172._0_8_ = auVar171._8_8_ * local_898 - dVar181 * dVar97;
        auVar172._8_8_ = auVar225._0_8_ * dStack_890 - auVar78._8_8_ * dVar237;
        auVar79._8_4_ = SUB84(auVar225._8_8_,0);
        auVar79._0_8_ = auVar225._0_8_;
        auVar79._12_4_ = (int)((ulonglong)auVar225._8_8_ >> 0x20);
        auVar135._0_8_ = auVar154._0_8_ * local_888 - auVar225._0_8_ * dVar38;
        auVar135._8_8_ = auVar154._8_8_ * dStack_880 - auVar79._8_8_ * dVar98;
        auVar80._8_4_ = SUB84(auVar172._8_8_,0);
        auVar80._0_8_ = auVar172._0_8_;
        auVar80._12_4_ = (int)((ulonglong)auVar172._8_8_ >> 0x20);
        auVar154 = blendpd(auVar172,auVar135,2);
        local_7d8 = dVar181 * dVar244 + dVar239 + auVar80._8_8_ + dVar236;
        dStack_7d0 = dVar186 * dVar244 + dVar245 + auVar135._0_8_ + dVar37;
        local_7c8 = auVar225._0_8_ * dVar244 + auVar255._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_5f0 = (double)pUVar6;
        if (((pFVar29 <= (FScriptContainerElement *)&local_7d8) &&
            ((FScriptContainerElement *)&local_7d8 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        dVar186 = _UNK_150689518;
        dVar181 = ___xmm_00000000000000003ff0000000000000;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_5d8 = CONCAT44(uVar267,uVar266);
        auVar256._0_8_ = (double)CONCAT44(uVar267,uVar266) * ___xmm_00000000000000003ff0000000000000
        ;
        auVar256._8_8_ = _UNK_150689518 * 0.0;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_7d8;
        *(double *)(pFVar29 + 8) = dStack_7d0;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_7c8;
        dVar240 = (double)local_8b8._0_8_ * local_8a8;
        dVar246 = (double)local_8b8._8_8_ * local_8a0;
        local_5e8 = local_8a8;
        dStack_5e0 = local_8a0;
        uVar99 = SUB84(dVar246,0);
        auVar226._8_4_ = uVar99;
        auVar226._0_8_ = dVar240;
        uVar187 = (undefined4)((ulonglong)dVar246 >> 0x20);
        auVar226._12_4_ = uVar187;
        auVar81._8_4_ = uVar99;
        auVar81._0_8_ = dVar240;
        auVar81._12_4_ = uVar187;
        auVar136._8_4_ = uVar99;
        auVar136._0_8_ = dVar240;
        auVar136._12_4_ = uVar187;
        auVar154 = blendpd(auVar136,auVar256,2);
        auVar227._0_8_ = auVar226._8_8_ * local_898 - dVar240 * dVar97;
        auVar227._8_8_ = auVar256._0_8_ * dStack_890 - auVar81._8_8_ * dVar237;
        auVar82._8_4_ = SUB84(auVar256._8_8_,0);
        auVar82._0_8_ = auVar256._0_8_;
        auVar82._12_4_ = (int)((ulonglong)auVar256._8_8_ >> 0x20);
        auVar201._8_4_ = SUB84(auVar227._8_8_,0);
        auVar201._0_8_ = auVar227._0_8_;
        auVar201._12_4_ = (int)((ulonglong)auVar227._8_8_ >> 0x20);
        auVar137._0_8_ = auVar154._0_8_ * local_888 - auVar256._0_8_ * dVar38;
        auVar137._8_8_ = auVar154._8_8_ * dStack_880 - auVar82._8_8_ * dVar98;
        auVar154 = blendpd(auVar227,auVar137,2);
        dVar239 = auVar201._8_8_ + auVar201._8_8_;
        dVar245 = auVar137._0_8_ + auVar137._0_8_;
        auVar228._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar228._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar245,0);
        auVar173._8_4_ = uVar99;
        auVar173._0_8_ = dVar239;
        uVar187 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar173._12_4_ = uVar187;
        auVar83._8_4_ = uVar99;
        auVar83._0_8_ = dVar239;
        auVar83._12_4_ = uVar187;
        auVar138._8_4_ = uVar99;
        auVar138._0_8_ = dVar239;
        auVar138._12_4_ = uVar187;
        auVar154 = blendpd(auVar138,auVar228,2);
        auVar174._0_8_ = auVar173._8_8_ * local_898 - dVar239 * dVar97;
        auVar174._8_8_ = auVar228._0_8_ * dStack_890 - auVar83._8_8_ * dVar237;
        auVar84._8_4_ = SUB84(auVar228._8_8_,0);
        auVar84._0_8_ = auVar228._0_8_;
        auVar84._12_4_ = (int)((ulonglong)auVar228._8_8_ >> 0x20);
        auVar139._0_8_ = auVar154._0_8_ * local_888 - auVar228._0_8_ * dVar38;
        auVar139._8_8_ = auVar154._8_8_ * dStack_880 - auVar84._8_8_ * dVar98;
        auVar85._8_4_ = SUB84(auVar174._8_8_,0);
        auVar85._0_8_ = auVar174._0_8_;
        auVar85._12_4_ = (int)((ulonglong)auVar174._8_8_ >> 0x20);
        auVar154 = blendpd(auVar174,auVar139,2);
        local_7c0 = dVar239 * dVar244 + dVar240 + auVar85._8_8_ + dVar236;
        dStack_7b8 = dVar245 * dVar244 + dVar246 + auVar139._0_8_ + dVar37;
        local_7b0 = auVar228._0_8_ * dVar244 + auVar256._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        if (((pFVar29 <= (FScriptContainerElement *)&local_7c0) &&
            ((FScriptContainerElement *)&local_7c0 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        auVar257._0_8_ = (double)pUVar6 * dVar181;
        auVar257._8_8_ = dVar186 * 0.0;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(double *)pFVar29 = local_7c0;
        *(double *)(pFVar29 + 8) = dStack_7b8;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_7b0;
        dVar239 = (double)local_8b8._0_8_ * local_8a8;
        dVar245 = (double)local_8b8._8_8_ * local_8a0;
        local_5d0 = local_8a8;
        dStack_5c8 = local_8a0;
        uVar99 = SUB84(dVar245,0);
        auVar229._8_4_ = uVar99;
        auVar229._0_8_ = dVar239;
        uVar187 = (undefined4)((ulonglong)dVar245 >> 0x20);
        auVar229._12_4_ = uVar187;
        auVar86._8_4_ = uVar99;
        auVar86._0_8_ = dVar239;
        auVar86._12_4_ = uVar187;
        auVar140._8_4_ = uVar99;
        auVar140._0_8_ = dVar239;
        auVar140._12_4_ = uVar187;
        auVar230._0_8_ = auVar229._8_8_ * local_898 - dVar239 * dVar97;
        auVar230._8_8_ = auVar257._0_8_ * dStack_890 - auVar86._8_8_ * dVar237;
        auVar154 = blendpd(auVar140,auVar257,2);
        auVar202._8_4_ = SUB84(auVar230._8_8_,0);
        auVar202._0_8_ = auVar230._0_8_;
        auVar202._12_4_ = (int)((ulonglong)auVar230._8_8_ >> 0x20);
        auVar87._8_4_ = SUB84(auVar257._8_8_,0);
        auVar87._0_8_ = auVar257._0_8_;
        auVar87._12_4_ = (int)((ulonglong)auVar257._8_8_ >> 0x20);
        auVar141._0_8_ = auVar154._0_8_ * local_888 - auVar257._0_8_ * dVar38;
        auVar141._8_8_ = auVar154._8_8_ * dStack_880 - auVar87._8_8_ * dVar98;
        auVar154 = blendpd(auVar230,auVar141,2);
        dVar181 = auVar202._8_8_ + auVar202._8_8_;
        dVar186 = auVar141._0_8_ + auVar141._0_8_;
        auVar231._0_8_ = auVar154._0_8_ + auVar154._0_8_;
        auVar231._8_8_ = auVar154._8_8_ + auVar154._8_8_;
        uVar99 = SUB84(dVar186,0);
        auVar175._8_4_ = uVar99;
        auVar175._0_8_ = dVar181;
        uVar187 = (undefined4)((ulonglong)dVar186 >> 0x20);
        auVar175._12_4_ = uVar187;
        auVar88._8_4_ = uVar99;
        auVar88._0_8_ = dVar181;
        auVar88._12_4_ = uVar187;
        auVar142._8_4_ = uVar99;
        auVar142._0_8_ = dVar181;
        auVar142._12_4_ = uVar187;
        auVar154 = blendpd(auVar142,auVar231,2);
        auVar176._0_8_ = auVar175._8_8_ * local_898 - dVar181 * dVar97;
        auVar176._8_8_ = auVar231._0_8_ * dStack_890 - auVar88._8_8_ * dVar237;
        auVar89._8_4_ = SUB84(auVar231._8_8_,0);
        auVar89._0_8_ = auVar231._0_8_;
        auVar89._12_4_ = (int)((ulonglong)auVar231._8_8_ >> 0x20);
        auVar143._0_8_ = auVar154._0_8_ * local_888 - auVar231._0_8_ * dVar38;
        auVar143._8_8_ = auVar154._8_8_ * dStack_880 - auVar89._8_8_ * dVar98;
        auVar90._8_4_ = SUB84(auVar176._8_8_,0);
        auVar90._0_8_ = auVar176._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar176._8_8_ >> 0x20);
        auVar154 = blendpd(auVar176,auVar143,2);
        local_7a8._0_8_ = dVar181 * dVar244 + dVar239 + auVar90._8_8_ + dVar236;
        local_7a8._8_8_ = dVar186 * dVar244 + dVar245 + auVar143._0_8_ + dVar37;
        local_798 = auVar231._0_8_ * dVar244 + auVar257._0_8_ + auVar154._0_8_ + dVar205;
        pFVar29 = (pFVar34->VertexData).AllocatorInstance.Data;
        local_5c0 = (double)pUVar6;
        if (((pFVar29 <= (FScriptContainerElement *)local_7a8) &&
            ((FScriptContainerElement *)local_7a8 < pFVar29 + (longlong)*piVar28 * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (pFVar34->VertexData).ArrayNum;
        if (iVar19 == *piVar28) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar34->VertexData).AllocatorInstance,piVar28);
        }
        (pFVar34->VertexData).ArrayNum = iVar19 + 1;
        pFVar23 = (pFVar34->VertexData).AllocatorInstance.Data;
        pFVar29 = pFVar23 + (longlong)iVar19 * 0x18;
        *(undefined8 *)pFVar29 = local_7a8._0_8_;
        *(undefined8 *)(pFVar29 + 8) = local_7a8._8_8_;
        *(double *)(pFVar23 + (longlong)iVar19 * 0x18 + 0x10) = local_798;
        FKConvexElem::UpdateElemBox(pFVar34);
        uVar27 = (ulonglong)local_8c0;
        pFVar30 = pFVar30 + 0x70;
      }
      TArray<FKBoxElem,TSizedDefaultAllocator<32>_>::Empty(&(pUVar6->AggGeom).BoxElems,0);
      pUVar16 = local_818;
      dVar98 = __real_c7efffffe0000000;
      dVar38 = __real_47efffffe0000000;
      local_860 = pTVar15->DebugPtr;
      local_8c0 = (local_860->AggGeom).ConvexElems.ArrayNum;
      uVar27 = (ulonglong)(int)local_8c0;
      pFVar34 = (FKConvexElem *)(local_860->AggGeom).ConvexElems.AllocatorInstance.Data;
      pFVar33 = pFVar34 + uVar27;
      piVar28 = &(pFVar34->VertexData).ArrayNum;
      while( true ) {
        if ((local_860->AggGeom).ConvexElems.ArrayNum != (int)uVar27) {
          local_8c5 = 0;
          `TCheckedPointerIterator<FKConvexElem,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8c5);
        }
        if (pFVar34 == pFVar33) break;
        local_858 = *(double *)(piVar28 + 0x1e);
        dStack_850 = *(double *)(piVar28 + 0x20);
        local_848 = *(double *)(piVar28 + 0x22);
        uStack_840 = *(undefined8 *)(piVar28 + 0x24);
        local_8b8 = *(undefined1 (*) [16])(piVar28 + 0x26);
        local_818 = *(USplineMeshComponent **)(piVar28 + 0x2a);
        dStack_810 = *(double *)(piVar28 + 0x2c);
        auVar154 = *(undefined1 (*) [16])(piVar28 + 0x16);
        auVar155 = *(undefined1 (*) [16])(piVar28 + 0x1a);
        iVar19 = *piVar28;
        FVar32.Data = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                       (piVar28 + -2))->AllocatorInstance).Data;
        pFVar30 = FVar32.Data + (longlong)iVar19 * 0x18;
        dVar205 = *(double *)*(undefined1 (*) [16])(piVar28 + 0x26);
        dVar236 = *(double *)(piVar28 + 0x28);
        while( true ) {
          dVar97 = dStack_850;
          dVar37 = local_858;
          if (*piVar28 != iVar19) {
            local_8c4[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_8c4);
            dVar205 = (double)local_8b8._0_8_;
            dVar236 = (double)local_8b8._8_8_;
          }
          if (FVar32.Data == pFVar30) break;
          uVar4 = (pUVar16->ForwardAxis).Value;
          dVar244 = auVar155._0_8_;
          dVar237 = auVar154._8_8_;
          dVar181 = auVar155._8_8_;
          dVar205 = dVar205 * *(double *)&(FVar32.Data)->field_0x0;
          dVar236 = dVar236 * *(double *)(FVar32.Data + 8);
          auVar262._0_8_ = *(double *)&FVar32.Data[0x10].field_0x0 * (double)local_818;
          auVar262._8_8_ = dStack_810 * 0.0;
          uVar99 = SUB84(dVar236,0);
          auVar232._8_4_ = uVar99;
          auVar232._0_8_ = dVar205;
          uVar187 = (undefined4)((ulonglong)dVar236 >> 0x20);
          auVar232._12_4_ = uVar187;
          auVar112._8_4_ = uVar99;
          auVar112._0_8_ = dVar205;
          auVar112._12_4_ = uVar187;
          auVar144._8_4_ = uVar99;
          auVar144._0_8_ = dVar205;
          auVar144._12_4_ = uVar187;
          auVar145 = blendpd(auVar144,auVar262,2);
          auVar203 = blendpd(auVar154,auVar155,2);
          auVar233._0_8_ = auVar232._8_8_ * auVar154._0_8_ - dVar205 * dVar237;
          auVar233._8_8_ = auVar262._0_8_ * dVar237 - auVar112._8_8_ * dVar244;
          auVar204._8_4_ = SUB84(auVar262._8_8_,0);
          auVar204._0_8_ = auVar262._0_8_;
          auVar204._12_4_ = (int)((ulonglong)auVar262._8_8_ >> 0x20);
          auVar185._8_4_ = SUB84(auVar233._8_8_,0);
          auVar185._0_8_ = auVar233._0_8_;
          auVar185._12_4_ = (int)((ulonglong)auVar233._8_8_ >> 0x20);
          auVar146._0_8_ = auVar145._0_8_ * dVar244 - auVar262._0_8_ * auVar203._0_8_;
          auVar146._8_8_ = auVar145._8_8_ * dVar181 - auVar204._8_8_ * auVar203._8_8_;
          auVar112 = blendpd(auVar233,auVar146,2);
          dVar186 = auVar185._8_8_ + auVar185._8_8_;
          dVar239 = auVar146._0_8_ + auVar146._0_8_;
          auVar234._0_8_ = auVar112._0_8_ + auVar112._0_8_;
          auVar234._8_8_ = auVar112._8_8_ + auVar112._8_8_;
          uVar99 = SUB84(dVar239,0);
          auVar177._8_4_ = uVar99;
          auVar177._0_8_ = dVar186;
          uVar187 = (undefined4)((ulonglong)dVar239 >> 0x20);
          auVar177._12_4_ = uVar187;
          auVar145._8_4_ = uVar99;
          auVar145._0_8_ = dVar186;
          auVar145._12_4_ = uVar187;
          auVar147._8_4_ = uVar99;
          auVar147._0_8_ = dVar186;
          auVar147._12_4_ = uVar187;
          auVar112 = blendpd(auVar147,auVar234,2);
          auVar178._0_8_ = auVar177._8_8_ * auVar154._0_8_ - dVar186 * dVar237;
          auVar178._8_8_ = auVar234._0_8_ * dVar237 - auVar145._8_8_ * dVar244;
          auVar91._8_4_ = SUB84(auVar234._8_8_,0);
          auVar91._0_8_ = auVar234._0_8_;
          auVar91._12_4_ = (int)((ulonglong)auVar234._8_8_ >> 0x20);
          auVar148._0_8_ = auVar112._0_8_ * dVar244 - auVar234._0_8_ * auVar203._0_8_;
          auVar148._8_8_ = auVar112._8_8_ * dVar181 - auVar91._8_8_ * auVar203._8_8_;
          auVar203._8_4_ = SUB84(auVar178._8_8_,0);
          auVar203._0_8_ = auVar178._0_8_;
          auVar203._12_4_ = (int)((ulonglong)auVar178._8_8_ >> 0x20);
          auVar112 = blendpd(auVar178,auVar148,2);
          local_780 = dVar181 * auVar234._0_8_ + auVar262._0_8_ + auVar112._0_8_ + local_848;
          dVar37 = dVar181 * dVar186 + dVar205 + auVar203._8_8_ + dVar37;
          dVar97 = dVar181 * dVar239 + dVar236 + auVar148._0_8_ + dVar97;
          local_790._8_4_ = SUB84(dVar97,0);
          local_790._0_8_ = dVar37;
          local_790._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
          if ((((uVar4 != '\0') && (dVar37 = dVar97, uVar4 != '\x01')) &&
              (dVar37 = local_780, uVar4 != '\x02')) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                                  ,0x1fd,L""), dVar37 = local_780, bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_830 = dVar37;
          if ((dVar37 < dVar98) || (dVar38 < dVar37)) {
            local_700 = &local_830;
            `UE::SplineMesh::RealToFloatChecked'::__l2::<lambda_1>::operator()(&local_700);
          }
          dVar205 = local_830;
          pFVar24 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_538,pUVar16);
          FSplineMeshSceneProxyDesc::CalcSliceTransform(pFVar24,&local_1f8,(float)dVar205);
          dVar244 = local_1f8.Rotation.ZW.m128d_f64[0];
          local_5a8 = local_878._s_0.Z * local_780;
          local_5b8 = local_878._s_0.X * (double)local_790._0_8_;
          dStack_5b0 = local_878._s_0.Y * (double)local_790._8_8_;
          auVar265._0_8_ = local_5a8 * local_1f8.Scale3D.ZW.m128d_f64[0];
          auVar265._8_8_ = local_1f8.Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar205 = local_1f8.Scale3D.XY.m128d_f64[0] * local_5b8;
          dVar236 = local_1f8.Scale3D.XY.m128d_f64[1] * dStack_5b0;
          uVar99 = (undefined4)((ulonglong)dVar236 >> 0x20);
          auVar258._8_4_ = SUB84(dVar236,0);
          auVar258._0_8_ = dVar205;
          auVar258._12_4_ = uVar99;
          auVar149._8_4_ = SUB84(dVar236,0);
          auVar149._0_8_ = dVar205;
          auVar149._12_4_ = uVar99;
          auVar112 = blendpd(auVar149,auVar265,2);
          dVar37 = local_1f8.Rotation.XY.m128d_f64[1];
          dVar181 = local_1f8.Rotation.ZW.m128d_f64[1];
          auVar204 = blendpd((undefined1  [16])local_1f8.Rotation.XY.m128d_f64,
                             (undefined1  [16])local_1f8.Rotation.ZW.m128d_f64,2);
          auVar92._8_4_ = local_1f8.Rotation.ZW.m128d_f64[0]._0_4_;
          auVar92._0_8_ = dVar37;
          auVar92._12_4_ = local_1f8.Rotation.ZW.m128d_f64[0]._4_4_;
          auVar259._0_8_ = auVar258._8_8_ * local_1f8.Rotation.XY.m128d_f64[0] - dVar37 * dVar205;
          auVar259._8_8_ = auVar265._0_8_ * dVar37 - auVar92._8_8_ * dVar236;
          auVar235._8_4_ = SUB84(auVar259._8_8_,0);
          auVar235._0_8_ = auVar259._0_8_;
          auVar235._12_4_ = (int)((ulonglong)auVar259._8_8_ >> 0x20);
          auVar150._0_8_ = auVar112._0_8_ * dVar244 - auVar204._0_8_ * auVar265._0_8_;
          auVar150._8_8_ = auVar112._8_8_ * dVar181 - auVar204._8_8_ * auVar265._8_8_;
          auVar112 = blendpd(auVar259,auVar150,2);
          dVar97 = auVar235._8_8_ + auVar235._8_8_;
          dVar237 = auVar150._0_8_ + auVar150._0_8_;
          auVar260._0_8_ = auVar112._0_8_ + auVar112._0_8_;
          auVar260._8_8_ = auVar112._8_8_ + auVar112._8_8_;
          uVar99 = SUB84(dVar237,0);
          auVar179._8_4_ = uVar99;
          auVar179._0_8_ = dVar97;
          uVar187 = (undefined4)((ulonglong)dVar237 >> 0x20);
          auVar179._12_4_ = uVar187;
          auVar93._8_4_ = uVar99;
          auVar93._0_8_ = dVar97;
          auVar93._12_4_ = uVar187;
          auVar151._8_4_ = uVar99;
          auVar151._0_8_ = dVar97;
          auVar151._12_4_ = uVar187;
          auVar112 = blendpd(auVar151,auVar260,2);
          auVar180._0_8_ = auVar179._8_8_ * local_1f8.Rotation.XY.m128d_f64[0] - dVar97 * dVar37;
          auVar180._8_8_ = auVar260._0_8_ * dVar37 - auVar93._8_8_ * dVar244;
          auVar94._8_4_ = SUB84(auVar260._8_8_,0);
          auVar94._0_8_ = auVar260._0_8_;
          auVar94._12_4_ = (int)((ulonglong)auVar260._8_8_ >> 0x20);
          auVar152._0_8_ = auVar112._0_8_ * dVar244 - auVar260._0_8_ * auVar204._0_8_;
          auVar152._8_8_ = auVar112._8_8_ * dVar181 - auVar94._8_8_ * auVar204._8_8_;
          auVar95._8_4_ = SUB84(auVar180._8_8_,0);
          auVar95._0_8_ = auVar180._0_8_;
          auVar95._12_4_ = (int)((ulonglong)auVar180._8_8_ >> 0x20);
          auVar112 = blendpd(auVar180,auVar152,2);
          local_590 = auVar260._0_8_ * dVar181 + auVar265._0_8_ + auVar112._0_8_ +
                      local_1f8.Translation.ZW.m128d_f64[0];
          local_5a0._0_8_ =
               dVar97 * dVar181 + dVar205 + auVar95._8_8_ + local_1f8.Translation.XY.m128d_f64[0];
          local_5a0._8_8_ =
               dVar237 * dVar181 + dVar236 + auVar152._0_8_ + local_1f8.Translation.XY.m128d_f64[1];
          *(undefined1 (*) [16])FVar32.Data = local_5a0;
          *(double *)&FVar32.Data[0x10].field_0x0 = local_590;
          FVar32.Data = FVar32.Data + 0x18;
          dVar205 = (double)local_8b8._0_8_;
          dVar236 = (double)local_8b8._8_8_;
        }
        bVar18 = UE::Math::TTransform<double>::IsValid(&UE::Math::TTransform<double>::Identity);
        if ((!bVar18) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5523523784574763146>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\ConvexElem.h"
                                ,0x8a,"InTransform.IsValid()"), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(double (*) [2])(piVar28 + 0x16) =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        *(double (*) [2])(piVar28 + 0x1a) =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        *(double (*) [2])(piVar28 + 0x1e) =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        *(double (*) [2])(piVar28 + 0x22) =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        *(double (*) [2])(piVar28 + 0x26) =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        *(double (*) [2])(piVar28 + 0x2a) =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        FKConvexElem::UpdateElemBox(pFVar34);
        pFVar34 = pFVar34 + 1;
        uVar27 = (ulonglong)local_8c0;
        piVar28 = piVar28 + 0x40;
      }
      (**(code **)(local_828->DebugPtr->_padding_ + 0x2b0))();
    }
  }
  return;
}

// Serialize @ 1479e6380

void __thiscall USplineMeshComponent::Serialize(USplineMeshComponent *this,FArchive *param_1)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  
  UStaticMeshComponent::Serialize((UStaticMeshComponent *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0xe8) {
    fVar3 = (this->SplineParams).StartRoll - __real_3fc90fdb;
    dVar1 = (this->SplineParams).StartOffset.field0_0x0._s_0.X;
    (this->ForwardAxis).Value = '\x02';
    (this->SplineParams).StartRoll = fVar3;
    (this->SplineParams).EndRoll = (this->SplineParams).EndRoll - __real_3fc90fdb;
    uVar2 = *(undefined8 *)((longlong)&(this->SplineParams).StartOffset.field0_0x0 + 8);
    (this->SplineParams).StartOffset.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
    uVar2 = *(undefined8 *)((longlong)&(this->SplineParams).EndOffset.field0_0x0 + 8);
    uVar4 = (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)uVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    (this->SplineParams).StartOffset.field0_0x0._s_0.Y = dVar1;
    dVar1 = (this->SplineParams).EndOffset.field0_0x0._s_0.X;
    (this->SplineParams).EndOffset.field0_0x0._s_0.X = (double)CONCAT44(uVar5,uVar4);
    (this->SplineParams).EndOffset.field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// Serialize @ 1479e6440

void __thiscall
USplineMeshComponent::Serialize(USplineMeshComponent *this,FStructuredArchiveRecord param_1)

{
  double dVar1;
  undefined8 uVar2;
  FArchive *pFVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UStaticMeshComponent::Serialize((UStaticMeshComponent *)this,pFVar3);
  if (*(int *)&pFVar3->field_0x40 < 0xe8) {
    fVar4 = (this->SplineParams).StartRoll - __real_3fc90fdb;
    dVar1 = (this->SplineParams).StartOffset.field0_0x0._s_0.X;
    (this->ForwardAxis).Value = '\x02';
    (this->SplineParams).StartRoll = fVar4;
    (this->SplineParams).EndRoll = (this->SplineParams).EndRoll - __real_3fc90fdb;
    uVar2 = *(undefined8 *)((longlong)&(this->SplineParams).StartOffset.field0_0x0 + 8);
    (this->SplineParams).StartOffset.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
    uVar2 = *(undefined8 *)((longlong)&(this->SplineParams).EndOffset.field0_0x0 + 8);
    uVar5 = (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar6 = (uint)((ulonglong)uVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    (this->SplineParams).StartOffset.field0_0x0._s_0.Y = dVar1;
    dVar1 = (this->SplineParams).EndOffset.field0_0x0._s_0.X;
    (this->SplineParams).EndOffset.field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
    (this->SplineParams).EndOffset.field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// SetBoundaryMax @ 1479e6c70

void __thiscall
USplineMeshComponent::SetBoundaryMax(USplineMeshComponent *this,float param_1,bool param_2)

{
  this->bMeshDirty = '\x01';
  this->SplineBoundaryMax = param_1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetBoundaryMin @ 1479e6ca0

void __thiscall
USplineMeshComponent::SetBoundaryMin(USplineMeshComponent *this,float param_1,bool param_2)

{
  this->bMeshDirty = '\x01';
  this->SplineBoundaryMin = param_1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetEndOffset @ 1479e7f60

void __thiscall
USplineMeshComponent::SetEndOffset
          (USplineMeshComponent *this,TVector2<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->bMeshDirty = '\x01';
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = dVar1;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y = dVar2;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetEndPosition @ 1479e7f90

void __thiscall
USplineMeshComponent::SetEndPosition
          (USplineMeshComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  this->bMeshDirty = '\x01';
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = dVar2;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = dVar3;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = dVar1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetEndRoll @ 1479e7fd0

void __thiscall
USplineMeshComponent::SetEndRoll(USplineMeshComponent *this,float param_1,bool param_2)

{
  this->bMeshDirty = '\x01';
  (this->SplineParams).EndRoll = param_1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetEndRollDegrees @ 1479e8000

void __thiscall
USplineMeshComponent::SetEndRollDegrees(USplineMeshComponent *this,float param_1,bool param_2)

{
  float fVar1;
  
  fVar1 = param_1 * __real_3c8efa35;
  this->bMeshDirty = '\x01';
  (this->SplineParams).EndRoll = fVar1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetEndScale @ 1479e8030

void __thiscall
USplineMeshComponent::SetEndScale(USplineMeshComponent *this,TVector2<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  
  if (((param_1->field0_0x0)._s_0.X != (this->SplineParams).EndScale.field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->SplineParams).EndScale.field0_0x0._s_0.Y)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    this->bMeshDirty = '\x01';
    (this->SplineParams).EndScale.field0_0x0._s_0.X = dVar1;
    (this->SplineParams).EndScale.field0_0x0._s_0.Y = dVar2;
    if (param_2) {
      UpdateRenderStateAndCollision_Internal(this,false);
      return;
    }
  }
  return;
}

// SetEndTangent @ 1479e8080

void __thiscall
USplineMeshComponent::SetEndTangent
          (USplineMeshComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((((param_1->field0_0x0)._s_0.X != (this->SplineParams).EndTangent.field0_0x0._s_0.X) ||
      ((param_1->field0_0x0)._s_0.Y != (this->SplineParams).EndTangent.field0_0x0._s_0.Y)) ||
     ((param_1->field0_0x0)._s_0.Z != (this->SplineParams).EndTangent.field0_0x0._s_0.Z)) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    this->bMeshDirty = '\x01';
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->SplineParams).EndTangent.field0_0x0._s_0.X = dVar2;
    (this->SplineParams).EndTangent.field0_0x0._s_0.Y = dVar3;
    (this->SplineParams).EndTangent.field0_0x0._s_0.Z = dVar1;
    if (param_2) {
      UpdateRenderStateAndCollision_Internal(this,false);
      return;
    }
  }
  return;
}

// SetForwardAxis @ 1479e8800

void __thiscall
USplineMeshComponent::SetForwardAxis(USplineMeshComponent *this,Type param_1,bool param_2)

{
  if ((this->ForwardAxis).Value != param_1) {
    (this->ForwardAxis).Value = (uchar)param_1;
    this->bMeshDirty = '\x01';
    if (param_2) {
      UpdateRenderStateAndCollision_Internal(this,false);
      return;
    }
  }
  return;
}

// SetSplineUpDir @ 1479eba80

void __thiscall
USplineMeshComponent::SetSplineUpDir
          (USplineMeshComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  this->bMeshDirty = '\x01';
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->SplineUpDir).field0_0x0 = auVar4;
  (this->SplineUpDir).field0_0x0._s_0.Z = (double)uVar7;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
  }
  return;
}

// SetStartAndEnd @ 1479ebb40

void __thiscall
USplineMeshComponent::SetStartAndEnd
          (USplineMeshComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (((((((param_1->field0_0x0)._s_0.X != (this->SplineParams).StartPos.field0_0x0._s_0.X) ||
         ((param_1->field0_0x0)._s_0.Y != (this->SplineParams).StartPos.field0_0x0._s_0.Y)) ||
        ((param_1->field0_0x0)._s_0.Z != (this->SplineParams).StartPos.field0_0x0._s_0.Z)) ||
       ((((param_2->field0_0x0)._s_0.X != (this->SplineParams).StartTangent.field0_0x0._s_0.X ||
         ((param_2->field0_0x0)._s_0.Y != (this->SplineParams).StartTangent.field0_0x0._s_0.Y)) ||
        (((param_2->field0_0x0)._s_0.Z != (this->SplineParams).StartTangent.field0_0x0._s_0.Z ||
         (((param_3->field0_0x0)._s_0.X != (this->SplineParams).EndPos.field0_0x0._s_0.X ||
          ((param_3->field0_0x0)._s_0.Y != (this->SplineParams).EndPos.field0_0x0._s_0.Y)))))))) ||
      ((param_3->field0_0x0)._s_0.Z != (this->SplineParams).EndPos.field0_0x0._s_0.Z)) ||
     ((((param_4->field0_0x0)._s_0.X != (this->SplineParams).EndTangent.field0_0x0._s_0.X ||
       ((param_4->field0_0x0)._s_0.Y != (this->SplineParams).EndTangent.field0_0x0._s_0.Y)) ||
      ((param_4->field0_0x0)._s_0.Z != (this->SplineParams).EndTangent.field0_0x0._s_0.Z)))) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar3 = (param_4->field0_0x0)._s_0.X;
    dVar4 = (param_4->field0_0x0)._s_0.Y;
    (this->SplineParams).StartPos.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->SplineParams).StartPos.field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    (this->SplineParams).StartPos.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (this->SplineParams).StartTangent.field0_0x0._s_0.X = dVar2;
    (this->SplineParams).StartTangent.field0_0x0._s_0.Y = dVar5;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    (this->SplineParams).StartTangent.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    (this->SplineParams).EndPos.field0_0x0._s_0.X = dVar2;
    (this->SplineParams).EndPos.field0_0x0._s_0.Y = dVar5;
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    (this->SplineParams).EndPos.field0_0x0._s_0.Z = dVar1;
    if (((dVar3 != (this->SplineParams).EndTangent.field0_0x0._s_0.X) ||
        (dVar4 != (this->SplineParams).EndTangent.field0_0x0._s_0.Y)) ||
       (dVar2 != (this->SplineParams).EndTangent.field0_0x0._s_0.Z)) {
      dVar2 = (param_4->field0_0x0)._s_0.X;
      dVar3 = (param_4->field0_0x0)._s_0.Y;
      this->bMeshDirty = '\x01';
      dVar1 = (param_4->field0_0x0)._s_0.Z;
      (this->SplineParams).EndTangent.field0_0x0._s_0.X = dVar2;
      (this->SplineParams).EndTangent.field0_0x0._s_0.Y = dVar3;
      (this->SplineParams).EndTangent.field0_0x0._s_0.Z = dVar1;
    }
    this->bMeshDirty = '\x01';
    if (param_5) {
      UpdateRenderStateAndCollision_Internal(this,false);
      return;
    }
  }
  return;
}

// SetStartOffset @ 1479ebcf0

void __thiscall
USplineMeshComponent::SetStartOffset
          (USplineMeshComponent *this,TVector2<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  this->bMeshDirty = '\x01';
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = dVar1;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y = dVar2;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetStartPosition @ 1479ebd20

void __thiscall
USplineMeshComponent::SetStartPosition
          (USplineMeshComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  this->bMeshDirty = '\x01';
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->SplineParams).StartPos.field0_0x0._s_0.X = dVar2;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = dVar3;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z = dVar1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetStartRoll @ 1479ebd60

void __thiscall
USplineMeshComponent::SetStartRoll(USplineMeshComponent *this,float param_1,bool param_2)

{
  this->bMeshDirty = '\x01';
  (this->SplineParams).StartRoll = param_1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetStartRollDegrees @ 1479ebd90

void __thiscall
USplineMeshComponent::SetStartRollDegrees(USplineMeshComponent *this,float param_1,bool param_2)

{
  float fVar1;
  
  fVar1 = param_1 * __real_3c8efa35;
  this->bMeshDirty = '\x01';
  (this->SplineParams).StartRoll = fVar1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetStartScale @ 1479ebdc0

void __thiscall
USplineMeshComponent::SetStartScale
          (USplineMeshComponent *this,TVector2<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  
  if (((param_1->field0_0x0)._s_0.X != (this->SplineParams).StartScale.field0_0x0._s_0.X) ||
     ((param_1->field0_0x0)._s_0.Y != (this->SplineParams).StartScale.field0_0x0._s_0.Y)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    this->bMeshDirty = '\x01';
    (this->SplineParams).StartScale.field0_0x0._s_0.X = dVar1;
    (this->SplineParams).StartScale.field0_0x0._s_0.Y = dVar2;
    if (param_2) {
      UpdateRenderStateAndCollision_Internal(this,false);
      return;
    }
  }
  return;
}

// SetStartTangent @ 1479ebe10

void __thiscall
USplineMeshComponent::SetStartTangent
          (USplineMeshComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  this->bMeshDirty = '\x01';
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = dVar2;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y = dVar3;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = dVar1;
  if (param_2) {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// SetbNeverNeedsCookedCollisionData @ 1479ed290

void __thiscall
USplineMeshComponent::SetbNeverNeedsCookedCollisionData(USplineMeshComponent *this,bool param_1)

{
  UBodySetup *pUVar1;
  
  this->bNeverNeedsCookedCollisionData = '\0';
  pUVar1 = (this->BodySetup).field0_0x0.DebugPtr;
  this->field_0x77d = this->field_0x77d | param_1 << 3;
  if (pUVar1 != (UBodySetup *)0x0) {
    pUVar1->bNeverNeedsCookedCollisionData = '\0';
    pUVar1->field_0xd9 = pUVar1->field_0xd9 | param_1 << 3;
  }
  return;
}

// ShouldRenderNaniteSplineMeshes @ 1479edce0

bool __cdecl USplineMeshComponent::ShouldRenderNaniteSplineMeshes(void)

{
  bool bVar1;
  
  bVar1 = NaniteSplineMeshesSupported();
  if ((bVar1) && (GSplineMeshRenderNanite != 0)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUSplineMeshComponent @ 1479edf60

void __cdecl USplineMeshComponent::StaticRegisterNativesUSplineMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x20;
  local_18.DataPtr = Z_Construct_UClass_USplineMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBounds @ 1479f0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USplineMeshComponent::UpdateBounds(USplineMeshComponent *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UStaticMesh *this_00;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  UNavCollisionBase *pUVar12;
  TBoxSphereBounds<double,double> *pTVar13;
  FSplineMeshSceneProxyDesc *this_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStackY_278 [32];
  TVector<double>_u_0 local_248;
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  TBoxSphereBounds<double,double> local_210;
  FSplineMeshSceneProxyDesc local_1d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  char local_98;
  TVector<double>_u_0 local_90;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  USceneComponent::UpdateBounds((USceneComponent *)this);
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  dVar7 = (double)this->_padding_ + (double)this->_padding_;
  this_00 = (UStaticMesh *)this->_padding_;
  dVar16 = dVar1 - dVar3;
  local_60 = 1;
  dVar8 = dVar2 + dVar4;
  auVar6._8_4_ = SUB84(dVar16,0);
  auVar6._0_8_ = (double)this->_padding_ - (double)this->_padding_;
  auVar6._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])&(this->CachedNavigationBounds).Min.field0_0x0 = auVar6;
  auVar15._8_4_ = SUB84(dVar7,0);
  auVar15._0_8_ = dVar2 - dVar4;
  auVar15._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedNavigationBounds).Min.field0_0x0 + 0x10) = auVar15;
  auVar9._8_4_ = SUB84(dVar8,0);
  auVar9._0_8_ = dVar1 + dVar3;
  auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedNavigationBounds).Max.field0_0x0 + 8) = auVar9;
  (this->CachedNavigationBounds).IsValid = 1;
  (this->CachedNavigationBounds).Pad[0] = (char)uStack_5f;
  (this->CachedNavigationBounds).Pad[1] = (char)((uint7)uStack_5f >> 8);
  (this->CachedNavigationBounds).Pad[2] = (char)((uint7)uStack_5f >> 0x10);
  (this->CachedNavigationBounds).Pad[3] = (char)((uint7)uStack_5f >> 0x18);
  (this->CachedNavigationBounds).Pad[4] = (char)((uint7)uStack_5f >> 0x20);
  (this->CachedNavigationBounds).Pad[5] = (char)((uint7)uStack_5f >> 0x28);
  (this->CachedNavigationBounds).Pad[6] = (char)((uint7)uStack_5f >> 0x30);
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar12 = UStaticMesh::GetNavCollision(this_00);
    if (pUVar12 != (UNavCollisionBase *)0x0) {
      (**(code **)(pUVar12->_padding_ + 0x2b8))(pUVar12);
      if (pUVar12->bIsDynamicObstacle == 0) {
        if ((pUVar12->bHasConvexGeometry != 0) && (local_98 != '\0')) {
          local_b0 = local_b0 - local_c8;
          local_a0 = local_a0 - local_b8;
          local_a8 = local_a8 - local_c0;
          local_230 = local_b0 * __real_3fe0000000000000;
          local_220 = local_a0 * __real_3fe0000000000000;
          local_228 = local_a8 * __real_3fe0000000000000;
          local_248._s_0.X = local_230 + local_c8;
          local_248._s_0.Y = local_228 + local_c0;
          auVar14._0_8_ = local_220 + local_b8;
          auVar14._8_8_ = 0;
          auVar10._8_8_ = 0;
          auVar10._0_8_ =
               (local_a8 * local_a8 + local_b0 * local_b0 + local_a0 * local_a0) *
               __real_3fd0000000000000;
          auVar15 = sqrtpd(auVar14,auVar10);
          local_218 = auVar15._0_8_;
          local_248._s_0.Z = auVar14._0_8_;
          pTVar13 = UStaticMesh::GetBounds(this_00,&local_210);
          this_01 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_1d8,this);
          FSplineMeshSceneProxyDesc::ComputeDistortedBounds
                    (this_01,(TBox<double> *)&local_90._s_0,(TTransform<double> *)&this->_padding_,
                     pTVar13,(TBoxSphereBounds<double,double> *)&local_248._s_0);
          (this->CachedNavigationBounds).Min.field0_0x0._s_0.X = local_90._s_0.X;
          (this->CachedNavigationBounds).Min.field0_0x0._s_0.Y = local_90._s_0.Y;
          (this->CachedNavigationBounds).Min.field0_0x0._s_0.Z = local_90._s_0.Z;
          (this->CachedNavigationBounds).Max.field0_0x0._s_0.X = dStack_78;
          (this->CachedNavigationBounds).Max.field0_0x0._s_0.Y = local_70;
          (this->CachedNavigationBounds).Max.field0_0x0._s_0.Z = dStack_68;
          (this->CachedNavigationBounds).IsValid = local_60;
          (this->CachedNavigationBounds).Pad[0] = (char)uStack_5f;
          (this->CachedNavigationBounds).Pad[1] = (char)((uint7)uStack_5f >> 8);
          (this->CachedNavigationBounds).Pad[2] = (char)((uint7)uStack_5f >> 0x10);
          (this->CachedNavigationBounds).Pad[3] = (char)((uint7)uStack_5f >> 0x18);
          (this->CachedNavigationBounds).Pad[4] = (char)((uint7)uStack_5f >> 0x20);
          (this->CachedNavigationBounds).Pad[5] = (char)((uint7)uStack_5f >> 0x28);
          (this->CachedNavigationBounds).Pad[6] = (char)((uint7)uStack_5f >> 0x30);
        }
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<604511664749937386>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineMeshComponent.cpp"
                            ,0x2ea,"!NavCollision->IsDynamicObstacle()");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  return;
}

// UpdateMesh @ 1479f20c0

void __thiscall USplineMeshComponent::UpdateMesh(USplineMeshComponent *this)

{
  if (this->bMeshDirty != '\0') {
    UpdateRenderStateAndCollision_Internal(this,false);
    return;
  }
  return;
}

// UpdateMesh_Concurrent @ 1479f20e0

void __thiscall USplineMeshComponent::UpdateMesh_Concurrent(USplineMeshComponent *this)

{
  if (this->bMeshDirty != '\0') {
    UpdateRenderStateAndCollision_Internal(this,true);
    return;
  }
  return;
}

// UpdateRenderStateAndCollision @ 1479f2860

void __thiscall USplineMeshComponent::UpdateRenderStateAndCollision(USplineMeshComponent *this)

{
  UpdateRenderStateAndCollision_Internal(this,false);
  return;
}

// UpdateRenderStateAndCollision_Internal @ 1479f2870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USplineMeshComponent::UpdateRenderStateAndCollision_Internal
          (USplineMeshComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FSplineMeshSceneProxyDesc *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_328 [32];
  code *local_308;
  code *pcStack_300;
  code *pcStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  code *local_2e0;
  code *pcStack_2d8;
  TVector2<float>_u_0 local_2d0;
  TVector2<float>_u_0 TStack_2c8;
  code *local_2c0;
  TVector2<float>_u_0 TStack_2b8;
  TVector2<float>_u_0 local_2b0;
  code *pcStack_2a8;
  TVector2<float>_u_0 local_2a0;
  code *pcStack_298;
  code *local_290;
  code *pcStack_288;
  code *local_280;
  code *pcStack_278;
  code *local_270;
  code *pcStack_268;
  code *local_260;
  code *pcStack_258;
  undefined1 local_250 [24];
  undefined1 auStack_238 [24];
  TVector2<float>_u_0 local_220;
  TVector2<float>_u_0 TStack_218;
  code *local_210;
  TVector2<float>_u_0 TStack_208;
  TVector2<float>_u_0 local_200;
  code *pcStack_1f8;
  TVector2<float>_u_0 local_1f0;
  code *pcStack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 local_1c0 [16];
  code *local_1b0;
  code *pcStack_1a8;
  FSplineMeshSceneProxyDesc local_1a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_328;
  if (((GNoRecreateSplineMeshProxy == 0) || ((this->_padding_ & 2) == 0)) || (this->_padding_ == 0))
  {
    if (param_1) {
      UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this);
    }
    else {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  else {
    if (param_1) {
      (**(code **)(this->_padding_ + 0x390))();
    }
    else {
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    }
    pcVar1 = (code *)this->_padding_;
    this_00 = FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc(&local_1a0,this);
    FSplineMeshSceneProxyDesc::CalculateShaderParams(this_00,(FSplineMeshShaderParams *)local_250);
    local_88[0] = (code *)0x0;
    pcStack_300 = (code *)local_250._0_8_;
    pcStack_2f8 = (code *)local_250._8_8_;
    pcStack_2f0 = (code *)local_250._16_8_;
    pcStack_2e8 = (code *)auStack_238._0_8_;
    local_2e0 = (code *)auStack_238._8_8_;
    pcStack_2d8 = (code *)auStack_238._16_8_;
    local_2d0 = local_220;
    TStack_2c8 = TStack_218;
    local_2c0 = local_210;
    TStack_2b8 = TStack_208;
    local_2b0 = local_200;
    pcStack_2a8 = pcStack_1f8;
    local_2a0 = local_1f0;
    pcStack_298 = pcStack_1e8;
    local_290 = (code *)local_1e0;
    pcStack_288 = (code *)auStack_1d8._0_8_;
    local_280 = (code *)auStack_1d8._8_8_;
    pcStack_278 = (code *)auStack_1d8._16_8_;
    local_270 = (code *)local_1c0._0_8_;
    pcStack_268 = (code *)local_1c0._8_8_;
    local_260 = local_1b0;
    pcStack_258 = pcStack_1a8;
    local_308 = pcVar1;
    local_60 = FMemory::Malloc(0xc0,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`USplineMeshComponent::UpdateRenderStateAndCollision_Internal'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = local_308;
    local_60[2] = pcStack_300;
    local_60[3] = pcStack_2f8;
    local_60[4] = pcStack_2f0;
    local_60[5] = pcStack_2e8;
    local_60[6] = local_2e0;
    local_60[7] = pcStack_2d8;
    *(TVector2<float>_u_0 *)(local_60 + 8) = local_2d0;
    *(TVector2<float>_u_0 *)(local_60 + 9) = TStack_2c8;
    local_60[10] = local_2c0;
    *(TVector2<float>_u_0 *)(local_60 + 0xb) = TStack_2b8;
    *(TVector2<float>_u_0 *)(local_60 + 0xc) = local_2b0;
    local_60[0xd] = pcStack_2a8;
    *(TVector2<float>_u_0 *)(local_60 + 0xe) = local_2a0;
    local_60[0xf] = pcStack_298;
    local_60[0x10] = local_290;
    local_60[0x11] = pcStack_288;
    local_60[0x12] = local_280;
    local_60[0x13] = pcStack_278;
    local_60[0x14] = local_270;
    local_60[0x15] = pcStack_268;
    local_60[0x16] = local_260;
    local_60[0x17] = pcStack_258;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USplineMeshComponent::UpdateRenderStateAndCollision_Internal'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USplineMeshComponent::UpdateRenderStateAndCollision_Internal_::__l5::TSTR_UpdateSplineParamsRTCommand563>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`USplineMeshComponent::UpdateRenderStateAndCollision_Internal'::__l5::TSTR_UpdateSplineParamsRTCommand563>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  (this->CachedMeshBodySetupGuid).C = 0;
  (this->CachedMeshBodySetupGuid).D = 0;
  (this->CachedMeshBodySetupGuid).A = 0;
  (this->CachedMeshBodySetupGuid).B = 0;
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  this->bMeshDirty = '\0';
  return;
}

// WantsNegXTriMesh @ 1479f5930

bool __thiscall USplineMeshComponent::WantsNegXTriMesh(USplineMeshComponent *this)

{
  return false;
}

// _getUObject @ 1479f69c0

UObject * __thiscall USplineMeshComponent::_getUObject(USplineMeshComponent *this)

{
  return (UObject *)((longlong)&this[-1].CachedNavigationBounds.Max.field0_0x0 + 8);
}

// _getUObject`adjustor{552}' @ 1479f69cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USplineMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall USplineMeshComponent::_getUObject_adjustor_552__(USplineMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USplineMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1479f69e0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USplineMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall USplineMeshComponent::_getUObject_adjustor_560__(USplineMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USplineMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1479f69f4

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USplineMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall USplineMeshComponent::_getUObject_adjustor_568__(USplineMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USplineMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1576}' @ 1479f6a08

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   USplineMeshComponent::_getUObject`adjustor{1576}' (void)const __ptr64 */

UObject * __thiscall USplineMeshComponent::_getUObject_adjustor_1576__(USplineMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USplineMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execGetBoundaryMax @ 1479f9ee0

void __cdecl
USplineMeshComponent::execGetBoundaryMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2f].field_0x20;
  return;
}

// execGetBoundaryMin @ 1479f9f10

void __cdecl
USplineMeshComponent::execGetBoundaryMin(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2d].field_0x18;
  return;
}

// execGetEndOffset @ 1479fb0e0

void __cdecl USplineMeshComponent::execGetEndOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x2c].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2c].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetEndPosition @ 1479fb110

void __cdecl
USplineMeshComponent::execGetEndPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(param_1 + 0x2b);
  uVar1 = *(undefined8 *)&param_1[0x2b].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2a].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetEndRoll @ 1479fb150

void __cdecl USplineMeshComponent::execGetEndRoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2a].field_0xc;
  return;
}

// execGetEndScale @ 1479fb180

void __cdecl USplineMeshComponent::execGetEndScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x2b].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2b].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetEndTangent @ 1479fb1b0

void __cdecl USplineMeshComponent::execGetEndTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  uVar1 = *(undefined8 *)&param_1[0x2c].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2b].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetForwardAxis @ 1479fb940

void __cdecl
USplineMeshComponent::execGetForwardAxis(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2f].field_0x24;
  return;
}

// execGetSplineUpDir @ 1479ffc80

void __cdecl
USplineMeshComponent::execGetSplineUpDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x2d].field_0x8;
  uVar1 = *(undefined8 *)&param_1[0x2d].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2d);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetStartOffset @ 1479ffcc0

void __cdecl
USplineMeshComponent::execGetStartOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x2a].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2a].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetStartPosition @ 1479ffcf0

void __cdecl
USplineMeshComponent::execGetStartPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x28].field_0x20;
  uVar1 = *(undefined8 *)(param_1 + 0x29);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x28].field_0x18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetStartRoll @ 1479ffd30

void __cdecl USplineMeshComponent::execGetStartRoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2a].field_0x8;
  return;
}

// execGetStartScale @ 1479ffd60

void __cdecl USplineMeshComponent::execGetStartScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x29].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetStartTangent @ 1479ffd90

void __cdecl
USplineMeshComponent::execGetStartTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x29].field_0x10;
  uVar1 = *(undefined8 *)&param_1[0x29].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x29].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execSetBoundaryMax @ 147a03e60

void __cdecl
USplineMeshComponent::execSetBoundaryMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined4 *)&param_1[0x2f].field_0x20 = local_res8[0];
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetBoundaryMin @ 147a03f50

void __cdecl
USplineMeshComponent::execSetBoundaryMin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined4 *)&param_1[0x2d].field_0x18 = local_res8[0];
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetEndOffset @ 147a049a0

void __cdecl USplineMeshComponent::execSetEndOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined8 *)&param_1[0x2c].field_0x10 = local_18;
  *(undefined8 *)&param_1[0x2c].field_0x18 = uStack_10;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetEndPosition @ 147a04a80

void __cdecl
USplineMeshComponent::execSetEndPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined8 *)&param_1[0x2a].field_0x20 = local_28;
  *(undefined8 *)(param_1 + 0x2b) = uStack_20;
  *(undefined8 *)&param_1[0x2b].field_0x8 = local_18;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetEndRoll @ 147a04b70

void __cdecl USplineMeshComponent::execSetEndRoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined4 *)&param_1[0x2a].field_0xc = local_res8[0];
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetEndRollDegrees @ 147a04c60

void __cdecl
USplineMeshComponent::execSetEndRollDegrees(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res8[0] * __real_3c8efa35;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(float *)&param_1[0x2a].field_0xc = fVar2;
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetEndScale @ 147a04d50

void __cdecl USplineMeshComponent::execSetEndScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  double local_18;
  double dStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_18 != *(double *)&param_1[0x2b].field_0x10) ||
     (dStack_10 != *(double *)&param_1[0x2b].field_0x18)) {
    param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
    *(double *)&param_1[0x2b].field_0x10 = local_18;
    *(double *)&param_1[0x2b].field_0x18 = dStack_10;
    if (local_res8[0] != 0) {
      UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    }
  }
  return;
}

// execSetEndTangent @ 147a04e50

void __cdecl USplineMeshComponent::execSetEndTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  double local_28;
  double dStack_20;
  double local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_28 != *(double *)&param_1[0x2b].field_0x20) ||
      (dStack_20 != *(double *)(param_1 + 0x2c))) ||
     (local_18 != *(double *)&param_1[0x2c].field_0x8)) {
    param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
    *(double *)&param_1[0x2b].field_0x20 = local_28;
    *(double *)(param_1 + 0x2c) = dStack_20;
    *(double *)&param_1[0x2c].field_0x8 = local_18;
    if (local_res8[0] != 0) {
      UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    }
  }
  return;
}

// execSetForwardAxis @ 147a05c70

void __cdecl
USplineMeshComponent::execSetForwardAxis(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x2f].field_0x24 != local_res8[0]) {
    param_1[0x2f].field_0x24 = local_res8[0];
    param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
    if (local_res10[0] != 0) {
      UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    }
  }
  return;
}

// execSetSplineUpDir @ 147a095c0

void __cdecl
USplineMeshComponent::execSetSplineUpDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FProperty *pFVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 uVar9;
  double dVar10;
  int local_res8 [4];
  double local_58 [8];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res8[0] = 0;
  pdVar8 = local_58;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = *pdVar8;
  dVar2 = pdVar8[1];
  dVar3 = pdVar8[2];
  dVar10 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar10 == __real_3ff0000000000000) {
    uVar9 = pdVar8[2];
    uVar6 = pdVar8[1];
    uVar7 = *pdVar8;
  }
  else {
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      uVar9 = dVar3 * dVar10;
      uVar6 = dVar2 * dVar10;
      uVar7 = dVar1 * dVar10;
    }
  }
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  auVar5._8_4_ = (int)uVar6;
  auVar5._0_8_ = uVar7;
  auVar5._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x2d) = auVar5;
  *(undefined8 *)&param_1[0x2d].field_0x10 = uVar9;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetStartAndEnd @ 147a09810

void __cdecl
USplineMeshComponent::execSetStartAndEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  int local_res8 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((((local_88 != *(double *)&param_1[0x28].field_0x18) ||
         (dStack_80 != *(double *)&param_1[0x28].field_0x20)) ||
        (local_78 != *(double *)(param_1 + 0x29))) ||
       (((local_70 != *(double *)&param_1[0x29].field_0x8 ||
         (dStack_68 != *(double *)&param_1[0x29].field_0x10)) ||
        ((local_60 != *(double *)&param_1[0x29].field_0x18 ||
         ((local_58 != *(double *)&param_1[0x2a].field_0x20 ||
          (dStack_50 != *(double *)(param_1 + 0x2b))))))))) ||
      (local_48 != *(double *)&param_1[0x2b].field_0x8)) ||
     ((((double)CONCAT44(uStack_3c,local_40) != *(double *)&param_1[0x2b].field_0x20 ||
       ((double)CONCAT44(uStack_34,uStack_38) != *(double *)(param_1 + 0x2c))) ||
      (local_30 != *(double *)&param_1[0x2c].field_0x8)))) {
    *(double *)&param_1[0x28].field_0x18 = local_88;
    *(double *)&param_1[0x28].field_0x20 = dStack_80;
    *(double *)(param_1 + 0x29) = local_78;
    *(double *)&param_1[0x29].field_0x8 = local_70;
    *(double *)&param_1[0x29].field_0x10 = dStack_68;
    *(double *)&param_1[0x29].field_0x18 = local_60;
    *(double *)&param_1[0x2a].field_0x20 = local_58;
    *(double *)(param_1 + 0x2b) = dStack_50;
    *(double *)&param_1[0x2b].field_0x8 = local_48;
    if ((((double)CONCAT44(uStack_3c,local_40) != *(double *)&param_1[0x2b].field_0x20) ||
        ((double)CONCAT44(uStack_34,uStack_38) != *(double *)(param_1 + 0x2c))) ||
       (local_30 != *(double *)&param_1[0x2c].field_0x8)) {
      param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
      *(undefined4 *)&param_1[0x2b].field_0x20 = local_40;
      *(undefined4 *)&param_1[0x2b].field_0x24 = uStack_3c;
      *(undefined4 *)(param_1 + 0x2c) = uStack_38;
      *(undefined4 *)&param_1[0x2c].field_0x4 = uStack_34;
      *(double *)&param_1[0x2c].field_0x8 = local_30;
    }
    param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
    if (local_res8[0] != 0) {
      UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    }
  }
  return;
}

// execSetStartOffset @ 147a09ae0

void __cdecl
USplineMeshComponent::execSetStartOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined8 *)&param_1[0x2a].field_0x10 = local_18;
  *(undefined8 *)&param_1[0x2a].field_0x18 = uStack_10;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetStartPosition @ 147a09bc0

void __cdecl
USplineMeshComponent::execSetStartPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined8 *)&param_1[0x28].field_0x18 = local_28;
  *(undefined8 *)&param_1[0x28].field_0x20 = uStack_20;
  *(undefined8 *)(param_1 + 0x29) = local_18;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetStartRoll @ 147a09cb0

void __cdecl USplineMeshComponent::execSetStartRoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined4 *)&param_1[0x2a].field_0x8 = local_res8[0];
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetStartRollDegrees @ 147a09da0

void __cdecl
USplineMeshComponent::execSetStartRollDegrees(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res8[0] * __real_3c8efa35;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(float *)&param_1[0x2a].field_0x8 = fVar2;
  if (local_res10[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execSetStartScale @ 147a09e90

void __cdecl USplineMeshComponent::execSetStartScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  double local_18;
  double dStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_18 != *(double *)&param_1[0x29].field_0x20) ||
     (dStack_10 != *(double *)(param_1 + 0x2a))) {
    param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
    *(double *)&param_1[0x29].field_0x20 = local_18;
    *(double *)(param_1 + 0x2a) = dStack_10;
    if (local_res8[0] != 0) {
      UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    }
  }
  return;
}

// execSetStartTangent @ 147a09f90

void __cdecl
USplineMeshComponent::execSetStartTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x2f].field_0x25 = param_1[0x2f].field_0x25 | 4;
  *(undefined8 *)&param_1[0x29].field_0x8 = local_28;
  *(undefined8 *)&param_1[0x29].field_0x10 = uStack_20;
  *(undefined8 *)&param_1[0x29].field_0x18 = local_18;
  if (local_res8[0] != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
  }
  return;
}

// execUpdateMesh @ 147a0b6f0

void __cdecl USplineMeshComponent::execUpdateMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x2f].field_0x25 & 4) != 0) {
    UpdateRenderStateAndCollision_Internal((USplineMeshComponent *)param_1,false);
    return;
  }
  return;
}

// GetAxisValueRef @ 148739e30

double * __cdecl USplineMeshComponent::GetAxisValueRef(TVector<double> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (param_2 == X) {
    return (double *)param_1;
  }
  if (param_2 == Y) {
    return (double *)((longlong)&param_1->field0_0x0 + 8);
  }
  if (param_2 == Z) {
    return (double *)((longlong)&param_1->field0_0x0 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                     ,0x1ed,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pdVar3 = (double *)(*pcVar1)();
    return pdVar3;
  }
  return (double *)((longlong)&param_1->field0_0x0 + 0x10);
}

