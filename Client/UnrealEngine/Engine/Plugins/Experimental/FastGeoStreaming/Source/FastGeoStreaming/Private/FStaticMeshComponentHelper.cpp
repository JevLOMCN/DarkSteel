// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 12

// CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase> @ 14da0bf50

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

void __cdecl
FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,FPSOPrecacheParams *param_2,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  bool bVar1;
  longlong lVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  undefined1 auStackY_168 [32];
  code *local_138;
  undefined4 *local_130;
  undefined4 local_128 [2];
  TArray<FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>
  *local_120;
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      lVar2 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
      local_118._248_1_ = local_118._248_1_ & 0xf0;
      local_118.Entries.ArrayMax = 4;
      local_128[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_120 = &param_1->LODData;
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>(param_1,&local_118);
      local_130 = local_128;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      if (!bVar1) {
        pFVar4 = &FLocalVertexFactory::StaticType;
      }
      CollectPSOPrecacheDataImpl<FFastGeoStaticMeshComponentBase>
                (param_1,pFVar4,param_2,
                 (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                  *)&local_138,param_3);
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateSceneProxy<FFastGeoStaticMeshComponentBase,1> @ 14da0eb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FPrimitiveSceneProxy * __cdecl
FStaticMeshComponentHelper::CreateSceneProxy<FFastGeoStaticMeshComponentBase,1>
          (FFastGeoStaticMeshComponentBase *param_1,ESceneProxyCreationError *param_2)

{
  int iVar1;
  UStaticMesh *this;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EPSOPrecachePriority EVar5;
  EPSOPrecacheProxyCreationStrategy EVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  EProxyRenderMode EVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FPrimitiveSceneProxy *pFVar13;
  FStaticMeshRenderData *pFVar14;
  UWorld *pUVar15;
  FStaticMeshSceneProxyDesc *pFVar16;
  FResources *pFVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FMaterialAudit local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  lVar12 = (**(code **)(*(longlong *)param_1 + 0x110))();
  this = *(UStaticMesh **)(lVar12 + 0x100);
  if ((this == (UStaticMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshComponentHelper.h"
                         ,0x1cd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar13 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar13;
  }
  cVar4 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar4 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StaticMesh->IsCompiling()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshComponentHelper.h"
                         ,0x1ce,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar13 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar13;
  }
  pFVar14 = UStaticMesh::GetRenderData(this);
  if ((pFVar14 == (FStaticMeshRenderData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh->GetRenderData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshComponentHelper.h"
                         ,0x1cf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar13 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar13;
  }
  pFVar14 = UStaticMesh::GetRenderData(this);
  if ((pFVar14->bIsInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh->GetRenderData()->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshComponentHelper.h"
                         ,0x1d0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar13 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar13;
  }
  EVar5 = GetStaticMeshComponentBoostPSOPrecachePriority();
  bVar3 = FFastGeoPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                    ((FFastGeoPrimitiveComponent *)param_1,EVar5);
  if ((bVar3) && (EVar6 = GetPSOPrecacheProxyCreationStrategy(), EVar6 == DelayUntilPSOPrecached)) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      ::FString::FString(&local_168,"None");
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<FFastGeoStaticMeshComponentBase,1>(FFastGeoStaticMeshComponentBase&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 != (ESceneProxyCreationError *)0x0) {
      *param_2 = WaitingPSOs;
    }
    return (FPrimitiveSceneProxy *)0x0;
  }
  lVar12 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  uVar10 = *(uint *)(lVar12 + 0x164);
  pUVar15 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
  bVar3 = Nanite::IsMaskingAllowed(pUVar15,(bool)((byte)(uVar10 >> 0xc) & 1));
  local_138._248_1_ = local_138._248_1_ & 0xf0;
  local_138.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AssetName.Data.ArrayNum = 0;
  local_138.AssetName.Data.ArrayMax = 0;
  local_138.Entries.AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
  local_138.Entries.ArrayNum = 0;
  local_138.Entries.ArrayMax = 4;
  local_138.FallbackMaterial = (UMaterialInterface *)0x0;
  pFVar16 = (FStaticMeshSceneProxyDesc *)(**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  bVar7 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                    (pFVar16,&local_138);
  if (bVar7) {
    pFVar13 = (FPrimitiveSceneProxy *)
              (**(code **)(*(longlong *)param_1 + 0x120))(param_1,&local_138,1);
    goto LAB_14da0ef71;
  }
  pFVar17 = FFastGeoStaticMeshComponentBase::GetNaniteResources(param_1);
  pFVar13 = (FPrimitiveSceneProxy *)0x0;
  if ((pFVar17 == (FResources *)0x0) || ((pFVar17->PageStreamingStates).ArrayNum < 1)) {
LAB_14da0ee38:
    pFVar14 = UStaticMesh::GetRenderData(this);
    uVar10 = UStaticMesh::GetMinLODIdx(this,false);
    lVar12 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
    if ((*(uint *)(lVar12 + 0x164) >> 4 & 1) != 0) {
      lVar12 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
      if ((int)uVar10 < (int)*(uint *)(lVar12 + 0x14c)) {
        uVar10 = *(uint *)(lVar12 + 0x14c);
      }
    }
    iVar1 = (pFVar14->LODResources).Array.ArrayNum;
    if (iVar1 != 0) {
      uVar11 = iVar1 - 1U;
      if ((int)uVar10 < (int)(iVar1 - 1U)) {
        uVar11 = uVar10;
      }
      uVar10 = 0;
      if (0 < (int)uVar11) {
        uVar10 = uVar11;
      }
      uVar11 = 0;
      if ((int)uVar10 < iVar1) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_178 = (longlong)(int)uVar10;
        local_170 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar13 = (FPrimitiveSceneProxy *)(*pcVar2)();
          return pFVar13;
        }
      }
      if (*(int *)(*(longlong *)
                    ((pFVar14->LODResources).Array.AllocatorInstance.Data +
                    (longlong)(int)uVar10 * 8) + 0x17c) != 0) {
        pFVar13 = (FPrimitiveSceneProxy *)
                  (**(code **)(*(longlong *)param_1 + 0x120))(param_1,&local_138,0);
        goto LAB_14da0ef71;
      }
    }
    if (5 < (byte)LogStaticMesh._0_1_) {
      ::FString::FString(&local_148,"None");
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<FFastGeoStaticMeshComponentBase,1>(FFastGeoStaticMeshComponentBase&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l71::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      local_158.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
LAB_14da0ef5b:
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (((local_138.bHasAnyError == 0) && (local_138.bHasSky == '\0')) &&
       (((bVar3 || (local_138.bHasMasked == '\0')) &&
        (EVar9 = Nanite::GetProxyRenderMode(), EVar9 != Allow)))) goto LAB_14da0ef71;
    pUVar15 = FFastGeoComponent::GetWorld((FFastGeoComponent *)param_1);
    EVar8 = GMaxRHIShaderPlatform;
    if ((pUVar15 != (UWorld *)0x0) && (pUVar15->Scene != (FSceneInterface *)0x0)) {
      EVar8 = FSceneInterface::GetShaderPlatform(pUVar15->Scene);
    }
    bVar3 = UStaticMesh::HasValidNaniteData(this);
    if ((!bVar3) || (bVar3 = UStaticMesh::HasNaniteFallbackMesh(this,EVar8), bVar3))
    goto LAB_14da0ee38;
    if (2 < (byte)LogStaticMesh._0_1_) {
      ::FString::FString(&local_158,"None");
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<FFastGeoStaticMeshComponentBase,1>(FFastGeoStaticMeshComponentBase&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l59::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      goto LAB_14da0ef5b;
    }
  }
  if (param_2 != (ESceneProxyCreationError *)0x0) {
    *param_2 = InvalidMesh;
    pFVar13 = (FPrimitiveSceneProxy *)0x0;
  }
LAB_14da0ef71:
  if (local_138.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)local_138.Entries.AllocatorInstance.SecondaryData);
  }
  if (local_138.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AssetName.Data.AllocatorInstance.Data);
  }
  return pFVar13;
}

// DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase> @ 14da0feb0

bool __cdecl
FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,FNavigableGeometryExport *param_2)

{
  UStaticMesh *this;
  char cVar1;
  bool bVar2;
  longlong lVar3;
  UNavCollisionBase *pUVar4;
  FFastGeoStaticMeshComponentBase *local_res8;
  
  if (((*(double *)&param_1->field_0xd0 != 0.0) || (*(double *)&param_1->field_0xd8 != 0.0)) ||
     (*(double *)&param_1->field_0xe0 != 0.0)) {
    lVar3 = (**(code **)(*(longlong *)param_1 + 0x110))();
    this = *(UStaticMesh **)(lVar3 + 0x100);
    if (((this != (UStaticMesh *)0x0) &&
        ((cVar1 = (**(code **)(this->_padding_ + 0x10))(), cVar1 == '\0' ||
         (local_res8 = param_1,
         bVar2 = `FStaticMeshComponentHelper::
                 DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase>'::__l9::<lambda_1>
                 ::operator()(&local_res8), bVar2)))) &&
       (pUVar4 = UStaticMesh::GetNavCollision(this), pUVar4 != (UNavCollisionBase *)0x0)) {
      if (pUVar4->bIsDynamicObstacle == 0) {
        cVar1 = (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&param_1->field_0x90,param_2);
        return cVar1 == '\0';
      }
      return false;
    }
  }
  return true;
}

// GetMaterial<FFastGeoStaticMeshComponentBase> @ 14da12ee0

UMaterialInterface * __cdecl
FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,int param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  longlong lVar5;
  UMaterialInterface *pUVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((-1 < param_2) && (param_2 < *(int *)&param_1->field_0x3c8)) {
    uVar3 = 0;
    if (param_2 < *(int *)&param_1->field_0x3c8) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMaterialInterface *)(*pcVar1)();
      return pUVar4;
    }
    if (*(longlong *)(*(longlong *)&param_1->field_0x3c0 + (longlong)param_2 * 8) != 0) {
      uVar3 = 0;
      if (param_2 < *(int *)&param_1->field_0x3c8) {
        uVar3 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInterface *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UMaterialInterface **)(*(longlong *)&param_1->field_0x3c0 + (longlong)param_2 * 8);
      goto LAB_14da12ff7;
    }
  }
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if (*(longlong *)(lVar5 + 0x100) == 0) {
    return (UMaterialInterface *)0x0;
  }
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  pUVar4 = UStaticMesh::GetMaterial(*(UStaticMesh **)(lVar5 + 0x100),param_2);
LAB_14da12ff7:
  if ((((pUVar4 != (UMaterialInterface *)0x0) &&
       (UObject::ConditionalPostLoad((UObject *)pUVar4), !param_4)) &&
      ((param_3 ||
       (bVar2 = Nanite::FNaniteResourcesHelper::
                ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>
                          (param_1,(FMaterialAudit *)0x0), bVar2)))) &&
     (Nanite::GEnableNaniteMaterialOverrides != 0)) {
    local_28 = 0;
    uStack_20 = 0;
    pUVar6 = (UMaterialInterface *)(**(code **)(pUVar4->_padding_ + 0x3a8))(pUVar4,&local_28);
    if (pUVar6 != (UMaterialInterface *)0x0) {
      pUVar4 = pUVar6;
    }
  }
  return pUVar4;
}

// GetNavigationBounds<FFastGeoStaticMeshComponentBase> @ 14da13c80

TBox<double> * __cdecl
FStaticMeshComponentHelper::GetNavigationBounds<FFastGeoStaticMeshComponentBase>
          (TBox<double> *__return_storage_ptr__,FFastGeoStaticMeshComponentBase *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  lVar7 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  if (*(UStaticMesh **)(lVar7 + 0x100) != (UStaticMesh *)0x0) {
    UStaticMesh::GetNavigationBounds
              (*(UStaticMesh **)(lVar7 + 0x100),__return_storage_ptr__,
               (TTransform<double> *)&param_1->field_0x90);
    return __return_storage_ptr__;
  }
  dVar1 = *(double *)&param_1->field_0x128;
  dVar2 = *(double *)&param_1->field_0x140;
  dVar3 = *(double *)&param_1->field_0x130;
  dVar4 = *(double *)&param_1->field_0x148;
  dVar5 = *(double *)&param_1->field_0x150;
  dVar6 = *(double *)&param_1->field_0x138;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetNavigationData<FFastGeoStaticMeshComponentBase> @ 14da14130

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FStaticMeshComponentHelper::GetNavigationData<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,FNavigationRelevantData *param_2)

{
  byte bVar1;
  longlong lVar2;
  UNavCollisionBase *pUVar3;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  uint local_10;
  ENavigationDataResolution local_c;
  
  bVar1 = param_1->field_0x160;
  if ((bVar1 & 0xc) != 0) {
    local_60._0_4_ = local_60._0_4_ & 0xfffffffe;
    local_48 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_10 = ((bVar1 & 8) * 2 | bVar1 & 4) << 2 | local_10 & 0xffffff80;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_c = Invalid;
    FCompositeNavModifier::Add(&param_2->Modifiers,(FCompositeNavModifier *)local_60);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_30.Data,(int)local_28)
    ;
    if ((FSimpleLinkNavModifier *)local_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_40.Data,(int)local_38);
    if ((FAreaNavModifier *)local_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  local_78.bDestroyed = (bool)param_1->field_0xe0;
  local_78._17_3_ = *(undefined3 *)&param_1->field_0xe1;
  local_78._20_4_ = *(undefined4 *)&param_1->field_0xe4;
  if (((*(double *)&param_1->field_0xd0 != 0.0) || (*(double *)&param_1->field_0xd8 != 0.0)) ||
     (*(double *)&param_1->field_0xe0 != 0.0)) {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
    if (*(UStaticMesh **)(lVar2 + 0x100) != (UStaticMesh *)0x0) {
      pUVar3 = UStaticMesh::GetNavCollision(*(UStaticMesh **)(lVar2 + 0x100));
      if ((pUVar3 != (UNavCollisionBase *)0x0) && (pUVar3->bIsDynamicObstacle != 0)) {
        (**(code **)(pUVar3->_padding_ + 0x2c8))(pUVar3,&param_2->Modifiers,&param_1->field_0x90);
      }
    }
  }
  return;
}

// GetUsedMaterials<FFastGeoStaticMeshComponentBase> @ 14da14fc0

void __cdecl
FStaticMeshComponentHelper::GetUsedMaterials<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined7 in_register_00000081;
  bool local_res8 [8];
  FFastGeoStaticMeshComponentBase *local_res20;
  longlong local_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_30;
  code *local_20;
  FFastGeoStaticMeshComponentBase **local_18;
  
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))
                    (param_1,param_2,CONCAT71(in_register_00000081,param_3));
  if (*(longlong *)(lVar5 + 0x100) != 0) {
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
    local_18 = &local_res20;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<FFastGeoStaticMeshComponentBase>'::__l5::<lambda_1>,UMaterialInterface_*,int>
               ::Call;
    local_res20 = param_1;
    UStaticMesh::GetUsedMaterials
              (*(UStaticMesh **)(lVar5 + 0x100),param_2,
               (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_20);
    bVar3 = IsRayTracingAllowed();
    if (bVar3) {
      lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
      if ((*(byte *)(*(longlong *)(lVar5 + 0x100) + 0x1e4) & 0x20) != 0) {
        bVar3 = Nanite::FNaniteResourcesHelper::
                ShouldCreateNaniteProxy<FFastGeoStaticMeshComponentBase>
                          (param_1,(FMaterialAudit *)0x0);
        if ((bVar3) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
          GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>(param_1,param_2);
        }
      }
    }
    if (0 < param_2->ArrayNum) {
      local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
      FMeshComponentHelper::GetMaterialSlotsOverlayMaterial<FFastGeoMeshComponent>
                ((FFastGeoMeshComponent *)param_1,&local_30);
      local_res8[0] = false;
      FMaterialOverlayHelper::AppendAllOverlayMaterial(&local_30,param_2,local_res8);
      if (local_res8[0] != false) {
        local_38 = (**(code **)(*(longlong *)param_1 + 0x108))(param_1);
        if (local_38 != 0) {
          pFVar1 = (param_2->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
             ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar4 = param_2->ArrayNum;
          if (iVar4 == param_2->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar4 + 1;
          *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38;
        }
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase> @ 14da151a0

void __cdecl
FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FFastGeoStaticMeshComponentBase *local_res8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FFastGeoStaticMeshComponentBase **local_30;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  lVar4 = (**(code **)(*(longlong *)param_1 + 0x110))();
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>,UMaterialInterface_*,int>
             ::Call;
  local_res8 = param_1;
  UStaticMesh::GetUsedMaterials
            (*(UStaticMesh **)(lVar4 + 0x100),&local_48,
             (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_38);
  FVar2.Data = local_48.AllocatorInstance.Data;
  lVar4 = (longlong)local_48.ArrayNum;
  if (local_48.ArrayNum != 0) {
    iVar7 = 0;
    bVar8 = *(longlong *)local_48.AllocatorInstance.Data != 0;
    lVar5 = 0;
    iVar3 = 0;
    do {
      iVar6 = iVar3;
      do {
        lVar5 = lVar5 + 1;
        iVar6 = iVar6 + 1;
        if (lVar4 <= lVar5) break;
      } while (bVar8 == (*(longlong *)(FVar2.Data + lVar5 * 8) != 0));
      if (bVar8 != false) {
        if (iVar7 != iVar3) {
          memmove(FVar2.Data + (longlong)iVar7 * 8,FVar2.Data + (longlong)iVar3 * 8,
                  (longlong)(iVar6 - iVar3) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar3);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar3 = iVar6;
    } while (lVar5 < lVar4);
    local_48.ArrayNum = iVar7;
    if ((param_2 == &local_48) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar4 = (longlong)local_48.ArrayNum;
    if (local_48.ArrayNum != 0) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_48.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                         &param_2->ArrayMax);
      memcpy((param_2->AllocatorInstance).Data + (longlong)iVar3 * 8,local_48.AllocatorInstance.Data
             ,lVar4 << 3);
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// IsNavigationRelevant<FFastGeoStaticMeshComponentBase> @ 14da15d90

bool __cdecl
FStaticMeshComponentHelper::IsNavigationRelevant<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1)

{
  UStaticMesh *this;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char cStack_36;
  char cStack_32;
  
  lVar5 = (**(code **)(*(longlong *)param_1 + 0x110))();
  this = *(UStaticMesh **)(lVar5 + 0x100);
  if ((((this != (UStaticMesh *)0x0) &&
       (cVar2 = (**(code **)(this->_padding_ + 0x10))(), cVar2 == '\0')) &&
      (bVar3 = UStaticMesh::IsNavigationRelevant(this), bVar3)) &&
     ((param_1->field_0x160 & 0x10) != 0)) {
    iVar4 = (**(code **)(*(longlong *)param_1 + 0x90))(param_1);
    if (1 < iVar4) {
      return true;
    }
    uVar1 = *(undefined8 *)&param_1->field_0x1e8;
    cVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
    if ((cVar2 != '\0') &&
       (((cVar2 = param_1->field_0x197, cVar2 == '\x01' || (cVar2 == '\x03')) || (cVar2 == '\x05')))
       ) {
      cStack_36 = (char)((ulonglong)uVar1 >> 0x10);
      cStack_32 = (char)((ulonglong)uVar1 >> 0x30);
      if (cStack_36 == '\x02') {
        return true;
      }
      if (cStack_32 == '\x02') {
        return true;
      }
    }
  }
  return false;
}

// operator() @ 14da1c780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>'::__l2::
<lambda_1>::operator()
          (void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackY_148 [32];
  FDataType local_118;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar1 = (param_1->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar4 = *(int *)this;
  if ((int)uVar1 <= *(int *)this) {
    iVar4 = uVar1 - 1;
  }
  if (param_2 < (int)plVar2[1]) {
    if (param_2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)(*plVar2 + (longlong)param_2 * 8) != 0) {
      bVar5 = true;
      goto LAB_14da1c822;
    }
  }
  bVar5 = false;
LAB_14da1c822:
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
  local_118._padding_._6_1_ = 0;
  local_118.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_118.PreSkinPositionComponent.StreamOffset = 0;
  local_118.PreSkinPositionComponent.Offset = '\0';
  local_118.PreSkinPositionComponent.Stride = '\0';
  local_118.PreSkinPositionComponent.Type.Value = '\0';
  local_118.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_118.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._4_2_ = 0xff;
  FStaticMeshVertexBuffers::InitComponentVF
            (&param_1->VertexBuffers,(FLocalVertexFactory *)0x0,iVar4,bVar5,&local_118);
  FLocalVertexFactory::GetVertexElements(GMaxRHIFeatureLevel,Default,param_3,&local_118,param_4);
  return;
}

// operator() @ 14da1d0b0

UMaterialInterface * __thiscall
`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((-1 < param_1) && (lVar5 = *(longlong *)this, param_1 < *(int *)(lVar5 + 0x3c8))) {
    uVar3 = 0;
    if (param_1 < *(int *)(lVar5 + 0x3c8)) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMaterialInterface *)(*pcVar1)();
      return pUVar4;
    }
    if (*(longlong *)(*(longlong *)(lVar5 + 0x3c0) + (longlong)param_1 * 8) != 0) {
      lVar5 = *(longlong *)this;
      uVar3 = 0;
      if (param_1 < *(int *)(lVar5 + 0x3c8)) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInterface *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(UMaterialInterface **)(*(longlong *)(lVar5 + 0x3c0) + (longlong)param_1 * 8);
      goto LAB_14da1d1c7;
    }
  }
  lVar5 = (**(code **)(**(longlong **)this + 0x110))();
  if (*(longlong *)(lVar5 + 0x100) == 0) {
    return (UMaterialInterface *)0x0;
  }
  lVar5 = (**(code **)(**(longlong **)this + 0x110))();
  pUVar4 = UStaticMesh::GetMaterial(*(UStaticMesh **)(lVar5 + 0x100),param_1);
LAB_14da1d1c7:
  if (pUVar4 == (UMaterialInterface *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  UObject::ConditionalPostLoad((UObject *)pUVar4);
  local_28 = 0;
  uStack_20 = 0;
  lVar5 = (**(code **)(pUVar4->_padding_ + 0x3a8))(pUVar4,&local_28);
  if (lVar5 != 0) {
    return pUVar4;
  }
  return (UMaterialInterface *)0x0;
}

// operator() @ 150588fc0

bool __thiscall
`FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase>'::__l9
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5924073731679846791>);
  if (bVar2) {
    ::FString::FString(&local_18,"None");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5924073731679846791>,
                       &`public:___cdecl_`public:_static_bool___cdecl_FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<FFastGeoStaticMeshComponentBase>(FFastGeoStaticMeshComponentBase_const&___ptr64,FNavigableGeometryExport&___ptr64)'::`9'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150589028;
    }
  }
  bVar2 = false;
LAB_150589028:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

