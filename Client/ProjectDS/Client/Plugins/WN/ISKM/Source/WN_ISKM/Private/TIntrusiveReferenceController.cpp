// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 3

// DestroyObject @ 14a847600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_ISKM_Buffers,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_ISKM_Buffers,1> *this)

{
  FWN_ISKM_Buffers::~FWN_ISKM_Buffers((FWN_ISKM_Buffers *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a847610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_ISKM_BoneTransformBuffer,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_ISKM_BoneTransformBuffer,1> *this)

{
  undefined8 *puVar1;
  FRHIResource *pFVar2;
  
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 0x20);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FWN_ISKM_BoneTransformBuffer__6B_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    (this->ObjectStorage).Pad[0x20] = '\0';
    (this->ObjectStorage).Pad[0x21] = '\0';
    (this->ObjectStorage).Pad[0x22] = '\0';
    (this->ObjectStorage).Pad[0x23] = '\0';
    (this->ObjectStorage).Pad[0x24] = '\0';
    (this->ObjectStorage).Pad[0x25] = '\0';
    (this->ObjectStorage).Pad[0x26] = '\0';
    (this->ObjectStorage).Pad[0x27] = '\0';
  }
  pFVar2 = *(FRHIResource **)((this->ObjectStorage).Pad + 0x30);
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)((this->ObjectStorage).Pad + 0x28);
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a847670

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_ISKM_MeshRenderData,1>::DestroyObject
          (TIntrusiveReferenceController<FWN_ISKM_MeshRenderData,1> *this)

{
  DestructItems<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int>
            ((FWN_ISKM_MeshLODData *)&this->ObjectStorage,
             *(int *)((this->ObjectStorage).Pad + 0xbc0));
  return;
}

