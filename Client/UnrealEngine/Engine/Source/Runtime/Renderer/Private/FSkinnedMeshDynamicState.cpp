// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSkinnedMeshDynamicState @ 1456dca30

FSkinnedMeshDynamicState * __thiscall
FSkinnedMeshDynamicState::FSkinnedMeshDynamicState
          (FSkinnedMeshDynamicState *this,FSkinnedMeshDynamicState *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  USkinnedAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  
  this->ModifiedFlags = param_1->ModifiedFlags;
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)&this->Transform,(FStateStreamHandle *)&param_1->Transform);
  pUVar4 = (param_1->SkinnedAsset).field0_0x0.DebugPtr;
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar1 = &this->OverrideMaterials;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverrideMaterials).ArrayMax;
  iVar3 = (param_1->OverrideMaterials).ArrayNum;
  pFVar5 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar3);
  }
  return this;
}

// Apply @ 1456f4a80

void __thiscall
FSkinnedMeshDynamicState::Apply
          (FSkinnedMeshDynamicState *this,FStateStreamCopyContext *param_1,
          FSkinnedMeshDynamicState *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  USkinnedAsset *pUVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  
  if (((param_2->ModifiedFlags & 1) != 0) &&
     (bVar8 = FStateStreamHandle::operator==
                        ((FStateStreamHandle *)&this->Transform,
                         (FStateStreamHandle *)&param_2->Transform), !bVar8)) {
    FStateStreamHandle::Apply
              ((FStateStreamHandle *)&this->Transform,param_1,
               (FStateStreamHandle *)&param_2->Transform);
    this->ModifiedFlags = this->ModifiedFlags | 1;
  }
  if (((param_2->ModifiedFlags & 2) != 0) &&
     (pUVar6 = (param_2->SkinnedAsset).field0_0x0.DebugPtr,
     (this->SkinnedAsset).field0_0x0.DebugPtr != pUVar6)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USkinnedAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->SkinnedAsset).field0_0x0 = (param_2->SkinnedAsset).field0_0x0;
    this->ModifiedFlags = this->ModifiedFlags | 2;
  }
  if ((param_2->ModifiedFlags & 4) != 0) {
    iVar4 = (this->OverrideMaterials).ArrayNum;
    pTVar1 = &param_2->OverrideMaterials;
    iVar5 = (param_2->OverrideMaterials).ArrayNum;
    pTVar2 = &this->OverrideMaterials;
    if ((iVar4 == iVar5) &&
       (bVar8 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                          ((TObjectPtr<UMaterialInterface> *)(pTVar2->AllocatorInstance).Data,
                           (TObjectPtr<UMaterialInterface> *)(pTVar1->AllocatorInstance).Data,iVar4)
       , bVar8)) {
      return;
    }
    if (pTVar2 != pTVar1) {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      piVar3 = &(this->OverrideMaterials).ArrayMax;
      (this->OverrideMaterials).ArrayNum = iVar5;
      if ((iVar5 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar5,*piVar3,&pTVar2->AllocatorInstance,iVar5,piVar3);
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar7,iVar5);
      }
    }
    this->ModifiedFlags = this->ModifiedFlags | 4;
  }
  return;
}

