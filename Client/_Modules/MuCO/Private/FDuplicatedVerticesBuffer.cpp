// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// Init @ 14ac5e1c0

void __thiscall
FDuplicatedVerticesBuffer::Init
          (FDuplicatedVerticesBuffer *this,int param_1,
          TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  TSkeletalMeshVertexData<unsigned_int> *pTVar1;
  TSkeletalMeshVertexData<FIndexLengthPair> *pTVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void *_Dst;
  longlong lVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 local_res20 [8];
  int local_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  
  iVar7 = *(int *)&param_2->field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  iVar20 = 0;
  local_c4 = 0;
  TStack_70._padding_._0_4_ = 0;
  iVar18 = 0;
  TStack_70._padding_._4_4_ = 1;
  TStack_70.CurrentBitIndex = 0;
  if (iVar7 != 0) {
    puVar19 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)TStack_70.Array;
    }
    TStack_70._padding_._4_4_ = *puVar19;
    while (TStack_70._padding_._4_4_ == 0) {
      lVar10 = (longlong)(int)TStack_70._padding_;
      iVar18 = iVar18 + 0x20;
      TStack_70._padding_._0_4_ = (int)TStack_70._padding_ + 1;
      TStack_70._padding_._4_4_ = 1;
      TStack_70.CurrentBitIndex = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_70._padding_)
      goto LAB_14ac5e27d;
      TStack_70._padding_._4_4_ = puVar19[lVar10 + 1];
    }
    TStack_70._padding_._4_4_ = -TStack_70._padding_._4_4_ & TStack_70._padding_._4_4_;
    uVar14 = (ulonglong)TStack_70._padding_._4_4_ * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_70.CurrentBitIndex = iVar18 + -1 + (int)lVar10;
    if (iVar7 < TStack_70.CurrentBitIndex) {
      TStack_70.CurrentBitIndex = iVar7;
    }
  }
LAB_14ac5e27d:
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = iVar18;
  if (TStack_70.CurrentBitIndex < iVar7) {
    do {
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      iVar20 = iVar20 + *(int *)((longlong)TStack_70.CurrentBitIndex * 0x20 + 0x10 +
                                *(longlong *)param_2);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      local_c4 = iVar20;
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  pTVar1 = &this->DupVertData;
  iVar7 = 1;
  if (local_c4 != 0) {
    iVar7 = local_c4;
  }
  (**(code **)(*(longlong *)&this->DupVertData + 8))(pTVar1,iVar7);
  uVar14 = (ulonglong)param_1;
  pTVar2 = &this->DupVertIndexData;
  iVar7 = 1;
  if (param_1 != 0) {
    iVar7 = param_1;
  }
  (**(code **)(*(longlong *)pTVar2 + 8))(pTVar2,iVar7);
  puVar9 = (undefined4 *)(**(code **)(*(longlong *)pTVar1 + 0x18))(pTVar1);
  iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x10))(pTVar1);
  if ((iVar7 != 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertStride == sizeof(uint32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshDuplicatedVerticesBuffer.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  _Dst = (void *)(**(code **)(*(longlong *)pTVar2 + 0x18))(pTVar2);
  iVar18 = (**(code **)(*(longlong *)pTVar2 + 0x10))(pTVar2);
  if ((iVar18 != 8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexStride == sizeof(FIndexLengthPair)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshDuplicatedVerticesBuffer.h"
                         ,0x47,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_c4 == 0) {
    memset(_Dst,0,uVar14 << 3);
    *puVar9 = 0;
    return;
  }
  uVar17 = 0;
  uVar21 = uVar17;
  if (0 < param_1) {
    do {
      iVar20 = (int)uVar21;
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar12 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar8 = *(int *)(puVar12 + (*(int *)&param_2->field_0x48 - 1 & uVar21) * 4);
        if (iVar8 != -1) {
LAB_14ac5e420:
          piVar11 = (int *)((longlong)iVar8 * 0x20 + *(longlong *)param_2);
          if (*piVar11 != iVar20) goto code_r0x00014ac5e42f;
          piVar15 = piVar11 + 2;
          if (piVar11 == (int *)0x0) {
            piVar15 = (int *)0x0;
          }
          if (piVar15 != (int *)0x0) {
            *(ulonglong *)((ulonglong)(uint)(iVar18 * iVar20) + (longlong)_Dst) =
                 CONCAT44((int)uVar17,piVar15[2]);
            puVar13 = *(undefined4 **)piVar15;
            iVar8 = piVar15[2];
            puVar3 = puVar13 + iVar8;
            while( true ) {
              if (piVar15[2] != iVar8) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (puVar13 == puVar3) break;
              uVar4 = *puVar13;
              iVar16 = (int)uVar17;
              uVar17 = (ulonglong)(iVar16 + 1);
              puVar13 = puVar13 + 1;
              *(undefined4 *)((ulonglong)(uint)(iVar16 * iVar7) + (longlong)puVar9) = uVar4;
            }
            uVar14 = (ulonglong)(uint)param_1;
            goto LAB_14ac5e4c9;
          }
          uVar14 = (ulonglong)(uint)param_1;
        }
      }
LAB_14ac5e49f:
      *(ulonglong *)((ulonglong)(uint)(iVar20 * iVar18) + (longlong)_Dst) = uVar17 << 0x20;
LAB_14ac5e4c9:
      uVar21 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < (int)uVar14);
    if ((int)uVar17 == local_c4) goto LAB_14ac5e500;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubIndex == NumDups",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshDuplicatedVerticesBuffer.h"
                     ,0x5c,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ac5e500:
  this->bHasOverlappingVertices = true;
  return;
code_r0x00014ac5e42f:
  iVar8 = piVar11[6];
  if (iVar8 == -1) goto LAB_14ac5e49f;
  goto LAB_14ac5e420;
}

