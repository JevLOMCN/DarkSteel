// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FHyperlinkDecorator @ 142844100

FHyperlinkDecorator * __thiscall
FHyperlinkDecorator::FHyperlinkDecorator
          (FHyperlinkDecorator *this,FString *param_1,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHyperlinkDecorator__6B_;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->NavigateDelegate,param_2);
  ::FString::FString(&this->Id,param_1);
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->ToolTipTextDelegate,param_3);
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->ToolTipDelegate,param_4);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FHyperlinkDecorator @ 142849710

void __thiscall FHyperlinkDecorator::~FHyperlinkDecorator(FHyperlinkDecorator *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FHyperlinkDecorator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToolTipDelegate);
  pvVar1 = *(void **)&(this->ToolTipDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToolTipTextDelegate);
  pvVar1 = *(void **)&(this->ToolTipTextDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipTextDelegate);
  pFVar2 = (this->Id).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavigateDelegate);
  pvVar1 = *(void **)&(this->NavigateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NavigateDelegate);
  this->_padding_ = (longlong)&___7ITextDecorator__6B_;
  return;
}

// Create @ 142863190

TSharedRef<FHyperlinkDecorator,1> * __cdecl
FHyperlinkDecorator::Create
          (TSharedRef<FHyperlinkDecorator,1> *__return_storage_ptr__,FString *param_1,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  FHyperlinkDecorator *pFVar2;
  FString *pFVar3;
  TRawPtrProxy<FHyperlinkDecorator> local_res8;
  FString local_28;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 == (FHyperlinkDecorator *)0x0) {
    pFVar2 = (FHyperlinkDecorator *)0x0;
  }
  else {
    pFVar3 = ::FString::FString(&local_28,param_1);
    pFVar2->_padding_ = (longlong)&___7FHyperlinkDecorator__6B_;
    TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              (&pFVar2->NavigateDelegate,param_2);
    ::FString::FString(&pFVar2->Id,pFVar3);
    TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              (&pFVar2->ToolTipTextDelegate,param_3);
    TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              (&pFVar2->ToolTipDelegate,param_4);
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  local_res8.Object = pFVar2;
  TSharedRef<FHyperlinkDecorator,1>::TSharedRef<FHyperlinkDecorator,1><FHyperlinkDecorator>
            (__return_storage_ptr__,&local_res8);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Create @ 142863280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ISlateRun,1> * __thiscall
FHyperlinkDecorator::Create
          (FHyperlinkDecorator *this,TSharedRef<ISlateRun,1> *__return_storage_ptr__,
          TSharedRef<FTextLayout,1> *param_1,FTextRunParseResults *param_2,FString *param_3,
          TSharedRef<FString,1> *param_4,ISlateStyle *param_5)

{
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  ISlateStyle *pIVar7;
  FHyperlinkDecorator *pFVar8;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  FString *pFVar13;
  FName *pFVar14;
  TSharedRef<ISlateRun,1> *pTVar15;
  FHyperlinkStyle *pFVar16;
  FTextBlockStyle *pFVar17;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_02;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_03;
  FSlateHyperlinkRun *this_04;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar18;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar19;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar20;
  int iVar21;
  undefined1 *puVar22;
  ForAnyElementType FVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  uint *puVar27;
  undefined1 auStackY_998 [32];
  undefined1 local_958 [8];
  FString local_950;
  FString local_940;
  FTextRange local_930;
  ISlateStyle *local_928;
  FString local_920;
  FString local_910;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_900;
  int iStack_8f8;
  uint uStack_8f4;
  undefined1 *local_8f0;
  undefined4 uStack_8e8;
  int iStack_8e4;
  int local_8e0;
  int iStack_8dc;
  int iStack_8d8;
  undefined4 uStack_8d4;
  int local_8d0;
  int local_8cc;
  TPairInitializer<FString_const_&,FString_&&> local_8c8;
  FHyperlinkDecorator *local_8b8;
  TSharedRef<FString,1> *local_8b0;
  TRawPtrProxy<FSlateHyperlinkRun> local_8a8;
  TSharedRef<ISlateRun,1> *local_8a0;
  FString local_898;
  FString local_888;
  TSharedRef<FString_const_,1> local_878;
  TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
  *local_868;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_860;
  undefined8 uStack_840;
  longlong local_838;
  FString *local_830;
  TSharedRef<FSlateHyperlinkRun,1> local_828;
  FName local_818;
  FName local_810;
  FName local_808;
  FName local_800;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_7c8;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_7b0;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_798;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_780;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_768;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_750;
  FHyperlinkStyle local_738;
  undefined1 local_a8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_998;
  local_8b0 = param_4;
  local_8c8.Value = param_3;
  local_928 = param_5;
  local_8b8 = this;
  local_8a0 = __return_storage_ptr__;
  ::FString::FString(&local_950,L"Hyperlink");
  ::FString::FString(&local_940,L"");
  ::FString::FString(&local_920,L"style");
  this_00 = &param_2->MetaData;
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_920.Data.ArrayNum != 0) {
    FVar23.Data = local_920.Data.AllocatorInstance.Data;
  }
  lVar12 = 0;
  iVar21 = local_920.Data.ArrayNum + -1;
  if (local_920.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar21,(wchar_t *)FVar23.Data);
  iVar21 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)this_00,uVar11,&local_920);
  if (iVar21 != -1) {
    lVar12 = (longlong)iVar21 * 0x20 + *(longlong *)&this_00->field_0x0;
  }
  piVar25 = (int *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    piVar25 = (int *)0x0;
  }
  if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data.AllocatorInstance.Data);
  }
  if (piVar25 != (int *)0x0) {
    ::FString::Mid(param_3,&local_898,*piVar25,piVar25[1] - *piVar25);
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_898.Data.ArrayNum != 0) {
      FVar23.Data = local_898.Data.AllocatorInstance.Data;
    }
    ::FString::operator=(&local_950,(wchar_t *)FVar23.Data);
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_910,L"textstyle");
  iVar21 = local_910.Data.ArrayNum + -1;
  FVar23.Data = local_910.Data.AllocatorInstance.Data;
  if (local_910.Data.ArrayNum == 0) {
    iVar21 = 0;
    FVar23.Data = (FScriptContainerElement *)L"";
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar21,(wchar_t *)FVar23.Data);
  iVar21 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                       *)this_00,uVar11,&local_910);
  if (iVar21 == -1) {
    lVar12 = 0;
  }
  else {
    lVar12 = (longlong)iVar21 * 0x20 + *(longlong *)&this_00->field_0x0;
  }
  piVar25 = (int *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    piVar25 = (int *)0x0;
  }
  if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_910.Data.AllocatorInstance.Data);
  }
  if (piVar25 != (int *)0x0) {
    ::FString::Mid(param_3,&local_888,*piVar25,piVar25[1] - *piVar25);
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_888.Data.ArrayNum != 0) {
      FVar23.Data = local_888.Data.AllocatorInstance.Data;
    }
    ::FString::operator=(&local_940,(wchar_t *)FVar23.Data);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  iVar21 = (param_2->ContentRange).BeginIndex;
  iVar24 = (param_4->Object->Data).ArrayNum;
  local_930.BeginIndex = iVar24 + -1;
  if (iVar24 == 0) {
    local_930.BeginIndex = 0;
  }
  pFVar13 = ::FString::Mid(param_3,&local_7f8,iVar21,(param_2->ContentRange).EndIndex - iVar21);
  iVar24 = (pFVar13->Data).ArrayNum;
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = 0;
  }
  ::FString::AppendChars(param_4->Object,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar21);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  iVar21 = (param_4->Object->Data).ArrayNum;
  local_930.EndIndex = iVar21 + -1;
  if (iVar21 == 0) {
    local_930.EndIndex = 0;
  }
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_950.Data.ArrayNum != 0) {
    FVar23.Data = local_950.Data.AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_818,(wchar_t *)FVar23.Data);
  lVar12 = (**(code **)((longlong)*param_5 + 0xa0))(param_5,FHyperlinkStyle::TypeName,*pFVar14);
  if (lVar12 == 0) {
    local_928 = FAppStyle::Get();
  }
  pFVar13 = ::FString::FString(&local_7d8,&param_2->Name);
  local_a8._0_8_ = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = (pFVar13->Data).ArrayNum;
  local_a8._12_4_ = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Hash.InlineData[0] = 0;
  local_98.Hash.InlineData[1] = 0;
  local_98.Hash.InlineData[2] = 0;
  local_98.Hash.InlineData[3] = 0;
  local_98.Hash._padding_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._40_8_ = 0x8000000000;
  local_98.Elements._48_8_ = 0xffffffff;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98._72_8_ = 0;
  local_98.Elements._16_8_ = 0;
  local_98.Elements._24_8_ = 0;
  pFVar4 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  iVar21 = *(int *)&(param_2->MetaData).field_0x28;
  puVar1 = &(param_2->MetaData).field_0x10;
  local_8e0 = 0;
  iStack_8f8 = 0;
  uStack_8f4 = 1;
  iStack_8e4 = 0;
  if (iVar21 != 0) {
    puVar27 = *(uint **)&(param_2->MetaData).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar11 = *puVar27;
    while (uVar11 == 0) {
      lVar12 = (longlong)iStack_8f8;
      local_8e0 = local_8e0 + 0x20;
      iStack_8f8 = iStack_8f8 + 1;
      iStack_8e4 = iVar21;
      if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < iStack_8f8) goto LAB_14286363d;
      uVar11 = puVar27[lVar12 + 1];
    }
    uStack_8f4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8f4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_8d0 = (int)lVar12;
    iStack_8e4 = local_8e0 + -1 + local_8d0;
    if (iVar21 < iStack_8e4) {
      iStack_8e4 = iVar21;
    }
  }
LAB_14286363d:
  iStack_8d8 = *(int *)&(param_2->MetaData).field_0x8 - *(int *)&(param_2->MetaData).field_0x34;
  uVar11 = *(uint *)&(param_2->MetaData).field_0x28;
  uStack_8e8 = 0xffffffff;
  uVar26 = uVar11 & 0xffffffe0;
  TStack_860._padding_ = CONCAT44(uStack_8f4,iStack_8f8);
  TStack_860.CurrentBitIndex = iStack_8e4;
  TStack_860.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar11 >> 5;
  TStack_860._28_4_ = iStack_8e4;
  TStack_860.BaseBitIndex = local_8e0;
  uStack_840 = CONCAT44(uStack_8d4,iStack_8d8);
  local_900 = this_00;
  local_8f0 = puVar1;
  iStack_8dc = iStack_8e4;
  local_868 = this_00;
  TStack_860.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar21 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar6)();
    return pTVar15;
  }
  pFVar13 = local_8c8.Value;
  uVar3 = *(uint *)&(param_2->MetaData).field_0x28;
  if (uVar11 != uVar3) {
    puVar22 = *(undefined1 **)&(param_2->MetaData).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar24 * 4);
    while (uVar11 == 0) {
      lVar12 = (longlong)iVar24;
      uVar26 = uVar26 + 0x20;
      iVar24 = iVar24 + 1;
      uVar11 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar24) goto LAB_142863731;
      uVar11 = *(uint *)(puVar22 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_8cc = (int)lVar12;
    uVar11 = local_8cc + -1 + uVar26;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_142863731:
  while( true ) {
    pTVar9 = local_868;
    if (*(int *)(&local_868->field_0x0 + 8) - *(int *)(&local_868->field_0x0 + 0x34) !=
        (int)uStack_840) {
      local_958[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FTextRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_958);
    }
    if (((TStack_860.CurrentBitIndex == uVar11) &&
        (TStack_860.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00)
       ) break;
    local_838 = (longlong)TStack_860.CurrentBitIndex * 0x20 + *(longlong *)&pTVar9->field_0x0;
    local_830 = ::FString::Mid(pFVar13,&local_7e8,*(int *)(local_838 + 0x10),
                               *(int *)(local_838 + 0x14) - *(int *)(local_838 + 0x10));
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(local_a8 + 0x10),&local_8c8,(bool *)&local_838);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
    TStack_860.UnvisitedBitMask = TStack_860.UnvisitedBitMask & ~TStack_860._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_860);
  }
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_950.Data.ArrayNum != 0) {
    FVar23.Data = local_950.Data.AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_810,(wchar_t *)FVar23.Data);
  pIVar7 = local_928;
  pFVar16 = (FHyperlinkStyle *)
            (**(code **)((longlong)*local_928 + 0xa0))
                      (local_928,FHyperlinkStyle::TypeName,*pFVar14,0);
  if (pFVar16 == (FHyperlinkStyle *)0x0) {
    pFVar16 = FHyperlinkStyle::GetDefault();
  }
  FHyperlinkStyle::FHyperlinkStyle(&local_738,pFVar16);
  if (1 < local_940.Data.ArrayNum) {
    pFVar14 = ::FName::FName(&local_808,(wchar_t *)local_940.Data.AllocatorInstance.Data);
    lVar12 = (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FTextBlockStyle::TypeName,*pFVar14,0);
    if (lVar12 != 0) {
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_940.Data.ArrayNum != 0) {
        FVar23.Data = local_940.Data.AllocatorInstance.Data;
      }
      pFVar14 = ::FName::FName(&local_800,(wchar_t *)FVar23.Data);
      pFVar17 = (FTextBlockStyle *)
                (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FTextBlockStyle::TypeName,*pFVar14,0)
      ;
      if (pFVar17 == (FTextBlockStyle *)0x0) {
        pFVar17 = FTextBlockStyle::GetDefault();
      }
      FTextBlockStyle::operator=(&local_738.TextStyle,pFVar17);
    }
  }
  pFVar8 = local_8b8;
  this_01 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            ::
            TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                      (&local_7c8,&local_8b8->ToolTipTextDelegate);
  this_02 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            ::
            TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                      (&local_7b0,&pFVar8->ToolTipDelegate);
  this_03 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            ::
            TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                      (&local_798,&pFVar8->NavigateDelegate);
  local_878.Object = local_8b0->Object;
  pTVar5 = (local_8b0->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_878.SharedReferenceCount.ReferenceController = pTVar5;
  this_04 = ::operator_new(0x790);
  if (this_04 == (FSlateHyperlinkRun *)0x0) {
    local_8a8.Object = (FSlateHyperlinkRun *)0x0;
  }
  else {
    pTVar18 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              ::
              TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        (&local_780,this_01);
    pTVar19 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              ::
              TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        (&local_768,this_02);
    pTVar20 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                        (&local_750,this_03);
    local_8a8.Object =
         FSlateHyperlinkRun::FSlateHyperlinkRun
                   (this_04,(FRunInfo *)local_a8,&local_878,&local_738,pTVar20,pTVar19,pTVar18,
                    &local_930);
    if (((local_8a8.Object != (FSlateHyperlinkRun *)0x0) &&
        (*(longlong *)&(local_8a8.Object)->field_0x8 != 0)) &&
       ((*(longlong *)&(local_8a8.Object)->field_0x10 != 0 &&
        ((0 < *(int *)(*(longlong *)&(local_8a8.Object)->field_0x10 + 8) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar10)))))) {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TSharedRef<ISlateRun,1> *)(*pcVar6)();
      return pTVar15;
    }
  }
  TSharedRef<FSlateHyperlinkRun,1>::TSharedRef<FSlateHyperlinkRun,1><FSlateHyperlinkRun>
            (&local_828,&local_8a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_03);
  if (*(void **)&this_03->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_03->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_03);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
  if (*(void **)&this_02->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_02->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_02);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  if (*(void **)&this_01->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_01->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  pTVar15 = local_8a0;
  local_8a0->Object = (ISlateRun *)local_828.Object;
  (local_8a0->SharedReferenceCount).ReferenceController =
       local_828.SharedReferenceCount.ReferenceController;
  if (local_828.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FHyperlinkStyle::~FHyperlinkStyle(&local_738);
  local_98._72_8_ = local_98._72_8_ & 0xffffffff00000000;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x10));
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data.AllocatorInstance.Data);
  }
  if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.Data.AllocatorInstance.Data);
  }
  return pTVar15;
}

// Supports @ 14289d080

bool __thiscall
FHyperlinkDecorator::Supports
          (FHyperlinkDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_38,L"id");
  pwVar8 = L"";
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar6.Data);
  iVar2 = TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
                      *)&param_1->MetaData,uVar1,&local_38);
  pFVar4 = pFVar7;
  if (iVar2 != -1) {
    pFVar4 = (FScriptContainerElement *)((longlong)iVar2 * 0x20 + *(longlong *)&param_1->MetaData);
  }
  pFVar9 = pFVar4 + 0x10;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    pFVar9 = pFVar7;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    pFVar5 = ::FString::Mid(param_2,&local_38,*(int *)pFVar9,*(int *)(pFVar9 + 4) - *(int *)pFVar9);
    iVar3 = 0;
    if (&local_28 != pFVar5) {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar5->Data).ArrayNum;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->Name).Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar8,L"a");
  if (iVar2 == 0) {
    iVar2 = (this->Id).Data.ArrayNum;
    if (iVar3 == iVar2) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)pFVar7,(wchar_t *)(this->Id).Data.AllocatorInstance.Data);
        bVar10 = iVar3 == 0;
        goto LAB_14289d1a4;
      }
    }
    else {
      bVar10 = iVar2 + iVar3 == 1;
LAB_14289d1a4:
      if (!bVar10) goto LAB_14289d1af;
    }
    bVar10 = true;
  }
  else {
LAB_14289d1af:
    bVar10 = false;
  }
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return bVar10;
}

