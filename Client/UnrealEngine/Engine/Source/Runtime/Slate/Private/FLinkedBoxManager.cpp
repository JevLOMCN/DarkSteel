// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FLinkedBoxManager @ 142a17da0

FLinkedBoxManager * __thiscall FLinkedBoxManager::FLinkedBoxManager(FLinkedBoxManager *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SlateApplicationDrawIdLastCached = 0;
  (this->CachedUniformSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)&(this->Siblings).Elements = 0;
  *(undefined8 *)&(this->Siblings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Siblings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Siblings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Siblings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Siblings).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Siblings).Elements.field_0x30 = 0xffffffff;
  (this->Siblings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Siblings).HashSize = 0;
  return this;
}

// ~FLinkedBoxManager @ 142a18ca0

void __thiscall FLinkedBoxManager::~FLinkedBoxManager(FLinkedBoxManager *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong *plVar4;
  
  (this->Siblings).HashSize = 0;
  FVar3 = (this->Siblings).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<SLinkedBox_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<SLinkedBox_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Siblings).Elements);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// GetUniformCellSize @ 142a2b710

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FLinkedBoxManager::GetUniformCellSize
          (FLinkedBoxManager *this,TVector2<double> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  FSlateApplication *this_00;
  TVector2<double> *pTVar19;
  FDeprecateSlateVector2D FVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  uint *puVar27;
  undefined1 local_res8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  
  this_00 = FSlateApplication::Get();
  uVar16 = FSlateApplication::GetCurrentDrawId(this_00);
  uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  if (this->SlateApplicationDrawIdLastCached == uVar16) {
    local_e0 = *(undefined4 *)&(this->CachedUniformSize).field0_0x0;
    uStack_dc = *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 4);
    uStack_d8 = *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 8);
    uStack_d4 = *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 0xc);
  }
  else {
    iVar3 = *(int *)&(this->Siblings).Elements.field_0x28;
    iVar24 = 0;
    uVar17 = 1;
    iVar26 = 0;
    puVar1 = &(this->Siblings).Elements.field_0x10;
    iVar18 = 0;
    if (iVar3 != 0) {
      puVar27 = *(uint **)&(this->Siblings).Elements.field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)puVar1;
      }
      uVar23 = *puVar27;
      while (uVar23 == 0) {
        lVar21 = (longlong)iVar24;
        iVar26 = iVar26 + 0x20;
        iVar24 = iVar24 + 1;
        iVar18 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_142a2b81d;
        uVar23 = puVar27[lVar21 + 1];
      }
      uVar17 = -uVar23 & uVar23;
      uVar2 = (ulonglong)uVar17 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar18 = iVar26 + -1 + (int)lVar21;
      if (iVar3 < iVar18) {
        iVar18 = iVar3;
      }
    }
LAB_142a2b81d:
    uVar23 = *(uint *)&(this->Siblings).Elements.field_0x28;
    uVar22 = uVar23 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar17,iVar24);
    TStack_98.CurrentBitIndex = iVar18;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar23 >> 5;
    TStack_98._28_4_ = iVar18;
    TStack_98.BaseBitIndex = iVar26;
    uStack_78 = CONCAT44(uStack_a4,
                         *(int *)&(this->Siblings).Elements.field_0x8 -
                         *(int *)&(this->Siblings).Elements.field_0x34);
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar4)();
      return pTVar19;
    }
    uVar17 = *(uint *)&(this->Siblings).Elements.field_0x28;
    if (uVar23 != uVar17) {
      puVar25 = *(undefined1 **)&(this->Siblings).Elements.field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar24 * 4);
      while (uVar23 == 0) {
        lVar21 = (longlong)iVar24;
        uVar22 = uVar22 + 0x20;
        iVar24 = iVar24 + 1;
        uVar23 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_142a2b940;
        uVar23 = *(uint *)(puVar25 + lVar21 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar23 = (int)lVar21 + -1 + uVar22;
      if ((int)uVar17 < (int)uVar23) {
        uVar23 = uVar17;
      }
    }
LAB_142a2b940:
    while( true ) {
      if (*(int *)&(this->Siblings).Elements.field_0x8 -
          *(int *)&(this->Siblings).Elements.field_0x34 != (int)uStack_78) {
        `TSparseArray<TSparseSetElement<SLinkedBox_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_98.CurrentBitIndex == uVar23) &&
         (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar21 = *(longlong *)
                (*(longlong *)&(this->Siblings).Elements +
                (longlong)TStack_98.CurrentBitIndex * 0x10);
      dVar7 = (double)uVar10;
      dVar8 = (double)uVar9;
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar21 + 0x39) !=
          EVisibility::Collapsed.Value.Value) {
        SWidget::SlatePrepass(*(SWidget **)(lVar21 + 0x248));
        uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
        uVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
        if ((TEnumAsByte<EVisibility::Private>)
            *(uchar *)&(*(SWidget **)(lVar21 + 0x248))->VisibilityAttribute !=
            EVisibility::Collapsed.Value.Value) {
          fVar11 = *(float *)(lVar21 + 600);
          fVar12 = *(float *)(lVar21 + 0x25c);
          fVar13 = *(float *)(lVar21 + 0x260);
          fVar14 = *(float *)(lVar21 + 0x264);
          FVar20 = SWidget::GetDesiredSize(*(SWidget **)(lVar21 + 0x248));
          uVar5 = (double)(fVar13 + fVar11 + *(float *)FVar20);
          uVar6 = (double)(fVar14 + fVar12 + *(float *)((longlong)FVar20 + 4));
        }
        if (((double)uVar5 != 0.0) || ((double)uVar6 != 0.0)) {
          dVar7 = (double)uVar5;
          if ((double)uVar5 <= (double)uVar10) {
            dVar7 = (double)uVar10;
          }
          dVar8 = (double)uVar6;
          if ((double)uVar6 <= (double)uVar9) {
            dVar8 = (double)uVar9;
          }
        }
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
      uVar9 = dVar8;
      uVar10 = dVar7;
    }
    local_e0 = (undefined4)uVar10;
    uStack_dc = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_d8 = (undefined4)uVar9;
    uStack_d4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    this->SlateApplicationDrawIdLastCached = uVar16;
    *(undefined4 *)&(this->CachedUniformSize).field0_0x0 = local_e0;
    *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 4) = uStack_dc;
    *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 8) = uStack_d8;
    *(undefined4 *)((longlong)&(this->CachedUniformSize).field0_0x0 + 0xc) = uStack_d4;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_e0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uStack_dc;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_d8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uStack_d4;
  return __return_storage_ptr__;
}

// RegisterLinkedBox @ 142a35170

void __thiscall FLinkedBoxManager::RegisterLinkedBox(FLinkedBoxManager *this,SLinkedBox *param_1)

{
  SLinkedBox *local_res8;
  SLinkedBox *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<SLinkedBox_*,DefaultKeyFuncs<SLinkedBox_*,0>,FDefaultSetAllocator>::
  Emplace<SLinkedBox_*_const_&>(&this->Siblings,&local_res8,(bool *)local_res10);
  return;
}

// UnregisterLinkedBox @ 142a37e20

void __thiscall FLinkedBoxManager::UnregisterLinkedBox(FLinkedBoxManager *this,SLinkedBox *param_1)

{
  TSet<SLinkedBox_*,DefaultKeyFuncs<SLinkedBox_*,0>,FDefaultSetAllocator>::Remove
            (&this->Siblings,param_1);
  return;
}

