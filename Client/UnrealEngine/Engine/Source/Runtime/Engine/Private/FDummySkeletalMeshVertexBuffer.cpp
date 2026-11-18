// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FDummySkeletalMeshVertexBuffer @ 1484459b0

void __thiscall
FDummySkeletalMeshVertexBuffer::~FDummySkeletalMeshVertexBuffer
          (FDummySkeletalMeshVertexBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// AllocateData @ 148451fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDummySkeletalMeshVertexBuffer::AllocateData(FDummySkeletalMeshVertexBuffer *this)

{
  uint uVar1;
  FSkeletalMeshVertexDataInterface *pFVar2;
  
  pFVar2 = this->VertexData;
  if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
  }
  uVar1 = this->NumTexCoords;
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  if (this->bUseFullPrecisionUVs == false) {
    if (uVar1 == 1) {
      pFVar2 = ::operator_new(0x28);
      if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
        *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
        *pFVar2 = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::
                   _vftable__for__FSkeletalMeshVertexDataInterface__;
        pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                    &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::
                     _vftable__for__TResourceArray<TGPUSkinVertexFloat16Uvs<1>,0>__;
        pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
        pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
        this->VertexData = pFVar2;
        return;
      }
    }
    else if (uVar1 == 2) {
      pFVar2 = ::operator_new(0x28);
      if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
        *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
        *pFVar2 = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::
                   _vftable__for__FSkeletalMeshVertexDataInterface__;
        pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                    &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::
                     _vftable__for__TResourceArray<TGPUSkinVertexFloat16Uvs<2>,0>__;
        pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
        pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
        this->VertexData = pFVar2;
        return;
      }
    }
    else if (uVar1 == 3) {
      pFVar2 = ::operator_new(0x28);
      if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
        *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
        *pFVar2 = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::
                   _vftable__for__FSkeletalMeshVertexDataInterface__;
        pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                    &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::
                     _vftable__for__TResourceArray<TGPUSkinVertexFloat16Uvs<3>,0>__;
        pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
        pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
        this->VertexData = pFVar2;
        return;
      }
    }
    else {
      if (uVar1 != 4) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        return;
      }
      pFVar2 = ::operator_new(0x28);
      if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
        *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
        *pFVar2 = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::
                   _vftable__for__FSkeletalMeshVertexDataInterface__;
        pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                    &TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::
                     _vftable__for__TResourceArray<TGPUSkinVertexFloat16Uvs<4>,0>__;
        pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
        pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
        this->VertexData = pFVar2;
        return;
      }
    }
  }
  else if (uVar1 == 1) {
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
      *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
      *pFVar2 = (FSkeletalMeshVertexDataInterface)
                &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::
                 _vftable__for__FSkeletalMeshVertexDataInterface__;
      pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::
                   _vftable__for__TResourceArray<TGPUSkinVertexFloat32Uvs<1>,0>__;
      pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
      pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
      this->VertexData = pFVar2;
      return;
    }
  }
  else if (uVar1 == 2) {
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
      *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
      *pFVar2 = (FSkeletalMeshVertexDataInterface)
                &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::
                 _vftable__for__FSkeletalMeshVertexDataInterface__;
      pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::
                   _vftable__for__TResourceArray<TGPUSkinVertexFloat32Uvs<2>,0>__;
      pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
      pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
      this->VertexData = pFVar2;
      return;
    }
  }
  else if (uVar1 == 3) {
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
      *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
      *pFVar2 = (FSkeletalMeshVertexDataInterface)
                &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::
                 _vftable__for__FSkeletalMeshVertexDataInterface__;
      pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::
                   _vftable__for__TResourceArray<TGPUSkinVertexFloat32Uvs<3>,0>__;
      pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
      pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
      this->VertexData = pFVar2;
      return;
    }
  }
  else {
    if (uVar1 != 4) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      return;
    }
    pFVar2 = ::operator_new(0x28);
    if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
      *(bool *)(pFVar2 + 4) = this->bNeedsCPUAccess;
      *pFVar2 = (FSkeletalMeshVertexDataInterface)
                &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::
                 _vftable__for__FSkeletalMeshVertexDataInterface__;
      pFVar2[1] = (FSkeletalMeshVertexDataInterface)
                  &TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::
                   _vftable__for__TResourceArray<TGPUSkinVertexFloat32Uvs<4>,0>__;
      pFVar2[2] = (FSkeletalMeshVertexDataInterface)0x0;
      pFVar2[3] = (FSkeletalMeshVertexDataInterface)0x0;
      this->VertexData = pFVar2;
      return;
    }
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  return;
}

// CleanUp @ 14845c220

void __thiscall FDummySkeletalMeshVertexBuffer::CleanUp(FDummySkeletalMeshVertexBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  return;
}

