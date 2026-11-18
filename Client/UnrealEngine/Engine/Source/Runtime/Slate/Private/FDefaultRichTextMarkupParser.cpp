// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FDefaultRichTextMarkupParser @ 142843f50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDefaultRichTextMarkupParser * __thiscall
FDefaultRichTextMarkupParser::FDefaultRichTextMarkupParser(FDefaultRichTextMarkupParser *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  this->_padding_ = (longlong)&___7FDefaultRichTextMarkupParser__6B_;
  iVar1 = UnescapeHelper.EscapeSequences.ArrayNum;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = UnescapeHelper.EscapeSequences.AllocatorInstance.Data + (longlong)iVar1 * 0x10;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FVar2 = UnescapeHelper.EscapeSequences.AllocatorInstance;
  while( true ) {
    if (UnescapeHelper.EscapeSequences.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar2.Data == pFVar3) break;
    if (1 < local_28.Data.ArrayNum) {
      ::FString::AppendChars(&local_28,L"|",1);
    }
    ::FString::AppendChars(&local_28,L"(",1);
    ::FString::AppendChars(&local_28,L"&",1);
    iVar4 = *(int *)(FVar2.Data + 8) + -1;
    if (*(int *)(FVar2.Data + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_28,*(wchar_t **)FVar2.Data,iVar4);
    ::FString::AppendChars(&local_28,L";",1);
    ::FString::AppendChars(&local_28,L")",1);
    FVar2.Data = FVar2.Data + 0x10;
  }
  FRegexPattern::FRegexPattern(&this->EscapeSequenceRegexPattern,&local_28,None);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,
                     L"<([\\w\\d\\.-]+)((?: (?:[\\w\\d\\.-]+=(?>\".*?\")))+)?(?:(?:/>)|(?:>(.*?)</>))"
                    );
  FRegexPattern::FRegexPattern(&this->ElementRegexPattern,&local_28,None);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"([\\w\\d\\.]+)=(?>\"(.*?)\")");
  FRegexPattern::FRegexPattern(&this->AttributeRegexPattern,&local_28,None);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// Create @ 1428630f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FDefaultRichTextMarkupParser,1> * __cdecl
FDefaultRichTextMarkupParser::Create
          (TSharedRef<FDefaultRichTextMarkupParser,1> *__return_storage_ptr__)

{
  FDefaultRichTextMarkupParser *this;
  TRawPtrProxy<FDefaultRichTextMarkupParser> local_res8 [4];
  
  this = ::operator_new(0x38);
  local_res8[0].Object = (FDefaultRichTextMarkupParser *)0x0;
  if (this != (FDefaultRichTextMarkupParser *)0x0) {
    local_res8[0].Object = FDefaultRichTextMarkupParser(this);
  }
  TSharedRef<FDefaultRichTextMarkupParser,1>::
  TSharedRef<FDefaultRichTextMarkupParser,1><FDefaultRichTextMarkupParser>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetStaticInstance @ 14287ac00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FDefaultRichTextMarkupParser,1> * __cdecl
FDefaultRichTextMarkupParser::GetStaticInstance
          (TSharedRef<FDefaultRichTextMarkupParser,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FDefaultRichTextMarkupParser *this;
  TRawPtrProxy<FDefaultRichTextMarkupParser> local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x38);
      local_res8[0].Object = (FDefaultRichTextMarkupParser *)0x0;
      if (this != (FDefaultRichTextMarkupParser *)0x0) {
        local_res8[0].Object = FDefaultRichTextMarkupParser(this);
      }
      TSharedRef<FDefaultRichTextMarkupParser,1>::
      TSharedRef<FDefaultRichTextMarkupParser,1><FDefaultRichTextMarkupParser>(&::Parser,local_res8)
      ;
      atexit(`FDefaultRichTextMarkupParser::GetStaticInstance'::__l2::
             _dynamic_atexit_destructor_for__Parser__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->Object = ::Parser.Object;
  FVar2 = ::Parser.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       ::Parser.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleEscapeSequences @ 14287e4d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FDefaultRichTextMarkupParser::HandleEscapeSequences
          (FDefaultRichTextMarkupParser *this,FString *param_1,
          TArray<FTextLineParseResults,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  uint local_154;
  uint local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  FRegexMatcher local_120;
  uint local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  FScriptContainerElement *local_e0;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  if (param_2->ArrayNum != 0) {
    FRegexMatcher::FRegexMatcher(&local_120,&this->EscapeSequenceRegexPattern,param_1);
    iVar8 = param_2->ArrayNum;
    local_150 = 0;
    if (0 < iVar8) {
      local_f0 = 0;
      do {
        lVar19 = local_f0;
        uVar17 = 0;
        if ((int)local_150 < iVar8) {
          uVar17 = ~local_150 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e0 = (param_2->AllocatorInstance).Data + lVar19;
        iVar8 = (param_3->Data).ArrayNum;
        local_154 = 0;
        uVar17 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar17 = 0;
        }
        *(uint *)local_e0 = uVar17;
        if (0 < (int)*(uint *)(local_e0 + 0x10)) {
          local_f8 = 0;
          do {
            pFVar5 = local_e0;
            lVar19 = local_f8;
            uVar17 = 0;
            uVar16 = uVar17;
            if ((int)local_154 < (int)*(uint *)(local_e0 + 0x10)) {
              uVar16 = ~local_154 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar19 = *(longlong *)(pFVar5 + 8) + lVar19;
            local_168.Data = (FScriptContainerElement *)0x0;
            local_160 = 0;
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_168,(int *)((longlong)&local_160 + 4));
            pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar19 + 0x30);
            plVar2 = (longlong *)(lVar19 + 0x20);
            uStack_cc = 1;
            *(longlong *)(local_168.Data + (longlong)iVar8 * 8) = lVar19 + 0x10;
            uVar16 = *(uint *)(lVar19 + 0x48);
            uStack_bc = uVar17;
            local_b8 = uVar17;
            if (uVar16 != 0) {
              pTVar18 = pTVar1;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x40) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x40);
              }
              uVar9 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
              local_b8 = 0;
              uVar17 = 0;
              while (uVar9 == 0) {
                lVar12 = (longlong)(int)uVar17;
                local_b8 = local_b8 + 0x20;
                uVar17 = uVar17 + 1;
                uStack_bc = uVar16;
                if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
                goto LAB_14287e6dd;
                uVar9 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
              }
              uStack_cc = -uVar9 & uVar9;
              uVar15 = (ulonglong)uStack_cc * 2 + 1;
              lVar12 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_e8 = (int)lVar12;
              uStack_bc = (local_b8 - 1) + local_e8;
              if ((int)uVar16 < (int)uStack_bc) {
                uStack_bc = uVar16;
              }
            }
LAB_14287e6dd:
            uVar9 = *(uint *)(lVar19 + 0x48);
            uStack_b4 = local_3c;
            uVar14 = uVar9 & 0xffffffe0;
            iStack_b0 = *(int *)(lVar19 + 0x28) - *(int *)(lVar19 + 0x54);
            TStack_a0._padding_ = CONCAT44(uStack_cc,uVar17);
            uStack_c0 = 0xffffffff;
            TStack_a0.CurrentBitIndex = uStack_bc;
            TStack_a0.UnvisitedBitMask = 0xffffffff;
            iVar13 = (int)uVar9 >> 5;
            TStack_a0._28_4_ = local_3c;
            TStack_a0.BaseBitIndex = local_b8;
            uStack_80 = CONCAT44(uStack_ac,iStack_b0);
            local_d8 = plVar2;
            uStack_d0 = uVar17;
            local_c8 = pTVar1;
            local_a8 = plVar2;
            TStack_a0.Array = pTVar1;
            local_160._0_4_ = iVar8 + 1;
            if ((((int)uVar9 < 0) || ((int)uVar16 < (int)uVar9)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar17 = *(uint *)(lVar19 + 0x48);
            if (uVar9 != uVar17) {
              pTVar18 = pTVar1;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x40) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar19 + 0x40);
              }
              uVar16 = -1 << ((byte)uVar9 & 0x1f) &
                       *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
              while (uVar16 == 0) {
                lVar12 = (longlong)iVar13;
                uVar14 = uVar14 + 0x20;
                iVar13 = iVar13 + 1;
                uVar9 = uVar17;
                if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
                goto LAB_14287e7e0;
                uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
              }
              uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_e4 = (int)lVar12;
              uVar9 = local_e4 + -1 + uVar14;
              if ((int)uVar17 < (int)uVar9) {
                uVar9 = uVar17;
              }
            }
LAB_14287e7e0:
            while( true ) {
              plVar6 = local_a8;
              if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
                local_158[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
              }
              if (((TStack_a0.CurrentBitIndex == uVar9) && (TStack_a0.Array == pTVar1)) &&
                 (plVar6 == plVar2)) break;
              lVar12 = *plVar6 + 0x10 + (longlong)TStack_a0.CurrentBitIndex * 0x20;
              local_148 = lVar12;
              if (((local_168.Data <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 <
                   local_168.Data + (longlong)local_160._4_4_ * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_160 == local_160._4_4_) {
                local_160._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_168,(int *)((longlong)&local_160 + 4));
              }
              iVar8 = (int)local_160 + 1;
              *(longlong *)(local_168.Data + (longlong)(int)local_160 * 8) = local_148;
              local_140 = lVar12 + 4;
              local_160._0_4_ = iVar8;
              if (((local_168.Data <= (FScriptContainerElement *)&local_140) &&
                  ((FScriptContainerElement *)&local_140 <
                   local_168.Data + (longlong)local_160._4_4_ * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_160 == local_160._4_4_) {
                local_160._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_168,(int *)((longlong)&local_160 + 4));
              }
              *(longlong *)(local_168.Data + (longlong)(int)local_160 * 8) = local_140;
              TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
              local_160._0_4_ = (int)local_160 + 1;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
            }
            lVar12 = lVar19 + 0x18;
            if ((*(int *)(lVar19 + 0x18) != -1) &&
               (lVar3 = lVar19 + 0x1c, *(int *)(lVar19 + 0x1c) != -1)) {
              local_138 = lVar12;
              if ((local_168.Data <= (FScriptContainerElement *)&local_138) &&
                 (((FScriptContainerElement *)&local_138 <
                   local_168.Data + (longlong)local_160._4_4_ * 8 &&
                  (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_160 == local_160._4_4_) {
                local_160._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_168,(int *)((longlong)&local_160 + 4));
              }
              iVar8 = (int)local_160 + 1;
              *(longlong *)(local_168.Data + (longlong)(int)local_160 * 8) = local_138;
              local_130 = lVar3;
              local_160._0_4_ = iVar8;
              if (((local_168.Data <= (FScriptContainerElement *)&local_130) &&
                  ((FScriptContainerElement *)&local_130 <
                   local_168.Data + (longlong)local_160._4_4_ * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_160 == local_160._4_4_) {
                local_160._0_4_ =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_168,(int *)((longlong)&local_160 + 4));
              }
              *(longlong *)(local_168.Data + (longlong)(int)local_160 * 8) = local_130;
              local_160._0_4_ = (int)local_160 + 1;
            }
            local_128 = lVar19 + 0x14;
            if (((local_168.Data <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 <
                 local_168.Data + (longlong)local_160._4_4_ * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (int)local_160;
            if ((int)local_160 == local_160._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_168,(int *)((longlong)&local_160 + 4));
            }
            iVar13 = iVar8 + 1;
            local_160 = CONCAT44(local_160._4_4_,iVar13);
            uVar17 = 0;
            lVar19 = 0;
            *(longlong *)(local_168.Data + (longlong)iVar8 * 8) = local_128;
            if (1 < iVar13) {
              lVar12 = 0;
              uVar17 = 0;
              do {
                uVar9 = uVar17 + 1;
                uVar16 = 0;
                if ((int)uVar9 < iVar13) {
                  uVar16 = ~uVar9 >> 0x1f;
                }
                local_100 = uVar9;
                if (uVar16 == 0) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar13 = (int)local_160;
                }
                lVar12 = lVar12 + 8;
                uVar16 = 0;
                if ((int)uVar17 < iVar13) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                iVar8 = **(int **)(local_168.Data + lVar12);
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FRegexMatcher::SetLimits(&local_120,**(int **)(local_168.Data + lVar19 * 8),iVar8);
                iVar13 = (param_3->Data).ArrayNum;
                iVar8 = iVar13 + -1;
                if (iVar13 == 0) {
                  iVar8 = 0;
                }
                uVar16 = 0;
                if ((int)uVar17 < (int)local_160) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                **(int **)(local_168.Data + lVar19 * 8) = iVar8;
                iVar8 = FRegexMatcher::GetBeginLimit(&local_120);
                bVar7 = FRegexMatcher::FindNext(&local_120);
                uVar17 = uVar9;
                if (bVar7) {
                  do {
                    uVar15 = 0;
                    iVar13 = FRegexMatcher::GetMatchBeginning(&local_120);
                    pFVar11 = ::FString::Mid(param_1,&local_78,iVar8,iVar13 - iVar8);
                    iVar13 = (pFVar11->Data).ArrayNum;
                    iVar8 = iVar13 + -1;
                    if (iVar13 == 0) {
                      iVar8 = 0;
                    }
                    ::FString::AppendChars
                              (param_3,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar8);
                    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_78.Data.AllocatorInstance.Data);
                    }
                    FRegexMatcher::GetMatchBeginning(&local_120);
                    if (0 < UnescapeHelper.EscapeSequences.ArrayNum) {
                      iVar8 = 1;
                      uVar20 = uVar15;
                      do {
                        iVar13 = FRegexMatcher::GetCaptureGroupBeginning(&local_120,iVar8);
                        iVar10 = FRegexMatcher::GetCaptureGroupEnding(&local_120,iVar8);
                        uVar17 = (uint)uVar15;
                        if ((iVar13 != -1) && (iVar10 != -1)) {
                          uVar16 = 0;
                          if ((int)uVar17 < UnescapeHelper.UnescapedCharacters.ArrayNum) {
                            uVar16 = ~uVar17 >> 0x1f;
                          }
                          if ((uVar16 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar7)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          uVar17 = *(int *)(UnescapeHelper.UnescapedCharacters.AllocatorInstance.
                                            Data + uVar20 * 0x10 + 8) - 1;
                          if (*(int *)(UnescapeHelper.UnescapedCharacters.AllocatorInstance.Data +
                                      uVar20 * 0x10 + 8) == 0) {
                            uVar17 = 0;
                          }
                          ::FString::AppendChars
                                    (param_3,*(wchar_t **)
                                              (UnescapeHelper.UnescapedCharacters.AllocatorInstance.
                                               Data + uVar20 * 0x10),uVar17);
                          break;
                        }
                        uVar15 = (ulonglong)(uVar17 + 1);
                        iVar8 = iVar8 + 1;
                        uVar20 = uVar20 + 1;
                      } while ((int)(uVar17 + 1) < UnescapeHelper.EscapeSequences.ArrayNum);
                    }
                    iVar8 = FRegexMatcher::GetMatchEnding(&local_120);
                    bVar7 = FRegexMatcher::FindNext(&local_120);
                    uVar17 = local_100;
                  } while (bVar7);
                }
                iVar13 = FRegexMatcher::GetEndLimit(&local_120);
                pFVar11 = ::FString::Mid(param_1,local_68,iVar8,iVar13 - iVar8);
                iVar13 = (pFVar11->Data).ArrayNum;
                iVar8 = iVar13 + -1;
                if (iVar13 == 0) {
                  iVar8 = 0;
                }
                ::FString::AppendChars
                          (param_3,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar8);
                if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
                }
                lVar19 = lVar19 + 1;
                iVar13 = (int)local_160;
              } while ((int)(uVar17 + 1) < (int)local_160);
            }
            iVar8 = (param_3->Data).ArrayNum;
            uVar16 = iVar8 - 1;
            if (iVar8 == 0) {
              uVar16 = 0;
            }
            uVar9 = 0;
            if ((int)uVar17 < iVar13) {
              uVar9 = ~uVar17 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            **(uint **)(local_168.Data + lVar19 * 8) = uVar16;
            if (local_168.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data);
            }
            local_154 = local_154 + 1;
            local_f8 = local_f8 + 0x70;
          } while ((int)local_154 < (int)*(uint *)(local_e0 + 0x10));
        }
        iVar8 = (param_3->Data).ArrayNum;
        uVar17 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar17 = 0;
        }
        local_150 = local_150 + 1;
        *(uint *)(local_e0 + 4) = uVar17;
        iVar8 = param_2->ArrayNum;
        local_f0 = local_f0 + 0x18;
      } while ((int)local_150 < iVar8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ParseLineRanges @ 14288fa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FDefaultRichTextMarkupParser::ParseLineRanges
          (FDefaultRichTextMarkupParser *this,FString *param_1,
          TArray<FTextRange,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FTextLineParseResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FTextRange *pFVar1;
  FTextRange *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  uint uVar15;
  undefined1 auStackY_3e8 [32];
  FTextRange local_398;
  ForAnyElementType local_390;
  undefined8 local_388;
  uint local_380;
  FString local_378;
  FRegexMatcher local_368;
  int local_348;
  int local_344;
  int local_340;
  int iStack_33c;
  int local_338;
  int iStack_334;
  int local_330;
  int iStack_32c;
  int local_328;
  int iStack_324;
  longlong local_320;
  FRegexMatcher local_318;
  char local_2f8;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  TPairInitializer<FString_&&,FTextRange_&&> local_2c0;
  TArray<FTextLineParseResults,TSizedDefaultAllocator<32>_> *local_2b0;
  int *local_2a8;
  TArray<FTextRange,TSizedDefaultAllocator<32>_> *local_2a0;
  FString local_298;
  FString *local_288;
  int *local_280;
  FString local_278;
  undefined1 local_268 [32];
  undefined1 local_248 [24];
  undefined8 uStack_230;
  void *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ForElementType<FSetElementId> FStack_210;
  ulonglong uStack_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [24];
  undefined8 uStack_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ForElementType<FSetElementId> FStack_1a0;
  ulonglong uStack_190;
  undefined1 local_188 [32];
  TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
  local_168;
  undefined1 local_118 [32];
  TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
  local_f8;
  TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  if (param_2->ArrayNum != 0) {
    local_2c0.Value = (FTextRange *)this;
    local_2b0 = param_3;
    local_2a0 = param_2;
    FRegexMatcher::FRegexMatcher(&local_368,&this->ElementRegexPattern,param_1);
    iVar9 = param_2->ArrayNum;
    local_2f8 = '\0';
    local_380 = 0;
    if (0 < iVar9) {
      piVar14 = &param_3->ArrayMax;
      local_320 = 0;
      local_2a8 = piVar14;
      do {
        lVar5 = local_320;
        uVar15 = local_380;
        local_398.BeginIndex = -1;
        local_398.EndIndex = -1;
        local_390.Data = (FScriptContainerElement *)0x0;
        local_388 = 0;
        uVar7 = 0;
        if ((int)local_380 < iVar9) {
          uVar7 = ~local_380 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_398 = *(FTextRange *)((param_2->AllocatorInstance).Data + lVar5);
        FRegexMatcher::SetLimits(&local_368,local_398.BeginIndex,local_398.EndIndex);
        iVar9 = local_398.BeginIndex;
        bVar6 = FRegexMatcher::FindNext(&local_368);
        pFVar2 = local_2c0.Value;
        iVar12 = iVar9;
        if (bVar6) {
          do {
            iVar8 = FRegexMatcher::GetMatchBeginning(&local_368);
            iVar9 = FRegexMatcher::GetMatchEnding(&local_368);
            local_338 = iVar8;
            iStack_334 = iVar9;
            iVar10 = FRegexMatcher::GetCaptureGroupBeginning(&local_368,1);
            iVar11 = FRegexMatcher::GetCaptureGroupEnding(&local_368,1);
            ::FString::Mid(param_1,&local_298,iVar10,iVar11 - iVar10);
            iVar10 = FRegexMatcher::GetCaptureGroupBeginning(&local_368,2);
            iVar11 = FRegexMatcher::GetCaptureGroupEnding(&local_368,2);
            local_330 = FRegexMatcher::GetCaptureGroupBeginning(&local_368,3);
            iStack_32c = FRegexMatcher::GetCaptureGroupEnding(&local_368,3);
            local_a8.Elements._0_8_ = 0;
            local_a8.Elements._8_8_ = 0;
            local_a8.Elements._32_8_ = 0;
            local_a8.Elements._40_4_ = 0;
            local_a8.Elements._44_4_ = 0x80;
            local_a8.Elements._48_4_ = 0xffffffff;
            local_a8.Elements._52_4_ = 0;
            local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_a8.HashSize = 0;
            if ((iVar10 != -1) && (iVar11 != -1)) {
              if (local_2f8 == '\0') {
                FRegexMatcher::FRegexMatcher
                          (&local_318,(FRegexPattern *)((longlong)pFVar2 + 0x28),param_1);
                local_2f8 = '\x01';
              }
              FRegexMatcher::SetLimits(&local_318,iVar10,iVar11);
              bVar6 = FRegexMatcher::FindNext(&local_318);
              if (bVar6) {
                local_280 = &local_348;
                do {
                  iVar10 = FRegexMatcher::GetCaptureGroupBeginning(&local_318,1);
                  iVar11 = FRegexMatcher::GetCaptureGroupEnding(&local_318,1);
                  local_348 = FRegexMatcher::GetCaptureGroupBeginning(&local_318,2);
                  local_344 = FRegexMatcher::GetCaptureGroupEnding(&local_318,2);
                  local_288 = ::FString::Mid(param_1,&local_278,iVar10,iVar11 - iVar10);
                  TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FString_&&,FTextRange_&&>_>
                            (&local_a8,&local_2c0,(bool *)&local_288);
                  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_278.Data.AllocatorInstance.Data);
                  }
                  bVar6 = FRegexMatcher::FindNext(&local_318);
                } while (bVar6);
              }
            }
            local_340 = iVar12;
            iStack_33c = iVar8;
            if (0 < iVar8 - iVar12) {
              local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2f0.Data.ArrayNum = 0;
              local_2f0.Data.ArrayMax = 0;
              ::FString::FString((FString *)local_188,&local_2f0);
              local_188._20_4_ = iStack_33c;
              local_188._16_4_ = local_340;
              local_188._24_4_ = -1;
              local_188._28_4_ = -1;
              local_168.Elements._32_8_ = 0;
              local_168.Elements._40_8_ = 0x8000000000;
              local_168.Elements._0_8_ = 0;
              local_168.Elements._8_8_ = 0;
              local_168.Hash.InlineData[0] = 0;
              local_168.Hash.InlineData[1] = 0;
              local_168.Hash.InlineData[2] = 0;
              local_168.Hash.InlineData[3] = 0;
              local_168.Hash._padding_ = 0;
              local_168.Elements._48_8_ = 0xffffffff;
              local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_168._72_8_ = 0;
              local_168.Elements._16_8_ = 0;
              local_168.Elements._24_8_ = 0;
              if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
              }
              if (((local_390.Data <= (FTextRunParseResults *)local_188) &&
                  ((FScriptContainerElement *)local_188 <
                   local_390.Data + (longlong)local_388._4_4_ * 0x70)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar12 = (int)local_388;
              if ((int)local_388 == local_388._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x870,&local_390,(int *)((longlong)&local_388 + 4));
              }
              local_388 = CONCAT44(local_388._4_4_,iVar12 + 1);
              pFVar13 = local_390.Data + (longlong)iVar12 * 0x70;
              ::FString::FString((FString *)pFVar13,(FString *)local_188);
              *(undefined8 *)(pFVar13 + 0x10) = local_188._16_8_;
              *(undefined8 *)(pFVar13 + 0x18) = local_188._24_8_;
              *(undefined8 *)
               &((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                  *)(pFVar13 + 0x20))->Elements = 0;
              *(undefined8 *)(pFVar13 + 0x28) = 0;
              *(undefined8 *)(pFVar13 + 0x40) = 0;
              *(int *)(pFVar13 + 0x48) = 0;
              *(int *)(pFVar13 + 0x4c) = 0x80;
              *(undefined4 *)(pFVar13 + 0x50) = 0xffffffff;
              *(undefined4 *)(pFVar13 + 0x54) = 0;
              *(undefined8 *)(pFVar13 + 0x60) = 0;
              *(int *)(pFVar13 + 0x68) = 0;
              TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                           *)(pFVar13 + 0x20),
                          (TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                           *)(local_188 + 0x20));
              local_168._72_8_ = local_168._72_8_ & 0xffffffff00000000;
              if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_168.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)(local_188 + 0x20));
              if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_188._0_8_);
              }
            }
            FVar4.Data = local_298.Data.AllocatorInstance.Data;
            local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar12 = local_298.Data.ArrayNum;
            local_378.Data.ArrayNum = iVar12;
            if (iVar12 == 0) {
              local_378.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar12,0,(ForAnyElementType *)&local_378,iVar12,
                         &local_378.Data.ArrayMax);
              memcpy(local_378.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar12 * 2);
            }
            ::FString::FString((FString *)local_118,&local_378);
            local_118._20_4_ = iStack_334;
            local_118._16_4_ = local_338;
            local_118._28_4_ = iStack_32c;
            local_118._24_4_ = local_330;
            local_f8.Elements._32_8_ = 0;
            local_f8.Elements._40_8_ = 0x8000000000;
            local_f8.Elements._0_8_ = 0;
            local_f8.Elements._8_8_ = 0;
            local_f8.Hash.InlineData[0] = 0;
            local_f8.Hash.InlineData[1] = 0;
            local_f8.Hash.InlineData[2] = 0;
            local_f8.Hash.InlineData[3] = 0;
            local_f8.Hash._padding_ = 0;
            local_f8.Elements._48_8_ = 0xffffffff;
            local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_f8._72_8_ = 0;
            local_f8.Elements._16_8_ = 0;
            local_f8.Elements._24_8_ = 0;
            if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Data.AllocatorInstance.Data);
            }
            TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                         *)(local_118 + 0x20),&local_a8);
            if (((local_390.Data <= (FTextRunParseResults *)local_118) &&
                ((FScriptContainerElement *)local_118 <
                 local_390.Data + (longlong)local_388._4_4_ * 0x70)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar12 = (int)local_388;
            if ((int)local_388 == local_388._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x870,&local_390,(int *)((longlong)&local_388 + 4));
            }
            local_388 = CONCAT44(local_388._4_4_,iVar12 + 1);
            pFVar13 = local_390.Data + (longlong)iVar12 * 0x70;
            ::FString::FString((FString *)pFVar13,(FString *)local_118);
            *(undefined8 *)(pFVar13 + 0x10) = local_118._16_8_;
            *(undefined8 *)(pFVar13 + 0x18) = local_118._24_8_;
            *(undefined8 *)
             &((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                *)(pFVar13 + 0x20))->Elements = 0;
            *(undefined8 *)(pFVar13 + 0x28) = 0;
            *(undefined8 *)(pFVar13 + 0x40) = 0;
            *(int *)(pFVar13 + 0x48) = 0;
            *(int *)(pFVar13 + 0x4c) = 0x80;
            *(undefined4 *)(pFVar13 + 0x50) = 0xffffffff;
            *(undefined4 *)(pFVar13 + 0x54) = 0;
            *(undefined8 *)(pFVar13 + 0x60) = 0;
            *(int *)(pFVar13 + 0x68) = 0;
            TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                         *)(pFVar13 + 0x20),
                        (TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                         *)(local_118 + 0x20));
            local_f8._72_8_ = local_f8._72_8_ & 0xffffffff00000000;
            if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_f8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_118 + 0x20));
            if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_118._0_8_);
            }
            local_a8.HashSize = 0;
            if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_a8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_a8.Elements);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            bVar6 = FRegexMatcher::FindNext(&local_368);
            piVar14 = local_2a8;
            param_3 = local_2b0;
            iVar12 = iVar9;
            uVar15 = local_380;
          } while (bVar6);
        }
        iStack_324 = local_398.EndIndex;
        local_328 = iVar9;
        if (0 < local_398.EndIndex - iVar9) {
          local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2e0.Data.ArrayNum = 0;
          local_2e0.Data.ArrayMax = 0;
          ::FString::FString((FString *)local_268,&local_2e0);
          local_268._20_4_ = iStack_324;
          local_268._16_4_ = local_328;
          local_268._24_4_ = -1;
          local_268._28_4_ = -1;
          local_228 = (void *)0x0;
          uStack_220 = 0x8000000000;
          local_248._0_8_ = (FScriptContainerElement *)0x0;
          local_248._8_8_ = 0;
          FStack_210.InlineData[0] = '\0';
          FStack_210.InlineData[1] = '\0';
          FStack_210.InlineData[2] = '\0';
          FStack_210.InlineData[3] = '\0';
          FStack_210._padding_ = 0;
          local_218 = 0xffffffff;
          FStack_210.SecondaryData = (ForElementType<FSetElementId>)0x0;
          uStack_200 = 0;
          local_248._16_8_ = 0;
          uStack_230 = 0;
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if (((local_390.Data <= (FTextRunParseResults *)local_268) &&
              ((FScriptContainerElement *)local_268 <
               local_390.Data + (longlong)local_388._4_4_ * 0x70)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_388;
          if ((int)local_388 == local_388._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x870,&local_390,(int *)((longlong)&local_388 + 4));
          }
          local_388 = CONCAT44(local_388._4_4_,iVar9 + 1);
          pFVar13 = local_390.Data + (longlong)iVar9 * 0x70;
          ::FString::FString((FString *)pFVar13,(FString *)local_268);
          *(undefined8 *)(pFVar13 + 0x10) = local_268._16_8_;
          *(undefined8 *)(pFVar13 + 0x18) = local_268._24_8_;
          *(undefined8 *)
           &((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
              *)(pFVar13 + 0x20))->Elements = 0;
          *(undefined8 *)(pFVar13 + 0x28) = 0;
          *(undefined8 *)(pFVar13 + 0x40) = 0;
          *(int *)(pFVar13 + 0x48) = 0;
          *(int *)(pFVar13 + 0x4c) = 0x80;
          *(undefined4 *)(pFVar13 + 0x50) = 0xffffffff;
          *(undefined4 *)(pFVar13 + 0x54) = 0;
          *(undefined8 *)(pFVar13 + 0x60) = 0;
          *(int *)(pFVar13 + 0x68) = 0;
          TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)(pFVar13 + 0x20),
                      (TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)local_248);
          uStack_200 = uStack_200 & 0xffffffff00000000;
          if (FStack_210.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FStack_210.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_248,0,local_248._8_4_);
          bVar6 = local_248._12_4_ != 0;
          local_248._8_8_ = (ulonglong)(uint)local_248._12_4_ << 0x20;
          if (bVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
          }
          uVar7 = uStack_220._4_4_;
          local_218 = 0xffffffff;
          uStack_220 = (ulonglong)uStack_220._4_4_ << 0x20;
          if (0x80 < uVar7) {
            uStack_220 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
          }
          if (local_228 != (void *)0x0) {
            FMemory::Free(local_228);
          }
          if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_248._0_8_);
          }
          if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_268._0_8_);
          }
        }
        if ((int)local_388 == 0) {
          local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.Data.ArrayNum = 0;
          local_2d0.Data.ArrayMax = 0;
          ::FString::FString((FString *)local_1f8,&local_2d0);
          local_1f8._16_4_ = local_398.BeginIndex;
          local_1f8._20_4_ = local_398.EndIndex;
          local_1f8._24_4_ = -1;
          local_1f8._28_4_ = -1;
          local_1b8 = (void *)0x0;
          uStack_1b0 = 0x8000000000;
          local_1d8._0_8_ = (FScriptContainerElement *)0x0;
          local_1d8._8_8_ = 0;
          FStack_1a0.InlineData[0] = '\0';
          FStack_1a0.InlineData[1] = '\0';
          FStack_1a0.InlineData[2] = '\0';
          FStack_1a0.InlineData[3] = '\0';
          FStack_1a0._padding_ = 0;
          local_1a8 = 0xffffffff;
          FStack_1a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
          uStack_190 = 0;
          local_1d8._16_8_ = 0;
          uStack_1c0 = 0;
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
          if (((local_390.Data <= (FTextRunParseResults *)local_1f8) &&
              ((FScriptContainerElement *)local_1f8 <
               local_390.Data + (longlong)local_388._4_4_ * 0x70)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_388;
          if ((int)local_388 == local_388._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x870,&local_390,(int *)((longlong)&local_388 + 4));
          }
          local_388 = CONCAT44(local_388._4_4_,iVar9 + 1);
          pFVar13 = local_390.Data + (longlong)iVar9 * 0x70;
          ::FString::FString((FString *)pFVar13,(FString *)local_1f8);
          *(undefined8 *)(pFVar13 + 0x10) = local_1f8._16_8_;
          *(undefined8 *)(pFVar13 + 0x18) = local_1f8._24_8_;
          *(undefined8 *)
           &((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
              *)(pFVar13 + 0x20))->Elements = 0;
          *(undefined8 *)(pFVar13 + 0x28) = 0;
          *(undefined8 *)(pFVar13 + 0x40) = 0;
          *(int *)(pFVar13 + 0x48) = 0;
          *(int *)(pFVar13 + 0x4c) = 0x80;
          *(undefined4 *)(pFVar13 + 0x50) = 0xffffffff;
          *(undefined4 *)(pFVar13 + 0x54) = 0;
          *(undefined8 *)(pFVar13 + 0x60) = 0;
          *(int *)(pFVar13 + 0x68) = 0;
          TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)(pFVar13 + 0x20),
                      (TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)local_1d8);
          uStack_190 = uStack_190 & 0xffffffff00000000;
          if (FStack_1a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FStack_1a0.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_1d8,0,local_1d8._8_4_);
          bVar6 = local_1d8._12_4_ != 0;
          local_1d8._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
          if (bVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
          }
          uVar7 = uStack_1b0._4_4_;
          local_1a8 = 0xffffffff;
          uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
          if (0x80 < uVar7) {
            uStack_1b0 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
          }
          if (local_1b8 != (void *)0x0) {
            FMemory::Free(local_1b8);
          }
          if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1d8._0_8_);
          }
          if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1f8._0_8_);
          }
        }
        pFVar2 = (FTextRange *)(param_3->AllocatorInstance).Data;
        if (((pFVar2 <= &local_398) && (&local_398 < pFVar2 + (longlong)*piVar14 * 3)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == *piVar14) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_3->AllocatorInstance,piVar14);
        }
        FVar4.Data = local_390.Data;
        param_3->ArrayNum = iVar9 + 1;
        pFVar1 = (FTextRange *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x18);
        *pFVar1 = local_398;
        pFVar2 = pFVar1 + 1;
        pFVar2->BeginIndex = 0;
        pFVar2->EndIndex = 0;
        iVar9 = (int)local_388;
        pFVar1[2].BeginIndex = (int)local_388;
        if ((int)local_388 == 0) {
          pFVar1[2].EndIndex = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,(int)local_388,0,(ForAnyElementType *)pFVar2,(int)local_388,
                     &pFVar1[2].EndIndex);
          ConstructItems<FTextRunParseResults,FTextRunParseResults,int>
                    ((void *)*pFVar2,(FTextRunParseResults *)FVar4.Data,iVar9);
        }
        DestructItems<FTextRunParseResults,int>
                  ((FTextRunParseResults *)local_390.Data,(int)local_388);
        if ((FTextRunParseResults *)local_390.Data != (FTextRunParseResults *)0x0) {
          FMemory::Free(local_390.Data);
        }
        piVar14 = &param_3->ArrayMax;
        local_380 = uVar15 + 1;
        local_320 = local_320 + 8;
        iVar9 = local_2a0->ArrayNum;
        param_2 = local_2a0;
      } while ((int)local_380 < iVar9);
      if (local_2f8 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Process @ 1428928a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FDefaultRichTextMarkupParser::Process
          (FDefaultRichTextMarkupParser *this,
          TArray<FTextLineParseResults,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          FString *param_3)

{
  TArray<FTextRange,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FTextRange::CalculateLineRangesFromString(param_2,&local_18);
  ParseLineRanges(this,param_2,&local_18,param_1);
  HandleEscapeSequences(this,param_2,param_1,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

