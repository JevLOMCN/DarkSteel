// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// UEOpEquals<FActiveTimerHandle_const_> @ 142426a50

bool __thiscall
TWeakPtr<FActiveTimerHandle_const_,1>::UEOpEquals<FActiveTimerHandle_const_>
          (TWeakPtr<FActiveTimerHandle_const_,1> *this,
          TWeakPtr<FActiveTimerHandle_const_,1> *param_1)

{
  FActiveTimerHandle *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FActiveTimerHandle *pFVar6;
  FActiveTimerHandle *pFVar7;
  FActiveTimerHandle *pFVar8;
  FActiveTimerHandle *pFVar9;
  bool bVar10;
  
  pFVar1 = (FActiveTimerHandle *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FActiveTimerHandle *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FActiveTimerHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->TimerFunction;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FActiveTimerHandle *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142426a91;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->TimerFunction;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(int *)&pFVar1->TimerFunction = (int)aVar2 + 1;
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_142426a91:
  pFVar1 = (FActiveTimerHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FActiveTimerHandle *)0x0) {
    iVar3 = *(int *)&pFVar1->TimerFunction;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_142426ab2;
      LOCK();
      iVar5 = *(int *)&pFVar1->TimerFunction;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->TimerFunction = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_142426ab2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// operator=<FShapedGlyphFontAtlasData> @ 14245a4a0

TWeakPtr<FShapedGlyphFontAtlasData,1> * __thiscall
TWeakPtr<FShapedGlyphFontAtlasData,1>::operator=<FShapedGlyphFontAtlasData>
          (TWeakPtr<FShapedGlyphFontAtlasData,1> *this,
          TSharedRef<FShapedGlyphFontAtlasData,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// UEOpEquals<FFreeTypeFace> @ 142462d00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>
          (TWeakPtr<FFreeTypeFace,1> *this,TWeakPtr<FFreeTypeFace,1> *param_1)

{
  FFreeTypeFace *pFVar1;
  int iVar2;
  int iVar3;
  FFreeTypeFace *pFVar4;
  FFreeTypeFace *pFVar5;
  FFreeTypeFace *pFVar6;
  FFreeTypeFace *pFVar7;
  bool bVar8;
  
  pFVar1 = (FFreeTypeFace *)(this->WeakReferenceCount).ReferenceController;
  pFVar7 = (FFreeTypeFace *)0x0;
  pFVar5 = pFVar1;
  pFVar6 = pFVar7;
  if (pFVar1 != (FFreeTypeFace *)0x0) {
    iVar2 = *(int *)&(pFVar1->Memory).Object;
    do {
      pFVar5 = pFVar7;
      pFVar6 = (FFreeTypeFace *)0x0;
      if (iVar2 == 0) goto LAB_142462d41;
      LOCK();
      iVar3 = *(int *)&(pFVar1->Memory).Object;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&(pFVar1->Memory).Object = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pFVar5 = pFVar1;
    pFVar6 = this->Object;
  }
LAB_142462d41:
  pFVar1 = (FFreeTypeFace *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar4 = pFVar1;
  if (pFVar1 != (FFreeTypeFace *)0x0) {
    iVar2 = *(int *)&(pFVar1->Memory).Object;
    do {
      pFVar4 = pFVar7;
      if (iVar2 == 0) goto LAB_142462d62;
      LOCK();
      iVar3 = *(int *)&(pFVar1->Memory).Object;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&(pFVar1->Memory).Object = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pFVar7 = param_1->Object;
    pFVar4 = pFVar1;
  }
LAB_142462d62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar6 == pFVar7;
}

// TWeakPtr<FSdfGlyphFontAtlasData,1> @ 1424715d0

TWeakPtr<FSdfGlyphFontAtlasData,1> * __thiscall
TWeakPtr<FSdfGlyphFontAtlasData,1>::TWeakPtr<FSdfGlyphFontAtlasData,1>
          (TWeakPtr<FSdfGlyphFontAtlasData,1> *this,TWeakPtr<FSdfGlyphFontAtlasData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TWeakPtr<FShapedGlyphFontAtlasData,1> @ 142471600

TWeakPtr<FShapedGlyphFontAtlasData,1> * __thiscall
TWeakPtr<FShapedGlyphFontAtlasData,1>::TWeakPtr<FShapedGlyphFontAtlasData,1>
          (TWeakPtr<FShapedGlyphFontAtlasData,1> *this,
          TWeakPtr<FShapedGlyphFontAtlasData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TWeakPtr<FSdfGlyphFontAtlasData,1> @ 142478870

void __thiscall
TWeakPtr<FSdfGlyphFontAtlasData,1>::~TWeakPtr<FSdfGlyphFontAtlasData,1>
          (TWeakPtr<FSdfGlyphFontAtlasData,1> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142478890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~TWeakPtr<FShapedGlyphFontAtlasData,1> @ 1424788a0

void __thiscall
TWeakPtr<FShapedGlyphFontAtlasData,1>::~TWeakPtr<FShapedGlyphFontAtlasData,1>
          (TWeakPtr<FShapedGlyphFontAtlasData,1> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001424788c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// operator=<SWidget> @ 1425b08d0

TWeakPtr<SWidget,1> * __thiscall
TWeakPtr<SWidget,1>::operator=<SWidget>(TWeakPtr<SWidget,1> *this,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator=<SWidget> @ 1425b0940

TWeakPtr<SWidget,1> * __thiscall
TWeakPtr<SWidget,1>::operator=<SWidget>(TWeakPtr<SWidget,1> *this,TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// UEOpEquals<FSlateCachedElementList> @ 1425b9fb0

bool __thiscall
TWeakPtr<FSlateCachedElementList,1>::UEOpEquals<FSlateCachedElementList>
          (TWeakPtr<FSlateCachedElementList,1> *this,TWeakPtr<FSlateCachedElementList,1> *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  FSlateCachedElementList *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateCachedElementList *pFVar8;
  FSlateCachedElementList *pFVar9;
  FSlateCachedElementList *pFVar10;
  FSlateCachedElementList *pFVar11;
  bool bVar12;
  
  pFVar3 = (FSlateCachedElementList *)(this->WeakReferenceCount).ReferenceController;
  pFVar11 = (FSlateCachedElementList *)0x0;
  pFVar9 = pFVar3;
  pFVar10 = pFVar11;
  if (pFVar3 != (FSlateCachedElementList *)0x0) {
    aVar4 = *(atomic<int> *)&(pFVar3->DrawElements).field_0x8;
    do {
      pFVar9 = pFVar11;
      pFVar10 = (FSlateCachedElementList *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1425b9ff1;
      paVar1 = (atomic<int> *)&(pFVar3->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        *paVar1 = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar9 = pFVar3;
    pFVar10 = this->Object;
  }
LAB_1425b9ff1:
  pFVar3 = (FSlateCachedElementList *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar8 = pFVar3;
  if (pFVar3 != (FSlateCachedElementList *)0x0) {
    iVar5 = *(int *)&(pFVar3->DrawElements).field_0x8;
    do {
      pFVar8 = pFVar11;
      if (iVar5 == 0) goto LAB_1425ba012;
      puVar2 = &(pFVar3->DrawElements).field_0x8;
      LOCK();
      iVar7 = *(int *)puVar2;
      bVar12 = iVar5 == iVar7;
      if (bVar12) {
        *(int *)puVar2 = iVar5 + 1;
        iVar7 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar7;
    } while (!bVar12);
    pFVar11 = param_1->Object;
    pFVar8 = pFVar3;
  }
LAB_1425ba012:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return pFVar10 == pFVar11;
}

