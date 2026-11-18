// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// Find @ 142af59c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::Find
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this
          ,TStringView<wchar_t> *param_1)

{
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Size == 0) {
    if (-1 < (int)(this->Root).NumChildNodesAndFlags) {
      this = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)
             0x0;
    }
  }
  else {
    local_58.Base = local_38;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.CurPos = local_38;
    local_58.End = (wchar_t *)local_18;
    NormalizePathForReading(this,param_1,&local_58);
    local_68.DataPtr = param_1->DataPtr;
    local_68.Size = param_1->Size;
    local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this = (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *)
           FTreeNode::Find(&this->Root,&local_68);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this;
}

// FindOrAdd @ 142af6ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> * __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FindOrAdd
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this
          ,TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  FTreeNode *pFVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *pTVar5;
  wchar_t wVar6;
  undefined1 auStack_a8 [32];
  bool local_88 [16];
  TStringView<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_68;
  wchar_t local_48 [16];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->Size == 0) {
    if (param_2 != (bool *)0x0) {
      *param_2 = SUB41((this->Root).NumChildNodesAndFlags >> 0x1f,0);
    }
    uVar1 = (this->Root).NumChildNodesAndFlags;
    if ((int)uVar1 < 0) {
      return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this;
    }
    (this->Root).NumChildNodesAndFlags = uVar1 | 0x80000000;
    (this->Root).Value.Pad[0] = '\0';
    (this->Root).Value.Pad[1] = '\0';
    (this->Root).Value.Pad[2] = '\0';
    (this->Root).Value.Pad[3] = '\0';
    (this->Root).Value.Pad[4] = '\0';
    (this->Root).Value.Pad[5] = '\0';
    (this->Root).Value.Pad[6] = '\0';
    (this->Root).Value.Pad[7] = '\0';
    pFVar2 = &this->Root;
    (pFVar2->Value).Pad[8] = '\0';
    (pFVar2->Value).Pad[9] = '\0';
    (pFVar2->Value).Pad[10] = '\0';
    (pFVar2->Value).Pad[0xb] = '\0';
    (pFVar2->Value).Pad[0xc] = '\0';
    (pFVar2->Value).Pad[0xd] = '\0';
    (pFVar2->Value).Pad[0xe] = '\0';
    (pFVar2->Value).Pad[0xf] = '\0';
    this->NumPaths = this->NumPaths + 1;
    return (TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1> *)this;
  }
  if (this->bPathSeparatorInitialized == false) {
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar4 = UE::String::FindFirstChar(&local_78,L'/',CaseSensitive);
    if (iVar4 == -1) {
      local_78.DataPtr = param_1->DataPtr;
      local_78.Size = param_1->Size;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar4 = UE::String::FindFirstChar(&local_78,L'\\',CaseSensitive);
      if (iVar4 == -1) goto LAB_142af6b69;
      wVar6 = L'\\';
    }
    else {
      wVar6 = L'/';
    }
    InitializePathSeparator(this,wVar6);
  }
LAB_142af6b69:
  local_68.Base = local_48;
  local_68.bIsDynamic = false;
  local_68.bIsExternal = false;
  local_68.CurPos = local_48;
  local_68.End = (wchar_t *)local_28;
  bVar3 = NormalizePathForReading(this,param_1,&local_68);
  if (bVar3) {
    this->bNeedDriveWithoutPathFixup = this->bPathSeparatorInitialized == false;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar5 = FTreeNode::FindOrAdd(&this->Root,&local_78,local_88);
  if (local_88[0] == false) {
    this->NumPaths = this->NumPaths + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  return pTVar5;
}

// InitializePathSeparator @ 142b03520

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
InitializePathSeparator
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this
          ,wchar_t param_1)

{
  bool *pbVar1;
  wchar_t _C;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  FString *this_00;
  
  if ((this->bPathSeparatorInitialized != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPathSeparatorInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x2db,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _C = this->PathSeparator;
  pbVar1 = &this->bNeedDriveWithoutPathFixup;
  *pbVar1 = (bool)(*pbVar1 & param_1 != _C);
  if (*pbVar1 == false) {
    this->bPathSeparatorInitialized = true;
    this->PathSeparator = param_1;
    return;
  }
  uVar4 = (this->Root).NumChildNodesAndFlags & 0x7fffffff;
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    do {
      this_00 = (FString *)
                ((longlong)&(((this->Root).RelPaths.Ptr)->Data).AllocatorInstance.Data + lVar6);
      iVar5 = iswalpha(_C);
      if (iVar5 == 0) {
        ::FString::ReplaceCharInlineCaseSensitive(this_00,_C,param_1);
      }
      else {
        ::FString::ReplaceCharInlineIgnoreCase(this_00,_C,param_1);
      }
      lVar6 = lVar6 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  this->bPathSeparatorInitialized = true;
  this->bNeedDriveWithoutPathFixup = false;
  this->PathSeparator = param_1;
  return;
}

// NormalizePathForReading @ 142b0a510

bool __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::
NormalizePathForReading
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this
          ,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  TStringBuilderBase<wchar_t> *this_00;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28._8_8_ = *(undefined8 *)&param_1->Size;
  bVar4 = FPathViews::IsDriveSpecifierWithoutRoot(&local_28);
  if (bVar4) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    local_38.DataPtr = (wchar_t *)0x0;
    local_38.Size = 0;
    FPathViews::SplitVolumeSpecifier(&local_18,&local_28,&local_38);
    this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,local_28.DataPtr,local_28.Size)
    ;
    wVar1 = this->PathSeparator;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = wVar1;
    this_00->CurPos = this_00->CurPos + 1;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,local_38.DataPtr,local_38.Size);
    pwVar2 = param_2->Base;
    pwVar3 = param_2->CurPos;
    param_1->DataPtr = pwVar2;
    param_1->Size = (int)((longlong)pwVar3 - (longlong)pwVar2 >> 1);
    *(undefined4 *)&param_1->field_0xc = local_28._12_4_;
    return true;
  }
  return false;
}

// Remove @ 142b13a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::Remove
          (TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_> *this
          ,TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_a8 [32];
  bool local_88 [16];
  TStringView<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_68;
  wchar_t local_48 [16];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->Size == 0) {
    uVar1 = (this->Root).NumChildNodesAndFlags;
    local_88[0] = (bool)-(char)((int)uVar1 >> 0x1f);
    if (local_88[0] != false) {
      (this->Root).NumChildNodesAndFlags = uVar1 & 0x7fffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((this->Root).Value.Pad + 8));
    }
  }
  else {
    local_68.Base = local_48;
    local_68.bIsDynamic = false;
    local_68.bIsExternal = false;
    local_68.CurPos = local_48;
    local_68.End = (wchar_t *)local_28;
    NormalizePathForReading(this,param_1,&local_68);
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FTreeNode::Remove(&this->Root,&local_78,local_88);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  }
  if (local_88[0] != false) {
    if (this->NumPaths < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPaths > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x205,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->NumPaths = this->NumPaths + -1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  return;
}

