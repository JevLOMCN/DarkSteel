// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// AsyncRun @ 14323a220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FFileManifestList * __thiscall
BuildPatchServices::FChunkMatchStomper::AsyncRun
          (FChunkMatchStomper *this,FFileManifestList *__return_storage_ptr__)

{
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
  *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FBlockEntry *pFVar4;
  ulong64 uVar5;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  void *pvVar8;
  bool bVar9;
  longlong lVar10;
  FBlockEntry *pFVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  FFileManifestList *pFVar14;
  TDoubleLinkedListNode *pTVar15;
  void *pvVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  TDoubleLinkedListNode *pTVar24;
  ulonglong uVar25;
  void *pvVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  FBlockRange local_1b0;
  ulonglong *local_1a0;
  FChunkSearcher local_198;
  ulonglong *local_168;
  ulonglong *local_160;
  uint local_158;
  void *local_150;
  ulonglong *local_148;
  void *local_140;
  ulonglong local_138;
  FBlockStructure local_130;
  TDoubleLinkedListNode *local_120;
  TDoubleLinkedListNode *local_118;
  void *local_110;
  undefined8 local_108;
  FBlockStructure local_100;
  void *local_f0;
  FChunkMatchStomper *local_e8;
  FFileManifestList *local_e0;
  FBlockRange local_d8;
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  TSet<BuildPatchServices::FChunkSearcher::FFileNode_*,DefaultKeyFuncs<BuildPatchServices::FChunkSearcher::FFileNode_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_e8 = this;
  local_e0 = __return_storage_ptr__;
  FChunkSearcher::FChunkSearcher<FBuildPatchAppManifest>(&local_198,this->ManifestB);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  for (pTVar15 = local_198.FileLinkedList.HeadNode; pTVar15 != (TDoubleLinkedListNode *)0x0;
      pTVar15 = pTVar15->NextNode) {
    for (pTVar24 = (pTVar15->Value).ChunkParts.HeadNode; pTVar24 != (TDoubleLinkedListNode *)0x0;
        pTVar24 = pTVar24->NextNode) {
      lVar10 = (**(code **)(this->ManifestA->_padding_ + 0x218))
                         (this->ManifestA,&(pTVar24->Value).ChunkPart);
      if (lVar10 == 0) {
        (pTVar24->Value).ChunkPart.Guid.C = 0;
        (pTVar24->Value).ChunkPart.Guid.D = 0;
        (pTVar24->Value).ChunkPart.Guid.A = 0;
        (pTVar24->Value).ChunkPart.Guid.B = 0;
      }
    }
  }
  local_140 = (void *)0x0;
  local_130.Head = (FBlockEntry *)0x0;
  local_130.Tail = (FBlockEntry *)0x0;
  local_138 = 0;
  pvVar16 = (void *)0x0;
  do {
    while (pTVar2 = ((this->NewMatchQueue).Tail)->NextNode, pTVar2 == (TNode *)0x0) {
      if (this->bExpectsMoreData == (FThreadSafeBool)0x0) {
        ClobberAllKnownChunks(this,&local_198,&local_98);
        pFVar14 = local_e0;
        for (; local_e0 = pFVar14, local_198.FileLinkedList.HeadNode != (TDoubleLinkedListNode *)0x0
            ; local_198.FileLinkedList.HeadNode = (local_198.FileLinkedList.HeadNode)->NextNode) {
          MergeAdjacentChunkParts(this,&((local_198.FileLinkedList.HeadNode)->Value).ChunkParts);
          pFVar14 = local_e0;
        }
        FChunkSearcher::BuildNewFileManifestList(&local_198,pFVar14);
        pFVar11 = local_130.Head;
        while (pFVar11 != (FBlockEntry *)0x0) {
          pFVar4 = pFVar11->Next;
          pFVar11->Prev = (FBlockEntry *)0x0;
          pFVar11->Next = (FBlockEntry *)0x0;
          ::operator_delete(pFVar11,0x20);
          pFVar11 = pFVar4;
        }
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<BuildPatchServices::FChunkSearcher::FFileNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<BuildPatchServices::FChunkSearcher::FFileNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::
        ~TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>(&local_198.FileLinkedList)
        ;
        return pFVar14;
      }
      (**(code **)(this->ThreadTrigger->_padding_ + 0x20))(this->ThreadTrigger,1000,0);
      (**(code **)(this->ThreadTrigger->_padding_ + 0x18))();
    }
    pTVar1 = &pTVar2->Item;
    if ((TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
         *)&local_140 != pTVar1) {
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      local_140 = *(void **)pTVar1;
      *(undefined8 *)pTVar1 = 0;
      local_138 = *(ulonglong *)&(pTVar2->Item).field_0x8;
      *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    }
    FBlockStructure::operator=(&local_130,(FBlockStructure *)&(pTVar2->Item).field_0x10);
    pTVar3 = (this->NewMatchQueue).Tail;
    (this->NewMatchQueue).Tail = pTVar2;
    local_110 = (void *)0x0;
    local_108 = 0;
    local_100.Head = (FBlockEntry *)0x0;
    local_100.Tail = (FBlockEntry *)0x0;
    if (pTVar1 != (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,BuildPatchServices::FBlockStructure>
                   *)&local_110) {
      if (*(void **)pTVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar1);
      }
      *(undefined8 *)pTVar1 = 0;
      *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    }
    FBlockStructure::operator=((FBlockStructure *)&(pTVar2->Item).field_0x10,&local_100);
    pFVar11 = local_100.Head;
    if (local_100.Head != (FBlockEntry *)0x0) {
      do {
        pFVar4 = pFVar11->Next;
        local_100.Tail = pFVar4;
        if (pFVar11 != (FBlockEntry *)0x0) {
          pFVar11->Prev = (FBlockEntry *)0x0;
          pFVar11->Next = (FBlockEntry *)0x0;
          ::operator_delete(pFVar11,0x20);
        }
        pFVar11 = pFVar4;
      } while (pFVar4 != (FBlockEntry *)0x0);
      local_100.Head = (FBlockEntry *)0x0;
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if (pTVar3 != (TNode *)0x0) {
      pvVar16 = *(void **)&(pTVar3->Item).field_0x10;
      while (pvVar16 != (void *)0x0) {
        *(undefined8 *)&(pTVar3->Item).field_0x18 = *(undefined8 *)((longlong)pvVar16 + 0x18);
        *(undefined8 *)((longlong)pvVar16 + 0x10) = 0;
        *(undefined8 *)((longlong)pvVar16 + 0x18) = 0;
        ::operator_delete(pvVar16,0x20);
        pvVar16 = *(void **)&(pTVar3->Item).field_0x18;
        *(void **)&(pTVar3->Item).field_0x10 = pvVar16;
      }
      if (*(void **)&pTVar3->Item != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar3->Item);
      }
      ::operator_delete(pTVar3,0x28);
    }
    uVar19 = (ulonglong)(int)(uint)local_138;
    local_168 = (ulonglong *)0x0;
    local_158 = (uint)local_138;
    local_f0 = (void *)((longlong)local_140 + uVar19 * 0x18);
    pvVar26 = local_140;
    uVar25 = uVar19;
    while( true ) {
      pvVar8 = local_f0;
      local_150 = pvVar26;
      if ((int)uVar19 != (int)uVar25) {
        local_1b8[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1b8);
      }
      puVar29 = (ulonglong *)0x0;
      pvVar16 = local_140;
      this = local_e8;
      if (pvVar26 == pvVar8) break;
      puVar23 = (ulonglong *)(ulonglong)*(uint *)((longlong)pvVar26 + 0x14);
      local_1a0 = (ulonglong *)0x0;
      local_148 = puVar23;
      puVar12 = puVar29;
      puVar28 = puVar29;
      puVar30 = puVar29;
      puVar13 = puVar29;
      puVar27 = local_168;
      pFVar11 = local_130.Head;
      while ((pFVar11 != (FBlockEntry *)0x0 && (pvVar26 = local_150, puVar28 < puVar23))) {
        uVar21 = pFVar11->Size;
        local_160 = (ulonglong *)((longlong)puVar13 + uVar21);
        puVar13 = puVar30;
        if (puVar27 < local_160) {
          lVar10 = (longlong)puVar27 - (longlong)puVar29;
          if (puVar27 <= puVar29) {
            lVar10 = 0;
          }
          uVar19 = pFVar11->Offset + lVar10;
          uVar25 = (longlong)puVar23 - (longlong)puVar28;
          if (uVar21 - lVar10 < (ulonglong)((longlong)puVar23 - (longlong)puVar28)) {
            uVar25 = uVar21 - lVar10;
          }
          if (uVar25 != 0) {
            if (puVar12 == (ulonglong *)0x0) {
              local_1a0 = ::operator_new(0x20);
              if (local_1a0 == (ulonglong *)0x0) {
                local_1a0 = (ulonglong *)0x0;
                puVar12 = local_1a0;
                puVar13 = local_1a0;
              }
              else {
                *local_1a0 = uVar19;
                local_1a0[1] = uVar25;
                local_1a0[2] = 0;
                local_1a0[3] = 0;
                puVar12 = local_1a0;
                puVar13 = local_1a0;
              }
            }
            else {
              puVar23 = puVar30;
              if (puVar30 == (ulonglong *)0x0) goto LAB_14323a6f2;
              do {
                uVar31 = *puVar23;
                uVar20 = puVar23[1] + uVar31;
                if (uVar20 < uVar19) {
                  puVar13 = ::operator_new(0x20);
                  if (puVar13 == (ulonglong *)0x0) {
                    puVar13 = (ulonglong *)0x0;
                  }
                  else {
                    *puVar13 = uVar19;
                    puVar13[1] = uVar25;
                    puVar13[3] = 0;
                  }
                  puVar13[2] = (ulonglong)puVar23;
                  puVar13[3] = puVar23[3];
                  puVar12 = local_1a0;
                  if (puVar23[3] == 0) {
                    puVar23[3] = (ulonglong)puVar13;
                  }
                  else {
                    *(ulonglong **)(puVar23[3] + 0x10) = puVar13;
                    puVar23[3] = (ulonglong)puVar13;
                    puVar13 = puVar30;
                  }
                  goto LAB_14323a6ee;
                }
                puVar27 = (ulonglong *)puVar23[2];
                uVar17 = uVar25 + uVar19;
                if (uVar31 <= uVar17) {
                  if (uVar31 < uVar19) {
                    uVar19 = uVar31;
                  }
                  *puVar23 = uVar19;
                  if (uVar20 < uVar17) {
                    uVar20 = uVar17;
                  }
                  puVar23[1] = uVar20 - uVar19;
                  goto joined_r0x00014323a5c5;
                }
                puVar23 = puVar27;
              } while (puVar27 != (ulonglong *)0x0);
              puVar12 = ::operator_new(0x20);
              if (puVar12 == (ulonglong *)0x0) {
                puVar12 = (ulonglong *)0x0;
              }
              else {
                *puVar12 = uVar19;
                puVar12[1] = uVar25;
                puVar12[2] = 0;
                puVar12[3] = 0;
              }
              puVar23 = local_1a0 + 2;
              puVar12[2] = local_1a0[2];
              puVar12[3] = (ulonglong)local_1a0;
              if (*puVar23 == 0) {
                *puVar23 = (ulonglong)puVar12;
                local_1a0 = puVar12;
              }
              else {
                *(ulonglong **)(*puVar23 + 0x18) = puVar12;
                *puVar23 = (ulonglong)puVar12;
                puVar12 = local_1a0;
              }
            }
LAB_14323a6ee:
            uVar21 = pFVar11->Size;
          }
LAB_14323a6f2:
          puVar28 = (ulonglong *)((longlong)puVar28 + uVar25);
          puVar23 = local_148;
          puVar27 = local_168;
        }
        pFVar11 = pFVar11->Next;
        puVar29 = (ulonglong *)((longlong)puVar29 + uVar21);
        pvVar26 = local_150;
        puVar30 = puVar13;
        puVar13 = local_160;
      }
      local_148 = (ulonglong *)0x0;
      local_c8 = (code *)0x0;
      local_a0 = (longlong *)0x0;
      local_a0 = FMemory::Malloc(0x20,8);
      local_160 = local_1a0;
      *local_a0 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`DeltaOptimiseHelpers::StompChunkPart'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_a0[1] = (longlong)&local_98;
      local_a0[2] = (longlong)pvVar26;
      local_a0[3] = (longlong)&local_148;
      if (local_a0 + 1 != (longlong *)0x0) {
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`DeltaOptimiseHelpers::StompChunkPart'::__l2::<lambda_1>,void,BuildPatchServices::FBlockRange_const_&,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode_*,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode_*>
                   ::Call;
      }
      pTVar24 = local_198.CurrChunk;
      puVar29 = local_1a0;
      if (local_1a0 != (ulonglong *)0x0) {
        do {
          uVar25 = puVar29[1];
          uVar19 = *puVar29;
          local_1b0.First = uVar19;
          local_1b0.Size = uVar25;
          local_160 = puVar29;
          if (uVar25 != 0) {
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."),
               pTVar24 = local_198.CurrChunk, bVar9)) {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
            if (((uVar19 - 1) + uVar25 < uVar19) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x2f,L"Byte range has uint64 overflow."),
               pTVar24 = local_198.CurrChunk, bVar9)) {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
          }
          if ((local_198.CurrFile == (TDoubleLinkedListNode *)0x0) ||
             (pTVar24 == (TDoubleLinkedListNode *)0x0)) {
            local_198.CurrFile = local_198.FileLinkedList.HeadNode;
            local_198.CurrChunk = ((local_198.FileLinkedList.HeadNode)->Value).ChunkParts.HeadNode;
          }
          pTVar15 = FChunkSearcher::
                    FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode>
                              (&local_198,&local_198.FileLinkedList,local_198.CurrFile,&local_1b0);
          if (local_198.CurrFile != pTVar15) {
            local_198.CurrChunk = (pTVar15->Value).ChunkParts.HeadNode;
            local_198.CurrFile = pTVar15;
          }
          if (((((local_198.CurrFile)->Value).BuildRange.Size == 0) || (uVar25 == 0)) ||
             ((uVar19 - 1) + uVar25 < ((local_198.CurrFile)->Value).BuildRange.First)) {
LAB_14323a8d7:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrFile->GetValue().BuildRange.Overlaps(BlockRange)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                               ,0x9d,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
          }
          else {
            uVar21 = ((local_198.CurrFile)->Value).BuildRange.Size;
            uVar5 = ((local_198.CurrFile)->Value).BuildRange.First;
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar9))
            {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
            if ((uVar21 - 1) + uVar5 < uVar19) goto LAB_14323a8d7;
          }
          local_198.CurrChunk =
               FChunkSearcher::
               FindFirst<TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode>
                         (&local_198,&((local_198.CurrFile)->Value).ChunkParts,local_198.CurrChunk,
                          &local_1b0);
          if (((((local_198.CurrChunk)->Value).BuildRange.Size == 0) || (uVar25 == 0)) ||
             ((uVar19 - 1) + uVar25 < ((local_198.CurrChunk)->Value).BuildRange.First)) {
LAB_14323a98d:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrChunk->GetValue().BuildRange.Overlaps(BlockRange)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkSearch.h"
                               ,0xa1,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
          }
          else {
            uVar21 = ((local_198.CurrChunk)->Value).BuildRange.Size;
            uVar5 = ((local_198.CurrChunk)->Value).BuildRange.First;
            if ((uVar25 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar9))
            {
              pcVar7 = (code *)swi(3);
              pFVar14 = (FFileManifestList *)(*pcVar7)();
              return pFVar14;
            }
            if ((uVar21 - 1) + uVar5 < uVar19) goto LAB_14323a98d;
          }
          pTVar24 = local_198.CurrChunk;
          puVar12 = puVar29;
          if (local_198.CurrFile != (TDoubleLinkedListNode *)0x0) {
            while ((((puVar12 = local_160, pTVar24 != (TDoubleLinkedListNode *)0x0 &&
                     (((local_198.CurrFile)->Value).BuildRange.Size != 0)) && (uVar25 != 0)) &&
                   (((local_198.CurrFile)->Value).BuildRange.First <= (uVar19 - 1) + uVar25))) {
              uVar21 = ((local_198.CurrFile)->Value).BuildRange.First;
              uVar5 = ((local_198.CurrFile)->Value).BuildRange.Size;
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x11,L"Using GetFirst for a 0 size range is invalid."),
                 pTVar24 = local_198.CurrChunk, bVar9)) {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              puVar12 = local_160;
              if ((((uVar21 - 1) + uVar5 < uVar19) || ((pTVar24->Value).BuildRange.Size == 0)) ||
                 ((uVar25 == 0 || ((uVar19 - 1) + uVar25 < (pTVar24->Value).BuildRange.First))))
              break;
              uVar21 = (pTVar24->Value).BuildRange.First;
              uVar5 = (pTVar24->Value).BuildRange.Size;
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x11,L"Using GetFirst for a 0 size range is invalid."),
                 pTVar24 = local_198.CurrChunk, bVar9)) {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              puVar12 = local_160;
              if ((uVar21 - 1) + uVar5 < uVar19) break;
              pTVar6 = pTVar24->NextNode;
              if ((((pTVar24->Value).BuildRange.Size == 0) || (uVar25 == 0)) ||
                 ((uVar19 - 1) + uVar25 < (pTVar24->Value).BuildRange.First)) {
LAB_14323ab27:
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RangeA.Overlaps(RangeB)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                   ,0x3b,L"Invalid args, ranges must overlap.");
                if (bVar9) {
                  pcVar7 = (code *)swi(3);
                  pFVar14 = (FFileManifestList *)(*pcVar7)();
                  return pFVar14;
                }
              }
              else {
                uVar21 = (pTVar24->Value).BuildRange.First;
                uVar5 = (pTVar24->Value).BuildRange.Size;
                if ((uVar25 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Size > 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                       ,0x11,L"Using GetFirst for a 0 size range is invalid."),
                   bVar9)) {
                  pcVar7 = (code *)swi(3);
                  pFVar14 = (FFileManifestList *)(*pcVar7)();
                  return pFVar14;
                }
                if ((uVar21 - 1) + uVar5 < uVar19) goto LAB_14323ab27;
              }
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar9))
              {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              if (((pTVar24->Value).BuildRange.Size == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar9))
              {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              lVar22 = (pTVar24->Value).BuildRange.Size + (pTVar24->Value).BuildRange.First;
              lVar10 = uVar25 + uVar19;
              if (lVar22 - 1U < (uVar25 + uVar19) - 1) {
                lVar10 = lVar22;
              }
              if ((uVar25 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar9)
                 ) {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              if (((pTVar24->Value).BuildRange.Size == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Size > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                     ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar9)
                 ) {
                pcVar7 = (code *)swi(3);
                pFVar14 = (FFileManifestList *)(*pcVar7)();
                return pFVar14;
              }
              uVar31 = uVar19;
              if (uVar19 < (pTVar24->Value).BuildRange.First) {
                uVar31 = (pTVar24->Value).BuildRange.First;
              }
              FBlockRange::FromFirstAndLast(&local_d8,uVar31,lVar10 - 1);
              local_120 = local_198.CurrChunk;
              local_118 = local_198.CurrFile;
              UE::Core::Private::Function::CheckCallable(local_c8);
              pcVar7 = local_c8;
              plVar18 = local_b8;
              if (local_a0 != (longlong *)0x0) {
                plVar18 = local_a0;
              }
              pvVar16 = (void *)(**(code **)(*plVar18 + 8))();
              pTVar24 = pTVar6;
              if (pcVar7 == UE::Core::Private::Function::
                            TFunctionRefCaller<`DeltaOptimiseHelpers::StompChunkPart'::__l2::<lambda_1>,void,BuildPatchServices::FBlockRange_const_&,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FFileNode>::TDoubleLinkedListNode_*,TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::TDoubleLinkedListNode_*>
                            ::Call) {
                `DeltaOptimiseHelpers::StompChunkPart'::__l2::<lambda_1>::operator()
                          (pvVar16,&local_d8,local_118,local_120);
                local_198.CurrChunk = pTVar6;
              }
              else {
                (*pcVar7)(pvVar16,&local_d8,&local_118,&local_120);
                local_198.CurrChunk = pTVar6;
              }
              while (puVar12 = local_160, pTVar24 == (TDoubleLinkedListNode *)0x0) {
                if (local_198.CurrFile == (TDoubleLinkedListNode *)0x0) goto LAB_14323ad07;
                local_198.CurrFile = (local_198.CurrFile)->NextNode;
                if (local_198.CurrFile != (TDoubleLinkedListNode *)0x0) {
                  pTVar24 = ((local_198.CurrFile)->Value).ChunkParts.HeadNode;
                  local_198.CurrChunk = pTVar24;
                }
              }
              if (local_198.CurrFile == (TDoubleLinkedListNode *)0x0) break;
            }
          }
LAB_14323ad07:
          puVar29 = (ulonglong *)puVar12[3];
        } while ((ulonglong *)puVar12[3] != (ulonglong *)0x0);
        local_160 = (ulonglong *)0x0;
        pvVar26 = local_150;
      }
      puVar29 = local_1a0;
      if (local_c8 != (code *)0x0) {
        plVar18 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar18 = local_a0;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      local_168 = (ulonglong *)
                  ((longlong)local_168 + (ulonglong)*(uint *)((longlong)pvVar26 + 0x14));
      while (puVar29 != (ulonglong *)0x0) {
        puVar12 = (ulonglong *)puVar29[3];
        puVar29[2] = 0;
        puVar29[3] = 0;
        ::operator_delete(puVar29,0x20);
        puVar29 = puVar12;
      }
      uVar19 = local_138 & 0xffffffff;
      pvVar26 = (void *)((longlong)pvVar26 + 0x18);
      uVar25 = (ulonglong)local_158;
    }
  } while( true );
joined_r0x00014323a5c5:
  if (puVar27 == (ulonglong *)0x0) goto LAB_14323a6ee;
  uVar19 = *puVar27;
  uVar31 = *puVar23;
  uVar20 = puVar27[1] + uVar19;
  puVar12 = local_1a0;
  if (uVar20 < uVar31) goto LAB_14323a6ee;
  if (uVar31 < uVar19) {
    uVar19 = uVar31;
  }
  *puVar23 = uVar19;
  uVar17 = uVar31 + puVar23[1];
  if (uVar31 + puVar23[1] < uVar20) {
    uVar17 = uVar20;
  }
  puVar23[1] = uVar17 - uVar19;
  puVar12 = (ulonglong *)puVar27[3];
  if (puVar27[2] != 0) {
    *(ulonglong **)(puVar27[2] + 0x18) = (ulonglong *)puVar27[3];
    puVar12 = local_1a0;
  }
  local_1a0 = puVar12;
  puVar30 = (ulonglong *)puVar27[2];
  if (puVar27[3] != 0) {
    *(ulonglong **)(puVar27[3] + 0x10) = puVar30;
    puVar30 = puVar13;
  }
  puVar27[2] = 0;
  puVar27[3] = 0;
  ::operator_delete(puVar27,0x20);
  puVar27 = (ulonglong *)puVar23[2];
  puVar12 = local_1a0;
  puVar13 = puVar30;
  goto joined_r0x00014323a5c5;
}

// ClobberAllKnownChunks @ 1432458a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkMatchStomper::ClobberAllKnownChunks
          (FChunkMatchStomper *this,FChunkSearcher *param_1,
          TSet<BuildPatchServices::FChunkSearcher::FFileNode_*,DefaultKeyFuncs<BuildPatchServices::FChunkSearcher::FFileNode_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FChunkPart *pFVar1;
  int iVar2;
  FBlockEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  FBlockEntry *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FChunkPart *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined1 local_88 [4];
  uint local_84;
  ulonglong local_80;
  FScriptContainerElement *local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  FBlockStructure local_60 [2];
  
  pFVar14 = (this->BuildBFiles).AllocatorInstance.Data;
  uVar11 = 0;
  local_80 = 0;
  local_84 = (this->BuildBFiles).ArrayNum;
  uVar9 = (ulonglong)(int)local_84;
  uVar10 = 0;
  pFVar12 = pFVar14 + uVar9 * 0x10;
  local_68 = pFVar12;
  while( true ) {
    local_78 = pFVar14;
    if ((this->BuildBFiles).ArrayNum != (int)uVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar14 == pFVar12) break;
    lVar6 = (**(code **)(this->ManifestB->_padding_ + 0x1f8))(this->ManifestB,pFVar14);
    if ((lVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileManifest != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDeltaOptimiser.cpp"
                           ,0x1c0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_70 = *(longlong *)(lVar6 + 0x58);
    uVar9 = uVar11;
    if (local_70 != 0) {
      if ((local_70 + -1 + uVar11 < uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x2f,L"Byte range has uint64 overflow."), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)(lVar6 + 0x50);
      pFVar13 = *(FChunkPart **)(lVar6 + 0x48);
      pFVar1 = pFVar13 + iVar2;
      while( true ) {
        if (*(int *)(lVar6 + 0x50) != iVar2) {
          local_88[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        uVar9 = local_80;
        uVar10 = uVar11;
        pFVar12 = local_68;
        pFVar14 = local_78;
        if (pFVar13 == pFVar1) break;
        uVar10 = (ulonglong)pFVar13->Size;
        if (((uVar10 != 0) && ((uVar11 - 1) + uVar10 < uVar11)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x2f,L"Byte range has uint64 overflow."), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar7 = (**(code **)(this->ManifestA->_padding_ + 0x218))(this->ManifestA,pFVar13);
        if (lVar7 != 0) {
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_60[0].Head = (FBlockEntry *)0x0;
          local_60[0].Tail = (FBlockEntry *)0x0;
          if ((uVar10 != 0) &&
             (local_60[0].Tail = ::operator_new(0x20), local_60[0].Tail != (FBlockEntry *)0x0)) {
            (local_60[0].Tail)->Offset = uVar11;
            (local_60[0].Tail)->Prev = (FBlockEntry *)0x0;
            (local_60[0].Tail)->Next = (FBlockEntry *)0x0;
            (local_60[0].Tail)->Size = uVar10;
          }
          local_60[0].Head = local_60[0].Tail;
          DeltaOptimiseHelpers::StompChunkPart(pFVar13,local_60,param_1,param_2);
          pFVar8 = local_60[0].Head;
          if (local_60[0].Head != (FBlockEntry *)0x0) {
            do {
              pFVar3 = pFVar8->Next;
              pFVar8->Prev = (FBlockEntry *)0x0;
              pFVar8->Next = (FBlockEntry *)0x0;
              local_60[0].Tail = pFVar3;
              ::operator_delete(pFVar8,0x20);
              pFVar8 = pFVar3;
            } while (pFVar3 != (FBlockEntry *)0x0);
            local_60[0].Head = (FBlockEntry *)0x0;
          }
        }
        uVar11 = uVar11 + uVar10;
        pFVar13 = pFVar13 + 1;
      }
    }
    uVar11 = uVar9 + local_70;
    local_80 = uVar11;
    if ((uVar10 != uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkPartFirst == (BuildFileFirst + FileRange.GetSize())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDeltaOptimiser.cpp"
                           ,0x1cf,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = pFVar14 + 0x10;
    uVar9 = (ulonglong)local_84;
  }
  return;
}

// MergeAdjacentChunkParts @ 14325bc10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkMatchStomper::MergeAdjacentChunkParts
          (FChunkMatchStomper *this,
          TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  TDoubleLinkedListNode *pTVar10;
  TDoubleLinkedListNode *pTVar11;
  ulong64 uVar12;
  code *pcVar13;
  bool bVar14;
  TDoubleLinkedListNode *pTVar15;
  bool bVar16;
  bool bVar17;
  TDoubleLinkedListNode *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FBlockRange local_80;
  ulonglong local_70;
  ulong64 uStack_68;
  ulonglong local_60;
  ulong64 uStack_58;
  FBlockRange local_50;
  
  pTVar18 = param_1->HeadNode;
  if (pTVar18 != (TDoubleLinkedListNode *)0x0) {
    pTVar10 = pTVar18->NextNode;
joined_r0x00014325bc37:
    while (pTVar11 = pTVar10, pTVar15 = pTVar18, pTVar11 != (TDoubleLinkedListNode *)0x0) {
      if (((pTVar11->Value).BuildRange.Size == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar9 = (pTVar11->Value).BuildRange.First;
      if (((pTVar15->Value).BuildRange.Size == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (((pTVar15->Value).BuildRange.First + (pTVar15->Value).BuildRange.Size != uVar9) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ChunkNode->GetValue().BuildRange.GetLast() + 1) == NextChunkNode->GetValue().BuildRange.GetFirst()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkDeltaOptimiser.cpp"
                              ,0x1dd,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = (ulonglong)(pTVar15->Value).ChunkPart.Size;
      uVar21 = (ulonglong)(pTVar15->Value).ChunkPart.Offset;
      if (((uVar24 != 0) && ((uVar24 - 1) + uVar21 < uVar21)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x2f,L"Byte range has uint64 overflow."), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar23 = (ulonglong)(pTVar11->Value).ChunkPart.Size;
      uVar19 = (ulonglong)(pTVar11->Value).ChunkPart.Offset;
      if (((uVar23 != 0) && ((uVar19 - 1) + uVar23 < uVar19)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x2f,L"Byte range has uint64 overflow."), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar1 = (pTVar11->Value).ChunkPart.Guid.B;
      uVar2 = (pTVar11->Value).ChunkPart.Guid.C;
      uVar3 = (pTVar11->Value).ChunkPart.Guid.D;
      uVar4 = (pTVar11->Value).ChunkPart.Guid.A;
      if ((((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0) ||
         (bVar16 = true,
         (((pTVar15->Value).ChunkPart.Guid.D != 0 || (pTVar15->Value).ChunkPart.Guid.C != 0) ||
         (pTVar15->Value).ChunkPart.Guid.B != 0) || (pTVar15->Value).ChunkPart.Guid.A != 0)) {
        bVar16 = false;
      }
      if ((((((((pTVar15->Value).ChunkPart.Guid.A == 1) && ((pTVar15->Value).ChunkPart.Guid.B == 0))
             && ((pTVar15->Value).ChunkPart.Guid.C == 0)) &&
            (((pTVar15->Value).ChunkPart.Guid.D < 0x100 && (uVar4 == 1)))) && (uVar1 == 0)) &&
          ((uVar2 == 0 && (uVar3 < 0x100)))) &&
         ((char)(pTVar15->Value).ChunkPart.Guid.D == (char)(pTVar11->Value).ChunkPart.Guid.D)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      uVar5 = (pTVar15->Value).ChunkPart.Guid.C;
      uVar6 = (pTVar15->Value).ChunkPart.Guid.D;
      uVar7 = (pTVar15->Value).ChunkPart.Guid.B;
      uVar8 = (pTVar15->Value).ChunkPart.Guid.A;
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uVar23 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar10 = pTVar11->NextNode;
      pTVar18 = pTVar11;
      if (bVar16) {
        uVar21 = (pTVar11->Value).BuildRange.Size + (pTVar15->Value).BuildRange.Size;
        if (uVar21 < 0xffffffff) {
          (pTVar15->Value).ChunkPart.Size = (uint)uVar21;
          if (((pTVar15->Value).BuildRange.Size == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16))
          {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_70 = (pTVar15->Value).BuildRange.First;
          uStack_68 = uVar21;
          if (((uVar21 != 0) && ((uVar21 - 1) + local_70 < local_70)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x2f,L"Byte range has uint64 overflow."), bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pTVar15->Value).BuildRange.First = local_70;
          (pTVar15->Value).BuildRange.Size = uStack_68;
          if (param_1->ListSize != 1) {
            pTVar18 = param_1->HeadNode;
            goto LAB_14325bf1e;
          }
          TDoubleLinkedList<BuildPatchServices::FChunkSearcher::FChunkNode>::Empty(param_1);
          pTVar18 = pTVar15;
        }
      }
      else {
        if (!bVar14) goto LAB_14325c0a9;
        uVar9 = (pTVar15->Value).BuildRange.Size;
        uVar21 = (pTVar11->Value).BuildRange.Size + uVar9;
        if (uVar21 < 0x100000) {
          (pTVar15->Value).ChunkPart.Size = (uint)uVar21;
          (pTVar15->Value).ChunkPart.Offset = 0;
          if ((uVar9 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16))
          {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_60 = (pTVar15->Value).BuildRange.First;
          uStack_58 = uVar21;
          if (((uVar21 != 0) && ((uVar21 - 1) + local_60 < local_60)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x2f,L"Byte range has uint64 overflow."), bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          (pTVar15->Value).BuildRange.First = local_60;
          (pTVar15->Value).BuildRange.Size = uStack_58;
          pTVar18 = param_1->HeadNode;
          if (param_1->ListSize != 1) {
            if (pTVar11 != pTVar18) {
              if (pTVar11 == param_1->TailNode) {
                pTVar18 = param_1->TailNode->PrevNode;
                param_1->TailNode = pTVar18;
                pTVar18->NextNode = (TDoubleLinkedListNode *)0x0;
                goto LAB_14325bf68;
              }
              goto LAB_14325bf50;
            }
            pTVar18 = pTVar18->NextNode;
            param_1->HeadNode = pTVar18;
            pTVar18->PrevNode = (TDoubleLinkedListNode *)0x0;
            goto LAB_14325bf68;
          }
          while (pTVar18 != (TDoubleLinkedListNode *)0x0) {
            pTVar11 = pTVar18->NextNode;
            ::operator_delete(pTVar18,0x38);
            param_1->HeadNode = pTVar11;
            pTVar18 = pTVar11;
          }
          param_1->TailNode = (TDoubleLinkedListNode *)0x0;
          param_1->HeadNode = (TDoubleLinkedListNode *)0x0;
          (**(code **)(param_1->_padding_ + 8))(param_1,0);
          pTVar18 = pTVar15;
        }
      }
    }
  }
  return;
LAB_14325c0a9:
  if ((((uVar3 != uVar6 || uVar2 != uVar5) || uVar1 != uVar7) || uVar8 != uVar4) ||
     (uVar21 + uVar24 != uVar19)) goto joined_r0x00014325bc37;
  if ((uVar23 == 0) || ((uVar24 == 0 || (uVar23 + uVar19 < uVar21)))) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("RangeA.Touches(RangeB)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                        ,0x41,L"Invalid args, ranges must overlap or touch.");
    if (bVar16) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                            ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  if ((uVar23 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar22 = uVar21 + uVar24;
  if ((uVar21 + uVar24) - 1 < (uVar23 + uVar19) - 1) {
    lVar22 = uVar23 + uVar19;
  }
  if ((uVar24 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((uVar23 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (uVar19 < uVar21) {
    uVar21 = uVar19;
  }
  FBlockRange::FromFirstAndLast(&local_80,uVar21,lVar22 - 1);
  uVar9 = local_80.Size;
  if ((local_80.Size == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  (pTVar15->Value).ChunkPart.Offset = (uint)local_80.First;
  (pTVar15->Value).ChunkPart.Size = (uint)uVar9;
  if ((((pTVar15->Value).BuildRange.Size != 0) && ((pTVar11->Value).BuildRange.Size != 0)) &&
     ((pTVar15->Value).BuildRange.First <=
      (pTVar11->Value).BuildRange.Size + (pTVar11->Value).BuildRange.First)) {
    uVar9 = (pTVar15->Value).BuildRange.Size;
    uVar12 = (pTVar15->Value).BuildRange.First;
    if (((pTVar11->Value).BuildRange.Size == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                            ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((pTVar11->Value).BuildRange.First <= uVar9 + uVar12) goto LAB_14325c29b;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("RangeA.Touches(RangeB)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                      ,0x41,L"Invalid args, ranges must overlap or touch.");
  if (bVar16) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
LAB_14325c29b:
  if (((pTVar11->Value).BuildRange.Size == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar22 = (pTVar11->Value).BuildRange.Size + (pTVar11->Value).BuildRange.First;
  if (((pTVar15->Value).BuildRange.Size == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar20 = (pTVar15->Value).BuildRange.Size + (pTVar15->Value).BuildRange.First;
  if (lVar22 - 1U < lVar20 - 1U) {
    lVar22 = lVar20;
  }
  if (((pTVar11->Value).BuildRange.Size == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar21 = (pTVar11->Value).BuildRange.First;
  if (((pTVar15->Value).BuildRange.Size == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                          ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((pTVar15->Value).BuildRange.First < uVar21) {
    uVar21 = (pTVar15->Value).BuildRange.First;
  }
  FBlockRange::FromFirstAndLast(&local_50,uVar21,lVar22 - 1);
  (pTVar15->Value).BuildRange.First = local_50.First;
  (pTVar15->Value).BuildRange.Size = local_50.Size;
  pTVar18 = param_1->HeadNode;
  if (param_1->ListSize == 1) {
    while (pTVar18 != (TDoubleLinkedListNode *)0x0) {
      pTVar11 = pTVar18->NextNode;
      ::operator_delete(pTVar18,0x38);
      param_1->HeadNode = pTVar11;
      pTVar18 = pTVar11;
    }
    param_1->TailNode = (TDoubleLinkedListNode *)0x0;
    param_1->HeadNode = (TDoubleLinkedListNode *)0x0;
    (**(code **)(param_1->_padding_ + 8))(param_1,0);
    pTVar18 = pTVar15;
  }
  else {
LAB_14325bf1e:
    if (pTVar11 == pTVar18) {
      pTVar18 = pTVar18->NextNode;
      param_1->HeadNode = pTVar18;
      pTVar18->PrevNode = (TDoubleLinkedListNode *)0x0;
    }
    else if (pTVar11 == param_1->TailNode) {
      pTVar18 = param_1->TailNode->PrevNode;
      param_1->TailNode = pTVar18;
      pTVar18->NextNode = (TDoubleLinkedListNode *)0x0;
    }
    else {
LAB_14325bf50:
      pTVar11->NextNode->PrevNode = pTVar11->PrevNode;
      pTVar11->PrevNode->NextNode = pTVar11->NextNode;
    }
LAB_14325bf68:
    ::operator_delete(pTVar11,0x38);
    (**(code **)(param_1->_padding_ + 8))(param_1,param_1->ListSize + -1);
    pTVar18 = pTVar15;
  }
  goto joined_r0x00014325bc37;
}

