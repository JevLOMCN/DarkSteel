// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// CollectPSOPrecacheData<UInstancedStaticMeshComponent> @ 147cb2fe0

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

void __cdecl
FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FPSOPrecacheParams *param_2,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  UObject *pUVar1;
  UStaticMesh *this;
  bool bVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  code *local_158;
  undefined4 *local_150;
  undefined4 local_148 [2];
  TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1> *local_140;
  UInstancedStaticMeshComponent *local_138;
  FMaterialAudit local_128;
  
  pUVar1 = (UObject *)param_1->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  else if (pUVar1 == (UObject *)0x0) {
    return;
  }
  this = (UStaticMesh *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar3 = UStaticMesh::GetRenderData(this);
  if (pFVar3 != (FStaticMeshRenderData *)0x0) {
    bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                        (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
    pUVar1 = (UObject *)param_1->_padding_;
    local_140 = &DummyStaticMeshInstanceBuffer;
    if (bVar2) {
      local_140 = (TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
                   *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_148[0] = *(undefined4 *)&pUVar1[0xb].field_0x8;
    local_128.bCompatibleWithLumenCardSharing = '\0';
    local_128.bHasSky = '\0';
    local_128.bHasMasked = '\0';
    local_128.bHasAnyError = '\0';
    local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.AssetName.Data.ArrayNum = 0;
    local_128.AssetName.Data.ArrayMax = 0;
    local_128.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_128.Entries.ArrayNum = 0;
    local_128.Entries.ArrayMax = 4;
    local_128.FallbackMaterial = (UMaterialInterface *)0x0;
    local_138 = param_1;
    bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UInstancedStaticMeshComponent>
                      (param_1,&local_128);
    pFVar4 = &FNaniteVertexFactory::StaticType;
    local_150 = local_148;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<UInstancedStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                ::Call;
    if (!bVar2) {
      pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
    }
    FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<UInstancedStaticMeshComponent>
              (param_1,pFVar4,param_2,
               (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                *)&local_158,param_3);
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

// DoCustomNavigableGeometryExport<UInstancedStaticMeshComponent> @ 147cb55a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FInstancedStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FNavigableGeometryExport *param_2,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  UStaticMesh *this;
  UBodySetup *pUVar1;
  bool bVar2;
  UNavCollisionBase *pUVar3;
  
  this = (UStaticMesh *)param_1->_padding_;
  if (this != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pUVar3 = UStaticMesh::GetNavCollision(this);
    if (pUVar3 != (UNavCollisionBase *)0x0) {
      pUVar3 = UStaticMesh::GetNavCollision(this);
      bVar2 = UStaticMeshComponent::ShouldExportAsObstacle((UStaticMeshComponent *)param_1,pUVar3);
      if (!bVar2) {
        if (pUVar3->bHasConvexGeometry == 0) {
          pUVar1 = (this->BodySetup).field0_0x0.DebugPtr;
          if (pUVar1 != (UBodySetup *)0x0) {
            (**(code **)((longlong)*param_2 + 0x28))
                      (param_2,pUVar1,&UE::Math::TTransform<double>::Identity);
          }
        }
        else {
          (**(code **)(pUVar3->_padding_ + 0x2c0))
                    (pUVar3,&UE::Math::TTransform<double>::Identity,param_2);
        }
        (**(code **)((longlong)*param_2 + 0x40))(param_2,param_3);
      }
    }
  }
  return false;
}

// GetInstanceNavigationBounds<UInstancedStaticMeshComponent> @ 147cb7170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TBox<double> * __cdecl
FInstancedStaticMeshComponentHelper::GetInstanceNavigationBounds<UInstancedStaticMeshComponent>
          (TBox<double> *__return_storage_ptr__,UInstancedStaticMeshComponent *param_1)

{
  UStaticMesh *this;
  UNavCollisionBase *pUVar1;
  TBoxSphereBounds<double,double> *pTVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TBoxSphereBounds<double,double> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this = (UStaticMesh *)param_1->_padding_;
  if (this == (UStaticMesh *)0x0) {
    __return_storage_ptr__->IsValid = '\0';
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pUVar1 = UStaticMesh::GetNavCollision(this);
    if (pUVar1 == (UNavCollisionBase *)0x0) {
      local_70.SphereRadius._0_1_ = 0;
      pTVar2 = &local_70;
    }
    else {
      pTVar2 = (TBoxSphereBounds<double,double> *)
               (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,&local_70);
    }
    local_a8 = (pTVar2->Origin).field0_0x0._s_0.X;
    dStack_a0 = (pTVar2->Origin).field0_0x0._s_0.Y;
    local_98 = (pTVar2->Origin).field0_0x0._s_0.Z;
    dStack_90 = (pTVar2->BoxExtent).field0_0x0._s_0.X;
    local_88 = (pTVar2->BoxExtent).field0_0x0._s_0.Y;
    dStack_80 = (pTVar2->BoxExtent).field0_0x0._s_0.Z;
    local_78 = pTVar2->SphereRadius;
    if (local_78._0_1_ == '\0') {
      pTVar2 = UStaticMesh::GetBounds(this,&local_70);
      local_78 = (double)CONCAT71(local_78._1_7_,1);
      local_88 = (pTVar2->BoxExtent).field0_0x0._s_0.Y;
      dStack_80 = (pTVar2->BoxExtent).field0_0x0._s_0.Z;
      dStack_90 = (pTVar2->BoxExtent).field0_0x0._s_0.X;
      local_a8 = (pTVar2->Origin).field0_0x0._s_0.X - dStack_90;
      dStack_90 = dStack_90 + (pTVar2->Origin).field0_0x0._s_0.X;
      dStack_a0 = (pTVar2->Origin).field0_0x0._s_0.Y - local_88;
      local_88 = local_88 + (pTVar2->Origin).field0_0x0._s_0.Y;
      local_98 = (pTVar2->Origin).field0_0x0._s_0.Z - dStack_80;
      dStack_80 = dStack_80 + (pTVar2->Origin).field0_0x0._s_0.Z;
    }
    else {
      local_a8 = (pTVar2->Origin).field0_0x0._s_0.X;
      dStack_a0 = (pTVar2->Origin).field0_0x0._s_0.Y;
      local_98 = (pTVar2->Origin).field0_0x0._s_0.Z;
      dStack_90 = (pTVar2->BoxExtent).field0_0x0._s_0.X;
      local_88 = (pTVar2->BoxExtent).field0_0x0._s_0.Y;
      dStack_80 = (pTVar2->BoxExtent).field0_0x0._s_0.Z;
      local_78 = pTVar2->SphereRadius;
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_a8;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dStack_a0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_98;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_90;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_88;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_80;
    *(double *)&__return_storage_ptr__->IsValid = local_78;
  }
  return __return_storage_ptr__;
}

// GetNavigationData<UInstancedStaticMeshComponent> @ 147cb75c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshComponentHelper::GetNavigationData<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,FNavigationRelevantData *param_2,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  UStaticMesh *this;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  UNavCollisionBase *pUVar6;
  FDestructionSentinel local_a8;
  undefined1 local_90 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  int local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  uint local_40;
  ENavigationDataResolution local_3c;
  FDestructionSentinel local_38;
  
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 1);
  if ((bVar2 & 3) != 0) {
    local_90._0_4_ = local_90._0_4_ & 0xfffffffe;
    local_78 = 0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_40 = ((bVar2 & 2) * 2 | bVar2 & 1) << 4 | local_40 & 0xffffff80;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_3c = Invalid;
    FCompositeNavModifier::Add(&param_2->Modifiers,(FCompositeNavModifier *)local_90);
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_60.Data,(int)local_58)
    ;
    if ((FSimpleLinkNavModifier *)local_60.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_60.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_70.Data,(int)local_68);
    if ((FAreaNavModifier *)local_70.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_70.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_a8);
    if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  }
  this = (UStaticMesh *)param_1->_padding_;
  if (this != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    cVar4 = (**(code **)(this->_padding_ + 0x10))();
    if (cVar4 == '\0') {
      pUVar6 = UStaticMesh::GetNavCollision(this);
      if (pUVar6 != (UNavCollisionBase *)0x0) {
        pUVar6 = UStaticMesh::GetNavCollision(this);
        bVar5 = UStaticMeshComponent::ShouldExportAsObstacle((UStaticMeshComponent *)param_1,pUVar6)
        ;
        if (bVar5) {
          (param_2->Modifiers).bIsPerInstanceModifier = 1;
          (**(code **)(pUVar6->_padding_ + 0x2c8))(pUVar6);
          if (param_3 != &param_2->NavDataPerInstanceTransformDelegate) {
            local_a8.AccessType = Reader;
            local_a8._4_4_ = 0;
            local_a8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
            local_a8._16_4_ = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,
                       (FReadAccessScope *)&local_38);
            if ((*(int *)&param_3->field_0x10 != 0) &&
               (plVar3 = *(longlong **)&param_3->field_0x8, plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x50))(plVar3,&local_a8);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope((FReadAccessScope *)&local_38);
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &param_2->NavDataPerInstanceTransformDelegate,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_a8,
                       (FWriteAccessScope *)&local_38);
            if ((local_a8._16_4_ != 0) && (local_a8.Accessor != (FMRSWRecursiveAccessDetector *)0x0)
               ) {
              (**(code **)(local_a8.Accessor)->State)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_a8.Accessor,0,0,0x10);
              local_a8._16_4_ = 0;
            }
            if (local_38.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
            }
            if (local_a8.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
              FMemory::Free(local_a8.Accessor);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)&local_a8);
          }
        }
      }
    }
  }
  return;
}

// GetNavigationPerInstanceTransforms<UInstancedStaticMeshComponent> @ 147cb7870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshComponentHelper::
GetNavigationPerInstanceTransforms<UInstancedStaticMeshComponent>
          (UInstancedStaticMeshComponent *param_1,TBox<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  TBox<double> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  undefined1 auStack_268 [32];
  TTransform<double> *local_248;
  TTransform<double> *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined1 local_218 [8];
  double local_210;
  double dStack_208;
  double local_200;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  TTransform<double> local_1b8;
  TBox<double> local_158;
  TTransform<double> local_118;
  TBox<double> local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_268;
  GetInstanceNavigationBounds<UInstancedStaticMeshComponent>(&local_158,param_1);
  if (local_158.IsValid != '\0') {
    UE::Math::TBox<double>::InverseTransformBy
              (param_2,(TBox<double> *)&local_1f8._s_0,(TTransform<double> *)&param_1->_padding_);
    dVar10 = __real_3fe0000000000000;
    iVar4 = (param_1->PerInstanceSMData).ArrayNum;
    pFVar15 = (param_1->PerInstanceSMData).AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar4 * 0x80;
    while( true ) {
      if ((param_1->PerInstanceSMData).ArrayNum != iVar4) {
        local_218[0] = 0;
        `TCheckedPointerIterator<FInstancedStaticMeshInstanceData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_218);
      }
      if (pFVar15 == pFVar16) break;
      UE::Math::TTransform<double>::SetFromMatrix(&local_118,(TMatrix<double> *)pFVar15);
      local_210 = local_118.Scale3D.XY.m128d_f64[0];
      dStack_208 = local_118.Scale3D.XY.m128d_f64[1];
      local_200 = local_118.Scale3D.ZW.m128d_f64[0];
      if (((local_118.Scale3D.XY.m128d_f64[0] != 0.0) || (local_118.Scale3D.XY.m128d_f64[1] != 0.0))
         || (local_118.Scale3D.ZW.m128d_f64[0] != 0.0)) {
        pTVar13 = UE::Math::TBox<double>::TransformBy
                            (&local_158,&local_b8,(TMatrix<double> *)pFVar15);
        dVar1 = (pTVar13->Min).field0_0x0._s_0.Z;
        dVar2 = (pTVar13->Min).field0_0x0._s_0.X;
        dVar3 = (pTVar13->Min).field0_0x0._s_0.Y;
        dVar9 = ((pTVar13->Max).field0_0x0._s_0.Z - dVar1) * dVar10;
        dVar8 = ((pTVar13->Max).field0_0x0._s_0.Y - dVar3) * dVar10;
        dVar17 = ((pTVar13->Max).field0_0x0._s_0.X - dVar2) * dVar10;
        if ((((local_1f8._s_0.X <= dVar2 + dVar17 + dVar17) && (dVar2 <= local_1e0)) &&
            ((local_1f8._s_0.Y <= dVar3 + dVar8 + dVar8 &&
             ((dVar3 <= local_1d8 && (local_1f8._s_0.Z <= dVar1 + dVar9 + dVar9)))))) &&
           (dVar1 <= local_1d0)) {
          local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1b8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1b8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_1b8,&local_118,(TTransform<double> *)&param_1->_padding_);
          pTVar5 = (TTransform<double> *)(param_3->AllocatorInstance).Data;
          if ((pTVar5 <= &local_1b8) && (&local_1b8 < pTVar5 + param_3->ArrayMax)) {
            local_230 = (longlong)param_3->ArrayNum;
            local_228 = 0x60;
            local_248 = &local_1b8;
            local_240 = pTVar5;
            local_238 = (longlong)param_3->ArrayMax;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar12 = param_3->ArrayNum;
          if (iVar12 == param_3->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar12 + 1;
          pFVar6 = (param_3->AllocatorInstance).Data;
          lVar14 = (longlong)iVar12 * 0x60;
          *(double *)(pFVar6 + lVar14) = local_1b8.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar6 + lVar14 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar6 + lVar14 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
        }
      }
      pFVar15 = pFVar15 + 0x80;
    }
  }
  return;
}

// operator() @ 147ccacd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<UInstancedStaticMeshComponent>'::__l2::
<lambda_1>::operator()
          (void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  longlong lVar1;
  FStaticMeshInstanceBuffer *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FStaticMeshVertexBuffers *this_01;
  FColorVertexBuffer *this_02;
  undefined1 auStackY_2a8 [32];
  undefined1 local_256 [38];
  TTypeCompatibleBytes<FVertexElement> local_230;
  TTypeCompatibleBytes<FVertexElement> local_228;
  TTypeCompatibleBytes<FVertexElement> local_220;
  TTypeCompatibleBytes<FVertexElement> local_218;
  TTypeCompatibleBytes<FVertexElement> local_210;
  TTypeCompatibleBytes<FVertexElement> local_208;
  TTypeCompatibleBytes<FVertexElement> local_200;
  TTypeCompatibleBytes<FVertexElement> local_1f8;
  TTypeCompatibleBytes<FVertexElement> local_1f0;
  TTypeCompatibleBytes<FVertexElement> local_1e8;
  TTypeCompatibleBytes<FVertexElement> TStack_1e0;
  TTypeCompatibleBytes<FVertexElement> local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  FDataType local_1b8;
  TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_e0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1e8.Pad[0] = '\0';
  local_1e8.Pad[1] = '\0';
  local_1e8.Pad[2] = '\0';
  local_1e8.Pad[3] = '\0';
  local_1e8.Pad[4] = '\0';
  local_1e8.Pad[5] = '\0';
  local_1e8.Pad[6] = '\0';
  local_1e8.Pad[7] = '\0';
  TStack_1e0.Pad[0] = '\0';
  TStack_1e0.Pad[1] = '\0';
  TStack_1e0.Pad[2] = '\0';
  TStack_1e0.Pad[3] = '\0';
  TStack_1e0.Pad[4] = '\0';
  TStack_1e0.Pad[5] = '\0';
  TStack_1e0.Pad[6] = '\0';
  TStack_1e0.Pad[7] = '\0';
  local_256[0x1e] = '\0';
  local_256[0x1f] = '\0';
  local_256[0x20] = '\0';
  local_256[0x21] = '\0';
  local_256[0x22] = '\0';
  local_256[0x23] = '\0';
  local_256[0x24] = '\0';
  local_256[0x25] = '\0';
  this_02 = &(param_1->VertexBuffers).ColorVertexBuffer;
  if (param_1->bHasColorVertexData == 0) {
    this_02 = (FColorVertexBuffer *)0x0;
  }
  local_230.Pad[0] = '\0';
  local_230.Pad[1] = '\0';
  local_230.Pad[2] = '\0';
  local_230.Pad[3] = '\0';
  local_230.Pad[4] = '\0';
  local_230.Pad[5] = '\0';
  local_230.Pad[6] = '\0';
  local_230.Pad[7] = '\0';
  local_228.Pad[0] = '\0';
  local_228.Pad[1] = '\0';
  local_228.Pad[2] = '\0';
  local_228.Pad[3] = '\0';
  local_228.Pad[4] = '\0';
  local_228.Pad[5] = '\0';
  local_228.Pad[6] = '\0';
  local_228.Pad[7] = '\0';
  local_220.Pad[0] = '\0';
  local_220.Pad[1] = '\0';
  local_220.Pad[2] = '\0';
  local_220.Pad[3] = '\0';
  local_220.Pad[4] = '\0';
  local_220.Pad[5] = '\0';
  local_220.Pad[6] = '\0';
  local_220.Pad[7] = '\0';
  local_218.Pad[0] = '\0';
  local_218.Pad[1] = '\0';
  local_218.Pad[2] = '\0';
  local_218.Pad[3] = '\0';
  local_218.Pad[4] = '\0';
  local_218.Pad[5] = '\0';
  local_218.Pad[6] = '\0';
  local_218.Pad[7] = '\0';
  local_210.Pad[0] = '\0';
  local_210.Pad[1] = '\0';
  local_210.Pad[2] = '\0';
  local_210.Pad[3] = '\0';
  local_210.Pad[4] = '\0';
  local_210.Pad[5] = '\0';
  local_210.Pad[6] = '\0';
  local_210.Pad[7] = '\0';
  local_208.Pad[0] = '\0';
  local_208.Pad[1] = '\0';
  local_208.Pad[2] = '\0';
  local_208.Pad[3] = '\0';
  local_208.Pad[4] = '\0';
  local_208.Pad[5] = '\0';
  local_208.Pad[6] = '\0';
  local_208.Pad[7] = '\0';
  local_200.Pad[0] = '\0';
  local_200.Pad[1] = '\0';
  local_200.Pad[2] = '\0';
  local_200.Pad[3] = '\0';
  local_200.Pad[4] = '\0';
  local_200.Pad[5] = '\0';
  local_200.Pad[6] = '\0';
  local_200.Pad[7] = '\0';
  local_1f8.Pad[0] = '\0';
  local_1f8.Pad[1] = '\0';
  local_1f8.Pad[2] = '\0';
  local_1f8.Pad[3] = '\0';
  local_1f8.Pad[4] = '\0';
  local_1f8.Pad[5] = '\0';
  local_1f8.Pad[6] = '\0';
  local_1f8.Pad[7] = '\0';
  local_1f0.Pad[0] = '\0';
  local_1f0.Pad[1] = '\0';
  local_1f0.Pad[2] = '\0';
  local_1f0.Pad[3] = '\0';
  local_1f0.Pad[4] = '\0';
  local_1f0.Pad[5] = '\0';
  local_1f0.Pad[6] = '\0';
  local_1f0.Pad[7] = '\0';
  local_1d8.Pad[0] = '\0';
  local_1d8.Pad[1] = '\0';
  local_1d8.Pad[2] = '\0';
  local_1d8.Pad[3] = '\0';
  local_1d8.Pad[4] = '\0';
  local_1d8.Pad[5] = '\0';
  local_1d8.Pad[6] = '\0';
  local_1d8.Pad[7] = '\0';
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_._0_4_ = 0;
  local_1b8._padding_._4_4_ = 4;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_._0_4_ = 0xffffffff;
  local_1b8._padding_._4_2_ = 0xff;
  local_1b8._padding_._6_1_ = 0;
  local_1b8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1b8.PreSkinPositionComponent.StreamOffset = 0;
  local_1b8.PreSkinPositionComponent.Offset = '\0';
  local_1b8.PreSkinPositionComponent.Stride = '\0';
  local_1b8.PreSkinPositionComponent.Type.Value = '\0';
  local_1b8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_1b8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_256._14_8_ = param_1;
  if ((-1 < param_2) &&
     (lVar1 = *(longlong *)((longlong)this + 0x10), param_2 < *(int *)(lVar1 + 0x600))) {
    uVar5 = 0;
    if (param_2 < *(int *)(lVar1 + 0x600)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x5f8) + 0x40 + (longlong)param_2 * 0x50) != 0) {
      lVar1 = *(longlong *)((longlong)this + 0x10);
      uVar5 = 0;
      if (param_2 < *(int *)(lVar1 + 0x600)) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = *(FColorVertexBuffer **)
                 (*(longlong *)(lVar1 + 0x5f8) + 0x40 + (longlong)param_2 * 0x50);
    }
  }
  uVar3 = local_256._14_8_;
  iVar6 = *(int *)this;
  this_01 = (FStaticMeshVertexBuffers *)(local_256._14_8_ + 0xd0);
  this_00 = *(FStaticMeshInstanceBuffer **)((longlong)this + 8);
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&((FStaticMeshVertexBuffers *)(local_256._14_8_ + 0xd0))->PositionVertexBuffer,
             (FVertexFactory *)0x0,(FStaticMeshDataType *)&local_1b8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)this_01,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_1b8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)this_01,(FVertexFactory *)0x0,
             (FStaticMeshDataType *)&local_1b8,-1);
  if ((iVar6 < (int)(((FStaticMeshVertexBuffers *)(uVar3 + 0xd0))->StaticMeshVertexBuffer).
                    NumTexCoords) && (-1 < iVar6)) {
    FStaticMeshVertexBuffer::BindLightMapVertexBuffer
              ((FStaticMeshVertexBuffer *)this_01,(FVertexFactory *)0x0,
               (FStaticMeshDataType *)&local_1b8,iVar6);
  }
  if (this_02 == (FColorVertexBuffer *)0x0) {
    FColorVertexBuffer::BindDefaultColorVertexBuffer
              ((FVertexFactory *)0x0,(FStaticMeshDataType *)&local_1b8,
               param_3 ^ ZeroForDefaultBufferBind);
  }
  else {
    FColorVertexBuffer::BindColorVertexBuffer
              (this_02,(FVertexFactory *)0x0,(FStaticMeshDataType *)&local_1b8);
  }
  if (this_00 != (FStaticMeshInstanceBuffer *)0x0) {
    FStaticMeshInstanceBuffer::BindInstanceVertexBuffer
              (this_00,(FVertexFactory *)0x0,(FInstancedStaticMeshDataType *)(local_256 + 0x1e));
  }
  local_e0.ArrayMax = 8;
  local_e0.AllocatorInstance.SecondaryData = (ForElementType<FVertexFactory::FVertexStream>)0x0;
  local_e0.ArrayNum = 0;
  FInstancedStaticMeshVertexFactory::GetVertexElements
            (GMaxRHIFeatureLevel,Default,param_3,&local_1b8,
             (FInstancedStaticMeshDataType *)(local_256 + 0x1e),param_4,&local_e0);
  bVar4 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar4) &&
     (bVar4 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar4)) {
    local_256[0] = (uchar)local_e0.ArrayNum;
    local_256[1] = '\0';
    local_256[2] = '\x14';
    local_256[3] = '\r';
    local_256[4] = '\x04';
    local_256[5] = '\0';
    local_256[6] = '\x01';
    local_256[7] = '\0';
    if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_256) &&
       ((local_256 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar6 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar6].Pad =
         CONCAT44(local_256._4_4_,CONCAT13(local_256[3],CONCAT21(local_256._1_2_,local_256[0])));
  }
  if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<FVertexFactory::FVertexStream>)0x0
     ) {
    FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
  }
  return;
}

