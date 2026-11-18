// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 149e37ac0

FSoftISMComponentDescriptor * __thiscall
FSoftISMComponentDescriptor::operator=
          (FSoftISMComponentDescriptor *this,FSoftISMComponentDescriptor *param_1)

{
  int *piVar1;
  TArray<TSoftObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  FISMComponentDescriptorBase::operator=
            ((FISMComponentDescriptorBase *)this,(FISMComponentDescriptorBase *)param_1);
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->StaticMesh).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->StaticMesh).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->StaticMesh).SoftObjectPtr.field_0x8);
  TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OverrideMaterials,&param_1->OverrideMaterials);
  *(undefined8 *)&(this->OverlayMaterial).SoftObjectPtr =
       *(undefined8 *)&(param_1->OverlayMaterial).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->OverlayMaterial).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->OverlayMaterial).SoftObjectPtr.field_0x8);
  pTVar2 = &this->RuntimeVirtualTextures;
  if (pTVar2 != &param_1->RuntimeVirtualTextures) {
    DestructItems<TSoftObjectPtr<URuntimeVirtualTexture>,int>
              ((TSoftObjectPtr<URuntimeVirtualTexture> *)(pTVar2->AllocatorInstance).Data,
               (this->RuntimeVirtualTextures).ArrayNum);
    iVar3 = (param_1->RuntimeVirtualTextures).ArrayNum;
    piVar1 = &(this->RuntimeVirtualTextures).ArrayMax;
    pFVar4 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
    (this->RuntimeVirtualTextures).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<TSoftObjectPtr<URuntimeVirtualTexture>,TSoftObjectPtr<URuntimeVirtualTexture>,int>
                ((pTVar2->AllocatorInstance).Data,(TSoftObjectPtr<URuntimeVirtualTexture> *)pFVar4,
                 iVar3);
    }
  }
  return this;
}

