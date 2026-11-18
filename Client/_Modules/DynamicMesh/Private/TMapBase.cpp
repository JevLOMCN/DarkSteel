// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 16

// Emplace<int_const_&,UE::Geometry::TQuadricError<double>_> @ 14c6cb1d0

TQuadricError<double> * __thiscall
TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
::Emplace<int_const_&,UE::Geometry::TQuadricError<double>_>
          (TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
           *this,int *param_1,TQuadricError<double> *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    dVar4 = param_2->Axy;
    *(double *)((longlong)local_28.Pointer + 8) = param_2->Axx;
    *(double *)((longlong)local_28.Pointer + 0x10) = dVar4;
    dVar4 = param_2->Ayy;
    *(double *)((longlong)local_28.Pointer + 0x18) = param_2->Axz;
    *(double *)((longlong)local_28.Pointer + 0x20) = dVar4;
    dVar4 = param_2->Azz;
    *(double *)((longlong)local_28.Pointer + 0x28) = param_2->Ayz;
    *(double *)((longlong)local_28.Pointer + 0x30) = dVar4;
    dVar4 = param_2->by;
    *(double *)((longlong)local_28.Pointer + 0x38) = param_2->bx;
    *(double *)((longlong)local_28.Pointer + 0x40) = dVar4;
    dVar4 = param_2->c;
    *(double *)((longlong)local_28.Pointer + 0x48) = param_2->bz;
    *(double *)((longlong)local_28.Pointer + 0x50) = dVar4;
    *(undefined4 *)((longlong)local_28.Pointer + 0x58) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_28.Pointer;
  if ((iVar6 - iVar1 != 1) && (iVar6 != iVar1)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)((longlong)iVar6 * 0x60 + lVar3) == uVar2) {
          if (iVar6 != -1) {
            memmove((void *)((longlong)iVar6 * 0x60 + lVar3),local_28.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14c6cb2d9;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + 0x58 + lVar3);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14c6cb2d9:
  return (TQuadricError<double> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)iVar6 * 0x60);
}

// Find @ 14c730bd0

TQuadricError<double> * __thiscall
TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
::Find(TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  TQuadricError<double> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pTVar3 = (TQuadricError<double> *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TQuadricError<double> *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  return (TQuadricError<double> *)0x0;
}

// Find @ 14c730c40

FInterpCurveVector * __thiscall
TMapBase<UE::Geometry::FIndex2i,FInterpCurveVector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,FInterpCurveVector,0>_>
::Find(TMapBase<UE::Geometry::FIndex2i,FInterpCurveVector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,FInterpCurveVector,0>_>
       *this,FIndex2i *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  FInterpCurveVector *pFVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,8,0);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x28;
        if ((*(int *)(lVar2 + (longlong)iVar6 * 0x28) == (param_1->field0_0x0)._s_0.A) &&
           (*(int *)(lVar1 + 4) == (param_1->field0_0x0)._s_0.B)) {
          if (iVar6 == -1) {
            return (FInterpCurveVector *)0x0;
          }
          pFVar4 = (FInterpCurveVector *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FInterpCurveVector *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  return (FInterpCurveVector *)0x0;
}

// FindChecked @ 14c7311a0

int * __thiscall
TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
::FindChecked(TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
              *this,TTuple<int,int> *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  uVar2 = *(uint *)param_1;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 * 0x40 + *(int *)&param_1->field_0x4 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2)
                    ) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar8 * 0x14;
        if ((*(uint *)(lVar3 + (longlong)iVar8 * 0x14) == uVar2) &&
           (*(int *)(lVar1 + 4) == *(int *)&param_1->field_0x4)) {
          if ((iVar8 != -1) && (lVar1 != 0)) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (int *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  piVar6 = (int *)(*pcVar4)();
  return piVar6;
}

// Remove @ 14c75bf50

int __thiscall
TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
::Remove(TMapBase<int,UE::Geometry::TQuadricError<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>_>
         *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res10[0] = param_1;
    iVar1 = TSet<TTuple<int,UE::Geometry::TQuadricError<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TQuadricError<double>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>(&this->Pairs,param_1,local_res10);
    return iVar1;
  }
  return 0;
}

// FindChecked @ 14c806600

double * __thiscall
TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::FindChecked
          (TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
           *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (double *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (double *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pdVar6 = (double *)(*pcVar3)();
  return pdVar6;
}

// FindChecked @ 14c8066a0

TTuple<int,UE::Math::TVector2<float>_> * __thiscall
TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
::FindChecked(TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<int,UE::Math::TVector2<float>_> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TTuple<int,UE::Math::TVector2<float>_> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TTuple<int,UE::Math::TVector2<float>_> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TTuple<int,UE::Math::TVector2<float>_> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14c806740

FIndex2i * __thiscall
TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
::FindChecked(TMapBase<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FIndex2i *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FIndex2i *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FIndex2i *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FIndex2i *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14c8067e0

FIndex2i * __thiscall
TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
::FindChecked(TMapBase<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i,0>_>
              *this,FIndex2i *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIndex2i *pFVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  uVar5 = FCrc::MemCrc_DEPRECATED(param_1,8,0);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar8 * 0x18;
        if ((*(int *)(lVar2 + (longlong)iVar8 * 0x18) == (param_1->field0_0x0)._s_0.A) &&
           (*(int *)(lVar1 + 4) == (param_1->field0_0x0)._s_0.B)) {
          if ((iVar8 != -1) && (lVar1 != 0)) {
            return (FIndex2i *)(lVar1 + 8);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FIndex2i *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FIndex2i *)(*pcVar3)();
  return pFVar6;
}

// Emplace<int_const_&,UE::Solvers::FPositionConstraint_const_&> @ 14c868ee0

FPositionConstraint * __thiscall
TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
::Emplace<int_const_&,UE::Solvers::FPositionConstraint_const_&>
          (TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
           *this,int *param_1,FPositionConstraint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    dVar4 = (param_2->Position).field0_0x0._s_0.X;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(double *)((longlong)local_28.Pointer + 0x10) = dVar4;
    dVar4 = (param_2->Position).field0_0x0._s_0.Z;
    *(double *)((longlong)local_28.Pointer + 0x18) = (param_2->Position).field0_0x0._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x20) = dVar4;
    dVar4 = param_2->Weight;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->bPostFix;
    *(double *)((longlong)local_28.Pointer + 0x30) = dVar4;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FPositionConstraint *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// Emplace<int,UE::Solvers::FPositionConstraint> @ 14c869230

FPositionConstraint * __thiscall
TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
::Emplace<int,UE::Solvers::FPositionConstraint>
          (TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
           *this,int *param_1,FPositionConstraint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    dVar4 = (param_2->Position).field0_0x0._s_0.X;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(double *)((longlong)local_28.Pointer + 0x10) = dVar4;
    dVar4 = (param_2->Position).field0_0x0._s_0.Z;
    *(double *)((longlong)local_28.Pointer + 0x18) = (param_2->Position).field0_0x0._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x20) = dVar4;
    dVar4 = param_2->Weight;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->bPostFix;
    *(double *)((longlong)local_28.Pointer + 0x30) = dVar4;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (FPositionConstraint *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// FindOrAddImpl<UE::Geometry::FVector2i_const_&> @ 14c86da20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UE::Geometry::FVector2i_const_&>
          (TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FVector2i *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FVector2i *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->field0_0x0)._s_0.X) && (piVar1[1] == (param_2->field0_0x0)._s_0.Y)
           ) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Geometry::FVector2i_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Geometry::FVector2i_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14c86e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar17 = 0;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar10 == 0) goto LAB_14c86e620;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_120 = (undefined4)lVar20;
    uVar11 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_14c86e620;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14c86e47c;
      }
    }
    else {
LAB_14c86e47c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
      uVar9 = uVar17;
      do {
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar7.Data + uVar6 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar9 = uVar17;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar10 = *(uint *)FVar18;
      uVar16 = uVar17;
      while (uVar10 == 0) {
        uStack_150 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_150;
        iVar5 = (int)uVar9;
        local_168 = iVar5 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14c86e580;
        uVar10 = ((uint *)((longlong)FVar18 + 4))[iVar5];
      }
      uStack_164 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_11c = (int)lVar20;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14c86e580:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        pvVar12 = (void *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar10 = FCrc::MemCrc_DEPRECATED(pvVar12,8,0);
        uVar10 = local_50 - 1 & uVar10;
        *(uint *)((longlong)pvVar12 + 0xc) = uVar10;
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)((longlong)pvVar12 + 8) = *(undefined4 *)(FVar7.Data + uVar16 * 4);
        *(int *)(FVar7.Data + uVar16 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14c86e620:
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar10 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_c8 = 0;
  uVar9 = uVar17;
  uStack_dc = 1;
  if (uVar10 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar9 = (ulonglong)uVar10;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar11 = *puVar19;
    uVar16 = uVar17;
    local_c8 = uVar15;
    uVar15 = 0;
    while (uVar11 == 0) {
      iVar5 = (int)uVar17;
      local_c8 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)local_c8;
      uVar15 = iVar5 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14c86e6ce;
      uVar11 = puVar19[(longlong)iVar5 + 1];
    }
    uStack_dc = -uVar11 & uVar11;
    uVar17 = (ulonglong)uStack_dc * 2 + 1;
    lVar20 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_118 = (int)lVar20;
    uVar11 = (local_c8 - 1) + local_118;
    if ((int)uVar10 < (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar9 = (ulonglong)uVar11;
  }
LAB_14c86e6ce:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar9;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar15);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar15;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar10) {
    do {
      lVar20 = (longlong)(int)uVar9 * 0x20;
      piVar13 = (int *)(*(longlong *)&(this->Pairs).Elements + lVar20);
      uVar15 = FCrc::MemCrc_DEPRECATED(piVar13,8,0);
      if (local_98._8_4_ != local_64) {
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        iVar5 = *(int *)(FVar7.Data + (ulonglong)(local_50 - 1 & uVar15) * 4);
        if (iVar5 != -1) {
          do {
            lVar8 = (longlong)iVar5;
            if ((*(int *)(local_98._0_8_ + lVar8 * 0x10) == *piVar13) &&
               (*(int *)(local_98._0_8_ + lVar8 * 0x10 + 4) == piVar13[1])) {
              if (iVar5 != -1) goto LAB_14c86e84c;
              break;
            }
            iVar5 = *(int *)(local_98._0_8_ + lVar8 * 0x10 + 8);
          } while (iVar5 != -1);
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20);
      if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar14;
      TSet<UE::Geometry::FVector2i,DefaultKeyFuncs<UE::Geometry::FVector2i,0>,FDefaultSetAllocator>
      ::Emplace<UE::Geometry::FVector2i_const_&>
                ((TSet<UE::Geometry::FVector2i,DefaultKeyFuncs<UE::Geometry::FVector2i,0>,FDefaultSetAllocator>
                  *)local_98,(FVector2i *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14c86e84c:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar9 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar5 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UE::Geometry::FVector2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Geometry::FVector2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Geometry::FVector2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar5;
}

// Find @ 14c8e5df0

FPositionConstraint * __thiscall
TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
::Find(TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FPositionConstraint *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FPositionConstraint *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FPositionConstraint *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (FPositionConstraint *)0x0;
}

// Find @ 14c8e5e50

TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
* __thiscall
TMapBase<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,0>_>
::Find(void *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
  *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)this);
        if ((void *)*plVar2 == param_1) {
          pTVar4 = (TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
                    *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
                      *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
          *)0x0;
}

// Find @ 14c8e5ef0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *this,FVector2i *param_1)

{
  uint uVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,8,0);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == (param_1->field0_0x0)._s_0.X) && (piVar2[1] == (param_1->field0_0x0)._s_0.Y)
           ) {
          if (iVar5 == -1) {
            return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
          pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar5 = piVar2[6];
      } while (iVar5 != -1);
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

