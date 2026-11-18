// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// InsertPointUnsafe @ 14cc612e0

void __thiscall
UE::Geometry::TPointHashGrid2<int,double>::InsertPointUnsafe
          (TPointHashGrid2<int,double> *this,int *param_1,TVector2<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined4 in_EAX;
  uint uVar5;
  longlong lVar6;
  TPairInitializer<UE::Geometry::FVector2i_const_&,int_const_&> local_res8 [2];
  int **local_18;
  int *local_10;
  
  dVar2 = __real_3ff0000000000000 / (this->Indexer).CellSize;
  dVar4 = dVar2 * (param_2->field0_0x0)._s_0.X;
  lVar6 = (longlong)dVar4;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar4)) {
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uVar5 = movmskpd(in_EAX,auVar3);
    dVar4 = (double)(longlong)(lVar6 - (ulonglong)(uVar5 & 1));
  }
  dVar2 = dVar2 * (param_2->field0_0x0)._s_0.Y;
  local_res8[0].Value._0_4_ = (int)dVar4;
  lVar6 = (longlong)dVar2;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar5 = movmskpd((int)local_res8[0].Value,auVar1);
    dVar2 = (double)(longlong)(lVar6 - (ulonglong)(uVar5 & 1));
  }
  local_res8[0].Value._4_4_ = (int)dVar2;
  local_18 = &local_res8[0].Value;
  local_10 = param_1;
  TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Geometry::FVector2i_const_&,int_const_&>_>
            ((TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

