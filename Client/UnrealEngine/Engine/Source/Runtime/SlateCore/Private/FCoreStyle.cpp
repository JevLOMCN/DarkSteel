// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 15

// Create @ 142568d50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ISlateStyle,1> * __cdecl
FCoreStyle::Create(TSharedRef<ISlateStyle,1> *__return_storage_ptr__,FName *param_1)

{
  bool bVar1;
  TRawPtrProxy<FSlateCoreStyle> TVar2;
  FString *pFVar3;
  TSharedRef<FSlateCoreStyle,1> local_90;
  FSlateCoreStyle *local_80;
  FSlateCoreStyle *local_78;
  FSlateCoreStyle *local_70;
  FSlateCoreStyle *local_68;
  FString *local_60;
  code *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 local_44;
  FString local_40;
  undefined1 local_30 [24];
  FString local_18;
  
  local_80 = ::operator_new(0x470);
  if (local_80 == (FSlateCoreStyle *)0x0) {
    local_78 = (FSlateCoreStyle *)0x0;
  }
  else {
    local_78 = FSlateCoreStyle::FSlateCoreStyle(local_80,param_1);
  }
  TVar2 = MakeShareable<FSlateCoreStyle>((FSlateCoreStyle *)local_30);
  TSharedRef<FSlateCoreStyle,1>::TSharedRef<FSlateCoreStyle,1><FSlateCoreStyle>
            (&local_90,(TRawPtrProxy<FSlateCoreStyle> *)TVar2.Object);
  local_70 = TSharedRef<FSlateCoreStyle,1>::operator->(&local_90);
  local_58 = *(code **)(local_70->_padding_ + 0xc0);
  pFVar3 = FPaths::EngineContentDir(&local_18);
  local_60 = ::operator/((FString *)(local_30 + 8),pFVar3,L"Slate");
  (*local_58)(local_70,local_60);
  ::FString::~FString((FString *)(local_30 + 8));
  ::FString::~FString(&local_18);
  local_68 = TSharedRef<FSlateCoreStyle,1>::operator->(&local_90);
  local_50 = *(code **)(local_68->_padding_ + 0xe8);
  (*local_50)(local_68,&local_40,L"Checkerboard",L".png");
  bVar1 = FPaths::FileExists(&local_40);
  if (bVar1) {
    TSharedRef<ISlateStyle,1>::TSharedRef<ISlateStyle,1><FSlateCoreStyle>
              (__return_storage_ptr__,&local_90);
    ::FString::~FString(&local_40);
    TSharedRef<FSlateCoreStyle,1>::~TSharedRef<FSlateCoreStyle,1>(&local_90);
  }
  else {
    local_48 = 0;
    local_44 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    TSharedRef<ISlateStyle,1>::TSharedRef<ISlateStyle,1><FSlateCoreStyle>
              (__return_storage_ptr__,&local_90);
    ::FString::~FString(&local_40);
    TSharedRef<FSlateCoreStyle,1>::~TSharedRef<FSlateCoreStyle,1>(&local_90);
  }
  return __return_storage_ptr__;
}

// GetDefaultFont @ 142580800

TSharedRef<FCompositeFont_const_,1> * __cdecl
FCoreStyle::GetDefaultFont(TSharedRef<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  FLegacySlateFontInfoCache *this;
  
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultFontStyle @ 142580890

FSlateFontInfo * __cdecl
FCoreStyle::GetDefaultFontStyle
          (FSlateFontInfo *__return_storage_ptr__,FName param_1,float param_2,
          FFontOutlineSettings *param_3)

{
  FLegacySlateFontInfoCache *this;
  FName local_res10 [3];
  TSharedRef<FCompositeFont_const_,1> local_38;
  TSharedPtr<FCompositeFont_const_,1> local_28 [2];
  
  local_res10[0] = param_1;
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,&local_38);
  local_28[0].Object = local_38.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,local_28,param_2,local_res10,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142580c80

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,FName param_2
          ,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x70))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,0);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142580d20

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,
          UTexture2D *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x60))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,0);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142580dc0

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,char *param_2
          ,UTexture2D *param_3,FName param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x68))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,param_4,0);
  return __return_storage_ptr__;
}

// GetIconFont @ 142581d50

TSharedRef<FCompositeFont_const_,1> * __cdecl
FCoreStyle::GetIconFont(TSharedRef<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  FLegacySlateFontInfoCache *this;
  
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRegularIconFontStyle @ 142582eb0

FSlateFontInfo * __cdecl
FCoreStyle::GetRegularIconFontStyle
          (FSlateFontInfo *__return_storage_ptr__,float param_1,FFontOutlineSettings *param_2)

{
  FLegacySlateFontInfoCache *this;
  FName local_res8;
  TSharedRef<FCompositeFont_const_,1> local_38;
  TSharedPtr<FCompositeFont_const_,1> local_28 [2];
  
  ::FName::FName(&local_res8,"Regular");
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,&local_38);
  local_28[0].Object = local_38.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,local_28,param_1,&local_res8,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ResetToDefault @ 14258f610

void __cdecl FCoreStyle::ResetToDefault(void)

{
  TSharedRef<ISlateStyle,1> *pTVar1;
  FName local_res8 [4];
  FSharedReferencer<1> local_20;
  TSharedRef<ISlateStyle,1> local_18;
  
  ::FName::FName(local_res8,"CoreStyle");
  pTVar1 = Create(&local_18,local_res8);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle(Instance.Object);
  }
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  Instance.Object = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Instance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::RegisterSlateStyle(Instance.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  ResetToDefault();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetFocusBrush @ 142590c40

void __cdecl FCoreStyle::SetFocusBrush(FSlateBrush *param_1)

{
  code *pcVar1;
  ISlateStyle *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res10;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  this = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (ISlateStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  FSlateStyleRegistry::UnRegisterSlateStyle(this);
  pFVar4 = ::FName::FName(&local_res10,"FocusRectangle");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)this,*pFVar4,param_1);
  FSlateStyleRegistry::RegisterSlateStyle(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

// SetInactiveSelectionColor @ 1425916c0

void __cdecl FCoreStyle::SetInactiveSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\CoreStyle.cpp"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x88] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x88] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x88] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x88] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetPressedSelectionColor @ 142591b10

void __cdecl FCoreStyle::SetPressedSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\CoreStyle.cpp"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x8a] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x8a] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x8a] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x8a] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetSelectionColor @ 142591f50

void __cdecl FCoreStyle::SetSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\CoreStyle.cpp"
                       ,0x97,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x86] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x86] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x86] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x86] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetSelectorColor @ 1425921c0

void __cdecl FCoreStyle::SetSelectorColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\CoreStyle.cpp"
                       ,0x8e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x84] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x84] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x84] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x84] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetStyle @ 142592430

void __cdecl FCoreStyle::SetStyle(TSharedRef<ISlateStyle,1> *param_1)

{
  FSharedReferencer<1> local_10;
  
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle(Instance.Object);
  }
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  Instance.Object = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Instance.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::RegisterSlateStyle(Instance.Object);
    return;
  }
  ResetToDefault();
  return;
}

