// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 9

// ~FFauxSlateCursor @ 1426aa9f0

void __thiscall FFauxSlateCursor::~FFauxSlateCursor(FFauxSlateCursor *this)

{
  this->_padding_ = (longlong)&___7FFauxSlateCursor__6B_;
  return;
}

// GetPosition @ 1426beab0

TVector2<double> * __thiscall
FFauxSlateCursor::GetPosition(FFauxSlateCursor *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->CurrentPosition).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CurrentPosition).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetSize @ 1426bf1c0

void __thiscall FFauxSlateCursor::GetSize(FFauxSlateCursor *this,int *param_1,int *param_2)

{
  *param_2 = 0x20;
  *param_1 = 0x20;
  return;
}

// GetType @ 1426bfa20

Type __thiscall FFauxSlateCursor::GetType(FFauxSlateCursor *this)

{
  return this->CurrentType;
}

// Lock @ 1426c33b0

void __thiscall FFauxSlateCursor::Lock(FFauxSlateCursor *this,tagRECT *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double local_18;
  double local_10;
  
  if (param_1 == (tagRECT *)0x0) {
    (this->CursorClipRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->CursorClipRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    *(long *)&(this->CursorClipRect).field0_0x0 = param_1->left;
    *(long *)((longlong)&(this->CursorClipRect).field0_0x0 + 4) = param_1->top;
    *(long *)((longlong)&(this->CursorClipRect).field0_0x0 + 8) = param_1->right + -1;
    *(long *)((longlong)&(this->CursorClipRect).field0_0x0 + 0xc) = param_1->bottom + -1;
  }
  (**(code **)(this->_padding_ + 0x20))();
  iVar1 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 8);
  bVar5 = false;
  iVar2 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 0xc);
  iVar3 = *(int *)&(this->CursorClipRect).field0_0x0;
  iVar4 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 4);
  if (0 < (iVar2 - iVar4) * (iVar1 - iVar3)) {
    dVar6 = (double)iVar3;
    if ((local_18 < dVar6) || (dVar6 = (double)iVar1, dVar6 < local_18)) {
      local_18 = dVar6;
      bVar5 = true;
    }
    dVar6 = (double)iVar4;
    if (((local_10 < dVar6) || (dVar6 = (double)iVar2, dVar6 < local_10)) ||
       (dVar6 = local_10, bVar5)) {
      (**(code **)(this->_padding_ + 0x28))(this,(int)local_18,(int)dVar6);
    }
  }
  return;
}

// SetPosition @ 1426dcbd0

void __thiscall FFauxSlateCursor::SetPosition(FFauxSlateCursor *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 4);
  iVar2 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 0xc);
  iVar3 = *(int *)&(this->CursorClipRect).field0_0x0;
  iVar4 = *(int *)((longlong)&(this->CursorClipRect).field0_0x0 + 8);
  dVar8 = (double)param_2;
  dVar5 = (double)param_1;
  dVar6 = dVar8;
  if (0 < (iVar2 - iVar1) * (iVar4 - iVar3)) {
    dVar6 = (double)iVar3;
    if ((dVar6 <= dVar5) && (dVar7 = (double)iVar4, dVar6 = dVar5, dVar7 < dVar5)) {
      dVar6 = dVar7;
    }
    dVar5 = dVar6;
    dVar6 = (double)iVar1;
    if ((dVar6 <= dVar8) && (dVar7 = (double)iVar2, dVar6 = dVar8, dVar7 < dVar8)) {
      dVar6 = dVar7;
    }
  }
  (this->CurrentPosition).field0_0x0._s_0.X = dVar5;
  (this->CurrentPosition).field0_0x0._s_0.Y = dVar6;
  return;
}

// SetType @ 1426dcc80

void __thiscall FFauxSlateCursor::SetType(FFauxSlateCursor *this,Type param_1)

{
  this->CurrentType = param_1;
  return;
}

// SetTypeShape @ 1426dcc90

void __thiscall FFauxSlateCursor::SetTypeShape(FFauxSlateCursor *this,Type param_1,void *param_2)

{
  return;
}

// Show @ 1426df080

void __thiscall FFauxSlateCursor::Show(FFauxSlateCursor *this,bool param_1)

{
  this->bIsVisible = param_1;
  return;
}

