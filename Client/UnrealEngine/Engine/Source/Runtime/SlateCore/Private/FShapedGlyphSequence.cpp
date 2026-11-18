// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 16

// FShapedGlyphSequence @ 142474f20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShapedGlyphSequence * __thiscall
FShapedGlyphSequence::FShapedGlyphSequence
          (FShapedGlyphSequence *this,TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *param_1
          ,short param_2,ushort param_3,UObject *param_4,bool param_5,FFontOutlineSettings *param_6,
          FSourceTextRange *param_7)

{
  int *piVar1;
  int *piVar2;
  uchar auVar3 [8];
  FScriptContainerElement *pFVar4;
  uint uVar5;
  UObject *pUVar6;
  FShapedGlyphFaceData *pFVar7;
  FName FVar8;
  code *pcVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  undefined4 uVar12;
  FFontOutlineSettings *pFVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  atomic<int> aVar18;
  FShapedGlyphSequence *pFVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory> FVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar22;
  TReferenceControllerBase<1> *pTVar23;
  FScriptContainerElement *pFVar24;
  FShapedGlyphEntry *this_02;
  float fVar25;
  UObject *local_res8;
  FName local_res10;
  undefined3 in_stack_00000031;
  uint local_a8 [2];
  FName local_a0 [2];
  FName local_90;
  FStatMessage local_88;
  FScriptContainerElement local_70 [56];
  
  (this->GlyphsToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlyphsToRender).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GlyphsToRender).ArrayNum = param_1->ArrayNum;
  (this->GlyphsToRender).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->bMaterialIsStencil = param_5;
  this->TextBaseline = param_2;
  this->MaxTextHeight = param_3;
  (this->FontMaterial).field0_0x0.DebugPtr = param_4;
  local_res10 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  pFVar13 = param_6;
  (this->OutlineSettings).OutlineSize = param_6->OutlineSize;
  (this->OutlineSettings).bMiteredCorners = param_6->bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = param_6->bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows = param_6->bApplyOutlineToDropShadows;
  pUVar6 = (param_6->OutlineMaterial).field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  uVar10 = *(undefined8 *)((longlong)&(pFVar13->OutlineColor).field0_0x0 + 8);
  piVar1 = &(this->SourceIndicesToGlyphData).GlyphDataArray.ArrayMax;
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(pFVar13->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar10;
  this->SequenceWidth = 0;
  (this->GlyphFontFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlyphFontFaces).ArrayNum = 0;
  (this->GlyphFontFaces).ArrayMax = 0;
  (this->SourceIndicesToGlyphData).SourceTextRange = *param_7;
  piVar2 = &(this->SourceIndicesToGlyphData).GlyphDataArray.ArrayNum;
  *piVar2 = 0;
  (this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  uVar5 = param_7->TextLen;
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,uVar5,
                        &(this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance,piVar2,
                        piVar1);
    DefaultConstructItems<FShapedGlyphSequence::FSourceIndexToGlyphData,int>
              ((this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data +
               (longlong)iVar16 * 0x18,uVar5);
  }
  if ((this->GlyphsToRender).ArrayNum < 1) {
    fVar25 = 0.0;
  }
  else {
    pFVar24 = (this->GlyphsToRender).AllocatorInstance.Data;
    if ((*(longlong *)pFVar24 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
      return pFVar19;
    }
    fVar25 = *(float *)(*(longlong *)pFVar24 + 0x20);
  }
  iVar16 = (this->GlyphsToRender).ArrayNum;
  this->CachedFontSkew = fVar25;
  (this->FontMaterialWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SdfFontMaterialOverrideWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OutlineMaterialWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugFontMaterialName).ComparisonIndex = 0;
  (this->DebugFontMaterialName).Number = 0;
  (this->DebugSdfFontMaterialOverrideName).ComparisonIndex = 0;
  (this->DebugSdfFontMaterialOverrideName).Number = 0;
  (this->DebugOutlineMaterialName).ComparisonIndex = 0;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar25 = __real_322bcc77;
  (this->DebugOutlineMaterialName).Number = 0;
  local_a8[0] = 0;
  _param_5 = iVar16;
  if (0 < iVar16) {
    do {
      uVar14 = local_a8[0];
      uVar17 = 0;
      if ((int)local_a8[0] < (this->GlyphsToRender).ArrayNum) {
        uVar17 = ~local_a8[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
        return pFVar19;
      }
      this_02 = (FShapedGlyphEntry *)
                ((this->GlyphsToRender).AllocatorInstance.Data + (longlong)(int)uVar14 * 0xa8);
      if (((this_02->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
        return pFVar19;
      }
      if ((fVar25 < (float)((uint)(this->CachedFontSkew - ((this_02->FontFaceData).Object)->FontSkew
                                  ) & uVar5)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMath::IsNearlyEqual(CachedFontSkew, CurrentGlyph.FontFaceData->FontSkew)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                              ,0xda,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
        return pFVar19;
      }
      if (((this_02->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
        return pFVar19;
      }
      pFVar7 = (this_02->FontFaceData).Object;
      if ((((pFVar7->FontFace).Object != (FFreeTypeFace *)0x0) &&
          (pTVar23 = (pFVar7->FontFace).WeakReferenceCount.ReferenceController,
          pTVar23 != (TReferenceControllerBase<1> *)0x0)) &&
         (0 < (int)pTVar23->SharedReferenceCount)) {
        if (((this_02->FontFaceData).Object == (FShapedGlyphFaceData *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
          return pFVar19;
        }
        TArray<TWeakPtr<FFreeTypeFace,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakPtr<FFreeTypeFace,1>_const_&>
                  (&this->GlyphFontFaces,&((this_02->FontFaceData).Object)->FontFace);
      }
      this->SequenceWidth = this->SequenceWidth + (int)this_02->XAdvance;
      iVar22 = this_02->SourceIndex - (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
      if ((iVar22 < 0) || ((this->SourceIndicesToGlyphData).GlyphDataArray.ArrayNum <= iVar22)) {
        pFVar24 = (FScriptContainerElement *)0x0;
LAB_1424752a7:
        if (2 < (byte)LogSlate._0_1_) {
          FShapedGlyphEntry::HasValidGlyph(this_02);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          iVar16 = _param_5;
        }
        pFVar7 = (this_02->FontFaceData).Object;
        if (pFVar7 != (FShapedGlyphFaceData *)0x0) {
          pTVar23 = (pFVar7->FontFace).WeakReferenceCount.ReferenceController;
          if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
            aVar11 = pTVar23->SharedReferenceCount;
            do {
              if (aVar11 == (atomic<int>)0x0) {
                pTVar23 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_142475344;
              }
              LOCK();
              aVar18 = pTVar23->SharedReferenceCount;
              bVar15 = aVar11 == aVar18;
              if (bVar15) {
                pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
                aVar18 = aVar11;
              }
              UNLOCK();
              aVar11 = aVar18;
            } while (!bVar15);
            if (((pFVar7->FontFace).Object != (FFreeTypeFace *)0x0) && (2 < (byte)LogSlate._0_1_)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            }
          }
LAB_142475344:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar23);
        }
        bVar15 = FShapedGlyphEntry::HasValidGlyph(this_02);
        if ((bVar15) && (this_02->bIsVisible != false)) goto LAB_142475367;
      }
      else {
        if ((iVar22 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
          return pFVar19;
        }
        pFVar24 = (this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data +
                  (longlong)iVar22 * 0x18;
        if (pFVar24 == (FScriptContainerElement *)0x0) goto LAB_1424752a7;
LAB_142475367:
        pFVar4 = pFVar24 + 8;
        if (*(int *)pFVar24 == -1) {
          *(uint *)pFVar24 = local_a8[0];
          if (pFVar4 != local_70) {
            if (*(FScriptContainerElement **)&pFVar4->field_0x0 != (FScriptContainerElement *)0x0) {
              FMemory::Free(*(FScriptContainerElement **)&pFVar4->field_0x0);
            }
            *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
            *(undefined8 *)(pFVar24 + 0x10) = 0;
          }
        }
        else {
          if (((*(FScriptContainerElement **)&pFVar4->field_0x0 <=
                (FScriptContainerElement *)local_a8) &&
              ((FScriptContainerElement *)local_a8 <
               *(FScriptContainerElement **)&pFVar4->field_0x0 +
               (longlong)*(int *)(pFVar24 + 0x14) * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            pFVar19 = (FShapedGlyphSequence *)(*pcVar9)();
            return pFVar19;
          }
          iVar22 = *(int *)(pFVar24 + 0x10);
          if (iVar22 == *(int *)(pFVar24 + 0x14)) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar4,(int *)(pFVar24 + 0x14));
          }
          *(int *)(pFVar24 + 0x10) = iVar22 + 1;
          *(uint *)(*(FScriptContainerElement **)&pFVar4->field_0x0 + (longlong)iVar22 * 4) =
               local_a8[0];
        }
      }
      local_a8[0] = local_a8[0] + 1;
      param_1 = (TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *)local_res10;
    } while ((int)local_a8[0] < iVar16);
  }
  pUVar6 = (this->FontMaterial).field0_0x0.DebugPtr;
  if (pUVar6 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable(pUVar6), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    param_4 = (UObject *)0x0;
    param_7 = (FSourceTextRange *)pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_4,(FObjectPtr)&param_7);
    (this->FontMaterialWeakPtr).WeakPtr = (FWeakObjectPtr)param_4;
    pUVar6 = (this->FontMaterial).field0_0x0.DebugPtr;
    uVar12 = *(undefined4 *)&pUVar6->field_0x1c;
    (this->DebugFontMaterialName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar6->field_0x18
    ;
    (this->DebugFontMaterialName).Number = uVar12;
  }
  pUVar6 = (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
  if (pUVar6 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable(pUVar6), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    param_6 = (FFontOutlineSettings *)0x0;
    local_res8 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_6,(FObjectPtr)&local_res8);
    (this->OutlineMaterialWeakPtr).WeakPtr = (FWeakObjectPtr)param_6;
    pUVar6 = (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
    uVar12 = *(undefined4 *)&pUVar6->field_0x1c;
    (this->DebugOutlineMaterialName).ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&pUVar6->field_0x18;
    (this->DebugOutlineMaterialName).Number = uVar12;
  }
  auVar3 = (uchar  [8])
           ((longlong)(this->GlyphFontFaces).ArrayMax * 0x10 +
           ((longlong)(this->GlyphsToRender).ArrayMax * 7 +
           (longlong)(this->SourceIndicesToGlyphData).GlyphDataArray.ArrayMax) * 0x18);
  if (auVar3 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_SlateShapedGlyphSequenceMemory;
    if (StatPtr_STAT_SlateShapedGlyphSequenceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory>)0x0) {
      pFVar20 = ::FName::FName(&local_90,"STAT_SlateShapedGlyphSequenceMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateShapedGlyphSequenceMemory,
                          *pFVar20,L"Shaped Glyph Sequence Memory","STATGROUP_SlateMemory",
                          "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar8 = *(FName *)FVar21;
    local_res10 = FVar8;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_88.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_a0[0] = FVar8;
      local_88.StatData.Pad = auVar3;
      local_88.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_88);
      FStatsTrace::Add(local_a0,(long64)auVar3);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  DestructItems<FShapedGlyphEntry,int>
            (*(FShapedGlyphEntry **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return this;
}

// ~FShapedGlyphSequence @ 142479420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FShapedGlyphSequence::~FShapedGlyphSequence(FShapedGlyphSequence *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])
           ((longlong)(this->GlyphFontFaces).ArrayMax * 0x10 +
           ((longlong)(this->GlyphsToRender).ArrayMax * 7 +
           (longlong)(this->SourceIndicesToGlyphData).GlyphDataArray.ArrayMax) * 0x18);
  if (auVar1 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_SlateShapedGlyphSequenceMemory;
    if (StatPtr_STAT_SlateShapedGlyphSequenceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_SlateShapedGlyphSequenceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_SlateShapedGlyphSequenceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateShapedGlyphSequenceMemory,
                         *pFVar4,L"Shaped Glyph Sequence Memory","STATGROUP_SlateMemory",
                         "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar2 = *(FName *)FVar5;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  DestructItems<FShapedGlyphSequence::FSourceIndexToGlyphData,int>
            ((FSourceIndexToGlyphData *)
             (this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data,
             (this->SourceIndicesToGlyphData).GlyphDataArray.ArrayNum);
  pFVar3 = (this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TWeakPtr<FFreeTypeFace,1>,int>
            ((TWeakPtr<FFreeTypeFace,1> *)(this->GlyphFontFaces).AllocatorInstance.Data,
             (this->GlyphFontFaces).ArrayNum);
  pFVar3 = (this->GlyphFontFaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FShapedGlyphEntry,int>
            ((FShapedGlyphEntry *)(this->GlyphsToRender).AllocatorInstance.Data,
             (this->GlyphsToRender).ArrayNum);
  pFVar3 = (this->GlyphsToRender).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 14247aea0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
`FShapedGlyphSequence::GetSubSequence'::__l2::<lambda_1>::operator()
          (void *this,FShapedGlyphEntry *param_1,int param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  
  pFVar1 = *(ForAnyElementType **)this;
  if (((FShapedGlyphEntry *)pFVar1->Data <= param_1) &&
     (param_1 < (FShapedGlyphEntry *)pFVar1->Data + *(int *)((longlong)&pFVar1[1].Data + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar1[1].Data;
  piVar2 = (int *)((longlong)&pFVar1[1].Data + 4);
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,pFVar1,piVar2);
  }
  *(int *)&pFVar1[1].Data = iVar7 + 1;
  FShapedGlyphEntry::FShapedGlyphEntry
            ((FShapedGlyphEntry *)(pFVar1->Data + (longlong)iVar7 * 0xa8),param_1);
  piVar2 = *(int **)((longlong)this + 8);
  iVar7 = param_1->SourceIndex;
  if (*piVar2 < param_1->SourceIndex) {
    iVar7 = *piVar2;
  }
  *piVar2 = iVar7;
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar8 = (uint)param_1->NumCharactersInGlyph;
  if ((int)(uint)param_1->NumCharactersInGlyph < *(int *)(lVar3 + 4)) {
    uVar8 = *(uint *)(lVar3 + 4);
  }
  *(uint *)(lVar3 + 4) = uVar8;
  return true;
}

// AddReferencedObjects @ 14247f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShapedGlyphSequence::AddReferencedObjects(FShapedGlyphSequence *this,FReferenceCollector *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FString local_18;
  
  if (GSlateCheckUObjectShapedGlyphSequence) {
    if (this->DebugFontMaterialName != (FName)0x0) {
      pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable(&(this->FontMaterialWeakPtr).WeakPtr);
      pUVar1 = (this->FontMaterial).field0_0x0.DebugPtr;
      if (pUVar1 == (UObject *)0x0) {
        bVar3 = pUVar2 == (UObject *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar2;
      }
      if (!bVar3) {
        ::FName::ToString(&this->DebugFontMaterialName,&local_18);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    if (this->DebugOutlineMaterialName != (FName)0x0) {
      pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable(&(this->OutlineMaterialWeakPtr).WeakPtr);
      pUVar1 = (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
      if (pUVar1 == (UObject *)0x0) {
        bVar3 = pUVar2 == (UObject *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar2;
      }
      if (!bVar3) {
        ::FName::ToString(&this->DebugOutlineMaterialName,&local_18);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->FontMaterial,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014247fa53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&(this->OutlineSettings).OutlineMaterial,0,0);
  return;
}

// EnumerateLogicalGlyphsInSourceRange @ 1424865f0

EEnumerateGlyphsResult __thiscall
FShapedGlyphSequence::EnumerateLogicalGlyphsInSourceRange
          (FShapedGlyphSequence *this,int param_1,int param_2,
          TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *param_3)

{
  FSourceIndexToGlyphData *this_00;
  code *pcVar1;
  bool bVar2;
  EEnumerateGlyphsResult EVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint local_res10 [2];
  int local_res18;
  TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *local_res20;
  
  if (param_1 == param_2) {
    return EnumerationComplete;
  }
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_1 < param_2) {
    do {
      iVar6 = param_1 - (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
      if ((iVar6 < 0) || ((this->SourceIndicesToGlyphData).GlyphDataArray.ArrayNum <= iVar6)) {
        return EnumerationFailed;
      }
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      this_00 = (FSourceIndexToGlyphData *)
                ((this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data +
                (longlong)iVar6 * 0x18);
      if (this_00 == (FSourceIndexToGlyphData *)0x0) {
        return EnumerationFailed;
      }
      uVar8 = (ulonglong)this_00->GlyphIndex;
      if (this_00->GlyphIndex == -1) {
        return EnumerationFailed;
      }
      iVar6 = FSourceIndexToGlyphData::GetHighestGlyphIndex(this_00);
      if ((longlong)uVar8 <= (longlong)iVar6) {
        lVar9 = uVar8 * 0xa8;
        uVar10 = uVar8;
        do {
          uVar7 = (uint)uVar8;
          uVar5 = 0;
          if ((int)uVar7 < (this->GlyphsToRender).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          pFVar11 = (this->GlyphsToRender).AllocatorInstance.Data + lVar9;
          local_res10[0] = uVar7;
          cVar4 = (**(code **)local_res20)
                            (*(undefined8 *)&local_res20->field_0x8,pFVar11,local_res10);
          if (cVar4 == '\0') {
            return EnumerationAborted;
          }
          uVar8 = (ulonglong)(uVar7 + 1);
          param_1 = param_1 + (uint)(byte)pFVar11[0x21];
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0xa8;
        } while ((longlong)uVar10 <= (longlong)iVar6);
      }
      param_2 = local_res18;
    } while (param_1 < local_res18);
  }
  EVar3 = EnumerationFailed;
  if (param_1 == param_2) {
    EVar3 = EnumerationComplete;
  }
  return EVar3;
}

// EnumerateVisualGlyphsInSourceRange @ 1424867c0

EEnumerateGlyphsResult __thiscall
FShapedGlyphSequence::EnumerateVisualGlyphsInSourceRange
          (FShapedGlyphSequence *this,int param_1,int param_2,
          TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EEnumerateGlyphsResult EVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FSourceIndexToGlyphData *pFVar8;
  FSourceIndexToGlyphData *this_00;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  uint local_res10 [4];
  TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *local_res20;
  
  if (param_1 == param_2) {
    return EnumerationComplete;
  }
  local_res20 = param_3;
  pFVar8 = FSourceIndicesToGlyphData::GetGlyphData(&this->SourceIndicesToGlyphData,param_1);
  this_00 = FSourceIndicesToGlyphData::GetGlyphData(&this->SourceIndicesToGlyphData,param_2 + -1);
  if (pFVar8 != (FSourceIndexToGlyphData *)0x0) {
    uVar11 = pFVar8->GlyphIndex;
    if ((uVar11 != 0xffffffff) &&
       ((this_00 == (FSourceIndexToGlyphData *)0x0 || (this_00->GlyphIndex == -1)))) {
      uVar6 = 0;
      if ((int)uVar11 < (this->GlyphsToRender).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      pFVar10 = (this->GlyphsToRender).AllocatorInstance.Data;
      if ((uint)(byte)pFVar10[(longlong)(int)uVar11 * 0xa8 + 0x21] +
          *(int *)(pFVar10 + (longlong)(int)uVar11 * 0xa8 + 0x14) == param_2) {
        this_00 = pFVar8;
      }
    }
    uVar11 = pFVar8->GlyphIndex;
    if (((uVar11 != 0xffffffff) && (this_00 != (FSourceIndexToGlyphData *)0x0)) &&
       (uVar6 = this_00->GlyphIndex, uVar6 != 0xffffffff)) {
      if ((int)uVar6 < (int)uVar11) {
        this_00 = pFVar8;
        uVar11 = uVar6;
      }
      iVar7 = FSourceIndexToGlyphData::GetHighestGlyphIndex(this_00);
      if ((iVar7 < (int)uVar11) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartGlyphIndex <= EndGlyphIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCache.cpp"
                             ,0x290,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      iVar9 = (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
      bVar13 = iVar9 == param_1;
      bVar2 = iVar9 + (this->SourceIndicesToGlyphData).SourceTextRange.TextLen == param_2;
      if ((int)uVar11 <= iVar7) {
        lVar12 = (longlong)(int)uVar11 * 0xa8;
        do {
          uVar6 = 0;
          if ((int)uVar11 < (this->GlyphsToRender).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          pFVar10 = (this->GlyphsToRender).AllocatorInstance.Data + lVar12;
          if (bVar13) {
            if (!bVar2) {
              iVar9 = (uint)(byte)pFVar10[0x21] + *(int *)(pFVar10 + 0x14);
LAB_1424869f0:
              if (iVar9 == param_2) {
                bVar2 = true;
              }
            }
          }
          else {
            iVar9 = (uint)(byte)pFVar10[0x21] + *(int *)(pFVar10 + 0x14);
            if (*(int *)(pFVar10 + 0x14) == param_1) {
              bVar13 = true;
            }
            if (!bVar2) goto LAB_1424869f0;
          }
          local_res10[0] = uVar11;
          cVar5 = (**(code **)local_res20)
                            (*(undefined8 *)&local_res20->field_0x8,pFVar10,local_res10);
          if (cVar5 == '\0') {
            return EnumerationAborted;
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0xa8;
        } while ((int)uVar11 <= iVar7);
      }
      if ((bVar13) && (bVar2)) {
        return EnumerationComplete;
      }
      return EnumerationFailed;
    }
  }
  return EnumerationFailed;
}

// GetAllocatedSize @ 14248ac30

ulong64 __thiscall FShapedGlyphSequence::GetAllocatedSize(FShapedGlyphSequence *this)

{
  return (longlong)(this->GlyphFontFaces).ArrayMax * 0x10 +
         ((longlong)(this->GlyphsToRender).ArrayMax * 7 +
         (longlong)(this->SourceIndicesToGlyphData).GlyphDataArray.ArrayMax) * 0x18;
}

// GetFontSkew @ 142490c20

float __thiscall FShapedGlyphSequence::GetFontSkew(FShapedGlyphSequence *this)

{
  return this->CachedFontSkew;
}

// GetGlyphAtOffset @ 142490c30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TOptional<FShapedGlyphSequence::FGlyphOffsetResult> * __thiscall
FShapedGlyphSequence::GetGlyphAtOffset
          (FShapedGlyphSequence *this,
          TOptional<FShapedGlyphSequence::FGlyphOffsetResult> *__return_storage_ptr__,
          FSlateFontCache *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6)

{
  int iVar1;
  EEnumerateGlyphsResult EVar2;
  char cVar3;
  FShapedGlyphEntry *local_res8;
  longlong local_res18 [2];
  char in_stack_00000041;
  code *local_68;
  FShapedGlyphSequence **local_60;
  FShapedGlyphSequence *local_58;
  FSlateFontCache *local_50;
  int *local_48;
  int *local_40;
  FShapedGlyphEntry **local_38;
  longlong *local_30;
  
  local_res8 = (FShapedGlyphEntry *)0x0;
  local_res18[0] = 0;
  if ((param_6) && (0 < param_2)) {
    GetKerning(this,(int)&param_6);
    cVar3 = '\0';
    if (in_stack_00000041 != '\0') {
      cVar3 = param_6;
    }
    param_5 = param_5 + cVar3;
  }
  local_48 = &param_4;
  local_40 = &param_5;
  local_38 = &local_res8;
  local_30 = local_res18;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FShapedGlyphSequence::GetGlyphAtOffset'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
             ::Call;
  local_58 = this;
  local_50 = param_1;
  EVar2 = EnumerateVisualGlyphsInSourceRange
                    (this,param_2,param_3,
                     (TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *)&local_68);
  if (EVar2 != EnumerationFailed) {
    if (local_res8 != (FShapedGlyphEntry *)0x0) {
      iVar1 = local_res8->SourceIndex;
      (__return_storage_ptr__->TypedValue).Glyph = local_res8;
      (__return_storage_ptr__->TypedValue).GlyphOffset = param_5;
      (__return_storage_ptr__->TypedValue).CharacterIndex = iVar1;
      __return_storage_ptr__->bIsSet = true;
      return __return_storage_ptr__;
    }
    if ((local_res18[0] == 0) || (*(char *)(local_res18[0] + 0x23) == '\0')) {
      iVar1 = (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
      if ((iVar1 <= param_3) &&
         (param_3 <= iVar1 + (this->SourceIndicesToGlyphData).SourceTextRange.TextLen)) {
        (__return_storage_ptr__->TypedValue).Glyph = (FShapedGlyphEntry *)0x0;
        (__return_storage_ptr__->TypedValue).GlyphOffset = 0;
        (__return_storage_ptr__->TypedValue).CharacterIndex = param_3;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
    else {
      iVar1 = (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
      if ((iVar1 <= param_2) &&
         (param_2 <= iVar1 + (this->SourceIndicesToGlyphData).SourceTextRange.TextLen)) {
        (__return_storage_ptr__->TypedValue).Glyph = (FShapedGlyphEntry *)0x0;
        (__return_storage_ptr__->TypedValue).GlyphOffset = 0;
        (__return_storage_ptr__->TypedValue).CharacterIndex = param_2;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetGlyphAtOffset @ 142490d70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FGlyphOffsetResult * __thiscall
FShapedGlyphSequence::GetGlyphAtOffset
          (FShapedGlyphSequence *this,FGlyphOffsetResult *__return_storage_ptr__,
          FSlateFontCache *param_1,int param_2,int param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FGlyphOffsetResult *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  int local_res8 [2];
  FShapedGlyphEntry *local_38 [2];
  
  iVar5 = (this->GlyphsToRender).ArrayNum;
  uVar7 = 0;
  if (iVar5 == 0) {
    __return_storage_ptr__->Glyph = (FShapedGlyphEntry *)0x0;
    __return_storage_ptr__->GlyphOffset = 0;
    __return_storage_ptr__->CharacterIndex = 0;
    return __return_storage_ptr__;
  }
  local_res8[0] = param_3;
  local_38[0] = (FShapedGlyphEntry *)0x0;
  if (0 < iVar5) {
    do {
      uVar8 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar8 < (this->GlyphsToRender).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FGlyphOffsetResult *)(*pcVar2)();
        return pFVar6;
      }
      bVar3 = HasFoundGlyphAtOffset
                        (this,param_1,param_2,
                         (FShapedGlyphEntry *)
                         ((this->GlyphsToRender).AllocatorInstance.Data + uVar7 * 0xa8),uVar8,
                         local_res8,local_38);
    } while ((!bVar3) && (uVar7 = (ulonglong)(uVar8 + 1), (int)(uVar8 + 1) < iVar5));
    if (local_38[0] != (FShapedGlyphEntry *)0x0) {
      __return_storage_ptr__->GlyphOffset = local_res8[0];
      iVar5 = local_38[0]->SourceIndex;
      __return_storage_ptr__->Glyph = local_38[0];
      goto LAB_142490ef5;
    }
  }
  iVar5 = (this->GlyphsToRender).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar5) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FGlyphOffsetResult *)(*pcVar2)();
    return pFVar6;
  }
  FVar1 = (this->GlyphsToRender).AllocatorInstance.Data
          [(longlong)(this->GlyphsToRender).ArrayNum * 0xa8 + -0x85];
  __return_storage_ptr__->Glyph = (FShapedGlyphEntry *)0x0;
  __return_storage_ptr__->GlyphOffset = 0;
  if (FVar1 == (FScriptContainerElement)0x0) {
    iVar5 = (this->SourceIndicesToGlyphData).SourceTextRange.TextLen +
            (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
  }
  else {
    iVar5 = (this->SourceIndicesToGlyphData).SourceTextRange.TextStart;
  }
LAB_142490ef5:
  __return_storage_ptr__->CharacterIndex = iVar5;
  return __return_storage_ptr__;
}

// GetKerning @ 1424914a0

TOptional<signed_char> __thiscall
FShapedGlyphSequence::GetKerning(FShapedGlyphSequence *this,int param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<signed_char> TVar5;
  uint uVar6;
  FSourceIndexToGlyphData *pFVar7;
  undefined4 in_register_00000014;
  FScriptContainerElement *pFVar8;
  int in_R8D;
  
  pFVar8 = (FScriptContainerElement *)CONCAT44(in_register_00000014,param_1);
  pFVar7 = FSourceIndicesToGlyphData::GetGlyphData(&this->SourceIndicesToGlyphData,in_R8D);
  if (pFVar7 != (FSourceIndexToGlyphData *)0x0) {
    uVar1 = pFVar7->GlyphIndex;
    if (uVar1 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar1 < (this->GlyphsToRender).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar5 = (TOptional<signed_char>)(*pcVar3)();
          return TVar5;
        }
      }
      pFVar2 = (this->GlyphsToRender).AllocatorInstance.Data;
      pFVar8[1] = (FScriptContainerElement)0x1;
      *pFVar8 = pFVar2[(longlong)(int)uVar1 * 0xa8 + 0x20];
      return SUB42(param_1,0);
    }
  }
  pFVar8[1] = (FScriptContainerElement)0x0;
  return SUB42(param_1,0);
}

// GetMeasuredWidth @ 142492750

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TOptional<int> __thiscall
FShapedGlyphSequence::GetMeasuredWidth
          (FShapedGlyphSequence *this,int param_1,int param_2,bool param_3)

{
  EEnumerateGlyphsResult EVar1;
  undefined4 in_register_00000014;
  TOptional<int> TVar2;
  char cVar3;
  undefined7 in_register_00000089;
  char in_stack_00000028;
  char in_stack_00000029;
  int local_28 [2];
  int *local_20;
  code *local_18;
  undefined4 **local_10;
  
  TVar2._4_4_ = in_register_00000014;
  TVar2.TypedValue = param_1;
  local_28[0] = 0;
  if ((in_stack_00000028 != '\0') && (0 < param_2)) {
    GetKerning(this,(int)&stack0x00000028);
    cVar3 = '\0';
    if (in_stack_00000029 != '\0') {
      cVar3 = in_stack_00000028;
    }
    local_28[0] = local_28[0] + cVar3;
  }
  local_20 = local_28;
  local_10 = &local_20;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FShapedGlyphSequence::GetMeasuredWidth'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
             ::Call;
  EVar1 = EnumerateLogicalGlyphsInSourceRange
                    (this,param_2,(int)CONCAT71(in_register_00000089,param_3),
                     (TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *)&local_18);
  *(undefined1 *)((longlong)TVar2 + 4) = 0;
  if (EVar1 == EnumerationComplete) {
    *(int *)TVar2 = local_28[0];
    *(undefined1 *)((longlong)TVar2 + 4) = 1;
  }
  return TVar2;
}

// GetMeasuredWidth @ 142492820

int __thiscall FShapedGlyphSequence::GetMeasuredWidth(FShapedGlyphSequence *this)

{
  return this->SequenceWidth;
}

// GetSubSequence @ 142495e50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FShapedGlyphSequence_const_,1> * __thiscall
FShapedGlyphSequence::GetSubSequence
          (FShapedGlyphSequence *this,
          TSharedPtr<FShapedGlyphSequence_const_,1> *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  EEnumerateGlyphsResult EVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FShapedGlyphSequence_const_,1> *pTVar5;
  FSourceTextRange local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> local_50;
  ForAnyElementType *local_40;
  FSourceTextRange *local_38;
  code *local_30;
  ForAnyElementType **local_28;
  
  local_68.TextLen = param_2 - param_1;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  if (local_68.TextLen < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_68.TextLen);
  }
  if (0 < local_68.TextLen) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,local_68.TextLen,&local_60,0,(int *)((longlong)&local_58 + 4));
  }
  local_40 = &local_60;
  local_38 = &local_68;
  local_28 = &local_40;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<`FShapedGlyphSequence::GetSubSequence'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
             ::Call;
  local_68.TextStart = param_1;
  EVar2 = EnumerateVisualGlyphsInSourceRange
                    (this,param_1,param_2,
                     (TFunctionRef<bool___cdecl(FShapedGlyphEntry_const_&,int)> *)&local_30);
  if (EVar2 == EnumerationComplete) {
    pTVar4 = ::operator_new(0xb8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (FShapedGlyphSequence *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFShapedGlyphSequence___00_SharedPointerInternals__6B_
      ;
      local_50.AllocatorInstance.Data = local_60.Data;
      local_50.ArrayNum = (int)local_58;
      local_50.ArrayMax = local_58._4_4_;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      FShapedGlyphSequence
                ((FShapedGlyphSequence *)(pTVar4 + 1),&local_50,this->TextBaseline,
                 this->MaxTextHeight,(this->FontMaterial).field0_0x0.DebugPtr,
                 this->bMaterialIsStencil,&this->OutlineSettings,&local_68);
      if ((FShapedGlyphSequence *)(pTVar4 + 1) == (FShapedGlyphSequence *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FShapedGlyphSequence_const_,1> *)(*pcVar1)();
          return pTVar5;
        }
      }
      __return_storage_ptr__->Object = (FShapedGlyphSequence *)(pTVar4 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    __return_storage_ptr__->Object = (FShapedGlyphSequence *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  DestructItems<FShapedGlyphEntry,int>((FShapedGlyphEntry *)local_60.Data,(int)local_58);
  if ((FShapedGlyphEntry *)local_60.Data != (FShapedGlyphEntry *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return __return_storage_ptr__;
}

// HasFoundGlyphAtOffset @ 142497640

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FShapedGlyphSequence::HasFoundGlyphAtOffset
          (FShapedGlyphSequence *this,FSlateFontCache *param_1,int param_2,
          FShapedGlyphEntry *param_3,int param_4,int *param_5,FShapedGlyphEntry **param_6)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FShapedGlyphEntry *pFVar10;
  int iVar11;
  longlong lVar12;
  FShapedGlyphFontAtlasData local_48;
  
  if (param_3->NumCharactersInGlyph == '\0') {
    return false;
  }
  iVar9 = 0;
  iVar11 = 0;
  lVar12 = (longlong)param_4 * 0xa8;
  uVar3 = param_4;
  do {
    uVar8 = uVar3 + 1;
    uVar7 = 0;
    if ((int)uVar3 < (this->GlyphsToRender).ArrayNum) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar10 = (FShapedGlyphEntry *)((this->GlyphsToRender).AllocatorInstance.Data + lVar12);
    sVar6 = 0;
    if (pFVar10->bIsVisible != false) {
      FSlateFontCache::GetShapedGlyphFontAtlasData
                (param_1,&local_48,pFVar10,&FFontOutlineSettings::NoOutline);
      sVar6 = local_48.HorizontalOffset;
    }
    iVar11 = iVar11 + pFVar10->XAdvance;
    iVar9 = iVar9 + (int)sVar6 + (int)pFVar10->XAdvance;
    if (((int)uVar8 < 0) || ((this->GlyphsToRender).ArrayNum <= (int)uVar8)) break;
    if (((int)uVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    lVar1 = lVar12 + 0xbc;
    lVar12 = lVar12 + 0xa8;
    uVar3 = uVar8;
  } while (pFVar10->SourceIndex == *(int *)((this->GlyphsToRender).AllocatorInstance.Data + lVar1));
  if (param_3->NumGraphemeClustersInGlyph < 2) {
    iVar9 = iVar9 / 2;
  }
  if (param_2 < *param_5 + iVar9) {
    if (((param_3->TextDirection != LeftToRight) && (iVar9 = param_4 + -1, -1 < iVar9)) &&
       (iVar9 < (this->GlyphsToRender).ArrayNum)) {
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      param_3 = (FShapedGlyphEntry *)
                ((this->GlyphsToRender).AllocatorInstance.Data + (longlong)iVar9 * 0xa8);
    }
    *param_6 = param_3;
    bVar4 = true;
  }
  else {
    *param_5 = *param_5 + iVar11;
    bVar4 = false;
  }
  return bVar4;
}

// IsDirty @ 14249aa80

bool __thiscall FShapedGlyphSequence::IsDirty(FShapedGlyphSequence *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GlyphFontFaces).ArrayNum;
  pFVar2 = (this->GlyphFontFaces).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->GlyphFontFaces).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<FFreeTypeFace,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((*(longlong *)pFVar2 == 0) || (*(longlong *)(pFVar2 + 8) == 0)) ||
       (*(int *)(*(longlong *)(pFVar2 + 8) + 8) < 1)) {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

