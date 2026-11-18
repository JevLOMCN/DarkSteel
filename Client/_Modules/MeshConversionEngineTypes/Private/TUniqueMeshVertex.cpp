// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 1

// TUniqueMeshVertex<8> @ 14ca33ef0

TUniqueMeshVertex<8> * __thiscall
UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>::TUniqueMeshVertex<8>
          (void *this,FDynamicMesh3 *param_1,int param_2,int param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  TUniqueMeshVertex<8> *pTVar8;
  FDynamicMeshAttributeSet *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
    *(undefined8 *)((longlong)this + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)this + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)this = 0xffffffffffffffff;
    *(undefined8 *)((longlong)this + 8) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)this + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)this + 0x18) = 0xffffffffffffffff;
    return this;
  }
  iVar5 = (**(code **)(pFVar1->_padding_ + 0xb8))();
  iVar12 = 0;
  if (3 < iVar5) {
    iVar5 = 3;
  }
  lVar14 = (longlong)iVar5;
  if (0 < iVar5) {
    lVar11 = 0;
    uVar3 = param_2 * 3;
    puVar13 = (undefined4 *)((longlong)this + 0x20);
    do {
      pFVar1 = (param_1->AttributeSet).Ptr;
      pFVar9 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar1;
      }
      if ((iVar12 < (pFVar9->NormalLayers).Array.ArrayNum) && (-1 < iVar12)) {
        if ((iVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TUniqueMeshVertex<8> *)(*pcVar2)();
          return pTVar8;
        }
        lVar10 = *(longlong *)((pFVar9->NormalLayers).Array.AllocatorInstance.Data + lVar11 * 8);
      }
      else {
        lVar10 = 0;
      }
      lVar10 = *(longlong *)(lVar10 + 0x78);
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 1;
      local_70[0] = *(undefined4 *)
                     ((ulonglong)(uVar3 & 0x1ff) * 4 +
                     *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8));
      local_70[1] = *(undefined4 *)
                     ((ulonglong)(uVar3 + 1 & 0x1ff) * 4 +
                     *(longlong *)((ulonglong)(uVar3 + 1 >> 9) * 8 + lVar10));
      local_70[2] = *(undefined4 *)
                     ((ulonglong)(uVar3 + 2 & 0x1ff) * 4 +
                     *(longlong *)((ulonglong)(uVar3 + 2 >> 9) * 8 + lVar10));
      *puVar13 = local_70[param_3];
      puVar13 = puVar13 + 1;
    } while (lVar11 < lVar14);
  }
  if (lVar14 < 3) {
    memset((void *)((longlong)this + (lVar14 + 8) * 4),-1,(3 - lVar14) * 4);
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar9 = pFVar1;
  }
  uVar3 = param_2 * 3;
  if ((pFVar9->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    lVar14 = *(longlong *)&((pFVar1->ColorLayer).Ptr)->field_0x78;
    local_70[3] = *(undefined4 *)
                   (*(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8) +
                   (ulonglong)(uVar3 & 0x1ff) * 4);
    local_60 = *(undefined4 *)
                (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
    local_5c = *(undefined4 *)
                (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
    uVar6 = local_70[(longlong)param_3 + 3];
  }
  *(undefined4 *)((longlong)this + 0x2c) = uVar6;
  uVar7 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (8 < (int)uVar7) {
    uVar7 = 8;
  }
  iVar5 = 0;
  if (0 < (int)uVar7) {
    lVar14 = 0;
    do {
      pFVar1 = (param_1->AttributeSet).Ptr;
      pFVar9 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar1;
      }
      if ((iVar5 < (pFVar9->UVLayers).Array.ArrayNum) && (-1 < iVar5)) {
        if ((iVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TUniqueMeshVertex<8> *)(*pcVar2)();
          return pTVar8;
        }
        lVar11 = *(longlong *)((pFVar9->UVLayers).Array.AllocatorInstance.Data + lVar14 * 8);
      }
      else {
        lVar11 = 0;
      }
      lVar11 = *(longlong *)(lVar11 + 0x78);
      iVar5 = iVar5 + 1;
      local_58 = *(undefined4 *)
                  ((ulonglong)(uVar3 & 0x1ff) * 4 +
                  *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8));
      local_54 = *(undefined4 *)
                  ((ulonglong)(uVar3 + 1 & 0x1ff) * 4 +
                  *(longlong *)((ulonglong)(uVar3 + 1 >> 9) * 8 + lVar11));
      local_50 = *(undefined4 *)
                  ((ulonglong)(uVar3 + 2 & 0x1ff) * 4 +
                  *(longlong *)((ulonglong)(uVar3 + 2 >> 9) * 8 + lVar11));
      *(undefined4 *)((longlong)this + lVar14 * 4) = local_70[(longlong)param_3 + 6];
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uVar7);
  }
  if ((int)uVar7 < 8) {
    memset((void *)((longlong)this + (ulonglong)uVar7 * 4),-1,(longlong)(int)(8 - uVar7) << 2);
  }
  return this;
}

