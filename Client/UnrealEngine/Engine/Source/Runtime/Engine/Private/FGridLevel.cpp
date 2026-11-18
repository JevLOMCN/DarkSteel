// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetCell @ 148a94500

FGridCell * __thiscall
FSquare2DGridHelper::FGridLevel::GetCell(FGridLevel *this,TIntVector2<__int64> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  long64 lVar4;
  long64 lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FGridCell *pFVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 local_res8;
  undefined7 uStackX_9;
  undefined1 local_res10 [8];
  TPairInitializer<__int64_&&,__int64_const_&> local_res18;
  longlong local_58;
  longlong *local_50;
  long64 **local_48;
  
  lVar14 = (param_1->field0_0x0)._s_0.X;
  if ((((lVar14 < 0) || (lVar3 = this->_padding_, lVar3 <= lVar14)) ||
      (lVar13 = (param_1->field0_0x0)._s_0.Y, lVar13 < 0)) || (lVar3 <= lVar13)) {
LAB_148a94556:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidCoords(InCoords)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.h"
                       ,0x160,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FGridCell *)(*pcVar7)();
      return pFVar10;
    }
  }
  else if (lVar3 * lVar13 + lVar14 < 0) {
    local_res8 = 0;
    bVar8 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()(&local_res8)
    ;
    if (!bVar8) goto LAB_148a94556;
  }
  lVar14 = (param_1->field0_0x0)._s_0.X;
  if (((lVar14 < 0) || (lVar3 = this->_padding_, lVar3 <= lVar14)) ||
     ((lVar13 = (param_1->field0_0x0)._s_0.Y, lVar13 < 0 || (lVar3 <= lVar13)))) {
LAB_148a945ce:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetCellIndex(InCoords, CellIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.h"
                       ,0x163,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FGridCell *)(*pcVar7)();
      return pFVar10;
    }
    lVar14 = CONCAT71(uStackX_9,local_res8);
  }
  else {
    if (lVar3 * lVar13 + lVar14 < 0) {
      local_res10[0] = 0;
      bVar8 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                        (local_res10);
      if (!bVar8) goto LAB_148a945ce;
      lVar13 = (param_1->field0_0x0)._s_0.Y;
      lVar14 = (param_1->field0_0x0)._s_0.X;
    }
    lVar14 = lVar13 * this->_padding_ + lVar14;
  }
  if (*(int *)&(this->CellsMapping).field_0x8 != *(int *)&(this->CellsMapping).field_0x34) {
    puVar16 = *(undefined1 **)&(this->CellsMapping).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->CellsMapping).field_0x38;
    }
    iVar9 = *(int *)(puVar16 +
                    ((lVar14 >> 0x20) * 0x17 + lVar14 &
                    (ulonglong)(*(int *)&(this->CellsMapping).field_0x48 - 1)) * 4);
    if (iVar9 != -1) {
      do {
        lVar3 = *(longlong *)&this->CellsMapping + (longlong)iVar9 * 0x18;
        if (*(longlong *)(*(longlong *)&this->CellsMapping + (longlong)iVar9 * 0x18) == lVar14) {
          plVar11 = (longlong *)(lVar3 + 8);
          if (lVar3 == 0) {
            plVar11 = (longlong *)0x0;
          }
          if (plVar11 != (longlong *)0x0) {
            local_res18.Value = (long64 *)*plVar11;
            goto LAB_148a946fc;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 0x10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = (this->Cells).ArrayNum;
  piVar1 = &(this->Cells).ArrayMax;
  iVar2 = this->Level;
  lVar4 = (param_1->field0_0x0)._s_0.X;
  lVar5 = (param_1->field0_0x0)._s_0.Y;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Cells).AllocatorInstance,piVar1);
  }
  local_res18.Value = (long64 *)(longlong)iVar9;
  pFVar6 = (this->Cells).AllocatorInstance.Data;
  (this->Cells).ArrayNum = iVar9 + 1;
  *(long64 *)(pFVar6 + (longlong)local_res18.Value * 0x18) = lVar4;
  *(long64 *)(pFVar6 + (longlong)local_res18.Value * 0x18 + 8) = lVar5;
  *(longlong *)(pFVar6 + (longlong)local_res18.Value * 0x18 + 0x10) = (longlong)iVar2;
  local_50 = &local_58;
  local_48 = &local_res18.Value;
  local_58 = lVar14;
  TSet<TTuple<__int64,__int64>,TDefaultMapHashableKeyFuncs<__int64,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_&&,__int64_const_&>_>
            ((TSet<TTuple<__int64,__int64>,TDefaultMapHashableKeyFuncs<__int64,__int64,0>,FDefaultSetAllocator>
              *)&this->CellsMapping,&local_res18,(bool *)&local_50);
LAB_148a946fc:
  uVar12 = (uint)local_res18.Value;
  uVar15 = 0;
  if ((int)uVar12 < (this->Cells).ArrayNum) {
    uVar15 = ~uVar12 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FGridCell *)(*pcVar7)();
      return pFVar10;
    }
  }
  return (FGridCell *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18);
}

