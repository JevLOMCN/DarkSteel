// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// ~FSdfGeneratorTask @ 1424792c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SdfUtils::FSdfGeneratorTask::~FSdfGeneratorTask(FSdfGeneratorTask *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar3 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  std::vector<SlateMsdfgen::msdfgen::Contour,std::allocator<SlateMsdfgen::msdfgen::Contour>_>::
  ~vector<SlateMsdfgen::msdfgen::Contour,std::allocator<SlateMsdfgen::msdfgen::Contour>_>
            (&(this->MsdfgenShape).contours);
  pFVar3 = (this->OutputPixels).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142479316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

// DoOutlineDecomposition @ 142485850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall SdfUtils::FSdfGeneratorTask::DoOutlineDecomposition(FSdfGeneratorTask *this)

{
  FGlyphSdfMapping *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  ESdfType EVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  Shape *pSVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  BitmapRef<float,4> local_78;
  BitmapRef<float,1> local_68;
  BitmapRef<float,1> local_58;
  MSDFGeneratorConfig local_48;
  
  pFVar1 = &this->GlyphSdfMapping;
  iVar14 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 0xc) -
           *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 4);
  iVar12 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 8) -
           *(int *)&(this->GlyphSdfMapping).SdfBounds.field0_0x0;
  EVar3 = (this->Descriptor).SdfType;
  if ((EVar3 == Simple) || (EVar3 == Perpendicular)) {
    iVar13 = 1;
  }
  else if (EVar3 == MultichannelAndSimple) {
    iVar13 = 4;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x15d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = 0;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar13 = iVar13 * iVar14 * iVar12;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_88,iVar13,Default);
  this_00 = &this->OutputPixels;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar13,Default);
  EVar3 = (this->Descriptor).SdfType;
  if (EVar3 == Simple) {
    local_58.pixels = (float *)local_88.AllocatorInstance.Data;
    local_58.width = iVar12;
    local_58.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::TrueDistanceSelector>_>
              (&local_58,&this->MsdfgenShape,&pFVar1->MsdfgenTransformation);
  }
  else if (EVar3 == Perpendicular) {
    local_68.pixels = (float *)local_88.AllocatorInstance.Data;
    local_68.width = iVar12;
    local_68.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::PerpendicularDistanceSelector>_>
              (&local_68,&this->MsdfgenShape,&pFVar1->MsdfgenTransformation);
  }
  else if (EVar3 == MultichannelAndSimple) {
    pSVar11 = &this->MsdfgenShape;
    SlateMsdfgen::msdfgen::edgeColoringInkTrap(pSVar11,__real_4008000000000000,0);
    local_78.pixels = (float *)local_88.AllocatorInstance.Data;
    local_48.errorCorrection.buffer = (uchar *)(this_00->AllocatorInstance).Data;
    local_48._padding_._0_1_ = 1;
    local_48.errorCorrection.mode = EDGE_PRIORITY;
    local_48.errorCorrection.distanceCheckMode = CHECK_DISTANCE_AT_EDGE;
    local_48.errorCorrection.minDeviationRatio = ___xmm_3ff1c71c71c71c723ff1c71c71c71c72;
    local_48.errorCorrection.minImproveRatio = _UNK_1508ffb08;
    local_78.width = iVar12;
    local_78.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::MultiAndTrueDistanceSelector>_>
              (&local_78,pSVar11,&pFVar1->MsdfgenTransformation);
    SlateMsdfgen::msdfgen::msdfErrorCorrectionInner<4>
              (&local_78,pSVar11,&pFVar1->MsdfgenTransformation,&local_48);
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x1d1,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar7 = __real_437f8000;
  fVar6 = __real_437f0000;
  fVar5 = __real_3f800000;
  pFVar9 = (this_00->AllocatorInstance).Data;
  pFVar2 = pFVar9 + iVar13;
  if (pFVar9 < pFVar2) {
    FVar10.Data = local_88.AllocatorInstance.Data;
    if ((ulonglong)(longlong)iVar13 < 4) goto LAB_142485b30;
    do {
      fVar15 = *(float *)FVar10.Data;
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      *pFVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 4);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      pFVar9[1] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 8);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      pFVar9[2] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 0xc);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      FVar10.Data = FVar10.Data + 0x10;
      pFVar9[3] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 < pFVar2 + -3);
    for (; pFVar9 < pFVar2; pFVar9 = pFVar9 + 1) {
LAB_142485b30:
      fVar15 = *(float *)FVar10.Data;
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      FVar10.Data = FVar10.Data + 4;
      *pFVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// DoWork @ 142485c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall SdfUtils::FSdfGeneratorTask::DoWork(FSdfGeneratorTask *this)

{
  FGlyphSdfMapping *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  ESdfType EVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  Shape *pSVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  TArray<float,TSizedDefaultAllocator<32>_> TStack_88;
  BitmapRef<float,4> BStack_78;
  BitmapRef<float,1> BStack_68;
  BitmapRef<float,1> BStack_58;
  MSDFGeneratorConfig MStack_48;
  
  pFVar1 = &this->GlyphSdfMapping;
  iVar14 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 0xc) -
           *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 4);
  iVar12 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 8) -
           *(int *)&(this->GlyphSdfMapping).SdfBounds.field0_0x0;
  EVar3 = (this->Descriptor).SdfType;
  if ((EVar3 == Simple) || (EVar3 == Perpendicular)) {
    iVar13 = 1;
  }
  else if (EVar3 == MultichannelAndSimple) {
    iVar13 = 4;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x15d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = 0;
  }
  TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_88.ArrayNum = 0;
  TStack_88.ArrayMax = 0;
  iVar13 = iVar13 * iVar14 * iVar12;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&TStack_88,iVar13,Default);
  this_00 = &this->OutputPixels;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar13,Default);
  EVar3 = (this->Descriptor).SdfType;
  if (EVar3 == Simple) {
    BStack_58.pixels = (float *)TStack_88.AllocatorInstance.Data;
    BStack_58.width = iVar12;
    BStack_58.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::TrueDistanceSelector>_>
              (&BStack_58,&this->MsdfgenShape,&pFVar1->MsdfgenTransformation);
  }
  else if (EVar3 == Perpendicular) {
    BStack_68.pixels = (float *)TStack_88.AllocatorInstance.Data;
    BStack_68.width = iVar12;
    BStack_68.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::PerpendicularDistanceSelector>_>
              (&BStack_68,&this->MsdfgenShape,&pFVar1->MsdfgenTransformation);
  }
  else if (EVar3 == MultichannelAndSimple) {
    pSVar11 = &this->MsdfgenShape;
    SlateMsdfgen::msdfgen::edgeColoringInkTrap(pSVar11,__real_4008000000000000,0);
    BStack_78.pixels = (float *)TStack_88.AllocatorInstance.Data;
    MStack_48.errorCorrection.buffer = (uchar *)(this_00->AllocatorInstance).Data;
    MStack_48._padding_._0_1_ = 1;
    MStack_48.errorCorrection.mode = EDGE_PRIORITY;
    MStack_48.errorCorrection.distanceCheckMode = CHECK_DISTANCE_AT_EDGE;
    MStack_48.errorCorrection.minDeviationRatio = ___xmm_3ff1c71c71c71c723ff1c71c71c71c72;
    MStack_48.errorCorrection.minImproveRatio = _UNK_1508ffb08;
    BStack_78.width = iVar12;
    BStack_78.height = iVar14;
    SlateMsdfgen::msdfgen::
    generateDistanceField<SlateMsdfgen::msdfgen::OverlappingContourCombiner<SlateMsdfgen::msdfgen::MultiAndTrueDistanceSelector>_>
              (&BStack_78,pSVar11,&pFVar1->MsdfgenTransformation);
    SlateMsdfgen::msdfgen::msdfErrorCorrectionInner<4>
              (&BStack_78,pSVar11,&pFVar1->MsdfgenTransformation,&MStack_48);
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x1d1,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar7 = __real_437f8000;
  fVar6 = __real_437f0000;
  fVar5 = __real_3f800000;
  pFVar9 = (this_00->AllocatorInstance).Data;
  pFVar2 = pFVar9 + iVar13;
  if (pFVar9 < pFVar2) {
    FVar10.Data = TStack_88.AllocatorInstance.Data;
    if ((ulonglong)(longlong)iVar13 < 4) goto LAB_142485b30;
    do {
      fVar15 = *(float *)FVar10.Data;
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      *pFVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 4);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      pFVar9[1] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 8);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      pFVar9[2] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      fVar15 = *(float *)(FVar10.Data + 0xc);
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      FVar10.Data = FVar10.Data + 0x10;
      pFVar9[3] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
      pFVar9 = pFVar9 + 4;
    } while (pFVar9 < pFVar2 + -3);
    for (; pFVar9 < pFVar2; pFVar9 = pFVar9 + 1) {
LAB_142485b30:
      fVar15 = *(float *)FVar10.Data;
      if ((fVar15 < 0.0) || (fVar5 < fVar15)) {
        fVar15 = (float)(0.0 < fVar15);
      }
      FVar10.Data = FVar10.Data + 4;
      *pFVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar15 * fVar6);
    }
  }
  if (TStack_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_88.AllocatorInstance.Data);
  }
  return;
}

// End @ 1424863a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SdfUtils::FSdfGeneratorTask::End
          (FSdfGeneratorTask *this,
          TFunctionRef<void___cdecl(FSlateSdfGenerator::FRequestDescriptor,TArray<unsigned_char,TSizedDefaultAllocator<32>_>)>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *pvVar4;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *this_00;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  FFreeTypeFace *local_68;
  TReferenceControllerBase<1> *local_60;
  uint local_58;
  ESdfType local_54;
  float local_50;
  float local_4c;
  int local_48;
  
  local_78 = (this->OutputPixels).AllocatorInstance.Data;
  (this->OutputPixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70 = (this->OutputPixels).ArrayNum;
  local_6c = (this->OutputPixels).ArrayMax;
  (this->OutputPixels).ArrayNum = 0;
  (this->OutputPixels).ArrayMax = 0;
  local_68 = (this->Descriptor).FontFace.Object;
  local_60 = (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->WeakReferenceCount = (atomic<int>)((int)local_60->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->Descriptor).GlyphIndex;
  local_50 = (this->Descriptor).EmOuterSpread;
  local_54 = (this->Descriptor).SdfType;
  local_48 = (this->Descriptor).Ppem;
  local_4c = (this->Descriptor).EmInnerSpread;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_68,&local_78);
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_60->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_60->_padding_ + 8))(local_60,1);
    }
  }
  if (local_78 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78);
  }
  if (this != (FSdfGeneratorTask *)&stack0xffffffffffffffc0) {
    pTVar3 = (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController;
    (this->Descriptor).FontFace.Object = (FFreeTypeFace *)0x0;
    (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  (this->Descriptor).EmInnerSpread = 0.0;
  (this->Descriptor).GlyphIndex = 0;
  (this->Descriptor).Ppem = 0;
  (this->Descriptor).SdfType = Simple;
  (this->Descriptor).EmOuterSpread = 0.0;
  pvVar4 = &((this->MsdfgenShape).contours._Mypair._Myval2._Mylast)->edges;
  this_00 = &((this->MsdfgenShape).contours._Mypair._Myval2._Myfirst)->edges;
  if (this_00 != pvVar4) {
    do {
      std::
      vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>::
      _Tidy(this_00);
      this_00 = this_00 + 1;
    } while (this_00 != pvVar4);
    (this->MsdfgenShape).contours._Mypair._Myval2._Mylast =
         (this->MsdfgenShape).contours._Mypair._Myval2._Myfirst;
  }
  return;
}

// MakePlaceholder @ 14249c270

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
SdfUtils::FSdfGeneratorTask::MakePlaceholder
          (FSdfGeneratorTask *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ESdfType EVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FScriptContainerElement FVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  int iVar16;
  float fVar17;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  BitmapRef<float,1> local_28;
  
  EVar3 = (this->Descriptor).SdfType;
  if ((EVar3 == Simple) || (EVar3 == Perpendicular)) {
    iVar13 = 1;
  }
  else if (EVar3 == MultichannelAndSimple) {
    iVar13 = 4;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x15d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = 0;
  }
  iVar12 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 0xc) -
           *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 4);
  iVar14 = *(int *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 8) -
           *(int *)&(this->GlyphSdfMapping).SdfBounds.field0_0x0;
  iVar11 = iVar12 * iVar14;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar16 = iVar11 * iVar13;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar11,Default);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar16,Default);
  local_28.pixels = (float *)local_38.AllocatorInstance.Data;
  local_28.width = iVar14;
  local_28.height = iVar12;
  SlateMsdfgen::msdfgen::approximateSDF
            (&local_28,&this->MsdfgenShape,&(this->GlyphSdfMapping).MsdfgenTransformation);
  fVar7 = __real_437f8000;
  fVar6 = __real_437f0000;
  fVar5 = __real_3f800000;
  if (iVar13 == 1) {
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar10 + iVar16;
    if (pFVar10 < pFVar2) {
      FVar15.Data = local_38.AllocatorInstance.Data;
      if (3 < (ulonglong)(longlong)iVar16) {
        do {
          fVar17 = *(float *)FVar15.Data;
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          *pFVar10 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          fVar17 = *(float *)(FVar15.Data + 4);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          pFVar10[1] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          fVar17 = *(float *)(FVar15.Data + 8);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          pFVar10[2] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          fVar17 = *(float *)(FVar15.Data + 0xc);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar15.Data = FVar15.Data + 0x10;
          pFVar10[3] = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10 = pFVar10 + 4;
        } while (pFVar10 < pFVar2 + -3);
        if (pFVar2 <= pFVar10) goto LAB_14249c82e;
      }
      do {
        fVar17 = *(float *)FVar15.Data;
        if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
          fVar17 = (float)(0.0 < fVar17);
        }
        FVar15.Data = FVar15.Data + 4;
        *pFVar10 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 < pFVar2);
    }
  }
  else if (iVar13 == 3) {
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar10 + iVar16;
    if (pFVar10 < pFVar2) {
      FVar15.Data = local_38.AllocatorInstance.Data;
      if (0xb < (longlong)iVar16 + 2U) {
        do {
          fVar17 = *(float *)FVar15.Data;
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          *pFVar10 = FVar9;
          pFVar10[1] = FVar9;
          pFVar10[2] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 4);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[3] = FVar9;
          pFVar10[4] = FVar9;
          pFVar10[5] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 8);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[6] = FVar9;
          pFVar10[7] = FVar9;
          pFVar10[8] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 0xc);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar15.Data = FVar15.Data + 0x10;
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[9] = FVar9;
          pFVar10[10] = FVar9;
          pFVar10[0xb] = FVar9;
          pFVar10 = pFVar10 + 0xc;
        } while (pFVar10 < pFVar2 + -9);
        if (pFVar2 <= pFVar10) goto LAB_14249c82e;
      }
      do {
        fVar17 = *(float *)FVar15.Data;
        if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
          fVar17 = (float)(0.0 < fVar17);
        }
        FVar15.Data = FVar15.Data + 4;
        FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
        *pFVar10 = FVar9;
        pFVar10[1] = FVar9;
        pFVar10[2] = FVar9;
        pFVar10 = pFVar10 + 3;
      } while (pFVar10 < pFVar2);
    }
  }
  else if (iVar13 == 4) {
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar2 = pFVar10 + iVar16;
    if (pFVar10 < pFVar2) {
      FVar15.Data = local_38.AllocatorInstance.Data;
      if (0xf < ((longlong)iVar16 + 3U & 0xfffffffffffffffc)) {
        do {
          fVar17 = *(float *)FVar15.Data;
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          *pFVar10 = FVar9;
          pFVar10[1] = FVar9;
          pFVar10[2] = FVar9;
          pFVar10[3] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 4);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[4] = FVar9;
          pFVar10[5] = FVar9;
          pFVar10[6] = FVar9;
          pFVar10[7] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 8);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[8] = FVar9;
          pFVar10[9] = FVar9;
          pFVar10[10] = FVar9;
          pFVar10[0xb] = FVar9;
          fVar17 = *(float *)(FVar15.Data + 0xc);
          if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
            fVar17 = (float)(0.0 < fVar17);
          }
          FVar15.Data = FVar15.Data + 0x10;
          FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
          pFVar10[0xc] = FVar9;
          pFVar10[0xd] = FVar9;
          pFVar10[0xe] = FVar9;
          pFVar10[0xf] = FVar9;
          pFVar10 = pFVar10 + 0x10;
        } while (pFVar10 < pFVar2 + -0xc);
        if (pFVar2 <= pFVar10) goto LAB_14249c82e;
      }
      pFVar10 = pFVar10 + 2;
      do {
        fVar17 = *(float *)FVar15.Data;
        if ((fVar17 < 0.0) || (fVar5 < fVar17)) {
          fVar17 = (float)(0.0 < fVar17);
        }
        FVar15.Data = FVar15.Data + 4;
        FVar9 = (FScriptContainerElement)~(byte)(int)(fVar7 - fVar17 * fVar6);
        pFVar10[-2] = FVar9;
        pFVar10[-1] = FVar9;
        *pFVar10 = FVar9;
        pFVar10[1] = FVar9;
        pFVar1 = pFVar10 + 2;
        pFVar10 = pFVar10 + 4;
      } while (pFVar1 < pFVar2);
    }
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x202,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_14249c82e:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// Prepare @ 1424a10b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ERequestResponse __thiscall
SdfUtils::FSdfGeneratorTask::Prepare
          (FSdfGeneratorTask *this,FRequestDescriptor *param_1,FRequestOutputInfo *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  atomic<int> aVar4;
  int iVar5;
  uint uVar6;
  FFreeTypeFace *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FWeakReferencer<1> *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  atomic<int> aVar11;
  TReferenceControllerBase<1> *pTVar12;
  ERequestResponse EVar13;
  bool bVar14;
  FFreeTypeShapeBuilder local_res10 [8];
  TSharedPtr<FFreeTypeFace,1> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pTVar12 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar12->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1424a10f2;
      }
      LOCK();
      aVar11 = pTVar12->SharedReferenceCount;
      bVar14 = aVar4 == aVar11;
      if (bVar14) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar11 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar11;
    } while (!bVar14);
    pFVar7 = (param_1->FontFace).Object;
    if (pFVar7 != (FFreeTypeFace *)0x0) {
      if (pFVar7->bPendingAsyncLoad != false) {
        EVar13 = BUSY;
        goto LAB_1424a10f7;
      }
      if (pFVar7->FTFace != (FT_FaceRec_ *)0x0) {
        iVar5 = param_1->Ppem;
        fVar2 = param_1->EmInnerSpread;
        fVar3 = param_1->EmOuterSpread;
        uVar6 = param_1->GlyphIndex;
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        local_28.Object = pFVar7;
        local_28.SharedReferenceCount.ReferenceController = pTVar12;
        bVar14 = FFreeTypeShapeBuilder::Build
                           (local_res10,&local_28,uVar6,fVar3,fVar2,iVar5,&this->MsdfgenShape,
                            &this->GlyphSdfMapping);
        if (bVar14) {
          pTVar8 = (param_1->FontFace).WeakReferenceCount.ReferenceController;
          pFVar7 = (param_1->FontFace).Object;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
            UNLOCK();
          }
          local_18 = *(undefined4 *)&(this->Descriptor).FontFace.Object;
          uStack_14 = *(undefined4 *)((longlong)&(this->Descriptor).FontFace.Object + 4);
          pFVar9 = &(this->Descriptor).FontFace.WeakReferenceCount;
          uStack_10 = *(undefined4 *)&pFVar9->ReferenceController;
          uStack_c = *(undefined4 *)
                      ((longlong)&(this->Descriptor).FontFace.WeakReferenceCount.ReferenceController
                      + 4);
          pTVar10 = pFVar9->ReferenceController;
          (this->Descriptor).FontFace.Object = pFVar7;
          (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController = pTVar8;
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar10->WeakReferenceCount;
            aVar4 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
            }
          }
          (this->Descriptor).GlyphIndex = param_1->GlyphIndex;
          (this->Descriptor).SdfType = param_1->SdfType;
          (this->Descriptor).EmOuterSpread = param_1->EmOuterSpread;
          (this->Descriptor).EmInnerSpread = param_1->EmInnerSpread;
          (this->Descriptor).Ppem = param_1->Ppem;
          param_2->ImageWidth =
               *(short *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 8) -
               *(short *)&(this->GlyphSdfMapping).SdfBounds.field0_0x0;
          param_2->ImageHeight =
               *(short *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 0xc) -
               *(short *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 4);
          param_2->BearingX = *(short *)&(this->GlyphSdfMapping).SdfBounds.field0_0x0;
          EVar13 = SUCCESS;
          param_2->BearingY =
               *(short *)((longlong)&(this->GlyphSdfMapping).SdfBounds.field0_0x0 + 0xc);
          goto LAB_1424a10f7;
        }
      }
    }
  }
LAB_1424a10f2:
  EVar13 = SDF_UNAVAILABLE;
LAB_1424a10f7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return EVar13;
}

// Reset @ 1424a6050

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SdfUtils::FSdfGeneratorTask::Reset(FSdfGeneratorTask *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *pvVar5;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *this_00;
  
  if (this != (FSdfGeneratorTask *)&stack0xffffffffffffffb8) {
    (this->Descriptor).FontFace.Object = (FFreeTypeFace *)0x0;
    pTVar4 = (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController;
    (this->Descriptor).FontFace.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  (this->Descriptor).EmInnerSpread = 0.0;
  (this->Descriptor).GlyphIndex = 0;
  (this->Descriptor).Ppem = 0;
  (this->Descriptor).SdfType = Simple;
  (this->Descriptor).EmOuterSpread = 0.0;
  pvVar5 = &((this->MsdfgenShape).contours._Mypair._Myval2._Mylast)->edges;
  this_00 = &((this->MsdfgenShape).contours._Mypair._Myval2._Myfirst)->edges;
  if (this_00 != pvVar5) {
    do {
      std::
      vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>::
      _Tidy(this_00);
      this_00 = this_00 + 1;
    } while (this_00 != pvVar5);
    (this->MsdfgenShape).contours._Mypair._Myval2._Mylast =
         (this->MsdfgenShape).contours._Mypair._Myval2._Myfirst;
  }
  piVar2 = &(this->OutputPixels).ArrayMax;
  (this->OutputPixels).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->OutputPixels).AllocatorInstance,0,piVar2);
  }
  return;
}

