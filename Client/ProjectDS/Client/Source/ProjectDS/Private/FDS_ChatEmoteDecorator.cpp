// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// Supports @ 14b455270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_ChatEmoteDecorator::Supports
          (FDS_ChatEmoteDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FDS_ChattingEmoteTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_ResourceIconTableRow *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_1c8 [32];
  wchar_t *pwVar13;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar10 = false;
  local_188.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data & 0xffffffff00000000
  ;
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar13,L"emote");
  if (iVar2 == 0) {
    ::FString::FString(&local_188,L"id");
    iVar2 = local_188.Data.ArrayNum + -1;
    FVar12.Data = local_188.Data.AllocatorInstance.Data;
    if (local_188.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar12.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar12.Data);
    bVar10 = true;
    iVar2 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                        *)&param_1->MetaData,uVar3,&local_188);
    if (iVar2 == -1) goto LAB_14b455315;
    bVar1 = true;
  }
  else {
LAB_14b455315:
    bVar1 = false;
  }
  if ((bVar10) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    return false;
  }
  ::FString::FString(&local_178,L"id");
  iVar2 = local_178.Data.ArrayNum + -1;
  FVar12.Data = local_178.Data.AllocatorInstance.Data;
  if (local_178.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar12.Data);
  iVar2 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                      *)&param_1->MetaData,uVar3,&local_178);
  if ((iVar2 == -1) ||
     (lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&param_1->MetaData, lVar4 == 0)) {
    iVar2 = -1;
    iVar11 = -1;
    pFVar9 = (FScriptContainerElement *)&DAT_ffffffff;
  }
  else {
    pFVar9 = *(FScriptContainerElement **)(lVar4 + 0x10);
    iVar11 = (int)((ulonglong)pFVar9 >> 0x20);
    iVar2 = (int)pFVar9;
    local_188.Data.AllocatorInstance.Data = pFVar9;
  }
  iVar8 = (int)pFVar9;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
    iVar8 = iVar2;
  }
  ::FString::Mid(param_2,&local_168,iVar2,iVar11 - iVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar12.Data = local_168.Data.AllocatorInstance.Data;
  }
  lVar4 = _wtoi64((wchar_t *)FVar12.Data);
  pFVar5 = FDS_ChattingEmoteTableRow::Get((longlong)(int)lVar4,true);
  if (pFVar5 == (FDS_ChattingEmoteTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_ChatEmoteDecorator::Supports",0x20,Yes);
      pwVar13 = L"chattingEmoteTableRow == nullptr (emoteID : %d)";
      uVar3 = 0x24;
LAB_14b4554ae:
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar3,pwVar13);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar7 = FDS_ResourceIconTableRow::Get((longlong)pFVar5->ID_Icon,true);
    if (pFVar7 != (FDS_ResourceIconTableRow *)0x0) {
      bVar10 = true;
      goto LAB_14b4554e1;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_ChatEmoteDecorator::Supports",0x20,Yes);
      pwVar13 = L"FDS_ResourceIconTableRow == nullptr (iconID : %d)";
      uVar3 = 0x2c;
      goto LAB_14b4554ae;
    }
  }
  bVar10 = false;
LAB_14b4554e1:
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// CreateDecoratorWidget @ 14bd53350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FDS_ChatEmoteDecorator::CreateDecoratorWidget
          (FDS_ChatEmoteDecorator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  int iVar1;
  void *_Src;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TTuple<FString,FString> *pTVar5;
  longlong lVar6;
  UDS_ChatEmoteDecorator *this_00;
  FSlateBrush *pFVar7;
  FArguments *pFVar8;
  TSharedRef<SDS_EmoteImage,1> *pTVar9;
  ForAnyElementType _Str;
  undefined1 auStackY_318 [32];
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  FLLMScope local_2c8;
  Type local_2c4;
  FString local_2c0;
  TOptional<int> local_2b0;
  TOptional<int> local_2a8;
  FName local_2a0;
  T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,EStretch::Type_&>
  local_298;
  TSharedRef<SDS_EmoteImage,1> local_270;
  undefined1 local_260 [8];
  TReferenceControllerBase<1> *local_258;
  undefined1 local_248 [256];
  void *local_148;
  wchar_t *local_140;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar3 = FWeakObjectPtr::IsValid(&(this->ChatEmoteDecorator).WeakPtr);
  if (bVar3) {
    ::FString::FString(&local_2c0,L"id");
    pTVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&param_1->_padding_,&local_2c0);
    local_2d8.Data = (FScriptContainerElement *)0x0;
    if (pTVar5 == (TTuple<FString,FString> *)0x0) {
      local_2d0 = 0;
    }
    else {
      iVar1 = *(int *)&pTVar5->field_0x18;
      _Src = *(void **)&pTVar5->field_0x10;
      local_2d0 = CONCAT44(local_2d0._4_4_,iVar1);
      if (iVar1 == 0) {
        local_2d0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_2d8,iVar1,(int *)((longlong)&local_2d0 + 4));
        memcpy(local_2d8.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    if ((FMemScope)local_2c0.Data.AllocatorInstance.Data != (FMemScope)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if ((int)local_2d0 != 0) {
      _Str.Data = local_2d8.Data;
    }
    lVar6 = _wtoi64((wchar_t *)_Str.Data);
    this_00 = (UDS_ChatEmoteDecorator *)FWeakObjectPtr::Get(&(this->ChatEmoteDecorator).WeakPtr);
    pFVar7 = UDS_ChatEmoteDecorator::GetEmoteIconBrush(this_00,(int)lVar6);
    if (pFVar7 == (FSlateBrush *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_248,
                   "FDS_ChatEmoteDecorator::CreateDecoratorWidget",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_140,0x14,L"iconBrush == nullptr (emoteID : %d)");
        if (local_148 != (void *)0x0) {
          FMemory::Free(local_148);
        }
      }
      __return_storage_ptr__->Object = (SWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_2b0.bIsSet = false;
      local_2a8.bIsSet = false;
      local_2c4 = Fill;
      pFVar8 = SDS_EmoteImage::FArguments::FArguments((FArguments *)local_248);
      local_298.Arg2 = &local_2b0;
      local_298.Arg3 = &local_2a8;
      local_298.Arg4 = &local_2c4;
      local_298.Arg0 = pFVar7;
      local_298.Arg1 = param_2;
      FLLMScope::FLLMScope(&local_2c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_2a0 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope((FMemScope *)&local_2c0,&local_2a0,true);
      TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
      ::
      TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
                (local_260,"SDS_EmoteImage",
                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Decorators\\DS_ChatEmoteDecorator.cpp"
                 ,0x1c,&local_298);
      FMemScope::~FMemScope((FMemScope *)&local_2c0);
      FLLMScope::~FLLMScope(&local_2c8);
      pTVar9 = TSlateDecl<SDS_EmoteImage,RequiredArgs::T5RequiredArgs<FSlateBrush_const_&,FTextBlockStyle_const_&,TOptional<int>_&,TOptional<int>_&,enum_EStretch::Type_&>_>
               ::operator<<=(local_260,&local_270,pFVar8);
      __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
      pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_258)
      ;
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_248);
    }
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_248,
                 "FDS_ChatEmoteDecorator::CreateDecoratorWidget",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_140,10,L"ChatEmoteDecorator.IsValid() == false");
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
    }
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

