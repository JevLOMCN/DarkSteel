// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 8

// add_ordering_memory @ 1436b3ee0

void __thiscall voro::particle_order::add_ordering_memory(particle_order *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->size << 2;
  uVar3 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  piVar4 = operator_new__(uVar3);
  piVar5 = this->o;
  piVar6 = piVar4;
  if (piVar5 < this->op) {
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
    } while (piVar5 < this->op);
  }
  operator_delete__(this->o);
  this->size = this->size << 1;
  this->o = piVar4;
  this->op = piVar6;
  return;
}

// next_block @ 1436b3f70

bool __thiscall voro::c_loop_subset::next_block(c_loop_subset *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)this->_padding_;
  if (iVar2 < this->bi) {
    iVar3 = (int)this->_padding_;
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    *(int *)&this->_padding_ = iVar2 + 1;
    if (this->ci < iVar3 + -1) {
      this->ci = this->ci + 1;
      *(int *)((longlong)&this->_padding_ + 4) = iVar1 + 1;
      return true;
    }
    this->ci = 0;
    this->px = this->sx + this->px;
    *(int *)((longlong)&this->_padding_ + 4) = (iVar1 - iVar3) + 1;
    return true;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar2 < this->bj) {
    iVar3 = this->cj;
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    *(int *)&this->_padding_ = this->ai;
    this->ci = this->di;
    this->px = this->apx;
    iVar4 = this->inc1;
    *(int *)((longlong)&this->_padding_ + 4) = iVar2 + 1;
    if (iVar3 < *(int *)((longlong)&this->_padding_ + 4) + -1) {
      this->cj = iVar3 + 1;
      *(int *)((longlong)&this->_padding_ + 4) = iVar1 + iVar4;
      return true;
    }
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    this->cj = 0;
    this->py = this->sy + this->py;
    *(int *)((longlong)&this->_padding_ + 4) = iVar1 + (iVar4 - iVar2);
    return true;
  }
  iVar2 = (int)this->_padding_;
  if (this->bk <= iVar2) {
    return false;
  }
  iVar3 = this->ck;
  iVar1 = this->inc2;
  *(int *)&this->_padding_ = this->ai;
  this->ci = this->di;
  *(int *)((longlong)&this->_padding_ + 4) = this->aj;
  this->cj = this->dj;
  this->px = this->apx;
  this->py = this->apy;
  iVar4 = *(int *)((longlong)&this->_padding_ + 4);
  *(int *)&this->_padding_ = iVar2 + 1;
  if (iVar3 < (int)this->_padding_ + -1) {
    this->ck = iVar3 + 1;
    *(int *)((longlong)&this->_padding_ + 4) = iVar1 + iVar4;
    return true;
  }
  this->ck = 0;
  this->pz = this->sz + this->pz;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1 + (iVar4 - (int)this->_padding_);
  return true;
}

// out_of_bounds @ 1436b4120

bool __thiscall voro::c_loop_subset::out_of_bounds(c_loop_subset *this)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = (longlong)((int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4));
  lVar1 = *(longlong *)(this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8);
  dVar5 = this->px + *(double *)(lVar1 + lVar2 * 8);
  if (this->mode == sphere) {
    dVar5 = dVar5 - this->v0;
    dVar4 = (this->py + *(double *)(lVar1 + 8 + lVar2 * 8)) - this->v1;
    dVar3 = (this->pz + *(double *)(lVar1 + 0x10 + lVar2 * 8)) - this->v2;
    dVar5 = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
    return this->v3 <= dVar5 && dVar5 != this->v3;
  }
  if ((((this->v0 <= dVar5) && (dVar5 < this->v1 || dVar5 == this->v1)) &&
      (dVar5 = this->py + *(double *)(lVar1 + 8 + lVar2 * 8), this->v2 <= dVar5)) &&
     (((dVar5 < this->v3 || dVar5 == this->v3 &&
       (dVar5 = this->pz + *(double *)(lVar1 + 0x10 + lVar2 * 8), this->v4 <= dVar5)) &&
      (dVar5 < this->v5 || dVar5 == this->v5)))) {
    return false;
  }
  return true;
}

// setup_box @ 1436b4210

void __thiscall
voro::c_loop_subset::setup_box
          (c_loop_subset *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (param_7) {
    this->v0 = param_1;
    this->v1 = param_2;
    this->v2 = param_3;
    this->v3 = param_4;
    this->v4 = param_5;
    this->v5 = param_6;
    this->mode = box;
  }
  else {
    this->mode = no_check;
  }
  dVar7 = (param_1 - this->ax) * this->xsp;
  dVar6 = (param_2 - this->ax) * this->xsp;
  iVar4 = (int)dVar7;
  dVar5 = (param_3 - this->ay) * this->ysp;
  dVar2 = (param_4 - this->ay) * this->ysp;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar7) {
    iVar3 = iVar4;
  }
  dVar1 = (param_5 - this->az) * this->zsp;
  this->ai = iVar3;
  iVar4 = (int)dVar6;
  dVar7 = (param_6 - this->az) * this->zsp;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar6) {
    iVar3 = iVar4;
  }
  this->bi = iVar3;
  iVar4 = (int)dVar5;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar5) {
    iVar3 = iVar4;
  }
  this->aj = iVar3;
  iVar4 = (int)dVar2;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar2) {
    iVar3 = iVar4;
  }
  iVar4 = (int)dVar1;
  this->bj = iVar3;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar1) {
    iVar3 = iVar4;
  }
  iVar4 = (int)dVar7;
  this->ak = iVar3;
  iVar3 = iVar4 + -1;
  if (0.0 <= dVar7) {
    iVar3 = iVar4;
  }
  this->bk = iVar3;
  setup_common(this);
  return;
}

// setup_common @ 1436b4390

void __thiscall voro::c_loop_subset::setup_common(c_loop_subset *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  if (this->xperiodic == false) {
    iVar3 = this->ai;
    if (iVar3 < 0) {
      iVar3 = 0;
      this->ai = 0;
      if (this->bi < 0) {
        this->bi = 0;
      }
    }
    iVar4 = (int)this->_padding_;
    if (iVar4 <= this->bi) {
      this->bi = iVar4 + -1;
      if (iVar4 <= iVar3) {
        this->ai = iVar4 + -1;
      }
    }
  }
  if (this->yperiodic == false) {
    iVar3 = this->aj;
    if (iVar3 < 0) {
      iVar3 = 0;
      this->aj = 0;
      if (this->bj < 0) {
        this->bj = 0;
      }
    }
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    if (iVar4 <= this->bj) {
      this->bj = iVar4 + -1;
      if (iVar4 <= iVar3) {
        this->aj = iVar4 + -1;
      }
    }
  }
  if (this->zperiodic == false) {
    iVar3 = this->ak;
    if (iVar3 < 0) {
      iVar3 = 0;
      this->ak = 0;
      if (this->bk < 0) {
        this->bk = 0;
      }
    }
    iVar4 = (int)this->_padding_;
    if (iVar4 <= this->bk) {
      this->bk = iVar4 + -1;
      if (iVar4 <= iVar3) {
        this->ak = iVar4 + -1;
      }
    }
  }
  iVar3 = this->ai;
  iVar4 = this->aj;
  iVar5 = this->ak;
  iVar1 = (int)this->_padding_;
  this->ci = iVar3;
  this->cj = iVar4;
  this->ck = iVar5;
  if (iVar3 < 0) {
    iVar6 = (iVar1 - ((iVar1 - iVar3) + -1) % iVar1) + -1;
    *(int *)&this->_padding_ = iVar6;
    iVar3 = (iVar3 + 1) / iVar1 + -1;
    this->di = iVar6;
  }
  else {
    iVar6 = iVar3 % iVar1;
    *(int *)&this->_padding_ = iVar6;
    this->di = iVar6;
    iVar3 = iVar3 / iVar1;
  }
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  dVar8 = (double)iVar3 * this->sx;
  this->px = dVar8;
  this->apx = dVar8;
  if (iVar4 < 0) {
    iVar3 = (iVar2 - ((iVar2 - iVar4) + -1) % iVar2) + -1;
    *(int *)((longlong)&this->_padding_ + 4) = iVar3;
    iVar4 = (iVar4 + 1) / iVar2 + -1;
    this->dj = iVar3;
  }
  else {
    iVar3 = iVar4 % iVar2;
    *(int *)((longlong)&this->_padding_ + 4) = iVar3;
    this->dj = iVar3;
    iVar4 = iVar4 / iVar2;
  }
  iVar7 = (int)this->_padding_;
  dVar8 = (double)iVar4 * this->sy;
  this->py = dVar8;
  this->apy = dVar8;
  if (iVar5 < 0) {
    iVar4 = (iVar7 - ((iVar7 - iVar5) + -1) % iVar7) + -1;
    *(int *)&this->_padding_ = iVar4;
    iVar5 = (iVar5 + 1) / iVar7 + -1;
    this->dk = iVar4;
  }
  else {
    iVar4 = iVar5 % iVar7;
    *(int *)&this->_padding_ = iVar4;
    this->dk = iVar4;
    iVar5 = iVar5 / iVar7;
  }
  iVar7 = this->bi;
  dVar8 = (double)iVar5 * this->sz;
  this->pz = dVar8;
  this->apz = dVar8;
  if (iVar7 < 0) {
    iVar7 = (iVar1 - ((iVar1 - iVar7) + -1) % iVar1) + -1;
  }
  else {
    iVar7 = iVar7 % iVar1;
  }
  iVar5 = this->bj;
  if (iVar5 < 0) {
    iVar5 = (iVar2 - ((iVar2 - iVar5) + -1) % iVar2) + -1;
  }
  else {
    iVar5 = iVar5 % iVar2;
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->inc2 = ((iVar2 - iVar5) + iVar3) * iVar1 + (iVar6 - iVar7);
  this->inc1 = iVar1 + (iVar6 - iVar7);
  *(int *)((longlong)&this->_padding_ + 4) = (iVar2 * iVar4 + iVar3) * iVar1 + iVar6;
  return;
}

// setup_intbox @ 1436b4690

void __thiscall
voro::c_loop_subset::setup_intbox
          (c_loop_subset *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  this->bj = param_4;
  this->ak = param_5;
  this->bk = param_6;
  this->ai = param_1;
  this->bi = param_2;
  this->aj = param_3;
  this->mode = no_check;
  setup_common(this);
  return;
}

// setup_sphere @ 1436b46e0

void __thiscall
voro::c_loop_subset::setup_sphere
          (c_loop_subset *this,double param_1,double param_2,double param_3,double param_4,
          bool param_5)

{
  c_loop_subset_mode cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_5) {
    this->v0 = param_1;
    cVar1 = sphere;
    this->v1 = param_2;
    this->v2 = param_3;
    this->v3 = param_4 * param_4;
  }
  else {
    cVar1 = no_check;
  }
  this->mode = cVar1;
  dVar4 = param_1 - this->ax;
  dVar7 = param_2 - this->ay;
  dVar5 = param_3 - this->az;
  dVar6 = (dVar4 + param_4) * this->xsp;
  dVar4 = (dVar4 - param_4) * this->xsp;
  iVar3 = (int)dVar4;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar4) {
    iVar2 = iVar3;
  }
  dVar8 = (dVar7 + param_4) * this->ysp;
  this->ai = iVar2;
  dVar4 = (dVar7 - param_4) * this->ysp;
  iVar3 = (int)dVar6;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar6) {
    iVar2 = iVar3;
  }
  this->bi = iVar2;
  iVar3 = (int)dVar4;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar4) {
    iVar2 = iVar3;
  }
  this->aj = iVar2;
  iVar3 = (int)dVar8;
  dVar4 = (dVar5 - param_4) * this->zsp;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar8) {
    iVar2 = iVar3;
  }
  dVar6 = (dVar5 + param_4) * this->zsp;
  this->bj = iVar2;
  iVar3 = (int)dVar4;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar4) {
    iVar2 = iVar3;
  }
  iVar3 = (int)dVar6;
  this->ak = iVar2;
  iVar2 = iVar3 + -1;
  if (0.0 <= dVar6) {
    iVar2 = iVar3;
  }
  this->bk = iVar2;
  setup_common(this);
  return;
}

// start @ 1436b4830

bool __thiscall voro::c_loop_subset::start(c_loop_subset *this)

{
  int iVar1;
  c_loop_subset_mode cVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  iVar1 = *(int *)(this->_padding_ + lVar5 * 4);
  while (iVar1 == 0) {
    bVar4 = next_block(this);
    if (!bVar4) {
      return false;
    }
    lVar5 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    iVar1 = *(int *)(this->_padding_ + lVar5 * 4);
  }
  cVar2 = this->mode;
  do {
    if (cVar2 == no_check) {
      return true;
    }
    iVar1 = (int)this->_padding_;
    lVar6 = (longlong)(iVar1 * *(int *)((longlong)&this->_padding_ + 4));
    lVar3 = *(longlong *)(this->_padding_ + (longlong)(int)lVar5 * 8);
    dVar9 = this->px + *(double *)(lVar3 + lVar6 * 8);
    if (cVar2 == sphere) {
      dVar9 = dVar9 - this->v0;
      dVar8 = (this->py + *(double *)(lVar3 + 8 + lVar6 * 8)) - this->v1;
      dVar7 = (this->pz + *(double *)(lVar3 + 0x10 + lVar6 * 8)) - this->v2;
      dVar9 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7;
      if (dVar9 < this->v3 || dVar9 == this->v3) {
        return true;
      }
    }
    else if ((((this->v0 <= dVar9) && (dVar9 < this->v1 || dVar9 == this->v1)) &&
             (dVar9 = this->py + *(double *)(lVar3 + 8 + lVar6 * 8), this->v2 <= dVar9)) &&
            (((dVar9 < this->v3 || dVar9 == this->v3 &&
              (dVar9 = this->pz + *(double *)(lVar3 + 0x10 + lVar6 * 8), this->v4 <= dVar9)) &&
             (dVar9 < this->v5 || dVar9 == this->v5)))) {
      return true;
    }
    iVar1 = iVar1 + 1;
    *(int *)&this->_padding_ = iVar1;
    if (*(int *)(this->_padding_ + (longlong)(int)lVar5 * 4) <= iVar1) {
      do {
        *(undefined4 *)&this->_padding_ = 0;
        bVar4 = next_block(this);
        if (!bVar4) {
          return false;
        }
        lVar5 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      } while (*(int *)(this->_padding_ + lVar5 * 4) <= (int)this->_padding_);
    }
    cVar2 = this->mode;
  } while( true );
}

