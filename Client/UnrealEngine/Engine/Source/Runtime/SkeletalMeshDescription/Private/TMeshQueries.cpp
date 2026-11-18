// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 1

// TriangleDistance @ 1443af800

TDistPoint3Triangle3<double> * __cdecl
UE::Geometry::TMeshQueries<FMeshDescriptionTriangleMeshAdapter>::TriangleDistance
          (TDistPoint3Triangle3<double> *__return_storage_ptr__,
          FMeshDescriptionTriangleMeshAdapter *param_1,int param_2,TVector<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FMeshElementContainer *pFVar5;
  TDistPoint3Triangle3<double> *pTVar6;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 TStack_40;
  TVector<double>_u_0 local_28;
  
  if (-1 < param_2) {
    pFVar5 = FMeshElementChannels::Get(param_1->Mesh->TriangleElements,0);
    if (param_2 < (pFVar5->BitArray).NumBits - pFVar5->NumHoles) goto LAB_1443af869;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Mesh.IsTriangle(TriIdx)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                     ,0x1e,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TDistPoint3Triangle3<double> *)(*pcVar2)();
    return pTVar6;
  }
LAB_1443af869:
  FMeshDescriptionTriangleMeshAdapter::GetTriVertices
            (param_1,param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&TStack_40._s_0,
             (TVector<double> *)&local_28._s_0);
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Point).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.X = local_58._s_0.X;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Y = local_58._s_0.Y;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Z = local_58._s_0.Z;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.X = TStack_40._s_0.X;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Y = TStack_40._s_0.Y;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Z = TStack_40._s_0.Z;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Z = local_28._s_0.Z;
  TDistPoint3Triangle3<double>::ComputeResult(__return_storage_ptr__);
  return __return_storage_ptr__;
}

