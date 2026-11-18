// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FindClosestValue @ 141e9acb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FindClosestValue
          (TDirectoryTree<FMountPoint_*> *this,TStringView<wchar_t> *param_1)

{
  FMountPoint **ppFVar1;
  TDirectoryTree<FMountPoint_*> *pTVar2;
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if (param_1->Size != 0) {
    local_58.Base = local_38;
    local_58.CurPos = local_38;
    local_58.End = (wchar_t *)local_18;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    NormalizePathForReading(this,&local_68,&local_58);
    ppFVar1 = FTreeNode::TryFindClosestPath
                        (&this->Root,&local_68,(TStringBuilderBase<wchar_t> *)0x0,
                         this->PathSeparator);
    if (ppFVar1 != (FMountPoint **)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
      return ppFVar1;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  pTVar2 = (TDirectoryTree<FMountPoint_*> *)0x0;
  if ((int)(this->Root).NumChildNodesAndFlags < 0) {
    pTVar2 = this;
  }
  return (FMountPoint **)pTVar2;
}

// FindClosestValue @ 141e9ad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FindClosestValue
          (TDirectoryTree<FMountPoint_*> *this,TStringView<wchar_t> *param_1)

{
  FMountPoint **ppFVar1;
  TDirectoryTree<FMountPoint_*> *pTVar2;
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if (param_1->Size != 0) {
    local_58.Base = local_38;
    local_58.CurPos = local_38;
    local_58.End = (wchar_t *)local_18;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    NormalizePathForReading(this,&local_68,&local_58);
    ppFVar1 = FTreeNode::TryFindClosestPath
                        (&this->Root,&local_68,(TStringBuilderBase<wchar_t> *)0x0,
                         this->PathSeparator);
    if (ppFVar1 != (FMountPoint **)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
      return ppFVar1;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  pTVar2 = (TDirectoryTree<FMountPoint_*> *)0x0;
  if ((int)(this->Root).NumChildNodesAndFlags < 0) {
    pTVar2 = this;
  }
  return (FMountPoint **)pTVar2;
}

// FindOrAdd @ 141e9c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMountPoint ** __thiscall
TDirectoryTree<FMountPoint_*>::FindOrAdd
          (TDirectoryTree<FMountPoint_*> *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  FMountPoint **ppFVar4;
  wchar_t wVar5;
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
      return (FMountPoint **)this;
    }
    (this->Root).NumChildNodesAndFlags = uVar1 | 0x80000000;
    *(undefined8 *)(this->Root).Value.Pad = 0;
    this->NumPaths = this->NumPaths + 1;
    return (FMountPoint **)this;
  }
  if (this->bPathSeparatorInitialized == false) {
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar3 = UE::String::FindFirstChar(&local_78,L'/',CaseSensitive);
    if (iVar3 == -1) {
      local_78.DataPtr = param_1->DataPtr;
      local_78.Size = param_1->Size;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar3 = UE::String::FindFirstChar(&local_78,L'\\',CaseSensitive);
      if (iVar3 == -1) goto LAB_141e9c425;
      wVar5 = L'\\';
    }
    else {
      wVar5 = L'/';
    }
    InitializePathSeparator(this,wVar5);
  }
LAB_141e9c425:
  local_68.Base = local_48;
  local_68.bIsDynamic = false;
  local_68.bIsExternal = false;
  local_68.CurPos = local_48;
  local_68.End = (wchar_t *)local_28;
  bVar2 = NormalizePathForReading(this,param_1,&local_68);
  if (bVar2) {
    this->bNeedDriveWithoutPathFixup = this->bPathSeparatorInitialized == false;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar4 = FTreeNode::FindOrAdd(&this->Root,&local_78,local_88);
  if (local_88[0] == false) {
    this->NumPaths = this->NumPaths + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  return ppFVar4;
}

// InitializePathSeparator @ 141ea63e0

void __thiscall
TDirectoryTree<FMountPoint_*>::InitializePathSeparator
          (TDirectoryTree<FMountPoint_*> *this,wchar_t param_1)

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

// NormalizePathForReading @ 141eae3d0

bool __thiscall
TDirectoryTree<FMountPoint_*>::NormalizePathForReading
          (TDirectoryTree<FMountPoint_*> *this,TStringView<wchar_t> *param_1,
          TStringBuilderBase<wchar_t> *param_2)

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

// Remove @ 141eb4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDirectoryTree<FMountPoint_*>::Remove
          (TDirectoryTree<FMountPoint_*> *this,TStringView<wchar_t> *param_1,bool *param_2)

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

