// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// operator[] @ 144c1efa0

FLumenPrimitiveGroup * __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenPrimitiveGroup *pFVar4;
  uint uVar5;
  
  bVar2 = IsAllocated(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated(ElementIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenPrimitiveGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = (int)(param_1 + (param_1 >> 0x1f & 0x7fffU)) >> 0xf;
  uVar5 = 0;
  if ((int)uVar3 < (this->ElementChunks).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenPrimitiveGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenPrimitiveGroup *)
         ((longlong)(int)(param_1 + uVar3 * -0x8000) * 0x40 +
         *(longlong *)((this->ElementChunks).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
}

// IsAllocated @ 144c53100

bool __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (this->MaxAllocatedElementIndexPlusOne <= param_1) {
    return false;
  }
  if ((param_1 < 0) || ((this->AllocatedElementsBitArray).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// operator= @ 144d437d0

TChunkedSparseArray<FLumenPrimitiveGroup,2097152> * __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator=
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this,
          TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *param_1)

{
  uchar *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *pTVar10;
  byte bVar11;
  longlong lVar12;
  ForElementType<FPrimitiveSceneInfo_*> _Dst;
  int iVar13;
  ulonglong uVar14;
  ForElementType<FPrimitiveSceneInfo_*> FVar15;
  int iVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  ForElementType<unsigned_int> FVar19;
  void *pvVar20;
  void *_Src;
  uint local_res8;
  void *local_68;
  ulonglong local_60;
  
  if (param_1 != this) {
    Empty(this);
    this->FreeElementIndexHint = param_1->FreeElementIndexHint;
    this->NumAllocatedElements = param_1->NumAllocatedElements;
    this->MaxAllocatedElementIndexPlusOne = param_1->MaxAllocatedElementIndexPlusOne;
    if (&this->AllocatedElementsBitArray != &param_1->AllocatedElementsBitArray) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                (&this->AllocatedElementsBitArray,&param_1->AllocatedElementsBitArray);
    }
    uVar8 = (param_1->ElementChunks).ArrayNum;
    uVar14 = (ulonglong)uVar8;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    piVar2 = &(this->ElementChunks).ArrayMax;
    if ((this->ElementChunks).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&(this->ElementChunks).AllocatorInstance,(this->ElementChunks).ArrayNum,
                 piVar2);
    }
    if (0 < (int)uVar8) {
      do {
        local_68 = FMemory::Malloc(0x200000,0);
        pFVar3 = (this->ElementChunks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)*piVar2 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(*pcVar5)();
          return pTVar10;
        }
        iVar7 = (this->ElementChunks).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ElementChunks).AllocatorInstance,piVar2);
          (this->ElementChunks).ArrayNum = iVar7;
        }
        (this->ElementChunks).ArrayNum = iVar7 + 1;
        *(void **)((this->ElementChunks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_68;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar7 = (this->AllocatedElementsBitArray).NumBits;
    iVar13 = 0;
    iVar17 = 0;
    if (iVar7 != 0) {
      FVar18 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      if (FVar18 == (ForElementType<unsigned_int>)0x0) {
        FVar18 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
      }
      uVar8 = *(uint *)FVar18;
      while (uVar8 == 0) {
        lVar12 = (longlong)iVar13;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar13 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
          return this;
        }
        uVar8 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar12 * 4);
      }
      uVar8 = -uVar8 & uVar8;
      uVar14 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar16 = (int)lVar12 + -1 + iVar17;
      if (iVar16 < iVar7) {
        local_res8 = 0xffffffff;
        while (local_60 = (ulonglong)uVar8, iVar16 < this->MaxAllocatedElementIndexPlusOne) {
          bVar6 = IsAllocated(this,iVar16);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsAllocated(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                                 ,0x18a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(*pcVar5)();
            return pTVar10;
          }
          uVar9 = (int)(iVar16 + (iVar16 >> 0x1f & 0x7fffU)) >> 0xf;
          uVar8 = 0;
          if ((int)uVar9 < (this->ElementChunks).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(*pcVar5)();
            return pTVar10;
          }
          lVar12 = (longlong)(int)(iVar16 + uVar9 * -0x8000) * 0x40;
          FVar15 = (ForElementType<FPrimitiveSceneInfo_*>)
                   (*(longlong *)
                     ((this->ElementChunks).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) +
                   lVar12);
          bVar6 = IsAllocated(param_1,iVar16);
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsAllocated(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                                 ,0x192,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(*pcVar5)();
            return pTVar10;
          }
          uVar8 = 0;
          if ((int)uVar9 < (param_1->ElementChunks).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(*pcVar5)();
            return pTVar10;
          }
          pvVar20 = (void *)(*(longlong *)
                              ((param_1->ElementChunks).AllocatorInstance.Data +
                              (longlong)(int)uVar9 * 8) + lVar12);
          *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar15 + 8) =
               (ForElementType<FPrimitiveSceneInfo_*>)0x0;
          pvVar4 = *(void **)((longlong)pvVar20 + 8);
          iVar7 = *(int *)((longlong)pvVar20 + 0x10);
          *(int *)((ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar15 + 0x10))->InlineData =
               iVar7;
          _Src = pvVar20;
          if (pvVar4 != (void *)0x0) {
            _Src = pvVar4;
          }
          puVar1 = (uchar *)((longlong)FVar15 + 0x14);
          if (iVar7 == 0) {
            puVar1[0] = '\x01';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPrimitiveSceneInfo_*>_>
                      (8,8,iVar7,0,(ForElementType<FPrimitiveSceneInfo_*> *)FVar15,iVar7,
                       (int *)puVar1);
            _Dst = FVar15;
            if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar15 + 8) !=
                (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
              _Dst = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar15 + 8);
            }
            memcpy((void *)_Dst,_Src,(longlong)iVar7 << 3);
          }
          *(undefined4 *)((longlong)FVar15 + 0x18) = *(undefined4 *)((longlong)pvVar20 + 0x18);
          local_res8 = ~(uint)local_60 & local_res8;
          *(undefined4 *)((longlong)FVar15 + 0x1c) = *(undefined4 *)((longlong)pvVar20 + 0x1c);
          *(undefined4 *)((longlong)FVar15 + 0x20) = *(undefined4 *)((longlong)pvVar20 + 0x20);
          *(undefined4 *)((longlong)FVar15 + 0x24) = *(undefined4 *)((longlong)pvVar20 + 0x24);
          *(undefined4 *)((longlong)FVar15 + 0x28) = *(undefined4 *)((longlong)pvVar20 + 0x28);
          *(undefined4 *)((longlong)FVar15 + 0x2c) = *(undefined4 *)((longlong)pvVar20 + 0x2c);
          *(undefined4 *)((longlong)FVar15 + 0x30) = *(undefined4 *)((longlong)pvVar20 + 0x30);
          *(undefined4 *)((longlong)FVar15 + 0x34) = *(undefined4 *)((longlong)pvVar20 + 0x34);
          bVar11 = (*(byte *)((longlong)FVar15 + 0x38) ^ *(byte *)((longlong)pvVar20 + 0x38)) & 1 ^
                   *(byte *)((longlong)FVar15 + 0x38);
          *(byte *)((longlong)FVar15 + 0x38) = bVar11;
          bVar11 = (bVar11 ^ *(byte *)((longlong)pvVar20 + 0x38)) & 2 ^ bVar11;
          *(byte *)((longlong)FVar15 + 0x38) = bVar11;
          bVar11 = (bVar11 ^ *(byte *)((longlong)pvVar20 + 0x38)) & 4 ^ bVar11;
          *(byte *)((longlong)FVar15 + 0x38) = bVar11;
          bVar11 = (bVar11 ^ *(byte *)((longlong)pvVar20 + 0x38)) & 8 ^ bVar11;
          *(byte *)((longlong)FVar15 + 0x38) = bVar11;
          bVar11 = (bVar11 ^ *(byte *)((longlong)pvVar20 + 0x38)) & 0x10 ^ bVar11;
          *(byte *)((longlong)FVar15 + 0x38) = bVar11;
          *(byte *)((longlong)FVar15 + 0x38) =
               (bVar11 ^ *(byte *)((longlong)pvVar20 + 0x38)) & 0x20 ^ bVar11;
          *(undefined1 *)((longlong)FVar15 + 0x39) = *(undefined1 *)((longlong)pvVar20 + 0x39);
          FVar18 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
          iVar7 = (this->AllocatedElementsBitArray).NumBits;
          FVar19 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
          if (FVar18 != (ForElementType<unsigned_int>)0x0) {
            FVar19 = FVar18;
          }
          uVar8 = local_res8 & *(uint *)((longlong)FVar19 + (longlong)iVar13 * 4);
          while (uVar8 == 0) {
            lVar12 = (longlong)iVar13;
            iVar17 = iVar17 + 0x20;
            iVar13 = iVar13 + 1;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
              return this;
            }
            uVar8 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar12 * 4);
            local_res8 = 0xffffffff;
          }
          uVar8 = -uVar8 & uVar8;
          uVar14 = (ulonglong)uVar8 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar16 = (int)lVar12 + -1 + iVar17;
          if (iVar7 < iVar16) {
            return this;
          }
          if (iVar7 <= iVar16) {
            return this;
          }
        }
      }
    }
  }
  return this;
}

// AddDefaulted @ 144d564a0

int __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::AddDefaulted
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<unsigned_int> FVar16;
  void *local_18 [2];
  
  iVar9 = this->MaxAllocatedElementIndexPlusOne;
  if (this->NumAllocatedElements == iVar9) {
    if ((this->AllocatedElementsBitArray).NumBits < iVar9) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxAllocatedElementIndexPlusOne <= AllocatedElementsBitArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x140,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    iVar13 = this->MaxAllocatedElementIndexPlusOne;
    this->MaxAllocatedElementIndexPlusOne = iVar13 + 1;
    if (iVar13 < (this->AllocatedElementsBitArray).NumBits) {
      if ((iVar13 < 0) || ((this->AllocatedElementsBitArray).NumBits <= iVar13)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
      }
      FVar16 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      if (FVar16 == (ForElementType<unsigned_int>)0x0) {
        FVar16 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
      }
      puVar11 = (uint *)((longlong)FVar16 +
                        (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 | 1 << ((byte)iVar13 & 0x1f);
    }
  }
  else {
    if (iVar9 <= this->NumAllocatedElements) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumAllocatedElements < MaxAllocatedElementIndexPlusOne",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x14b,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    iVar9 = this->FreeElementIndexHint;
    pTVar1 = &this->AllocatedElementsBitArray;
    FVar16 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
    iVar3 = (this->AllocatedElementsBitArray).NumBits;
    uVar14 = -1 << ((byte)iVar9 & 0x1f);
    if (FVar16 == (ForElementType<unsigned_int>)0x0) {
      FVar16 = (ForElementType<unsigned_int>)pTVar1;
    }
    uVar10 = iVar3 + 0x1fU >> 5;
    iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
    uVar12 = (ulonglong)iVar9;
    if (iVar9 < (int)uVar10) {
      puVar11 = (uint *)((longlong)FVar16 + uVar12 * 4);
LAB_144d565d0:
      iVar9 = (int)uVar12;
      if ((*puVar11 & uVar14) == uVar14) goto code_r0x000144d565de;
      uVar14 = ~*(uint *)((longlong)FVar16 + (longlong)iVar9 * 4) & uVar14;
      iVar6 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      iVar13 = 0x20;
      if (uVar14 != 0) {
        iVar13 = iVar6;
      }
      iVar13 = iVar13 + iVar9 * 0x20;
      if (iVar3 <= iVar13) goto LAB_144d565ef;
      if (iVar13 != -1) {
        if (iVar13 < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            iVar9 = (*pcVar7)();
            return iVar9;
          }
        }
        FVar16 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<unsigned_int>)0x0) {
          FVar16 = (ForElementType<unsigned_int>)pTVar1;
        }
        puVar11 = (uint *)((longlong)FVar16 +
                          (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar11 = *puVar11 | 1 << ((byte)iVar13 & 0x1f);
        TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(pTVar1);
      }
      goto LAB_144d565f4;
    }
LAB_144d565ef:
    iVar13 = -1;
LAB_144d565f4:
    if (this->MaxAllocatedElementIndexPlusOne <= iVar13) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex < MaxAllocatedElementIndexPlusOne",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x14d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
  }
  iVar9 = (this->ElementChunks).ArrayNum;
  this->NumAllocatedElements = this->NumAllocatedElements + 1;
  this->FreeElementIndexHint = iVar13 + 1;
  if (iVar9 << 0xf < this->MaxAllocatedElementIndexPlusOne) {
    if (iVar13 + 1 != this->MaxAllocatedElementIndexPlusOne) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex + 1 == MaxAllocatedElementIndexPlusOne",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x156,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    if (iVar13 != (this->ElementChunks).ArrayNum << 0xf) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex == ElementChunks.Num() * ElementsPerChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x157,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    if ((this->AllocatedElementsBitArray).NumBits != (this->ElementChunks).ArrayNum << 0xf) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocatedElementsBitArray.Num() == ElementChunks.Num() * ElementsPerChunk"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                         ,0x158,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    local_18[0] = FMemory::Malloc(0x200000,0);
    pFVar4 = (this->ElementChunks).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->ElementChunks).ArrayMax * 8)
       ) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    iVar9 = (this->ElementChunks).ArrayNum;
    piVar2 = &(this->ElementChunks).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ElementChunks).AllocatorInstance,piVar2);
    }
    pTVar1 = &this->AllocatedElementsBitArray;
    (this->ElementChunks).ArrayNum = iVar9 + 1;
    *(void **)((this->ElementChunks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_18[0];
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,0x8000);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar9,0x8000,false);
    if ((iVar13 < 0) || ((this->AllocatedElementsBitArray).NumBits <= iVar13)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    FVar16 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<unsigned_int>)0x0) {
      FVar16 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar11 = (uint *)((longlong)FVar16 +
                      (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar11 = *puVar11 | 1 << ((byte)iVar13 & 0x1f);
  }
  bVar8 = IsAllocated(this,iVar13);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated(InsertIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                       ,0x15f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  uVar10 = (int)(iVar13 + (iVar13 >> 0x1f & 0x7fffU)) >> 0xf;
  uVar14 = 0;
  if ((int)uVar10 < (this->ElementChunks).ArrayNum) {
    uVar14 = ~uVar10 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  lVar15 = (longlong)(int)(iVar13 + uVar10 * -0x8000) * 0x40;
  lVar5 = *(longlong *)((this->ElementChunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  *(undefined8 *)(lVar5 + 8 + lVar15) = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar15) = 0;
  *(undefined4 *)(lVar5 + 0x14 + lVar15) = 1;
  *(undefined8 *)(lVar5 + 0x18 + lVar15) = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + 0x20 + lVar15) = 0xffffffffffffffff;
  *(byte *)(lVar5 + 0x38 + lVar15) = *(byte *)(lVar5 + 0x38 + lVar15) & 0xd0 | 0x10;
  *(undefined8 *)(lVar5 + 0x28 + lVar15) = 0xffffffffffffffff;
  *(undefined4 *)(lVar5 + 0x30 + lVar15) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0x34 + lVar15) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x39 + lVar15) = 0xff;
  return iVar13;
code_r0x000144d565de:
  uVar12 = (ulonglong)(iVar9 + 1U);
  puVar11 = puVar11 + 1;
  uVar14 = 0xffffffff;
  if ((int)uVar10 <= (int)(iVar9 + 1U)) goto LAB_144d565ef;
  goto LAB_144d565d0;
}

// Empty @ 144d6da10

void __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::Empty
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  ForElementType<FPrimitiveSceneInfo_*> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FLumenPrimitiveGroup *pFVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  uVar12 = 0;
  if (0 < this->MaxAllocatedElementIndexPlusOne) {
    do {
      if ((((int)uVar12 < 0) || ((this->AllocatedElementsBitArray).NumBits <= (int)uVar12)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar4;
      }
      uVar8 = uVar12;
      if ((int)uVar12 < 0) {
        uVar8 = uVar12 + 0x1f;
      }
    } while (((*(uint *)((longlong)FVar11 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar12 & 0x1f) & 1)
              == 0) && (uVar12 = uVar12 + 1, (int)uVar12 < this->MaxAllocatedElementIndexPlusOne));
  }
  uVar8 = this->MaxAllocatedElementIndexPlusOne;
  do {
    if (uVar12 == uVar8) {
      pFVar14 = (this->ElementChunks).AllocatorInstance.Data;
      iVar3 = (this->ElementChunks).ArrayNum;
      pFVar2 = pFVar14 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->ElementChunks).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FLumenPrimitiveGroup_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar14 == pFVar2) break;
        FMemory::Free(*(void **)pFVar14);
        pFVar14 = pFVar14 + 8;
      }
      piVar1 = &(this->ElementChunks).ArrayMax;
      (this->ElementChunks).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ElementChunks).AllocatorInstance,0,piVar1);
      }
      iVar3 = (this->AllocatedElementsBitArray).MaxBits;
      (this->AllocatedElementsBitArray).NumBits = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        (this->AllocatedElementsBitArray).MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->AllocatedElementsBitArray,0);
      }
      this->FreeElementIndexHint = 0;
      this->NumAllocatedElements = 0;
      this->MaxAllocatedElementIndexPlusOne = 0;
      return;
    }
    pFVar10 = operator[](this,uVar12);
    FVar5 = (pFVar10->Primitives).AllocatorInstance.SecondaryData;
    uVar13 = uVar12;
    if (FVar5 != (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    do {
      uVar12 = uVar13 + 1;
      if (this->MaxAllocatedElementIndexPlusOne <= (int)uVar12) break;
      if ((((int)uVar12 < 0) || ((this->AllocatedElementsBitArray).NumBits <= (int)uVar12)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar4;
      }
      uVar9 = uVar12;
      if ((int)uVar12 < 0) {
        uVar9 = uVar13 + 0x20;
      }
      uVar13 = uVar12;
    } while ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar12 & 0x1f) & 1)
             == 0);
  } while( true );
}

// operator[] @ 144e74f10

FLumenPrimitiveGroup * __thiscall
TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
          (TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLumenPrimitiveGroup *pFVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  
  if (param_1 < this->MaxAllocatedElementIndexPlusOne) {
    if ((param_1 < 0) || ((this->AllocatedElementsBitArray).NumBits <= param_1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLumenPrimitiveGroup *)(*pcVar1)();
        return pFVar4;
      }
    }
    FVar6 = (this->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&this->AllocatedElementsBitArray;
    }
    if ((*(uint *)((longlong)FVar6 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4
                  ) >> (param_1 & 0x1fU) & 1) != 0) goto LAB_144e74fa9;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsAllocated(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                     ,0x192,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FLumenPrimitiveGroup *)(*pcVar1)();
    return pFVar4;
  }
LAB_144e74fa9:
  uVar3 = (int)(param_1 + (param_1 >> 0x1f & 0x7fffU)) >> 0xf;
  uVar5 = 0;
  if ((int)uVar3 < (this->ElementChunks).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLumenPrimitiveGroup *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FLumenPrimitiveGroup *)
         ((longlong)(int)(param_1 + uVar3 * -0x8000) * 0x40 +
         *(longlong *)((this->ElementChunks).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
}

