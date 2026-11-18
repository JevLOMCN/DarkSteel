// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FStaticMeshDynamicState @ 1456dcf80

FStaticMeshDynamicState * __thiscall
FStaticMeshDynamicState::FStaticMeshDynamicState
          (FStaticMeshDynamicState *this,FStaticMeshDynamicState *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  this->ModifiedFlags = param_1->ModifiedFlags;
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)&this->Transform,(FStateStreamHandle *)&param_1->Transform);
  pUVar5 = (param_1->Mesh).field0_0x0.DebugPtr;
  (this->Mesh).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->OverrideMaterials;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverrideMaterials).ArrayMax;
  iVar4 = (param_1->OverrideMaterials).ArrayNum;
  pFVar6 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar6,iVar4);
  }
  pTVar3 = &this->Owners;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Owners).ArrayMax;
  iVar4 = (param_1->Owners).ArrayNum;
  pFVar6 = (param_1->Owners).AllocatorInstance.Data;
  (this->Owners).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 2);
  }
  uVar7 = (this->bOnlyOwnerSee ^ param_1->bOnlyOwnerSee) & 1 ^ *(uint *)&this->field_0x40;
  *(uint *)&this->field_0x40 = uVar7;
  *(uint *)&this->field_0x40 = (uVar7 ^ *(uint *)&param_1->field_0x40) & 2 ^ uVar7;
  return this;
}

// Apply @ 1456f51a0

void __thiscall
FStaticMeshDynamicState::Apply
          (FStaticMeshDynamicState *this,FStateStreamCopyContext *param_1,
          FStaticMeshDynamicState *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  UStaticMesh *pUVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  
  if (((param_2->ModifiedFlags & 1) != 0) &&
     (bVar6 = FStateStreamHandle::operator==
                        ((FStateStreamHandle *)&this->Transform,
                         (FStateStreamHandle *)&param_2->Transform), !bVar6)) {
    FStateStreamHandle::Apply
              ((FStateStreamHandle *)&this->Transform,param_1,
               (FStateStreamHandle *)&param_2->Transform);
    this->ModifiedFlags = this->ModifiedFlags | 1;
  }
  if (((param_2->ModifiedFlags & 2) != 0) &&
     (pUVar4 = (param_2->Mesh).field0_0x0.DebugPtr, (this->Mesh).field0_0x0.DebugPtr != pUVar4)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Mesh).field0_0x0 = (param_2->Mesh).field0_0x0;
    this->ModifiedFlags = this->ModifiedFlags | 2;
  }
  if (((param_2->ModifiedFlags & 4) != 0) &&
     ((iVar7 = (this->OverrideMaterials).ArrayNum, iVar7 != (param_2->OverrideMaterials).ArrayNum ||
      (bVar6 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                         ((TObjectPtr<UMaterialInterface> *)
                          (this->OverrideMaterials).AllocatorInstance.Data,
                          (TObjectPtr<UMaterialInterface> *)
                          (param_2->OverrideMaterials).AllocatorInstance.Data,iVar7), !bVar6)))) {
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
              (&this->OverrideMaterials,&param_2->OverrideMaterials);
    this->ModifiedFlags = this->ModifiedFlags | 4;
  }
  if ((param_2->ModifiedFlags & 8) != 0) {
    iVar7 = (this->Owners).ArrayNum;
    if ((iVar7 != (param_2->Owners).ArrayNum) ||
       ((iVar7 != 0 &&
        (iVar7 = memcmp((this->Owners).AllocatorInstance.Data,
                        (param_2->Owners).AllocatorInstance.Data,(longlong)iVar7 << 2), iVar7 != 0))
       )) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(&this->Owners,&param_2->Owners);
      this->ModifiedFlags = this->ModifiedFlags | 8;
    }
  }
  if ((param_2->ModifiedFlags & 0x10) != 0) {
    uVar1 = *(undefined4 *)&this->field_0x40;
    if (((ZPULL(uVar1,0,1) ^ param_2->bOnlyOwnerSee) & 1) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x10;
      *(uint *)&this->field_0x40 = (param_2->bOnlyOwnerSee ^ this->bOnlyOwnerSee) & 1 ^ uVar1;
    }
  }
  if ((param_2->ModifiedFlags & 0x20) != 0) {
    uVar2 = *(uint *)&this->field_0x40;
    uVar3 = *(uint *)&param_2->field_0x40;
    if (((uVar2 ^ uVar3) & 2) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x20;
      *(uint *)&this->field_0x40 = (uVar3 ^ uVar2) & 2 ^ uVar2;
    }
  }
  return;
}

