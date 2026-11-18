// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ~FSkeletalMeshLODRenderData @ 14ac50c30

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshLODRenderData::~FSkeletalMeshLODRenderData(FSkeletalMeshLODRenderData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshLODRenderData__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshLODRenderData.h"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->StaticRayTracingGeometry);
  FBulkData::~FBulkData((FBulkData *)&this->StreamingBulkData);
  FRayTracingGeometry::~FRayTracingGeometry(&this->SourceRayTracingGeometry);
  pFVar1 = (this->RequiredBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSkeletalMeshHalfEdgeBuffer::~FSkeletalMeshHalfEdgeBuffer(&this->HalfEdgeBuffer);
  FSkeletalMeshVertexAttributeRenderData::~FSkeletalMeshVertexAttributeRenderData
            (&this->VertexAttributeBuffers);
  FSkinWeightProfilesData::~FSkinWeightProfilesData(&this->SkinWeightProfilesData);
  FMorphTargetVertexInfoBuffers::~FMorphTargetVertexInfoBuffers(&this->MorphTargetVertexInfoBuffers)
  ;
  FSkeletalMeshVertexClothBuffer::~FSkeletalMeshVertexClothBuffer(&this->ClothVertexBuffer);
  FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(&this->SkinWeightVertexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->StaticVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->StaticVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->StaticVertexBuffers).StaticMeshVertexBuffer);
  FMultiSizeIndexContainer::~FMultiSizeIndexContainer(&this->MultiSizeIndexContainer);
  DestructItems<FSkelMeshRenderSection,int>
            ((FSkelMeshRenderSection *)(this->RenderSections).AllocatorInstance.Data,
             (this->RenderSections).ArrayNum);
  pFVar1 = (this->RenderSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

