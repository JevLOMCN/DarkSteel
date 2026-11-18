// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// TriangleIntersection @ 14cc82b50

TIntrRay3Triangle3<double,UE::Math::TRay<double>_> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
          (TIntrRay3Triangle3<double,UE::Math::TRay<double>_> *__return_storage_ptr__,
          FDynamicMesh3 *param_1,int param_2,TRay<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 TStack_40;
  TVector<double>_u_0 local_28;
  
  if (((param_2 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.IsTriangle(TriIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntrRay3Triangle3<double,UE::Math::TRay<double>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (param_1,param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&TStack_40._s_0,
             (TVector<double> *)&local_28._s_0);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.Z = 1.0;
  dVar2 = (param_3->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_3->Direction).field0_0x0._s_0.X;
  (__return_storage_ptr__->Ray).Origin.field0_0x0._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_3->Direction).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.Y = (param_3->Direction).field0_0x0._s_0.Y
  ;
  (__return_storage_ptr__->Ray).Direction.field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.X = local_58._s_0.X;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Y = local_58._s_0.Y;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Z = local_58._s_0.Z;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.X = TStack_40._s_0.X;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Y = TStack_40._s_0.Y;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Z = TStack_40._s_0.Z;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Z = local_28._s_0.Z;
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
            (&__return_storage_ptr__->Ray,&__return_storage_ptr__->Triangle,
             &__return_storage_ptr__->RayParameter,&__return_storage_ptr__->TriangleBaryCoords,
             &__return_storage_ptr__->IntersectionType);
  return __return_storage_ptr__;
}

