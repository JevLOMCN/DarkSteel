// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> @ 143366180

TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> * __thiscall
UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
          (TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *this,
          ValueIterator *param_1,ValueIterator *param_2,
          TFunction<UE::Geometry::FIndex2i___cdecl(int)> *param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  FIndex2i_u_0 FVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  FIndex2i_u_0 local_res10;
  
  (this->CurPair).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  *(undefined8 *)&this->Cur = 0;
  *(undefined4 *)&(this->Cur).field_0x8 = 0;
  *(undefined8 *)&this->End = 0;
  *(undefined4 *)&(this->End).field_0x8 = 0;
  *(undefined8 *)&this->PairFunc = 0;
  *(undefined8 *)&(this->PairFunc).field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->Cur = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Cur).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->Cur).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->Cur).field_0x18 = uVar4;
  *(undefined8 *)&(this->Cur).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->End = *(undefined8 *)param_2;
  *(undefined8 *)&(this->End).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->End).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->End).field_0x18 = uVar4;
  *(undefined8 *)&(this->End).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=(&this->PairFunc,param_3);
  this->CurPairI = 0;
  while( true ) {
    while( true ) {
      if ((((*(longlong *)&this->Cur == *(longlong *)&this->End) &&
           (*(int *)&(this->Cur).field_0x8 == *(int *)&(this->End).field_0x8)) &&
          (*(int *)&(this->Cur).field_0x18 == *(int *)&(this->End).field_0x18)) &&
         (*(int *)&(this->Cur).field_0x1c == *(int *)&(this->End).field_0x1c)) {
        return this;
      }
      if (this->CurPairI == 0) break;
      if ((this->CurPairI == 1) &&
         (uVar1 = (this->CurPair).field0_0x0._s_0.B, FVar5._s_0.B = 0, FVar5._s_0.A = uVar1,
         -1 < (int)uVar1)) {
        this->CurPairI = 2;
        goto LAB_1433662ba;
      }
      this->CurPairI = 0;
      FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)this);
    }
    local_res8[0] = *(undefined4 *)&(this->Cur).field_0x20;
    Core::Private::Function::CheckCallable(*(void **)&this->PairFunc);
    plVar2 = *(longlong **)&(this->PairFunc).field_0x28;
    pcVar3 = *(code **)&this->PairFunc;
    plVar6 = (longlong *)&(this->PairFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(&local_res10,uVar4,local_res8);
    (this->CurPair).field0_0x0._s_0 = (FIndex2i_u_0_s_0)local_res10;
    if (-1 < local_res10._s_0.A) break;
    this->CurPairI = 0;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)this);
  }
  this->CurPairI = 1;
  FVar5 = local_res10;
LAB_1433662ba:
  this->CurValue = FVar5._s_0.A;
  return this;
}

// goto_next @ 1433f8200

void __thiscall
UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
          (TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  FIndex2i_u_0 local_res10;
  
  do {
    if ((((*(longlong *)&this->Cur == *(longlong *)&this->End) &&
         (*(int *)&(this->Cur).field_0x8 == *(int *)&(this->End).field_0x8)) &&
        (*(int *)&(this->Cur).field_0x18 == *(int *)&(this->End).field_0x18)) &&
       (*(int *)&(this->Cur).field_0x1c == *(int *)&(this->End).field_0x1c)) {
      return;
    }
    if (this->CurPairI == 0) {
      local_res8[0] = *(undefined4 *)&(this->Cur).field_0x20;
      Core::Private::Function::CheckCallable(*(void **)&this->PairFunc);
      plVar2 = *(longlong **)&(this->PairFunc).field_0x28;
      pcVar3 = *(code **)&this->PairFunc;
      plVar5 = (longlong *)&(this->PairFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(&local_res10,uVar4,local_res8);
      (this->CurPair).field0_0x0._s_0 = (FIndex2i_u_0_s_0)local_res10;
      if (-1 < local_res10._s_0.A) {
        this->CurPairI = 1;
        this->CurValue = local_res10._s_0.A;
        return;
      }
    }
    else if ((this->CurPairI == 1) && (iVar1 = (this->CurPair).field0_0x0._s_0.B, -1 < iVar1)) {
      this->CurPairI = 2;
      this->CurValue = iVar1;
      return;
    }
    this->CurPairI = 0;
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)this);
  } while( true );
}

