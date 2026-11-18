// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 9

// FDynamicMeshDebugDrawMesh @ 144431640

FDynamicMeshDebugDrawMesh * __thiscall
FDynamicMeshDebugDrawMesh::FDynamicMeshDebugDrawMesh
          (FDynamicMeshDebugDrawMesh *this,FDynamicMesh3 *param_1)

{
  this->DynamicMesh = param_1;
  this->_padding_ = (longlong)&___7FDynamicMeshDebugDrawMesh__6B_;
  return this;
}

// ~FDynamicMeshDebugDrawMesh @ 144433af0

void __thiscall
FDynamicMeshDebugDrawMesh::~FDynamicMeshDebugDrawMesh(FDynamicMeshDebugDrawMesh *this)

{
  return;
}

// GetMaxTriangleIndex @ 14444bb20

int __thiscall FDynamicMeshDebugDrawMesh::GetMaxTriangleIndex(FDynamicMeshDebugDrawMesh *this)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->DynamicMesh;
  if (pFVar1 != (FDynamicMesh3 *)0x0) {
    return (pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed;
  }
  return 0;
}

// GetMaxVertexIndex @ 14444bb60

int __thiscall FDynamicMeshDebugDrawMesh::GetMaxVertexIndex(FDynamicMeshDebugDrawMesh *this)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->DynamicMesh;
  if (pFVar1 != (FDynamicMesh3 *)0x0) {
    return (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed;
  }
  return 0;
}

// GetTriangle @ 14444e330

TIntVector3<int> * __thiscall
FDynamicMeshDebugDrawMesh::GetTriangle
          (FDynamicMeshDebugDrawMesh *this,TIntVector3<int> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int local_18;
  
  cVar4 = (**(code **)(this->_padding_ + 0x30))(this,param_1);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)
             ((this->DynamicMesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    iVar2 = *(int *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_18;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)((ulonglong)uVar1 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar2;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0xffffffffffffffff;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -1;
  return __return_storage_ptr__;
}

// GetVertexNormal @ 14444f2b0

TVector<double> * __thiscall
FDynamicMeshDebugDrawMesh::GetVertexNormal
          (FDynamicMeshDebugDrawMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fStack_14;
  
  cVar3 = (**(code **)(this->_padding_ + 0x10))(this,param_1);
  if (cVar3 != '\0') {
    if ((this->DynamicMesh->VertexNormals).bIsSet == false) {
      fStack_14 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      uVar5 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
    }
    else {
      lVar2 = *(longlong *)
               ((this->DynamicMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)param_1 >> 9) * 8);
      pfVar1 = (float *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
      uVar5 = *pfVar1;
      fStack_14 = pfVar1[1];
      uVar4 = *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStack_14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(float)uVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetVertexPosition @ 14444f430

TVector<double> * __thiscall
FDynamicMeshDebugDrawMesh::GetVertexPosition
          (FDynamicMeshDebugDrawMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  
  cVar5 = (**(code **)(this->_padding_ + 0x10))(this,param_1);
  if (cVar5 != '\0') {
    lVar3 = *(longlong *)
             ((this->DynamicMesh->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar1 = (double *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    dVar4 = pdVar1[1];
    dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// IsValidTriangle @ 144451970

bool __thiscall
FDynamicMeshDebugDrawMesh::IsValidTriangle(FDynamicMeshDebugDrawMesh *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->DynamicMesh;
  if ((((pFVar1 != (FDynamicMesh3 *)0x0) && (-1 < param_1)) &&
      (param_1 < (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValidVertex @ 1444519f0

bool __thiscall
FDynamicMeshDebugDrawMesh::IsValidVertex(FDynamicMeshDebugDrawMesh *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  
  pFVar1 = this->DynamicMesh;
  if ((((pFVar1 != (FDynamicMesh3 *)0x0) && (-1 < param_1)) &&
      (param_1 < (int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

