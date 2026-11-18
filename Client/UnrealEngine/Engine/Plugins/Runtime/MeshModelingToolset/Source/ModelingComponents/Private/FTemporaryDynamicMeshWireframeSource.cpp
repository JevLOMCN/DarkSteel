// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// GetBounds @ 14ca8e2f0

TBoxSphereBounds<double,double> * __thiscall
FTemporaryDynamicMeshWireframeSource::GetBounds
          (FTemporaryDynamicMeshWireframeSource *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  UE::Geometry::FDynamicMesh3::GetBounds
            (this->Mesh,(TAxisAlignedBox3<double> *)&local_58._s_0,false);
  if (local_58._s_0.X <= local_40) {
    if ((local_58._s_0.Y <= local_38) && (local_58._s_0.Z <= local_30)) {
      local_30 = local_30 - local_58._s_0.Z;
      local_38 = local_38 - local_58._s_0.Y;
      dVar4 = local_30 * __real_3fe0000000000000;
      dVar5 = local_38 * __real_3fe0000000000000;
      dVar1 = (local_40 - local_58._s_0.X) * __real_3fe0000000000000;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + local_58._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar5 + local_58._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar4 + local_58._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar5;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar4;
      dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
      auVar2._0_8_ = dVar1 * dVar1;
      auVar2._8_8_ = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (local_30 * local_30 + local_38 * local_38) * __real_3fd0000000000000 +
                     auVar2._0_8_;
      auVar3 = sqrtpd(auVar2,auVar3);
      __return_storage_ptr__->SphereRadius = auVar3._0_8_;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetEdge @ 14ca8fcc0

void __thiscall
FTemporaryDynamicMeshWireframeSource::GetEdge
          (FTemporaryDynamicMeshWireframeSource *this,int param_1,int *param_2,int *param_3,
          EMeshEdgeType *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  char cVar4;
  EMeshEdgeType EVar5;
  char local_res8 [8];
  char local_res10 [8];
  char local_res18 [8];
  char local_res20 [8];
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  uVar2 = *(undefined8 *)
           (*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar1) +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  *param_2 = (int)uVar2;
  *param_3 = (int)((ulonglong)uVar2 >> 0x20);
  pFVar3 = (this->Mesh->AttributeSet).Ptr;
  EVar5 = MeshBoundary|Regular;
  if (*(int *)(*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar1) + 0xc +
              (ulonglong)(param_1 & 0x1ff) * 0x10) != -1) {
    EVar5 = Regular;
  }
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    local_res10[0] = '\0';
    local_res8[0] = '\0';
    local_res20[0] = '\0';
    local_res18[0] = '\0';
    cVar4 = (**(code **)(pFVar3->_padding_ + 0x70))
                      (pFVar3,param_1,local_res10,local_res8,local_res20,local_res18);
    if (cVar4 != '\0') {
      if (local_res10[0] != '\0') {
        EVar5 = EVar5 | UVSeam;
      }
      if (local_res8[0] != '\0') {
        EVar5 = EVar5 | NormalSeam;
      }
      if (local_res18[0] != '\0') {
        EVar5 = EVar5 | TangentSeam;
      }
      if (local_res20[0] != '\0') {
        *param_4 = EVar5 | ColorSeam;
        return;
      }
    }
  }
  *param_4 = EVar5;
  return;
}

// GetEdgeCount @ 14ca8fdc0

int __thiscall
FTemporaryDynamicMeshWireframeSource::GetEdgeCount(FTemporaryDynamicMeshWireframeSource *this)

{
  return (this->Mesh->EdgeRefCounts).UsedCount;
}

// GetMaxEdgeIndex @ 14ca90780

int __thiscall
FTemporaryDynamicMeshWireframeSource::GetMaxEdgeIndex(FTemporaryDynamicMeshWireframeSource *this)

{
  return (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
         (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed;
}

// GetVertex @ 14ca94040

TVector<double> * __thiscall
FTemporaryDynamicMeshWireframeSource::GetVertex
          (FTemporaryDynamicMeshWireframeSource *this,TVector<double> *__return_storage_ptr__,
          int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  
  lVar3 = *(longlong *)
           ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// IsEdge @ 14ca976e0

bool __thiscall
FTemporaryDynamicMeshWireframeSource::IsEdge(FTemporaryDynamicMeshWireframeSource *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValid @ 14ca97970

bool __thiscall
FTemporaryDynamicMeshWireframeSource::IsValid(FTemporaryDynamicMeshWireframeSource *this)

{
  return true;
}

