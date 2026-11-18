// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 147ba2bc0

UClass * __cdecl UFont::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UFont.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Font",&Z_Registration_Info_UClass_UFont.InnerSingleton,
               StaticRegisterNativesUFont,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFont>,InternalVTableHelperCtorCaller<UFont>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFont.InnerSingleton;
}

// UFont @ 147bbc310

UFont * __thiscall UFont::UFont(UFont *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->RuntimeFontSource = Asset;
  (this->Characters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Characters).ArrayNum = 0;
  (this->Characters).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IFontProviderInterface__;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  FFontImportOptionsData::FFontImportOptionsData(&this->ImportOptions);
  (this->MaxCharHeight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxCharHeight).ArrayNum = 0;
  (this->MaxCharHeight).ArrayMax = 0;
  (this->LegacyFontName).ComparisonIndex = 0;
  (this->LegacyFontName).Number = 0;
  (this->CompositeFont).DefaultTypeface.Fonts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompositeFont).DefaultTypeface.Fonts.ArrayNum = 0;
  (this->CompositeFont).DefaultTypeface.Fonts.ArrayMax = 0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.ArrayNum = 0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.ArrayMax = 0;
  (this->CompositeFont).SubTypefaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeFont).SubTypefaces.ArrayNum = 0;
  (this->CompositeFont).SubTypefaces.ArrayMax = 0;
  (this->CompositeFont).bEnableAscentDescentOverride = true;
  *(undefined8 *)&this->CharRemap = 0;
  *(undefined8 *)&(this->CharRemap).field_0x8 = 0;
  *(undefined8 *)&(this->CharRemap).field_0x20 = 0;
  (this->CompositeFont).FallbackTypeface.ScalingFactor = 1.0;
  *(undefined4 *)&(this->CharRemap).field_0x28 = 0;
  *(undefined4 *)&(this->CharRemap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharRemap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CharRemap).field_0x34 = 0;
  *(undefined8 *)&(this->CharRemap).field_0x40 = 0;
  *(undefined4 *)&(this->CharRemap).field_0x48 = 0;
  return this;
}

// UFont @ 147bbc400

UFont * __thiscall UFont::UFont(UFont *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->RuntimeFontSource = Asset;
  (this->Characters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Characters).ArrayNum = 0;
  (this->Characters).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IFontProviderInterface__;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  FFontImportOptionsData::FFontImportOptionsData(&this->ImportOptions);
  (this->MaxCharHeight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxCharHeight).ArrayNum = 0;
  (this->MaxCharHeight).ArrayMax = 0;
  (this->LegacyFontName).ComparisonIndex = 0;
  (this->LegacyFontName).Number = 0;
  (this->CompositeFont).DefaultTypeface.Fonts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompositeFont).DefaultTypeface.Fonts.ArrayNum = 0;
  (this->CompositeFont).DefaultTypeface.Fonts.ArrayMax = 0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.ArrayNum = 0;
  (this->CompositeFont).FallbackTypeface.Typeface.Fonts.ArrayMax = 0;
  (this->CompositeFont).SubTypefaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeFont).SubTypefaces.ArrayNum = 0;
  (this->CompositeFont).SubTypefaces.ArrayMax = 0;
  (this->CompositeFont).bEnableAscentDescentOverride = true;
  *(undefined8 *)&this->CharRemap = 0;
  *(undefined8 *)&(this->CharRemap).field_0x8 = 0;
  *(undefined8 *)&(this->CharRemap).field_0x20 = 0;
  (this->CompositeFont).FallbackTypeface.ScalingFactor = 1.0;
  *(undefined4 *)&(this->CharRemap).field_0x28 = 0;
  *(undefined4 *)&(this->CharRemap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharRemap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CharRemap).field_0x34 = 0;
  *(undefined8 *)&(this->CharRemap).field_0x40 = 0;
  *(undefined4 *)&(this->CharRemap).field_0x48 = 0;
  this->ScalingFactor = 1.0;
  this->LegacyFontSize = 9;
  return this;
}

// ~UFont @ 147bbf290

void __thiscall UFont::~UFont(UFont *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IFontProviderInterface__;
  *(undefined4 *)&(this->CharRemap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CharRemap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CharRemap);
  FCompositeFont::~FCompositeFont(&this->CompositeFont);
  pFVar2 = (this->MaxCharHeight).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportOptions).CharsFileWildcard.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportOptions).CharsFilePath.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportOptions).UnicodeRange.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportOptions).Chars.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportOptions).FontName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Textures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Characters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IFontProviderInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147bc4190

void __thiscall
`UFont::GetResourceSizeEx'::__l5::<lambda_1>::operator()(void *this,FTypeface *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  EFontLoadingPolicy EVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  IFileManager *pIVar8;
  FString *pFVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  FFontData *this_00;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->Fonts).AllocatorInstance.Data;
  iVar1 = (param_1->Fonts).ArrayNum;
  pFVar12 = pFVar3 + (longlong)iVar1 * 0x30;
  do {
    this_00 = (FFontData *)(pFVar3 + 8);
    if ((param_1->Fonts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTypefaceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FScriptContainerElement *)&this_00[-1].FontFaceAsset == pFVar12) {
      return;
    }
    pUVar6 = FFontData::GetFontFaceAsset(this_00);
    if (pUVar6 == (UObject *)0x0) {
LAB_147bc4213:
      EVar5 = FFontData::GetLoadingPolicy(this_00);
      if (EVar5 == LazyLoad) {
        pIVar8 = IFileManager::Get();
        pcVar4 = *(code **)((longlong)*pIVar8 + 0x110);
        pFVar9 = FFontData::GetFontFilename(this_00);
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        uVar10 = (*pcVar4)(pIVar8,pwVar11);
        if (0 < (longlong)uVar10) {
          FResourceSizeEx::AddDedicatedSystemMemoryBytes(*(FResourceSizeEx **)this,uVar10);
        }
      }
    }
    else {
      pUVar7 = UFontFace::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) goto LAB_147bc4213;
    }
    pFVar3 = (FScriptContainerElement *)&this_00[1].FontFilename;
  } while( true );
}

// BeginDestroy @ 147bcac70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UFont::BeginDestroy(UFont *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  TSharedRef<FSlateFontCache,1> local_18;
  
  if ((this->FontCacheType == Runtime) &&
     (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    pFVar4 = FSlateApplication::Get();
    lVar1 = *(longlong *)&pFVar4->field_0x60;
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar1 + 8),&local_18);
      FSlateFontCache::FlushCompositeFont(local_18.Object,&this->CompositeFont);
      FSlateFontCache::FlushObject(local_18.Object,(UObject *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CacheCharacterCountAndMaxCharHeight @ 147bcb6b0

void __thiscall UFont::CacheCharacterCountAndMaxCharHeight(UFont *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int local_18 [4];
  
  pTVar2 = &this->MaxCharHeight;
  this->NumCharacters = (this->Characters).ArrayNum;
  piVar1 = &(this->MaxCharHeight).ArrayMax;
  iVar7 = *piVar1;
  (this->MaxCharHeight).ArrayNum = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    iVar7 = *piVar1;
  }
  uVar8 = 0;
  local_18[0] = 1;
  if (0 < this->NumCharacters) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Characters).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = *(int *)((this->Characters).AllocatorInstance.Data + lVar9 + 0xc);
      if (iVar7 < local_18[0]) {
        iVar7 = local_18[0];
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
      local_18[0] = iVar7;
    } while ((int)uVar8 < this->NumCharacters);
    iVar7 = *piVar1;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)iVar7 * 4)) {
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
  iVar7 = (this->MaxCharHeight).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MaxCharHeight).ArrayNum = iVar7 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
  return;
}

// GetCharHorizontalOffset @ 147bdecd0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall UFont::GetCharHorizontalOffset(UFont *this,wchar_t param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  FEngineFontServices *this_00;
  FCharacterList *this_01;
  FCharacterEntry *pFVar4;
  TSharedPtr<FSlateFontCache,1> local_98;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  if (this->FontCacheType == Runtime) {
    this_00 = FEngineFontServices::Get();
    FEngineFontServices::GetFontCache(this_00,&local_98);
    if (local_98.Object != (FSlateFontCache *)0x0) {
      local_88.OutlineSize = 0;
      local_88.bMiteredCorners = false;
      local_88.bSeparateFillAlpha = false;
      local_88.bApplyOutlineToDropShadows = false;
      local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
      local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
      FSlateFontInfo::FSlateFontInfo
                (&local_68,(UObject *)this,(float)this->LegacyFontSize,&this->LegacyFontName,
                 &local_88);
      if (local_98.Object == (FSlateFontCache *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          sVar3 = (*pcVar1)();
          return sVar3;
        }
      }
      this_01 = FSlateFontCache::GetCharacterList
                          (local_98.Object,&local_68,__real_3f800000,
                           &FFontOutlineSettings::NoOutline);
      pFVar4 = FCharacterList::GetCharacter(this_01,param_1,local_68.FontFallback);
      sVar3 = pFVar4->HorizontalOffset;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      return sVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  return 0;
}

// GetCharKerning @ 147bdee10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall UFont::GetCharKerning(UFont *this,wchar_t param_1,wchar_t param_2)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  FEngineFontServices *this_00;
  FCharacterList *this_01;
  TSharedPtr<FSlateFontCache,1> local_98;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  if (this->FontCacheType == Offline) {
    sVar3 = (schar)this->Kerning;
  }
  else {
    if (this->FontCacheType == Runtime) {
      this_00 = FEngineFontServices::Get();
      FEngineFontServices::GetFontCache(this_00,&local_98);
      if (local_98.Object != (FSlateFontCache *)0x0) {
        local_88.OutlineSize = 0;
        local_88.bMiteredCorners = false;
        local_88.bSeparateFillAlpha = false;
        local_88.bApplyOutlineToDropShadows = false;
        local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
        local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
        FSlateFontInfo::FSlateFontInfo
                  (&local_68,(UObject *)this,(float)this->LegacyFontSize,&this->LegacyFontName,
                   &local_88);
        if ((local_98.Object == (FSlateFontCache *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          sVar3 = (*pcVar1)();
          return sVar3;
        }
        this_01 = FSlateFontCache::GetCharacterList
                            (local_98.Object,&local_68,__real_3f800000,
                             &FFontOutlineSettings::NoOutline);
        sVar3 = FCharacterList::GetKerning(this_01,param_1,param_2,local_68.FontFallback);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        return sVar3;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    sVar3 = '\0';
  }
  return sVar3;
}

// GetCharSize @ 147bdef60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall UFont::GetCharSize(UFont *this,wchar_t param_1,float *param_2,float *param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  FEngineFontServices *this_00;
  FCharacterList *this_01;
  FCharacterEntry *pFVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t local_res8 [4];
  ushort local_res18 [4];
  TSharedPtr<FSlateFontCache,1> local_b8;
  FFontOutlineSettings local_a8;
  FSlateFontInfo local_88;
  
  *param_3 = 0.0;
  *param_2 = 0.0;
  if (this->FontCacheType != Offline) {
    if (this->FontCacheType != Runtime) {
      return;
    }
    this_00 = FEngineFontServices::Get();
    FEngineFontServices::GetFontCache(this_00,&local_b8);
    if (local_b8.Object != (FSlateFontCache *)0x0) {
      local_a8.OutlineSize = 0;
      local_a8.bMiteredCorners = false;
      local_a8.bSeparateFillAlpha = false;
      local_a8.bApplyOutlineToDropShadows = false;
      local_a8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
      local_a8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
      FSlateFontInfo::FSlateFontInfo
                (&local_88,(UObject *)this,(float)this->LegacyFontSize,&this->LegacyFontName,
                 &local_a8);
      if ((local_b8.Object == (FSlateFontCache *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = FSlateFontCache::GetCharacterList
                          (local_b8.Object,&local_88,__real_3f800000,
                           &FFontOutlineSettings::NoOutline);
      pFVar7 = FCharacterList::GetCharacter(this_01,param_1,local_88.FontFallback);
      *param_2 = (float)(int)pFVar7->XAdvance;
      uVar5 = FCharacterList::GetMaxHeight(this_01);
      *param_3 = (float)uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    return;
  }
  local_res8[0] = param_1;
  FGenericPlatformString::Memcpy(local_res18,local_res8,2);
  if (this->IsRemapped == 0) {
    if (((int)(uint)local_res18[0] < this->NumCharacters) &&
       ((int)(uint)local_res18[0] < (this->Characters).ArrayNum)) {
      if (((this->Characters).ArrayNum <= (int)(uint)local_res18[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)((this->Characters).AllocatorInstance.Data +
                   (ulonglong)local_res18[0] * 0x18 + 0xc) != 0) || (local_res18[0] < 0x20))
      goto LAB_147bdf178;
    }
  }
  else {
    pwVar8 = (wchar_t *)
             TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
             ::Find((TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                     *)&this->CharRemap,local_res18[0]);
    if (pwVar8 != (wchar_t *)0x0) {
      param_1 = *pwVar8;
      goto LAB_147bdf178;
    }
  }
  param_1 = L'\x7f';
LAB_147bdf178:
  uVar10 = (ulonglong)(ushort)param_1;
  if ((int)(uint)(ushort)param_1 < (this->Characters).ArrayNum) {
    pFVar2 = (this->Characters).AllocatorInstance.Data;
    FVar1 = pFVar2[uVar10 * 0x18 + 0x10];
    if (((int)(uint)(byte)FVar1 < (this->Textures).ArrayNum) &&
       (*(longlong *)((this->Textures).AllocatorInstance.Data + (ulonglong)(byte)FVar1 * 8) != 0)) {
      *param_2 = (float)*(int *)(pFVar2 + uVar10 * 0x18 + 8);
      uVar6 = (uint)((longlong)uVar10 / (longlong)this->NumCharacters);
      uVar9 = 0;
      if ((int)uVar6 < (this->MaxCharHeight).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *param_3 = (float)*(int *)((this->MaxCharHeight).AllocatorInstance.Data +
                                (longlong)(int)uVar6 * 4);
    }
  }
  return;
}

// GetCompositeFont @ 147bdf2f0

FCompositeFont * __thiscall UFont::GetCompositeFont(UFont *this)

{
  char cVar1;
  FCompositeFont *pFVar2;
  TSharedRef<FCompositeFont_const_,1> *pTVar3;
  TSharedRef<FCompositeFont_const_,1> local_18;
  
  if ((char)this->_padding_ == '\x01') {
    cVar1 = *(char *)((longlong)&this->_padding_ + 1);
    if (cVar1 == '\0') {
      return (FCompositeFont *)&this->NumCharacters;
    }
    if (cVar1 == '\x01') {
      pTVar3 = FCoreStyle::GetDefaultFont(&local_18);
      pFVar2 = pTVar3->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return pFVar2;
    }
  }
  return (FCompositeFont *)0x0;
}

// GetLegacySlateFontInfo @ 147be0ca0

FSlateFontInfo * __thiscall
UFont::GetLegacySlateFontInfo(UFont *this,FSlateFontInfo *__return_storage_ptr__)

{
  FFontOutlineSettings local_28;
  
  local_28.OutlineSize = 0;
  local_28.bMiteredCorners = false;
  local_28.bSeparateFillAlpha = false;
  local_28.bApplyOutlineToDropShadows = false;
  local_28.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_28.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  FSlateFontInfo::FSlateFontInfo
            (__return_storage_ptr__,(UObject *)this,(float)this->LegacyFontSize,
             &this->LegacyFontName,&local_28);
  return __return_storage_ptr__;
}

// GetMaxCharHeight @ 147be2d80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall UFont::GetMaxCharHeight(UFont *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  FEngineFontServices *this_00;
  FCharacterList *this_01;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  FName local_res8;
  TSharedPtr<FSlateFontCache,1> local_a8;
  FFontOutlineSettings local_98;
  FSlateFontInfo local_78;
  
  fVar9 = 0.0;
  if (this->FontCacheType != Offline) {
    if (this->FontCacheType != Runtime) {
      return 0.0;
    }
    this_00 = FEngineFontServices::Get();
    FEngineFontServices::GetFontCache(this_00,&local_a8);
    if (local_a8.Object != (FSlateFontCache *)0x0) {
      local_98.OutlineSize = 0;
      local_98.bMiteredCorners = false;
      local_98.bSeparateFillAlpha = false;
      local_98.bApplyOutlineToDropShadows = false;
      local_98.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
      local_98.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FSlateFontInfo::FSlateFontInfo
                (&local_78,(UObject *)this,(float)this->LegacyFontSize,&local_res8,&local_98);
      if ((local_a8.Object == (FSlateFontCache *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      this_01 = FSlateFontCache::GetCharacterList
                          (local_a8.Object,&local_78,__real_3f800000,
                           &FFontOutlineSettings::NoOutline);
      uVar4 = FCharacterList::GetMaxHeight(this_01);
      fVar9 = (float)uVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CompositeFont.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    return fVar9;
  }
  uVar6 = 0;
  iVar7 = 1;
  if (0 < (this->MaxCharHeight).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->MaxCharHeight).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      iVar1 = *(int *)((this->MaxCharHeight).AllocatorInstance.Data + lVar8);
      if (iVar1 < iVar7) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < (this->MaxCharHeight).ArrayNum);
  }
  return (float)iVar7;
}

// GetPrivateStaticClass @ 147be5000

UClass * __cdecl UFont::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFont.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Font",&Z_Registration_Info_UClass_UFont.InnerSingleton,
               StaticRegisterNativesUFont,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFont>,InternalVTableHelperCtorCaller<UFont>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFont.InnerSingleton;
}

// GetResourceSizeEx @ 147be6b70

void __thiscall UFont::GetResourceSizeEx(UFont *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FFontData *this_00;
  EFontLoadingPolicy EVar6;
  Type TVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  IFileManager *pIVar10;
  FString *pFVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FResourceSizeEx *local_res8;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if ((this->FontCacheType == Runtime) &&
     (TVar7 = FResourceSizeEx::GetResourceSizeMode(param_1), TVar7 == EstimatedTotal)) {
    local_res8 = param_1;
    `UFont::GetResourceSizeEx'::__l5::<lambda_1>::operator()
              (&local_res8,&(this->CompositeFont).DefaultTypeface);
    uVar1 = (this->CompositeFont).SubTypefaces.ArrayNum;
    uVar13 = (ulonglong)(int)uVar1;
    pFVar16 = (this->CompositeFont).SubTypefaces.AllocatorInstance.Data;
    pFVar15 = pFVar16 + uVar13 * 0x38;
    while( true ) {
      if ((this->CompositeFont).SubTypefaces.ArrayNum != (int)uVar13) {
        `TCheckedPointerIterator<FCompositeSubFont_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar16 == pFVar15) break;
      lVar4 = *(longlong *)pFVar16;
      iVar2 = *(int *)(pFVar16 + 8);
      lVar17 = lVar4 + (longlong)iVar2 * 0x30;
      while( true ) {
        this_00 = (FFontData *)(lVar4 + 8);
        if (*(int *)(pFVar16 + 8) != iVar2) {
          `TCheckedPointerIterator<FTypefaceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (lVar4 == lVar17) break;
        pUVar8 = FFontData::GetFontFaceAsset(this_00);
        if (pUVar8 == (UObject *)0x0) {
LAB_147be6c70:
          EVar6 = FFontData::GetLoadingPolicy(this_00);
          if (EVar6 == LazyLoad) {
            pIVar10 = IFileManager::Get();
            pcVar5 = *(code **)((longlong)*pIVar10 + 0x110);
            pFVar11 = FFontData::GetFontFilename(this_00);
            if ((pFVar11->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
            }
            uVar12 = (*pcVar5)(pIVar10,pwVar14);
            if (0 < (longlong)uVar12) {
              FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar12);
            }
          }
        }
        else {
          pUVar9 = UFontFace::StaticClass();
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) goto LAB_147be6c70;
        }
        lVar4 = lVar4 + 0x30;
      }
      pFVar16 = pFVar16 + 0x38;
      uVar13 = (ulonglong)uVar1;
    }
  }
  return;
}

// GetStringHeightAndWidth @ 147bea040

void __thiscall
UFont::GetStringHeightAndWidth(UFont *this,FString *param_1,int *param_2,int *param_3)

{
  if ((param_1->Data).ArrayNum != 0) {
    GetStringHeightAndWidth(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2,param_3);
    return;
  }
  GetStringHeightAndWidth(this,L"",param_2,param_3);
  return;
}

// GetStringHeightAndWidth @ 147bea060

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
UFont::GetStringHeightAndWidth(UFont *this,wchar_t *param_1,int *param_2,int *param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  FEngineFontServices *this_00;
  FCharacterList *this_01;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  float local_res18 [4];
  TSharedPtr<FSlateFontCache,1> local_f8;
  FFontOutlineSettings local_e8;
  FSlateFontInfo local_c8;
  
  fVar6 = __real_3f800000;
  wVar1 = *param_1;
  fVar11 = 0.0;
  fVar10 = 0.0;
  pwVar5 = (wchar_t *)0x0;
  do {
    pwVar4 = param_1;
    if (wVar1 == L'\0') {
      fVar10 = __real_bf000000 - (fVar10 + fVar10);
      *param_3 = -((int)ROUND(__real_bf000000 - (fVar11 + fVar11)) >> 1);
      *param_2 = -((int)ROUND(fVar10) >> 1);
      return;
    }
    GetCharSize(this,wVar1,local_res10,local_res18);
    cVar8 = '\0';
    if (pwVar5 != (wchar_t *)0x0) {
      wVar1 = *pwVar4;
      wVar2 = *pwVar5;
      if (this->FontCacheType == Offline) {
        cVar8 = (char)this->Kerning;
      }
      else {
        if (this->FontCacheType == Runtime) {
          this_00 = FEngineFontServices::Get();
          FEngineFontServices::GetFontCache(this_00,&local_f8);
          if (local_f8.Object != (FSlateFontCache *)0x0) {
            local_e8.OutlineSize = 0;
            local_e8.bMiteredCorners = false;
            local_e8.bSeparateFillAlpha = false;
            local_e8.bApplyOutlineToDropShadows = false;
            local_e8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
            local_e8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
            FSlateFontInfo::FSlateFontInfo
                      (&local_c8,(UObject *)this,(float)this->LegacyFontSize,&this->LegacyFontName,
                       &local_e8);
            if ((local_f8.Object == (FSlateFontCache *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_01 = FSlateFontCache::GetCharacterList
                                (local_f8.Object,&local_c8,fVar6,&FFontOutlineSettings::NoOutline);
            cVar8 = FCharacterList::GetKerning(this_01,wVar2,wVar1,local_c8.FontFallback);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.SharedReferenceCount.ReferenceController);
            goto LAB_147bea1f8;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        cVar8 = '\0';
      }
    }
LAB_147bea1f8:
    fVar9 = local_res18[0];
    if (local_res18[0] <= fVar10) {
      fVar9 = fVar10;
    }
    wVar1 = pwVar4[1];
    fVar11 = fVar11 + (float)(int)cVar8 + local_res10[0];
    fVar10 = fVar9;
    param_1 = pwVar4 + 1;
    pwVar5 = pwVar4;
  } while( true );
}

// GetStringHeightSize @ 147bea2b0

int __thiscall UFont::GetStringHeightSize(UFont *this,wchar_t *param_1)

{
  int local_res18 [2];
  int local_res20 [2];
  
  GetStringHeightAndWidth(this,param_1,local_res18,local_res20);
  return local_res18[0];
}

// GetStringSize @ 147bea2e0

int __thiscall UFont::GetStringSize(UFont *this,wchar_t *param_1)

{
  int local_res18 [2];
  int local_res20 [2];
  
  GetStringHeightAndWidth(this,param_1,local_res20,local_res18);
  return local_res18[0];
}

// PostLoad @ 147bf6d20

void __thiscall UFont::PostLoad(UFont *this)

{
  UObjectBase *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  UObject::PostLoad((UObject *)this);
  CacheCharacterCountAndMaxCharHeight(this);
  uVar4 = 0;
  if (0 < (this->Textures).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Textures).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      this_00 = *(UObjectBase **)((this->Textures).AllocatorInstance.Data + lVar5);
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AtomicallySetFlags(this_00,RF_Public);
        *(undefined1 *)((longlong)&this_00[6].NamePrivate.Name.Number + 3) = 0x10;
        UObject::ConditionalPostLoad((UObject *)this_00);
        if (((char)this_00[6].NamePrivate.Name.ComparisonIndex.Value == '\x04') &&
           ((*(byte *)((longlong)&this_00[6].OuterPrivate.ObjectPtr.field0_0x0 + 6) & 1) == 0)) {
          *(undefined1 *)&this_00[6].NamePrivate.Name.ComparisonIndex.Value = 9;
          (**(code **)(this_00->_padding_ + 0x328))(this_00);
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Textures).ArrayNum);
  }
  return;
}

// RemapChar @ 147bfc510

wchar_t __thiscall UFont::RemapChar(UFont *this,wchar_t param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  ushort local_res8 [4];
  wchar_t local_res10 [4];
  
  local_res10[0] = param_1;
  FGenericPlatformString::Memcpy(local_res8,local_res10,2);
  if (this->IsRemapped == 0) {
    if (((int)(uint)local_res8[0] < this->NumCharacters) &&
       ((int)(uint)local_res8[0] < (this->Characters).ArrayNum)) {
      if ((this->Characters).ArrayNum <= (int)(uint)local_res8[0]) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          wVar3 = (*pcVar1)();
          return wVar3;
        }
      }
      if (*(int *)((this->Characters).AllocatorInstance.Data + (ulonglong)local_res8[0] * 0x18 + 0xc
                  ) == 0) {
        wVar3 = L'\x7f';
        if (local_res8[0] < 0x20) {
          wVar3 = param_1;
        }
        return wVar3;
      }
      return param_1;
    }
  }
  else {
    pwVar4 = (wchar_t *)
             TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
             ::Find((TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                     *)&this->CharRemap,local_res8[0]);
    if (pwVar4 != (wchar_t *)0x0) {
      return *pwVar4;
    }
  }
  return L'\x7f';
}

// Serialize @ 147bff530

void __thiscall UFont::Serialize(UFont *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                      *)&this->CharRemap);
  return;
}

// Serialize @ 147bff570

void __thiscall UFont::Serialize(UFont *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
            (pFVar1,(TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                     *)&this->CharRemap);
  return;
}

// StaticRegisterNativesUFont @ 147c035c0

void __cdecl UFont::StaticRegisterNativesUFont(void)

{
  return;
}

// _getUObject @ 147c12260

UObject * __thiscall UFont::_getUObject(UFont *this)

{
  return (UObject *)&this[-1].CharRemap.field_0x28;
}

