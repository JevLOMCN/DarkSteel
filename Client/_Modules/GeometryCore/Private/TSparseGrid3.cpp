// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// FreeAll @ 1433a1980

void __thiscall UE::Geometry::TSparseGrid3<unsigned_int>::FreeAll(TSparseGrid3<unsigned_int> *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1433a1a1d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1433a1a1d:
  uVar10 = *(uint *)&(this->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1433a1b20;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1433a1b20:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_30
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 +
                                *(longlong *)&this->Elements),4);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
           *)this);
  return;
}

// operator= @ 1435e4d80

TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Geometry::TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_>::operator=
          (TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  undefined1 *puVar1;
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar2;
  undefined8 uVar3;
  
  if (this != param_1) {
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    puVar1 = &(param_1->Elements).field_0xc;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Src = &(param_1->Elements).field_0x10;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)puVar1;
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    *(undefined4 *)puVar1 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar2 = *(void **)&(this->Elements).field_0x20;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    if (*(longlong *)&(param_1->Elements).field_0x40 == 0) {
      *(undefined4 *)&(this->Elements).field_0x38 = *(undefined4 *)&(param_1->Elements).field_0x38;
    }
    pvVar2 = *(void **)&(this->Elements).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    *(undefined8 *)&(this->Elements).field_0x40 = *(undefined8 *)&(param_1->Elements).field_0x40;
    *(undefined8 *)&(param_1->Elements).field_0x40 = 0;
    *(undefined4 *)&(this->Elements).field_0x48 = *(undefined4 *)&(param_1->Elements).field_0x48;
    *(undefined4 *)&(param_1->Elements).field_0x48 = 0;
    uVar3 = *(undefined8 *)((longlong)&(param_1->Bounds).Min.field0_0x0 + 8);
    *(undefined8 *)&(this->Bounds).Min.field0_0x0 = *(undefined8 *)&(param_1->Bounds).Min.field0_0x0
    ;
    *(undefined8 *)((longlong)&(this->Bounds).Min.field0_0x0 + 8) = uVar3;
    *(undefined8 *)((longlong)&(this->Bounds).Max.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(param_1->Bounds).Max.field0_0x0 + 4);
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                        *)param_1);
      *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
      if (*(int *)puVar1 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)param_1,0,(int *)puVar1);
      }
      *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
    }
    return this;
  }
  return this;
}

// FreeAll @ 1436036a0

void __thiscall
UE::Geometry::TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_>::FreeAll
          (TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar4 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14360373d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14360373d:
  uVar11 = *(uint *)&(this->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Elements).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143603840;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_143603840:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_30
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar3 = *(undefined8 **)
              ((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->Elements);
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x10);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
           *)this);
  return;
}

// Get @ 1436063e0

uint * __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::Get
          (TSparseGrid3<unsigned_int> *this,FVector3i *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint *local_res20;
  FVector3i *local_18;
  uint **local_10;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  iVar2 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Geometry::FVector3i>
                    ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,param_1);
  if (((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->Elements, lVar3 == 0))
     || (puVar4 = *(uint **)(lVar3 + 0x10), puVar4 == (uint *)0x0)) {
    if (param_2) {
      local_res20 = ::operator_new(4);
      if (local_res20 != (uint *)0x0) {
        *local_res20 = 0;
      }
      local_10 = &local_res20;
      local_18 = param_1;
      TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,unsigned_int_*_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<UE::Geometry::FVector3i_const_&,unsigned_int_*_const_&> *
                         )&stack0x00000008,(bool *)&local_18);
      iVar2 = (param_1->field0_0x0)._s_0.X;
      if (iVar2 < (this->Bounds).Min.field0_0x0._s_0.X) {
        (this->Bounds).Min.field0_0x0._s_0.X = iVar2;
      }
      iVar2 = (param_1->field0_0x0)._s_0.X;
      if ((this->Bounds).Max.field0_0x0._s_0.X < iVar2) {
        (this->Bounds).Max.field0_0x0._s_0.X = iVar2;
      }
      iVar2 = (param_1->field0_0x0)._s_0.Y;
      if (iVar2 < (this->Bounds).Min.field0_0x0._s_0.Y) {
        (this->Bounds).Min.field0_0x0._s_0.Y = iVar2;
      }
      iVar2 = (param_1->field0_0x0)._s_0.Y;
      if ((this->Bounds).Max.field0_0x0._s_0.Y < iVar2) {
        (this->Bounds).Max.field0_0x0._s_0.Y = iVar2;
      }
      iVar2 = (param_1->field0_0x0)._s_0.Z;
      if (iVar2 < (this->Bounds).Min.field0_0x0._s_0.Z) {
        (this->Bounds).Min.field0_0x0._s_0.Z = iVar2;
      }
      iVar2 = (param_1->field0_0x0)._s_0.Z;
      if ((this->Bounds).Max.field0_0x0._s_0.Z < iVar2) {
        (this->Bounds).Max.field0_0x0._s_0.Z = iVar2;
      }
      return local_res20;
    }
    puVar4 = (uint *)0x0;
  }
  return puVar4;
}

