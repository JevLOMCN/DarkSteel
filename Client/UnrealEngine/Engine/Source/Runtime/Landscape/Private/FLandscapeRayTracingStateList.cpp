// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~FLandscapeRayTracingStateList @ 145f7d8e0

void __thiscall
FLandscapeRayTracingStateList::~FLandscapeRayTracingStateList(FLandscapeRayTracingStateList *this)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  uVar6 = 1;
  iVar13 = 0;
  uVar14 = LandscapeRenderSystems._40_4_;
  uVar7 = 0;
  if (uVar14 != 0) {
    puVar15 = (uint *)&LandscapeRenderSystems.field_0x10;
    if (LandscapeRenderSystems._32_8_ != 0) {
      puVar15 = (uint *)LandscapeRenderSystems._32_8_;
    }
    uVar7 = *puVar15;
    while (uVar7 == 0) {
      lVar8 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar7 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_145f7d98d;
      uVar7 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar16 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar7 = iVar13 + -1 + local_res20;
    if ((int)uVar14 < (int)uVar7) {
      uVar7 = uVar14;
    }
  }
LAB_145f7d98d:
  bVar4 = LandscapeRenderSystems._40_1_;
  uVar11 = uVar14 & 0xffffffe0;
  uVar16 = LandscapeRenderSystems._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,LandscapeRenderSystems._8_4_ - LandscapeRenderSystems._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10;
  if (((int)uVar14 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = LandscapeRenderSystems._40_4_;
  if (uVar14 != uVar7) {
    uVar16 = LandscapeRenderSystems._40_8_ & 0xffffffff;
    lVar8 = 0x154beda00;
    if (LandscapeRenderSystems._32_8_ != 0) {
      lVar8 = LandscapeRenderSystems._32_8_;
    }
    uVar6 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar12 * 4);
    while (uVar6 == 0) {
      lVar9 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145f7daa0;
      uVar6 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar16 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
    uVar16 = (ulonglong)uVar11;
  }
LAB_145f7daa0:
  while( true ) {
    if (LandscapeRenderSystems._8_4_ - LandscapeRenderSystems._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar16) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10)) break;
    lVar8 = *(longlong *)
             (LandscapeRenderSystems._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    plVar10 = *(longlong **)(lVar8 + 0x38);
    iVar12 = *(int *)(lVar8 + 0x40);
    plVar1 = plVar10 + iVar12;
    while( true ) {
      if (*(int *)(lVar8 + 0x40) != iVar12) {
        `TCheckedPointerIterator<FLandscapeSectionInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar10 == plVar1) break;
      plVar2 = (longlong *)*plVar10;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))(plVar2,this->ViewKey);
      }
      plVar10 = plVar10 + 1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

