// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// FSkeletalMeshObject @ 148621350

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __thiscall
FSkeletalMeshObject::FSkeletalMeshObject
          (FSkeletalMeshObject *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  TAtomic<FMinimalName> TVar6;
  code *pcVar7;
  double dVar8;
  undefined4 uVar9;
  void *pvVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  USkinnedAsset *pUVar14;
  FUObjectItem *pFVar15;
  FUObjectItem *this_00;
  FString *pFVar16;
  FName *pFVar17;
  FSkeletalMeshObject *pFVar18;
  IConsoleManager *pIVar19;
  int iVar20;
  uint uVar21;
  FName local_res8;
  FString local_48;
  TArrayView<FSkelMeshComponentLODInfo_const_,int> local_38;
  
  (this->LODInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODInfo).ArrayNum = 0;
  (this->LODInfo).ArrayMax = 0;
  (this->ShadowCapsuleShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowCapsuleShapes).ArrayNum = 0;
  (this->ShadowCapsuleShapes).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FSkeletalMeshObject__6B_;
  uVar4 = param_1->PredictedLODLevel;
  bVar2 = param_2->CurrentFirstLODIdx;
  this->MaxDistanceFactor = 0.0;
  this->WorkingMaxDistanceFactor = 0.0;
  uVar21 = (uint)bVar2;
  if ((int)(uint)bVar2 < (int)uVar4) {
    uVar21 = uVar4;
  }
  this->bHasBeenUpdatedAtLeastOnce = false;
  pvVar10 = ThreadLocalStoragePointer;
  this->MinDesiredLODLevel = uVar21;
  this->WorkingMinDesiredLODLevel = uVar21;
  lVar5 = *(longlong *)((longlong)pvVar10 + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar5 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar19 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar19 + 0xc0))
                         (pIVar19,L"r.RayTracing.Geometry.SupportSkeletalMeshes",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar5 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      iVar13 = (**(code **)(*(longlong *)::CVar + 200))();
      SupportSkeletalMeshes = iVar13 != 0;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (SupportSkeletalMeshes != false) {
    pUVar14 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
    cVar11 = (**(code **)(*(longlong *)pUVar14 + 0x368))(pUVar14);
    if (cVar11 != '\0') {
      bVar12 = true;
      goto LAB_148621418;
    }
  }
  bVar12 = false;
LAB_148621418:
  this->bSupportRayTracing = bVar12;
  this->bHiddenMaterialVisibilityDirtyForRayTracing = false;
  pUVar14 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  iVar13 = (**(code **)(*(longlong *)pUVar14 + 0x370))(pUVar14);
  this->RayTracingMinLOD = iVar13;
  pUVar14 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  uVar9 = *(undefined4 *)&pUVar14->field_0x1c;
  (this->DebugName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar14->field_0x18;
  (this->DebugName).Number = uVar9;
  this->SkeletalMeshRenderData = param_2;
  (this->DesiredLODLevelMutex).State = (atomic<unsigned_char>)0x0;
  this->SkinCacheEntry = (FGPUSkinCacheEntry *)0x0;
  this->SkinCacheEntryForRayTracing = (FGPUSkinCacheEntry *)0x0;
  this->LastFrameNumber = 0;
  this->bSupportsStaticRelevance = false;
  this->bUsePerBoneMotionBlur = param_1->bPerBoneMotionBlur;
  pUVar14 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar14->field_0xc);
  TVar6 = ((pFVar15->StatID).StatIdPtr)->Name;
  if ((TVar6._0_4_ == 0) && (TVar6._4_4_ == 0)) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar14->field_0xc);
    FUObjectItem::CreateStatID(this_00);
  }
  (this->StatId).StatIdPtr = (pFVar15->StatID).StatIdPtr;
  this->FeatureLevel = param_3;
  this->ComponentId = (uint)param_1->_padding_;
  dVar8 = (param_1->ComponentScale).field0_0x0._s_0.Y;
  (this->WorldScale).field0_0x0._s_0.X = (param_1->ComponentScale).field0_0x0._s_0.X;
  (this->WorldScale).field0_0x0._s_0.Y = dVar8;
  (this->WorldScale).field0_0x0._s_0.Z = (param_1->ComponentScale).field0_0x0._s_0.Z;
  pUVar14 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  pFVar16 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar14,&local_48,(UObject *)0x0);
  iVar13 = (pFVar16->Data).ArrayNum;
  iVar20 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar20 = 0;
  }
  pFVar17 = ::FName::FName(&local_res8,iVar20,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                           FNAME_Add);
  this->AssetPathName = *pFVar17;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this->SkeletalMeshRenderData == (FSkeletalMeshRenderData *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("SkeletalMeshRenderData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                        ,0x65,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pFVar18 = (FSkeletalMeshObject *)(*pcVar7)();
      return pFVar18;
    }
  }
  fVar1 = param_1->MaxDistanceFactor;
  this->MaxDistanceFactor = fVar1;
  this->WorkingMaxDistanceFactor = fVar1;
  local_38.DataPtr = (param_1->LODInfo).DataPtr;
  local_38.ArrayNum = (param_1->LODInfo).ArrayNum;
  local_38._12_4_ = *(undefined4 *)&(param_1->LODInfo).field_0xc;
  InitLODInfos(this,&local_38,param_1->SkinnedAsset);
  return this;
}

// FSkeletalMeshObject @ 148621660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __thiscall
FSkeletalMeshObject::FSkeletalMeshObject
          (FSkeletalMeshObject *this,USkinnedMeshComponent *param_1,FSkeletalMeshRenderData *param_2
          ,Type param_3)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshObject(this,pFVar1,param_2,param_3);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  this->_padding_ = (longlong)&___7FSkeletalMeshObject__6B_;
  return this;
}

// ~FSkeletalMeshObject @ 1486250a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshObject::~FSkeletalMeshObject(FSkeletalMeshObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshObject__6B_;
  pFVar1 = (this->ShadowCapsuleShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>
            ((FSkelMeshObjectLODInfo *)(this->LODInfo).AllocatorInstance.Data,
             (this->LODInfo).ArrayNum);
  pFVar1 = (this->LODInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// CreateSceneExtensionProxy @ 148635ee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
FSkeletalMeshObject::CreateSceneExtensionProxy
          (FSkeletalMeshObject *this,USkinnedAsset *param_1,bool param_2)

{
  FSkinningSceneExtensionProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FSkinningSceneExtensionProxy *)0x0) {
    pFVar1 = FSkinningSceneExtensionProxy::FSkinningSceneExtensionProxy(pFVar1,this,param_1,param_2)
    ;
    return pFVar1;
  }
  return (FSkinningSceneExtensionProxy *)0x0;
}

// DrawVertexElements @ 148638c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::DrawVertexElements
          (FSkeletalMeshObject *this,FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  return;
}

// EnableOverlayRendering @ 148639a60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::EnableOverlayRendering
          (FSkeletalMeshObject *this,bool param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetAssetPathName @ 148645250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall FSkeletalMeshObject::GetAssetPathName(FSkeletalMeshObject *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  if ((int)in_R8D < 0) {
    *(FName *)FVar4 = this->AssetPathName;
    return FVar4;
  }
  uVar3 = 0;
  if ((int)in_R8D < (this->LODInfo).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)((this->LODInfo).AllocatorInstance.Data + (longlong)(int)in_R8D * 0x20 + 0x18)
  ;
  return FVar4;
}

// GetCachedGeometry @ 148645dc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObject::GetCachedGeometry
          (FSkeletalMeshObject *this,FRDGBuilder *param_1,FCachedGeometry *param_2)

{
  return false;
}

// GetColorVertexBuffer @ 1486478a0

FColorVertexBuffer * __cdecl
FSkeletalMeshObject::GetColorVertexBuffer
          (FSkeletalMeshLODRenderData *param_1,FSkelMeshComponentLODInfo *param_2)

{
  FColorVertexBuffer *pFVar1;
  FColorVertexBuffer *pFVar2;
  
  if ((param_2 != (FSkelMeshComponentLODInfo *)0x0) &&
     (pFVar1 = param_2->OverrideVertexColors, pFVar1 != (FColorVertexBuffer *)0x0)) {
    pFVar2 = &(param_1->StaticVertexBuffers).ColorVertexBuffer;
    if (pFVar1->NumVertices == (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices) {
      pFVar2 = pFVar1;
    }
    return pFVar2;
  }
  return &(param_1->StaticVertexBuffers).ColorVertexBuffer;
}

// GetCurrentBoneTransforms @ 1486486c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObject::GetCurrentBoneTransforms(FSkeletalMeshObject *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SkeletalRenderPublic.h"
                     ,0xb5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return (TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetDynamicBoundsStartOffset @ 148648c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FSkeletalMeshObject::GetDynamicBoundsStartOffset(FSkeletalMeshObject *this,int param_1)

{
  return -1;
}

// GetNaniteMaterials @ 14864c140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMaterialAudit * __thiscall FSkeletalMeshObject::GetNaniteMaterials(FSkeletalMeshObject *this)

{
  return (FMaterialAudit *)0x0;
}

// GetPrevReferenceToLocalMatrices @ 14864c930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObject::GetPrevReferenceToLocalMatrices
          (FSkeletalMeshObject *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SkeletalRenderPublic.h"
                     ,0xae,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar1)();
    return pTVar3;
  }
  (**(code **)(this->_padding_ + 0x68))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPreviousBoneTransforms @ 14864c9e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObject::GetPreviousBoneTransforms(FSkeletalMeshObject *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SkeletalRenderPublic.h"
                     ,0xbc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return (TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetRayTracingDynamicVertexBuffer @ 14864cda0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRWBuffer * __thiscall
FSkeletalMeshObject::GetRayTracingDynamicVertexBuffer(FSkeletalMeshObject *this)

{
  return (FRWBuffer *)0x0;
}

// GetRayTracingGeometry @ 14864cdd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObject::GetRayTracingGeometry(FSkeletalMeshObject *this)

{
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingGeometry @ 14864cde0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObject::GetRayTracingGeometry(FSkeletalMeshObject *this)

{
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingLOD @ 14864cef0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FSkeletalMeshObject::GetRayTracingLOD(FSkeletalMeshObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014864cef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0xa0))();
  return iVar1;
}

// GetRenderSections @ 14864d110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObject::GetRenderSections(FSkeletalMeshObject *this,int param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar1 = this->SkeletalMeshRenderData;
  uVar4 = 0;
  if (param_1 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)
           ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
}

// GetScreenSize @ 14864da00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FSkeletalMeshObject::GetScreenSize(FSkeletalMeshObject *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODInfo).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->LODInfo).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->LODInfo).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x10);
  }
  return 0.0;
}

// GetSkinCacheEntryForRayTracing @ 14864e770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUSkinCacheEntry * __thiscall
FSkeletalMeshObject::GetSkinCacheEntryForRayTracing(FSkeletalMeshObject *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xf0))();
  if (cVar1 != '\0') {
    return this->SkinCacheEntryForRayTracing;
  }
  return this->SkinCacheEntry;
}

// GetSkinCacheVisualizationDebugColor @ 14864e7a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor __thiscall
FSkeletalMeshObject::GetSkinCacheVisualizationDebugColor
          (FSkeletalMeshObject *this,FName *param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_register_00000084;
  
  uVar1 = (**(code **)(this->_padding_ + 0xf8))();
  FGPUSkinCache::GetVisualizationDebugColor
            (param_1,(FGPUSkinCacheEntry *)CONCAT44(in_register_00000084,param_2),
             this->SkinCacheEntry,uVar1);
  return (FColor)SUB84(param_1,0);
}

// GetSkinWeightVertexBuffer @ 14864ec30

FSkinWeightVertexBuffer * __cdecl
FSkeletalMeshObject::GetSkinWeightVertexBuffer
          (FSkeletalMeshLODRenderData *param_1,FSkelMeshComponentLODInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSkinWeightVertexBuffer *pFVar3;
  
  if (param_2 != (FSkelMeshComponentLODInfo *)0x0) {
    pFVar3 = param_2->OverrideSkinWeights;
    if ((pFVar3 != (FSkinWeightVertexBuffer *)0x0) &&
       ((pFVar3->DataVertexBuffer).NumVertices ==
        (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices)) {
      if ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences !=
          (pFVar3->DataVertexBuffer).MaxBoneInfluences) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideSkinWeights->GetMaxBoneInfluences()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                           ,0x13b,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FSkinWeightVertexBuffer *)(*pcVar1)();
          return pFVar3;
        }
      }
      return param_2->OverrideSkinWeights;
    }
    pFVar3 = param_2->OverrideProfileSkinWeights;
    if ((pFVar3 != (FSkinWeightVertexBuffer *)0x0) &&
       ((pFVar3->DataVertexBuffer).NumVertices ==
        (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices)) {
      if ((param_1->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences !=
          (pFVar3->DataVertexBuffer).MaxBoneInfluences) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODData.SkinWeightVertexBuffer.GetMaxBoneInfluences() == CompLODInfo->OverrideProfileSkinWeights->GetMaxBoneInfluences()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                           ,0x141,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FSkinWeightVertexBuffer *)(*pcVar1)();
          return pFVar3;
        }
      }
      return param_2->OverrideProfileSkinWeights;
    }
  }
  pFVar3 = (param_1->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
  if (pFVar3 == (FSkinWeightVertexBuffer *)0x0) {
    pFVar3 = &param_1->SkinWeightVertexBuffer;
  }
  return pFVar3;
}

// GetSkinWeightVertexBuffer @ 14864ed10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightVertexBuffer * __thiscall
FSkeletalMeshObject::GetSkinWeightVertexBuffer(FSkeletalMeshObject *this,int param_1)

{
  return (FSkinWeightVertexBuffer *)0x0;
}

// GetStaticRayTracingGeometry @ 14864fa20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObject::GetStaticRayTracingGeometry(FSkeletalMeshObject *this)

{
  return (FRayTracingGeometry *)0x0;
}

// GetVertexFactoryUserData @ 148650ea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinBatchVertexFactoryUserData * __thiscall
FSkeletalMeshObject::GetVertexFactoryUserData
          (FSkeletalMeshObject *this,int param_1,int param_2,ESkinVertexFactoryMode param_3)

{
  return (FSkinBatchVertexFactoryUserData *)0x0;
}

// InitLODInfos @ 148654ab0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::InitLODInfos
          (FSkeletalMeshObject *this,TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1,
          USkinnedAsset *param_2)

{
  TArray<FSkeletalMeshObject::FSkelMeshObjectLODInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FSkelMeshObjectLODInfo *pFVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FName local_78;
  FString local_70;
  FString local_60 [2];
  
  uVar7 = (**(code **)(*(longlong *)param_2 + 0x3d0))(param_2);
  lVar12 = (longlong)(int)uVar7;
  pTVar1 = &this->LODInfo;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  pFVar4 = (FSkelMeshObjectLODInfo *)(pTVar1->AllocatorInstance).Data;
  iVar8 = (this->LODInfo).ArrayNum;
  piVar2 = &(this->LODInfo).ArrayMax;
  if (*piVar2 < (int)uVar7) {
    DestructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>(pFVar4,iVar8);
    (this->LODInfo).ArrayNum = 0;
    if (*piVar2 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar7,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>(pFVar4,iVar8);
    (this->LODInfo).ArrayNum = 0;
  }
  uVar15 = 0;
  if (0 < (int)uVar7) {
    uVar16 = uVar15;
    do {
      iVar14 = (int)uVar15;
      puVar9 = (undefined4 *)(**(code **)(*(longlong *)param_2 + 0x328))(param_2,uVar15);
      iVar8 = (this->LODInfo).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->LODInfo).ArrayNum = iVar8 + 1;
      pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
      DefaultConstructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>(pFVar13,1);
      *(undefined4 *)(pFVar13 + 0x10) = *puVar9;
      *(undefined4 *)(pFVar13 + 0x14) = puVar9[1];
      if ((-1 < iVar14) && (iVar14 < param_1->ArrayNum)) {
        if ((iVar14 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (FScriptContainerElement *)
                  ((longlong)&(param_1->DataPtr->HiddenMaterials).AllocatorInstance.Data + uVar16);
        if (pFVar13 != pFVar11) {
          iVar8 = *(int *)(pFVar11 + 8);
          pFVar3 = pFVar13 + 0xc;
          _Src = *(void **)pFVar11;
          *(int *)(pFVar13 + 8) = iVar8;
          if ((iVar8 == 0) && (*(int *)pFVar3 == 0)) {
            *(int *)pFVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar8,*(int *)pFVar3,(ForAnyElementType *)pFVar13,iVar8,(int *)pFVar3);
            if (iVar8 != 0) {
              memcpy(*(void **)pFVar13,_Src,(longlong)iVar8);
            }
          }
        }
      }
      ::FName::ToString(&this->AssetPathName,local_60);
      ::FString::PrintfImpl(&local_70,L"%s [LOD%d]");
      iVar8 = local_70.Data.ArrayNum + -1;
      if (local_70.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar10 = ::FName::FName(&local_78,iVar8,(wchar_t *)local_70.Data.AllocatorInstance.Data,
                               FNAME_Add);
      *(FName *)(pFVar13 + 0x18) = *pFVar10;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar16 = uVar16 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// IsCPUSkinned @ 1486598f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObject::IsCPUSkinned(FSkeletalMeshObject *this)

{
  return false;
}

// IsGPUSkinMesh @ 148659a10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObject::IsGPUSkinMesh(FSkeletalMeshObject *this)

{
  return false;
}

// IsMaterialHidden @ 148659b40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObject::IsMaterialHidden(FSkeletalMeshObject *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (((param_1 < 0) || ((this->LODInfo).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODInfo.IsValidIndex(InLODIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                         ,0xfd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar5 = 0;
  if (param_1 < (this->LODInfo).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((-1 < param_2) &&
     (lVar6 = (longlong)param_1 * 0x20,
     param_2 < *(int *)((this->LODInfo).AllocatorInstance.Data + lVar6 + 8))) {
    uVar5 = 0;
    if (param_1 < (this->LODInfo).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = (this->LODInfo).AllocatorInstance.Data;
    uVar5 = 0;
    if (param_2 < *(int *)(pFVar1 + lVar6 + 8)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(char *)((longlong)param_2 + *(longlong *)(pFVar1 + lVar6)) != '\0') {
      return true;
    }
  }
  return false;
}

// IsNaniteMesh @ 148659d10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObject::IsNaniteMesh(FSkeletalMeshObject *this)

{
  return false;
}

// PreGDMECallback @ 14865bee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::PreGDMECallback
          (FSkeletalMeshObject *this,FRHICommandList *param_1,FGPUSkinCache *param_2,uint param_3)

{
  return;
}

// RefreshClothingTransforms @ 14865e570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::RefreshClothingTransforms
          (FSkeletalMeshObject *this,TMatrix<double> *param_1,uint param_2)

{
  return;
}

// SetHiddenMaterials @ 148665c30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::SetHiddenMaterials
          (FSkeletalMeshObject *this,int param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((this->LODInfo).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODInfo.IsValidIndex(InLODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                       ,0xee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bHiddenMaterialVisibilityDirtyForRayTracing = true;
  uVar3 = 0;
  if (param_1 < (this->LODInfo).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)
             ((this->LODInfo).AllocatorInstance.Data + (longlong)param_1 * 0x20),param_2);
  return;
}

// SetTransform @ 148668010

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::SetTransform(FSkeletalMeshObject *this,TMatrix<double> *param_1,uint param_2)

{
  return;
}

// ShouldUseSeparateSkinCacheEntryForRayTracing @ 1486683d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObject::ShouldUseSeparateSkinCacheEntryForRayTracing(FSkeletalMeshObject *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0xa0))();
  iVar2 = (**(code **)(this->_padding_ + 0xe8))(this);
  return iVar1 != iVar2;
}

// Update @ 148669e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::Update
          (FSkeletalMeshObject *this,int param_1,USkinnedMeshComponent *param_2,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          EPreviousBoneTransformUpdateMode param_5,FExternalMorphWeightData *param_6)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FSkinnedMeshSceneProxyDynamicData *pFVar4;
  undefined1 auStack_1c8 [32];
  USkinnedAsset *local_1a8;
  TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
  *local_1a0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_198;
  EPreviousBoneTransformUpdateMode local_190;
  FExternalMorphWeightData *local_188;
  USkinnedAsset *local_178;
  FSkinnedMeshSceneProxyDynamicData local_168;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pcVar1 = *(code **)(this->_padding_ + 0x18);
  local_178 = USkinnedMeshComponent::GetSkinnedAsset(param_2);
  if (param_2->_padding_ != param_2->_padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneProxy == SceneData.SceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                       ,0x801,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = param_2->_padding_;
  pFVar4 = FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_168,param_2);
  local_188 = param_6;
  local_190 = param_5;
  local_198 = param_4;
  local_1a8 = local_178;
  local_1a0 = param_3;
  (*pcVar1)(this,param_1,pFVar4,lVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.RefPoseOverride.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateMinDesiredLODLevel @ 14866c430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::UpdateMinDesiredLODLevel
          (FSkeletalMeshObject *this,FSceneView *param_1,TBoxSphereBounds<double,double> *param_2)

{
  FMutex *pFVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  TConsoleVariableData<float> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TVector4<double>_u_0 local_78 [2];
  
  if ((param_1 == (FSceneView *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("View",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                         ,0x7f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->Family == (FSceneViewFamily *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("View->Family",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                         ,0x80,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->Family->bThumbnailRendering == false) && (param_1->Family->bIsInFocus != false)) {
    pTVar11 = (TConsoleVariableData<float> *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar9 = IConsoleManager::Get();
      plVar10 = (longlong *)
                (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.SkeletalMeshLODRadiusScale",1);
      if (plVar10 != (longlong *)0x0) {
        pTVar11 = (TConsoleVariableData<float> *)(**(code **)(*plVar10 + 0x70))(plVar10);
      }
      SkeletalMeshLODRadiusScale = pTVar11;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar11 = SkeletalMeshLODRadiusScale;
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar16 = __real_3e800000;
    local_78[0]._0_8_ = (param_2->Origin).field0_0x0._s_0.X;
    local_78[0]._8_8_ = (param_2->Origin).field0_0x0._s_0.Y;
    fVar17 = pTVar11->ShadowedValue[1];
    if (__real_3f800000 <= pTVar11->ShadowedValue[1]) {
      fVar17 = __real_3f800000;
    }
    local_78[0]._s_0.W = __real_3ff0000000000000;
    local_78[0]._16_8_ = (param_2->Origin).field0_0x0._s_0.Z;
    if (fVar17 <= __real_3e800000) {
      fVar17 = __real_3e800000;
    }
    fVar15 = ComputeBoundsScreenRadiusSquared
                       ((TVector4<double> *)&local_78[0]._s_0,(float)param_2->SphereRadius,param_1);
    uVar4 = param_1->Family->FrameNumber;
    fVar17 = fVar15 * fVar17 * fVar17;
    if (((this->LODInfo).ArrayNum != (this->SkeletalMeshRenderData->LODRenderData).Array.ArrayNum)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODInfo.Num() == SkeletalMeshRenderData->LODRenderData.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRender.cpp"
                              ,0x8e,
                              L"Mismatched LOD arrays. LODInfo.Num() = %d, SkeletalMeshRenderData->LODRenderData.Num() = %d"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (**(code **)(this->_padding_ + 0xa0))(this);
    uVar8 = 0;
    if (((BADTYPE)(param_1->Family->EngineShowFlags).LOD) &&
       (uVar12 = (this->SkeletalMeshRenderData->LODRenderData).Array.ArrayNum - 1, 0 < (int)uVar12))
    {
      lVar14 = (longlong)(int)uVar12;
      lVar13 = lVar14 << 5;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->LODInfo).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar15 = *(float *)((this->LODInfo).AllocatorInstance.Data + lVar13 + 0x10);
        if (lVar14 <= iVar7) {
          uVar8 = 0;
          if ((int)uVar12 < (this->LODInfo).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar15 = fVar15 + *(float *)((this->LODInfo).AllocatorInstance.Data + lVar13 + 0x14);
        }
        uVar8 = uVar12;
        if (fVar17 < fVar15 * fVar15 * fVar16) break;
        uVar12 = uVar12 - 1;
        lVar14 = lVar14 + -1;
        lVar13 = lVar13 + -0x20;
        uVar8 = 0;
      } while (0 < (int)uVar12);
    }
    iVar7 = (param_1->Family->Views).ArrayNum;
    if (1 < iVar7) {
      pFVar1 = &this->DesiredLODLevelMutex;
      LOCK();
      bVar6 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar6) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar6) {
        UE::FMutex::LockSlow(pFVar1);
      }
    }
    piVar2 = &this->WorkingMinDesiredLODLevel;
    if (this->LastFrameNumber == 0) {
      *piVar2 = uVar8;
    }
    fVar16 = this->WorkingMaxDistanceFactor;
    uVar12 = *piVar2;
    if (uVar4 == this->LastFrameNumber) {
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      if ((int)uVar12 < (int)uVar8) {
        uVar8 = uVar12;
      }
    }
    else {
      this->MaxDistanceFactor = fVar16;
      this->MinDesiredLODLevel = uVar12;
      this->LastFrameNumber = uVar4;
      fVar16 = fVar17;
    }
    *piVar2 = uVar8;
    this->WorkingMaxDistanceFactor = fVar16;
    if (1 < iVar7) {
      pFVar1 = &this->DesiredLODLevelMutex;
      LOCK();
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(pFVar1);
      }
    }
  }
  return;
}

// UpdateRayTracingGeometry @ 148670700

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::UpdateRayTracingGeometry
          (FSkeletalMeshObject *this,FRHICommandListBase *param_1,
          FSkeletalMeshLODRenderData *param_2,uint param_3,
          TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// UpdateSkinWeightBuffer @ 148672d30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObject::UpdateSkinWeightBuffer
          (FSkeletalMeshObject *this,USkinnedMeshComponent *param_1)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  iVar1 = (param_1->LODInfo).ArrayNum;
  pcVar2 = *(code **)(this->_padding_ + 0x98);
  pFVar3 = (param_1->LODInfo).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28 = SUB84(pFVar3,0);
  uStack_24 = (undefined4)((ulonglong)pFVar3 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  iStack_10 = iVar1;
  (*pcVar2)(this,&local_18);
  return;
}

