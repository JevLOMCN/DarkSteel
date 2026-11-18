// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FOrderedScatterUpdater @ 147fa4f70

FOrderedScatterUpdater * __thiscall
Nanite::FOrderedScatterUpdater::FOrderedScatterUpdater(FOrderedScatterUpdater *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  FOrderedScatterUpdater *pFVar7;
  ulong64 uVar8;
  uint *puVar9;
  int iVar10;
  
  (this->HashTable).HashSize = 0x400;
  (this->HashTable).HashMask = 0;
  (this->HashTable).IndexSize = 0;
  (this->HashTable).Hash = FHashTable::EmptyHash;
  piVar1 = &(this->Updates).ArrayMax;
  (this->HashTable).NextIndex = (uint *)0x0;
  (this->Updates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Updates).ArrayNum = 0;
  *piVar1 = 0;
  iVar2 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar10 = 0;
  if (param_1 != 0) {
    iVar10 = iVar2;
  }
  this->HashShift = 0x20 - iVar10;
  if ((this->HashTable).IndexSize != 0) {
    (this->HashTable).HashMask = 0;
    (this->HashTable).IndexSize = 0;
    operator_delete__((this->HashTable).Hash);
    (this->HashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->HashTable).NextIndex);
    (this->HashTable).NextIndex = (uint *)0x0;
  }
  (this->HashTable).IndexSize = param_1;
  uVar6 = 1 << ((byte)iVar10 & 0x1f);
  (this->HashTable).HashSize = uVar6;
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HashSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x16d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOrderedScatterUpdater *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar6 = (this->HashTable).HashSize;
  if ((uVar6 & uVar6 - 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo( HashSize )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x16e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOrderedScatterUpdater *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((this->HashTable).IndexSize != 0) {
    uVar6 = (this->HashTable).HashSize;
    (this->HashTable).HashMask = uVar6 - 1;
    auVar4 = ZEXT816(4) * ZEXT416(uVar6);
    uVar8 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = operator_new__(uVar8);
    (this->HashTable).Hash = puVar9;
    auVar4 = ZEXT816(4) * ZEXT416((this->HashTable).IndexSize);
    uVar8 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = operator_new__(uVar8);
    (this->HashTable).NextIndex = puVar9;
    memset((this->HashTable).Hash,0xff,(ulonglong)((this->HashTable).HashSize << 2));
  }
  if (-1 < (int)param_1) {
    if (*piVar1 < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&(this->Updates).AllocatorInstance,(this->Updates).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// Flush @ 147fcd980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FOrderedScatterUpdater::Flush
          (FOrderedScatterUpdater *this,FRDGBuilder *param_1,FRDGBufferUAV *param_2)

{
  int iVar1;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TIntVector2<unsigned_int>_const_,int> local_18;
  
  iVar1 = (this->Updates).ArrayNum;
  if (0 < iVar1) {
    local_18.DataPtr = (TIntVector2<unsigned_int> *)(this->Updates).AllocatorInstance.Data;
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    AddPass_ScatterUpdates(param_1,param_2,&local_18);
    if ((this->HashTable).IndexSize != 0) {
      memset((this->HashTable).Hash,0xff,(ulonglong)((this->HashTable).HashSize << 2));
    }
    (this->Updates).ArrayNum = 0;
    if ((this->Updates).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->Updates).AllocatorInstance,0,&(this->Updates).ArrayMax);
    }
  }
  return;
}

// ResolveOverwrites @ 147feea70

void __thiscall
Nanite::FOrderedScatterUpdater::ResolveOverwrites(FOrderedScatterUpdater *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  uVar14 = (this->Updates).ArrayNum;
  uVar18 = 0;
  uVar9 = 0;
  uVar16 = 0;
  if (uVar14 != 0) {
    do {
      uVar13 = (uint)uVar18;
      uVar9 = 0;
      if ((int)uVar16 < (this->Updates).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Updates).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(int)uVar16 * 8;
      uVar15 = *(uint *)(pFVar5 + (longlong)(int)uVar16 * 8) & 0xfffffffc;
      uVar9 = uVar15 * -0x61c8864f >> ((byte)this->HashShift & 0x1f);
      for (uVar17 = (this->HashTable).Hash[uVar9 & (this->HashTable).HashMask]; uVar17 != 0xffffffff
          ; uVar17 = (this->HashTable).NextIndex[uVar17]) {
        uVar10 = 0;
        if ((int)uVar17 < (this->Updates).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = (longlong)(int)uVar17 * 8;
        if (uVar15 == (*(uint *)((this->Updates).AllocatorInstance.Data + lVar4) & 0xfffffffc)) {
          if (param_1) {
            uVar9 = 0;
            if ((int)uVar17 < (this->Updates).ArrayNum) {
              uVar9 = ~uVar17 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (this->Updates).AllocatorInstance.Data;
            uVar9 = *(uint *)(pFVar5 + lVar4) & 3;
            if (uVar9 == 0) {
              uVar9 = *(uint *)(pFVar5 + lVar4 + 4);
            }
            else if (uVar9 == 1) {
              uVar9 = ~*(uint *)(pFVar5 + lVar4 + 4);
            }
            else {
              if ((uVar9 != 2) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteOrderedScatterUpdater.h"
                                     ,0x49,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar9 = 0xffffffff;
            }
            uVar13 = *(uint *)pFVar2 & 3;
            if (uVar13 == 0) {
              uVar13 = *(uint *)(pFVar2 + 4);
            }
            else if (uVar13 == 1) {
              uVar13 = ~*(uint *)(pFVar2 + 4);
            }
            else {
              if ((uVar13 != 2) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteOrderedScatterUpdater.h"
                                     ,0x49,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar13 = 0xffffffff;
            }
            if (((uVar9 & ~uVar13) != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(OldWriteMask & ~NewWriteMask) == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteOrderedScatterUpdater.cpp"
                                   ,0x65,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          goto LAB_147feec3b;
        }
      }
      uVar17 = uVar13 + 1;
      if ((this->HashTable).IndexSize <= uVar13) {
        uVar15 = 1;
        if (uVar17 != 0) {
          uVar15 = uVar17;
        }
        uVar3 = (ulonglong)(uVar15 - 1) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar15 = 1 << ((byte)lVar4 & 0x1f);
        if (uVar15 < 0x20) {
          uVar15 = 0x20;
        }
        FHashTable::Resize(&this->HashTable,uVar15);
      }
      uVar9 = (this->HashTable).HashMask & uVar9;
      (this->HashTable).NextIndex[uVar18] = (this->HashTable).Hash[uVar9];
      (this->HashTable).Hash[uVar9] = uVar13;
      uVar18 = (ulonglong)uVar17;
      uVar17 = uVar13;
LAB_147feec3b:
      uVar9 = (uint)uVar18;
      uVar6 = *(undefined8 *)pFVar2;
      uVar13 = 0;
      if ((int)uVar17 < (this->Updates).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = uVar16 + 1;
      *(undefined8 *)((this->Updates).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) = uVar6;
    } while (uVar16 < uVar14);
  }
  piVar1 = &(this->Updates).ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < (int)uVar9) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,uVar9 - iVar12,&(this->Updates).AllocatorInstance,piVar1,
                        &(this->Updates).ArrayMax);
    DefaultConstructItems<Nanite::FOrderedScatterUpdater::FUpdate,int>
              ((this->Updates).AllocatorInstance.Data + (longlong)iVar11 * 8,uVar9 - iVar12);
    return;
  }
  if (-1 < (int)uVar9) {
    if ((int)uVar9 < iVar12) {
      uVar14 = iVar12 - uVar9;
      if (((int)(uVar14 | uVar9) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar14 != 0) {
        pFVar2 = (this->Updates).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar12 = ((this->Updates).ArrayNum - uVar14) - uVar9;
        if (iVar12 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar14 * 8,(longlong)iVar12 << 3);
        }
        piVar1 = &(this->Updates).ArrayNum;
        *piVar1 = *piVar1 - uVar14;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

