// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// TIterator @ 1447f5d40

TIterator * __thiscall
TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FString,FRDGTexture_*>,TDefaultMapHashableKeyFuncs<FString,FRDGTexture_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1447f5dd9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1447f5dd9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 144afc0f0

TIterator * __thiscall
TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_144afc189;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_144afc189:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 144afc200

TIterator * __thiscall
TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_144afc299;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_144afc299:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 144c1e6c0

TIterator * __thiscall
TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_144c1e759;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_144c1e759:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 144eef950

TIterator * __thiscall
TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult>,TDefaultMapHashableKeyFuncs<FRHIBuffer_*,FMeshDrawCommandStatsManager::FIndirectArgsBufferResult,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_144eef9e9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_144eef9e9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 145363250

TIterator * __thiscall
TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator>::TIterator::TIterator
          (TIterator *this,
          TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)&param_1->field_0x28;
  uStack_24 = 1;
  local_28 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar5 = (uint *)&param_1->field_0x10;
    }
    uVar3 = *puVar5;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar3 == 0) {
      iStack_10 = iStack_10 + 0x20;
      lVar4 = (longlong)local_28;
      local_28 = local_28 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_28) goto LAB_1453632fd;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_24 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_24 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_14 = (int)lVar4 + -1 + iStack_10;
    if (iVar2 < iStack_14) {
LAB_1453632fd:
      iStack_14 = iVar2;
    }
  }
  *(TSparseArray<UReflectionCaptureComponent_*,FDefaultSparseArrayAllocator> **)this = param_1;
  *(ulonglong *)&this->field_0x8 = CONCAT44(uStack_24,local_28);
  *(undefined1 **)&this->field_0x10 = &param_1->field_0x10;
  *(ulonglong *)&this->field_0x18 = CONCAT44(iStack_14,0xffffffff);
  *(ulonglong *)&this->field_0x20 = CONCAT44(uStack_c,iStack_10);
  return this;
}

// TIterator @ 1454026e0

TIterator * __thiscall
TSet<TTuple<FVertexFactory_*,UStaticMesh_const_*>,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FVertexFactory_*,UStaticMesh_const_*>,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_145402779;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_145402779:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1454027f0

TIterator * __thiscall
TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_145402889;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_145402889:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 145402900

TIterator * __thiscall
TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FPrimitiveComponentId,FComponentVelocityData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FComponentVelocityData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_145402999;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_145402999:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1454d64b0

TIterator * __thiscall
TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1454d6549;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1454d6549:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14551fae0

TIterator * __thiscall
TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14551fb79;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14551fb79:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14551fbf0

TIterator * __thiscall
TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14551fc89;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14551fc89:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 145576a00

TIterator * __thiscall
TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_145576a99;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_145576a99:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14560ab10

TIterator * __thiscall
TSet<TTuple<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14560aba9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14560aba9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1457c3920

TIterator * __thiscall
TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1457c39b9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1457c39b9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

