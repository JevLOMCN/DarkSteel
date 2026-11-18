// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// <lambda_invoker_cdecl> @ 14245a230

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl `FCompositeFontCache::Update'::__l26::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateApplicationBase::InvalidateAllWidgets
              (FSlateApplicationBase::CurrentBaseApplication.Object,false);
    GSlateLayoutGeneration = GSlateLayoutGeneration + 1;
  }
  return;
}

// FCompositeFontCache @ 142471f50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FCompositeFontCache * __thiscall
FCompositeFontCache::FCompositeFontCache(FCompositeFontCache *this,FFreeTypeLibrary *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCompositeFontCache *pFVar3;
  FInternationalization *pFVar4;
  
  this->FTLibrary = param_1;
  *(undefined8 *)&this->CompositeFontToCachedDataMap = 0;
  *(undefined8 *)&(this->CompositeFontToCachedDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->CompositeFontToCachedDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->CompositeFontToCachedDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x48 = 0;
  *(undefined8 *)&this->FontFaceMap = 0;
  *(undefined8 *)&(this->FontFaceMap).field_0x8 = 0;
  *(undefined8 *)&(this->FontFaceMap).field_0x20 = 0;
  *(undefined4 *)&(this->FontFaceMap).field_0x28 = 0;
  *(undefined4 *)&(this->FontFaceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FontFaceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontFaceMap).field_0x34 = 0;
  *(undefined8 *)&(this->FontFaceMap).field_0x40 = 0;
  *(undefined4 *)&(this->FontFaceMap).field_0x48 = 0;
  (this->LoadFontFaceTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadFontFaceTasks).ArrayNum = 0;
  (this->LoadFontFaceTasks).ArrayMax = 0;
  if (this->FTLibrary == (FFreeTypeLibrary *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTLibrary",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                       ,0x116,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCompositeFontCache *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = FInternationalization::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FCompositeFontCache>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar4->CultureChangedEvent,(FCompositeFontCache *)&stack0x00000008,(pmf_441c3d64)this
            );
  return this;
}

// ~FCompositeFontCache @ 142478d90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FCompositeFontCache::~FCompositeFontCache(FCompositeFontCache *this)

{
  int iVar1;
  FAsyncTaskBase *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FInternationalization *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = FInternationalization::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->CultureChangedEvent,this
            );
  pFVar5 = (this->LoadFontFaceTasks).AllocatorInstance.Data;
  iVar1 = (this->LoadFontFaceTasks).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->LoadFontFaceTasks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAsyncTask<FAsyncLoadFontFaceData>_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    this_00 = *(FAsyncTaskBase **)pFVar5;
    FAsyncTaskBase::EnsureCompletion(this_00,true,false);
    if (this_00 != (FAsyncTaskBase *)0x0) {
      (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar2 = (this->LoadFontFaceTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FontFaceMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FontFaceMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FontFaceMap);
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CompositeFontToCachedDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompositeFontToCachedDataMap);
  return;
}

// operator() @ 14247c640

bool __thiscall
`FCompositeFontCache::HasLoadedFontForCodepoint'::__l2::<lambda_2>::operator()
          (void *this,FFontData *param_1)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (param_1 == (FFontData *)0x0) {
    return false;
  }
  lVar5 = **(longlong **)((longlong)this + 0x10);
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FFontData>
                    ((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                      *)(lVar5 + 0x58),uVar3,param_1);
  if ((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x40 + *(longlong *)(lVar5 + 0x58), lVar5 == 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar1 = *(longlong **)(lVar5 + 0x28);
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar5 + 0x30);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && ((char)plVar1[3] == '\0')) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      bVar2 = FCompositeFontCache::DoesFontDataSupportCodepoint
                        (*(FCompositeFontCache **)this,param_1,*(wchar32 *)((longlong)this + 8));
      return bVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return true;
}

// DoesFontDataSupportCodepoint @ 142485c60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FCompositeFontCache::DoesFontDataSupportCodepoint
          (FCompositeFontCache *this,FFontData *param_1,wchar32 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedPtr<FFreeTypeFace,1> local_18;
  
  GetFontFace(this,&local_18,param_1);
  if (local_18.Object == (FFreeTypeFace *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if ((local_18.Object == (FFreeTypeFace *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_18.Object)->bPendingAsyncLoad != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return true;
  }
  iVar4 = FT_Get_Char_Index((local_18.Object)->FTFace,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar4 != 0;
}

// FlushCache @ 1424892b0

void __thiscall FCompositeFontCache::FlushCache(FCompositeFontCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->CompositeFontToCachedDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
                      *)&this->CompositeFontToCachedDataMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->CompositeFontToCachedDataMap,0,
                    *(int *)&(this->CompositeFontToCachedDataMap).field_0x8);
  puVar1 = &(this->CompositeFontToCachedDataMap).field_0xc;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->CompositeFontToCachedDataMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->CompositeFontToCachedDataMap).field_0x2c;
  *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CompositeFontToCachedDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CompositeFontToCachedDataMap).field_0x48 = 1;
    TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
              *)&this->CompositeFontToCachedDataMap);
  }
  bVar3 = 1 < *(int *)&(this->FontFaceMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                      *)&this->FontFaceMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->FontFaceMap,0,*(int *)&(this->FontFaceMap).field_0x8);
  puVar1 = &(this->FontFaceMap).field_0xc;
  *(undefined4 *)&(this->FontFaceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->FontFaceMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FontFaceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FontFaceMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->FontFaceMap).field_0x2c;
  *(undefined4 *)&(this->FontFaceMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FontFaceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FontFaceMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->FontFaceMap).field_0x48 = 1;
    TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
              *)&this->FontFaceMap);
  }
  return;
}

// FlushCompositeFont @ 142489bf0

void __thiscall
FCompositeFontCache::FlushCompositeFont(FCompositeFontCache *this,FCompositeFont *param_1)

{
  uint uVar1;
  FCompositeFont *local_res8 [4];
  
  if (*(int *)&(this->CompositeFontToCachedDataMap).field_0x8 !=
      *(int *)&(this->CompositeFontToCachedDataMap).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FCompositeFont_const_*>
              ((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
                *)&this->CompositeFontToCachedDataMap,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

// GetBestMatchFontForAttributes @ 14248b9b0

FFontData * __thiscall
FCompositeFontCache::GetBestMatchFontForAttributes
          (FCompositeFontCache *this,FCachedTypefaceData *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  FTypeface *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FFontData *pFVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res10 [8];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_res18;
  undefined1 local_res20 [8];
  int local_108;
  FFontData *local_f0;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_f0 = (FFontData *)0x0;
  local_108 = 0;
  local_res18 = param_2;
  if ((param_1->Typeface == (FTypeface *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Typeface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.h"
                          ,0x1c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FFontData *)(*pcVar8)();
    return pFVar13;
  }
  pFVar4 = param_1->Typeface;
  uVar2 = (pFVar4->Fonts).ArrayNum;
  uVar17 = (ulonglong)(int)uVar2;
  pFVar18 = (pFVar4->Fonts).AllocatorInstance.Data;
  pFVar25 = pFVar18 + uVar17 * 0x30;
  pFVar9 = pFVar18;
  do {
    pFVar13 = (FFontData *)(pFVar9 + 8);
    if ((pFVar4->Fonts).ArrayNum != (int)uVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FTypefaceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar18 == pFVar25) {
      return local_f0;
    }
    pTVar14 = GetFontAttributes(this,pFVar13);
    iVar3 = *(int *)&(param_2->Elements).field_0x28;
    puVar1 = &(param_2->Elements).field_0x10;
    iVar21 = 0;
    iVar23 = 0;
    uVar11 = 1;
    iVar12 = 0;
    if (iVar3 != 0) {
      puVar5 = *(uint **)&(param_2->Elements).field_0x20;
      puVar24 = (uint *)puVar1;
      if (puVar5 != (uint *)0x0) {
        puVar24 = puVar5;
      }
      uVar20 = *puVar24;
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar21;
        iVar23 = iVar23 + 0x20;
        iVar21 = iVar21 + 1;
        iVar12 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14248bafe;
        uVar20 = puVar24[lVar15 + 1];
      }
      uVar11 = -uVar20 & uVar20;
      uVar17 = (ulonglong)uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = iVar23 + -1 + (int)lVar15;
      if (iVar3 < iVar12) {
        iVar12 = iVar3;
      }
    }
LAB_14248bafe:
    uVar20 = *(uint *)&(param_2->Elements).field_0x28;
    uVar19 = uVar20 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar11,iVar21);
    TStack_90.CurrentBitIndex = iVar12;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar20 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = iVar23;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(param_2->Elements).field_0x8 -
                         *(int *)&(param_2->Elements).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FFontData *)(*pcVar8)();
      return pFVar13;
    }
    uVar11 = *(uint *)&(param_2->Elements).field_0x28;
    iVar3 = 0;
    if (uVar20 != uVar11) {
      puVar6 = *(undefined1 **)&(param_2->Elements).field_0x20;
      puVar22 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar22 = puVar6;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar21 * 4);
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar21;
        uVar19 = uVar19 + 0x20;
        iVar21 = iVar21 + 1;
        uVar20 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14248bc00;
        uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar20 = (int)lVar15 + -1 + uVar19;
      iVar3 = 0;
      if ((int)uVar11 < (int)uVar20) {
        uVar20 = uVar11;
      }
    }
LAB_14248bc00:
    while( true ) {
      iVar23 = iVar3;
      if (*(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34 !=
          (int)uStack_70) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_90.CurrentBitIndex == uVar20) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (param_2 == local_res18)) break;
      lVar15 = *(longlong *)
                (*(longlong *)&param_2->Elements + (longlong)TStack_90.CurrentBitIndex * 0x10);
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      if (*(int *)&(pTVar14->Elements).field_0x8 != *(int *)&(pTVar14->Elements).field_0x34) {
        FVar7 = (pTVar14->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&pTVar14->Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar7;
        }
        iVar21 = *(int *)((longlong)FVar16 +
                         (ulonglong)
                         (pTVar14->HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar11) * 4);
        if (iVar21 != -1) {
          do {
            if (*(longlong *)(*(longlong *)&pTVar14->Elements + (longlong)iVar21 * 0x10) == lVar15)
            goto LAB_14248bc9e;
            iVar21 = *(int *)(*(longlong *)&pTVar14->Elements + 8 + (longlong)iVar21 * 0x10);
          } while (iVar21 != -1);
        }
      }
      iVar21 = -1;
LAB_14248bc9e:
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      iVar3 = iVar23 + 1;
      if (iVar21 == -1) {
        iVar3 = iVar23;
      }
    }
    if ((iVar23 <= local_108) && (local_f0 != (FFontData *)0x0)) {
      iVar23 = local_108;
      pFVar13 = local_f0;
    }
    local_f0 = pFVar13;
    local_108 = iVar23;
    pFVar18 = pFVar18 + 0x30;
    pFVar9 = (FScriptContainerElement *)&pFVar9[0x30].field_0x0;
    uVar17 = (ulonglong)uVar2;
    param_2 = local_res18;
  } while( true );
}

// GetCachedCompositeFont @ 14248be10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCachedCompositeFontData * __thiscall
FCompositeFontCache::GetCachedCompositeFont(FCompositeFontCache *this,FCompositeFont *param_1)

{
  TMap<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCachedCompositeFontData *pFVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  FCompositeFont *local_res10;
  TPairInitializer<FCompositeFont_const_*_const_&,TSharedPtr<FCachedCompositeFontData,1>_&&>
  local_res18;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FCompositeFont **local_28;
  TReferenceControllerBase<1> **local_20;
  
  if (param_1 == (FCompositeFont *)0x0) {
    return (FCachedCompositeFontData *)0x0;
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this_00 = &this->CompositeFontToCachedDataMap;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->CompositeFontToCachedDataMap).field_0x8 !=
      *(int *)&(this->CompositeFontToCachedDataMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->CompositeFontToCachedDataMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->CompositeFontToCachedDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->CompositeFontToCachedDataMap).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0);
        if ((FCompositeFont *)*plVar7 == param_1) {
          pTVar4 = (TReferenceControllerBase<1> *)(plVar7 + 1);
          if (plVar7 == (longlong *)0x0) {
            pTVar4 = pTVar9;
          }
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            return (FCachedCompositeFontData *)pTVar4->_padding_;
          }
          break;
        }
        iVar3 = (int)plVar7[3];
      } while (iVar3 != -1);
    }
  }
  local_res10 = param_1;
  pTVar4 = ::operator_new(0x68);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCachedCompositeFontData___00_SharedPointerInternals__6B_
    ;
    FCachedCompositeFontData::FCachedCompositeFontData
              ((FCachedCompositeFontData *)(pTVar4 + 1),param_1);
    local_38 = pTVar4 + 1;
    if (local_38 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCachedCompositeFontData *)(*pcVar1)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar4;
    pTStack_30 = pTVar4;
  }
  local_28 = &local_res10;
  local_20 = &local_38;
  TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FCompositeFont_const_*_const_&,TSharedPtr<FCachedCompositeFontData,1>_&&>_>
            ((TSet<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>,TDefaultMapHashableKeyFuncs<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>,0>,FDefaultSetAllocator>
              *)this_00,&local_res18,(bool *)&local_28);
  pFVar5 = *(FCachedCompositeFontData **)
            ((longlong)(int)local_res18.Key * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return pFVar5;
}

// GetDefaultFontData @ 14248ea30

FFontData * __thiscall
FCompositeFontCache::GetDefaultFontData(FCompositeFontCache *this,FSlateFontInfo *param_1)

{
  FCachedTypefaceData *this_00;
  code *pcVar1;
  bool bVar2;
  FCompositeFont *pFVar3;
  FCachedCompositeFontData *pFVar4;
  FFontData *pFVar5;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar6;
  FFontData *pFVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DummyFontData.FontFilenameHash = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
    atexit(`FCompositeFontCache::GetDefaultFontData'::__l2::
           _dynamic_atexit_destructor_for__DummyFontData__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = FSlateFontInfo::GetCompositeFont(param_1);
  pFVar4 = GetCachedCompositeFont(this,pFVar3);
  if (pFVar4 != (FCachedCompositeFontData *)0x0) {
    if (((pFVar4->CachedTypefaces).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FFontData *)(*pcVar1)();
      return pFVar5;
    }
    FVar6 = (pFVar4->CachedTypefaces).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
      FVar6 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&pFVar4->CachedTypefaces;
    }
    this_00 = *(FCachedTypefaceData **)FVar6;
    if (this_00 != (FCachedTypefaceData *)0x0) {
      pFVar5 = FCachedTypefaceData::GetFontData(this_00,&param_1->TypefaceFontName);
      if (pFVar5 != (FFontData *)0x0) {
        return pFVar5;
      }
      pFVar7 = FCachedTypefaceData::GetPrimaryFontData(this_00);
      pFVar5 = &DummyFontData;
      if (pFVar7 != (FFontData *)0x0) {
        pFVar5 = pFVar7;
      }
      return pFVar5;
    }
  }
  return &DummyFontData;
}

// GetFontAttributes @ 14248eca0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FCompositeFontCache::GetFontAttributes(FCompositeFontCache *this,FFontData *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  TSharedPtr<FFreeTypeFace,1> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FCompositeFontCache::GetFontAttributes'::__l2::
           _dynamic_atexit_destructor_for__DummyAttributes__);
    _Init_thread_footer(&::_TSS0);
  }
  GetFontFace(this,&local_18,param_1);
  if (local_18.Object == (FFreeTypeFace *)0x0) {
    pTVar3 = &DummyAttributes;
  }
  else {
    if ((local_18.Object == (FFreeTypeFace *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = &(local_18.Object)->Attributes;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pTVar3;
}

// GetFontDataAssetResidentMemory @ 14248eee0

ulong64 __thiscall
FCompositeFontCache::GetFontDataAssetResidentMemory(FCompositeFontCache *this,UObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FFontFaceData *this_00;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  UObject *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->FontFaceMap).field_0x10;
  uVar10 = 0;
  iVar3 = *(int *)&(this->FontFaceMap).field_0x28;
  iVar15 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->FontFaceMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar15) goto LAB_14248ef8d;
      uVar14 = puVar17[lVar9 + 1];
    }
    uVar7 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14248ef8d:
  uVar14 = *(uint *)&(this->FontFaceMap).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar15);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->FontFaceMap).field_0x8 -
                       *(int *)&(this->FontFaceMap).field_0x34);
  local_res10 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  pUVar5 = local_res10;
  uVar7 = *(uint *)&(this->FontFaceMap).field_0x28;
  if (uVar14 != uVar7) {
    puVar12 = *(undefined1 **)&(this->FontFaceMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar15) goto LAB_14248f090;
      uVar14 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_14248f090:
  while( true ) {
    if (*(int *)&(this->FontFaceMap).field_0x8 - *(int *)&(this->FontFaceMap).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar14) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)&this->FontFaceMap + (longlong)TStack_70.CurrentBitIndex * 0x40;
    if (*(UObject **)(lVar9 + 0x20) == pUVar5) {
      if ((*(longlong *)(lVar9 + 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return uVar10;
      }
      this_00 = *(FFontFaceData **)(*(longlong *)(lVar9 + 0x28) + 8);
      if (this_00 == (FFontFaceData *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FFontFaceData::GetAllocatedSize(this_00);
      }
      uVar10 = uVar10 + uVar11;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return uVar10;
}

// GetFontDataForCodepoint @ 14248f160

/* WARNING: Enum "Type": Some values do not have unique names */

FFontData * __thiscall
FCompositeFontCache::GetFontDataForCodepoint
          (FCompositeFontCache *this,FSlateFontInfo *param_1,wchar32 param_2,float *param_3)

{
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar1;
  code *pcVar2;
  bool bVar3;
  FCompositeFont *pFVar4;
  FCachedCompositeFontData *pFVar5;
  FCachedTypefaceData *this_00;
  FFontData *pFVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar8;
  FCachedTypefaceData *this_01;
  FCachedTypefaceData *this_02;
  FName *this_03;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DummyFontData.FontFilenameHash = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
    atexit(`FCompositeFontCache::GetFontDataForCodepoint'::__l2::
           _dynamic_atexit_destructor_for__DummyFontData__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar4 = FSlateFontInfo::GetCompositeFont(param_1);
  pFVar5 = GetCachedCompositeFont(this,pFVar4);
  if ((pFVar5 == (FCachedCompositeFontData *)0x0) ||
     (this_00 = FCachedCompositeFontData::GetTypefaceForCodepoint(pFVar5,param_2),
     this_00 == (FCachedTypefaceData *)0x0)) {
LAB_14248f5a0:
    *param_3 = 1.0;
    pFVar6 = &DummyFontData;
  }
  else {
    pFVar5 = GetCachedCompositeFont(this,pFVar4);
    this_02 = (FCachedTypefaceData *)0x0;
    this_01 = this_02;
    if (pFVar5 != (FCachedCompositeFontData *)0x0) {
      if (((pFVar5->CachedTypefaces).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFontData *)(*pcVar2)();
        return pFVar6;
      }
      FVar1 = (pFVar5->CachedTypefaces).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&pFVar5->CachedTypefaces;
      if (FVar1 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
        FVar8 = FVar1;
      }
      this_01 = *(FCachedTypefaceData **)FVar8;
    }
    pFVar5 = GetCachedCompositeFont(this,pFVar4);
    if (pFVar5 != (FCachedCompositeFontData *)0x0) {
      if (((pFVar5->CachedTypefaces).ArrayNum < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFontData *)(*pcVar2)();
        return pFVar6;
      }
      FVar1 = (pFVar5->CachedTypefaces).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&pFVar5->CachedTypefaces;
      if (FVar1 != (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
        FVar8 = FVar1;
      }
      this_02 = *(FCachedTypefaceData **)((longlong)FVar8 + 0x10);
    }
    if (((this_01 == (FCachedTypefaceData *)0x0) || (this_02 == (FCachedTypefaceData *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedDefaultTypefaceData && CachedFallbackTypefaceData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                           ,0x1be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFontData *)(*pcVar2)();
      return pFVar6;
    }
    this_03 = &param_1->TypefaceFontName;
    pFVar6 = FCachedTypefaceData::GetFontData(this_00,this_03);
    if ((pFVar6 == (FFontData *)0x0) ||
       (bVar3 = DoesFontDataSupportCodepoint(this,pFVar6,param_2), !bVar3)) {
      if ((this_01 != (FCachedTypefaceData *)0x0) &&
         ((this_00 != this_01 &&
          (pFVar6 = FCachedTypefaceData::GetFontData(this_01,this_03), pFVar6 != (FFontData *)0x0)))
         ) {
        pTVar7 = GetFontAttributes(this,pFVar6);
        pFVar6 = GetBestMatchFontForAttributes(this,this_00,pTVar7);
        if ((pFVar6 != (FFontData *)0x0) &&
           (bVar3 = DoesFontDataSupportCodepoint(this,pFVar6,param_2), bVar3)) goto LAB_14248f3b2;
      }
      if ((this_00->Typeface == (FTypeface *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Typeface",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                             ,0x4e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFontData *)(*pcVar2)();
        return pFVar6;
      }
      if ((((this_00->Typeface->Fonts).ArrayNum < 1) ||
          (pFVar6 = (FFontData *)((this_00->Typeface->Fonts).AllocatorInstance.Data + 8),
          pFVar6 == (FFontData *)0x0)) ||
         (bVar3 = DoesFontDataSupportCodepoint(this,pFVar6,param_2), !bVar3)) {
        if (this_00 != this_01) {
          pFVar6 = FCachedTypefaceData::GetFontData(this_01,this_03);
          if ((pFVar6 != (FFontData *)0x0) &&
             (bVar3 = DoesFontDataSupportCodepoint(this,pFVar6,param_2), bVar3)) {
LAB_14248f444:
            *param_3 = this_01->ScalingFactor;
            return pFVar6;
          }
          if ((this_01->Typeface == (FTypeface *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Typeface",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                                 ,0x4e,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FFontData *)(*pcVar2)();
            return pFVar6;
          }
          if (((0 < (this_01->Typeface->Fonts).ArrayNum) &&
              (pFVar6 = (FFontData *)((this_01->Typeface->Fonts).AllocatorInstance.Data + 8),
              pFVar6 != (FFontData *)0x0)) &&
             (bVar3 = DoesFontDataSupportCodepoint(this,pFVar6,param_2), bVar3)) goto LAB_14248f444;
        }
        pFVar6 = FCachedTypefaceData::GetFontData(this_02,this_03);
        if (pFVar6 != (FFontData *)0x0) {
LAB_14248f4db:
          *param_3 = this_02->ScalingFactor;
          if ((byte)LogSlate._0_1_ < 6) {
            return pFVar6;
          }
          ::FName::ToString(this_03,&local_38);
          FFontData::GetFontFilename(pFVar6);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar6;
          }
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return pFVar6;
        }
        if (((this_01 != (FCachedTypefaceData *)0x0) && (this_02 != this_01)) &&
           (pFVar6 = FCachedTypefaceData::GetFontData(this_01,this_03), pFVar6 != (FFontData *)0x0))
        {
          pTVar7 = GetFontAttributes(this,pFVar6);
          pFVar6 = GetBestMatchFontForAttributes(this,this_02,pTVar7);
          if (pFVar6 != (FFontData *)0x0) goto LAB_14248f4db;
        }
        if ((this_02->Typeface == (FTypeface *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Typeface",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                               ,0x4e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FFontData *)(*pcVar2)();
          return pFVar6;
        }
        if ((0 < (this_02->Typeface->Fonts).ArrayNum) &&
           (pFVar6 = (FFontData *)((this_02->Typeface->Fonts).AllocatorInstance.Data + 8),
           pFVar6 != (FFontData *)0x0)) goto LAB_14248f4db;
        pFVar6 = FCachedTypefaceData::GetFontData(this_01,this_03);
        if (pFVar6 != (FFontData *)0x0) {
LAB_14248f597:
          *param_3 = this_01->ScalingFactor;
          return pFVar6;
        }
        if ((this_01->Typeface == (FTypeface *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Typeface",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                               ,0x4e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FFontData *)(*pcVar2)();
          return pFVar6;
        }
        if ((0 < (this_01->Typeface->Fonts).ArrayNum) &&
           (pFVar6 = (FFontData *)((this_01->Typeface->Fonts).AllocatorInstance.Data + 8),
           pFVar6 != (FFontData *)0x0)) goto LAB_14248f597;
        goto LAB_14248f5a0;
      }
    }
LAB_14248f3b2:
    *param_3 = this_00->ScalingFactor;
  }
  return pFVar6;
}

// GetFontFace @ 14248f630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FFreeTypeFace,1> * __thiscall
FCompositeFontCache::GetFontFace
          (FCompositeFontCache *this,TSharedPtr<FFreeTypeFace,1> *__return_storage_ptr__,
          FFontData *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  UObjectBaseUtility *pUVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  FFontFaceData *pFVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  EFontLayoutMethod EVar14;
  EFontLoadingPolicy EVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  TSharedPtr<FFreeTypeFace,1> *pTVar19;
  FString *pFVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_SlateLoadFont> FVar22;
  FAsyncTaskBase *pFVar23;
  FFreeTypeFace *pFVar24;
  TStatIdData *pTVar25;
  TSharedRef<FFontFaceData,1> *pTVar26;
  UClass *pUVar27;
  longlong *plVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar29;
  FName FVar30;
  wchar_t *pwVar31;
  wchar_t *pwVar32;
  FAsyncTaskBase *pFVar33;
  TArray<FAsyncTask<FAsyncLoadFontFaceData>_*,TSizedDefaultAllocator<32>_> *pTVar34;
  FAsyncTaskBase *local_310;
  int local_308;
  FLLMScope local_304;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_300;
  FColor_u_0 local_2f0 [2];
  FScriptContainerElement *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  TSharedPtr<FFreeTypeFace,1> local_2d8;
  TSharedPtr<FFreeTypeFace,1> local_2c8;
  TSharedPtr<FFreeTypeFace,1> local_2b8;
  TSharedPtr<FFreeTypeFace,1> local_2a8;
  TSharedPtr<FFreeTypeFace,1> local_298;
  FName local_288 [2];
  TSharedPtr<FFontFaceData_const_,1> local_278;
  FString local_268;
  FName local_258;
  TSharedPtr<FFontFaceData_const_,1> local_248;
  TSharedRef<FFontFaceData,1> local_238;
  TPairInitializer<FFontData_const_&,TSharedPtr<FFreeTypeFace,1>_const_&> local_228;
  TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
  *local_218;
  LARGE_INTEGER local_210;
  FMemScope local_208;
  TSharedPtr<FFreeTypeFace,1> local_200;
  FStatMessage local_1f0;
  TSharedRef<FFontFaceData_const_,1> local_1e0;
  FFontData *local_1d0;
  TSharedPtr<FFreeTypeFace,1> *local_1c8;
  FName local_1c0;
  FName local_1b8 [2];
  TSharedRef<FFontFaceData_const_,1> local_1a8;
  TSharedRef<FFontFaceData_const_,1> local_198;
  TSharedRef<FFontFaceData,1> local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FMemoryReader local_f8;
  
  FLLMScope::FLLMScope(&local_304,LLMTagDeclaration_UI_Text.UniqueName,false,None,Default,true);
  local_228._4_8_ = LLMTagDeclaration_UI_Text.UniqueName;
  FMemScope::FMemScope(&local_208,(FName *)((longlong)&local_228.Key + 4),true);
  local_218 = (TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
               *)&this->FontFaceMap;
  TMapBase<FFontData,TSharedPtr<FFreeTypeFace,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>_>
  ::FindRef((TMapBase<FFontData,TSharedPtr<FFreeTypeFace,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>_>
             *)local_218,__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Object != (FFreeTypeFace *)0x0) goto LAB_142490572;
  FFontData::GetFontFaceData(param_1,&local_248);
  pwVar32 = L"";
  if (local_248.Object == (FFontFaceData *)0x0) {
LAB_14248f70b:
    pFVar20 = FFontData::GetFontFilename(param_1);
    if ((pFVar20->Data).ArrayNum < 2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      goto LAB_142490572;
    }
  }
  else {
    if ((local_248.Object == (FFontFaceData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
      return pTVar19;
    }
    if (((local_248.Object)->Data).ArrayNum < 1) goto LAB_14248f70b;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  pFVar33 = (FAsyncTaskBase *)0x0;
  iVar18 = 0;
  FVar22 = StatPtr_STAT_SlateLoadFont;
  if (StatPtr_STAT_SlateLoadFont == (FThreadSafeStaticStat<FStat_STAT_SlateLoadFont>)0x0) {
    pFVar21 = ::FName::FName(&local_1c0,"STAT_SlateLoadFont");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_SlateLoadFont>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateLoadFont,*pFVar21,
                        L"Load Font","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar22;
  bVar7 = false;
  bVar12 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  bVar13 = false;
  bVar11 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14248f86b:
    bVar7 = bVar13;
    bVar12 = bVar11;
    bVar11 = false;
    FVar30 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2f0[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar7 = false;
      bVar12 = true;
      bVar13 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_288[0].ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_288[0].Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_288,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.cpp"
                   ,0x1ec);
        bVar7 = true;
        bVar12 = true;
        bVar13 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14248f86b;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar11 = true;
  }
  local_2e8 = (FScriptContainerElement *)0x0;
  local_308 = 0;
  FFontData::GetFontFaceData(param_1,&local_278);
  pFVar9 = local_278.Object;
  if (local_278.Object != (FFontFaceData *)0x0) {
    if ((local_278.Object == (FFontFaceData *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
      return pTVar19;
    }
    if (0 < (pFVar9->Data).ArrayNum) {
      EVar14 = FFontData::GetLayoutMethod(param_1);
      FVar10.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
      iVar17 = param_1->SubFaceIndex;
      local_2e0 = local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar23 = ::operator_new(0x130);
      if (pFVar23 == (FAsyncTaskBase *)0x0) {
        local_298.Object = ___xmm_00000000000000000000000000000010;
        pFVar24 = (FFreeTypeFace *)&DAT_00000010;
        local_298.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)_UNK_150651568;
        pFVar23 = pFVar33;
      }
      else {
        *(atomic<int> *)&pFVar23->_padding_ = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar23->_padding_)[1] = (atomic<int>)0x1;
        pFVar23->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFFreeTypeFace___00_SharedPointerInternals__6B_;
        local_1a8.Object = local_278.Object;
        local_1a8.SharedReferenceCount.ReferenceController =
             local_278.SharedReferenceCount.ReferenceController;
        if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(FVar10.ReferenceController)->SharedReferenceCount;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
        }
        FFreeTypeFace::FFreeTypeFace
                  ((FFreeTypeFace *)&pFVar23->_padding_,this->FTLibrary,&local_1a8,iVar17,EVar14);
        pFVar24 = (FFreeTypeFace *)&pFVar23->_padding_;
        if ((pFVar24 == (FFreeTypeFace *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
          return pTVar19;
        }
        LOCK();
        *(atomic<int> *)&pFVar23->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar23->_padding_ + 1);
        UNLOCK();
        local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar23;
        local_298.Object = pFVar24;
      }
      if (__return_storage_ptr__ != &local_298) {
        __return_storage_ptr__->Object = pFVar24;
        local_298.Object = (FFreeTypeFace *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_298.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar23);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e0)
      ;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  pFVar24 = __return_storage_ptr__->Object;
  if (pFVar24 == (FFreeTypeFace *)0x0) {
    EVar15 = FFontData::GetLoadingPolicy(param_1);
    if (EVar15 == LazyLoad) {
      if (GAsyncFontLazyLoad == false) {
        FWindowsPlatformTime::Seconds();
        local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_300.ArrayNum = 0;
        local_300.ArrayMax = 0;
        pFVar20 = FFontData::GetFontFilename(param_1);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        bVar13 = FFileHelper::LoadFileToArray(&local_300,pwVar31,0);
        if (bVar13) {
          FFontData::GetFontFilename(param_1);
          FWindowsPlatformTime::Seconds();
          ::FString::PrintfImpl
                    (&local_268,
                     L"Took %f seconds to synchronously load lazily loaded font \'%s\' (%dK)");
          local_2e8 = local_268.Data.AllocatorInstance.Data;
          local_308 = local_268.Data.ArrayNum;
          local_268.Data.ArrayNum = 0;
          local_268.Data.ArrayMax = 0;
          local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          bVar13 = ::Private::IsFontFileName(pFVar20);
          if ((bVar13) || (bVar13 = ::Private::IsFontFileData(&local_300), bVar13)) {
            EVar14 = FFontData::GetLayoutMethod(param_1);
            iVar17 = param_1->SubFaceIndex;
            pTVar26 = FFontFaceData::MakeFontFaceData(&local_188,&local_300);
            pFVar23 = ::operator_new(0x130);
            if (pFVar23 == (FAsyncTaskBase *)0x0) {
              local_2a8.Object = ___xmm_00000000000000000000000000000010;
              pFVar24 = (FFreeTypeFace *)&DAT_00000010;
              local_2a8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)_UNK_150651568;
            }
            else {
              *(atomic<int> *)&pFVar23->_padding_ = (atomic<int>)0x1;
              ((atomic<int> *)&pFVar23->_padding_)[1] = (atomic<int>)0x1;
              pFVar23->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFFreeTypeFace___00_SharedPointerInternals__6B_
              ;
              local_1e0.SharedReferenceCount.ReferenceController =
                   (pTVar26->SharedReferenceCount).ReferenceController;
              local_1e0.Object = pTVar26->Object;
              if (local_1e0.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1e0.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FFreeTypeFace::FFreeTypeFace
                        ((FFreeTypeFace *)&pFVar23->_padding_,this->FTLibrary,&local_1e0,iVar17,
                         EVar14);
              pFVar24 = (FFreeTypeFace *)&pFVar23->_padding_;
              if ((pFVar24 == (FFreeTypeFace *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
                return pTVar19;
              }
              LOCK();
              *(atomic<int> *)&pFVar23->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar23->_padding_ + 1);
              UNLOCK();
              local_2a8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar23;
              pFVar33 = pFVar23;
              local_2a8.Object = pFVar24;
            }
            if (__return_storage_ptr__ != &local_2a8) {
              __return_storage_ptr__->Object = pFVar24;
              local_2a8.Object = (FFreeTypeFace *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&__return_storage_ptr__->SharedReferenceCount,
                         &local_2a8.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2a8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar33);
            local_238.SharedReferenceCount.ReferenceController =
                 local_188.SharedReferenceCount.ReferenceController;
          }
          else {
            FFontFaceData::MakeFontFaceData(&local_238);
            FMemoryReader::FMemoryReader(&local_f8,&local_300,true);
            FFontFaceData::Serialize(local_238.Object,(FArchive *)&local_f8);
            EVar14 = FFontData::GetLayoutMethod(param_1);
            iVar17 = param_1->SubFaceIndex;
            pFVar23 = ::operator_new(0x130);
            if (pFVar23 == (FAsyncTaskBase *)0x0) {
              pFVar24 = (FFreeTypeFace *)&DAT_00000010;
              local_2b8.Object = ___xmm_00000000000000000000000000000010;
              local_2b8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)_UNK_150651568;
            }
            else {
              *(atomic<int> *)&pFVar23->_padding_ = (atomic<int>)0x1;
              ((atomic<int> *)&pFVar23->_padding_)[1] = (atomic<int>)0x1;
              local_198.Object = local_238.Object;
              local_198.SharedReferenceCount.ReferenceController =
                   local_238.SharedReferenceCount.ReferenceController;
              pFVar23->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFFreeTypeFace___00_SharedPointerInternals__6B_
              ;
              if (local_238.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_238.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FFreeTypeFace::FFreeTypeFace
                        ((FFreeTypeFace *)&pFVar23->_padding_,this->FTLibrary,&local_198,iVar17,
                         EVar14);
              pFVar24 = (FFreeTypeFace *)&pFVar23->_padding_;
              if ((pFVar24 == (FFreeTypeFace *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
                return pTVar19;
              }
              LOCK();
              *(atomic<int> *)&pFVar23->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar23->_padding_ + 1);
              UNLOCK();
              local_2b8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar23;
              pFVar33 = pFVar23;
              local_2b8.Object = pFVar24;
            }
            if (__return_storage_ptr__ != &local_2b8) {
              __return_storage_ptr__->Object = pFVar24;
              local_2b8.Object = (FFreeTypeFace *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&__return_storage_ptr__->SharedReferenceCount,
                         &local_2b8.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2b8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar33);
            FArchive::~FArchive((FArchive *)&local_f8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
        }
        if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.AllocatorInstance.Data);
        }
      }
      else {
        pFVar23 = ::operator_new(0xa8);
        local_310 = pFVar33;
        if (pFVar23 != (FAsyncTaskBase *)0x0) {
          *(undefined8 *)&pFVar23->_padding_ = 0;
          pFVar23->DoneEvent = (FEvent *)0x0;
          pFVar23->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
          (pFVar23->WorkNotFinishedCounter).Counter = 0;
          (pFVar23->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
          pFVar23->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncLoadFontFaceData____6B_;
          pFVar23->QueuedPool = (FQueuedThreadPool *)0x0;
          pFVar23->Priority = Normal;
          pFVar23->Flags = None;
          pFVar23->RequiredMemory = -1;
          pFVar23->DebugName = (wchar_t *)0x0;
          ::FString::FString((FString *)(pFVar23 + 1),&param_1->FontFilename);
          *(uint *)&pFVar23[1]._padding_ = param_1->FontFilenameHash;
          *(EFontHinting *)((longlong)&pFVar23[1]._padding_ + 4) = param_1->Hinting;
          *(EFontLoadingPolicy *)((longlong)&pFVar23[1]._padding_ + 5) = param_1->LoadingPolicy;
          *(int *)&pFVar23[1]._padding_ = param_1->SubFaceIndex;
          pUVar3 = (param_1->FontFaceAsset).field0_0x0.DebugPtr;
          pFVar23[1]._padding_ = (longlong)pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          pvVar8 = ThreadLocalStoragePointer;
          uVar29 = (ulonglong)_tls_index;
          pFVar23[1]._padding_ = 0;
          pFVar23[1]._padding_ = 0;
          if ((*(int *)(*(longlong *)((longlong)pvVar8 + uVar29 * 8) + 0x9d4c) <
               `public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'::
             __l2::_thread_safe_static_guard_0__ == -1)) {
            FThreadSafeStaticStat<`FAsyncLoadFontFaceData::GetStatId'::__l2::FStat_FAsyncLoadFontFaceData>
            ::
            FThreadSafeStaticStat<_FAsyncLoadFontFaceData::GetStatId_::__l2::FStat_FAsyncLoadFontFaceData>
                      (&`public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FAsyncLoadFontFaceData);
            _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          pTVar25 = _StatPtr_FAsyncLoadFontFaceData;
          if (_StatPtr_FAsyncLoadFontFaceData == (TStatIdData *)0x0) {
            pFVar21 = ::FName::FName(local_1b8,"FAsyncLoadFontFaceData");
            pTVar25 = FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &`public:_struct_TStatId___cdecl_FAsyncLoadFontFaceData::GetStatId(void)const___ptr64'
                                  ::__l2::StatPtr_FAsyncLoadFontFaceData,*pFVar21,
                                 L"FAsyncLoadFontFaceData","STATGROUP_ThreadPoolAsyncTasks",
                                 "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,
                                 true,false,MCR_Invalid);
          }
          (pFVar23->StatId).StatIdPtr = pTVar25;
          local_310 = pFVar23;
        }
        pTVar34 = &this->LoadFontFaceTasks;
        pFVar4 = (pTVar34->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 <
             pFVar4 + (longlong)(this->LoadFontFaceTasks).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
          return pTVar19;
        }
        iVar17 = (this->LoadFontFaceTasks).ArrayNum;
        piVar1 = &(this->LoadFontFaceTasks).ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,piVar1);
        }
        (this->LoadFontFaceTasks).ArrayNum = iVar17 + 1;
        *(FAsyncTaskBase **)((pTVar34->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_310;
        FAsyncTaskBase::Start(local_310,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
        EVar14 = FFontData::GetLayoutMethod(param_1);
        local_2c8.SharedReferenceCount.ReferenceController = ::operator_new(0x130);
        if ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController ==
            (FAsyncTaskBase *)0x0) {
          local_2c8.Object = ___xmm_00000000000000000000000000000010;
          pFVar24 = (FFreeTypeFace *)&DAT_00000010;
          local_2c8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)_UNK_150651568;
        }
        else {
          *(atomic<int> *)
           &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ =
               (atomic<int>)0x1;
          ((atomic<int> *)
          &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_)[1] =
               (atomic<int>)0x1;
          ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFFreeTypeFace___00_SharedPointerInternals__6B_;
          pFVar24 = (FFreeTypeFace *)
                    &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->
                     _padding_;
          ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ = 0;
          ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ = 0;
          ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ = 0;
          *(undefined8 *)
           &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->
            WorkNotFinishedCounter = 0;
          (((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0x70))
          ->StatId).StatIdPtr = (TStatIdData *)0x0;
          ((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0))
          ->_padding_ = 0;
          ((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0))
          ->_padding_ = 0;
          ((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ = 0;
          *(undefined1 *)
           &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ = 1;
          *(undefined2 *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0x70)
            )->RequiredMemory = 0;
          *(undefined8 *)
           ((longlong)
            &((FAsyncTaskBase *)
             ((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0x70))->RequiredMemory
           + 4) = 0;
          *(undefined4 *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0)
            )->_padding_ = 0;
          *(undefined4 *)
           ((longlong)
            &((FAsyncTaskBase *)
             ((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0))->_padding_ + 4)
               = 0x80;
          *(undefined4 *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0)
            )->_padding_ = 0xffffffff;
          *(undefined4 *)
           ((longlong)
            &((FAsyncTaskBase *)
             ((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0))->_padding_ + 4)
               = 0;
          *(undefined8 *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0)
            )->WorkNotFinishedCounter = 0;
          *(undefined4 *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0)
            )->DoneEvent = 0;
          *(EFontLayoutMethod *)
           &((FAsyncTaskBase *)((longlong)local_2c8.SharedReferenceCount.ReferenceController + 0xe0)
            )->QueuedPool = EVar14;
          if ((pFVar24 == (FFreeTypeFace *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
            return pTVar19;
          }
          LOCK();
          *(atomic<int> *)
           &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->_padding_ =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      &((FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController)->
                       _padding_ + 1);
          UNLOCK();
          pFVar33 = (FAsyncTaskBase *)local_2c8.SharedReferenceCount.ReferenceController;
          local_2c8.Object = pFVar24;
        }
        if (__return_storage_ptr__ != &local_2c8) {
          __return_storage_ptr__->Object = pFVar24;
          local_2c8.Object = (FFreeTypeFace *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_2c8.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar33);
      }
    }
    else if (EVar15 == Stream) {
      EVar14 = FFontData::GetLayoutMethod(param_1);
      iVar17 = param_1->SubFaceIndex;
      local_2e0 = (TReferenceControllerBase<1> *)FFontData::GetFontFilename(param_1);
      pFVar23 = ::operator_new(0x130);
      if (pFVar23 == (FAsyncTaskBase *)0x0) {
        local_2d8.Object = ___xmm_00000000000000000000000000000010;
        pFVar24 = (FFreeTypeFace *)&DAT_00000010;
        local_2d8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)_UNK_150651568;
      }
      else {
        *(atomic<int> *)&pFVar23->_padding_ = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar23->_padding_)[1] = (atomic<int>)0x1;
        pFVar23->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFFreeTypeFace___00_SharedPointerInternals__6B_;
        FFreeTypeFace::FFreeTypeFace
                  ((FFreeTypeFace *)&pFVar23->_padding_,this->FTLibrary,(FString *)local_2e0,iVar17,
                   EVar14);
        pFVar24 = (FFreeTypeFace *)&pFVar23->_padding_;
        if ((pFVar24 == (FFreeTypeFace *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
          return pTVar19;
        }
        LOCK();
        *(atomic<int> *)&pFVar23->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar23->_padding_ + 1);
        UNLOCK();
        local_2d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar23;
        pFVar33 = pFVar23;
        local_2d8.Object = pFVar24;
      }
      if (__return_storage_ptr__ != &local_2d8) {
        __return_storage_ptr__->Object = pFVar24;
        local_2d8.Object = (FFreeTypeFace *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_2d8.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar33);
    }
    pFVar24 = __return_storage_ptr__->Object;
    if (pFVar24 != (FFreeTypeFace *)0x0) goto LAB_142490325;
    local_200.Object = (FFreeTypeFace *)0x0;
    local_200.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (__return_storage_ptr__ != &local_200) {
      __return_storage_ptr__->Object = (FFreeTypeFace *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_200.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.SharedReferenceCount.ReferenceController);
    if (2 < (byte)LogSlate._0_1_) {
      FFontData::GetFontFilename(param_1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  else {
LAB_142490325:
    pUVar5 = (UObjectBaseUtility *)(param_1->FontFaceAsset).field0_0x0.DebugPtr;
    iVar17 = iVar18;
    if (pUVar5 != (UObjectBaseUtility *)0x0) {
      pUVar27 = UFontFaceInterface::StaticClass();
      plVar28 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar27);
      if (plVar28 == (longlong *)0x0) {
        pFVar20 = GetTypeName<IFontFaceInterface_const_>(&local_178);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        pFVar20 = GetFullNameForCastLogError<UObject_const_>
                            (&local_168,(param_1->FontFaceAsset).field0_0x0.DebugPtr);
        if ((pFVar20->Data).ArrayNum != 0) {
          pwVar32 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar32,pwVar31);
      }
      iVar17 = (**(code **)(*plVar28 + 0x38))(plVar28);
    }
    pUVar5 = (UObjectBaseUtility *)(param_1->FontFaceAsset).field0_0x0.DebugPtr;
    uVar16 = false;
    if (pUVar5 != (UObjectBaseUtility *)0x0) {
      pUVar27 = UFontFaceInterface::StaticClass();
      plVar28 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar27);
      if (plVar28 == (longlong *)0x0) {
        pFVar20 = GetTypeName<IFontFaceInterface_const_>(&local_158);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        pFVar20 = GetFullNameForCastLogError<UObject_const_>
                            (&local_148,(param_1->FontFaceAsset).field0_0x0.DebugPtr);
        if ((pFVar20->Data).ArrayNum != 0) {
          pwVar32 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar32,pwVar31);
      }
      uVar16 = (**(code **)(*plVar28 + 0x30))(plVar28);
    }
    pFVar24->AscentOverrideValue = iVar17 << 6;
    pFVar24->IsAscentOverridden = (bool)uVar16;
    if ((__return_storage_ptr__->Object == (FFreeTypeFace *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedPtr<FFreeTypeFace,1> *)(*pcVar6)();
      return pTVar19;
    }
    pUVar5 = (UObjectBaseUtility *)(param_1->FontFaceAsset).field0_0x0.DebugPtr;
    pFVar24 = __return_storage_ptr__->Object;
    if (pUVar5 != (UObjectBaseUtility *)0x0) {
      pUVar27 = UFontFaceInterface::StaticClass();
      plVar28 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar27);
      if (plVar28 == (longlong *)0x0) {
        pFVar20 = GetTypeName<IFontFaceInterface_const_>(&local_138);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        pFVar20 = GetFullNameForCastLogError<UObject_const_>
                            (&local_128,(param_1->FontFaceAsset).field0_0x0.DebugPtr);
        if ((pFVar20->Data).ArrayNum != 0) {
          pwVar32 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar32,pwVar31);
      }
      iVar18 = (**(code **)(*plVar28 + 0x48))(plVar28);
    }
    pUVar5 = (UObjectBaseUtility *)(param_1->FontFaceAsset).field0_0x0.DebugPtr;
    if (pUVar5 == (UObjectBaseUtility *)0x0) {
      uVar16 = false;
    }
    else {
      pUVar27 = UFontFaceInterface::StaticClass();
      plVar28 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar27);
      if (plVar28 == (longlong *)0x0) {
        pFVar20 = GetTypeName<IFontFaceInterface_const_>(&local_118);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        pFVar20 = GetFullNameForCastLogError<UObject_const_>
                            (&local_108,(param_1->FontFaceAsset).field0_0x0.DebugPtr);
        if ((pFVar20->Data).ArrayNum != 0) {
          pwVar32 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar32,pwVar31);
      }
      uVar16 = (**(code **)(*plVar28 + 0x40))(plVar28);
    }
    pFVar24->DescentOverrideValue = iVar18 << 6;
    pFVar24->IsDescentOverridden = (bool)uVar16;
    local_1d0 = param_1;
    local_1c8 = __return_storage_ptr__;
    TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FFontData_const_&,TSharedPtr<FFreeTypeFace,1>_const_&>_>
              (local_218,&local_228,(bool *)&local_1d0);
    if ((1 < local_308) && (4 < (byte)LogSlate._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  if (local_2e8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1f0.NameAndInfo.Index = FVar30.ComparisonIndex.Value;
      local_1f0.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_210);
      local_1f0.StatData.Pad[4] = '\0';
      local_1f0.StatData.Pad[5] = '\0';
      local_1f0.StatData.Pad[6] = '\0';
      local_1f0.StatData.Pad[7] = '\0';
      local_1f0.StatData.Pad[0] = local_210.s.LowPart._0_1_;
      local_1f0.StatData.Pad[1] = local_210.s.LowPart._1_1_;
      local_1f0.StatData.Pad[2] = local_210.s.LowPart._2_1_;
      local_1f0.StatData.Pad[3] = local_210.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1f0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_142490572:
  FMemScope::~FMemScope(&local_208);
  FLLMScope::~FLLMScope(&local_304);
  return __return_storage_ptr__;
}

// HandleCultureChanged @ 142497180

void __thiscall FCompositeFontCache::HandleCultureChanged(FCompositeFontCache *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->CompositeFontToCachedDataMap).field_0x28;
  puVar1 = &(this->CompositeFontToCachedDataMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->CompositeFontToCachedDataMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14249721d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14249721d:
  uVar10 = *(uint *)&(this->CompositeFontToCachedDataMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CompositeFontToCachedDataMap).field_0x8 -
                       *(int *)&(this->CompositeFontToCachedDataMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->CompositeFontToCachedDataMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->CompositeFontToCachedDataMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142497320;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar10 = local_res18 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142497320:
  while( true ) {
    if (*(int *)&(this->CompositeFontToCachedDataMap).field_0x8 -
        *(int *)&(this->CompositeFontToCachedDataMap).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FCompositeFont_const_*,TSharedPtr<FCachedCompositeFontData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)&this->CompositeFontToCachedDataMap +
            (longlong)TStack_60.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar8 + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FCachedCompositeFontData::RefreshFontRanges(*(FCachedCompositeFontData **)(lVar8 + 8));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// HasLoadedFontForCodepoint @ 1424978d0

bool __thiscall
FCompositeFontCache::HasLoadedFontForCodepoint
          (FCompositeFontCache *this,FSlateFontInfo *param_1,wchar32 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FCompositeFontCache *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FCompositeFont *pFVar8;
  FCachedCompositeFontData *pFVar9;
  ForElementType<TSharedPtr<FCachedTypefaceData,1>_> FVar10;
  FCachedTypefaceData *this_00;
  FFontData *pFVar11;
  longlong lVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  FCachedTypefaceData *pFVar14;
  FCachedTypefaceData *this_01;
  FCompositeFontCache *local_res20;
  FCompositeFontCache *local_48;
  wchar32 local_40;
  FCompositeFontCache **local_38;
  
  pFVar8 = FSlateFontInfo::GetCompositeFont(param_1);
  pFVar9 = GetCachedCompositeFont(this,pFVar8);
  pFVar14 = (FCachedTypefaceData *)0x0;
  this_01 = pFVar14;
  if (pFVar9 != (FCachedCompositeFontData *)0x0) {
    if (((pFVar9->CachedTypefaces).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    FVar10 = (pFVar9->CachedTypefaces).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)0x0) {
      FVar10 = (ForElementType<TSharedPtr<FCachedTypefaceData,1>_>)&pFVar9->CachedTypefaces;
    }
    this_01 = *(FCachedTypefaceData **)FVar10;
  }
  pFVar9 = GetCachedCompositeFont(this,pFVar8);
  if ((pFVar9 != (FCachedCompositeFontData *)0x0) &&
     (this_00 = FCachedCompositeFontData::GetTypefaceForCodepoint(pFVar9,param_2),
     this_00 != (FCachedTypefaceData *)0x0)) {
    local_38 = &local_res20;
    local_res20 = this;
    local_48 = this;
    local_40 = param_2;
    pFVar11 = FCachedTypefaceData::GetFontData(this_00,&param_1->TypefaceFontName);
    pFVar3 = local_res20;
    if (pFVar11 == (FFontData *)0x0) {
      return false;
    }
    uVar6 = ::GetTypeHash(pFVar11);
    iVar7 = TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FFontData>
                      ((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                        *)&pFVar3->FontFaceMap,uVar6,pFVar11);
    if ((iVar7 != -1) &&
       (lVar12 = (longlong)iVar7 * 0x40 + *(longlong *)&pFVar3->FontFaceMap, lVar12 != 0)) {
      pFVar14 = *(FCachedTypefaceData **)(lVar12 + 0x30);
      plVar1 = *(longlong **)(lVar12 + 0x28);
      if (pFVar14 != (FCachedTypefaceData *)0x0) {
        LOCK();
        *(int *)(pFVar14->CachedFontData).AllocatorInstance.InlineData =
             *(int *)(pFVar14->CachedFontData).AllocatorInstance.InlineData + 1;
        UNLOCK();
      }
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && ((char)plVar1[3] == '\0')) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        bVar4 = DoesFontDataSupportCodepoint(this,pFVar11,param_2);
        if (bVar4) {
          return true;
        }
        if ((this_00 != this_01) &&
           (pFVar11 = FCachedTypefaceData::GetFontData(this_01,&param_1->TypefaceFontName),
           pFVar11 != (FFontData *)0x0)) {
          pTVar13 = GetFontAttributes(this,pFVar11);
          pFVar11 = GetBestMatchFontForAttributes(this,this_00,pTVar13);
          bVar4 = `FCompositeFontCache::HasLoadedFontForCodepoint'::__l2::<lambda_2>::operator()
                            (&local_48,pFVar11);
          if (bVar4) {
            return true;
          }
        }
        pFVar11 = FCachedTypefaceData::GetPrimaryFontData(this_00);
        bVar4 = `FCompositeFontCache::HasLoadedFontForCodepoint'::__l2::<lambda_2>::operator()
                          (&local_48,pFVar11);
        return bVar4;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
    return true;
  }
  return false;
}

// Update @ 1424ab920

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCompositeFontCache::Update(FCompositeFontCache *this)

{
  int *piVar1;
  TArray<FAsyncTask<FAsyncLoadFontFaceData>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FAsyncTaskBase *this_00;
  FFreeTypeFace *this_01;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<FFontFaceData,1> *pTVar11;
  char *pcVar12;
  undefined7 uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  FFontFaceData *this_02;
  longlong local_res20;
  TSharedRef<FFontFaceData_const_,1> local_158;
  TSharedRef<FFontFaceData_const_,1> local_148;
  TSharedRef<FFontFaceData,1> local_138;
  FArchiveState local_128;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined8 local_50;
  
  if (0 < (this->LoadFontFaceTasks).ArrayNum) {
    uVar15 = 0;
    pTVar2 = &this->LoadFontFaceTasks;
    local_res20 = 0;
    bVar5 = false;
    do {
      uVar6 = 0;
      if ((int)uVar15 < (this->LoadFontFaceTasks).ArrayNum) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FAsyncTaskBase **)((pTVar2->AllocatorInstance).Data + local_res20);
      if ((this_00->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(this_00,false);
        FAsyncTaskBase::CheckIdle(this_00);
        FAsyncTaskBase::CheckIdle(this_00);
        pFVar8 = FFontData::GetFontFilename((FFontData *)(this_00 + 1));
        FAsyncTaskBase::CheckIdle(this_00);
        uVar6 = ::GetTypeHash((FFontData *)(this_00 + 1));
        pcVar12 = (char *)(ulonglong)uVar6;
        iVar7 = TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FFontData>
                          ((TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,1>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,1>,0>,FDefaultSetAllocator>
                            *)&this->FontFaceMap,uVar6,(FFontData *)(this_00 + 1));
        if ((iVar7 == -1) ||
           (lVar9 = (longlong)iVar7 * 0x40 + *(longlong *)&this->FontFaceMap, lVar9 == 0)) {
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar14 = *(TReferenceControllerBase<1> **)(lVar9 + 0x30);
          this_01 = *(FFreeTypeFace **)(lVar9 + 0x28);
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (this_01 != (FFreeTypeFace *)0x0) {
            if ((int)this_00[1]._padding_ < 1) {
              if ((this_01->bPendingAsyncLoad == false) &&
                 (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<8768772752418013626>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                                     ,0x1ba,"bPendingAsyncLoad"), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar5 = true;
              this_01->bPendingAsyncLoad = false;
            }
            else {
              bVar5 = ::Private::IsFontFileName(pFVar8);
              if ((bVar5) ||
                 (bVar5 = ::Private::IsFontFileData
                                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                     &this_00[1]._padding_), bVar5)) {
                lVar9 = this_00[1]._padding_;
                pTVar11 = FFontFaceData::MakeFontFaceData
                                    (&local_138,
                                     (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                     &this_00[1]._padding_);
                local_148.Object = pTVar11->Object;
                local_148.SharedReferenceCount.ReferenceController =
                     (pTVar11->SharedReferenceCount).ReferenceController;
                if (local_148.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_148.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FFreeTypeFace::CompleteAsyncLoad(this_01,this->FTLibrary,&local_148,(int)lVar9);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_138.SharedReferenceCount.ReferenceController);
                bVar5 = true;
              }
              else {
                pTVar10 = ::operator_new(0x30);
                if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
                  pTVar10 = (TReferenceControllerBase<1> *)0x0;
                  this_02 = (FFontFaceData *)&DAT_00000010;
                }
                else {
                  pTVar10->SharedReferenceCount = (atomic<int>)0x1;
                  this_02 = (FFontFaceData *)(pTVar10 + 1);
                  pTVar10->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar10->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_UFFontFaceData___00_SharedPointerInternals__6B_
                  ;
                  pTVar10[1]._padding_ = 0;
                  pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
                  pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
                  pTVar10[2]._padding_ = 0;
                  pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
                  pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
                  if (this_02 == (FFontFaceData *)0x0) {
                    pcVar12 = 
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                    ;
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L"");
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                }
                local_128._padding_ = 0;
                local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                local_128._40_8_ = 0;
                local_128.ArSerializingDefaults = 0;
                local_128.ArPortFlags = 0;
                local_128.ArMaxSerializeSize = 0;
                local_128.ArUEVer.FileVersionUE4 = 0;
                local_128.ArUEVer.FileVersionUE5 = 0;
                local_128.ArLicenseeUEVer = 0;
                local_128.ArEngineVer.Major = 0;
                local_128.ArEngineVer.Minor = 0;
                local_128.ArEngineVer.Patch = 0;
                local_128.ArEngineVer._6_2_ = 0;
                local_128.ArEngineVer.Changelist = 0;
                local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
                local_128.SerializedProperty = (FProperty *)0x0;
                local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                local_128.bCustomVersionsAreReset = false;
                local_128._129_7_ = 0;
                local_128.NextProxy = (FArchiveState *)0x0;
                FArchiveState::FArchiveState(&local_128);
                local_98 = 0;
                local_128._padding_ = (longlong)&___7FMemoryReader__6B_;
                local_90 = &this_00[1]._padding_;
                uVar13 = (undefined7)((ulonglong)pcVar12 >> 8);
                local_88 = 0x7fffffffffffffff;
                FArchiveState::SetIsLoading(&local_128,true);
                (**(code **)(local_128._padding_ + 0x108))(&local_128,CONCAT71(uVar13,1));
                FFontFaceData::Serialize(this_02,(FArchive *)&local_128);
                lVar9 = this_00[1]._padding_;
                if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar10->SharedReferenceCount =
                       (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_158.Object = this_02;
                local_158.SharedReferenceCount.ReferenceController = pTVar10;
                FFreeTypeFace::CompleteAsyncLoad(this_01,this->FTLibrary,&local_158,(int)lVar9);
                FArchive::~FArchive((FArchive *)&local_128);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar10);
                bVar5 = true;
              }
            }
          }
        }
        (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
        uVar6 = 0;
        if ((int)uVar15 < (this->LoadFontFaceTasks).ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8;
        iVar7 = ~uVar15 + (this->LoadFontFaceTasks).ArrayNum;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->LoadFontFaceTasks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->LoadFontFaceTasks).ArrayNum,
                   &(this->LoadFontFaceTasks).ArrayMax);
        uVar15 = uVar15 - 1;
        local_res20 = local_res20 + -8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      local_res20 = local_res20 + 8;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (this->LoadFontFaceTasks).ArrayNum);
    if (bVar5) {
      local_50 = 0;
      local_68 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
      local_60 = `FCompositeFontCache::Update'::__l26::<lambda_1>::<lambda_invoker_cdecl>;
      local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                    Call;
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    }
  }
  return;
}

