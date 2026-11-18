// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ProcessQueues<UE::GC::FAROQueue::FFew> @ 141ff62e0

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::GC::FSlowAROManager::ProcessQueues<UE::GC::FAROQueue::FFew>
          (FWorkerContext *param_1,TArrayView<UE::GC::FAROQueue,int> *param_2,
          _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *param_3,
          FReferenceCollector *param_4,uint *param_5)

{
  UObject **ppUVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  UObject *pUVar6;
  code *pcVar7;
  atomic<unsigned_int> aVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TArrayView<UE::GC::FAROQueue,int> *pTVar14;
  uint uVar15;
  FAROQueue *pFVar16;
  FAROQueue *pFVar17;
  int local_d8;
  FAROQueue *local_d0;
  atomic<unsigned_int> *local_c8;
  UObject **local_b8;
  int iStack_b0;
  TArrayView<UE::GC::FAROQueue,int> local_68;
  FAROQueue *local_58;
  undefined8 uStack_50;
  
  iVar2 = (param_1->ObjectsToSerialize).WorkerIndex;
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15b,L"Invalid index (%lld)"), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  if ((param_2->ArrayNum < iVar2 + 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index + InNum <= ArrayNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15d,
                          L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pFVar16 = param_2->DataPtr + iVar2;
  pFVar17 = pFVar16 + 1;
  if (pFVar16 != pFVar17) {
    local_c8 = &pFVar16->Tail;
    local_d0 = pFVar16;
LAB_141ff63e0:
    do {
      aVar3 = pFVar16->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
        if ((uint)aVar3 < (int)aVar4 + 4U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff63e0;
          local_d8 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff63e0;
          local_d8 = (int)aVar8 - (int)aVar4;
        }
        if ((local_d8 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        if (local_d8 != 0) {
          do {
            ppUVar1 = local_b8 + local_d8;
            for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
              pUVar6 = *local_b8;
              param_1->ReferencingObject = pUVar6;
              (*param_3)(pUVar6,param_4);
              pFVar16 = local_d0;
            }
            *param_5 = *param_5 + local_d8;
            if (3 < *param_5) {
              return true;
            }
            do {
              while( true ) {
                aVar3 = pFVar16->Head;
                aVar4 = *local_c8;
                if ((uint)aVar3 <= (uint)aVar4) {
                  local_b8 = (UObject **)0x0;
                  iStack_b0 = 0;
                  goto LAB_141ff690c;
                }
                aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
                if ((uint)aVar3 < (int)aVar4 + 4U) {
                  aVar8 = aVar3;
                }
                if ((0xff < (uint)aVar4 >> 9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx / FAROBlock::NumWords < MaxBlocks",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c8,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar15 = (uint)aVar4 & 0x1ff;
                if ((0x1fe < uVar15) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c9,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar9 = (uint)aVar4 >> 9;
                if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Blocks[Idx / FAROBlock::NumWords]",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9ca,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
                if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
                LOCK();
                aVar3 = *local_c8;
                if (aVar4 == aVar3) {
                  *local_c8 = aVar8;
                }
                UNLOCK();
                pFVar16 = local_d0;
                if (aVar4 == aVar3) {
                  iStack_b0 = (int)aVar8 - (int)aVar4;
                  if ((iStack_b0 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    uVar12 = (*pcVar7)();
                    return (bool)uVar12;
                  }
                  goto LAB_141ff690c;
                }
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d1,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d2,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d3,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d4,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d5,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
              }
              UNLOCK();
              pFVar16 = local_d0;
            } while (aVar4 != aVar3);
            iStack_b0 = 0x1ff - uVar15;
            if ((iStack_b0 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
LAB_141ff690c:
            if (iStack_b0 == 0) break;
            local_d8 = iStack_b0;
          } while( true );
        }
      }
      pFVar16 = pFVar16 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar16;
    } while (pFVar16 != pFVar17);
  }
  iVar5 = param_2->ArrayNum;
  iVar13 = (iVar5 - iVar2) + -1;
  iVar10 = iVar5;
  if (iVar13 < iVar5) {
    iVar10 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar10) {
    iVar13 = iVar10;
  }
  pFVar17 = param_2->DataPtr + ((longlong)iVar5 - (longlong)iVar13);
  if ((iVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pFVar16 = pFVar17 + iVar13;
  if (pFVar17 != pFVar16) {
    local_c8 = &pFVar17->Tail;
    local_d0 = pFVar17;
LAB_141ff6a40:
    do {
      aVar3 = pFVar17->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
        if ((uint)aVar3 < (int)aVar4 + 4U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff6a40;
          local_d8 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff6a40;
          local_d8 = (int)aVar8 - (int)aVar4;
        }
        if ((local_d8 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        if (local_d8 != 0) {
          do {
            ppUVar1 = local_b8 + local_d8;
            for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
              pUVar6 = *local_b8;
              param_1->ReferencingObject = pUVar6;
              (*param_3)(pUVar6,param_4);
              pFVar17 = local_d0;
            }
            *param_5 = *param_5 + local_d8;
            if (3 < *param_5) {
              return true;
            }
            do {
              while( true ) {
                aVar3 = pFVar17->Head;
                aVar4 = *local_c8;
                if ((uint)aVar3 <= (uint)aVar4) {
                  local_b8 = (UObject **)0x0;
                  iStack_b0 = 0;
                  goto LAB_141ff6f75;
                }
                aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
                if ((uint)aVar3 < (int)aVar4 + 4U) {
                  aVar8 = aVar3;
                }
                if ((0xff < (uint)aVar4 >> 9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx / FAROBlock::NumWords < MaxBlocks",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c8,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar15 = (uint)aVar4 & 0x1ff;
                if ((0x1fe < uVar15) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c9,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar9 = (uint)aVar4 >> 9;
                if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Blocks[Idx / FAROBlock::NumWords]",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9ca,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
                if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
                LOCK();
                aVar3 = *local_c8;
                if (aVar4 == aVar3) {
                  *local_c8 = aVar8;
                }
                UNLOCK();
                pFVar17 = local_d0;
                if (aVar4 == aVar3) {
                  iStack_b0 = (int)aVar8 - (int)aVar4;
                  if ((iStack_b0 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    uVar12 = (*pcVar7)();
                    return (bool)uVar12;
                  }
                  goto LAB_141ff6f75;
                }
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d1,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d2,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d3,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d4,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d5,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
              }
              UNLOCK();
              pFVar17 = local_d0;
            } while (aVar4 != aVar3);
            iStack_b0 = 0x1ff - uVar15;
            if ((iStack_b0 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
LAB_141ff6f75:
            if (iStack_b0 == 0) break;
            local_d8 = iStack_b0;
          } while( true );
        }
      }
      pFVar17 = pFVar17 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar17;
    } while (pFVar17 != pFVar16);
  }
  pTVar14 = TArrayView<UE::GC::FAROQueue,int>::Slice(param_2,&local_68,0,iVar2);
  pFVar17 = pTVar14->DataPtr;
  uStack_50 = *(undefined8 *)&pTVar14->ArrayNum;
  pFVar16 = pFVar17 + (int)*(undefined8 *)&pTVar14->ArrayNum;
  if (pFVar17 != pFVar16) {
    local_c8 = &pFVar17->Tail;
    local_d0 = pFVar17;
    local_58 = pFVar17;
LAB_141ff7070:
    do {
      aVar3 = pFVar17->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
        if ((uint)aVar3 < (int)aVar4 + 4U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7070;
          iStack_b0 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7070;
          iStack_b0 = (int)aVar8 - (int)aVar4;
        }
        if ((iStack_b0 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
joined_r0x000141ff72d3:
        if (iStack_b0 != 0) {
          ppUVar1 = local_b8 + iStack_b0;
          for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
            pUVar6 = *local_b8;
            param_1->ReferencingObject = pUVar6;
            (*param_3)(pUVar6,param_4);
            pFVar17 = local_d0;
          }
          *param_5 = *param_5 + iStack_b0;
          if (3 < *param_5) {
            return true;
          }
          do {
            while( true ) {
              aVar3 = pFVar17->Head;
              aVar4 = *local_c8;
              if ((uint)aVar3 <= (uint)aVar4) {
                local_b8 = (UObject **)0x0;
                iStack_b0 = 0;
                goto joined_r0x000141ff72d3;
              }
              aVar8 = (atomic<unsigned_int>)((int)aVar4 + 4U);
              if ((uint)aVar3 < (int)aVar4 + 4U) {
                aVar8 = aVar3;
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9c8,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              uVar15 = (uint)aVar4 & 0x1ff;
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9c9,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              uVar9 = (uint)aVar4 >> 9;
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9ca,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
              if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = aVar8;
              }
              UNLOCK();
              pFVar17 = local_d0;
              if (aVar4 == aVar3) {
                iStack_b0 = (int)aVar8 - (int)aVar4;
                if ((iStack_b0 < 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                goto joined_r0x000141ff72d3;
              }
            }
            if ((0xff < (uint)aVar4 >> 9) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx / FAROBlock::NumWords < MaxBlocks",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d1,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((0x1fe < uVar15) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d2,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d3,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d4,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d5,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            LOCK();
            aVar3 = *local_c8;
            if (aVar4 == aVar3) {
              *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
            }
            UNLOCK();
            pFVar17 = local_d0;
          } while (aVar4 != aVar3);
          iStack_b0 = 0x1ff - uVar15;
          if ((iStack_b0 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          goto joined_r0x000141ff72d3;
        }
      }
      pFVar17 = pFVar17 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar17;
    } while (pFVar17 != pFVar16);
  }
  return false;
}

// ProcessQueues<UE::GC::FAROQueue::FMany> @ 141ff7690

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::GC::FSlowAROManager::ProcessQueues<UE::GC::FAROQueue::FMany>
          (FWorkerContext *param_1,TArrayView<UE::GC::FAROQueue,int> *param_2,
          _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *param_3,
          FReferenceCollector *param_4,uint *param_5)

{
  UObject **ppUVar1;
  int iVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  UObject *pUVar6;
  code *pcVar7;
  atomic<unsigned_int> aVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TArrayView<UE::GC::FAROQueue,int> *pTVar14;
  uint uVar15;
  FAROQueue *pFVar16;
  FAROQueue *pFVar17;
  int local_d8;
  FAROQueue *local_d0;
  atomic<unsigned_int> *local_c8;
  UObject **local_b8;
  int iStack_b0;
  TArrayView<UE::GC::FAROQueue,int> local_68;
  FAROQueue *local_58;
  undefined8 uStack_50;
  
  iVar2 = (param_1->ObjectsToSerialize).WorkerIndex;
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15b,L"Invalid index (%lld)"), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  if ((param_2->ArrayNum < iVar2 + 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index + InNum <= ArrayNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15d,
                          L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pFVar16 = param_2->DataPtr + iVar2;
  pFVar17 = pFVar16 + 1;
  if (pFVar16 != pFVar17) {
    local_c8 = &pFVar16->Tail;
    local_d0 = pFVar16;
LAB_141ff7790:
    do {
      aVar3 = pFVar16->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
        if ((uint)aVar3 < (int)aVar4 + 0x40U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7790;
          local_d8 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7790;
          local_d8 = (int)aVar8 - (int)aVar4;
        }
        if ((local_d8 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        if (local_d8 != 0) {
          do {
            ppUVar1 = local_b8 + local_d8;
            for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
              pUVar6 = *local_b8;
              param_1->ReferencingObject = pUVar6;
              (*param_3)(pUVar6,param_4);
              pFVar16 = local_d0;
            }
            *param_5 = *param_5 + local_d8;
            if (0x3f < *param_5) {
              return true;
            }
            do {
              while( true ) {
                aVar3 = pFVar16->Head;
                aVar4 = *local_c8;
                if ((uint)aVar3 <= (uint)aVar4) {
                  local_b8 = (UObject **)0x0;
                  iStack_b0 = 0;
                  goto LAB_141ff7cbc;
                }
                aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
                if ((uint)aVar3 < (int)aVar4 + 0x40U) {
                  aVar8 = aVar3;
                }
                if ((0xff < (uint)aVar4 >> 9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx / FAROBlock::NumWords < MaxBlocks",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c8,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar15 = (uint)aVar4 & 0x1ff;
                if ((0x1fe < uVar15) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c9,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar9 = (uint)aVar4 >> 9;
                if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Blocks[Idx / FAROBlock::NumWords]",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9ca,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
                if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
                LOCK();
                aVar3 = *local_c8;
                if (aVar4 == aVar3) {
                  *local_c8 = aVar8;
                }
                UNLOCK();
                pFVar16 = local_d0;
                if (aVar4 == aVar3) {
                  iStack_b0 = (int)aVar8 - (int)aVar4;
                  if ((iStack_b0 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    uVar12 = (*pcVar7)();
                    return (bool)uVar12;
                  }
                  goto LAB_141ff7cbc;
                }
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d1,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d2,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d3,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d4,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d5,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
              }
              UNLOCK();
              pFVar16 = local_d0;
            } while (aVar4 != aVar3);
            iStack_b0 = 0x1ff - uVar15;
            if ((iStack_b0 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
LAB_141ff7cbc:
            if (iStack_b0 == 0) break;
            local_d8 = iStack_b0;
          } while( true );
        }
      }
      pFVar16 = pFVar16 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar16;
    } while (pFVar16 != pFVar17);
  }
  iVar5 = param_2->ArrayNum;
  iVar13 = (iVar5 - iVar2) + -1;
  iVar10 = iVar5;
  if (iVar13 < iVar5) {
    iVar10 = iVar13;
  }
  iVar13 = 0;
  if (0 < iVar10) {
    iVar13 = iVar10;
  }
  pFVar17 = param_2->DataPtr + ((longlong)iVar5 - (longlong)iVar13);
  if ((iVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    uVar12 = (*pcVar7)();
    return (bool)uVar12;
  }
  pFVar16 = pFVar17 + iVar13;
  if (pFVar17 != pFVar16) {
    local_c8 = &pFVar17->Tail;
    local_d0 = pFVar17;
LAB_141ff7df0:
    do {
      aVar3 = pFVar17->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
        if ((uint)aVar3 < (int)aVar4 + 0x40U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7df0;
          local_d8 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff7df0;
          local_d8 = (int)aVar8 - (int)aVar4;
        }
        if ((local_d8 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        if (local_d8 != 0) {
          do {
            ppUVar1 = local_b8 + local_d8;
            for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
              pUVar6 = *local_b8;
              param_1->ReferencingObject = pUVar6;
              (*param_3)(pUVar6,param_4);
              pFVar17 = local_d0;
            }
            *param_5 = *param_5 + local_d8;
            if (0x3f < *param_5) {
              return true;
            }
            do {
              while( true ) {
                aVar3 = pFVar17->Head;
                aVar4 = *local_c8;
                if ((uint)aVar3 <= (uint)aVar4) {
                  local_b8 = (UObject **)0x0;
                  iStack_b0 = 0;
                  goto LAB_141ff8325;
                }
                aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
                if ((uint)aVar3 < (int)aVar4 + 0x40U) {
                  aVar8 = aVar3;
                }
                if ((0xff < (uint)aVar4 >> 9) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx / FAROBlock::NumWords < MaxBlocks",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c8,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar15 = (uint)aVar4 & 0x1ff;
                if ((0x1fe < uVar15) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9c9,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                uVar9 = (uint)aVar4 >> 9;
                if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Blocks[Idx / FAROBlock::NumWords]",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                        ,0x9ca,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
                if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
                LOCK();
                aVar3 = *local_c8;
                if (aVar4 == aVar3) {
                  *local_c8 = aVar8;
                }
                UNLOCK();
                pFVar17 = local_d0;
                if (aVar4 == aVar3) {
                  iStack_b0 = (int)aVar8 - (int)aVar4;
                  if ((iStack_b0 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    uVar12 = (*pcVar7)();
                    return (bool)uVar12;
                  }
                  goto LAB_141ff8325;
                }
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d1,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d2,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d3,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d4,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9d5,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
              }
              UNLOCK();
              pFVar17 = local_d0;
            } while (aVar4 != aVar3);
            iStack_b0 = 0x1ff - uVar15;
            if ((iStack_b0 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
LAB_141ff8325:
            if (iStack_b0 == 0) break;
            local_d8 = iStack_b0;
          } while( true );
        }
      }
      pFVar17 = pFVar17 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar17;
    } while (pFVar17 != pFVar16);
  }
  pTVar14 = TArrayView<UE::GC::FAROQueue,int>::Slice(param_2,&local_68,0,iVar2);
  pFVar17 = pTVar14->DataPtr;
  uStack_50 = *(undefined8 *)&pTVar14->ArrayNum;
  pFVar16 = pFVar17 + (int)*(undefined8 *)&pTVar14->ArrayNum;
  if (pFVar17 != pFVar16) {
    local_c8 = &pFVar17->Tail;
    local_d0 = pFVar17;
    local_58 = pFVar17;
LAB_141ff8420:
    do {
      aVar3 = pFVar17->Head;
      aVar4 = *local_c8;
      if ((uint)aVar4 < (uint)aVar3) {
        aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
        if ((uint)aVar3 < (int)aVar4 + 0x40U) {
          aVar8 = aVar3;
        }
        if ((0xff < (uint)aVar4 >> 9) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx / FAROBlock::NumWords < MaxBlocks",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar15 = (uint)aVar4 & 0x1ff;
        if ((0x1fe < uVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9c9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        uVar9 = (uint)aVar4 >> 9;
        if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Blocks[Idx / FAROBlock::NumWords]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x9ca,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
        if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) {
          if ((0xff < (uint)aVar4 >> 9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx / FAROBlock::NumWords < MaxBlocks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d1,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1fe < uVar15) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d3,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x9d5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff8420;
          iStack_b0 = 0x1ff - uVar15;
        }
        else {
          LOCK();
          aVar3 = *local_c8;
          if (aVar4 == aVar3) {
            *local_c8 = aVar8;
          }
          UNLOCK();
          if (aVar4 != aVar3) goto LAB_141ff8420;
          iStack_b0 = (int)aVar8 - (int)aVar4;
        }
        if ((iStack_b0 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
joined_r0x000141ff8683:
        if (iStack_b0 != 0) {
          ppUVar1 = local_b8 + iStack_b0;
          for (; local_b8 != ppUVar1; local_b8 = local_b8 + 1) {
            pUVar6 = *local_b8;
            param_1->ReferencingObject = pUVar6;
            (*param_3)(pUVar6,param_4);
            pFVar17 = local_d0;
          }
          *param_5 = *param_5 + iStack_b0;
          if (0x3f < *param_5) {
            return true;
          }
          do {
            while( true ) {
              aVar3 = pFVar17->Head;
              aVar4 = *local_c8;
              if ((uint)aVar3 <= (uint)aVar4) {
                local_b8 = (UObject **)0x0;
                iStack_b0 = 0;
                goto joined_r0x000141ff8683;
              }
              aVar8 = (atomic<unsigned_int>)((int)aVar4 + 0x40U);
              if ((uint)aVar3 < (int)aVar4 + 0x40U) {
                aVar8 = aVar3;
              }
              if ((0xff < (uint)aVar4 >> 9) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx / FAROBlock::NumWords < MaxBlocks",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9c8,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              uVar15 = (uint)aVar4 & 0x1ff;
              if ((0x1fe < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9c9,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              uVar9 = (uint)aVar4 >> 9;
              if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Blocks[Idx / FAROBlock::NumWords]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x9ca,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                uVar12 = (*pcVar7)();
                return (bool)uVar12;
              }
              local_b8 = GAROBlocks.Blocks[uVar9]->Objects + ((uint)aVar4 & 0x1ff);
              if (((uint)aVar4 & 0xfffffe00) + 0x1fe < (uint)aVar8) break;
              LOCK();
              aVar3 = *local_c8;
              if (aVar4 == aVar3) {
                *local_c8 = aVar8;
              }
              UNLOCK();
              pFVar17 = local_d0;
              if (aVar4 == aVar3) {
                iStack_b0 = (int)aVar8 - (int)aVar4;
                if ((iStack_b0 < 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  uVar12 = (*pcVar7)();
                  return (bool)uVar12;
                }
                goto joined_r0x000141ff8683;
              }
            }
            if ((0xff < (uint)aVar4 >> 9) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx / FAROBlock::NumWords < MaxBlocks",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d1,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((0x1fe < uVar15) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d2,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((GAROBlocks.Blocks[uVar9] == (FAROBlock *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d3,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if (((GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0x1ff) != 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d4,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            if ((0x1ffff < (GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock & 0xfffffe00)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                    ,0x9d5,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return (bool)uVar12;
            }
            LOCK();
            aVar3 = *local_c8;
            if (aVar4 == aVar3) {
              *local_c8 = (atomic<unsigned_int>)GAROBlocks.Blocks[uVar9]->FirstIndexInNextBlock;
            }
            UNLOCK();
            pFVar17 = local_d0;
          } while (aVar4 != aVar3);
          iStack_b0 = 0x1ff - uVar15;
          if ((iStack_b0 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          goto joined_r0x000141ff8683;
        }
      }
      pFVar17 = pFVar17 + 1;
      local_c8 = local_c8 + 0x20;
      local_d0 = pFVar17;
    } while (pFVar17 != pFVar16);
  }
  return false;
}

// GetQueue @ 142055bc0

FAROQueue * __thiscall
UE::GC::FSlowAROManager::GetQueue(FSlowAROManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAROQueue *pFVar4;
  uint uVar5;
  
  if (this->NumWorkers <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkerIdx < NumWorkers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xaca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAROQueue *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->AROs).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AROIdx < AROs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xacb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAROQueue *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar5 = param_1 * this->NumWorkers + param_2;
  uVar3 = 0;
  if ((int)uVar5 < (this->AllQueues).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAROQueue *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FAROQueue *)((this->AllQueues).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x80);
}

// ProcessAllQueues @ 142067b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::GC::FSlowAROManager::ProcessAllQueues
          (FSlowAROManager *this,FWorkerContext *param_1,FReferenceCollector *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_res10;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98 [2];
  FAROQueue *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<UE::GC::FAROQueue,int> local_78;
  TArrayView<UE::GC::FAROQueue,int> local_68 [3];
  
  uVar1 = (this->AROs).ArrayNum;
  uVar10 = 0;
  local_res8[0] = 0;
  bVar7 = false;
  QueryPerformanceCounter(&local_res20);
  dVar6 = __real_4170000000000000;
  uVar13 = (ulonglong)(uint)(param_1->ObjectsToSerialize).WorkerIndex % (ulonglong)uVar1;
  local_res10 = (uint)uVar13 + uVar1;
  dVar5 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          ___real_41700000000068dc;
  if ((uint)uVar13 < local_res10) {
    do {
      if (bVar7) break;
      iVar2 = this->NumWorkers;
      uVar12 = (uint)uVar13;
      uVar10 = 0;
      if (uVar1 <= uVar12) {
        uVar10 = uVar1;
      }
      uVar10 = uVar12 - uVar10;
      if ((iVar2 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorkerIdx < NumWorkers",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xaca,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (((this->AROs).ArrayNum <= (int)uVar10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AROIdx < AROs.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xacb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      uVar11 = uVar10 * this->NumWorkers;
      uVar9 = 0;
      if ((int)uVar11 < (this->AllQueues).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      local_88 = (FAROQueue *)
                 ((this->AllQueues).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x80);
      iStack_80 = iVar2;
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      iVar2 = (this->AROs).ArrayNum;
      bVar4 = (byte)uVar10 & 0x1f;
      if ((this->ExtraSlowAROs >> bVar4 & 1) == 0) {
        uVar9 = 0 >> bVar4;
        if ((int)uVar10 < iVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        local_68[0]._12_4_ = uStack_7c;
        local_68[0].ArrayNum = iStack_80;
        local_68[0].DataPtr = local_88;
        bVar7 = ProcessQueues<UE::GC::FAROQueue::FMany>
                          (param_1,local_68,
                           *(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr **)
                            (this->AROs).AllocatorInstance.InlineData[(int)uVar10].Pad,param_2,
                           local_res8);
      }
      else {
        uVar9 = 0 >> bVar4;
        if ((int)uVar10 < iVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        local_78._12_4_ = uStack_7c;
        local_78.ArrayNum = iStack_80;
        local_78.DataPtr = local_88;
        bVar7 = ProcessQueues<UE::GC::FAROQueue::FFew>
                          (param_1,&local_78,
                           *(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr **)
                            (this->AROs).AllocatorInstance.InlineData[(int)uVar10].Pad,param_2,
                           local_res8);
      }
      uVar10 = local_res8[0];
      if ((bVar7 != false) ||
         ((local_res8[0] != 0 &&
          (QueryPerformanceCounter(local_98),
          dVar5 < (double)local_98[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < local_res10);
  }
  return uVar10 != 0;
}

// RegisterImplementation @ 14208cb10

void __thiscall
UE::GC::FSlowAROManager::RegisterImplementation
          (FSlowAROManager *this,_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *param_1,
          EAROFlags param_2)

{
  TArray<void_(__cdecl*)(UObject_*,FReferenceCollector_&),TFixedAllocator<8>_> *pTVar1;
  int *piVar2;
  TArray<int,TFixedAllocator<2>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<void_(__cdecl*)(UObject_*,FReferenceCollector_&),TFixedAllocator<8>_> *pTVar7;
  TTypeCompatibleBytes<void_(__cdecl*)(UObject_*,FReferenceCollector_&)> local_res10;
  ForElementType<int> local_18 [2];
  
  local_res10.Pad = (uchar  [8])param_1;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xa61,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = &this->AROs;
  pTVar7 = pTVar1;
  do {
    if (pTVar7 == (TArray<void_(__cdecl*)(UObject_*,FReferenceCollector_&),TFixedAllocator<8>_> *)
                  ((pTVar1->AllocatorInstance).InlineData + (this->AROs).ArrayNum)) {
LAB_14208cbb7:
      if ((7 < (this->AROs).ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AROs.Num() < Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xa63,
                             L"Don\'t register this many slow AROs, memory consumption and work-stealing time increases linearly"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_18[0].InlineData[0].Pad = (uchar  [4])(this->AROs).ArrayNum;
      if (((pTVar1 <= &local_res10) &&
          (&local_res10 < (pTVar1->AllocatorInstance).InlineData + (this->AROs).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->AROs).ArrayNum;
      piVar2 = &(this->AROs).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<void_(__cdecl*)(UObject_*,FReferenceCollector_&)>_>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->AROs).ArrayNum = iVar6 + 1;
      *&(pTVar1->AllocatorInstance).InlineData[iVar6].Pad = local_res10.Pad;
      if ((param_2 & Unbalanced) != None) {
        pTVar3 = &this->UnbalancedAROIndices;
        if (((pTVar3 <= local_18) &&
            (local_18 <
             (pTVar3->AllocatorInstance).InlineData + (this->UnbalancedAROIndices).ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (this->UnbalancedAROIndices).ArrayNum;
        piVar2 = &(this->UnbalancedAROIndices).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<int>_>
                            (0x404,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->UnbalancedAROIndices).ArrayNum = iVar6 + 1;
        *&(pTVar3->AllocatorInstance).InlineData[iVar6].Pad = local_18[0].InlineData[0].Pad;
      }
      this->ExtraSlowAROs =
           this->ExtraSlowAROs | (param_2 >> 1 & 1) << (local_18[0].InlineData[0].Pad[0] & 0x1f);
      return;
    }
    if (*&(pTVar7->AllocatorInstance).InlineData[0].Pad == local_res10.Pad) {
      if (((int)((longlong)pTVar7 - (longlong)pTVar1 >> 3) != -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AROs.Find(ARO) == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xa62,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14208cbb7;
    }
    pTVar7 = (TArray<void_(__cdecl*)(UObject_*,FReferenceCollector_&),TFixedAllocator<8>_> *)
             ((pTVar7->AllocatorInstance).InlineData + 1);
  } while( true );
}

// SetupWorkerQueues @ 14208f160

void __thiscall UE::GC::FSlowAROManager::SetupWorkerQueues(FSlowAROManager *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((this->AllQueues).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllQueues.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xa77,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NumWorkers = param_1;
  uVar4 = param_1 * (this->AROs).ArrayNum;
  iVar1 = (this->AllQueues).ArrayNum;
  if (iVar1 < (int)uVar4) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x40,uVar4 - iVar1,&(this->AllQueues).AllocatorInstance,
               &(this->AllQueues).ArrayNum,&(this->AllQueues).ArrayMax);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar1) {
      uVar7 = iVar1 - uVar4;
      if ((int)(uVar7 | uVar4) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar7 != 0) {
        TArray<UE::GC::FAROQueue,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->AllQueues,uVar4,uVar7);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x40,&(this->AllQueues).AllocatorInstance,(this->AllQueues).ArrayNum,
                   &(this->AllQueues).ArrayMax);
      }
    }
  }
  iVar6 = 0;
  iVar1 = (this->AROs).ArrayNum;
  if (0 < iVar1) {
    do {
      iVar5 = 0;
      if (0 < this->NumWorkers) {
        if (this->NumWorkers < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorkerIdx < NumWorkers",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xaca,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        do {
          if ((this->AROs).ArrayNum <= iVar6) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("AROIdx < AROs.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xacb,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar7 = iVar6 * this->NumWorkers + iVar5;
          uVar4 = 0;
          if ((int)uVar7 < (this->AllQueues).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          FAROQueue::FAROQueue
                    ((FAROQueue *)
                     ((this->AllQueues).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x80),iVar5)
          ;
          iVar5 = iVar5 + 1;
        } while (iVar5 < this->NumWorkers);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}

