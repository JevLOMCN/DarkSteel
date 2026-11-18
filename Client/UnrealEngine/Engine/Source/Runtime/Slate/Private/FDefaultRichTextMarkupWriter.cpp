// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// Create @ 142863140

TSharedRef<FDefaultRichTextMarkupWriter,1> * __cdecl
FDefaultRichTextMarkupWriter::Create
          (TSharedRef<FDefaultRichTextMarkupWriter,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FDefaultRichTextMarkupWriter> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FDefaultRichTextMarkupWriter *)0x0) {
    *local_res8[0].Object = (FDefaultRichTextMarkupWriter)&___7FDefaultRichTextMarkupWriter__6B_;
  }
  TSharedRef<FDefaultRichTextMarkupWriter,1>::
  TSharedRef<FDefaultRichTextMarkupWriter,1><FDefaultRichTextMarkupWriter>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// EscapeText @ 14286f570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FDefaultRichTextMarkupWriter::EscapeText(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<wchar_t,FString> *pTVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString((FString *)&EscapeCharacters[0].field_0x8,"&amp;");
    EscapeCharacters[1]._0_2_ = 0x22;
    ::FString::FString((FString *)&EscapeCharacters[1].field_0x8,"&quot;");
    EscapeCharacters[2]._0_2_ = 0x3c;
    ::FString::FString((FString *)&EscapeCharacters[2].field_0x8,"&lt;");
    EscapeCharacters[3]._0_2_ = 0x3e;
    ::FString::FString((FString *)&EscapeCharacters[3].field_0x8,"&gt;");
    atexit(`FDefaultRichTextMarkupWriter::EscapeText'::__l2::
           _dynamic_atexit_destructor_for__EscapeCharacters__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar6 = (param_1->Data).ArrayNum;
  iVar7 = 0;
  lVar8 = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
LAB_14286f5e0:
  do {
    iVar1 = (param_1->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    iVar4 = iVar6;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= iVar7) {
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (iVar9 != iVar6) {
        ::FString::Reserve(param_1,iVar9);
        iVar6 = (param_1->Data).ArrayNum;
        iVar9 = iVar6 + -2;
        if (iVar6 == 0) {
          iVar9 = -1;
        }
        if (-1 < iVar9) {
          lVar8 = (longlong)iVar9 * 2;
          do {
            iVar7 = (param_1->Data).ArrayNum;
            iVar6 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar6 = 0;
            }
            if ((iVar6 <= iVar9) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar5 = EscapeCharacters;
            do {
              if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar8) ==
                  *(short *)&pTVar5->field_0x0) {
                ::FString::RemoveAt(param_1,iVar9,No);
                ::FString::InsertAt(param_1,iVar9,(FString *)&pTVar5->field_0x8);
                break;
              }
              pTVar5 = pTVar5 + 1;
            } while ((FEnumParams *)pTVar5 !=
                     &Z_Construct_UEnum_Slate_ETextJustify_Statics::EnumParams);
            lVar8 = lVar8 + -2;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
      }
      return;
    }
    if ((((iVar1 == 0) || (iVar7 < 0)) || (iVar6 <= iVar7)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar5 = EscapeCharacters;
    do {
      if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar8) == *(short *)&pTVar5->field_0x0
         ) {
        iVar6 = *(int *)&pTVar5->field_0x10 + -1 + iVar9;
        if (*(int *)&pTVar5->field_0x10 == 0) {
          iVar6 = iVar9;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 2;
        iVar9 = iVar6 + -1;
        goto LAB_14286f5e0;
      }
      pTVar5 = pTVar5 + 1;
    } while ((FEnumParams *)pTVar5 != &Z_Construct_UEnum_Slate_ETextJustify_Statics::EnumParams);
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + 2;
  } while( true );
}

// GetStaticInstance @ 14287acc0

TSharedRef<FDefaultRichTextMarkupWriter,1> * __cdecl
FDefaultRichTextMarkupWriter::GetStaticInstance
          (TSharedRef<FDefaultRichTextMarkupWriter,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  TRawPtrProxy<FDefaultRichTextMarkupWriter> local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0].Object = ::operator_new(8);
      if (local_res8[0].Object != (FDefaultRichTextMarkupWriter *)0x0) {
        *local_res8[0].Object = (FDefaultRichTextMarkupWriter)&___7FDefaultRichTextMarkupWriter__6B_
        ;
      }
      TSharedRef<FDefaultRichTextMarkupWriter,1>::
      TSharedRef<FDefaultRichTextMarkupWriter,1><FDefaultRichTextMarkupWriter>(&Writer,local_res8);
      atexit(`FDefaultRichTextMarkupWriter::GetStaticInstance'::__l2::
             _dynamic_atexit_destructor_for__Writer__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->Object = Writer.Object;
  FVar2 = Writer.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       Writer.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Write @ 14289fee0

void __thiscall
FDefaultRichTextMarkupWriter::Write
          (FDefaultRichTextMarkupWriter *this,
          TArray<IRichTextMarkupWriter::FRichTextLine,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  longlong *plVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  void *_Src;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 local_res20 [8];
  undefined1 local_108 [4];
  uint local_104;
  FString local_100;
  int local_f0;
  uint local_ec;
  undefined8 *local_e8;
  longlong local_e0;
  int local_d8;
  int local_d4;
  FScriptContainerElement *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar10 = param_1->ArrayNum;
  local_104 = 0;
  if (0 < iVar10) {
    local_e0 = 0;
    do {
      lVar9 = local_e0;
      uVar7 = local_104;
      uVar12 = 0;
      if ((int)local_104 < iVar10) {
        uVar12 = ~local_104 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data + lVar9;
      local_d0 = pFVar13;
      if (0 < (int)uVar7) {
        ::FString::AppendChars(param_2,L"\r\n",2);
      }
      local_ec = *(uint *)(pFVar13 + 8);
      uVar8 = (ulonglong)(int)local_ec;
      puVar17 = *(undefined8 **)pFVar13;
      puVar18 = puVar17 + 6;
      local_c8 = puVar17 + uVar8 * 0xe;
      while( true ) {
        puVar4 = local_c8;
        local_e8 = puVar17;
        if (*(int *)(pFVar13 + 8) != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<IRichTextMarkupWriter::FRichTextRun_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res20);
        }
        if (puVar17 == puVar4) break;
        local_f0 = *(int *)(puVar18 + -5);
        if (1 < local_f0) {
          ::FString::AppendChar(param_2,L'<');
          uVar7 = 0;
          uVar12 = *(int *)(puVar18 + -5) - 1;
          if (*(int *)(puVar18 + -5) == 0) {
            uVar12 = uVar7;
          }
          ::FString::AppendChars(param_2,(wchar_t *)*puVar17,uVar12);
          uVar12 = *(uint *)(puVar18 + 1);
          uStack_b4 = 1;
          uStack_a4 = uVar7;
          local_a0 = uVar7;
          if (uVar12 != 0) {
            puVar16 = (uint *)*puVar18;
            if ((uint *)*puVar18 == (uint *)0x0) {
              puVar16 = (uint *)(puVar18 + -2);
            }
            uVar11 = *puVar16;
            local_a0 = 0;
            uVar7 = 0;
            while (uVar11 == 0) {
              lVar9 = (longlong)(int)uVar7;
              local_a0 = local_a0 + 0x20;
              uVar7 = uVar7 + 1;
              uStack_a4 = uVar12;
              if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
              goto LAB_1428a008e;
              uVar11 = puVar16[lVar9 + 1];
            }
            uStack_b4 = -uVar11 & uVar11;
            uVar8 = (ulonglong)uStack_b4 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_d8 = (int)lVar9;
            uStack_a4 = (local_a0 - 1) + local_d8;
            if ((int)uVar12 < (int)uStack_a4) {
              uStack_a4 = uVar12;
            }
          }
LAB_1428a008e:
          plVar1 = puVar18 + -4;
          pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar18 + -2);
          uStack_9c = local_44;
          iStack_98 = *(int *)(puVar18 + -3) - *(int *)((longlong)puVar18 + 0x14);
          uVar11 = uVar12 & 0xffffffe0;
          TStack_88._padding_ = CONCAT44(uStack_b4,uVar7);
          uStack_a8 = 0xffffffff;
          TStack_88.CurrentBitIndex = uStack_a4;
          TStack_88.UnvisitedBitMask = 0xffffffff;
          TStack_88._28_4_ = local_44;
          TStack_88.BaseBitIndex = local_a0;
          uStack_68 = CONCAT44(uStack_94,iStack_98);
          iVar10 = (int)uVar12 >> 5;
          local_c0 = plVar1;
          uStack_b8 = uVar7;
          local_b0 = pTVar2;
          local_90 = plVar1;
          TStack_88.Array = pTVar2;
          if (((int)uVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = *(uint *)(puVar18 + 1);
          if (uVar12 != uVar7) {
            pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar18;
            if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar18 ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar15 = pTVar2;
            }
            uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                     *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
            while (uVar12 == 0) {
              lVar9 = (longlong)iVar10;
              uVar11 = uVar11 + 0x20;
              iVar10 = iVar10 + 1;
              uVar12 = uVar7;
              if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
              goto LAB_1428a01a0;
              uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
            }
            uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_d4 = (int)lVar9;
            uVar12 = local_d4 + -1 + uVar11;
            if ((int)uVar7 < (int)uVar12) {
              uVar12 = uVar7;
            }
          }
LAB_1428a01a0:
          while( true ) {
            plVar5 = local_90;
            if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
              local_108[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (((TStack_88.CurrentBitIndex == uVar12) && (TStack_88.Array == pTVar2)) &&
               (plVar5 == plVar1)) break;
            puVar17 = (undefined8 *)(*plVar5 + (longlong)TStack_88.CurrentBitIndex * 0x28);
            ::FString::AppendChar(param_2,L' ');
            iVar10 = *(int *)(puVar17 + 1) + -1;
            if (*(int *)(puVar17 + 1) == 0) {
              iVar10 = 0;
            }
            ::FString::AppendChars(param_2,(wchar_t *)*puVar17,iVar10);
            ::FString::AppendChar(param_2,L'=');
            ::FString::AppendChar(param_2,L'\"');
            iVar10 = *(int *)(puVar17 + 3) + -1;
            if (*(int *)(puVar17 + 3) == 0) {
              iVar10 = 0;
            }
            ::FString::AppendChars(param_2,(wchar_t *)puVar17[2],iVar10);
            ::FString::AppendChar(param_2,L'\"');
            TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
          }
          ::FString::AppendChar(param_2,L'>');
          puVar17 = local_e8;
        }
        iVar10 = local_f0;
        local_100.Data.ArrayNum = *(int *)(puVar18 + 7);
        lVar9 = (longlong)local_100.Data.ArrayNum;
        _Src = (void *)puVar18[6];
        local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_100.Data.ArrayNum == 0) {
          local_100.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                     local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
          memcpy(local_100.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
        }
        EscapeText(&local_100);
        iVar14 = local_100.Data.ArrayNum + -1;
        if (local_100.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(param_2,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar14);
        if (1 < iVar10) {
          ::FString::AppendChars(param_2,L"</>",3);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        puVar17 = puVar17 + 0xe;
        puVar18 = puVar18 + 0xe;
        uVar8 = (ulonglong)local_ec;
        pFVar13 = local_d0;
      }
      local_104 = local_104 + 1;
      local_e0 = local_e0 + 0x10;
      iVar10 = param_1->ArrayNum;
    } while ((int)local_104 < iVar10);
  }
  return;
}

