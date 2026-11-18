// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// AddShapedText @ 142851a20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::AddShapedText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  FSlateFontCache *this_00;
  int iVar3;
  FShapedGlyphSequence *pFVar4;
  FShapedGlyphSequence *pFVar5;
  FShapedGlyphSequence *pFVar6;
  bool bVar7;
  TRawPtrProxy<FShapedGlyphSequence> local_res8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_38;
  TSharedRef<FShapedGlyphSequence_const_,1> local_28;
  
  pFVar4 = (FShapedGlyphSequence *)(this->FontCachePtr).WeakReferenceCount.ReferenceController;
  pFVar5 = (FShapedGlyphSequence *)0x0;
  pFVar6 = pFVar4;
  if (pFVar4 != (FShapedGlyphSequence *)0x0) {
    iVar2 = (pFVar4->GlyphsToRender).ArrayNum;
    do {
      pFVar6 = pFVar5;
      if (iVar2 == 0) goto LAB_142851a62;
      piVar1 = &(pFVar4->GlyphsToRender).ArrayNum;
      LOCK();
      iVar3 = *piVar1;
      bVar7 = iVar2 == iVar3;
      if (bVar7) {
        *piVar1 = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar7);
    this_00 = (this->FontCachePtr).Object;
    pFVar6 = pFVar4;
    if (this_00 != (FSlateFontCache *)0x0) {
      iVar2 = (param_1->TextRange).BeginIndex;
      FSlateFontCache::ShapeBidirectionalText
                (this_00,&local_38,param_2,iVar2,(param_1->TextRange).EndIndex - iVar2,
                 &param_1->FontInfo,param_1->Scale,(param_1->TextContext).BaseDirection,
                 (param_1->TextContext).TextShapingMethod);
      local_28.Object = local_38.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddShapedText(this,__return_storage_ptr__,param_1,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      goto LAB_142851a94;
    }
  }
LAB_142851a62:
  pFVar4 = ::operator_new(0xa8);
  if (pFVar4 != (FShapedGlyphSequence *)0x0) {
    pFVar5 = FShapedGlyphSequence::FShapedGlyphSequence(pFVar4);
  }
  local_res8.Object = pFVar5;
  TSharedRef<FShapedGlyphSequence_const_,1>::
  TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
            (__return_storage_ptr__,&local_res8);
  pFVar4 = pFVar6;
LAB_142851a94:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// AddShapedText @ 142851b50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::AddShapedText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1,wchar_t *param_2,ETextDirection param_3)

{
  int *piVar1;
  int iVar2;
  FSlateFontCache *this_00;
  int iVar3;
  FShapedGlyphSequence *pFVar4;
  FShapedGlyphSequence *pFVar5;
  FShapedGlyphSequence *pFVar6;
  bool bVar7;
  TRawPtrProxy<FShapedGlyphSequence> local_res8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_38;
  TSharedRef<FShapedGlyphSequence_const_,1> local_28;
  
  pFVar4 = (FShapedGlyphSequence *)(this->FontCachePtr).WeakReferenceCount.ReferenceController;
  pFVar5 = (FShapedGlyphSequence *)0x0;
  pFVar6 = pFVar4;
  if (pFVar4 != (FShapedGlyphSequence *)0x0) {
    iVar2 = (pFVar4->GlyphsToRender).ArrayNum;
    do {
      pFVar6 = pFVar5;
      if (iVar2 == 0) goto LAB_142851b92;
      piVar1 = &(pFVar4->GlyphsToRender).ArrayNum;
      LOCK();
      iVar3 = *piVar1;
      bVar7 = iVar2 == iVar3;
      if (bVar7) {
        *piVar1 = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar7);
    this_00 = (this->FontCachePtr).Object;
    pFVar6 = pFVar4;
    if (this_00 != (FSlateFontCache *)0x0) {
      iVar2 = (param_1->TextRange).BeginIndex;
      FSlateFontCache::ShapeUnidirectionalText
                (this_00,&local_38,param_2,iVar2,(param_1->TextRange).EndIndex - iVar2,
                 &param_1->FontInfo,param_1->Scale,param_3,(param_1->TextContext).TextShapingMethod)
      ;
      local_28.Object = local_38.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddShapedText(this,__return_storage_ptr__,param_1,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      goto LAB_142851bc4;
    }
  }
LAB_142851b92:
  pFVar4 = ::operator_new(0xa8);
  if (pFVar4 != (FShapedGlyphSequence *)0x0) {
    pFVar5 = FShapedGlyphSequence::FShapedGlyphSequence(pFVar4);
  }
  local_res8.Object = pFVar5;
  TSharedRef<FShapedGlyphSequence_const_,1>::
  TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
            (__return_storage_ptr__,&local_res8);
  pFVar4 = pFVar6;
LAB_142851bc4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// AddShapedText @ 142851c80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::AddShapedText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1,TSharedRef<FShapedGlyphSequence_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FShapedGlyphSequence *local_28;
  TReferenceControllerBase<1> *local_20;
  FCachedShapedTextKey *local_18;
  undefined8 *local_10;
  
  local_28 = param_2->Object;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = &local_28;
  local_18 = param_1;
  TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>_>
            ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
              *)&this->CachedShapedText,
             (TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>
              *)&stack0x00000008,(bool *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  __return_storage_ptr__->Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Clear @ 142857620

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FShapedTextCache::Clear(FShapedTextCache *this)

{
  TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
           *)&this->CachedShapedText);
  return;
}

// FindOrAddOverflowEllipsisText @ 142872440

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::FindOrAddOverflowEllipsisText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          float param_1,FShapedTextContext *param_2,FSlateFontInfo *param_3)

{
  FSlateFontCache *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  atomic<int> aVar6;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar7;
  FShapedGlyphSequence *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  TRawPtrProxy<FShapedGlyphSequence> local_res8;
  FCachedShapedTextKey local_88;
  
  local_88.TextRange.BeginIndex = -1;
  local_88.TextRange.EndIndex = -1;
  local_88.TextContext = *param_2;
  local_88.Scale = param_1;
  FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,param_3);
  uVar4 = ::GetTypeHash(&local_88);
  iVar5 = TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FCachedShapedTextKey>
                    ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedShapedText,uVar4,&local_88);
  if ((iVar5 == -1) ||
     (lVar10 = (longlong)iVar5 * 0x88 + *(longlong *)&this->CachedShapedText, lVar10 == 0)) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar8 = *(FShapedGlyphSequence **)(lVar10 + 0x70);
    pTVar9 = *(TReferenceControllerBase<1> **)(lVar10 + 0x78);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar8 != (FShapedGlyphSequence *)0x0) &&
       (bVar3 = FShapedGlyphSequence::IsDirty(pFVar8), !bVar3)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      __return_storage_ptr__->Object = pFVar8;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((__return_storage_ptr__->Object == (FShapedGlyphSequence *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
        return pTVar7;
      }
      goto LAB_142872589;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (this->FontCachePtr).WeakReferenceCount.ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_142872550:
    pFVar8 = ::operator_new(0xa8);
    local_res8.Object = (FShapedGlyphSequence *)0x0;
    if (pFVar8 != (FShapedGlyphSequence *)0x0) {
      local_res8.Object = FShapedGlyphSequence::FShapedGlyphSequence(pFVar8);
    }
    TSharedRef<FShapedGlyphSequence_const_,1>::
    TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
              (__return_storage_ptr__,&local_res8);
  }
  else {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142872550;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar3 = aVar2 == aVar6;
      if (bVar3) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar3);
    this_00 = (this->FontCachePtr).Object;
    if (this_00 == (FSlateFontCache *)0x0) goto LAB_142872550;
    FSlateFontCache::ShapeOverflowEllipsisText(this_00,__return_storage_ptr__,param_3,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_142872589:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindOrAddShapedText @ 1428725e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::FindOrAddShapedText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1,wchar_t *param_2)

{
  TMap<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>_>
  *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  atomic<int> aVar6;
  FShapedGlyphSequence *pFVar7;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar8;
  FSlateFontCache *this_01;
  longlong lVar9;
  FSharedReferencer<1> FVar10;
  atomic<int> *paVar11;
  TReferenceControllerBase<1> *pTVar12;
  TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>
  local_res8;
  FSharedReferencer<1> FStack_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSharedRef<FShapedGlyphSequence_const_,1> local_78;
  TSharedRef<FShapedGlyphSequence_const_,1> local_68;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  FCachedShapedTextKey *local_48;
  undefined1 *local_40;
  
  this_00 = &this->CachedShapedText;
  uVar4 = ::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FCachedShapedTextKey>
                    ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,param_1);
  if ((iVar5 == -1) ||
     (lVar9 = (longlong)iVar5 * 0x88 + *(longlong *)&this_00->field_0x0, lVar9 == 0)) {
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar7 = *(FShapedGlyphSequence **)(lVar9 + 0x70);
    FVar10.ReferenceController = *(TReferenceControllerBase<1> **)(lVar9 + 0x78);
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar7 != (FShapedGlyphSequence *)0x0) &&
       (bVar3 = FShapedGlyphSequence::IsDirty(pFVar7), !bVar3)) {
      FStack_90.ReferenceController = FVar10.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142872814;
    }
  }
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  pTVar12 = (this->FontCachePtr).WeakReferenceCount.ReferenceController;
  this_01 = (FSlateFontCache *)0x0;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428726aa;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar3 = aVar2 == aVar6;
      if (bVar3) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar3);
    this_01 = (this->FontCachePtr).Object;
  }
  if (this_01 == (FSlateFontCache *)0x0) {
LAB_1428726aa:
    pFVar7 = ::operator_new(0xa8);
    local_res8.Value = (TSharedPtr<FShapedGlyphSequence_const_,1> *)0x0;
    if (pFVar7 != (FShapedGlyphSequence *)0x0) {
      local_res8.Value =
           (TSharedPtr<FShapedGlyphSequence_const_,1> *)
           FShapedGlyphSequence::FShapedGlyphSequence(pFVar7);
    }
    TSharedRef<FShapedGlyphSequence_const_,1>::
    TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
              (&local_78,(TRawPtrProxy<FShapedGlyphSequence> *)&local_res8.Value);
    FVar10.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    pFVar7 = local_78.Object;
  }
  else {
    iVar5 = (param_1->TextRange).BeginIndex;
    FSlateFontCache::ShapeBidirectionalText
              (this_01,&local_68,param_2,iVar5,(param_1->TextRange).EndIndex - iVar5,
               &param_1->FontInfo,param_1->Scale,(param_1->TextContext).BaseDirection,
               (param_1->TextContext).TextShapingMethod);
    FVar10.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_80 = local_68.SharedReferenceCount.ReferenceController;
    local_40 = local_88;
    local_48 = param_1;
    TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>_>
              ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    local_78.Object = local_68.Object;
    local_78.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    pFVar7 = local_68.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = 0;
  local_50.ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  FVar10.ReferenceController = FStack_90.ReferenceController;
  if ((pFVar7 == (FShapedGlyphSequence *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), FVar10.ReferenceController = FStack_90.ReferenceController,
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
    return pTVar8;
  }
LAB_142872814:
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FShapedGlyphSequence *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// FindOrAddShapedText @ 142872880

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::FindOrAddShapedText
          (FShapedTextCache *this,TSharedRef<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1,wchar_t *param_2,ETextDirection param_3)

{
  TMap<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>_>
  *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  atomic<int> aVar6;
  FShapedGlyphSequence *pFVar7;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar8;
  FSlateFontCache *this_01;
  longlong lVar9;
  FSharedReferencer<1> FVar10;
  atomic<int> *paVar11;
  TReferenceControllerBase<1> *pTVar12;
  TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>
  local_res8;
  FSharedReferencer<1> FStack_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSharedRef<FShapedGlyphSequence_const_,1> local_78;
  TSharedRef<FShapedGlyphSequence_const_,1> local_68;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  FCachedShapedTextKey *local_48;
  undefined1 *local_40;
  
  this_00 = &this->CachedShapedText;
  uVar4 = ::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FCachedShapedTextKey>
                    ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,param_1);
  if ((iVar5 == -1) ||
     (lVar9 = (longlong)iVar5 * 0x88 + *(longlong *)&this_00->field_0x0, lVar9 == 0)) {
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar7 = *(FShapedGlyphSequence **)(lVar9 + 0x70);
    FVar10.ReferenceController = *(TReferenceControllerBase<1> **)(lVar9 + 0x78);
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar7 != (FShapedGlyphSequence *)0x0) &&
       (bVar3 = FShapedGlyphSequence::IsDirty(pFVar7), !bVar3)) {
      FStack_90.ReferenceController = FVar10.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142872ab2;
    }
  }
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  pTVar12 = (this->FontCachePtr).WeakReferenceCount.ReferenceController;
  this_01 = (FSlateFontCache *)0x0;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14287294a;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar3 = aVar2 == aVar6;
      if (bVar3) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar3);
    this_01 = (this->FontCachePtr).Object;
  }
  if (this_01 == (FSlateFontCache *)0x0) {
LAB_14287294a:
    pFVar7 = ::operator_new(0xa8);
    local_res8.Value = (TSharedPtr<FShapedGlyphSequence_const_,1> *)0x0;
    if (pFVar7 != (FShapedGlyphSequence *)0x0) {
      local_res8.Value =
           (TSharedPtr<FShapedGlyphSequence_const_,1> *)
           FShapedGlyphSequence::FShapedGlyphSequence(pFVar7);
    }
    TSharedRef<FShapedGlyphSequence_const_,1>::
    TSharedRef<FShapedGlyphSequence_const_,1><FShapedGlyphSequence>
              (&local_78,(TRawPtrProxy<FShapedGlyphSequence> *)&local_res8.Value);
    FVar10.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    pFVar7 = local_78.Object;
  }
  else {
    iVar5 = (param_1->TextRange).BeginIndex;
    FSlateFontCache::ShapeUnidirectionalText
              (this_01,&local_68,param_2,iVar5,(param_1->TextRange).EndIndex - iVar5,
               &param_1->FontInfo,param_1->Scale,param_3,(param_1->TextContext).TextShapingMethod);
    FVar10.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_80 = local_68.SharedReferenceCount.ReferenceController;
    local_40 = local_88;
    local_48 = param_1;
    TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FCachedShapedTextKey_const_&,TSharedPtr<FShapedGlyphSequence_const_,1>_&&>_>
              ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    local_78.Object = local_68.Object;
    local_78.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    pFVar7 = local_68.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = 0;
  local_50.ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  FVar10.ReferenceController = FStack_90.ReferenceController;
  if ((pFVar7 == (FShapedGlyphSequence *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), FVar10.ReferenceController = FStack_90.ReferenceController,
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
    return pTVar8;
  }
LAB_142872ab2:
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FShapedGlyphSequence *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// FindShapedText @ 142872b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FShapedGlyphSequence_const_,1> * __thiscall
FShapedTextCache::FindShapedText
          (FShapedTextCache *this,TSharedPtr<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,
          FCachedShapedTextKey *param_1)

{
  FShapedGlyphSequence *this_00;
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FCachedShapedTextKey>
                    ((TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedShapedText,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x88 + *(longlong *)&(this->CachedShapedText).field_0x0, lVar6 == 0)
     ) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(FShapedGlyphSequence **)(lVar6 + 0x70);
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar6 + 0x78);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = pTVar1;
    if (this_00 != (FShapedGlyphSequence *)0x0) {
      bVar2 = FShapedGlyphSequence::IsDirty(this_00);
      if (!bVar2) {
        __return_storage_ptr__->Object = this_00;
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        goto LAB_142872ba2;
      }
    }
  }
  __return_storage_ptr__->Object = (FShapedGlyphSequence *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142872ba2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

