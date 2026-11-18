// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// ~FAnimationEvaluationContext @ 14649f6b0

void __thiscall
FAnimationEvaluationContext::~FAnimationEvaluationContext(FAnimationEvaluationContext *this)

{
  FScriptContainerElement *pFVar1;
  
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CachedCustomAttributes);
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CustomAttributes);
  if (*(void **)&this->CachedCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedCurve);
  }
  if (*(void **)&this->Curve != (void *)0x0) {
    FMemory::Free(*(void **)&this->Curve);
  }
  pFVar1 = (this->CachedBoneSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedComponentSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

