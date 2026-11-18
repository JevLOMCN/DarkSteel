// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 65

// DestroyObject @ 142485230

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFontData,1>::DestroyObject
          (TIntrusiveReferenceController<FFontData,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 142485250

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFontFaceData,1>::DestroyObject
          (TIntrusiveReferenceController<FFontFaceData,1> *this)

{
  void *pvVar1;
  
  FFontFaceData::UntrackMemoryUsage((FFontFaceData *)&this->ObjectStorage);
  DestructItems<UE::Slate::FPreprocessedFontGeometry,int>
            (*(FPreprocessedFontGeometry **)((this->ObjectStorage).Pad + 0x10),
             *(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1424852a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStandaloneCompositeFont,1>::DestroyObject
          (TIntrusiveReferenceController<FStandaloneCompositeFont,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->ObjectStorage);
  FCompositeFont::~FCompositeFont((FCompositeFont *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 1424852d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCachedCompositeFontData,1>::DestroyObject
          (TIntrusiveReferenceController<FCachedCompositeFontData,1> *this)

{
  FCachedCompositeFontData::~FCachedCompositeFontData
            ((FCachedCompositeFontData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1424852e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCachedTypefaceData,1>::DestroyObject
          (TIntrusiveReferenceController<FCachedTypefaceData,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 142485300

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeAdvanceCache,1>::DestroyObject
          (TIntrusiveReferenceController<FFreeTypeAdvanceCache,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,long>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,long>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,long>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 142485340

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeFace,1>::DestroyObject
          (TIntrusiveReferenceController<FFreeTypeFace,1> *this)

{
  FFreeTypeFace::~FFreeTypeFace((FFreeTypeFace *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142485350

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeGlyphCache,1>::DestroyObject
          (TIntrusiveReferenceController<FFreeTypeGlyphCache,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 142485390

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFreeTypeKerningCache,1>::DestroyObject
          (TIntrusiveReferenceController<FFreeTypeKerningCache,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FFreeTypeKerningCache::FKerningPair,FT_Vector_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFreeTypeKerningCache::FKerningPair,FT_Vector_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFreeTypeKerningCache::FKerningPair,FT_Vector_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 1424853d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FShapedGlyphFaceData,1>::DestroyObject
          (TIntrusiveReferenceController<FShapedGlyphFaceData,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001424853f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 142485400

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FShapedGlyphSequence,1>::DestroyObject
          (TIntrusiveReferenceController<FShapedGlyphSequence,1> *this)

{
  FShapedGlyphSequence::~FShapedGlyphSequence((FShapedGlyphSequence *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142507a90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateWindowElementList::FDeferredPaint,1>::
DestroyObject(TIntrusiveReferenceController<FSlateWindowElementList::FDeferredPaint,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142507ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 142507ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateCachedElementList,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateCachedElementList,1> *this)

{
  void *pvVar1;
  
  FSlateCachedElementList::DestroyCachedData((FSlateCachedElementList *)&this->ObjectStorage);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x150);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142507b00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateClippingState,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateClippingState,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 142507b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateWindowElementList,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateWindowElementList,1> *this)

{
  FSlateWindowElementList::~FSlateWindowElementList((FSlateWindowElementList *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14257c400

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FButtonStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FButtonStyle,1> *this)

{
  FButtonStyle::~FButtonStyle((FButtonStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCheckBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FCheckBoxStyle,1> *this)

{
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FComboBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FComboBoxStyle,1> *this)

{
  FComboBoxStyle::~FComboBoxStyle((FComboBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FComboButtonStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FComboButtonStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x510);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FComboButtonStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0x470) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x440);
  *(undefined ***)((this->ObjectStorage).Pad + 0x3a0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c4a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDockTabStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FDockTabStyle,1> *this)

{
  FDockTabStyle::~FDockTabStyle((FDockTabStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c4b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FEditableTextBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FEditableTextBoxStyle,1> *this)

{
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c4c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FEditableTextStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FEditableTextStyle,1> *this)

{
  FEditableTextStyle::~FEditableTextStyle((FEditableTextStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c4d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExpandableAreaStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FExpandableAreaStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x160);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FExpandableAreaStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0xc0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xb0);
  *(undefined ***)((this->ObjectStorage).Pad + 0x10) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c530

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHeaderRowStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FHeaderRowStyle,1> *this)

{
  FHeaderRowStyle::~FHeaderRowStyle((FHeaderRowStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c540

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHyperlinkStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FHyperlinkStyle,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((this->ObjectStorage).Pad + 0x3a0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((this->ObjectStorage).Pad + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c580

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInlineEditableTextBlockStyle,1>::
DestroyObject(TIntrusiveReferenceController<FInlineEditableTextBlockStyle,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((this->ObjectStorage).Pad + 0xc90));
  FEditableTextBoxStyle::~FEditableTextBoxStyle
            ((FEditableTextBoxStyle *)((this->ObjectStorage).Pad + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c5c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLinearColor,1>::DestroyObject
          (TIntrusiveReferenceController<FLinearColor,1> *this)

{
  return;
}

// DestroyObject @ 14257c5d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProgressBarStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FProgressBarStyle,1> *this)

{
  FProgressBarStyle::~FProgressBarStyle((FProgressBarStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c5e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FScrollBarStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FScrollBarStyle,1> *this)

{
  FScrollBarStyle::~FScrollBarStyle((FScrollBarStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c5f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FScrollBorderStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FScrollBorderStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x160);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FScrollBorderStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0xc0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xb0);
  *(undefined ***)((this->ObjectStorage).Pad + 0x10) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FScrollBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FScrollBoxStyle,1> *this)

{
  FScrollBoxStyle::~FScrollBoxStyle((FScrollBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c660

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSearchBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSearchBoxStyle,1> *this)

{
  FSearchBoxStyle::~FSearchBoxStyle((FSearchBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c670

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSegmentedControlStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSegmentedControlStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x1ca0);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSegmentedControlStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0x1c00) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((this->ObjectStorage).Pad + 0x12b0));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((this->ObjectStorage).Pad + 0x960));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((this->ObjectStorage).Pad + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c6e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSliderStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSliderStyle,1> *this)

{
  FSliderStyle::~FSliderStyle((FSliderStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c6f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSpinBoxStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSpinBoxStyle,1> *this)

{
  FSpinBoxStyle::~FSpinBoxStyle((FSpinBoxStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c700

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSplitterStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSplitterStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x160);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSplitterStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0xc0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xb0);
  *(undefined ***)((this->ObjectStorage).Pad + 0x10) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c760

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTableColumnHeaderStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FTableColumnHeaderStyle,1> *this)

{
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle((FTableColumnHeaderStyle *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14257c770

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTableRowStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FTableRowStyle,1> *this)

{
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTableViewStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FTableViewStyle,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xb0);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FTableViewStyle__6B_;
  *(undefined ***)((this->ObjectStorage).Pad + 0x10) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c7c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextBlockStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FTextBlockStyle,1> *this)

{
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c7d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FToolBarStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FToolBarStyle,1> *this)

{
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c7e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVolumeControlStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FVolumeControlStyle,1> *this)

{
  FVolumeControlStyle::~FVolumeControlStyle((FVolumeControlStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c7f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWindowStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FWindowStyle,1> *this)

{
  FWindowStyle::~FWindowStyle((FWindowStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c800

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`FSlateAttributeTest::RunTest'::__l14::SManagedAttribute,1>::
DestroyObject(void *this)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14257c810

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`FSlateAttributeTest::RunTest'::__l9::SSlateAttribute,1>::
DestroyObject(void *this)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14257c820

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_Child,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_Child,1> *this)

{
  void *pvVar1;
  
  DestructItems<SWidget::TSlateManagedAttribute<int,8,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,int>
            (*(TSlateManagedAttribute<int,8,TSlateAttributeComparePredicate<TEqualTo<void>_>_> **)
              ((this->ObjectStorage).Pad + 0x228),*(int *)((this->ObjectStorage).Pad + 0x230));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x228);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c860

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1>
              *this)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1>
              *this)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c880

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_Parent,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Slate::Private::SAttributeLeftWidget_Parent,1> *this)

{
  void *pvVar1;
  
  DestructItems<SWidget::TSlateManagedAttribute<int,8,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,int>
            (*(TSlateManagedAttribute<int,8,TSlateAttributeComparePredicate<TEqualTo<void>_>_> **)
              ((this->ObjectStorage).Pad + 0x228),*(int *)((this->ObjectStorage).Pad + 0x230));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x228);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14257c8c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::SContainerAttribute,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::SContainerAttribute,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,int>
            (*(TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>
               **)((this->ObjectStorage).Pad + 0x238),*(int *)((this->ObjectStorage).Pad + 0x240));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x238);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da2f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActiveTimerHandle,1>::DestroyObject
          (TIntrusiveReferenceController<FActiveTimerHandle,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  void *pvVar1;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// DestroyObject @ 1425da330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::FActiveTimersMetaData,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::FActiveTimersMetaData,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedRef<FActiveTimerHandle,1>,int>
            (*(TSharedRef<FActiveTimerHandle,1> **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1425da370

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateAttributeMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateAttributeMetaData,1> *this)

{
  void *pvVar1;
  FGetterItem *pFVar2;
  
  pFVar2 = *(FGetterItem **)((this->ObjectStorage).Pad + 0x88);
  if (pFVar2 == (FGetterItem *)0x0) {
    pFVar2 = (FGetterItem *)((this->ObjectStorage).Pad + 8);
  }
  DestructItems<FSlateAttributeMetaData::FGetterItem,int>
            (pFVar2,*(int *)((this->ObjectStorage).Pad + 0x90));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x88);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1425da3d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateCursorMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateCursorMetaData,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x18));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x18));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1425da420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateMouseEventsMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateMouseEventsMetaData,1> *this)

{
  FSlateMouseEventsMetaData::~FSlateMouseEventsMetaData
            ((FSlateMouseEventsMetaData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateToolTipMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateToolTipMetaData,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1425da490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::SEmptyLeftWidget,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::SEmptyLeftWidget,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da4b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SEmptyLeftWidget,1>
::DestroyObject(TIntrusiveReferenceController<UE::Slate::Test::Private::SEmptyLeftWidget,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da4d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNullWidgetContent,1>::DestroyObject
          (TIntrusiveReferenceController<SNullWidgetContent,1> *this)

{
  SWidget::~SWidget((SWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da4e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SOverlay,1>::DestroyObject
          (TIntrusiveReferenceController<SOverlay,1> *this)

{
  SOverlay::~SOverlay((SOverlay *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopupLayer,1>::DestroyObject
          (TIntrusiveReferenceController<SPopupLayer,1> *this)

{
  SPopupLayer::~SPopupLayer((SPopupLayer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SSingleChild,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Test::Private::SSingleChild,1> *this)

{
  FSlotBase::~FSlotBase((FSlotBase *)((this->ObjectStorage).Pad + 0x238));
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SWidget::~SWidget((SWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da540

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVerticalBox,1>::DestroyObject
          (TIntrusiveReferenceController<SVerticalBox,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da550

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SWeakChild,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Test::Private::SWeakChild,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x240);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SWidget::~SWidget((SWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1425da5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindow,1>::DestroyObject
          (TIntrusiveReferenceController<SWindow,1> *this)

{
  SWindow::~SWindow((SWindow *)&this->ObjectStorage);
  return;
}

