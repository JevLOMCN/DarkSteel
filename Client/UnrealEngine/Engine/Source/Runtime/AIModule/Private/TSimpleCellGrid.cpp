// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 5

// operator[] @ 146f976e0

uchar * __thiscall
TSimpleCellGrid<unsigned_char,255>::operator[](TSimpleCellGrid<unsigned_char,255> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Cells).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return (uchar *)((this->Cells).AllocatorInstance.Data + param_1);
}

// GetCellCoordsUnsafe @ 146fac390

TIntVector3<int> * __thiscall
TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
          (TSimpleCellGrid<unsigned_char,255> *this,TIntVector3<int> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntVector3<int> *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = (longlong)
          (((param_1->field0_0x0)._s_0.Y - (this->Origin).field0_0x0._s_0.Y) /
          (double)this->GridCellSize);
  iVar4 = (int)lVar5;
  if (lVar5 != iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  lVar5 = (longlong)
          (((param_1->field0_0x0)._s_0.X - (this->Origin).field0_0x0._s_0.X) /
          (double)this->GridCellSize);
  iVar6 = (int)lVar5;
  if (lVar5 != iVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// GetCellIndex @ 146fac480

int __thiscall
TSimpleCellGrid<unsigned_char,255>::GetCellIndex
          (TSimpleCellGrid<unsigned_char,255> *this,TVector<double> *param_1)

{
  uint uVar1;
  TIntVector3<int>_u_0 local_18;
  
  GetCellCoordsUnsafe(this,(TIntVector3<int> *)&local_18._s_0,param_1);
  if ((((-1 < local_18._s_0.X) && (local_18._s_0.X < (int)(this->GridSize).Width)) &&
      (-1 < local_18._s_0.Y)) && (uVar1 = (this->GridSize).Height, local_18._s_0.Y < (int)uVar1)) {
    return uVar1 * local_18._s_0.X + local_18._s_0.Y;
  }
  return -1;
}

// Init @ 146fb83b0

bool __thiscall
TSimpleCellGrid<unsigned_char,255>::Init
          (TSimpleCellGrid<unsigned_char,255> *this,float param_1,TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  FGridSize2D FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined1 local_res10 [16];
  uint local_res20;
  uint uStackX_24;
  undefined7 uStack_6f;
  
  if ((param_1 <= 0.0) || (param_2->IsValid == '\0')) {
    bVar9 = false;
  }
  else {
    this->GridCellSize = param_1;
    dVar15 = __real_bfe0000000000000;
    dVar14 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
    dVar6 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
    dVar5 = __real_3ff0000000000000 / (double)param_1;
    dVar1 = (param_2->Max).field0_0x0._s_0.Z;
    dVar2 = (param_2->Min).field0_0x0._s_0.Z;
    uVar10 = IntCastChecked<unsigned_int,__int64>
                       (-((longlong)ROUND(__real_bfe0000000000000 - (dVar14 + dVar14) * dVar5) >> 1)
                       );
    local_res20 = IntCastChecked<unsigned_int,__int64>
                            (-((longlong)ROUND(dVar15 - (dVar6 + dVar6) * dVar5) >> 1));
    FVar8.Height = uVar10;
    FVar8.Width = local_res20;
    this->GridSize = FVar8;
    dVar6 = __real_3fe0000000000000;
    uVar12 = uVar10 * local_res20;
    (this->BoundsSize).field0_0x0._s_0.X = (double)((float)local_res20 * param_1);
    (this->BoundsSize).field0_0x0._s_0.Y = (double)((float)uVar10 * param_1);
    (this->BoundsSize).field0_0x0._s_0.Z = dVar1 - dVar2;
    dVar1 = (param_2->Max).field0_0x0._s_0.Z;
    dVar2 = (param_2->Min).field0_0x0._s_0.Z;
    dVar5 = (param_2->Min).field0_0x0._s_0.Y;
    (this->Origin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    (this->Origin).field0_0x0._s_0.Y = dVar5;
    dVar14 = (dVar1 + dVar2) * dVar6;
    (this->Origin).field0_0x0._s_0.Z = dVar14;
    dVar15 = (this->Origin).field0_0x0._s_0.X + (this->BoundsSize).field0_0x0._s_0.X;
    dVar1 = (this->BoundsSize).field0_0x0._s_0.Y;
    dVar6 = (this->BoundsSize).field0_0x0._s_0.Z * dVar6;
    uVar7 = *(undefined4 *)((longlong)&(this->Origin).field0_0x0 + 4);
    *(undefined4 *)&(this->WorldBounds).Min.field0_0x0 = *(undefined4 *)&(this->Origin).field0_0x0;
    *(undefined4 *)((longlong)&(this->WorldBounds).Min.field0_0x0 + 4) = uVar7;
    *(int *)((longlong)&(this->WorldBounds).Min.field0_0x0 + 8) = SUB84(dVar5,0);
    *(int *)((longlong)&(this->WorldBounds).Min.field0_0x0 + 0xc) = (int)((ulonglong)dVar5 >> 0x20);
    dVar2 = dVar6 + dVar14;
    auVar4._8_4_ = SUB84(dVar15,0);
    auVar4._0_8_ = dVar14 - dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->WorldBounds).Min.field0_0x0 + 0x10) = auVar4;
    auVar3._8_4_ = SUB84(dVar2,0);
    auVar3._0_8_ = dVar5 + dVar1;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->WorldBounds).Max.field0_0x0 + 8) = auVar3;
    (this->WorldBounds).IsValid = 1;
    (this->WorldBounds).Pad[0] = (char)uStack_6f;
    (this->WorldBounds).Pad[1] = (char)((uint7)uStack_6f >> 8);
    (this->WorldBounds).Pad[2] = (char)((uint7)uStack_6f >> 0x10);
    (this->WorldBounds).Pad[3] = (char)((uint7)uStack_6f >> 0x18);
    (this->WorldBounds).Pad[4] = (char)((uint7)uStack_6f >> 0x20);
    (this->WorldBounds).Pad[5] = (char)((uint7)uStack_6f >> 0x28);
    (this->WorldBounds).Pad[6] = (char)((uint7)uStack_6f >> 0x30);
    uVar13 = 0x7fffffff;
    if ((ulonglong)uVar12 < 0x7fffffff) {
      uVar13 = uVar12;
    }
    uStackX_24 = uVar10;
    if ((longlong)(int)uVar13 != (ulonglong)uVar12) {
      `TSimpleCellGrid<unsigned_char,255>::Init'::__l2::<lambda_1>::operator()(local_res10);
    }
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar13,&(this->Cells).AllocatorInstance,&(this->Cells).ArrayNum,
                        &(this->Cells).ArrayMax);
    memset((this->Cells).AllocatorInstance.Data + iVar11,0,(longlong)(int)uVar13);
    bVar9 = true;
  }
  return bVar9;
}

// operator() @ 1504ffd80

bool __thiscall `TSimpleCellGrid<unsigned_char,255>::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3926967840879411129>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3926967840879411129>,
                       &`public:___cdecl_`public:_bool___cdecl_TSimpleCellGrid<unsigned_char,255>::Init(float,UE::Math::TBox<double>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

