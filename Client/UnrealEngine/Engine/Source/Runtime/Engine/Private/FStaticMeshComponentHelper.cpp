// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// CollectPSOPrecacheData<UStaticMeshComponent> @ 147998050

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
FStaticMeshComponentHelper::CollectPSOPrecacheData<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,FPSOPrecacheParams *param_2,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  code *local_138;
  int *local_130;
  int local_128 [2];
  TArray<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_> *local_120;
  FMaterialAudit local_118;
  
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UStaticMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  else if (pUVar1 == (UStaticMesh *)0x0) {
    return;
  }
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar3 = UStaticMesh::GetRenderData(pUVar1);
  if (pFVar3 != (FStaticMeshRenderData *)0x0) {
    pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_128[0] = pUVar1->LightMapCoordinateIndex;
    local_118.bCompatibleWithLumenCardSharing = '\0';
    local_118.bHasSky = '\0';
    local_118.bHasMasked = '\0';
    local_118.bHasAnyError = '\0';
    local_120 = &param_1->LODData;
    local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AssetName.Data.ArrayNum = 0;
    local_118.AssetName.Data.ArrayMax = 0;
    local_118.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_118.Entries.ArrayNum = 0;
    local_118.FallbackMaterial = (UMaterialInterface *)0x0;
    local_118.Entries.ArrayMax = 4;
    bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                      (param_1,&local_118);
    local_130 = local_128;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshComponentHelper::CollectPSOPrecacheData<UStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                ::Call;
    pFVar4 = &FNaniteVertexFactory::StaticType;
    if (!bVar2) {
      pFVar4 = &FLocalVertexFactory::StaticType;
    }
    CollectPSOPrecacheDataImpl<UStaticMeshComponent>
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
  return;
}

// DoCustomNavigableGeometryExport<UStaticMeshComponent> @ 1479998d0

bool __cdecl
FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,FNavigableGeometryExport *param_2)

{
  UStaticMesh *this;
  char cVar1;
  bool bVar2;
  UNavCollisionBase *pUVar3;
  byte bVar4;
  UStaticMeshComponent *local_res8;
  
  if (((((double)param_1->_padding_ != 0.0) || ((double)param_1->_padding_ != 0.0)) ||
      ((double)param_1->_padding_ != 0.0)) &&
     (this = (param_1->StaticMesh).field0_0x0.DebugPtr, this != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x10))();
    if (((cVar1 == '\0') ||
        (local_res8 = param_1,
        bVar2 = `FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UStaticMeshComponent>'
                ::__l9::<lambda_1>::operator()(&local_res8), bVar2)) &&
       (pUVar3 = UStaticMesh::GetNavCollision(this), pUVar3 != (UNavCollisionBase *)0x0)) {
      if (param_1->bOverrideNavigationExport == '\0') {
        bVar4 = pUVar3->field_0x28;
      }
      else {
        bVar4 = (byte)param_1->field_0x5ad >> 5;
      }
      if ((bVar4 & 1) == 0) {
        cVar1 = (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&param_1->_padding_,param_2);
        return cVar1 == '\0';
      }
      return false;
    }
  }
  return true;
}

// GetMaterial<UStaticMeshComponent> @ 14799d7d0

UMaterialInterface * __cdecl
FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,int param_2,bool param_3,bool param_4)

{
  UStaticMesh *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  UMaterialInterface *pUVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((-1 < param_2) && (param_2 < (int)param_1->_padding_)) {
    uVar4 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)(param_1->_padding_ + (longlong)param_2 * 8) != 0) {
      uVar4 = 0;
      if (param_2 < (int)param_1->_padding_) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UMaterialInterface **)(param_1->_padding_ + (longlong)param_2 * 8);
      goto LAB_14799d901;
    }
  }
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar5 = UStaticMesh::GetMaterial(pUVar1,param_2);
LAB_14799d901:
  if ((pUVar5 != (UMaterialInterface *)0x0) &&
     (UObject::ConditionalPostLoad((UObject *)pUVar5), !param_4)) {
    if ((!param_3) &&
       (bVar3 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                          (param_1,(FMaterialAudit *)0x0), !bVar3)) {
      return pUVar5;
    }
    if (Nanite::GEnableNaniteMaterialOverrides != 0) {
      local_28 = 0;
      uStack_20 = 0;
      pUVar6 = (UMaterialInterface *)(**(code **)(pUVar5->_padding_ + 0x3a8))(pUVar5,&local_28);
      if (pUVar6 != (UMaterialInterface *)0x0) {
        pUVar5 = pUVar6;
      }
    }
  }
  return pUVar5;
}

// GetNavigationBounds<UStaticMeshComponent> @ 14799dc20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBox<double> * __cdecl
FStaticMeshComponentHelper::GetNavigationBounds<UStaticMeshComponent>
          (TBox<double> *__return_storage_ptr__,UStaticMeshComponent *param_1)

{
  UStaticMesh *this;
  
  this = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (this != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    UStaticMesh::GetNavigationBounds
              (this,__return_storage_ptr__,(TTransform<double> *)&param_1->_padding_);
    return __return_storage_ptr__;
  }
  UPrimitiveComponent::GetNavigationBounds
            ((UPrimitiveComponent *)&param_1->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNavigationData<UStaticMeshComponent> @ 14799dca0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
FStaticMeshComponentHelper::GetNavigationData<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,FNavigationRelevantData *param_2)

{
  UStaticMesh *this;
  UNavCollisionBase *pUVar1;
  byte bVar2;
  
  UPrimitiveComponent::GetNavigationData((UPrimitiveComponent *)&param_1->_padding_,param_2);
  if (((((double)param_1->_padding_ != 0.0) || ((double)param_1->_padding_ != 0.0)) ||
      ((double)param_1->_padding_ != 0.0)) &&
     (this = (param_1->StaticMesh).field0_0x0.DebugPtr, this != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pUVar1 = UStaticMesh::GetNavCollision(this);
    if (pUVar1 != (UNavCollisionBase *)0x0) {
      if (param_1->bOverrideNavigationExport == '\0') {
        bVar2 = pUVar1->field_0x28;
      }
      else {
        bVar2 = (byte)param_1->field_0x5ad >> 5;
      }
      if ((bVar2 & 1) != 0) {
        (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,&param_2->Modifiers,&param_1->_padding_);
      }
    }
  }
  return;
}

// GetUsedMaterials<UStaticMeshComponent> @ 14799e220

void __cdecl
FStaticMeshComponentHelper::GetUsedMaterials<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  UStaticMesh *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool local_res8 [8];
  UStaticMeshComponent *local_res20;
  UMaterialInterface *local_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_30;
  code *local_20;
  UStaticMeshComponent **local_18;
  
  pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_18 = &local_res20;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<UStaticMeshComponent>'::__l5::<lambda_1>,UMaterialInterface_*,int>
               ::Call;
    local_res20 = param_1;
    UStaticMesh::GetUsedMaterials
              (pUVar1,param_2,(TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_20);
    bVar4 = IsRayTracingAllowed();
    if (bVar4) {
      pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if (pUVar1->bSupportRayTracing != '\0') {
        bVar4 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                          (param_1,(FMaterialAudit *)0x0);
        if ((bVar4) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
          GetUsedRayTracingOnlyMaterials<UStaticMeshComponent>(param_1,param_2);
        }
      }
    }
    if (0 < param_2->ArrayNum) {
      local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
      UMeshComponent::GetMaterialSlotsOverlayMaterial((UMeshComponent *)param_1,&local_30);
      local_res8[0] = false;
      FMaterialOverlayHelper::AppendAllOverlayMaterial(&local_30,param_2,local_res8);
      if (local_res8[0] != false) {
        local_38 = UMeshComponent::GetOverlayMaterial((UMeshComponent *)param_1);
        if (local_38 != (UMaterialInterface *)0x0) {
          pFVar2 = (param_2->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
             ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar5 = param_2->ArrayNum;
          if (iVar5 == param_2->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(UMaterialInterface **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_38;
        }
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetUsedRayTracingOnlyMaterials<UStaticMeshComponent> @ 14799e430

void __cdecl
FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<UStaticMeshComponent>
          (UStaticMeshComponent *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UStaticMesh *this;
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  UStaticMeshComponent *local_res8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  UStaticMeshComponent **local_30;
  
  this = (param_1->StaticMesh).field0_0x0.DebugPtr;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<UStaticMeshComponent>'::__l2::<lambda_1>,UMaterialInterface_*,int>
             ::Call;
  local_res8 = param_1;
  UStaticMesh::GetUsedMaterials
            (this,&local_48,(TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_38);
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

// IsNavigationRelevant<UStaticMeshComponent> @ 1479a0cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FStaticMeshComponentHelper::IsNavigationRelevant<UStaticMeshComponent>
          (UStaticMeshComponent *param_1)

{
  UStaticMesh *this;
  char cVar1;
  bool bVar2;
  
  this = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (this != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x10))();
    if (cVar1 == '\0') {
      bVar2 = UStaticMesh::IsNavigationRelevant(this);
      if (bVar2) {
        bVar2 = UPrimitiveComponent::IsNavigationRelevant((UPrimitiveComponent *)param_1);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 1479ab0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStaticMeshComponentHelper::CollectPSOPrecacheData<UStaticMeshComponent>'::__l2::<lambda_1>::
operator()(void *this,FStaticMeshLODResources *param_1,int param_2,bool param_3,
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
    if (*(longlong *)(*plVar2 + 0x40 + (longlong)param_2 * 0x50) != 0) {
      bVar5 = true;
      goto LAB_1479ab15a;
    }
  }
  bVar5 = false;
LAB_1479ab15a:
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

// operator() @ 1479ab220

UMaterialInterface * __thiscall
`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<UStaticMeshComponent>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  UStaticMesh *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMaterialInterface *pUVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((-1 < param_1) && (lVar5 = *(longlong *)this, param_1 < *(int *)(lVar5 + 0x550))) {
    uVar3 = 0;
    if (param_1 < *(int *)(lVar5 + 0x550)) {
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
    if (*(longlong *)(*(longlong *)(lVar5 + 0x548) + (longlong)param_1 * 8) != 0) {
      lVar5 = *(longlong *)this;
      uVar3 = 0;
      if (param_1 < *(int *)(lVar5 + 0x550)) {
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
      pUVar4 = *(UMaterialInterface **)(*(longlong *)(lVar5 + 0x548) + (longlong)param_1 * 8);
      goto LAB_1479ab353;
    }
  }
  if (*(UObject **)(*(longlong *)this + 0x5a0) == (UObject *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(*(UObject **)(*(longlong *)this + 0x5a0));
  }
  this_00 = *(UStaticMesh **)(*(longlong *)this + 0x5a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pUVar4 = UStaticMesh::GetMaterial(this_00,param_1);
LAB_1479ab353:
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

// CreateSceneProxy<UStaticMeshComponent,0> @ 148769950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>
          (UStaticMeshComponent *param_1,ESceneProxyCreationError *param_2)

{
  undefined1 uVar1;
  int iVar2;
  UStaticMesh *this;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  EPSOPrecacheProxyCreationStrategy EVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  EProxyRenderMode EVar9;
  uint uVar10;
  uint uVar11;
  FStaticMeshRenderData *pFVar12;
  UWorld *pUVar13;
  FPrimitiveSceneProxy *pFVar14;
  FSceneInterface *this_00;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = (param_1->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this == (UStaticMesh *)0x0) {
LAB_148769a23:
      if (5 < (byte)LogStaticMesh._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_198,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>
                  (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                    ::__l7::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      if (param_2 == (ESceneProxyCreationError *)0x0) {
        return (FPrimitiveSceneProxy *)0x0;
      }
      *param_2 = InvalidMesh;
      return (FPrimitiveSceneProxy *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  else if (this == (UStaticMesh *)0x0) goto LAB_148769a23;
  cVar4 = (**(code **)(this->_padding_ + 0x10))();
  if (cVar4 != '\0') {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_188,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l19::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 == (ESceneProxyCreationError *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    *param_2 = MeshCompiling;
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar12 = UStaticMesh::GetRenderData(this);
  if (pFVar12 == (FStaticMeshRenderData *)0x0) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_178,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 == (ESceneProxyCreationError *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    *param_2 = InvalidMesh;
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar12 = UStaticMesh::GetRenderData(this);
  if (pFVar12->bIsInitialized == false) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_168,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l43::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 == (ESceneProxyCreationError *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    *param_2 = InvalidMesh;
    return (FPrimitiveSceneProxy *)0x0;
  }
  bVar5 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                    ((UPrimitiveComponent *)param_1,
                     (GStaticMeshComponentBoostPSOPrecachePri != false) + High);
  if ((bVar5) && (EVar6 = GetPSOPrecacheProxyCreationStrategy(), EVar6 == DelayUntilPSOPrecached)) {
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_158,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l55::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 == (ESceneProxyCreationError *)0x0) {
      return (FPrimitiveSceneProxy *)0x0;
    }
    *param_2 = WaitingPSOs;
    return (FPrimitiveSceneProxy *)0x0;
  }
  pUVar13 = (UWorld *)param_1->_padding_;
  if (pUVar13 == (UWorld *)0x0) {
    pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  bVar5 = Nanite::IsMaskingAllowed(pUVar13,param_1->bForceNaniteForMasked);
  local_128._248_1_ = local_128._248_1_ & 0xf0;
  local_128.Entries.ArrayMax = 4;
  local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.AssetName.Data.ArrayNum = 0;
  local_128.AssetName.Data.ArrayMax = 0;
  local_128.Entries.AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
  local_128.Entries.ArrayNum = 0;
  local_128.FallbackMaterial = (UMaterialInterface *)0x0;
  bVar7 = UStaticMeshComponent::ShouldCreateNaniteProxy(param_1,&local_128);
  if (bVar7) {
    pFVar14 = (FPrimitiveSceneProxy *)
              (**(code **)(param_1->_padding_ + 0xb88))(param_1,&local_128,1);
    goto LAB_148769e5d;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0xb38))(param_1);
  pFVar14 = (FPrimitiveSceneProxy *)0x0;
  if (cVar4 == '\0') {
LAB_148769d4b:
    pFVar12 = UStaticMesh::GetRenderData(this);
    uVar10 = UStaticMesh::GetMinLODIdx(this,false);
    if ((param_1->bOverrideMinLOD != '\0') && ((int)uVar10 < param_1->MinLOD)) {
      uVar10 = param_1->MinLOD;
    }
    iVar2 = (pFVar12->LODResources).Array.ArrayNum;
    if (iVar2 != 0) {
      uVar11 = iVar2 - 1U;
      if ((int)uVar10 < (int)(iVar2 - 1U)) {
        uVar11 = uVar10;
      }
      uVar10 = 0;
      if (0 < (int)uVar11) {
        uVar10 = uVar11;
      }
      uVar11 = 0;
      if ((int)uVar10 < iVar2) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_1a8 = (longlong)(int)uVar10;
        local_1a0 = (longlong)iVar2;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar14 = (FPrimitiveSceneProxy *)(*pcVar3)();
          return pFVar14;
        }
      }
      if (*(int *)(*(longlong *)
                    ((pFVar12->LODResources).Array.AllocatorInstance.Data +
                    (longlong)(int)uVar10 * 8) + 0x17c) != 0) {
        pFVar14 = (FPrimitiveSceneProxy *)
                  (**(code **)(param_1->_padding_ + 0xb88))(param_1,&local_128,0);
        goto LAB_148769e5d;
      }
    }
    if (5 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_138,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l91::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      local_148.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
LAB_148769e48:
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((((local_128.bHasAnyError == 0) && (local_128.bHasSky == '\0')) &&
        ((bVar5 || (local_128.bHasMasked == '\0')))) &&
       (EVar9 = Nanite::GetProxyRenderMode(), EVar9 != Allow)) goto LAB_148769e5d;
    this_00 = UActorComponent::GetScene((UActorComponent *)param_1);
    EVar8 = GMaxRHIShaderPlatform;
    if (this_00 != (FSceneInterface *)0x0) {
      EVar8 = FSceneInterface::GetShaderPlatform(this_00);
    }
    bVar5 = UStaticMesh::HasValidNaniteData(this);
    if ((!bVar5) || (bVar5 = UStaticMesh::HasNaniteFallbackMesh(this,EVar8), bVar5))
    goto LAB_148769d4b;
    if (2 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_148,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_FPrimitiveSceneProxy*___ptr64___cdecl_FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>(UStaticMeshComponent&___ptr64,FStaticMeshComponentHelper::ESceneProxyCreationError*___ptr64)'
                  ::__l79::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      goto LAB_148769e48;
    }
  }
  if (param_2 != (ESceneProxyCreationError *)0x0) {
    *param_2 = InvalidMesh;
    pFVar14 = (FPrimitiveSceneProxy *)0x0;
  }
LAB_148769e5d:
  if (local_128.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
  }
  if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
    return pFVar14;
  }
  return pFVar14;
}

// GetMaterial<FStaticMeshSceneProxyDesc> @ 14876f480

UMaterialInterface * __cdecl
FStaticMeshComponentHelper::GetMaterial<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,int param_2,bool param_3,bool param_4)

{
  bool bVar1;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar2;
  TObjectPtr<UMaterialInterface> *pTVar3;
  UMaterialInterface *this;
  UMaterialInterface *pUVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((param_2 < 0) || ((param_1->OverrideMaterials).ArrayNum <= param_2)) ||
     (pTVar2 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                          (&param_1->OverrideMaterials,param_2)->field0_0x0,
     pTVar2->DebugPtr == (UMaterialInterface *)0x0)) {
    if (param_1->StaticMesh == (UStaticMesh *)0x0) {
      return (UMaterialInterface *)0x0;
    }
    this = UStaticMesh::GetMaterial(param_1->StaticMesh,param_2);
  }
  else {
    pTVar3 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                       (&param_1->OverrideMaterials,param_2);
    this = (pTVar3->field0_0x0).DebugPtr;
  }
  if ((((this != (UMaterialInterface *)0x0) &&
       (UObject::ConditionalPostLoad((UObject *)this), !param_4)) &&
      ((param_3 ||
       (bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                          (param_1,(FMaterialAudit *)0x0), bVar1)))) &&
     (Nanite::GEnableNaniteMaterialOverrides != 0)) {
    local_18 = 0;
    uStack_10 = 0;
    pUVar4 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x3a8))(this,&local_18);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      this = pUVar4;
    }
  }
  return this;
}

// GetUsedMaterials<FStaticMeshSceneProxyDesc> @ 14876f8d0

void __cdecl
FStaticMeshComponentHelper::GetUsedMaterials<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar16;
  byte local_res20 [8];
  longlong local_98;
  TObjectPtr<UMaterialInterface>_u_0 local_90;
  FStaticMeshSceneProxyDesc *local_88;
  FStaticMeshSceneProxyDesc *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  FStaticMeshSceneProxyDesc **local_50;
  code *local_48;
  FStaticMeshSceneProxyDesc **local_40;
  ulonglong uVar14;
  
  if (param_1->StaticMesh != (UStaticMesh *)0x0) {
    local_50 = &local_88;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<FStaticMeshSceneProxyDesc>'::__l5::<lambda_1>,UMaterialInterface_*,int>
               ::Call;
    local_88 = param_1;
    UStaticMesh::GetUsedMaterials
              (param_1->StaticMesh,param_2,
               (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_58);
    bVar5 = IsRayTracingAllowed();
    uVar10 = 0;
    if ((((bVar5) && (param_1->StaticMesh->bSupportRayTracing != '\0')) &&
        (bVar5 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                           (param_1,(FMaterialAudit *)0x0), bVar5)) &&
       (Nanite::GEnableNaniteMaterialOverrides != 0)) {
      local_40 = &local_80;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc>'::__l2::<lambda_1>,UMaterialInterface_*,int>
                 ::Call;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      local_80 = param_1;
      UStaticMesh::GetUsedMaterials
                (param_1->StaticMesh,&local_68,
                 (TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&local_48);
      FVar11.Data = local_68.AllocatorInstance.Data;
      lVar9 = (longlong)local_68.ArrayNum;
      if (local_68.ArrayNum != 0) {
        local_res20[0] = *(longlong *)local_68.AllocatorInstance.Data != 0;
        uVar14 = uVar10;
        uVar16 = uVar10;
        do {
          uVar12 = (uint)uVar14;
          uVar13 = uVar12;
          do {
            uVar10 = uVar10 + 1;
            uVar13 = uVar13 + 1;
            uVar14 = (ulonglong)uVar13;
            if (lVar9 <= (longlong)uVar10) break;
          } while ((bool)local_res20[0] == (*(longlong *)(FVar11.Data + uVar10 * 8) != 0));
          if (local_res20[0] != 0) {
            uVar15 = (uint)uVar16;
            if (uVar15 != uVar12) {
              memmove(FVar11.Data + (longlong)(int)uVar15 * 8,
                      FVar11.Data + (longlong)(int)uVar12 * 8,(longlong)(int)(uVar13 - uVar12) << 3)
              ;
            }
            uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
          }
          local_res20[0] = local_res20[0] ^ 1;
        } while ((longlong)uVar10 < lVar9);
        local_68.ArrayNum = (int)uVar16;
        if ((param_2 == &local_68) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar9 = (longlong)local_68.ArrayNum;
        if (local_68.ArrayNum != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_68.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                             &param_2->ArrayMax);
          memcpy((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8,
                 local_68.AllocatorInstance.Data,lVar9 << 3);
        }
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    if (0 < param_2->ArrayNum) {
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_78 !=
          &param_1->MaterialSlotsOverlayMaterial) {
        uVar13 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
        pFVar1 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
        local_70 = (ulonglong)uVar13;
        if (uVar13 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,0,&local_78,uVar13,(int *)((longlong)&local_70 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (local_78.Data,(TObjectPtr<UMaterialInterface> *)pFVar1,uVar13);
        }
      }
      iVar7 = (int)local_70;
      bVar5 = false;
      pFVar1 = local_78.Data + (longlong)(int)local_70 * 8;
      FVar11.Data = local_78.Data;
      while( true ) {
        if ((int)local_70 != iVar7) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (FVar11.Data == pFVar1) break;
        lVar9 = *(longlong *)FVar11.Data;
        if (lVar9 == 0) {
          bVar5 = true;
          FVar11.Data = FVar11.Data + 8;
        }
        else {
          pFVar2 = (param_2->AllocatorInstance).Data;
          local_98 = lVar9;
          if (((pFVar2 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          FVar11.Data = FVar11.Data + 8;
          param_2->ArrayNum = iVar8 + 1;
          *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98;
        }
      }
      if ((bVar5) &&
         (local_90 = (TObjectPtr<UMaterialInterface>_u_0)
                     (param_1->OverlayMaterial).field0_0x0.DebugPtr,
         local_90.DebugPtr != (UMaterialInterface *)0x0)) {
        pTVar3 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_2->AllocatorInstance).Data;
        if ((pTVar3 <= &local_90) &&
           ((&local_90 < pTVar3 + param_2->ArrayMax &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        ((TObjectPtr<UMaterialInterface>_u_0 *)
        ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr =
             (UMaterialInterface *)local_90;
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
    }
  }
  return;
}

// GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc> @ 14876fd20

void __cdecl
FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc>
          (FStaticMeshSceneProxyDesc *param_1,
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
  FStaticMeshSceneProxyDesc *local_res8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FStaticMeshSceneProxyDesc **local_30;
  
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc>'::__l2::<lambda_1>,UMaterialInterface_*,int>
             ::Call;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_res8 = param_1;
  UStaticMesh::GetUsedMaterials
            (param_1->StaticMesh,&local_48,
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

// operator() @ 1487817b0

UMaterialInterface * __thiscall
`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FStaticMeshSceneProxyDesc>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  TObjectPtr<UMaterialInterface> *pTVar2;
  UMaterialInterface *this_00;
  longlong lVar3;
  UMaterialInterface *pUVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((param_1 < 0) || (*(int *)(*(longlong *)this + 200) <= param_1)) ||
     (pTVar1 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                          ((TArrayView<TObjectPtr<UMaterialInterface>,int> *)
                           (*(longlong *)this + 0xc0),param_1)->field0_0x0,
     pTVar1->DebugPtr == (UMaterialInterface *)0x0)) {
    if (*(UStaticMesh **)(*(longlong *)this + 0x100) == (UStaticMesh *)0x0) {
      return (UMaterialInterface *)0x0;
    }
    this_00 = UStaticMesh::GetMaterial(*(UStaticMesh **)(*(longlong *)this + 0x100),param_1);
  }
  else {
    pTVar2 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                       ((TArrayView<TObjectPtr<UMaterialInterface>,int> *)(*(longlong *)this + 0xc0)
                        ,param_1);
    this_00 = (pTVar2->field0_0x0).DebugPtr;
  }
  if (this_00 == (UMaterialInterface *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  UObject::ConditionalPostLoad((UObject *)this_00);
  local_18 = 0;
  uStack_10 = 0;
  lVar3 = (**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_18);
  pUVar4 = (UMaterialInterface *)0x0;
  if (lVar3 != 0) {
    pUVar4 = this_00;
  }
  return pUVar4;
}

// operator() @ 148782530

UMaterialInterface * __thiscall
`FStaticMeshComponentHelper::GetUsedMaterials<FStaticMeshSceneProxyDesc>'::__l5::<lambda_1>::
operator()(void *this,int param_1)

{
  FStaticMeshSceneProxyDesc *pFVar1;
  bool bVar2;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  UMaterialInterface *this_00;
  UMaterialInterface *pUVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = *(FStaticMeshSceneProxyDesc **)this;
  if ((-1 < param_1) && (param_1 < (pFVar1->OverrideMaterials).ArrayNum)) {
    pTVar3 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                        (&pFVar1->OverrideMaterials,param_1)->field0_0x0;
    if (pTVar3->DebugPtr != (UMaterialInterface *)0x0) {
      pTVar4 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                         (&pFVar1->OverrideMaterials,param_1);
      this_00 = (pTVar4->field0_0x0).DebugPtr;
      goto LAB_14878258b;
    }
  }
  if (pFVar1->StaticMesh == (UStaticMesh *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  this_00 = UStaticMesh::GetMaterial(pFVar1->StaticMesh,param_1);
LAB_14878258b:
  if (this_00 != (UMaterialInterface *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                      (pFVar1,(FMaterialAudit *)0x0);
    if ((bVar2) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
      local_18 = 0;
      uStack_10 = 0;
      pUVar5 = (UMaterialInterface *)(**(code **)(this_00->_padding_ + 0x3a8))(this_00,&local_18);
      if (pUVar5 != (UMaterialInterface *)0x0) {
        this_00 = pUVar5;
      }
    }
  }
  return this_00;
}

// operator() @ 150515f30

bool __thiscall
`FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UStaticMeshComponent>'::__l9::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5924073731679846791>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5924073731679846791>,
                       &`public:___cdecl_`public:_static_bool___cdecl_FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UStaticMeshComponent>(UStaticMeshComponent_const&___ptr64,FNavigableGeometryExport&___ptr64)'::`9'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150515f9d;
    }
  }
  bVar2 = false;
LAB_150515f9d:
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

