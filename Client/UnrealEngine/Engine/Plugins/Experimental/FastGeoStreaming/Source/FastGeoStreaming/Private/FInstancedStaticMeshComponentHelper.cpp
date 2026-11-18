// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 8

// CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent> @ 14da0bc50

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

void __cdecl
FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,FPSOPrecacheParams *param_2,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

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
  lVar2 = (**(code **)(param_1->_padding_ + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
      lVar2 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
      local_128.Entries.ArrayMax = 4;
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_148[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_140 = &DummyStaticMeshInstanceBuffer;
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
      local_138 = param_1;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoInstancedStaticMeshComponent>(param_1,&local_128);
      local_150 = local_148;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      if (!bVar1) {
        pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
      }
      FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<FFastGeoInstancedStaticMeshComponent>
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
  }
  return;
}

// CollectPSOPrecacheData<FFastGeoProceduralISMComponent> @ 14da0bdd0

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

void __cdecl
FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>
          (FFastGeoProceduralISMComponent *param_1,FPSOPrecacheParams *param_2,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

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
  FFastGeoProceduralISMComponent *local_138;
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar2 = (**(code **)(param_1->_padding_ + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
      lVar2 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
      local_128.Entries.ArrayMax = 4;
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_148[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_140 = &DummyStaticMeshInstanceBuffer;
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
      local_138 = param_1;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoProceduralISMComponent>(param_1,&local_128);
      local_150 = local_148;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      if (!bVar1) {
        pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
      }
      FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<FFastGeoProceduralISMComponent>
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
  }
  return;
}

// DoCustomNavigableGeometryExport<FFastGeoInstancedStaticMeshComponent> @ 14da0fe00

bool __cdecl
FInstancedStaticMeshComponentHelper::
DoCustomNavigableGeometryExport<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,FNavigableGeometryExport *param_2,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  UStaticMesh *this;
  UBodySetup *pUVar1;
  longlong lVar2;
  UNavCollisionBase *pUVar3;
  
  lVar2 = (**(code **)(param_1->_padding_ + 0x110))();
  this = *(UStaticMesh **)(lVar2 + 0x100);
  if (this != (UStaticMesh *)0x0) {
    pUVar3 = UStaticMesh::GetNavCollision(this);
    if (pUVar3 != (UNavCollisionBase *)0x0) {
      pUVar3 = UStaticMesh::GetNavCollision(this);
      if (pUVar3->bIsDynamicObstacle == 0) {
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

// GetInstanceNavigationBounds<FFastGeoInstancedStaticMeshComponent> @ 14da12b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
FInstancedStaticMeshComponentHelper::
GetInstanceNavigationBounds<FFastGeoInstancedStaticMeshComponent>
          (TBox<double> *__return_storage_ptr__,FFastGeoInstancedStaticMeshComponent *param_1)

{
  UStaticMesh *this;
  longlong lVar1;
  UNavCollisionBase *pUVar2;
  TBoxSphereBounds<double,double> *pTVar3;
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
  lVar1 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  this = *(UStaticMesh **)(lVar1 + 0x100);
  if (this == (UStaticMesh *)0x0) {
    __return_storage_ptr__->IsValid = '\0';
  }
  else {
    pUVar2 = UStaticMesh::GetNavCollision(this);
    if (pUVar2 == (UNavCollisionBase *)0x0) {
      local_70.SphereRadius._0_1_ = 0;
      pTVar3 = &local_70;
    }
    else {
      pTVar3 = (TBoxSphereBounds<double,double> *)
               (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,&local_70);
    }
    local_a8 = (pTVar3->Origin).field0_0x0._s_0.X;
    dStack_a0 = (pTVar3->Origin).field0_0x0._s_0.Y;
    local_98 = (pTVar3->Origin).field0_0x0._s_0.Z;
    dStack_90 = (pTVar3->BoxExtent).field0_0x0._s_0.X;
    local_88 = (pTVar3->BoxExtent).field0_0x0._s_0.Y;
    dStack_80 = (pTVar3->BoxExtent).field0_0x0._s_0.Z;
    local_78 = pTVar3->SphereRadius;
    if (local_78._0_1_ == '\0') {
      pTVar3 = UStaticMesh::GetBounds(this,&local_70);
      local_78 = (double)CONCAT71(local_78._1_7_,1);
      local_88 = (pTVar3->BoxExtent).field0_0x0._s_0.Y;
      dStack_80 = (pTVar3->BoxExtent).field0_0x0._s_0.Z;
      dStack_90 = (pTVar3->BoxExtent).field0_0x0._s_0.X;
      local_a8 = (pTVar3->Origin).field0_0x0._s_0.X - dStack_90;
      dStack_90 = dStack_90 + (pTVar3->Origin).field0_0x0._s_0.X;
      dStack_a0 = (pTVar3->Origin).field0_0x0._s_0.Y - local_88;
      local_88 = local_88 + (pTVar3->Origin).field0_0x0._s_0.Y;
      local_98 = (pTVar3->Origin).field0_0x0._s_0.Z - dStack_80;
      dStack_80 = dStack_80 + (pTVar3->Origin).field0_0x0._s_0.Z;
    }
    else {
      local_a8 = (pTVar3->Origin).field0_0x0._s_0.X;
      dStack_a0 = (pTVar3->Origin).field0_0x0._s_0.Y;
      local_98 = (pTVar3->Origin).field0_0x0._s_0.Z;
      dStack_90 = (pTVar3->BoxExtent).field0_0x0._s_0.X;
      local_88 = (pTVar3->BoxExtent).field0_0x0._s_0.Y;
      dStack_80 = (pTVar3->BoxExtent).field0_0x0._s_0.Z;
      local_78 = pTVar3->SphereRadius;
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

// GetNavigationData<FFastGeoInstancedStaticMeshComponent> @ 14da13d60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FInstancedStaticMeshComponentHelper::GetNavigationData<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,FNavigationRelevantData *param_2,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  UStaticMesh *this;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
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
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 & 0xc) != 0) {
    local_90._0_4_ = local_90._0_4_ & 0xfffffffe;
    local_78 = 0;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_40 = ((bVar2 & 8) * 2 | bVar2 & 4) << 2 | local_40 & 0xffffff80;
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
  lVar5 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  this = *(UStaticMesh **)(lVar5 + 0x100);
  if (this != (UStaticMesh *)0x0) {
    cVar4 = (**(code **)(this->_padding_ + 0x10))();
    if (cVar4 == '\0') {
      pUVar6 = UStaticMesh::GetNavCollision(this);
      if (pUVar6 != (UNavCollisionBase *)0x0) {
        pUVar6 = UStaticMesh::GetNavCollision(this);
        if (pUVar6->bIsDynamicObstacle != 0) {
          (param_2->Modifiers).bIsPerInstanceModifier = 1;
          (**(code **)(pUVar6->_padding_ + 0x2c8))(pUVar6,&param_2->Modifiers);
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

// GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent> @ 14da14300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FInstancedStaticMeshComponentHelper::
GetNavigationPerInstanceTransforms<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1,TBox<double> *param_2,
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
  GetInstanceNavigationBounds<FFastGeoInstancedStaticMeshComponent>(&local_158,param_1);
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

// operator() @ 14da1c2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>'
::__l2::<lambda_1>::operator()
          (void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColorVertexBuffer *pFVar5;
  undefined1 auStackY_208 [32];
  FInstancedStaticMeshDataType local_1a8;
  FDataType local_128;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar5 = &(param_1->VertexBuffers).ColorVertexBuffer;
  if (param_1->bHasColorVertexData == 0) {
    pFVar5 = (FColorVertexBuffer *)0x0;
  }
  local_1a8.InstanceOriginComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceOriginComponent.StreamOffset = 0;
  local_1a8.InstanceOriginComponent.Offset = '\0';
  local_1a8.InstanceOriginComponent.Stride = '\0';
  local_1a8.InstanceOriginComponent.Type.Value = '\0';
  local_1a8.InstanceOriginComponent.VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[0].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[0].Offset = '\0';
  local_1a8.InstanceTransformComponent[0].Stride = '\0';
  local_1a8.InstanceTransformComponent[0].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[0].VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[1].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[1].Offset = '\0';
  local_1a8.InstanceTransformComponent[1].Stride = '\0';
  local_1a8.InstanceTransformComponent[1].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[1].VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[2].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[2].Offset = '\0';
  local_1a8.InstanceTransformComponent[2].Stride = '\0';
  local_1a8.InstanceTransformComponent[2].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[2].VertexStreamUsage = Default;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.StreamOffset = 0;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Offset = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Stride = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Type.Value = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.VertexStreamUsage = Default;
  local_1a8.InstanceOriginSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceTransformSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceLightmapSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceCustomDataSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.NumCustomDataFloats = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0;
  local_128._padding_._4_4_ = 4;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0xffffffff;
  local_128._padding_._4_2_ = 0xff;
  local_128._padding_._6_1_ = 0;
  local_128.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_128.PreSkinPositionComponent.StreamOffset = 0;
  local_128.PreSkinPositionComponent.Offset = '\0';
  local_128.PreSkinPositionComponent.Stride = '\0';
  local_128.PreSkinPositionComponent.Type.Value = '\0';
  local_128.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_128.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  if ((-1 < param_2) &&
     (lVar1 = *(longlong *)((longlong)this + 0x10), param_2 < *(int *)(lVar1 + 0x3e0))) {
    uVar4 = 0;
    if (param_2 < *(int *)(lVar1 + 0x3e0)) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x3d8) + (longlong)param_2 * 8) != 0) {
      lVar1 = *(longlong *)((longlong)this + 0x10);
      uVar4 = 0;
      if (param_2 < *(int *)(lVar1 + 0x3e0)) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = *(FColorVertexBuffer **)(*(longlong *)(lVar1 + 0x3d8) + (longlong)param_2 * 8);
    }
  }
  FInstancedStaticMeshVertexFactory::InitInstancedStaticMeshVertexFactoryComponents
            (&param_1->VertexBuffers,pFVar5,*(FStaticMeshInstanceBuffer **)((longlong)this + 8),
             (FInstancedStaticMeshVertexFactory *)0x0,*(int *)this,param_3,&local_128,&local_1a8);
  FInstancedStaticMeshVertexFactory::GetVertexElements
            (GMaxRHIFeatureLevel,Default,param_3,&local_128,&local_1a8,param_4);
  return;
}

// operator() @ 14da1c520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>'::__l2
::<lambda_1>::operator()
          (void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColorVertexBuffer *pFVar5;
  undefined1 auStackY_208 [32];
  FInstancedStaticMeshDataType local_1a8;
  FDataType local_128;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar5 = &(param_1->VertexBuffers).ColorVertexBuffer;
  if (param_1->bHasColorVertexData == 0) {
    pFVar5 = (FColorVertexBuffer *)0x0;
  }
  local_1a8.InstanceOriginComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceOriginComponent.StreamOffset = 0;
  local_1a8.InstanceOriginComponent.Offset = '\0';
  local_1a8.InstanceOriginComponent.Stride = '\0';
  local_1a8.InstanceOriginComponent.Type.Value = '\0';
  local_1a8.InstanceOriginComponent.VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[0].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[0].Offset = '\0';
  local_1a8.InstanceTransformComponent[0].Stride = '\0';
  local_1a8.InstanceTransformComponent[0].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[0].VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[1].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[1].Offset = '\0';
  local_1a8.InstanceTransformComponent[1].Stride = '\0';
  local_1a8.InstanceTransformComponent[1].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[1].VertexStreamUsage = Default;
  local_1a8.InstanceTransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceTransformComponent[2].StreamOffset = 0;
  local_1a8.InstanceTransformComponent[2].Offset = '\0';
  local_1a8.InstanceTransformComponent[2].Stride = '\0';
  local_1a8.InstanceTransformComponent[2].Type.Value = '\0';
  local_1a8.InstanceTransformComponent[2].VertexStreamUsage = Default;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.StreamOffset = 0;
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Offset = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Stride = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.Type.Value = '\0';
  local_1a8.InstanceLightmapAndShadowMapUVBiasComponent.VertexStreamUsage = Default;
  local_1a8.InstanceOriginSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceTransformSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceLightmapSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.InstanceCustomDataSRV = (FRHIShaderResourceView *)0x0;
  local_1a8.NumCustomDataFloats = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0;
  local_128._padding_._4_4_ = 4;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0xffffffff;
  local_128._padding_._4_2_ = 0xff;
  local_128._padding_._6_1_ = 0;
  local_128.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_128.PreSkinPositionComponent.StreamOffset = 0;
  local_128.PreSkinPositionComponent.Offset = '\0';
  local_128.PreSkinPositionComponent.Stride = '\0';
  local_128.PreSkinPositionComponent.Type.Value = '\0';
  local_128.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_128.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  if ((-1 < param_2) &&
     (lVar1 = *(longlong *)((longlong)this + 0x10), param_2 < *(int *)(lVar1 + 0x3e0))) {
    uVar4 = 0;
    if (param_2 < *(int *)(lVar1 + 0x3e0)) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x3d8) + (longlong)param_2 * 8) != 0) {
      lVar1 = *(longlong *)((longlong)this + 0x10);
      uVar4 = 0;
      if (param_2 < *(int *)(lVar1 + 0x3e0)) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = *(FColorVertexBuffer **)(*(longlong *)(lVar1 + 0x3d8) + (longlong)param_2 * 8);
    }
  }
  FInstancedStaticMeshVertexFactory::InitInstancedStaticMeshVertexFactoryComponents
            (&param_1->VertexBuffers,pFVar5,*(FStaticMeshInstanceBuffer **)((longlong)this + 8),
             (FInstancedStaticMeshVertexFactory *)0x0,*(int *)this,param_3,&local_128,&local_1a8);
  FInstancedStaticMeshVertexFactory::GetVertexElements
            (GMaxRHIFeatureLevel,Default,param_3,&local_128,&local_1a8,param_4);
  return;
}

