// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// AddTet @ 14337ff00

void __thiscall
UE::Geometry::FDelaunay3Connectivity::AddTet(FDelaunay3Connectivity *this,FIndex4i *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  FIndex3i_u_0 local_28;
  
  iVar1 = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.B;
  iVar3 = (param_1->field0_0x0)._s_0.C;
  local_28._s_0.A = *(int *)((longlong)&param_1->field0_0x0 + 4);
  local_28._s_0.B = *(int *)((longlong)&param_1->field0_0x0 + 8);
  local_28._s_0.C = iVar1;
  iVar4 = iVar2;
  if (iVar1 < iVar2) {
    local_28._s_0.C = iVar3;
    local_28._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    iVar4 = iVar1;
  }
  if (iVar3 <= iVar4) {
    local_28._s_0.B = iVar1;
    local_28._s_0.A = iVar3;
    local_28._s_0.C = iVar2;
  }
  TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
  ::Emplace<UE::Geometry::FIndex3i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
              *)this,(FIndex3i *)&local_28._s_0,&(param_1->field0_0x0)._s_0.D);
  iVar1 = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.D;
  local_28._s_0.C = (param_1->field0_0x0)._s_0.B;
  local_28._s_0.B = iVar2;
  local_28._s_0.A = iVar1;
  if (iVar1 < iVar2) {
    if (local_28._s_0.C <= iVar1) {
LAB_14337ffaa:
      local_28._s_0.B = iVar1;
      local_28._s_0.A = local_28._s_0.C;
      local_28._s_0.C = iVar2;
    }
  }
  else {
    if (local_28._s_0.C <= iVar2) goto LAB_14337ffaa;
    local_28._s_0.B = local_28._s_0.C;
    local_28._s_0.A = iVar2;
    local_28._s_0.C = iVar1;
  }
  TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
  ::Emplace<UE::Geometry::FIndex3i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
              *)this,(FIndex3i *)&local_28._s_0,&(param_1->field0_0x0)._s_0.C);
  iVar1 = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.C;
  iVar3 = (param_1->field0_0x0)._s_0.D;
  uVar5._0_4_ = *(int *)((longlong)&param_1->field0_0x0 + 8);
  uVar5._4_4_ = *(int *)((longlong)&param_1->field0_0x0 + 0xc);
  local_28._s_0.B = iVar2;
  local_28._s_0.A = iVar1;
  local_28._s_0.C = iVar1;
  iVar4 = iVar2;
  if (iVar1 < iVar2) {
    local_28._s_0.C = iVar3;
    uVar5 = local_28._0_8_;
    iVar4 = iVar1;
  }
  local_28._0_8_ = uVar5;
  if (iVar3 <= iVar4) {
    local_28._s_0.B = iVar1;
    local_28._s_0.A = iVar3;
    local_28._s_0.C = iVar2;
  }
  TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
  ::Emplace<UE::Geometry::FIndex3i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
              *)this,(FIndex3i *)&local_28._s_0,&(param_1->field0_0x0)._s_0.B);
  iVar1 = (param_1->field0_0x0)._s_0.B;
  iVar2 = (param_1->field0_0x0)._s_0.D;
  local_28._s_0.C = (param_1->field0_0x0)._s_0.C;
  local_28._s_0.B = iVar2;
  local_28._s_0.A = iVar1;
  if (iVar1 < iVar2) {
    if (iVar1 < local_28._s_0.C) goto LAB_14338004e;
  }
  else if (iVar2 < local_28._s_0.C) {
    local_28._s_0.B = local_28._s_0.C;
    local_28._s_0.A = iVar2;
    local_28._s_0.C = iVar1;
    goto LAB_14338004e;
  }
  local_28._s_0.B = iVar1;
  local_28._s_0.A = local_28._s_0.C;
  local_28._s_0.C = iVar2;
LAB_14338004e:
  TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
  ::Emplace<UE::Geometry::FIndex3i,int_const_&>
            ((TMapBase<UE::Geometry::FIndex3i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>_>
              *)this,(FIndex3i *)&local_28._s_0,(int *)param_1);
  return;
}

// DeleteTet @ 143395cb0

void __thiscall
UE::Geometry::FDelaunay3Connectivity::DeleteTet(FDelaunay3Connectivity *this,FIndex4i *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FIndex3i_u_0 local_18;
  
  iVar8 = (param_1->field0_0x0)._s_0.A;
  iVar7 = (param_1->field0_0x0)._s_0.B;
  iVar1 = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.A = *(int *)((longlong)&param_1->field0_0x0 + 4);
  local_18._s_0.B = *(int *)((longlong)&param_1->field0_0x0 + 8);
  local_18._s_0.C = iVar8;
  iVar2 = iVar7;
  if (iVar8 < iVar7) {
    local_18._s_0.C = iVar1;
    local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    iVar2 = iVar8;
  }
  if (iVar1 <= iVar2) {
    local_18._s_0.B = iVar8;
    local_18._s_0.A = iVar1;
    local_18._s_0.C = iVar7;
  }
  iVar8 = *(int *)&(this->TriToVert).field_0x34;
  iVar7 = *(int *)&(this->TriToVert).field_0x8;
  if (iVar7 != iVar8) {
    uVar6 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
    TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex3i>
              ((TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                *)this,uVar6,(FIndex3i *)&local_18._s_0);
    iVar8 = *(int *)&(this->TriToVert).field_0x34;
    iVar7 = *(int *)&(this->TriToVert).field_0x8;
  }
  iVar1 = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.D;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.B;
  local_18._s_0.B = iVar2;
  local_18._s_0.A = iVar1;
  if (iVar1 < iVar2) {
    if (local_18._s_0.C <= iVar1) {
LAB_143395d73:
      local_18._s_0.B = iVar1;
      local_18._s_0.A = local_18._s_0.C;
      local_18._s_0.C = iVar2;
    }
  }
  else {
    if (local_18._s_0.C <= iVar2) goto LAB_143395d73;
    local_18._s_0.B = local_18._s_0.C;
    local_18._s_0.A = iVar2;
    local_18._s_0.C = iVar1;
  }
  if (iVar7 != iVar8) {
    uVar6 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
    TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex3i>
              ((TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                *)this,uVar6,(FIndex3i *)&local_18._s_0);
    iVar8 = *(int *)&(this->TriToVert).field_0x34;
    iVar7 = *(int *)&(this->TriToVert).field_0x8;
  }
  iVar1 = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.C;
  iVar3 = (param_1->field0_0x0)._s_0.D;
  uVar5._0_4_ = *(int *)((longlong)&param_1->field0_0x0 + 8);
  uVar5._4_4_ = *(int *)((longlong)&param_1->field0_0x0 + 0xc);
  local_18._s_0.B = iVar2;
  local_18._s_0.A = iVar1;
  local_18._s_0.C = iVar1;
  iVar4 = iVar2;
  if (iVar1 < iVar2) {
    local_18._s_0.C = iVar3;
    uVar5 = local_18._0_8_;
    iVar4 = iVar1;
  }
  local_18._0_8_ = uVar5;
  if (iVar3 <= iVar4) {
    local_18._s_0.B = iVar1;
    local_18._s_0.A = iVar3;
    local_18._s_0.C = iVar2;
  }
  if (iVar7 != iVar8) {
    uVar6 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
    TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex3i>
              ((TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                *)this,uVar6,(FIndex3i *)&local_18._s_0);
    iVar8 = *(int *)&(this->TriToVert).field_0x34;
    iVar7 = *(int *)&(this->TriToVert).field_0x8;
  }
  iVar1 = (param_1->field0_0x0)._s_0.B;
  iVar2 = (param_1->field0_0x0)._s_0.D;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.B = iVar2;
  local_18._s_0.A = iVar1;
  if (iVar1 < iVar2) {
    if (iVar1 < local_18._s_0.C) goto LAB_143395e4f;
  }
  else if (iVar2 < local_18._s_0.C) {
    local_18._s_0.B = local_18._s_0.C;
    local_18._s_0.A = iVar2;
    local_18._s_0.C = iVar1;
    goto LAB_143395e4f;
  }
  local_18._s_0.B = iVar1;
  local_18._s_0.A = local_18._s_0.C;
  local_18._s_0.C = iVar2;
LAB_143395e4f:
  if (iVar7 != iVar8) {
    uVar6 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
    TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Geometry::FIndex3i>
              ((TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                *)this,uVar6,(FIndex3i *)&local_18._s_0);
  }
  return;
}

// GetVertex @ 1433b3980

int __thiscall
UE::Geometry::FDelaunay3Connectivity::GetVertex(FDelaunay3Connectivity *this,FIndex3i *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  FIndex3i_u_0 local_18;
  
  iVar4 = (param_1->field0_0x0)._s_0.B;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.A;
  iVar2 = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.A = *(int *)((longlong)&param_1->field0_0x0 + 4);
  local_18._s_0.B = *(int *)((longlong)&param_1->field0_0x0 + 8);
  if (local_18._s_0.C < iVar4) {
    if (local_18._s_0.C < iVar2) {
      local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
      local_18._s_0.C = iVar2;
      goto LAB_1433b39d0;
    }
  }
  else if (iVar4 < iVar2) goto LAB_1433b39d0;
  local_18._s_0.B = local_18._s_0.C;
  local_18._s_0.A = iVar2;
  local_18._s_0.C = iVar4;
LAB_1433b39d0:
  uVar3 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
  iVar4 = TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Geometry::FIndex3i>
                    ((TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                      *)this,uVar3,(FIndex3i *)&local_18._s_0);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->TriToVert + (longlong)iVar4 * 0x18;
    piVar5 = (int *)(lVar1 + 0xc);
    if (lVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      return *piVar5;
    }
  }
  return -2;
}

// InitWithGhosts @ 1433b7680

void __thiscall
UE::Geometry::FDelaunay3Connectivity::InitWithGhosts(FDelaunay3Connectivity *this,FIndex4i *param_1)

{
  FIndex4i_u_0 local_18;
  
  AddTet(this,param_1);
  local_18._s_0.A = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.B = (param_1->field0_0x0)._s_0.B;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.A;
  local_18._s_0.D = -1;
  AddTet(this,(FIndex4i *)&local_18._s_0);
  local_18._s_0.A = (param_1->field0_0x0)._s_0.B;
  local_18._s_0.B = (param_1->field0_0x0)._s_0.D;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.A;
  local_18._s_0.D = -1;
  AddTet(this,(FIndex4i *)&local_18._s_0);
  local_18._s_0.A = (param_1->field0_0x0)._s_0.D;
  local_18._s_0.B = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.A;
  local_18._s_0.D = -1;
  AddTet(this,(FIndex4i *)&local_18._s_0);
  local_18._s_0.A = (param_1->field0_0x0)._s_0.C;
  local_18._s_0.B = (param_1->field0_0x0)._s_0.D;
  local_18._s_0.C = (param_1->field0_0x0)._s_0.B;
  local_18._s_0.D = -1;
  AddTet(this,(FIndex4i *)&local_18._s_0);
  return;
}

