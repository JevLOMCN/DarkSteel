// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FSkeletalMeshObjectStatic @ 148692df0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectStatic * __thiscall
FSkeletalMeshObjectStatic::FSkeletalMeshObjectStatic
          (FSkeletalMeshObjectStatic *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  TArray<FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkeletalMeshObjectStatic *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  
  FSkeletalMeshObject::FSkeletalMeshObject((FSkeletalMeshObject *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectStatic__6B_;
  pTVar1 = &this->LODs;
  iVar8 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  if (0 < (param_2->LODRenderData).Array.ArrayNum) {
    do {
      uVar4 = (this->LODs).ArrayNum;
      if (uVar4 == (this->LODs).ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x250,8,&pTVar1->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      (this->LODs).ArrayNum = uVar4 + 1;
      uVar6 = 0;
      if ((int)uVar4 < (int)(uVar4 + 1)) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSkeletalMeshObjectStatic *)(*pcVar2)();
        return pFVar5;
      }
      pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x250;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        *(FSkeletalMeshRenderData **)pFVar7 = param_2;
        *(int *)(pFVar7 + 8) = iVar8;
        FLocalVertexFactory::FLocalVertexFactory
                  ((FLocalVertexFactory *)(pFVar7 + 0x10),param_3,
                   "FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD");
        *(undefined8 *)(pFVar7 + 0x240) = 0;
        *(undefined2 *)(pFVar7 + 0x248) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (param_2->LODRenderData).Array.ArrayNum);
  }
  InitResources(this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  return this;
}

// FSkeletalMeshObjectStatic @ 148692f30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectStatic * __thiscall
FSkeletalMeshObjectStatic::FSkeletalMeshObjectStatic
          (FSkeletalMeshObjectStatic *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshObjectStatic(this,pFVar1,param_2,param_3);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectStatic__6B_;
  return this;
}

// ~FSkeletalMeshObjectStatic @ 14869a7e0

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
FSkeletalMeshObjectStatic::~FSkeletalMeshObjectStatic(FSkeletalMeshObjectStatic *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectStatic__6B_;
  DestructItems<FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkeletalMeshObject::~FSkeletalMeshObject((FSkeletalMeshObject *)this);
  return;
}

// DrawVertexElements @ 1486b0900

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
FSkeletalMeshObjectStatic::DrawVertexElements
          (FSkeletalMeshObjectStatic *this,FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2
          ,bool param_3,bool param_4,bool param_5)

{
  return;
}

// EnableOverlayRendering @ 1486b22d0

void __thiscall
FSkeletalMeshObjectStatic::EnableOverlayRendering
          (FSkeletalMeshObjectStatic *this,bool param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetComponentSpaceTransforms @ 1486bbf60

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObjectStatic::GetComponentSpaceTransforms(FSkeletalMeshObjectStatic *this)

{
  return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetLOD @ 1486c0810

int __thiscall FSkeletalMeshObjectStatic::GetLOD(FSkeletalMeshObjectStatic *this)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(this->_padding_ + 0x1b);
  uVar2 = (uint)bVar1;
  if ((int)(uint)bVar1 < (int)this->_padding_) {
    uVar2 = (uint)this->_padding_;
  }
  return uVar2;
}

// GetReferenceToLocalMatrices @ 1486c6170

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectStatic::GetReferenceToLocalMatrices
          (FSkeletalMeshObjectStatic *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TMatrix<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 1486c67b0

void __thiscall
FSkeletalMeshObjectStatic::GetResourceSizeEx
          (FSkeletalMeshObjectStatic *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0xa8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 0x250);
  iVar5 = (this->LODs).ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x250);
      iVar5 = (this->LODs).ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// GetSkinVertexFactory @ 1486c7a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectStatic::GetSkinVertexFactory
          (FSkeletalMeshObjectStatic *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexFactory *pFVar4;
  
  uVar3 = 0;
  if (param_2 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexFactory *)((this->LODs).AllocatorInstance.Data + (longlong)param_2 * 0x250 + 0x10);
}

// GetStaticSkinVertexFactory @ 1486c8a00

FVertexFactory * __thiscall
FSkeletalMeshObjectStatic::GetStaticSkinVertexFactory
          (FSkeletalMeshObjectStatic *this,int param_1,int param_2,ESkinVertexFactoryMode param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexFactory *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexFactory *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x250 + 0x10);
}

// HaveValidDynamicData @ 1486cb790

bool __thiscall FSkeletalMeshObjectStatic::HaveValidDynamicData(FSkeletalMeshObjectStatic *this)

{
  return false;
}

// InitResources @ 1486cf290

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
FSkeletalMeshObjectStatic::InitResources
          (FSkeletalMeshObjectStatic *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  uint uVar6;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar7);
      if ((this_00->SkelMeshRenderData == (FSkeletalMeshRenderData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkelLOD.SkelMeshRenderData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                             ,0x2b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((((int)uVar6 < 0) ||
          ((this_00->SkelMeshRenderData->LODRenderData).Array.ArrayNum <= (int)uVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkelLOD.SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                             ,0x2c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = this_00->SkelMeshRenderData;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar8) + 300
                  ) != 0) {
        if (((int)uVar6 < 0) || ((param_1->LODInfo).ArrayNum <= (int)uVar6)) {
          pFVar5 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          uVar4 = 0;
          if ((int)uVar6 < (param_1->LODInfo).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar5 = (param_1->LODInfo).DataPtr + (int)uVar6;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar5);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x250;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  return;
}

// IsCPUSkinned @ 1486d0ed0

bool __thiscall FSkeletalMeshObjectStatic::IsCPUSkinned(FSkeletalMeshObjectStatic *this)

{
  return true;
}

// ReleaseResources @ 1486e6a10

void __thiscall FSkeletalMeshObjectStatic::ReleaseResources(FSkeletalMeshObjectStatic *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->LODs).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkelLOD.SkelMeshRenderData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                             ,0x3d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((int)uVar6 < 0) || (*(int *)(*(longlong *)(pFVar1 + lVar7) + 8) <= (int)uVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkelLOD.SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderStatic.cpp"
                             ,0x3e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar7);
      uVar5 = 0;
      if ((int)uVar6 < (int)plVar2[1]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)(*plVar2 + lVar8) + 300) != 0) {
        if (pFVar1[lVar7 + 0x248] != (FScriptContainerElement)0x0) {
          FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry
                    (*(FSkeletalMeshRenderData **)(pFVar1 + lVar7),*(int *)(pFVar1 + lVar7 + 8));
          pFVar1[lVar7 + 0x248] = (FScriptContainerElement)0x0;
        }
        BeginReleaseResource
                  ((FRenderResource *)(pFVar1 + lVar7 + 0x10),&UE::RenderCommandPipe::SkeletalMesh);
        pFVar1[lVar7 + 0x249] = (FScriptContainerElement)0x0;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x250;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  return;
}

// Update @ 1486f3f20

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
FSkeletalMeshObjectStatic::Update
          (FSkeletalMeshObjectStatic *this,int param_1,FSkinnedMeshSceneProxyDynamicData *param_2,
          FPrimitiveSceneProxy *param_3,USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  return;
}

// UpdateSkinWeightBuffer @ 1486f6480

void __thiscall
FSkeletalMeshObjectStatic::UpdateSkinWeightBuffer
          (FSkeletalMeshObjectStatic *this,TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1
          )

{
  return;
}

