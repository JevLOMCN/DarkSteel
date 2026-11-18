// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FCachedTypefaceData @ 142471db0

FCachedTypefaceData * __thiscall
FCachedTypefaceData::FCachedTypefaceData(FCachedTypefaceData *this,FTypeface *param_1,float param_2)

{
  TArray<FCachedTypefaceData::FCachedFontData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  ForElementType<FCachedTypefaceData::FCachedFontData> FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *local_res8;
  FIdentityFunctor local_res18 [8];
  
  this->Typeface = param_1;
  pTVar1 = &this->CachedFontData;
  (this->CachedFontData).AllocatorInstance.SecondaryData =
       (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0;
  (this->CachedFontData).ArrayNum = 0;
  (this->CachedFontData).ArrayMax = 1;
  this->ScalingFactor = param_2;
  iVar2 = (param_1->Fonts).ArrayNum;
  pFVar5 = (param_1->Fonts).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((param_1->Fonts).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTypefaceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    iVar3 = (this->CachedFontData).ArrayNum;
    if (iVar3 == (this->CachedFontData).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedTypefaceData::FCachedFontData>_>
                        (0x810,&pTVar1->AllocatorInstance,&(this->CachedFontData).ArrayMax);
    }
    (this->CachedFontData).ArrayNum = iVar3 + 1;
    FVar4 = (this->CachedFontData).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
      FVar4 = (ForElementType<FCachedTypefaceData::FCachedFontData>)pTVar1;
    }
    *(undefined8 *)((longlong)FVar4 + (longlong)iVar3 * 0x10) = *(undefined8 *)pFVar5;
    *(FScriptContainerElement **)((uchar *)((longlong)FVar4 + 8) + (longlong)iVar3 * 0x10) =
         pFVar5 + 8;
    pFVar5 = pFVar5 + 0x30;
  }
  FVar4 = (this->CachedFontData).AllocatorInstance.SecondaryData;
  local_res8 = FCachedFontData::SortPredicate;
  if (FVar4 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
    FVar4 = (ForElementType<FCachedTypefaceData::FCachedFontData>)pTVar1;
  }
  AlgoImpl::
  IntroSortInternal<FCachedTypefaceData::FCachedFontData,int,FIdentityFunctor,TDereferenceWrapper<FCachedTypefaceData::FCachedFontData,bool_(__cdecl*)(FCachedTypefaceData::FCachedFontData_const_&,FCachedTypefaceData::FCachedFontData_const_&)>_>
            ((FCachedFontData *)FVar4,(this->CachedFontData).ArrayNum,local_res18[0],
             (TDereferenceWrapper<FCachedTypefaceData::FCachedFontData,bool_(__cdecl*)(FCachedTypefaceData::FCachedFontData_const_&,FCachedTypefaceData::FCachedFontData_const_&)>
              )&local_res8);
  return this;
}

// FCachedTypefaceData @ 142471eb0

FCachedTypefaceData * __thiscall FCachedTypefaceData::FCachedTypefaceData(FCachedTypefaceData *this)

{
  (this->CachedFontData).AllocatorInstance.SecondaryData =
       (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0;
  this->Typeface = (FTypeface *)0x0;
  (this->CachedFontData).ArrayNum = 0;
  (this->CachedFontData).ArrayMax = 1;
  this->ScalingFactor = 1.0;
  return this;
}

// GetCachedFontData @ 14248c1b0

void __thiscall
FCachedTypefaceData::GetCachedFontData
          (FCachedTypefaceData *this,TArray<FFontData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FCachedTypefaceData::FCachedFontData> FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  FVar7 = (this->CachedFontData).AllocatorInstance.SecondaryData;
  iVar1 = (this->CachedFontData).ArrayNum;
  if (FVar7 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
    FVar7 = (ForElementType<FCachedTypefaceData::FCachedFontData>)&this->CachedFontData;
  }
  pFVar8 = (FScriptContainerElement *)((longlong)FVar7 + 8);
  while( true ) {
    if ((this->CachedFontData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedTypefaceData::FCachedFontData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 + -8 == (FScriptContainerElement *)((longlong)iVar1 * 0x10 + (longlong)FVar7)) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    uVar3 = *(undefined8 *)pFVar8;
    pFVar8 = pFVar8 + 0x10;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = uVar3;
  }
  return;
}

// GetFontData @ 14248eda0

FFontData * __thiscall FCachedTypefaceData::GetFontData(FCachedTypefaceData *this,FName *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FFontData *pFVar5;
  ForElementType<FCachedTypefaceData::FCachedFontData> FVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  FVar6 = (this->CachedFontData).AllocatorInstance.SecondaryData;
  uVar10 = (this->CachedFontData).ArrayNum;
  if (FVar6 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
    FVar6 = (ForElementType<FCachedTypefaceData::FCachedFontData>)&this->CachedFontData;
  }
  pFVar5 = (FFontData *)0x0;
  if (0 < (int)uVar10) {
    uVar9 = 0;
    do {
      iVar8 = (uVar10 >> 1) + uVar9;
      uVar1 = *(undefined8 *)((longlong)FVar6 + (longlong)iVar8 * 0x10);
      iVar7 = (int)uVar1 - (param_1->ComparisonIndex).Value;
      if (iVar7 == 0) {
        iVar7 = (int)((ulonglong)uVar1 >> 0x20) - param_1->Number;
      }
      if (iVar7 < 0) {
        uVar9 = iVar8 + (uVar10 & 1);
      }
      uVar3 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar3 != 0);
    if ((int)uVar9 < (this->CachedFontData).ArrayNum) {
      FVar6 = (this->CachedFontData).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
        FVar6 = (ForElementType<FCachedTypefaceData::FCachedFontData>)&this->CachedFontData;
      }
      uVar1 = *(undefined8 *)((longlong)FVar6 + (longlong)(int)uVar9 * 0x10);
      iVar8 = (param_1->ComparisonIndex).Value - (int)uVar1;
      if (iVar8 == 0) {
        iVar8 = param_1->Number - (int)((ulonglong)uVar1 >> 0x20);
      }
      if ((-1 < iVar8) && (uVar9 != 0xffffffff)) {
        uVar10 = 0;
        if ((int)uVar9 < (this->CachedFontData).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FFontData *)(*pcVar2)();
          return pFVar5;
        }
        FVar6 = (this->CachedFontData).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<FCachedTypefaceData::FCachedFontData>)0x0) {
          FVar6 = (ForElementType<FCachedTypefaceData::FCachedFontData>)&this->CachedFontData;
        }
        pFVar5 = *(FFontData **)((uchar *)((longlong)FVar6 + 8) + (longlong)(int)uVar9 * 0x10);
      }
    }
  }
  return pFVar5;
}

// GetPrimaryFontData @ 142492a70

FFontData * __thiscall FCachedTypefaceData::GetPrimaryFontData(FCachedTypefaceData *this)

{
  code *pcVar1;
  bool bVar2;
  FFontData *pFVar3;
  
  if (this->Typeface == (FTypeface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Typeface",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFontData *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (0 < (this->Typeface->Fonts).ArrayNum) {
    return (FFontData *)((this->Typeface->Fonts).AllocatorInstance.Data + 8);
  }
  return (FFontData *)0x0;
}

