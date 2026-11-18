// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// GetTriangle @ 14c8f8a20

FIndex3i * __thiscall
UE::Geometry::FUVOverlayView::GetTriangle
          (FUVOverlayView *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetUV @ 14c8f9800

TVector2<float> __thiscall UE::Geometry::FUVOverlayView::GetUV(FUVOverlayView *this,int param_1)

{
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar1;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar2;
  uint in_R8D;
  
  TVar2._s_0.Y = (float)in_register_00000014;
  TVar2._s_0.X = (float)param_1;
  pTVar1 = this->UVOverlay;
  *(undefined4 *)TVar2 =
       *(undefined4 *)
        (*(longlong *)
          (*(longlong *)&pTVar1->field_0x48 + (ulonglong)((in_R8D & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(in_R8D * 2 & 0x1ff) * 4);
  *(undefined4 *)((longlong)TVar2 + 4) =
       *(undefined4 *)
        (*(longlong *)
          (*(longlong *)&pTVar1->field_0x48 + (ulonglong)((in_R8D & 0x7fffffff) >> 8) * 8) +
        (ulonglong)(in_R8D * 2 + 1 & 0x1ff) * 4);
  return (TVector2<float>)TVar2;
}

// GetUVTriangle @ 14c8f9860

FIndex3i * __thiscall
UE::Geometry::FUVOverlayView::GetUVTriangle
          (FUVOverlayView *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_1 * 3;
  lVar1 = *(longlong *)&this->UVOverlay->field_0x78;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4)
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
               (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  (__return_storage_ptr__->field0_0x0)._s_0.C =
       *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
               (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  return __return_storage_ptr__;
}

// GetVertex @ 14c8f9b40

TVector<double> * __thiscall
UE::Geometry::FUVOverlayView::GetVertex
          (FUVOverlayView *this,TVector<double> *__return_storage_ptr__,int param_1)

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

// SetUV @ 14c9173a0

void __thiscall
UE::Geometry::FUVOverlayView::SetUV(FUVOverlayView *this,int param_1,TVector2<float> param_2)

{
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar1;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  pTVar1 = this->UVOverlay;
  local_res18 = param_2.field0_0x0._0_4_;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8)
   + (ulonglong)(param_1 * 2 & 0x1ff) * 4) = local_res18;
  uStackX_1c = param_2.field0_0x0._4_4_;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8)
   + (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4) = uStackX_1c;
  return;
}

