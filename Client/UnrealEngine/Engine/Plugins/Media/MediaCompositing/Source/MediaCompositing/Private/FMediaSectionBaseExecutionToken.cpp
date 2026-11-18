// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// MakeMediaPlayerOptions @ 14ea6d630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMediaPlayerOptions * __thiscall
FMediaSectionBaseExecutionToken::MakeMediaPlayerOptions
          (FMediaSectionBaseExecutionToken *this,FMediaPlayerOptions *__return_storage_ptr__,
          IMediaPlayerProxyInterface *param_1,FMovieSceneMediaData *param_2)

{
  TMap<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_> *this_00;
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  FName *pFVar14;
  UMediaTexture *pUVar15;
  FString *pFVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined7 uVar19;
  FVariant *__return_storage_ptr___00;
  EVariantTypes EVar20;
  uint uVar21;
  ForAnyElementType _Src;
  ulonglong uVar22;
  undefined1 *puVar23;
  EVariantTypes EVar24;
  uint *puVar25;
  EVariantTypes EVar26;
  FName FVar27;
  FName local_res10;
  FName local_res18;
  FMovieSceneMediaData *local_res20;
  FVariant local_148;
  EVariantTypes EStack_130;
  undefined4 uStack_12c;
  FVariant local_128;
  undefined1 local_110 [12];
  uint uStack_104;
  ForAnyElementType FStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_e8;
  
  uVar22 = (ulonglong)_tls_index;
  this_00 = &__return_storage_ptr__->InternalCustomOptions;
  _Src.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Tracks).Caption = -1;
  (__return_storage_ptr__->Tracks).Metadata = -1;
  (__return_storage_ptr__->Tracks).Audio = 0;
  puVar18 = &(__return_storage_ptr__->InternalCustomOptions).field_0x8;
  (__return_storage_ptr__->Tracks).Script = -1;
  (__return_storage_ptr__->Tracks).Subtitle = -1;
  puVar23 = &(__return_storage_ptr__->InternalCustomOptions).field_0xc;
  (__return_storage_ptr__->Tracks).Text = -1;
  (__return_storage_ptr__->Tracks).Video = 0;
  (__return_storage_ptr__->TracksByLanguage).Video.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TracksByLanguage).Video.Data.ArrayNum = 0;
  (__return_storage_ptr__->TracksByLanguage).Video.Data.ArrayMax = 0;
  (__return_storage_ptr__->TracksByLanguage).Audio.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TracksByLanguage).Audio.Data.ArrayNum = 0;
  (__return_storage_ptr__->TracksByLanguage).Audio.Data.ArrayMax = 0;
  (__return_storage_ptr__->TracksByLanguage).Subtitle.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TracksByLanguage).Subtitle.Data.ArrayNum = 0;
  (__return_storage_ptr__->TracksByLanguage).Subtitle.Data.ArrayMax = 0;
  (__return_storage_ptr__->TracksByLanguage).Caption.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TracksByLanguage).Caption.Data.ArrayNum = 0;
  (__return_storage_ptr__->TracksByLanguage).Caption.Data.ArrayMax = 0;
  *(undefined4 *)puVar18 = 0;
  *(undefined4 *)puVar23 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 = 0;
  (__return_storage_ptr__->SeekTime).Ticks = -0x8000000000000000;
  pvVar6 = ThreadLocalStoragePointer;
  __return_storage_ptr__->TrackSelection = UseMediaPlayerDefaults;
  __return_storage_ptr__->SeekTimeType = Ignored;
  __return_storage_ptr__->PlayOnOpen = UseMediaPlayerSetting;
  __return_storage_ptr__->Loop = UseMediaPlayerSetting;
  lVar3 = *(longlong *)((longlong)pvVar6 + uVar22 * 8);
  local_res10 = (FName)__return_storage_ptr__;
  local_res18 = (FName)param_1;
  local_res20 = param_2;
  if ((*(int *)(lVar3 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                    ::__l2::OptName,L"Sequencer");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                    ::__l2::OptName,L"Environment");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar9 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x34;
  local_128.Value.AllocatorInstance.Data =
       (FScriptContainerElement *)
       &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Sequencer(void)'::
        __l2::OptName;
  local_128._0_8_ =
       &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
        OptName;
  if (iVar9 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this_00,(int *)puVar18,(int *)puVar23);
    puVar23 = &(__return_storage_ptr__->InternalCustomOptions).field_0x10;
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)puVar23,1);
    puVar17 = *(undefined1 **)&(__return_storage_ptr__->InternalCustomOptions).field_0x20;
    uVar10 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar10;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar23;
    }
    *(uint *)(puVar17 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar17 + (longlong)(iVar9 >> 5) * 4) &
         ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar10 & 0x1f));
  }
  else {
    iVar8 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x30;
    iVar9 = iVar9 + -1;
    lVar3 = *(longlong *)this_00;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x28);
    *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x30 = iVar2;
    *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,(FSparseArrayAllocationInfo *)&local_148,iVar8);
  FVar7.Data = local_148.Value.AllocatorInstance.Data;
  if ((TTuple<FName,FVariant> *)local_148.Value.AllocatorInstance.Data !=
      (TTuple<FName,FVariant> *)0x0) {
    TPairInitializer<FName_const_&,FName_const_&>::operator<FName,FVariant>_TTuple<FName,FVariant>
              ((TPairInitializer<FName_const_&,FName_const_&> *)&local_128,
               (TTuple<FName,FVariant> *)local_148.Value.AllocatorInstance.Data);
    *(undefined4 *)&((TTuple<FName,FVariant> *)(FVar7.Data + 0x20))->field_0x0 = 0xffffffff;
    _Src.Data = FVar7.Data;
  }
  EVar26 = local_148.Type;
  uVar4 = *(undefined8 *)&((TTuple<FName,FVariant> *)_Src.Data)->field_0x0;
  uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  EVar24 = uVar10 + (int)((ulonglong)uVar4 >> 0x20);
  iVar9 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x34;
  local_128.Type = EVar24;
  FVar27 = (FName)__return_storage_ptr__;
  if ((*(int *)puVar18 - iVar9 != 1) && (*(int *)puVar18 != iVar9)) {
    puVar18 = *(undefined1 **)&(__return_storage_ptr__->InternalCustomOptions).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(__return_storage_ptr__->InternalCustomOptions).field_0x38;
    }
    EVar20 = *(EVariantTypes *)
              (puVar18 +
              (ulonglong)
              (*(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 - Ansichar &
              EVar24) * 4);
    if (EVar20 != ~Empty) {
      puVar18 = *(undefined1 **)this_00;
      do {
        if (*(longlong *)(puVar18 + (longlong)(int)EVar20 * 0x28) ==
            *(longlong *)&((TTuple<FName,FVariant> *)_Src.Data)->field_0x0) {
          if (EVar20 != ~Empty) {
            if (*(void **)(puVar18 + (longlong)(int)EVar20 * 0x28 + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)(puVar18 + (longlong)(int)EVar20 * 0x28 + 0x10));
            }
            memmove(puVar18 + (longlong)(int)EVar20 * 0x28,_Src.Data,0x20);
            puVar18 = (undefined1 *)(ulonglong)EVar26;
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,EVar26,1);
            EVar26 = EVar20;
            EVar24 = local_128.Type;
          }
          if (EVar20 != ~Empty) goto LAB_14ea6db49;
          break;
        }
        EVar20 = *(EVariantTypes *)(puVar18 + (longlong)(int)EVar20 * 0x28 + 0x20);
      } while (EVar20 != ~Empty);
    }
  }
  uVar21 = 1;
  uVar10 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x8 -
           *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x34;
  puVar18 = (undefined1 *)(ulonglong)uVar10;
  if (3 < uVar10) {
    uVar22 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar10 < 1) ||
     ((int)uVar21 <= *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48)) {
    EVar24 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 - Ansichar & EVar24
    ;
    puVar18 = (undefined1 *)(ulonglong)EVar24;
    *(EVariantTypes *)(&((TTuple<FName,FVariant> *)((longlong)_Src.Data + 0x20))->field_0x0 + 4) =
         EVar24;
    puVar23 = *(undefined1 **)&(__return_storage_ptr__->InternalCustomOptions).field_0x40;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(__return_storage_ptr__->InternalCustomOptions).field_0x38;
    }
    uVar22 = (longlong)*(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 - 1U &
             (longlong)(int)EVar24;
    *(undefined4 *)&((TTuple<FName,FVariant> *)((longlong)_Src.Data + 0x20))->field_0x0 =
         *(undefined4 *)(puVar23 + uVar22 * 4);
    *(EVariantTypes *)(puVar23 + uVar22 * 4) = EVar26;
    goto LAB_14ea6db49;
  }
  *(uint *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 = uVar21;
  if (*(longlong *)&(__return_storage_ptr__->InternalCustomOptions).field_0x40 != 0) {
    puVar18 = (undefined1 *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->InternalCustomOptions).field_0x40,0,0,
               4);
  }
  if (uVar21 != 0) {
    uVar10 = uVar21;
    if (uVar21 < 2) {
      if (*(longlong *)&(__return_storage_ptr__->InternalCustomOptions).field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_14ea6d94e;
      }
    }
    else {
LAB_14ea6d94e:
      puVar18 = (undefined1 *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->InternalCustomOptions).field_0x40,0,
                 uVar10,4);
    }
    if (0 < (int)uVar21) {
      uVar22 = (ulonglong)uVar21;
      puVar18 = (undefined1 *)0x0;
      do {
        puVar23 = *(undefined1 **)&(__return_storage_ptr__->InternalCustomOptions).field_0x40;
        puVar17 = &(__return_storage_ptr__->InternalCustomOptions).field_0x38;
        if (puVar23 != (undefined1 *)0x0) {
          puVar17 = puVar23;
        }
        uVar11 = (ulonglong)puVar18 & (longlong)(int)uVar21 - 1U;
        puVar18 = puVar18 + 1;
        *(undefined4 *)(puVar17 + uVar11 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (*(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 != 0) {
    iVar9 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x28;
    local_148.Value.AllocatorInstance.Data =
         (FScriptContainerElement *)&(__return_storage_ptr__->InternalCustomOptions).field_0x10;
    local_148._4_4_ = 1;
    local_148.Type = Empty;
    local_148.Value.ArrayMax = 0;
    EStack_130 = Empty;
    if (iVar9 != 0) {
      puVar25 = *(uint **)&(__return_storage_ptr__->InternalCustomOptions).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_148.Value.AllocatorInstance.Data;
      }
      uVar10 = *puVar25;
      EStack_130 = Empty;
      local_148.Type = Empty;
      while (uVar10 == 0) {
        EStack_130 = EStack_130 + UInt64;
        puVar18 = (undefined1 *)(longlong)(int)local_148.Type;
        local_148.Type = local_148.Type + Ansichar;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_148.Type)
        goto LAB_14ea6da50;
        uVar10 = puVar25[(longlong)(puVar18 + 1)];
      }
      puVar18 = (undefined1 *)(ulonglong)uVar10;
      local_148._4_4_ = ~(uVar10 - 1) & uVar10;
      uVar22 = (ulonglong)(uint)local_148._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_148.Value.ArrayMax = (EStack_130 - Ansichar) + (int)lVar3;
      if (iVar9 < local_148.Value.ArrayMax) {
LAB_14ea6da50:
        local_148.Value.ArrayMax = iVar9;
      }
    }
    local_148.Value.ArrayNum = -1;
    uStack_104 = local_148._4_4_;
    local_110._8_4_ = local_148.Type;
    local_f8._4_4_ = local_148.Value.ArrayMax;
    local_f8._0_4_ = -1;
    uStack_f0 = CONCAT44(uStack_12c,EStack_130);
    local_110._0_8_ = this_00;
    FStack_100.Data = local_148.Value.AllocatorInstance.Data;
    if (local_148.Value.ArrayMax < iVar9) {
      iVar9 = local_148.Value.ArrayMax;
      do {
        lVar3 = *(longlong *)local_110._0_8_;
        lVar12 = (longlong)iVar9;
        uVar4 = *(undefined8 *)(lVar3 + lVar12 * 0x28);
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar10 = *(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 - 1U &
                 uVar10 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)(lVar3 + 0x24 + lVar12 * 0x28) = uVar10;
        puVar23 = *(undefined1 **)&(__return_storage_ptr__->InternalCustomOptions).field_0x40;
        puVar18 = &(__return_storage_ptr__->InternalCustomOptions).field_0x38;
        if (puVar23 != (undefined1 *)0x0) {
          puVar18 = puVar23;
        }
        uVar22 = (longlong)*(int *)&(__return_storage_ptr__->InternalCustomOptions).field_0x48 - 1U
                 & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 0x20 + lVar12 * 0x28) = *(undefined4 *)(puVar18 + uVar22 * 4);
        *(int *)(puVar18 + uVar22 * 4) = iVar9;
        local_f8._0_4_ = (uint)local_f8 & ~uStack_104;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_110 + 8));
        FVar27 = local_res10;
        iVar9 = local_f8._4_4_;
      } while (local_f8._4_4_ < *(int *)(FStack_100.Data + 0x18));
    }
  }
LAB_14ea6db49:
  if (local_res18 != (FName)0x0) {
    pcVar13 = (char *)(**(code **)((longlong)*(IMediaPlayerProxyInterface *)local_res18 + 0x28))();
    local_148.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Value.ArrayNum = 0;
    local_148.Value.ArrayMax = 0;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    cVar1 = *pcVar13;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_e8);
    local_e8.Bytes = &local_148.Value;
    local_e8._padding_ = 0;
    uVar19 = (undefined7)((ulonglong)puVar18 >> 8);
    local_e8.ArchiveName = local_res10;
    local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar19,1));
    local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(ulonglong *)(local_e8._padding_ + 8) < *(ulonglong *)local_e8._padding_ + 4) {
      uVar10 = local_res10.Number;
      local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
      if ((local_e8._padding_ & 1U) == 0) {
        local_res10.ComparisonIndex.Value._1_3_ = 0;
        local_res10.ComparisonIndex.Value._0_1_ = cVar1 != '\0';
        local_res10.Number = uVar10;
      }
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_e8,&local_res10,4);
      if (1 < local_res10.ComparisonIndex.Value) {
        FArchiveState::SetError((FArchiveState *)&local_e8);
      }
    }
    else {
      *(ulonglong *)local_e8._padding_ = *(ulonglong *)local_e8._padding_ + 4;
    }
    local_148.Type = Bool;
    FArchive::~FArchive((FArchive *)&local_e8);
    pFVar14 = MediaPlayerOptionValues::ImgMediaSmartCacheEnabled();
    TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
    Emplace<FName_const_&,FVariant>
              ((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                *)((longlong)FVar27 + 0x78),pFVar14,&local_148);
    if (local_148.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Value.AllocatorInstance.Data);
    }
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_148.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_148.Value.ArrayNum = 0;
    local_148.Value.ArrayMax = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_res10.ComparisonIndex.Value = *(uint *)(pcVar13 + 4);
    FArchiveState::FArchiveState((FArchiveState *)&local_e8);
    local_e8.Bytes = &local_148.Value;
    local_e8._padding_ = 0;
    uVar19 = (undefined7)((ulonglong)pFVar14 >> 8);
    local_e8.ArchiveName = local_res18;
    local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar19,1));
    local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
      if ((local_e8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_e8,&local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,(uint *)&local_res10);
      }
    }
    else {
      local_res10.ComparisonIndex.Value = **(uint **)local_e8._padding_;
      *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
    }
    local_148.Type = Float;
    FArchive::~FArchive((FArchive *)&local_e8);
    pFVar14 = MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead();
    TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
    Emplace<FName_const_&,FVariant>
              ((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                *)((longlong)FVar27 + 0x78),pFVar14,&local_148);
    if (local_148.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Value.AllocatorInstance.Data);
    }
    pUVar15 = FMovieSceneMediaData::GetProxyMediaTexture(local_res20);
    if (pUVar15 != (UMediaTexture *)0x0) {
      local_110._0_4_ = 0;
      local_110._4_4_ = 0;
      local_110._8_4_ = 0;
      uStack_104 = 0;
      FStack_100.Data = (FScriptContainerElement *)0x0;
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      FSoftObjectPath::SetPath((FSoftObjectPath *)local_110,(UObject *)pUVar15);
      __return_storage_ptr___00 = &local_148;
      pFVar16 = FSoftObjectPath::ToString
                          ((FSoftObjectPath *)local_110,(FString *)__return_storage_ptr___00);
      local_128.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Value.ArrayNum = 0;
      local_128.Value.ArrayMax = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_e8);
      local_e8.Bytes = &local_128.Value;
      local_e8._padding_ = 0;
      uVar19 = (undefined7)((ulonglong)__return_storage_ptr___00 >> 8);
      local_e8.ArchiveName = local_res10;
      local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
      (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar19,1));
      local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      ::operator<<((FArchive *)&local_e8,pFVar16);
      local_128.Type = 0x18;
      FArchive::~FArchive((FArchive *)&local_e8);
      pFVar5 = (pFVar16->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'::__l2
         ::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                        ::__l2::OptName,L"ViewMediaTexture");
        _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
      Emplace<FName_const_&,FVariant>
                ((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                  *)((longlong)FVar27 + 0x78),
                 &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ViewMediaTexture(void)'
                  ::__l2::OptName,&local_128);
      if ((FName *)local_128.Value.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_128.Value.AllocatorInstance.Data);
      }
      if (FStack_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data);
      }
    }
  }
  return (FMediaPlayerOptions *)FVar27;
}

