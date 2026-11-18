// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 27

// Append @ 143468a00

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Append
          (TDynamicMeshTriangleAttribute<int,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_res8 [2];
  
  uVar5 = param_2->TriangleOffset + param_2->NumTriangle;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar5) {
    TDynamicVector<int,512>::Resize(&this->AttribValues,uVar5);
  }
  iVar6 = 0;
  if (0 < param_2->NumTriangle) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar6,local_res8,4);
      if (cVar2 == '\0') {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6293916625418583852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                           ,0xd4,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar3) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = param_2->TriangleOffset + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 4) = local_res8[0];
    } while (iVar6 < param_2->NumTriangle);
  }
  return true;
}

// AppendDefaulted @ 14346aef0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::AppendDefaulted
          (TDynamicMeshTriangleAttribute<int,1> *this,FAppendInfo *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1->NumTriangle + param_1->TriangleOffset;
  uVar2 = (**(code **)(this->_padding_ + 0xd8))();
  uVar4 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
  if (uVar4 < uVar5) {
    TDynamicVector<int,512>::Resize(&this->AttribValues,uVar5);
    do {
      uVar3 = uVar4 & 0x1ff;
      uVar1 = uVar4 >> 9;
      uVar4 = uVar4 + 1;
      *(undefined4 *)
       (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar3 * 4) = uVar2;
    } while (uVar4 < uVar5);
  }
  return;
}

// CompactCopy @ 14348a6a0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CompactCopy
          (TDynamicMeshTriangleAttribute<int,1> *this,FCompactMaps *param_1,
          TDynamicMeshTriangleAttribute<int,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  (**(code **)(this->_padding_ + 0xd0))(this,param_2);
  if (((int)((param_2->AttribValues).CurBlock * 0x200 + (param_2->AttribValues).CurBlockUsed) <
       (param_1->TriMap).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumTriangleMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                         ,0x93,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = (longlong)(param_1->TriMap).ArrayNum;
  uVar4 = 0;
  if (0 < lVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (param_1->TriMap).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar6 * 4);
      if (uVar3 != 0xffffffff) {
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
         (ulonglong)(uVar3 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((param_2->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8
                ) + (ulonglong)(uVar4 & 0x1ff) * 4);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return;
}

// CompactInPlace @ 1434916f0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CompactInPlace
          (TDynamicMeshTriangleAttribute<int,1> *this,FCompactMaps *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(param_1->TriMap).ArrayNum;
  uVar10 = 0;
  if (0 < lVar11) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (param_1->TriMap).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar9 * 4);
      if (uVar6 != 0xffffffff) {
        if ((int)uVar10 < (int)uVar6) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6293916625418583928>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                             ,0x88,"ToTID <= TID");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          uVar3 = (this->AttribValues).CurBlockUsed;
          puVar2 = (undefined4 *)
                   (*(longlong *)
                     ((this->AttribValues).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
          uVar7 = (this->AttribValues).CurBlock;
          uVar8 = uVar7 * 0x200 + uVar3;
          if (uVar6 == uVar8) {
            if (uVar3 == 0x200) {
              if (uVar7 == (this->AttribValues).Blocks.ArrayNum - 1U) {
                TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
              }
              (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
              uVar7 = (this->AttribValues).CurBlock;
              (this->AttribValues).CurBlockUsed = 0;
            }
            *(undefined4 *)
             (*(longlong *)
               ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
             (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *puVar2;
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else if (uVar8 < uVar6) {
            TDynamicVector<int,512>::Resize(&this->AttribValues,uVar6);
            uVar6 = (this->AttribValues).CurBlockUsed;
            if (uVar6 == 0x200) {
              if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
                TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
              }
              (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
              uVar6 = 0;
              (this->AttribValues).CurBlockUsed = 0;
            }
            *(undefined4 *)
             (*(longlong *)
               ((this->AttribValues).Blocks.AllocatorInstance.Data +
               (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar6 * 4) =
                 *puVar2;
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else {
            *(undefined4 *)
             (*(longlong *)
               ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
             (ulonglong)(uVar6 & 0x1ff) * 4) = *puVar2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar11);
  }
  TDynamicVector<int,512>::Resize
            (&this->AttribValues,
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
  return;
}

// CopyIn @ 14349b490

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CopyIn
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1,void *param_2,int param_3)

{
  if (param_3 != 4) {
    return false;
  }
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
   (ulonglong)(param_1 & 0x1ff) * 4) = *(undefined4 *)param_2;
  return true;
}

// CopyOut @ 14349b630

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CopyOut
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1,void *param_2,int param_3)

{
  if (param_3 != 4) {
    return false;
  }
  *(undefined4 *)param_2 =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
        + (ulonglong)(param_1 & 0x1ff) * 4);
  return true;
}

// CopyThroughMapping @ 14349b7f0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CopyThroughMapping
          (TDynamicMeshTriangleAttribute<int,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar16 = 0;
  puVar1 = &(param_2->TriangleMap).ForwardMap.field_0x10;
  iVar3 = *(int *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_2->TriangleMap).ForwardMap.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14349b89d;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14349b89d:
  uVar13 = *(uint *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_2->TriangleMap).ForwardMap.field_0x8 -
                       *(int *)&(param_2->TriangleMap).ForwardMap.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(param_2->TriangleMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14349b9a1;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14349b9a1:
  while( true ) {
    if (*(int *)&(param_2->TriangleMap).ForwardMap.field_0x8 -
        *(int *)&(param_2->TriangleMap).ForwardMap.field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar11 = (undefined4 *)
              (*(longlong *)&(param_2->TriangleMap).ForwardMap +
              (longlong)TStack_68.CurrentBitIndex * 0x10);
    cVar7 = (**(code **)(param_1->_padding_ + 0x48))(param_1,*puVar11,local_res20,4);
    if (cVar7 == '\0') {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6293916625418583873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                         ,0xbf,"Source->CopyOut(MapTID.Key, BufferData, BufferSize)");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = puVar11[1];
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) +
     (ulonglong)(uVar8 & 0x1ff) * 4) = local_res20[0];
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return true;
}

// CopyValue @ 14349dbf0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::CopyValue
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (this->AttribValues).CurBlock;
  puVar2 = (undefined4 *)
           (*(longlong *)
             ((this->AttribValues).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar4 = uVar5 * 0x200 + uVar3;
  if (param_2 == uVar4) {
    if (uVar3 == 0x200) {
      if (uVar5 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar5 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *puVar2;
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  if (uVar4 < (uint)param_2) {
    TDynamicVector<int,512>::Resize(&this->AttribValues,param_2);
    uVar5 = (this->AttribValues).CurBlockUsed;
    if (uVar5 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar5 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar5 * 4) = *puVar2;
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8) +
   (ulonglong)(param_2 & 0x1ff) * 4) = *puVar2;
  return;
}

// GetByteCount @ 1434bf2c0

ulong64 __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::GetByteCount
          (TDynamicMeshTriangleAttribute<int,1> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 2;
}

// GetDefaultAttributeValue @ 1434bff50

int __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::GetDefaultAttributeValue
          (TDynamicMeshTriangleAttribute<int,1> *this)

{
  return 0;
}

// Initialize @ 1434cf060

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Initialize
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if (this->ParentMesh == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentMesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDynamicVector<int,512>::Resize
            (&this->AttribValues,
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
  TDynamicVector<int,512>::Fill(&this->AttribValues,local_res10);
  return;
}

// IsSameAs @ 1434eba30

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::IsSameAs
          (TDynamicMeshTriangleAttribute<int,1> *this,TDynamicMeshTriangleAttribute<int,1> *param_1,
          bool param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMesh3 *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if (param_2) {
    pFVar5 = this->ParentMesh;
    uVar8 = 0;
    uVar12 = 0;
    uVar9 = (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed +
            (pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    if (((uVar9 != 0) &&
        (pFVar6 = (pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar12 = 1, 1 < (int)uVar9)) {
      do {
        sVar4 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar4 != 0) && (sVar4 != -1)) break;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar9);
    }
    pFVar7 = param_1->ParentMesh;
    uVar10 = (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed +
             (pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    if (((uVar10 != 0) &&
        (pFVar6 = (pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar8 = 1, 1 < (int)uVar10)) {
      do {
        sVar4 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 2);
        if ((sVar4 != 0) && (sVar4 != -1)) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar10);
    }
joined_r0x0001434ebbbc:
    if (uVar12 != uVar9) {
      if (uVar8 == uVar10) goto LAB_1434ebceb;
      uVar13 = uVar8;
      do {
        uVar1 = (uVar12 - uVar8) + uVar13;
        if (*(int *)(*(longlong *)
                      ((this->AttribValues).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4) !=
            *(int *)(*(longlong *)
                      ((param_1->AttribValues).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4))
        goto LAB_1434ebceb;
        uVar13 = uVar13 + 1;
      } while ((int)(uVar13 - uVar8) < 1);
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)uVar9) {
        pFVar6 = (pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar2 = (ulonglong)(uVar12 >> 9) * 8;
          lVar3 = (ulonglong)(uVar12 & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar6 + lVar2)) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar6 + lVar2)) != -1)) break;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar9);
      }
      uVar8 = uVar8 + 1;
      if ((int)uVar8 < (int)uVar10) {
        pFVar6 = (pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar2 = (ulonglong)(uVar8 >> 9) * 8;
          lVar3 = (ulonglong)(uVar8 & 0x1ff) * 2;
          if ((*(short *)(lVar3 + *(longlong *)(pFVar6 + lVar2)) != 0) &&
             (*(short *)(lVar3 + *(longlong *)(pFVar6 + lVar2)) != -1)) break;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar10);
        pFVar5 = this->ParentMesh;
      }
      goto joined_r0x0001434ebbbc;
    }
    bVar14 = uVar8 == uVar10;
  }
  else {
    iVar11 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
    if (iVar11 == (param_1->AttribValues).CurBlock * 0x200 + (param_1->AttribValues).CurBlockUsed) {
      uVar8 = 0;
      if (0 < iVar11) {
        do {
          lVar2 = (ulonglong)(uVar8 >> 9) * 8;
          lVar3 = (ulonglong)(uVar8 & 0x1ff) * 4;
          if (*(int *)(lVar3 + *(longlong *)
                                ((this->AttribValues).Blocks.AllocatorInstance.Data + lVar2)) !=
              *(int *)(lVar3 + *(longlong *)
                                ((param_1->AttribValues).Blocks.AllocatorInstance.Data + lVar2)))
          goto LAB_1434ebceb;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iVar11);
      }
      bVar14 = true;
    }
    else {
LAB_1434ebceb:
      bVar14 = false;
    }
  }
  return bVar14;
}

// MakeCompactCopy @ 1434f5b80

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::MakeCompactCopy
          (TDynamicMeshTriangleAttribute<int,1> *this,FCompactMaps *param_1,FDynamicMesh3 *param_2)

{
  TDynamicVector<int,512> *this_00;
  TDynamicMeshTriangleAttribute<int,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_2;
    Initialize(this_01,0);
  }
  Initialize(this_01,0);
  CompactCopy(this_01,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// MakeCopy @ 1434f60f0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::MakeCopy
          (TDynamicMeshTriangleAttribute<int,1> *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  code *pcVar1;
  TDynamicMeshTriangleAttribute<int,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_1;
    Initialize(this_01,0);
  }
  pcVar1 = *(code **)(this_01->_padding_ + 0xd0);
  if (pcVar1 == TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::CopyParentClassData) {
    this_01->_padding_ = this->_padding_;
  }
  else {
    (*pcVar1)(this_01,this);
  }
  TDynamicVector<int,512>::operator=(&this_01->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// MakeNew @ 1434f6a50

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::MakeNew
          (TDynamicMeshTriangleAttribute<int,1> *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  TDynamicMeshTriangleAttribute<int,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_1;
    Initialize(this_01,0);
  }
  Initialize(this_01,0);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// NewBlankChange @ 1434fb7b0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::NewBlankChange
          (TDynamicMeshTriangleAttribute<int,1> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 = &___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// OnCollapseEdge @ 143500720

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnCollapseEdge
          (TDynamicMeshTriangleAttribute<int,1> *this,FEdgeCollapseInfo *param_1)

{
  return;
}

// OnFlipEdge @ 143504390

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnFlipEdge
          (TDynamicMeshTriangleAttribute<int,1> *this,FEdgeFlipInfo *param_1)

{
  return;
}

// OnMergeEdges @ 143506b00

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnMergeEdges
          (TDynamicMeshTriangleAttribute<int,1> *this,FMergeEdgesInfo *param_1)

{
  return;
}

// OnMergeVertices @ 143508780

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnMergeVertices
          (TDynamicMeshTriangleAttribute<int,1> *this,FMergeVerticesInfo *param_1)

{
  return;
}

// OnNewTriangle @ 143508bb0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnNewTriangle
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 in_register_00000014;
  uint uVar5;
  uint uVar6;
  undefined7 in_register_00000081;
  
  if (param_1 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6293916625418583658>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                       ,0x196,"TriangleID >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
           (longlong)param_1 + 1U) {
    uVar4 = (**(code **)(this->_padding_ + 0xd8))
                      (this,CONCAT44(in_register_00000014,param_1),
                       CONCAT71(in_register_00000081,param_2));
    uVar1 = (this->AttribValues).CurBlock;
    uVar6 = (uint)((longlong)param_1 + 1U);
    uVar5 = (this->AttribValues).CurBlockUsed;
    TDynamicVector<int,512>::Resize(&this->AttribValues,uVar6);
    for (uVar5 = uVar1 * 0x200 + uVar5; uVar5 < uVar6; uVar5 = uVar5 + 1) {
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 4) = uVar4;
    }
  }
  uVar4 = (**(code **)(this->_padding_ + 0xd8))(this);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
   (ulonglong)(param_1 & 0x1ff) * 4) = uVar4;
  return;
}

// OnPokeTriangle @ 14350b0e0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnPokeTriangle
          (TDynamicMeshTriangleAttribute<int,1> *this,FPokeTriangleInfo *param_1)

{
  CopyValue(this,param_1->OriginalTriangle,(param_1->NewTriangles).field0_0x0._s_0.A);
  CopyValue(this,param_1->OriginalTriangle,(param_1->NewTriangles).field0_0x0._s_0.B);
  return;
}

// OnSplitEdge @ 143511ad0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnSplitEdge
          (TDynamicMeshTriangleAttribute<int,1> *this,FEdgeSplitInfo *param_1)

{
  int iVar1;
  
  CopyValue(this,(param_1->OriginalTriangles).field0_0x0._s_0.A,
            (param_1->NewTriangles).field0_0x0._s_0.A);
  iVar1 = (param_1->OriginalTriangles).field0_0x0._s_0.B;
  if (iVar1 != -1) {
    CopyValue(this,iVar1,(param_1->NewTriangles).field0_0x0._s_0.B);
  }
  return;
}

// OnSplitVertex @ 143513bc0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::OnSplitVertex
          (TDynamicMeshTriangleAttribute<int,1> *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  return;
}

// Reparent @ 143518110

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Reparent
          (TDynamicMeshTriangleAttribute<int,1> *this,FDynamicMesh3 *param_1)

{
  this->ParentMesh = param_1;
  return;
}

// Serialize @ 143528720

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Serialize
          (TDynamicMeshTriangleAttribute<int,1> *this,FArchive *param_1,FCompactMaps *param_2,
          bool param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  bool local_res20 [8];
  TDynamicVector<int,512> local_48;
  ulonglong uVar5;
  
  local_res20[0] = param_3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize
            ((TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar1 < 0x38)) {
    TDynamicVector<int,512>::Serialize<0,0>(&this->AttribValues,param_1);
    return;
  }
  ::operator<<(param_1,local_res20);
  if ((param_2 == (FCompactMaps *)0x0) || ((param_2->TriMap).ArrayNum == 0)) {
    if (local_res20[0] != false) {
      TDynamicVector<int,512>::Serialize<1,1>(&this->AttribValues,param_1);
      return;
    }
    TDynamicVector<int,512>::Serialize<1,0>(&this->AttribValues,param_1);
  }
  else {
    uVar5 = 0;
    local_48.CurBlock = 0;
    local_48.CurBlockUsed = 0;
    local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Blocks.ArrayNum = 0;
    local_48.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_48);
    TDynamicVector<int,512>::Resize(&local_48,(this->ParentMesh->TriangleRefCounts).UsedCount);
    iVar1 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
    uVar6 = uVar5;
    uVar7 = uVar5;
    if (0 < iVar1) {
      do {
        iVar2 = FCompactMaps::GetTriangleMapping(param_2,(int)uVar5);
        if (iVar2 != -1) {
          uVar4 = (uint)uVar6;
          uVar3 = uVar6 >> 9;
          uVar6 = (ulonglong)(uVar4 + 1);
          *(undefined4 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + uVar3 * 8) +
           (ulonglong)(uVar4 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8) +
                (ulonglong)((uint)uVar7 & 0x1ff) * 4);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar7 = uVar7 + 1;
      } while ((int)uVar4 < iVar1);
    }
    if (local_res20[0] == false) {
      TDynamicVector<int,512>::Serialize<1,0>(&local_48,param_1);
    }
    else {
      TDynamicVector<int,512>::Serialize<1,1>(&local_48,param_1);
    }
    TDynamicVector<int,512>::Empty(&local_48,0);
    if (local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetNewValue @ 14352e9f0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::SetNewValue
          (TDynamicMeshTriangleAttribute<int,1> *this,int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (this->AttribValues).CurBlock;
  uVar2 = (this->AttribValues).CurBlockUsed;
  uVar3 = uVar4 * 0x200 + uVar2;
  if (param_1 == uVar3) {
    if (uVar2 == 0x200) {
      if (uVar4 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar4 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(int *)(*(longlong *)
              ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
            (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *param_2;
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  if (uVar3 < (uint)param_1) {
    TDynamicVector<int,512>::Resize(&this->AttribValues,param_1);
    uVar4 = (this->AttribValues).CurBlockUsed;
    if (uVar4 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<int,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar4 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(int *)(*(longlong *)
              ((this->AttribValues).Blocks.AllocatorInstance.Data +
              (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar4 * 4) =
         *param_2;
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  *(int *)(*(longlong *)
            ((this->AttribValues).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) = *param_2;
  return;
}

