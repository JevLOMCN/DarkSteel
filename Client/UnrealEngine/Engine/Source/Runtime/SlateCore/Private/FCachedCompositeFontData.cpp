// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FCachedCompositeFontData @ 1424718d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCachedCompositeFontData * __thiscall
FCachedCompositeFontData::FCachedCompositeFontData
          (FCachedCompositeFontData *this,FCompositeFont *param_1)

{
  TArray<TSharedPtr<FCachedTypefaceData,1>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  float fVar2;
  FCompositeFont *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FCachedCompositeFontData *pFVar11;
  TSharedRef<FCachedTypefaceData,1> *pTVar12;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar13;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TReferenceControllerBase<1> *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FCachedTypefaceData *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<FCachedTypefaceData,1> local_68 [2];
  
  this->CompositeFont = param_1;
  pTVar1 = &this->CachedTypefaces;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  (this->CachedTypefaces).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0;
  (this->CachedTypefaces).ArrayNum = 0;
  (this->CachedTypefaces).ArrayMax = 2;
  (this->CachedPriorityFontRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPriorityFontRanges).ArrayNum = 0;
  (this->CachedPriorityFontRanges).ArrayMax = 0;
  (this->CachedFontRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedFontRanges).ArrayNum = 0;
  (this->CachedFontRanges).ArrayMax = 0;
  pFVar3 = this->CompositeFont;
  pTVar10 = ::operator_new(0x40);
  pTVar6 = _UNK_150651568;
  pTVar5 = ___xmm_00000000000000000000000000000010;
  fVar2 = __real_3f800000;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_98 = ___xmm_00000000000000000000000000000010;
    pTStack_90 = _UNK_150651568;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFCachedTypefaceData___00_SharedPointerInternals__6B_;
    FCachedTypefaceData::FCachedTypefaceData
              ((FCachedTypefaceData *)(pTVar10 + 1),&pFVar3->DefaultTypeface,fVar2);
    local_98 = pTVar10 + 1;
    if ((local_98 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FCachedCompositeFontData *)(*pcVar4)();
      return pFVar11;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar16 = pTVar10;
    pTStack_90 = pTVar10;
  }
  FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar14 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
  }
  if ((((ulonglong)FVar14 <= &local_98) &&
      (&local_98 <
       (TReferenceControllerBase<1> **)
       ((longlong)(this->CachedTypefaces).ArrayMax * 0x10 + (longlong)FVar14))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FCachedCompositeFontData *)(*pcVar4)();
    return pFVar11;
  }
  iVar9 = (this->CachedTypefaces).ArrayNum;
  if (iVar9 == (this->CachedTypefaces).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FCachedTypefaceData,1>_>_>
                      (0x810,&pTVar1->AllocatorInstance,&(this->CachedTypefaces).ArrayMax);
  }
  (this->CachedTypefaces).ArrayNum = iVar9 + 1;
  FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar14 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
  }
  *(TReferenceControllerBase<1> **)((longlong)FVar14 + (longlong)iVar9 * 0x10) = local_98;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar9 * 0x10) =
       pTStack_90;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_98 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  pTVar12 = MakeShared<FCachedTypefaceData,1,FTypeface_const_&,float_const_&>
                      (local_68,&(this->CompositeFont->FallbackTypeface).Typeface,
                       &(this->CompositeFont->FallbackTypeface).ScalingFactor);
  local_78 = pTVar12->Object;
  local_70 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar14 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
  }
  if ((((ulonglong)FVar14 <= &local_78) &&
      (&local_78 <
       (FCachedTypefaceData **)
       ((longlong)(this->CachedTypefaces).ArrayMax * 0x10 + (longlong)FVar14))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FCachedCompositeFontData *)(*pcVar4)();
    return pFVar11;
  }
  iVar9 = (this->CachedTypefaces).ArrayNum;
  if (iVar9 == (this->CachedTypefaces).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FCachedTypefaceData,1>_>_>
                      (0x810,&pTVar1->AllocatorInstance,&(this->CachedTypefaces).ArrayMax);
  }
  (this->CachedTypefaces).ArrayNum = iVar9 + 1;
  FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar14 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
  }
  *(FCachedTypefaceData **)((longlong)FVar14 + (longlong)iVar9 * 0x10) = local_78;
  *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 8) + (longlong)iVar9 * 0x10) =
       local_70;
  local_70 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (FCachedTypefaceData *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68[0].SharedReferenceCount.ReferenceController);
  pFVar3 = this->CompositeFont;
  local_res18 = (pFVar3->SubTypefaces).ArrayNum;
  uVar15 = (ulonglong)(int)local_res18;
  pFVar17 = (pFVar3->SubTypefaces).AllocatorInstance.Data;
  local_res20 = pFVar17 + uVar15 * 0x38;
  while( true ) {
    pFVar7 = local_res20;
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    if ((pFVar3->SubTypefaces).ArrayNum != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FCompositeSubFont_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar17 == pFVar7) break;
    pTVar10 = ::operator_new(0x40);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      local_88 = pTVar5;
      pTStack_80 = pTVar6;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      fVar2 = *(float *)&pFVar17[0x10].field_0x0;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCachedTypefaceData___00_SharedPointerInternals__6B_
      ;
      FCachedTypefaceData::FCachedTypefaceData
                ((FCachedTypefaceData *)(pTVar10 + 1),(FTypeface *)pFVar17,fVar2);
      if ((pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FCachedCompositeFontData *)(*pcVar4)();
        return pFVar11;
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pTVar16 = pTVar10;
      local_88 = pTVar10 + 1;
      pTStack_80 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
    if (FVar14 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
      FVar13 = FVar14;
    }
    if ((ulonglong)FVar13 <= &local_88) {
      FVar13 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
      if (FVar14 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
        FVar13 = FVar14;
      }
      if ((&local_88 <
           (TReferenceControllerBase<1> **)
           ((longlong)(this->CachedTypefaces).ArrayMax * 0x10 + (longlong)FVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FCachedCompositeFontData *)(*pcVar4)();
        return pFVar11;
      }
    }
    iVar9 = (this->CachedTypefaces).ArrayNum;
    if (iVar9 == (this->CachedTypefaces).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FCachedTypefaceData,1>_>_>
                        (0x810,&pTVar1->AllocatorInstance,&(this->CachedTypefaces).ArrayMax);
    }
    (this->CachedTypefaces).ArrayNum = iVar9 + 1;
    FVar14 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)pTVar1;
    if (FVar14 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
      FVar13 = FVar14;
    }
    *(TReferenceControllerBase<1> **)((longlong)FVar13 + (longlong)iVar9 * 0x10) = local_88;
    *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar13 + 8) + (longlong)iVar9 * 0x10) =
         pTStack_80;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    uVar15 = (ulonglong)local_res18;
    pFVar17 = pFVar17 + 0x38;
  }
  RefreshFontRanges(this);
  return this;
}

// FCachedCompositeFontData @ 142471d80

FCachedCompositeFontData * __thiscall
FCachedCompositeFontData::FCachedCompositeFontData(FCachedCompositeFontData *this)

{
  this->CompositeFont = (FCompositeFont *)0x0;
  (this->CachedTypefaces).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0;
  (this->CachedTypefaces).ArrayNum = 0;
  (this->CachedTypefaces).ArrayMax = 2;
  (this->CachedPriorityFontRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPriorityFontRanges).ArrayNum = 0;
  (this->CachedPriorityFontRanges).ArrayMax = 0;
  (this->CachedFontRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedFontRanges).ArrayNum = 0;
  (this->CachedFontRanges).ArrayMax = 0;
  return this;
}

// ~FCachedCompositeFontData @ 142478ca0

void __thiscall FCachedCompositeFontData::~FCachedCompositeFontData(FCachedCompositeFontData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar2;
  
  DestructItems<FCachedCompositeFontData::FCachedFontRange,int>
            ((FCachedFontRange *)(this->CachedFontRanges).AllocatorInstance.Data,
             (this->CachedFontRanges).ArrayNum);
  pFVar1 = (this->CachedFontRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCachedCompositeFontData::FCachedFontRange,int>
            ((FCachedFontRange *)(this->CachedPriorityFontRanges).AllocatorInstance.Data,
             (this->CachedPriorityFontRanges).ArrayNum);
  pFVar1 = (this->CachedPriorityFontRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar2 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&this->CachedTypefaces;
  }
  DestructItems<TSharedPtr<FCachedTypefaceData,1>,int>
            ((TSharedPtr<FCachedTypefaceData,1> *)FVar2,(this->CachedTypefaces).ArrayNum);
  FVar2 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// operator() @ 14247af90

FCachedTypefaceData * __thiscall
`FCachedCompositeFontData::GetTypefaceForCodepoint'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FCachedTypefaceData *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_28 [2];
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *local_20;
  
  local_28[0] = *(undefined4 *)this;
  if (param_1->ArrayNum != 0) {
    iVar9 = 0;
    iVar8 = 0;
    local_20 = param_1;
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCachedTypefaceData *)(*pcVar3)();
      return pFVar6;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((*pFVar2 == (FScriptContainerElement)0x2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCachedTypefaceData *)(*pcVar3)();
      return pFVar6;
    }
    if (*(int *)(pFVar2 + 4) <= *(int *)this) {
      uVar10 = param_1->ArrayNum - 1;
      uVar5 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FCachedTypefaceData *)(*pcVar3)();
        return pFVar6;
      }
      iVar1 = param_1->ArrayNum;
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2[(longlong)iVar1 * 0x20 + -0x18] == (FScriptContainerElement)0x2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FCachedTypefaceData *)(*pcVar3)();
        return pFVar6;
      }
      if (*(int *)this <= *(int *)(pFVar2 + (longlong)iVar1 * 0x20 + -0x14)) {
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar5 = param_1->ArrayNum;
        if (0 < (int)uVar5) {
          do {
            uVar10 = uVar5 >> 1;
            lVar7 = (longlong)(int)(uVar10 + iVar9) * 0x20;
            if ((pFVar2[lVar7] == (FScriptContainerElement)0x2) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FCachedTypefaceData *)(*pcVar3)();
              return pFVar6;
            }
            iVar8 = iVar9;
            if (*(int *)(pFVar2 + lVar7 + 4) < *(int *)this) {
              iVar8 = uVar10 + iVar9 + (uVar5 & 1);
            }
            uVar5 = uVar10;
            iVar9 = iVar8;
          } while (uVar10 != 0);
        }
        pFVar6 = ``FCachedCompositeFontData::GetTypefaceForCodepoint'::__l2::<lambda_1>::operator()'
                 ::__l2::<lambda_1>::operator()(local_28,iVar8);
        if (pFVar6 != (FCachedTypefaceData *)0x0) {
          return pFVar6;
        }
        pFVar6 = ``FCachedCompositeFontData::GetTypefaceForCodepoint'::__l2::<lambda_1>::operator()'
                 ::__l2::<lambda_1>::operator()(local_28,iVar8 + -1);
        if (pFVar6 != (FCachedTypefaceData *)0x0) {
          return pFVar6;
        }
      }
    }
  }
  return (FCachedTypefaceData *)0x0;
}

// operator() @ 14247c700

void __thiscall
`FCachedCompositeFontData::RefreshFontRanges'::__l2::<lambda_2>::operator()
          (void *this,
          TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TRange<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_res10;
  undefined4 local_res18;
  
  iVar4 = param_1->ArrayNum;
  if (0 < iVar4 + -1) {
    lVar8 = 0x20;
    uVar7 = 1;
    do {
      uVar3 = 0;
      if ((int)(uVar7 - 1) < iVar4) {
        uVar3 = ~(uVar7 - 1) >> 0x1f;
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
      pFVar6 = (param_1->AllocatorInstance).Data;
      uVar3 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
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
      pTVar5 = (TRange<int> *)((param_1->AllocatorInstance).Data + lVar8);
      if ((pFVar6[lVar8 + -0x20] == (FScriptContainerElement)0x2) ||
         (pFVar6[lVar8 + -0x18] == (FScriptContainerElement)0x2)) {
LAB_14247c839:
        if (((pTVar5->LowerBound).Type.Value != '\x02') &&
           ((pTVar5->UpperBound).Type.Value != '\x02')) {
          iVar4 = (pTVar5->LowerBound).Value;
          if (iVar4 <= (pTVar5->UpperBound).Value) {
            if (((pTVar5->UpperBound).Type.Value == '\x02') &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((iVar4 != (pTVar5->UpperBound).Value) ||
               (((pTVar5->LowerBound).Type.Value != '\0' &&
                ((pTVar5->UpperBound).Type.Value != '\0')))) goto LAB_14247c8b0;
          }
          goto LAB_14247c88a;
        }
      }
      else {
        iVar4 = *(int *)(pFVar6 + lVar8 + -0x1c);
        if (iVar4 <= *(int *)(pFVar6 + lVar8 + -0x14)) {
          if ((pFVar6[lVar8 + -0x18] == (FScriptContainerElement)0x2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((iVar4 != *(int *)(pFVar6 + lVar8 + -0x14)) ||
             ((pFVar6[lVar8 + -0x20] != (FScriptContainerElement)0x0 &&
              (pFVar6[lVar8 + -0x18] != (FScriptContainerElement)0x0)))) goto LAB_14247c839;
        }
LAB_14247c88a:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ThisRange.Range.IsEmpty() && !NextRange.Range.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                           ,0x101,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
LAB_14247c8b0:
      if (*(TRangeBound<int> *)(pFVar6 + lVar8 + -0x10) == pTVar5[1].LowerBound) {
        bVar2 = TRange<int>::Overlaps((TRange<int> *)(pFVar6 + lVar8 + -0x20),pTVar5);
        if (!bVar2) {
          if ((pFVar6[lVar8 + -0x18] == (FScriptContainerElement)0x2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = *(int *)(pFVar6 + lVar8 + -0x14);
          if (((pTVar5->LowerBound).Type.Value == '\x02') &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (iVar4 + 1 != (pTVar5->LowerBound).Value) goto LAB_14247ca62;
        }
        if (((pTVar5->UpperBound).Type.Value == '\x02') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (pTVar5->UpperBound).Value;
        if ((pFVar6[lVar8 + -0x18] == (FScriptContainerElement)0x2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res18 = CONCAT31(local_res18._1_3_,1);
        if (iVar4 < *(int *)(pFVar6 + lVar8 + -0x14)) {
          iVar4 = *(int *)(pFVar6 + lVar8 + -0x14);
        }
        if ((pFVar6[lVar8 + -0x20] == (FScriptContainerElement)0x2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res10 = CONCAT31(local_res10._1_3_,1);
        *(ulonglong *)(pFVar6 + lVar8 + -0x20) =
             CONCAT44(*(undefined4 *)(pFVar6 + lVar8 + -0x1c),local_res10);
        *(ulonglong *)(pFVar6 + lVar8 + -0x18) = CONCAT44(iVar4,local_res18);
        uVar3 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = (param_1->AllocatorInstance).Data + lVar8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar6 + 0x18));
        iVar4 = ~uVar7 + param_1->ArrayNum;
        if (iVar4 != 0) {
          memmove(pFVar6,pFVar6 + 0x20,(longlong)iVar4 << 5);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
      }
LAB_14247ca62:
      iVar4 = param_1->ArrayNum;
      lVar8 = lVar8 + 0x20;
      bVar2 = (int)uVar7 < iVar4 + -1;
      uVar7 = uVar7 + 1;
    } while (bVar2);
  }
  return;
}

// GetCachedFontData @ 14248bfe0

void __thiscall
FCachedCompositeFontData::GetCachedFontData
          (FCachedCompositeFontData *this,
          TArray<FFontData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar9;
  int *piVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  FVar13 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
  local_res20 = (this->CachedTypefaces).ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  if (FVar13 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&this->CachedTypefaces;
  }
  FVar9 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)(uVar8 * 0x10 + (longlong)FVar13);
  while( true ) {
    if ((this->CachedTypefaces).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FCachedTypefaceData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar13 == FVar9) break;
    if ((*(longlong *)FVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar2 = *(longlong *)FVar13;
    lVar11 = lVar2 + 8;
    iVar1 = *(int *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      lVar11 = *(longlong *)(lVar2 + 0x18);
    }
    pFVar12 = (FScriptContainerElement *)(lVar11 + 8);
    while( true ) {
      if (*(int *)(lVar2 + 0x20) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FCachedTypefaceData::FCachedFontData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      piVar10 = &param_1->ArrayMax;
      if (pFVar12 + -8 == (FScriptContainerElement *)((longlong)iVar1 * 0x10 + lVar11)) break;
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)*piVar10 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar10) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar10);
      }
      param_1->ArrayNum = iVar7 + 1;
      uVar4 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0x10;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = uVar4;
    }
    FVar13 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)((longlong)FVar13 + 0x10);
    uVar8 = (ulonglong)local_res20;
  }
  return;
}

// GetTypefaceForCodepoint @ 142496e00

FCachedTypefaceData * __thiscall
FCachedCompositeFontData::GetTypefaceForCodepoint(FCachedCompositeFontData *this,wchar32 param_1)

{
  code *pcVar1;
  bool bVar2;
  FCachedTypefaceData *pFVar3;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar4;
  wchar32 local_res10 [6];
  
  local_res10[0] = param_1;
  pFVar3 = `FCachedCompositeFontData::GetTypefaceForCodepoint'::__l2::<lambda_1>::operator()
                     (local_res10,&this->CachedPriorityFontRanges);
  if (pFVar3 == (FCachedTypefaceData *)0x0) {
    pFVar3 = `FCachedCompositeFontData::GetTypefaceForCodepoint'::__l2::<lambda_1>::operator()
                       (local_res10,&this->CachedFontRanges);
    if (pFVar3 == (FCachedTypefaceData *)0x0) {
      if ((this->CachedTypefaces).ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FCachedTypefaceData *)(*pcVar1)();
          return pFVar3;
        }
      }
      FVar4 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
        FVar4 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&this->CachedTypefaces;
      }
      pFVar3 = *(FCachedTypefaceData **)FVar4;
    }
  }
  return pFVar3;
}

// RefreshFontRanges @ 1424a2bf0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FCachedCompositeFontData::RefreshFontRanges(FCachedCompositeFontData *this)

{
  int *piVar1;
  int iVar2;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FCachedFontRange *pFVar4;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FInternationalization *this_01;
  FInternationalization *pFVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  FCompositeFont *pFVar15;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar16;
  ForAnyElementType FVar17;
  char *pcVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  longlong lVar23;
  char *pcVar24;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  uint local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50 [2];
  
  this_01 = FInternationalization::Get();
  pFVar12 = FInternationalization::Get();
  if (((pFVar12->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = (pFVar12->CurrentLanguage).Object;
  pTVar3 = (pFVar12->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FCulture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar13 = FCulture::GetName(this_00);
  FInternationalization::GetPrioritizedCultureNames(this_01,&local_78,pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar4 = (FCachedFontRange *)(this->CachedPriorityFontRanges).AllocatorInstance.Data;
  pTVar21 = &this->CachedPriorityFontRanges;
  piVar1 = &(this->CachedPriorityFontRanges).ArrayMax;
  iVar2 = (this->CachedPriorityFontRanges).ArrayNum;
  lVar23 = 0x20;
  local_88 = 0x20;
  local_68 = pTVar21;
  if ((this->CachedPriorityFontRanges).ArrayMax < 0) {
    DestructItems<FCachedCompositeFontData::FCachedFontRange,int>(pFVar4,iVar2);
    (this->CachedPriorityFontRanges).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar21->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FCachedCompositeFontData::FCachedFontRange,int>(pFVar4,iVar2);
    (this->CachedPriorityFontRanges).ArrayNum = 0;
  }
  pFVar4 = (FCachedFontRange *)(this->CachedFontRanges).AllocatorInstance.Data;
  piVar1 = &(this->CachedFontRanges).ArrayMax;
  iVar2 = (this->CachedFontRanges).ArrayNum;
  if ((this->CachedFontRanges).ArrayMax < 0) {
    DestructItems<FCachedCompositeFontData::FCachedFontRange,int>(pFVar4,iVar2);
    (this->CachedFontRanges).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->CachedFontRanges).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FCachedCompositeFontData::FCachedFontRange,int>(pFVar4,iVar2);
    (this->CachedFontRanges).ArrayNum = 0;
  }
  pFVar15 = this->CompositeFont;
  if (0 < (pFVar15->SubTypefaces).ArrayNum) {
    local_80 = 0;
    local_98 = 2;
    do {
      lVar8 = local_80;
      uVar22 = local_98;
      if ((-1 < (int)local_98) && ((int)local_98 < (this->CachedTypefaces).ArrayNum)) {
        uVar10 = 0;
        if ((int)(local_98 - 2) < (pFVar15->SubTypefaces).ArrayNum) {
          uVar10 = ~(local_98 - 2) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_90 = (pFVar15->SubTypefaces).AllocatorInstance.Data + lVar8;
        uVar10 = 0;
        if ((int)uVar22 < (this->CachedTypefaces).ArrayNum) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (this->CachedTypefaces).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&this->CachedTypefaces;
        if (FVar5 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
          FVar16 = FVar5;
        }
        local_60 = *(undefined8 *)((longlong)FVar16 + lVar23);
        pTVar3 = *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar16 + 8) + lVar23);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (*(int *)(local_90 + 0x30) < 2) {
          pTVar21 = &this->CachedFontRanges;
LAB_1424a2f4b:
          if (pTVar21 !=
              (TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_> *)0x0)
          {
            iVar2 = *(int *)(local_90 + 0x20);
            pcVar18 = *(char **)(local_90 + 0x18);
            pcVar24 = pcVar18 + (longlong)iVar2 * 0x10;
            while( true ) {
              if (*(int *)(local_90 + 0x20) != iVar2) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<FInt32Range_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              uVar22 = local_98;
              if (pcVar18 == pcVar24) break;
              if ((*pcVar18 == '\x02') || (pcVar18[8] == '\x02')) {
LAB_1424a2fd9:
                iVar11 = pTVar21->ArrayNum;
                if (iVar11 == pTVar21->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
                  pTVar21->ArrayNum = iVar11;
                }
                pFVar14 = (pTVar21->AllocatorInstance).Data + (longlong)iVar11 * 0x20;
                pTVar21->ArrayNum = iVar11 + 1;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                uVar7 = *(undefined8 *)(pcVar18 + 8);
                *(undefined8 *)pFVar14 = *(undefined8 *)pcVar18;
                *(undefined8 *)(pFVar14 + 8) = uVar7;
                *(undefined8 *)(pFVar14 + 0x10) = local_60;
                *(TReferenceControllerBase<1> **)(pFVar14 + 0x18) = pTVar3;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              else {
                iVar11 = *(int *)(pcVar18 + 4);
                if (iVar11 <= *(int *)(pcVar18 + 0xc)) {
                  if ((pcVar18[8] == '\x02') &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Type != ERangeBoundTypes::Open",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                         ,99,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((iVar11 != *(int *)(pcVar18 + 0xc)) ||
                     ((*pcVar18 != '\0' && (pcVar18[8] != '\0')))) goto LAB_1424a2fd9;
                }
              }
              pcVar18 = pcVar18 + 0x10;
            }
          }
        }
        else {
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          ::FString::ParseIntoArray((FString *)(local_90 + 0x28),&local_a8,L";",true);
          iVar2 = local_a8.ArrayNum;
          pFVar14 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x10;
          FVar20.Data = local_a8.AllocatorInstance.Data;
          while( true ) {
            if (local_a8.ArrayNum != iVar2) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (FVar20.Data == pFVar14) break;
            pFVar19 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
            for (FVar17.Data = local_78.AllocatorInstance.Data; FVar17.Data != pFVar19;
                FVar17.Data = FVar17.Data + 0x10) {
              iVar11 = *(int *)(FVar17.Data + 8);
              if (iVar11 == *(int *)(FVar20.Data + 8)) {
                if (1 < iVar11) {
                  iVar11 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)FVar17.Data,*(wchar_t **)FVar20.Data);
                  bVar9 = iVar11 == 0;
                  goto LAB_1424a2f13;
                }
LAB_1424a2f29:
                DestructItems<FString,int>
                          ((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
                pTVar21 = local_68;
                if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.AllocatorInstance.Data);
                  pTVar21 = local_68;
                }
                goto LAB_1424a2f4b;
              }
              bVar9 = iVar11 + *(int *)(FVar20.Data + 8) == 1;
LAB_1424a2f13:
              if (bVar9) goto LAB_1424a2f29;
            }
            FVar20.Data = FVar20.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        lVar23 = local_88;
      }
      pFVar15 = this->CompositeFont;
      local_98 = uVar22 + 1;
      lVar23 = lVar23 + 0x10;
      local_80 = local_80 + 0x38;
      local_88 = lVar23;
    } while ((int)(uVar22 - 1) < (pFVar15->SubTypefaces).ArrayNum);
  }
  local_res8 = SUB81(this,0);
  local_58 = FCachedFontRange::SortPredicate;
  AlgoImpl::
  IntroSortInternal<FCachedCompositeFontData::FCachedFontRange,int,FIdentityFunctor,TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>_>
            ((FCachedFontRange *)(this->CachedPriorityFontRanges).AllocatorInstance.Data,
             (this->CachedPriorityFontRanges).ArrayNum,local_res8,
             (TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>
              )&local_58);
  local_50[0] = FCachedFontRange::SortPredicate;
  AlgoImpl::
  IntroSortInternal<FCachedCompositeFontData::FCachedFontRange,int,FIdentityFunctor,TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>_>
            ((FCachedFontRange *)(this->CachedFontRanges).AllocatorInstance.Data,
             (this->CachedFontRanges).ArrayNum,local_res8,
             (TDereferenceWrapper<FCachedCompositeFontData::FCachedFontRange,bool_(__cdecl*)(FCachedCompositeFontData::FCachedFontRange_const_&,FCachedCompositeFontData::FCachedFontRange_const_&)>
              )local_50);
  `FCachedCompositeFontData::RefreshFontRanges'::__l2::<lambda_2>::operator()
            (local_res20,&this->CachedPriorityFontRanges);
  `FCachedCompositeFontData::RefreshFontRanges'::__l2::<lambda_2>::operator()
            (local_res20,&this->CachedFontRanges);
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

