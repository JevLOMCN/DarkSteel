// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 23

// FFastGeoInstancedStaticMeshComponent @ 14da18ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoInstancedStaticMeshComponent * __thiscall
FFastGeoInstancedStaticMeshComponent::FFastGeoInstancedStaticMeshComponent
          (FFastGeoInstancedStaticMeshComponent *this,int param_1,FFastGeoElementType *param_2)

{
  FInstancedStaticMeshSceneProxyDesc *this_00;
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  this_00 = &this->SceneProxyDesc;
  this->_padding_ = (longlong)&___7FFastGeoInstancedStaticMeshComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PerInstanceSMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSMData).ArrayNum = 0;
  (this->PerInstanceSMData).ArrayMax = 0;
  this->InstancingRandomSeed = 0;
  (this->PerInstanceSMCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceSMCustomData).ArrayNum = 0;
  (this->PerInstanceSMCustomData).ArrayMax = 0;
  (this->AdditionalRandomSeeds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRandomSeeds).ArrayNum = 0;
  (this->AdditionalRandomSeeds).ArrayMax = 0;
  (this->NavigationBounds).IsValid = '\0';
  memset(this_00,0,0x1b8);
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)this_00);
  (this->SceneProxyDesc).InstanceMinDrawDistance = 0;
  (this->SceneProxyDesc).InstanceStartCullDistance = 0;
  this_00->_padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
  (this->SceneProxyDesc).InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
  (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneProxyDesc).InstanceEndCullDistance = 0;
  (this->SceneProxyDesc).bUseGpuLodSelection = false;
  (this->SceneProxyDesc).InstanceLODDistanceScale = 1.0;
  (this->DataProxy).Object = (FInstanceDataSceneProxy *)0x0;
  (this->DataProxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->InstanceRandomIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRandomIDs).ArrayNum = 0;
  (this->InstanceRandomIDs).ArrayMax = 0;
  (this->InstanceBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceBodies).ArrayNum = 0;
  (this->InstanceBodies).ArrayMax = 0;
  (this->AsyncDestroyPhysicsStatePayload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayNum = 0;
  (this->AsyncDestroyPhysicsStatePayload).ArrayMax = 0;
  return this;
}

// ~FFastGeoInstancedStaticMeshComponent @ 14da1b5d0

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
FFastGeoInstancedStaticMeshComponent::~FFastGeoInstancedStaticMeshComponent
          (FFastGeoInstancedStaticMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AsyncDestroyPhysicsStatePayload).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceRandomIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataProxy).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController)
  ;
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
            ((FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc);
  pFVar1 = (this->AdditionalRandomSeeds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSMCustomData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceSMData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// ApplyWorldTransform @ 14da20710

void __thiscall
FFastGeoInstancedStaticMeshComponent::ApplyWorldTransform
          (FFastGeoInstancedStaticMeshComponent *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  TBoxSphereBounds<double,double> *pTVar10;
  TBoxSphereBounds<double,double> local_78 [2];
  
  FFastGeoStaticMeshComponentBase::ApplyWorldTransform
            ((FFastGeoStaticMeshComponentBase *)this,param_1);
  pTVar10 = CalculateBounds(this,local_78,WorldBounds);
  dVar1 = (pTVar10->Origin).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(pTVar10->Origin).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(pTVar10->Origin).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(pTVar10->BoxExtent).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)pTVar10->SphereRadius;
  pTVar10 = CalculateBounds(this,local_78,NavigationBounds);
  dVar1 = (pTVar10->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (pTVar10->BoxExtent).field0_0x0._s_0.Y;
  dVar3 = (pTVar10->BoxExtent).field0_0x0._s_0.Z;
  dVar4 = (pTVar10->Origin).field0_0x0._s_0.Z;
  dVar5 = (pTVar10->Origin).field0_0x0._s_0.X;
  dVar6 = (pTVar10->Origin).field0_0x0._s_0.Y;
  dVar8 = dVar3 + (pTVar10->Origin).field0_0x0._s_0.Z;
  dVar7 = (pTVar10->Origin).field0_0x0._s_0.Y;
  (this->NavigationBounds).Min.field0_0x0._s_0.X = (pTVar10->Origin).field0_0x0._s_0.X - dVar1;
  (this->NavigationBounds).Min.field0_0x0._s_0.Y = dVar6 - dVar2;
  (this->NavigationBounds).Min.field0_0x0._s_0.Z = dVar4 - dVar3;
  (this->NavigationBounds).Max.field0_0x0._s_0.X = dVar1 + dVar5;
  auVar9._8_4_ = SUB84(dVar8,0);
  auVar9._0_8_ = dVar2 + dVar7;
  auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->NavigationBounds).Max.field0_0x0 + 8) = auVar9;
  (this->NavigationBounds).IsValid = 1;
  (this->NavigationBounds).Pad[0] = (char)local_78[0].SphereRadius._1_7_;
  (this->NavigationBounds).Pad[1] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 8);
  (this->NavigationBounds).Pad[2] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 0x10);
  (this->NavigationBounds).Pad[3] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 0x18);
  (this->NavigationBounds).Pad[4] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 0x20);
  (this->NavigationBounds).Pad[5] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 0x28);
  (this->NavigationBounds).Pad[6] = (char)((uint7)local_78[0].SphereRadius._1_7_ >> 0x30);
  return;
}

// BuildInstanceData @ 14da21010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
FFastGeoInstancedStaticMeshComponent::BuildInstanceData(FFastGeoInstancedStaticMeshComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FAccessTag FVar4;
  FAccessTag FVar5;
  char cVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UWorld *pUVar12;
  FPrimitiveMaterialPropertyDescriptor *pFVar13;
  longlong lVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  FSceneInterface *this_00;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FInstanceDataSceneProxy *pFVar25;
  uint uVar26;
  undefined1 auVar27 [12];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auStackY_518 [32];
  undefined1 local_4c8 [8];
  uint local_4c0;
  EKind EStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  TSharedPtr<FInstanceDataSceneProxy,1> local_4a0;
  TVector<float>_u_0 local_490;
  undefined1 local_480 [12];
  float fStack_474;
  undefined8 uStack_470;
  float local_468;
  undefined1 auStack_464 [12];
  float local_450;
  float fStack_44c;
  float fStack_448;
  undefined4 uStack_444;
  FWriteView local_438;
  FPrimitiveMaterialPropertyDescriptor local_3b8;
  TBoxSphereBounds<double,double> local_3a8;
  float local_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  TMatrix<float> local_338;
  TMatrix<float> local_2f8;
  TMatrix<float> local_2b8;
  FInstanceSceneDataBuffers local_278;
  TMatrix<double> local_158;
  ulonglong local_d8;
  undefined1 auVar28 [16];
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&local_278);
  EStack_4bc = Writer;
  uVar18 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_4c0 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  local_4c0 = local_4c0 >> 0x10 ^ local_4c0;
  uVar21 = (ulonglong)local_4c0;
  FVar4.Kind = Writer;
  FVar4.WriterTag = local_4c0;
  FInstanceSceneDataBuffers::BeginWriteAccess(&local_278,&local_438,FVar4);
  UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)&this->_padding_,&local_158)
  ;
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld
            (&local_278,&local_158,(FAccessTag)(uVar21 | 0x100000000));
  pUVar12 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar12 == (UWorld *)0x0) {
    this_00 = (FSceneInterface *)0x0;
  }
  else {
    this_00 = pUVar12->Scene;
  }
  EVar8 = FSceneInterface::GetShaderPlatform(this_00);
  pFVar13 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<FFastGeoPrimitiveComponent>
                      (&local_3b8,(FFastGeoPrimitiveComponent *)this,EVar8);
  local_450 = (pFVar13->MinMaxMaterialDisplacement).field0_0x0._s_0.X;
  fStack_44c = (pFVar13->MinMaxMaterialDisplacement).field0_0x0._s_0.Y;
  fStack_448 = pFVar13->MaxWorldPositionOffsetDisplacement;
  uStack_444._0_1_ = pFVar13->bAnyMaterialHasWorldPositionOffset;
  uStack_444._1_1_ = pFVar13->bAnyMaterialHasPixelAnimation;
  uStack_444._2_1_ = pFVar13->bAnyMaterialHasPerInstanceCustomData;
  uStack_444._3_1_ = pFVar13->bAnyMaterialHasPerInstanceRandom;
  fVar30 = (float)((uint)local_450 ^ __xmm_80000000800000008000000080000000);
  if ((float)((uint)local_450 ^ __xmm_80000000800000008000000080000000) <= fStack_44c) {
    fVar30 = fStack_44c;
  }
  FISMCInstanceDataSceneProxy::GetLocalBoundsPadExtent
            ((TVector<float> *)&local_490._s_0,local_438.PrimitiveToRelativeWorld,
             fVar30 + fStack_448);
  lVar14 = (**(code **)(this->_padding_ + 0x110))(this);
  pTVar15 = UStaticMesh::GetBounds(*(UStaticMesh **)(lVar14 + 0x100),&local_3a8);
  fStack_4b4 = (float)((pTVar15->Origin).field0_0x0._s_0.Y - (pTVar15->BoxExtent).field0_0x0._s_0.Y)
               - local_490._s_0.Y;
  local_4a8 = (float)((pTVar15->Origin).field0_0x0._s_0.Y + (pTVar15->BoxExtent).field0_0x0._s_0.Y)
              + local_490._s_0.Y;
  local_4b8 = (float)((pTVar15->Origin).field0_0x0._s_0.X - (pTVar15->BoxExtent).field0_0x0._s_0.X)
              - local_490._s_0.X;
  fStack_4ac = local_490._s_0.X +
               (float)((pTVar15->Origin).field0_0x0._s_0.X + (pTVar15->BoxExtent).field0_0x0._s_0.X)
  ;
  fStack_4b0 = (float)((pTVar15->Origin).field0_0x0._s_0.Z - (pTVar15->BoxExtent).field0_0x0._s_0.Z)
               - local_490._s_0.Z;
  fStack_4a4 = local_490._s_0.Z +
               (float)((pTVar15->BoxExtent).field0_0x0._s_0.Z + (pTVar15->Origin).field0_0x0._s_0.Z)
  ;
  if (((*(byte *)local_438.Flags & 0x20) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!View.Flags.bHasPerInstanceLocalBounds",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                         ,0x6e,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
    return pTVar16;
  }
  pFVar24 = ((local_438.InstanceLocalBounds)->AllocatorInstance).Data;
  if (((pFVar24 <= (FScriptContainerElement *)&local_4b8) &&
      ((FScriptContainerElement *)&local_4b8 <
       pFVar24 + (longlong)(local_438.InstanceLocalBounds)->ArrayMax * 0x18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
    return pTVar16;
  }
  iVar9 = (local_438.InstanceLocalBounds)->ArrayNum;
  if (iVar9 == (local_438.InstanceLocalBounds)->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&(local_438.InstanceLocalBounds)->AllocatorInstance,
                       &(local_438.InstanceLocalBounds)->ArrayMax);
  }
  (local_438.InstanceLocalBounds)->ArrayNum = iVar9 + 1;
  pFVar22 = ((local_438.InstanceLocalBounds)->AllocatorInstance).Data;
  pFVar24 = pFVar22 + (longlong)iVar9 * 0x18;
  *(ulonglong *)pFVar24 = CONCAT44(fStack_4b4,local_4b8);
  *(ulonglong *)(pFVar24 + 8) = CONCAT44(fStack_4ac,fStack_4b0);
  *(ulonglong *)(pFVar22 + (longlong)iVar9 * 0x18 + 0x10) = CONCAT44(fStack_4a4,local_4a8);
  uVar18 = (this->PerInstanceSMData).ArrayNum;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if ((local_438.InstanceToPrimitiveRelative)->ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,uVar18,&(local_438.InstanceToPrimitiveRelative)->AllocatorInstance,
               (local_438.InstanceToPrimitiveRelative)->ArrayNum,
               &(local_438.InstanceToPrimitiveRelative)->ArrayMax);
  }
  fVar30 = __real_3f800000;
  iVar9 = (this->PerInstanceSMData).ArrayNum;
  pFVar24 = (this->PerInstanceSMData).AllocatorInstance.Data;
  pFVar22 = pFVar24 + (longlong)iVar9 * 0x80;
  while( true ) {
    if ((this->PerInstanceSMData).ArrayNum != iVar9) {
      local_4c8[0] = 0;
      `TCheckedPointerIterator<FInstancedStaticMeshInstanceData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_4c8);
    }
    if (pFVar24 == pFVar22) break;
    local_480._0_4_ = (float)*(double *)pFVar24;
    fStack_474 = (float)*(double *)(pFVar24 + 0x20);
    local_2b8.M[3][2] = (float)*(double *)(pFVar24 + 0x70);
    local_480._4_4_ = (float)*(double *)(pFVar24 + 8);
    local_480._8_4_ = (float)*(double *)(pFVar24 + 0x10);
    auVar33._12_4_ = fStack_474;
    auVar33._0_12_ = local_480;
    local_2b8.M[3][0] = (float)*(double *)(pFVar24 + 0x60);
    local_468 = (float)*(double *)(pFVar24 + 0x40);
    auVar27._4_4_ = (float)*(double *)(pFVar24 + 0x28);
    auVar27._0_4_ = fStack_474;
    auVar27._8_4_ = (float)*(double *)(pFVar24 + 0x30);
    auVar28._12_4_ = local_468;
    auVar28._0_12_ = auVar27;
    uStack_470 = auVar27._4_8_;
    local_2b8.M[1] = (float  [4])insertps(auVar28,auVar28,8);
    auVar29._4_4_ = (float)*(double *)(pFVar24 + 0x48);
    auVar29._0_4_ = local_468;
    auVar29._8_4_ = (float)*(double *)(pFVar24 + 0x50);
    auVar29._12_4_ = local_2b8.M[3][0];
    auStack_464 = auVar29._4_12_;
    local_2b8.M[2] = (float  [4])insertps(auVar29,auVar29,8);
    local_2b8.M[3][1] = (float)*(double *)(pFVar24 + 0x68);
    local_2b8.M[0] = (float  [4])insertps(auVar33,auVar33,8);
    local_2b8.M[3][3] = fVar30;
    local_2f8.M[3][0] = ((local_438.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.X;
    local_2f8.M[3][1] = ((local_438.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.Y;
    local_2f8.M[2] =
         (float  [4])
         insertps(*(undefined1 (*) [16])((local_438.PrimitiveToRelativeWorld)->TransformRows + 2),
                  *(undefined1 (*) [16])((local_438.PrimitiveToRelativeWorld)->TransformRows + 2),8)
    ;
    local_2f8.M[3][2] = ((local_438.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.Z;
    local_2f8.M[0] =
         (float  [4])
         insertps(*(undefined1 (*) [16])(local_438.PrimitiveToRelativeWorld)->TransformRows,
                  *(undefined1 (*) [16])(local_438.PrimitiveToRelativeWorld)->TransformRows,8);
    local_2f8.M[1] =
         (float  [4])
         insertps(*(undefined1 (*) [16])((local_438.PrimitiveToRelativeWorld)->TransformRows + 1),
                  *(undefined1 (*) [16])((local_438.PrimitiveToRelativeWorld)->TransformRows + 1),8)
    ;
    local_2f8.M[3][3] = fVar30;
    VectorMatrixMultiply(&local_338,&local_2b8,&local_2f8);
    local_370 = local_338.M[0][0];
    fStack_34c = local_338.M[3][0];
    fStack_344 = local_338.M[3][2];
    fStack_36c = local_338.M[0][1];
    fStack_368 = local_338.M[0][2];
    fStack_364 = local_338.M[1][0];
    local_360 = local_338.M[1][1];
    fStack_35c = local_338.M[1][2];
    fStack_358 = local_338.M[2][0];
    fStack_354 = local_338.M[2][1];
    local_350 = local_338.M[2][2];
    fStack_348 = local_338.M[3][1];
    if ((((local_338.M[0][0] != 0.0) || (local_338.M[0][1] != 0.0)) || (local_338.M[0][2] != 0.0))
       && (((local_338.M[1][0] != 0.0 || (local_338.M[1][1] != 0.0)) || (local_338.M[1][2] != 0.0)))
       ) {
      fVar32 = fVar30 / (local_338.M[0][1] * local_338.M[0][1] +
                         local_338.M[0][0] * local_338.M[0][0] +
                        local_338.M[0][2] * local_338.M[0][2]);
      fVar31 = (local_338.M[1][1] * local_338.M[0][1] + local_338.M[1][0] * local_338.M[0][0] +
               local_338.M[1][2] * local_338.M[0][2]) * fVar32;
      fStack_364 = local_338.M[1][0] - fVar31 * local_338.M[0][0];
      local_360 = local_338.M[1][1] - fVar31 * local_338.M[0][1];
      fStack_35c = local_338.M[1][2] - fVar31 * local_338.M[0][2];
      fVar32 = (local_338.M[2][1] * local_338.M[0][1] + local_338.M[2][0] * local_338.M[0][0] +
               local_338.M[2][2] * local_338.M[0][2]) * fVar32;
      fStack_358 = local_338.M[2][0] - fVar32 * local_338.M[0][0];
      fStack_354 = local_338.M[2][1] - fVar32 * local_338.M[0][1];
      local_350 = local_338.M[2][2] - fVar32 * local_338.M[0][2];
      fVar32 = (fStack_354 * local_360 + fStack_358 * fStack_364 + local_350 * fStack_35c) /
               (local_360 * local_360 + fStack_364 * fStack_364 + fStack_35c * fStack_35c);
      fStack_358 = fStack_358 - fVar32 * fStack_364;
      fStack_354 = fStack_354 - fVar32 * local_360;
      local_350 = local_350 - fVar32 * fStack_35c;
    }
    pFVar2 = ((local_438.InstanceToPrimitiveRelative)->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_370) &&
        ((FScriptContainerElement *)&local_370 <
         pFVar2 + (longlong)(local_438.InstanceToPrimitiveRelative)->ArrayMax * 0x30)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
      return pTVar16;
    }
    iVar10 = (local_438.InstanceToPrimitiveRelative)->ArrayNum;
    if (iVar10 == (local_438.InstanceToPrimitiveRelative)->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x430,&(local_438.InstanceToPrimitiveRelative)->AllocatorInstance,
                          &(local_438.InstanceToPrimitiveRelative)->ArrayMax);
    }
    lVar14 = (longlong)iVar10;
    (local_438.InstanceToPrimitiveRelative)->ArrayNum = iVar10 + 1;
    pFVar2 = ((local_438.InstanceToPrimitiveRelative)->AllocatorInstance).Data;
    pFVar24 = pFVar24 + 0x80;
    *(ulonglong *)(pFVar2 + lVar14 * 0x30) = CONCAT44(fStack_36c,local_370);
    *(ulonglong *)(pFVar2 + lVar14 * 0x30 + 8) = CONCAT44(fStack_364,fStack_368);
    *(ulonglong *)(pFVar2 + lVar14 * 0x30 + 0x10) = CONCAT44(fStack_35c,local_360);
    *(ulonglong *)(pFVar2 + lVar14 * 0x30 + 0x10 + 8) = CONCAT44(fStack_354,fStack_358);
    *(ulonglong *)(pFVar2 + lVar14 * 0x30 + 0x20) = CONCAT44(fStack_34c,local_350);
    *(ulonglong *)(pFVar2 + lVar14 * 0x30 + 0x20 + 8) = CONCAT44(fStack_344,fStack_348);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (local_438.InstanceCustomData,&this->PerInstanceSMCustomData);
  iVar9 = (this->PerInstanceSMCustomData).ArrayNum;
  FVar5.Kind = EStack_4bc;
  FVar5.WriterTag = local_4c0;
  cVar6 = uStack_444._3_1_;
  if ((iVar9 == 0) || (iVar10 = (this->PerInstanceSMData).ArrayNum, iVar10 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar9 / iVar10;
  }
  *local_438.NumCustomDataFloats = iVar9;
  if ((uStack_444._2_1_ == '\0') || (iVar9 == 0)) {
    (local_438.Flags)->Packed = (local_438.Flags)->Packed & 0xfffd;
    *local_438.NumCustomDataFloats = 0;
    (local_438.InstanceCustomData)->ArrayNum = 0;
    if ((local_438.InstanceCustomData)->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(local_438.InstanceCustomData)->AllocatorInstance,0,
                 &(local_438.InstanceCustomData)->ArrayMax);
    }
  }
  else {
    (local_438.Flags)->Packed = (local_438.Flags)->Packed | 2;
  }
  if ((cVar6 == '\0') || ((this->PerInstanceSMData).ArrayNum < 1)) {
    (local_438.Flags)->Packed = (local_438.Flags)->Packed & 0xfffe;
  }
  else {
    (local_438.Flags)->Packed = (local_438.Flags)->Packed | 1;
    piVar1 = &(this->InstanceRandomIDs).ArrayNum;
    if (*piVar1 == 0) {
      uVar18 = (this->PerInstanceSMData).ArrayNum;
      if ((int)uVar18 < 1) {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
      }
      else {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar18,&(this->InstanceRandomIDs).AllocatorInstance,piVar1,
                           &(this->InstanceRandomIDs).ArrayMax);
        memset((this->InstanceRandomIDs).AllocatorInstance.Data + (longlong)iVar9 * 4,0,
               (longlong)(int)uVar18 << 2);
      }
      fVar30 = __real_3f800000;
      uVar18 = this->InstancingRandomSeed;
      uVar20 = 0;
      if ((this->AdditionalRandomSeeds).ArrayNum < 1) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = *(uint *)(this->AdditionalRandomSeeds).AllocatorInstance.Data;
      }
      uVar23 = 0;
      if (0 < (this->InstanceRandomIDs).ArrayNum) {
        lVar14 = 0;
        do {
          if (uVar23 == uVar26) {
            uVar18 = 0;
            if ((int)uVar20 < (this->AdditionalRandomSeeds).ArrayNum) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
              return pTVar16;
            }
            lVar19 = (longlong)(int)uVar20;
            uVar20 = uVar20 + 1;
            uVar18 = *(uint *)((this->AdditionalRandomSeeds).AllocatorInstance.Data + lVar19 * 8 + 4
                              );
            if (((int)uVar20 < 0) || ((this->AdditionalRandomSeeds).ArrayNum <= (int)uVar20)) {
              uVar26 = 0xffffffff;
            }
            else {
              if (((int)uVar20 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
                return pTVar16;
              }
              uVar26 = *(uint *)((this->AdditionalRandomSeeds).AllocatorInstance.Data +
                                (longlong)(int)uVar20 * 8);
            }
          }
          uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
          uVar11 = 0;
          if ((int)uVar23 < (this->InstanceRandomIDs).ArrayNum) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
            return pTVar16;
          }
          uVar23 = uVar23 + 1;
          *(float *)((this->InstanceRandomIDs).AllocatorInstance.Data + lVar14) =
               (float)(uVar18 >> 9 | 0x3f800000) - fVar30;
          lVar14 = lVar14 + 4;
        } while ((int)uVar23 < (this->InstanceRandomIDs).ArrayNum);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (local_438.InstanceRandomIDs,&this->InstanceRandomIDs);
  FInstanceSceneDataBuffers::EndWriteAccess(&local_278,FVar5);
  FInstanceSceneDataBuffers::ValidateData(&local_278);
  pTVar17 = ::operator_new(0x130);
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    local_4a0.Object = ___xmm_00000000000000000000000000000010;
    pFVar25 = (FInstanceDataSceneProxy *)&DAT_00000010;
    local_4a0.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInstanceDataSceneProxy___00_SharedPointerInternals__6B_
    ;
    FInstanceDataSceneProxy::FInstanceDataSceneProxy
              ((FInstanceDataSceneProxy *)(pTVar17 + 1),&local_278);
    pFVar25 = (FInstanceDataSceneProxy *)(pTVar17 + 1);
    if ((pFVar25 == (FInstanceDataSceneProxy *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar3)();
      return pTVar16;
    }
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
    local_4a0.SharedReferenceCount.ReferenceController = pTVar17;
    local_4a0.Object = pFVar25;
  }
  pTVar16 = &this->DataProxy;
  if (pTVar16 != &local_4a0) {
    pTVar16->Object = pFVar25;
    local_4a0.Object = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DataProxy).SharedReferenceCount,&local_4a0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(&local_278);
  return pTVar16;
}

// CalculateBounds @ 14da226e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
FFastGeoInstancedStaticMeshComponent::CalculateBounds
          (FFastGeoInstancedStaticMeshComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,EBoundsType param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  TVector<double>_u_0 *pTVar20;
  TBoxSphereBounds<double,double> *pTVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auStack_528 [32];
  longlong local_508;
  longlong local_500;
  TVector<double>_u_0 local_4f8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  char local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined8 local_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  undefined8 local_450;
  TVector<double>_u_0 local_448;
  double dStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418;
  double local_410;
  double dStack_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  double dStack_3f0;
  double dStack_3e8;
  undefined1 local_3e0;
  undefined7 uStack_3df;
  TVector<double>_u_0 local_3d8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  undefined8 uStack_390;
  undefined8 local_388;
  double dStack_380;
  double dStack_378;
  undefined1 local_370;
  undefined7 uStack_36f;
  TVector<double>_u_0 local_368;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  TVector<double>_u_0 local_330;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  TBox<double> local_2f8;
  TBoxSphereBounds<double,double> local_2c0;
  TBoxSphereBounds<double,double> local_288;
  TBoxSphereBounds<double,double> local_250;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_528;
  lVar19 = (**(code **)(this->_padding_ + 0x110))();
  if ((*(longlong *)(lVar19 + 0x100) != 0) && (0 < (this->PerInstanceSMData).ArrayNum)) {
    if (param_1 == NavigationBounds) {
      pTVar20 = (TVector<double>_u_0 *)
                FInstancedStaticMeshComponentHelper::
                GetInstanceNavigationBounds<FFastGeoInstancedStaticMeshComponent>(&local_2f8,this);
    }
    else {
      lVar19 = (**(code **)(this->_padding_ + 0x110))(this);
      pTVar21 = UStaticMesh::GetBounds(*(UStaticMesh **)(lVar19 + 0x100),&local_2c0);
      local_418 = 1;
      dVar3 = (pTVar21->BoxExtent).field0_0x0._s_0.X;
      dVar1 = (pTVar21->BoxExtent).field0_0x0._s_0.Y;
      dVar2 = (pTVar21->BoxExtent).field0_0x0._s_0.Z;
      local_448._s_0.X = (pTVar21->Origin).field0_0x0._s_0.X - dVar3;
      dStack_430 = dVar3 + (pTVar21->Origin).field0_0x0._s_0.X;
      local_448._s_0.Y = (pTVar21->Origin).field0_0x0._s_0.Y - dVar1;
      pTVar20 = &local_448;
      local_428 = dVar1 + (pTVar21->Origin).field0_0x0._s_0.Y;
      local_448._s_0.Z = (pTVar21->Origin).field0_0x0._s_0.Z - dVar2;
      dStack_420 = dVar2 + (pTVar21->Origin).field0_0x0._s_0.Z;
    }
    dVar3 = (((TVector<double> *)&(pTVar20->_s_0).X)->field0_0x0)._s_0.X;
    dVar1 = (pTVar20->_s_0).Y;
    local_1f8 = pTVar20->XYZ[4];
    dStack_1f0 = pTVar20->XYZ[5];
    local_208 = (pTVar20->_s_0).Z;
    dStack_200 = (((TVector<double> *)(pTVar20->XYZ + 3))->field0_0x0)._s_0.X;
    local_1e8 = *(undefined8 *)(pTVar20 + 2);
    local_218 = dVar3;
    dStack_210 = dVar1;
    UE::Math::TTransform<double>::ToMatrixWithScale
              ((TTransform<double> *)&this->_padding_,&local_158);
    dVar2 = __real_3fe0000000000000;
    if ((char)local_1e8 != '\0') {
      uVar22 = 0;
      local_4c0 = '\0';
      if (0 < (this->PerInstanceSMData).ArrayNum) {
        lVar19 = 0;
        do {
          iVar4 = (this->PerInstanceSMData).ArrayNum;
          if (param_1 == LocalBounds) {
            uVar18 = 0;
            if ((int)uVar22 < iVar4) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_508 = (longlong)(int)uVar22;
              local_500 = (longlong)iVar4;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                pTVar21 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
                return pTVar21;
              }
            }
            pFVar5 = (this->PerInstanceSMData).AllocatorInstance.Data;
            if ((char)local_1e8 == '\0') {
              local_480 = 0.0;
              dStack_478 = 0.0;
              local_470 = 0.0;
              dStack_468 = 0.0;
              local_450 = 0;
              dStack_458 = 0.0;
              local_460 = 0.0;
            }
            else {
              local_370 = 1;
              dVar10 = *(double *)(pFVar5 + lVar19 + 0x40);
              dVar11 = *(double *)(pFVar5 + lVar19 + 0x40 + 8);
              dVar23 = (dStack_1f0 + local_208) * ___xmm_3fe00000000000003fe0000000000000;
              dVar12 = (dStack_1f0 - local_208) * ___xmm_3fe00000000000003fe0000000000000;
              dVar31 = (dStack_200 - dVar3) * ___xmm_3fe00000000000003fe0000000000000;
              dVar34 = (local_1f8 - dVar1) * _UNK_150689678;
              dVar8 = (dStack_200 + dVar3) * ___xmm_3fe00000000000003fe0000000000000;
              dVar9 = (local_1f8 + dVar1) * _UNK_150689678;
              auVar27._8_4_ = SUB84(dVar8,0);
              auVar27._0_8_ = dVar8;
              auVar27._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              auVar39._8_4_ = SUB84(dVar9,0);
              auVar39._0_8_ = dVar9;
              auVar39._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              dVar37 = dVar9 * *(double *)(pFVar5 + lVar19 + 0x20) +
                       dVar8 * *(double *)(pFVar5 + lVar19) + dVar10 * dVar23 +
                       *(double *)(pFVar5 + lVar19 + 0x60);
              dVar41 = auVar39._8_8_ * *(double *)(pFVar5 + lVar19 + 0x20 + 8) +
                       auVar27._8_8_ * *(double *)(pFVar5 + lVar19 + 8) + dVar11 * dVar23 +
                       *(double *)(pFVar5 + lVar19 + 0x60 + 8);
              auVar28._8_4_ = SUB84(dVar31,0);
              auVar28._0_8_ = dVar31;
              auVar28._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
              dVar42 = dVar31 * *(double *)(pFVar5 + lVar19);
              dVar30 = auVar28._8_8_ * *(double *)(pFVar5 + lVar19 + 8);
              dVar23 = dVar9 * *(double *)(pFVar5 + lVar19 + 0x30) +
                       dVar8 * *(double *)(pFVar5 + lVar19 + 0x10) +
                       *(double *)(pFVar5 + lVar19 + 0x50) * dVar23 +
                       *(double *)(pFVar5 + lVar19 + 0x70);
              auVar29._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar29._8_4_ = SUB84(dVar30,0) & _UNK_15061cc88;
              auVar29._12_4_ = (uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c;
              dVar8 = dVar34 * *(double *)(pFVar5 + lVar19 + 0x20);
              dVar9 = dVar34 * *(double *)(pFVar5 + lVar19 + 0x20 + 8);
              dVar10 = dVar10 * dVar12;
              dVar11 = dVar11 * dVar12;
              dVar12 = *(double *)(pFVar5 + lVar19 + 0x50) * dVar12;
              auVar36._8_4_ = SUB84(dVar41,0);
              auVar36._0_8_ = dVar37;
              auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ) + auVar29._0_8_ +
                      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                       SUB84(dVar9,0) & _UNK_15061cc88) + auVar29._8_8_ +
                      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                       SUB84(dVar11,0) & _UNK_15061cc88);
              dStack_458 = (double)CONCAT44((uint)((ulonglong)
                                                   (dVar34 * *(double *)(pFVar5 + lVar19 + 0x30)) >>
                                                  0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar34 * *(double *)(pFVar5 + lVar19 + 0x30),0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                           (double)CONCAT44((uint)((ulonglong)
                                                   (dVar31 * *(double *)(pFVar5 + lVar19 + 0x10)) >>
                                                  0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar31 * *(double *)(pFVar5 + lVar19 + 0x10),0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar12,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              local_480 = dVar37 - dVar8;
              dStack_478 = auVar36._8_8_ - dVar9;
              dVar8 = dVar8 + dVar37;
              dVar9 = dVar9 + dVar41;
              local_470 = dVar23 - dStack_458;
              auVar7._8_4_ = SUB84(dVar9,0);
              auVar7._0_8_ = dVar8;
              auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              local_388._0_4_ = SUB84(dVar8,0);
              local_388._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
              auVar14._4_8_ = dVar41;
              auVar14._0_4_ = uStack_390._4_4_;
              auVar40._0_8_ = auVar14._0_8_ << 0x20;
              auVar40._8_4_ = (undefined4)local_388;
              auVar40._12_4_ = local_388._4_4_;
              dStack_380 = auVar7._8_8_;
              dStack_468 = auVar40._8_8_;
              dStack_458 = dStack_458 + dVar23;
              local_450 = CONCAT71(uStack_36f,1);
              local_3a0 = local_480;
              dStack_398 = dStack_478;
              uStack_390 = local_470;
              local_388 = dStack_468;
              dStack_378 = dStack_458;
              local_460 = dStack_380;
            }
            dVar23 = local_460 - dStack_478;
            dVar8 = dStack_468 - local_480;
            dVar31 = dStack_458 - local_470;
            dVar10 = dVar23 * dVar2;
            dVar9 = dVar8 * dVar2;
            local_348 = dVar10;
            dVar11 = dVar10 + dStack_478;
            dVar42 = local_480 + dVar9;
            dVar34 = dVar31 * dVar2;
            local_368._s_0.Y = dVar11;
            local_368._s_0.X = dVar42;
            local_350 = dVar9;
            local_340 = dVar34;
            dVar12 = dVar34 + local_470;
            local_368._s_0.Z = dVar12;
            dVar8 = SQRT((dVar23 * dVar23 + dVar8 * dVar8 + dVar31 * dVar31) *
                         __real_3fd0000000000000);
            local_338 = dVar8;
            if (local_4c0 == '\0') goto LAB_14da22ed8;
            pTVar20 = &local_368;
            pTVar21 = &local_250;
LAB_14da22e6e:
            pTVar21 = UE::Math::TBoxSphereBounds<double,double>::operator+
                                ((TBoxSphereBounds<double,double> *)&local_4f8._s_0,pTVar21,
                                 (TBoxSphereBounds<double,double> *)&pTVar20->_s_0);
            dVar8 = pTVar21->SphereRadius;
            dVar9 = (pTVar21->BoxExtent).field0_0x0._s_0.Y;
            dVar10 = (pTVar21->BoxExtent).field0_0x0._s_0.Z;
            dVar11 = (pTVar21->Origin).field0_0x0._s_0.Z;
            dVar12 = (pTVar21->BoxExtent).field0_0x0._s_0.X;
            dVar23 = (pTVar21->Origin).field0_0x0._s_0.X;
            dVar31 = (pTVar21->Origin).field0_0x0._s_0.Y;
            if ((local_4c0 == '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              pTVar21 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
              return pTVar21;
            }
            local_4c8 = dVar8;
            local_4d8 = dVar9;
            dStack_4d0 = dVar10;
            local_4f8._s_0.Z = dVar11;
            dStack_4e0 = dVar12;
            local_4f8._s_0.X = dVar23;
            local_4f8._s_0.Y = dVar31;
          }
          else {
            uVar18 = 0;
            if ((int)uVar22 < iVar4) {
              uVar18 = ~uVar22 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_508 = (longlong)(int)uVar22;
              local_500 = (longlong)iVar4;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar6 = (code *)swi(3);
                pTVar21 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
                return pTVar21;
              }
            }
            VectorMatrixMultiply
                      (&local_1d8,
                       (TMatrix<double> *)
                       ((this->PerInstanceSMData).AllocatorInstance.Data +
                       (longlong)(int)uVar22 * 0x80),&local_158);
            if ((char)local_1e8 == '\0') {
              local_4b8 = 0.0;
              dStack_4b0 = 0.0;
              local_4a8 = 0.0;
              dStack_4a0 = 0.0;
              local_488 = 0;
              local_498 = 0.0;
              dStack_490 = 0.0;
            }
            else {
              auVar15._4_4_ = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              auVar15._0_4_ = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              auVar15._8_4_ = _UNK_15061cc88;
              auVar15._12_4_ = _UNK_15061cc8c;
              local_3e0 = 1;
              dVar34 = (dStack_1f0 + local_208) * ___xmm_3fe00000000000003fe0000000000000;
              dVar10 = (dStack_1f0 - local_208) * ___xmm_3fe00000000000003fe0000000000000;
              dVar12 = (dStack_200 - dVar3) * ___xmm_3fe00000000000003fe0000000000000;
              dVar23 = (local_1f8 - dVar1) * _UNK_150689678;
              dVar8 = (dStack_200 + dVar3) * ___xmm_3fe00000000000003fe0000000000000;
              dVar9 = (local_1f8 + dVar1) * _UNK_150689678;
              auVar24._8_4_ = SUB84(dVar8,0);
              auVar24._0_8_ = dVar8;
              auVar24._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              dVar11 = dVar9 * local_1d8.M[1][2] + dVar8 * local_1d8.M[0][2] +
                       dVar34 * local_1d8.M[2][2] + local_1d8.M[3][2];
              auVar25._8_4_ = SUB84(dVar12,0);
              auVar25._0_8_ = dVar12;
              auVar25._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              dVar31 = auVar25._8_8_ * local_1d8.M[0][1];
              auVar32._8_4_ = SUB84(dVar23,0);
              auVar32._0_8_ = dVar23;
              auVar32._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
              auVar26._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)(dVar12 * local_1d8.M[0][0]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar12 * local_1d8.M[0][0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar26._8_4_ = SUB84(dVar31,0) & _UNK_15061cc88;
              auVar26._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c;
              dVar31 = auVar32._8_8_ * local_1d8.M[1][1];
              auVar33._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)(dVar23 * local_1d8.M[1][0]) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar23 * local_1d8.M[1][0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar33._8_4_ = SUB84(dVar31,0) & _UNK_15061cc88;
              auVar33._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c;
              dVar8 = dVar9 * local_1d8.M[1][0] + dVar8 * local_1d8.M[0][0] +
                      dVar34 * local_1d8.M[2][0] + local_1d8.M[3][0];
              dVar9 = dVar9 * local_1d8.M[1][1] + auVar24._8_8_ * local_1d8.M[0][1] +
                      dVar34 * local_1d8.M[2][1] + local_1d8.M[3][1];
              auVar35._8_4_ = SUB84(dVar9,0);
              auVar35._0_8_ = dVar8;
              auVar35._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              dVar31 = auVar33._0_8_ + auVar26._0_8_ +
                       (double)CONCAT44((uint)((ulonglong)(dVar10 * local_1d8.M[2][0]) >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar10 * local_1d8.M[2][0],0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              local_498 = auVar33._8_8_ + auVar26._8_8_ +
                          (double)CONCAT44((uint)((ulonglong)(dVar10 * local_1d8.M[2][1]) >> 0x20) &
                                           _UNK_15061cc8c,
                                           SUB84(dVar10 * local_1d8.M[2][1],0) & _UNK_15061cc88);
              local_4b8 = dVar8 - dVar31;
              dStack_4b0 = auVar35._8_8_ - local_498;
              dVar31 = dVar31 + dVar8;
              local_498 = local_498 + dVar9;
              dStack_490 = (double)CONCAT44((uint)((ulonglong)(dVar23 * local_1d8.M[1][2]) >> 0x20)
                                            & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar23 * local_1d8.M[1][2],0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                           (double)CONCAT44((uint)((ulonglong)(dVar12 * local_1d8.M[0][2]) >> 0x20)
                                            & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar12 * local_1d8.M[0][2],0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                           (double)CONCAT44((uint)((ulonglong)(dVar10 * local_1d8.M[2][2]) >> 0x20)
                                            & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar10 * local_1d8.M[2][2],0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              local_3f8._0_4_ = SUB84(dVar31,0);
              local_3f8._4_4_ = (undefined4)((ulonglong)dVar31 >> 0x20);
              auVar13._4_8_ = auVar15._8_8_;
              auVar13._0_4_ = uStack_400._4_4_;
              auVar38._0_8_ = auVar13._0_8_ << 0x20;
              auVar38._8_4_ = (undefined4)local_3f8;
              auVar38._12_4_ = local_3f8._4_4_;
              local_4a8 = dVar11 - dStack_490;
              dStack_490 = dStack_490 + dVar11;
              dStack_4a0 = auVar38._8_8_;
              local_488 = CONCAT71(uStack_3df,1);
              local_410 = local_4b8;
              dStack_408 = dStack_4b0;
              uStack_400 = local_4a8;
              local_3f8 = dStack_4a0;
              dStack_3f0 = local_498;
              dStack_3e8 = dStack_490;
            }
            dVar23 = local_498 - dStack_4b0;
            dVar8 = dStack_4a0 - local_4b8;
            dVar31 = dStack_490 - local_4a8;
            dVar10 = dVar23 * dVar2;
            dVar9 = dVar8 * dVar2;
            local_3b8 = dVar10;
            dVar11 = dVar10 + dStack_4b0;
            dVar42 = local_4b8 + dVar9;
            dVar34 = dVar31 * dVar2;
            local_3d8._s_0.Y = dVar11;
            local_3d8._s_0.X = dVar42;
            local_3c0 = dVar9;
            local_3b0 = dVar34;
            dVar12 = dVar34 + local_4a8;
            local_3d8._s_0.Z = dVar12;
            dVar8 = SQRT((dVar23 * dVar23 + dVar8 * dVar8 + dVar31 * dVar31) *
                         __real_3fd0000000000000);
            local_3a8 = dVar8;
            if (local_4c0 != '\0') {
              pTVar20 = &local_3d8;
              pTVar21 = &local_288;
              goto LAB_14da22e6e;
            }
LAB_14da22ed8:
            local_4c8 = dVar8;
            dStack_4d0 = dVar34;
            local_4d8 = dVar10;
            dStack_4e0 = dVar9;
            local_4f8._s_0.Z = dVar12;
            local_4f8._s_0.Y = dVar11;
            local_4f8._s_0.X = dVar42;
            local_4c0 = '\x01';
          }
          uVar22 = uVar22 + 1;
          lVar19 = lVar19 + 0x80;
        } while ((int)uVar22 < (this->PerInstanceSMData).ArrayNum);
      }
      pTVar20 = &local_4f8;
      if (local_4c0 == '\0') {
        pTVar20 = &local_330;
      }
      local_300 = 0;
      local_330._s_0.X = 0.0;
      local_330._s_0.Y = 0.0;
      local_330._s_0.Z = 0.0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      dVar3 = pTVar20->XYZ[1];
      dVar1 = pTVar20->XYZ[2];
      dVar2 = pTVar20->XYZ[3];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar20->_s_0).X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
      dVar8 = pTVar20->XYZ[4];
      dVar9 = pTVar20->XYZ[5];
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
      dVar3 = pTVar20->XYZ[6];
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar8;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar9;
      __return_storage_ptr__->SphereRadius = dVar3;
      return __return_storage_ptr__;
    }
  }
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar16;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar16;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// CollectPSOPrecacheData @ 14da237f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FFastGeoInstancedStaticMeshComponent::CollectPSOPrecacheData
          (FFastGeoInstancedStaticMeshComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  bool bVar1;
  longlong lVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  undefined1 auStackY_188 [32];
  code *local_158;
  undefined4 *local_150;
  undefined4 local_148 [2];
  TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1> *local_140;
  FFastGeoInstancedStaticMeshComponent *local_138;
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar2 = (**(code **)(this->_padding_ + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(this->_padding_ + 0x110))(this);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
      lVar2 = (**(code **)(this->_padding_ + 0x110))(this);
      local_128.Entries.ArrayMax = 4;
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_148[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_140 = &FInstancedStaticMeshComponentHelper::DummyStaticMeshInstanceBuffer;
      if (bVar1) {
        local_140 = (TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
                     *)0x0;
      }
      local_128.bCompatibleWithLumenCardSharing = '\0';
      local_128.bHasSky = '\0';
      local_128.bHasMasked = '\0';
      local_128.bHasAnyError = '\0';
      local_128.Entries.ArrayNum = 0;
      local_128.FallbackMaterial = (UMaterialInterface *)0x0;
      local_138 = this;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoInstancedStaticMeshComponent>(this,&local_128);
      local_150 = local_148;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      if (!bVar1) {
        pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
      }
      FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<FFastGeoInstancedStaticMeshComponent>
                (this,pFVar4,param_1,
                 (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                  *)&local_158,param_2);
      if (local_128.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateAllInstanceBodies @ 14da23d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FFastGeoInstancedStaticMeshComponent::CreateAllInstanceBodies
          (FFastGeoInstancedStaticMeshComponent *this)

{
  int *piVar1;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *this_00;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  UBodySetup *pUVar10;
  FBodyInstance *this_01;
  FBodyInstance *pFVar11;
  UWorld *pUVar12;
  FLockedPhysicsObjectExternalInterface<1> *pFVar13;
  longlong lVar14;
  FBodyInstance *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  FBodyInstance *pFVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_248 [32];
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1e0;
  FBodyInstance *local_1d0;
  FBodyInstance *local_1c8;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_1b0;
  UBodySetup *local_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  FScriptContainerElement *local_188;
  int iStack_180;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_178;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_168;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  double local_148;
  FLockedPhysicsObjectExternalInterface<1> local_140;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId253,
               "FFastGeoInstancedStaticMeshComponent::CreateAllInstanceBodies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
               ,0xfd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId253);
  }
  uVar3 = (this->PerInstanceSMData).ArrayNum;
  lVar17 = (longlong)(int)uVar3;
  piVar1 = &(this->InstanceBodies).ArrayNum;
  if ((*piVar1 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodies.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                         ,0x100,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((char)(this->SceneProxyDesc)._padding_ == '\x02') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.Mobility != EComponentMobility::Movable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                         ,0x101,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = (UBodySetup *)(**(code **)(this->_padding_ + 8))(this);
  local_1a0 = pUVar10;
  if (pUVar10 == (UBodySetup *)0x0) {
    if (2 < (byte)LogFastGeoStreaming._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFastGeoStreaming);
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar3,&(this->InstanceBodies).AllocatorInstance,piVar1,
                       &(this->InstanceBodies).ArrayMax);
    memset((this->InstanceBodies).AllocatorInstance.Data + (longlong)iVar9 * 8,0,lVar17 * 8);
    goto LAB_14da2459b;
  }
  FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  bVar8 = FBodyInstance::GetOverrideWalkableSlopeOnInstance((FBodyInstance *)&this->_padding_);
  if (!bVar8) {
    FBodyInstance::SetWalkableSlopeOverride
              ((FBodyInstance *)&this->_padding_,&pUVar10->WalkableSlopeOverride,false);
  }
  pTVar2 = &this->InstanceBodies;
  iVar9 = (this->InstanceBodies).ArrayNum;
  if (iVar9 < (int)uVar3) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3 - iVar9,&pTVar2->AllocatorInstance,piVar1,&(this->InstanceBodies).ArrayMax)
    ;
    goto LAB_14da23e78;
  }
  if ((int)uVar3 < 0) goto LAB_14da245db;
  if ((int)uVar3 < iVar9) {
    uVar18 = iVar9 - uVar3;
    if (((int)(uVar18 | uVar3) < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar18 == 0) goto LAB_14da23e78;
    pFVar4 = (pTVar2->AllocatorInstance).Data + lVar17 * 8;
    iVar9 = ((this->InstanceBodies).ArrayNum - uVar18) - uVar3;
    if (iVar9 != 0) {
      memmove(pFVar4,pFVar4 + (longlong)(int)uVar18 * 8,(longlong)iVar9 << 3);
    }
    piVar1 = &(this->InstanceBodies).ArrayNum;
    *piVar1 = *piVar1 - uVar18;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->InstanceBodies).ArrayNum,
               &(this->InstanceBodies).ArrayMax);
  }
  else {
LAB_14da23e78:
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    if ((int)uVar3 < 0) {
LAB_14da245db:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar19 = (FBodyInstance *)0x0;
  uVar18 = 0;
  if ((int)uVar3 < 1) {
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_1f0.AllocatorInstance,0,&local_1f0.ArrayMax);
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&local_1e0.AllocatorInstance,0,&local_1e0.ArrayMax);
    dVar7 = __real_3f1a36e2e0000000;
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar15 = pFVar19;
    pFVar11 = pFVar19;
    do {
      uVar20 = (uint)pFVar11;
      uVar16 = ~uVar20 >> 0x1f;
      uVar22 = uVar18;
      if ((int)uVar20 < (this->PerInstanceSMData).ArrayNum) {
        uVar22 = uVar16;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Math::TTransform<double>::SetFromMatrix
                (&local_b8,
                 (TMatrix<double> *)
                 ((this->PerInstanceSMData).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x80));
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_118,&local_b8,(TTransform<double> *)&this->_padding_);
      local_148 = local_118.Scale3D.ZW.m128d_f64[0];
      local_158 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
      uStack_154 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
      uStack_150 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
      uStack_14c = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
      if (((dVar7 <= (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ & uVar6,
                                      local_118.Scale3D.XY.m128d_f64[0]._0_4_ & uVar3) &&
            (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ & uVar6,
                             local_118.Scale3D.XY.m128d_f64[0]._0_4_ & uVar3) != dVar7) ||
          (dVar7 <= (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & uVar6,
                                     local_118.Scale3D.XY.m128d_f64[1]._0_4_ & uVar3) &&
           (double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & uVar6,
                            local_118.Scale3D.XY.m128d_f64[1]._0_4_ & uVar3) != dVar7)) ||
         (uVar22 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar3,
         uVar23 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar6,
         dVar7 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar7)) {
        this_01 = ::operator_new(400);
        pFVar11 = pFVar19;
        if (this_01 != (FBodyInstance *)0x0) {
          pFVar11 = FBodyInstance::FBodyInstance(this_01);
        }
        local_1d0 = pFVar11;
        if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d0) &&
            ((FScriptContainerElement *)&local_1d0 <
             local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_1f0.ArrayNum;
        if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
        }
        local_1f0.ArrayNum = iVar9 + 1;
        *(FBodyInstance **)(local_1f0.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_1d0;
        local_1c8 = local_1d0;
        uVar22 = uVar18;
        if ((int)uVar20 < (this->InstanceBodies).ArrayNum) {
          uVar22 = uVar16;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FBodyInstance **)((pTVar2->AllocatorInstance).Data + (longlong)pFVar15 * 8) = local_1c8;
        FBodyInstance::CopyBodyInstancePropertiesFrom(local_1d0,(FBodyInstance *)&this->_padding_);
        local_1d0->InstanceBodyIndex = uVar20;
        *(byte *)&local_1d0->_padding_ = (byte)local_1d0->_padding_ & 0xdf;
        *(byte *)&local_1d0->_padding_ = (byte)local_1d0->_padding_ & 0xfe;
        if (((local_1e0.AllocatorInstance.Data <= &local_118) &&
            (&local_118 <
             (TTransform<double> *)
             (local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x60))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_1e0.ArrayNum;
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1060,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        local_1e0.ArrayNum = iVar9 + 1;
        lVar14 = (longlong)iVar9 * 0x60;
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14) = local_118.Rotation.XY.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 8) =
             local_118.Rotation.XY.m128d_f64[1];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x10) =
             local_118.Rotation.ZW.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x10 + 8) =
             local_118.Rotation.ZW.m128d_f64[1];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x20) =
             local_118.Translation.XY.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x20 + 8) =
             local_118.Translation.XY.m128d_f64[1];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x30) =
             local_118.Translation.ZW.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x30 + 8) =
             local_118.Translation.ZW.m128d_f64[1];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x40) =
             local_118.Scale3D.XY.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x40 + 8) =
             local_118.Scale3D.XY.m128d_f64[1];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x50) =
             local_118.Scale3D.ZW.m128d_f64[0];
        *(double *)(local_1e0.AllocatorInstance.Data + lVar14 + 0x50 + 8) =
             local_118.Scale3D.ZW.m128d_f64[1];
      }
      else {
        uVar22 = uVar18;
        if ((int)uVar20 < (this->InstanceBodies).ArrayNum) {
          uVar22 = uVar16;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)pFVar15 * 8) = 0;
      }
      pFVar11 = (FBodyInstance *)(ulonglong)(uVar20 + 1);
      pFVar15 = (FBodyInstance *)((longlong)&pFVar15->_padding_ + 1);
      pUVar10 = local_1a0;
    } while ((longlong)pFVar15 < lVar17);
  }
  if (0 < local_1f0.ArrayNum) {
    this_00 = &this->_padding_;
    FFastGeoPhysicsBodyInstanceOwner::Initialize
              ((FFastGeoPhysicsBodyInstanceOwner *)this_00,(FFastGeoPrimitiveComponent *)this);
    pUVar12 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
    pFVar15 = (FBodyInstance *)&this->_padding_;
    if (this_00 == (longlong *)0x0) {
      pFVar15 = pFVar19;
    }
    FBodyInstance::InitStaticBodies
              (&local_1f0,&local_1e0,pUVar10,(UPrimitiveComponent *)0x0,pUVar12->PhysicsScene,
               (IPhysicsBodyInstanceOwner *)pFVar15);
    local_1c0.ArrayNum = (this->InstanceBodies).ArrayNum;
    lVar17 = (longlong)local_1c0.ArrayNum;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1c0.ArrayNum == 0) {
      local_1c0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_1c0.ArrayNum,0,&local_1c0.AllocatorInstance,local_1c0.ArrayNum,
                 &local_1c0.ArrayMax);
      memcpy(local_1c0.AllocatorInstance.Data,pFVar4,lVar17 << 3);
    }
    GetAllPhysicsObjects(&local_1b0,&local_1c0);
    iStack_190 = local_1b0.ArrayNum;
    local_198 = local_1b0.AllocatorInstance.Data;
    if ((local_1b0.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_178.DataPtr = (FPhysicsObject **)local_198;
    pFVar13 = FPhysicsObjectExternalInterface::LockWrite(&local_140,&local_178);
    local_188 = local_1b0.AllocatorInstance.Data;
    if ((local_1b0.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_180 = local_1b0.ArrayNum;
    local_168.DataPtr = (FPhysicsObject **)local_188;
    Chaos::FWritePhysicsObjectInterface<0>::SetUserDefinedEntity
              (&pFVar13->Interface,&local_168,(FChaosUserDefinedEntity *)this_00);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_140.Lock);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  if ((TTransform<double> *)local_1e0.AllocatorInstance.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
LAB_14da2459b:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateStaticMeshSceneProxy @ 14da26420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoInstancedStaticMeshComponent::CreateStaticMeshSceneProxy
          (FFastGeoInstancedStaticMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FInstanceDataSceneProxy *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UWorld *pUVar6;
  FPrimitiveSceneProxy *pFVar7;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar8;
  FSceneProxy *this_00;
  FInstancedStaticMeshSceneProxy *pFVar9;
  
  pUVar6 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar6 == (UWorld *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                       ,0xa4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((this->SceneProxyDesc)._padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneProxyDesc.Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                       ,0xa5,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((this->PerInstanceSMData).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerInstanceSMData.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                       ,0xa6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  pTVar8 = BuildInstanceData(this);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController;
  (this->SceneProxyDesc).InstanceDataSceneProxy.Object = pFVar2;
  (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_2) {
    this_00 = ::operator_new(0xc20);
    if (this_00 != (FSceneProxy *)0x0) {
      pFVar9 = (FInstancedStaticMeshSceneProxy *)
               Nanite::FSceneProxy::FSceneProxy(this_00,param_1,&this->SceneProxyDesc);
      goto LAB_14da2655a;
    }
  }
  else {
    pFVar9 = ::operator_new(0xdb0);
    if (pFVar9 != (FInstancedStaticMeshSceneProxy *)0x0) {
      pFVar9 = FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
                         (pFVar9,&this->SceneProxyDesc,(Type)(this->SceneProxyDesc)._padding_);
      goto LAB_14da2655a;
    }
  }
  pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
LAB_14da2655a:
  this->_padding_ = (longlong)pFVar9;
  return (FPrimitiveSceneProxy *)pFVar9;
}

// DoCustomNavigableGeometryExport @ 14da27050

bool __thiscall
FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport
          (FFastGeoInstancedStaticMeshComponent *this,FNavigableGeometryExport *param_1)

{
  UObject *pUVar1;
  UStaticMesh *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong lVar7;
  UNavCollisionBase *pUVar8;
  UObject *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = *(UObject **)(this->_padding_ + 0x18);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar5[3] = 0;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  lVar7 = (**(code **)(this->_padding_ + 0x110))(this);
  this_00 = *(UStaticMesh **)(lVar7 + 0x100);
  if (this_00 != (UStaticMesh *)0x0) {
    pUVar8 = UStaticMesh::GetNavCollision(this_00);
    if (pUVar8 != (UNavCollisionBase *)0x0) {
      pUVar8 = UStaticMesh::GetNavCollision(this_00);
      if (pUVar8->bIsDynamicObstacle == 0) {
        if (pUVar8->bHasConvexGeometry == 0) {
          if ((this_00->BodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
            (**(code **)((longlong)*param_1 + 0x28))(param_1);
          }
        }
        else {
          (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8,&UE::Math::TTransform<double>::Identity);
        }
        (**(code **)((longlong)*param_1 + 0x40))(param_1,&local_78);
      }
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return false;
}

// GetAllPhysicsObjects @ 14da29690

TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> * __cdecl
FFastGeoInstancedStaticMeshComponent::GetAllPhysicsObjects
          (TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FBodyInstance *this;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSingleParticlePhysicsProxy *pFVar9;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FPhysicsObject *local_38 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar5 = pFVar11 + (longlong)iVar3 * 8;
LAB_14da29700:
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar5) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      return __return_storage_ptr__;
    }
    this = *(FBodyInstance **)pFVar11;
    if (this == (FBodyInstance *)0x0) {
LAB_14da297fb:
      local_38[0] = (FPhysicsObject *)0x0;
    }
    else {
      pFVar9 = FBodyInstance::GetPhysicsActor(this);
      if (pFVar9 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14da297fb;
      pFVar9 = FBodyInstance::GetPhysicsActor(this);
      local_38[0] = (pFVar9->Reference).Ptr;
      if (local_38[0] != (FPhysicsObject *)0x0) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        pFVar11 = pFVar11 + 8;
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(FPhysicsObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
             = local_38[0];
        goto LAB_14da29700;
      }
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// GetNavigationBounds @ 14da2a8f0

TBox<double> * __thiscall
FFastGeoInstancedStaticMeshComponent::GetNavigationBounds
          (FFastGeoInstancedStaticMeshComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->NavigationBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->NavigationBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->NavigationBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->NavigationBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->NavigationBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->NavigationBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->NavigationBounds).IsValid;
  uVar6 = (this->NavigationBounds).Pad[0];
  uVar7 = (this->NavigationBounds).Pad[1];
  uVar8 = (this->NavigationBounds).Pad[2];
  uVar9 = (this->NavigationBounds).Pad[3];
  uVar10 = (this->NavigationBounds).Pad[4];
  uVar11 = (this->NavigationBounds).Pad[5];
  uVar12 = (this->NavigationBounds).Pad[6];
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

// GetNavigationData @ 14da2aab0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FFastGeoInstancedStaticMeshComponent::GetNavigationData
          (FFastGeoInstancedStaticMeshComponent *this,FNavigationRelevantData *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UObject *local_res8;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = *(UObject **)(this->_padding_ + 0x18);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE__AEAV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::`2'::<lambda_1>_>
               ::_vftable_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar4[3] = 0;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  FInstancedStaticMeshComponentHelper::GetNavigationData<FFastGeoInstancedStaticMeshComponent>
            (this,param_1,
             (TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  return;
}

// GetSceneProxyDesc @ 14da2b780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoInstancedStaticMeshComponent::GetSceneProxyDesc(FFastGeoInstancedStaticMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSceneProxyDesc @ 14da2b790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoInstancedStaticMeshComponent::GetSceneProxyDesc(FFastGeoInstancedStaticMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bb70

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoInstancedStaticMeshComponent::GetStaticMeshSceneProxyDesc
          (FFastGeoInstancedStaticMeshComponent *this)

{
  return (FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bb80

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoInstancedStaticMeshComponent::GetStaticMeshSceneProxyDesc
          (FFastGeoInstancedStaticMeshComponent *this)

{
  return (FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// IsNavigationRelevant @ 14da2dbc0

bool __thiscall
FFastGeoInstancedStaticMeshComponent::IsNavigationRelevant
          (FFastGeoInstancedStaticMeshComponent *this)

{
  UStaticMesh *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char cStack_36;
  char cStack_32;
  
  if (0 < (this->PerInstanceSMData).ArrayNum) {
    lVar4 = (**(code **)(this->_padding_ + 0x110))();
    this_00 = *(UStaticMesh **)(lVar4 + 0x100);
    if ((((this_00 != (UStaticMesh *)0x0) &&
         (cVar1 = (**(code **)(this_00->_padding_ + 0x10))(), cVar1 == '\0')) &&
        (bVar2 = UStaticMesh::IsNavigationRelevant(this_00), bVar2)) &&
       ((this->_padding_ & 0x10) != 0)) {
      iVar3 = (**(code **)(this->_padding_ + 0x90))(this);
      if (1 < iVar3) {
        return true;
      }
      lVar4 = this->_padding_;
      cVar1 = (**(code **)(this->_padding_ + 0x10))(this);
      if ((cVar1 != '\0') &&
         (((cVar1 = *(char *)((longlong)&this->_padding_ + 7), cVar1 == '\x01' || (cVar1 == '\x03'))
          || (cVar1 == '\x05')))) {
        cStack_36 = (char)((ulonglong)lVar4 >> 0x10);
        cStack_32 = (char)((ulonglong)lVar4 >> 0x30);
        if (cStack_36 == '\x02') {
          return true;
        }
        if (cStack_32 == '\x02') {
          return true;
        }
      }
    }
  }
  return false;
}

// OnAsyncCreatePhysicsState @ 14da2e940

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
FFastGeoInstancedStaticMeshComponent::OnAsyncCreatePhysicsState
          (FFastGeoInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId182,
               "FFastGeoInstancedStaticMeshComponent::OnAsyncCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
               ,0xb6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId182);
  }
  if (((this->InstanceBodies).ArrayNum != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodies.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                         ,0xb8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar3->PhysicsScene != (FPhysScene_Chaos *)0x0) {
    CreateAllInstanceBodies(this);
    FFastGeoComponent::OnAsyncCreatePhysicsState((FFastGeoComponent *)this);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAsyncDestroyPhysicsState @ 14da2f2d0

void __thiscall
FFastGeoInstancedStaticMeshComponent::OnAsyncDestroyPhysicsState
          (FFastGeoInstancedStaticMeshComponent *this)

{
  int *piVar1;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FBodyInstance *this_00;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FLockedPhysicsObjectExternalInterface<1> *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  FScriptContainerElement *local_78;
  int iStack_70;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_68;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_58;
  FLockedPhysicsObjectExternalInterface<1> local_48;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId217,
               "FFastGeoInstancedStaticMeshComponent::OnAsyncDestroyPhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
               ,0xd9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId217);
  }
  cVar6 = (**(code **)(this->_padding_ + 0x10))(this);
  if ((cVar6 == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCollisionEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x62,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &this->AsyncDestroyPhysicsStatePayload;
  local_a8.ArrayNum = (this->AsyncDestroyPhysicsStatePayload).ArrayNum;
  lVar9 = (longlong)local_a8.ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.ArrayNum == 0) {
    local_a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
               &local_a8.ArrayMax);
    memcpy(local_a8.AllocatorInstance.Data,pFVar4,lVar9 << 3);
  }
  GetAllPhysicsObjects(&local_98,&local_a8);
  iStack_80 = local_98.ArrayNum;
  local_88 = local_98.AllocatorInstance.Data;
  if ((local_98.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_68.DataPtr = (FPhysicsObject **)local_88;
  pFVar8 = FPhysicsObjectExternalInterface::LockWrite(&local_48,&local_68);
  local_78 = local_98.AllocatorInstance.Data;
  if ((local_98.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_70 = local_98.ArrayNum;
  local_58.DataPtr = (FPhysicsObject **)local_78;
  Chaos::FWritePhysicsObjectInterface<0>::SetUserDefinedEntity
            (&pFVar8->Interface,&local_58,(FChaosUserDefinedEntity *)0x0);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48.Lock);
  if (((this->InstanceBodies).ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceBodies.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                         ,0xe1,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->AsyncDestroyPhysicsStatePayload).ArrayNum;
  pFVar4 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AsyncDestroyPhysicsStatePayload).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar4) break;
    if (*(FBodyInstance **)pFVar10 != (FBodyInstance *)0x0) {
      FBodyInstance::TermBody(*(FBodyInstance **)pFVar10,false);
      this_00 = *(FBodyInstance **)pFVar10;
      if (this_00 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(this_00);
        ::operator_delete(this_00,400);
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  piVar1 = &(this->AsyncDestroyPhysicsStatePayload).ArrayMax;
  (this->AsyncDestroyPhysicsStatePayload).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 14da2f9a0

void __thiscall
FFastGeoInstancedStaticMeshComponent::OnAsyncDestroyPhysicsStateBegin_GameThread
          (FFastGeoInstancedStaticMeshComponent *this)

{
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if ((int)this->_padding_ != 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::Created",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x5c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (this->AsyncDestroyPhysicsStatePayload).ArrayNum;
  *(undefined4 *)&this->_padding_ = 3;
  if (iVar2 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncDestroyPhysicsStatePayload.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoInstancedStaticMeshComponent.cpp"
                       ,0xcb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = &this->InstanceBodies;
  pTVar6 = &this->AsyncDestroyPhysicsStatePayload;
  if (pTVar6 != pTVar1) {
    pFVar3 = (pTVar6->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AsyncDestroyPhysicsStatePayload).ArrayNum = (this->InstanceBodies).ArrayNum;
    (this->AsyncDestroyPhysicsStatePayload).ArrayMax = (this->InstanceBodies).ArrayMax;
    (this->InstanceBodies).ArrayNum = 0;
    (this->InstanceBodies).ArrayMax = 0;
  }
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 14da2fd00

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
FFastGeoInstancedStaticMeshComponent::OnAsyncDestroyPhysicsStateEnd_GameThread
          (FFastGeoInstancedStaticMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)this->_padding_ != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::Destroying",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->_padding_ = 0;
  FFastGeoPhysicsBodyInstanceOwner::Initialize
            ((FFastGeoPhysicsBodyInstanceOwner *)&this->_padding_,(FFastGeoPrimitiveComponent *)0x0)
  ;
  return;
}

// Serialize @ 14da34010

void __thiscall
FFastGeoInstancedStaticMeshComponent::Serialize
          (FFastGeoInstancedStaticMeshComponent *this,FArchive *param_1)

{
  uint *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  ulonglong *puVar7;
  bool bVar8;
  uint local_res8 [2];
  
  FFastGeoStaticMeshComponentBase::Serialize((FFastGeoStaticMeshComponentBase *)this,param_1);
  TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&this->PerInstanceSMData,param_1,false);
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->InstancingRandomSeed);
    }
  }
  else {
    this->InstancingRandomSeed = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize
            (&this->PerInstanceSMCustomData,param_1,false);
  TArrayPrivateFriend::Serialize<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_>
            (param_1,&this->AdditionalRandomSeeds);
  UE::Math::operator<<(param_1,&this->NavigationBounds);
  pfVar2 = &(this->SceneProxyDesc).InstanceLODDistanceScale;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar4 = &(this->SceneProxyDesc).InstanceMinDrawDistance;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar4);
    }
  }
  else {
    *piVar4 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar4 = &(this->SceneProxyDesc).InstanceStartCullDistance;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar4);
    }
  }
  else {
    *piVar4 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar4 = &(this->SceneProxyDesc).InstanceEndCullDistance;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar4);
    }
  }
  else {
    *piVar4 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  bVar8 = (this->SceneProxyDesc).bUseGpuLodSelection;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(bVar8 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14da3423f;
  }
  else {
    local_res8[0] = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  bVar8 = local_res8[0] != 0;
LAB_14da3423f:
  if ((this->SceneProxyDesc).bUseGpuLodSelection != bVar8) {
    (this->SceneProxyDesc).bUseGpuLodSelection = bVar8;
  }
  return;
}

// ShouldSkipNavigationDirtyAreaOnAddOrRemove @ 14da382b0

bool __thiscall
FFastGeoInstancedStaticMeshComponent::ShouldSkipNavigationDirtyAreaOnAddOrRemove
          (FFastGeoInstancedStaticMeshComponent *this)

{
  return true;
}

