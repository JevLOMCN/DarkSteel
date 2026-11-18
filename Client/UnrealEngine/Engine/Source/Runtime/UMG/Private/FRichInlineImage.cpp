// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// CreateDecoratorWidget @ 1469bcce0

TSharedPtr<SWidget,1> * __thiscall
FRichInlineImage::CreateDecoratorWidget
          (FRichInlineImage *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  URichTextBlockImageDecorator *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<SWidget,1> *pTVar6;
  FName *pFVar7;
  UEnum *this_00;
  long64 lVar8;
  FArguments *pFVar9;
  TSharedRef<SRichInlineImage,1> *pTVar10;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FString *pFVar15;
  longlong *this_01;
  FLLMScope local_res8 [2];
  Type local_res18 [4];
  TOptional<int> local_2f8;
  TOptional<int> local_2f0;
  FSlateBrush *local_2e8;
  int local_2e0;
  int local_2dc;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FName local_298;
  FMemScope local_290;
  T5RequiredArgs<FSlateBrush_const_*_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>
  local_288;
  FName local_260;
  TSharedRef<SRichInlineImage,1> local_258;
  undefined1 local_248 [8];
  TReferenceControllerBase<1> *local_240;
  FSlateBaseNamedArgs local_230;
  
  pUVar1 = this->Decorator;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
  ::FString::FString(&local_2d8,L"id");
  this_01 = &param_1->_padding_;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_2d8.Data.ArrayNum != 0) {
    FVar12.Data = local_2d8.Data.AllocatorInstance.Data;
  }
  iVar11 = local_2d8.Data.ArrayNum + -1;
  lVar14 = 0;
  if (local_2d8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar12.Data);
  iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)this_01,uVar5,&local_2d8);
  if (((iVar11 == -1) || (lVar14 = *this_01 + (longlong)iVar11 * 0x28, lVar14 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
    return pTVar6;
  }
  if (*(int *)(lVar14 + 0x18) == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)(lVar14 + 0x10);
  }
  pFVar7 = ::FName::FName(&local_260,pwVar13);
  local_2e8 = (FSlateBrush *)(*pcVar2)(pUVar1,*pFVar7,1);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (local_2e8 == (FSlateBrush *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2571052583997144974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
                       ,0x72,"Brush");
    if (!bVar4) {
      __return_storage_ptr__->Object = (SWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
    return pTVar6;
  }
  local_2f8.bIsSet = false;
  ::FString::FString(&local_2c8,L"width");
  iVar11 = local_2c8.Data.ArrayNum + -1;
  FVar12.Data = local_2c8.Data.AllocatorInstance.Data;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar12.Data);
  iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)this_01,uVar5,&local_2c8);
  if (iVar11 == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = *this_01 + (longlong)iVar11 * 0x28;
  }
  pFVar15 = (FString *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    pFVar15 = (FString *)0x0;
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (pFVar15 != (FString *)0x0) {
    bVar4 = FDefaultValueHelper::ParseInt(pFVar15,&local_2e0);
    if (!bVar4) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,L"desired");
      if (iVar11 != 0) goto LAB_1469bced0;
      local_2e0 = (int)*(float *)&local_2e8->ImageSize;
    }
    local_2f8.bIsSet = true;
    local_2f8.TypedValue = local_2e0;
  }
LAB_1469bced0:
  local_2f0.bIsSet = false;
  ::FString::FString(&local_2b8,L"height");
  iVar11 = local_2b8.Data.ArrayNum + -1;
  FVar12.Data = local_2b8.Data.AllocatorInstance.Data;
  if (local_2b8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar12.Data);
  iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)this_01,uVar5,&local_2b8);
  if (iVar11 == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = *this_01 + (longlong)iVar11 * 0x28;
  }
  pFVar15 = (FString *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    pFVar15 = (FString *)0x0;
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (pFVar15 != (FString *)0x0) {
    bVar4 = FDefaultValueHelper::ParseInt(pFVar15,&local_2dc);
    if (!bVar4) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,L"desired");
      if (iVar11 != 0) goto LAB_1469bcf84;
      local_2dc = (int)*(float *)&(local_2e8->ImageSize).field_0x4;
    }
    local_2f0.bIsSet = true;
    local_2f0.TypedValue = local_2dc;
  }
LAB_1469bcf84:
  local_res18[0] = ScaleToFit;
  ::FString::FString(&local_2a8,L"stretch");
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar12.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar12.Data);
  iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)this_01,uVar5,&local_2a8);
  if (iVar11 == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = *this_01 + (longlong)iVar11 * 0x28;
  }
  pFVar15 = (FString *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    pFVar15 = (FString *)0x0;
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (pFVar15 != (FString *)0x0) {
    this_00 = StaticEnum<enum_EStretch::Type>();
    lVar8 = UEnum::GetValueByNameString(this_00,pFVar15,None);
    if (lVar8 != -1) {
      local_res18[0] = (Type)lVar8;
    }
  }
  pFVar9 = SRichInlineImage::FArguments::FArguments((FArguments *)&local_230);
  local_288.Arg0 = &local_2e8;
  local_288.Arg2 = &local_2f8;
  local_288.Arg3 = &local_2f0;
  local_288.Arg4 = local_res18;
  local_288.Arg1 = param_2;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_298,true);
  TSlateDecl<SRichInlineImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_*_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
  ::
  TSlateDecl<SRichInlineImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_*_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
            (local_248,"SRichInlineImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlockImageDecorator.cpp"
             ,0xa1,&local_288);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res8);
  pTVar10 = TSlateDecl<SRichInlineImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_*_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
            ::operator<<=(local_248,&local_258,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_240);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_230);
  return __return_storage_ptr__;
}

// Supports @ 146a1f400

bool __thiscall
FRichInlineImage::Supports(FRichInlineImage *this,FTextRunParseResults *param_1,FString *param_2)

{
  URichTextBlockImageDecorator *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  lVar10 = 0;
  local_res10.ComparisonIndex.Value = 0;
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"img");
  lVar9 = lVar10;
  if (iVar5 == 0) {
    ::FString::FString(&local_58,L"id");
    iVar5 = local_58.Data.ArrayNum + -1;
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar11.Data);
    lVar9 = 1;
    iVar5 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                        *)&param_1->MetaData,uVar6,&local_58);
    if (iVar5 != -1) {
      bVar3 = true;
      goto LAB_146a1f4b0;
    }
  }
  bVar3 = false;
LAB_146a1f4b0:
  if ((lVar9 != 0) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ::FString::FString(&local_48,L"id");
    iVar5 = local_48.Data.ArrayNum + -1;
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar11.Data);
    iVar5 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                        *)&param_1->MetaData,uVar6,&local_48);
    if (((iVar5 == -1) ||
        (lVar10 = (longlong)iVar5 * 0x20 + *(longlong *)&(param_1->MetaData).field_0x0, lVar10 == 0)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::Mid(param_2,&local_38,*(int *)(lVar10 + 0x10),
                   *(int *)(lVar10 + 0x14) - *(int *)(lVar10 + 0x10));
    pUVar1 = this->Decorator;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar11.Data = local_38.Data.AllocatorInstance.Data;
    }
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
    pFVar7 = ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
    lVar10 = (*pcVar2)(pUVar1,*pFVar7,0);
    bVar3 = lVar10 != 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

