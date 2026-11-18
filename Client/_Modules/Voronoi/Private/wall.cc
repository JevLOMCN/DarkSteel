// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 12

// cut_cell_base<voro::voronoicell> @ 1436c50c0

bool __thiscall
voro::wall_cone::cut_cell_base<voro::voronoicell>
          (wall_cone *this,voronoicell *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = param_2 - this->xc;
  dVar9 = param_3 - this->yc;
  dVar3 = param_4 - this->zc;
  dVar1 = this->xa;
  dVar7 = (this->ya * dVar9 + dVar1 * dVar8 + this->za * dVar3) * this->asi;
  dVar8 = dVar8 - dVar7 * dVar1;
  dVar3 = dVar3 - dVar7 * this->za;
  dVar9 = dVar9 - dVar7 * this->ya;
  auVar6._0_8_ = dVar3 * dVar3;
  auVar6._8_8_ = 0;
  dVar7 = dVar9 * dVar9 + dVar8 * dVar8 + auVar6._0_8_;
  if (dVar7 <= __real_3ee4f8b588e368f1) {
    bVar4 = true;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = this->asi;
    auVar6 = sqrtpd(auVar6,auVar2);
    dVar5 = auVar6._0_8_ * this->sang;
    dVar7 = this->cang / SQRT(dVar7);
    dVar8 = dVar7 * dVar8 - dVar5 * dVar1;
    dVar9 = dVar7 * dVar9 - dVar5 * this->ya;
    dVar1 = dVar7 * dVar3 - dVar5 * this->za;
    bVar4 = voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)param_1,param_1,dVar8,dVar9,dVar1,
                       (this->yc - param_3) * (dVar9 + dVar9) +
                       (this->xc - param_2) * (dVar8 + dVar8) +
                       (this->zc - param_4) * (dVar1 + dVar1),0);
  }
  return bVar4;
}

// cut_cell_base<voro::voronoicell> @ 1436c5290

bool __thiscall
voro::wall_cylinder::cut_cell_base<voro::voronoicell>
          (wall_cylinder *this,voronoicell *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  
  dVar1 = param_2 - this->xc;
  dVar2 = param_3 - this->yc;
  dVar3 = param_4 - this->zc;
  dVar5 = (this->ya * dVar2 + this->xa * dVar1 + this->za * dVar3) * this->asi;
  dVar1 = dVar1 - dVar5 * this->xa;
  dVar3 = dVar3 - dVar5 * this->za;
  dVar2 = dVar2 - dVar5 * this->ya;
  dVar5 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar5 <= __real_3ee4f8b588e368f1) {
    bVar4 = true;
  }
  else {
    dVar5 = SQRT(dVar5) * this->rc - dVar5;
    bVar4 = voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)param_1,param_1,dVar1,dVar2,dVar3,dVar5 + dVar5,0);
  }
  return bVar4;
}

// cut_cell_base<voro::voronoicell> @ 1436c5390

bool __thiscall
voro::wall_plane::cut_cell_base<voro::voronoicell>
          (wall_plane *this,voronoicell *param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = ((this->ac - this->xc * param_2) - this->yc * param_3) - this->zc * param_4;
  bVar1 = voronoicell_base::nplane<voro::voronoicell>
                    ((voronoicell_base *)param_1,param_1,this->xc,this->yc,this->zc,dVar2 + dVar2,0)
  ;
  return bVar1;
}

// cut_cell_base<voro::voronoicell> @ 1436c5400

bool __thiscall
voro::wall_sphere::cut_cell_base<voro::voronoicell>
          (wall_sphere *this,voronoicell *param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_2 - this->xc;
  dVar3 = param_3 - this->yc;
  dVar5 = param_4 - this->zc;
  dVar4 = dVar3 * dVar3 + dVar2 * dVar2 + dVar5 * dVar5;
  if (__real_3ee4f8b588e368f1 < dVar4) {
    dVar4 = SQRT(dVar4) * this->rc - dVar4;
    bVar1 = voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)param_1,param_1,dVar2,dVar3,dVar5,dVar4 + dVar4,0);
    return bVar1;
  }
  return true;
}

// cut_cell_base<voro::voronoicell_neighbor> @ 1436c5490

bool __thiscall
voro::wall_cone::cut_cell_base<voro::voronoicell_neighbor>
          (wall_cone *this,voronoicell_neighbor *param_1,double param_2,double param_3,
          double param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = param_2 - this->xc;
  dVar9 = param_3 - this->yc;
  dVar3 = param_4 - this->zc;
  dVar1 = this->xa;
  dVar7 = (this->ya * dVar9 + dVar1 * dVar8 + this->za * dVar3) * this->asi;
  dVar8 = dVar8 - dVar7 * dVar1;
  dVar3 = dVar3 - dVar7 * this->za;
  dVar9 = dVar9 - dVar7 * this->ya;
  auVar6._0_8_ = dVar3 * dVar3;
  auVar6._8_8_ = 0;
  dVar7 = dVar9 * dVar9 + dVar8 * dVar8 + auVar6._0_8_;
  if (dVar7 <= __real_3ee4f8b588e368f1) {
    bVar4 = true;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = this->asi;
    auVar6 = sqrtpd(auVar6,auVar2);
    dVar5 = auVar6._0_8_ * this->sang;
    dVar7 = this->cang / SQRT(dVar7);
    dVar8 = dVar7 * dVar8 - dVar5 * dVar1;
    dVar9 = dVar7 * dVar9 - dVar5 * this->ya;
    dVar1 = dVar7 * dVar3 - dVar5 * this->za;
    bVar4 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                      ((voronoicell_base *)param_1,param_1,dVar8,dVar9,dVar1,
                       (this->yc - param_3) * (dVar9 + dVar9) +
                       (this->xc - param_2) * (dVar8 + dVar8) +
                       (dVar1 + dVar1) * (this->zc - param_4),this->w_id);
  }
  return bVar4;
}

// cut_cell_base<voro::voronoicell_neighbor> @ 1436c5660

bool __thiscall
voro::wall_cylinder::cut_cell_base<voro::voronoicell_neighbor>
          (wall_cylinder *this,voronoicell_neighbor *param_1,double param_2,double param_3,
          double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  
  dVar1 = param_2 - this->xc;
  dVar2 = param_3 - this->yc;
  dVar3 = param_4 - this->zc;
  dVar5 = (this->ya * dVar2 + this->xa * dVar1 + this->za * dVar3) * this->asi;
  dVar1 = dVar1 - dVar5 * this->xa;
  dVar3 = dVar3 - dVar5 * this->za;
  dVar2 = dVar2 - dVar5 * this->ya;
  dVar5 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar5 <= __real_3ee4f8b588e368f1) {
    bVar4 = true;
  }
  else {
    dVar5 = SQRT(dVar5) * this->rc - dVar5;
    bVar4 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                      ((voronoicell_base *)param_1,param_1,dVar1,dVar2,dVar3,dVar5 + dVar5,
                       this->w_id);
  }
  return bVar4;
}

// cut_cell_base<voro::voronoicell_neighbor> @ 1436c5760

bool __thiscall
voro::wall_plane::cut_cell_base<voro::voronoicell_neighbor>
          (wall_plane *this,voronoicell_neighbor *param_1,double param_2,double param_3,
          double param_4)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = ((this->ac - this->xc * param_2) - this->yc * param_3) - this->zc * param_4;
  bVar1 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                    ((voronoicell_base *)param_1,param_1,this->xc,this->yc,this->zc,dVar2 + dVar2,
                     this->w_id);
  return bVar1;
}

// cut_cell_base<voro::voronoicell_neighbor> @ 1436c57d0

bool __thiscall
voro::wall_sphere::cut_cell_base<voro::voronoicell_neighbor>
          (wall_sphere *this,voronoicell_neighbor *param_1,double param_2,double param_3,
          double param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_2 - this->xc;
  dVar3 = param_3 - this->yc;
  dVar5 = param_4 - this->zc;
  dVar4 = dVar3 * dVar3 + dVar2 * dVar2 + dVar5 * dVar5;
  if (__real_3ee4f8b588e368f1 < dVar4) {
    dVar4 = SQRT(dVar4) * this->rc - dVar4;
    bVar1 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                      ((voronoicell_base *)param_1,param_1,dVar2,dVar3,dVar5,dVar4 + dVar4,
                       this->w_id);
    return bVar1;
  }
  return true;
}

// point_inside @ 1436c5860

bool __thiscall
voro::wall_cone::point_inside(wall_cone *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_2 - this->yc;
  dVar3 = param_1 - this->xc;
  dVar4 = param_3 - this->zc;
  dVar1 = (this->ya * dVar5 + this->xa * dVar3 + this->za * dVar4) * this->asi;
  dVar3 = dVar3 - dVar1 * this->xa;
  dVar2 = dVar1 * this->gra;
  dVar5 = dVar5 - dVar1 * this->ya;
  dVar4 = dVar4 - dVar1 * this->za;
  if (dVar2 < 0.0) {
    return false;
  }
  return dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4 < dVar2 * dVar2;
}

// point_inside @ 1436c5940

bool __thiscall
voro::wall_cylinder::point_inside(wall_cylinder *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1 - this->xc;
  dVar2 = param_3 - this->zc;
  dVar3 = param_2 - this->yc;
  dVar4 = (this->ya * dVar3 + this->xa * dVar1 + this->za * dVar2) * this->asi;
  dVar1 = dVar1 - dVar4 * this->xa;
  dVar3 = dVar3 - dVar4 * this->ya;
  dVar2 = dVar2 - dVar4 * this->za;
  return dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 < this->rc * this->rc;
}

// point_inside @ 1436c5a00

bool __thiscall
voro::wall_plane::point_inside(wall_plane *this,double param_1,double param_2,double param_3)

{
  return param_1 * this->xc + param_2 * this->yc + param_3 * this->zc < this->ac;
}

// point_inside @ 1436c5a30

bool __thiscall
voro::wall_sphere::point_inside(wall_sphere *this,double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1 - this->xc;
  dVar2 = param_2 - this->yc;
  dVar3 = param_3 - this->zc;
  return dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3 < this->rc * this->rc;
}

