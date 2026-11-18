// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 6

// Empty @ 142a6ad90

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::Empty(TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        *this)

{
  FTreeNode::Reset(&this->Root);
  this->NumPaths = 0;
  this->PathSeparator = L'/';
  this->bPathSeparatorInitialized = false;
  return;
}

// Find @ 142a6d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::Find(TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
       *this,TStringView<wchar_t> *param_1)

{
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Size == 0) {
    if (-1 < (int)(this->Root).NumChildNodesAndFlags) {
      this = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
              *)0x0;
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
    this = (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            *)FTreeNode::Find(&this->Root,&local_68);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)this;
}

// FindOrAdd @ 142a6f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FindOrAdd(TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  bool bVar1;
  int iVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  wchar_t wVar4;
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
    if ((int)(this->Root).NumChildNodesAndFlags < 0) {
      return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)this;
    }
    FTreeNode::SetDefaultValue(&this->Root);
    this->NumPaths = this->NumPaths + 1;
    return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
            *)this;
  }
  if (this->bPathSeparatorInitialized == false) {
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar2 = UE::String::FindFirstChar(&local_78,L'/',CaseSensitive);
    if (iVar2 == -1) {
      local_78.DataPtr = param_1->DataPtr;
      local_78.Size = param_1->Size;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar2 = UE::String::FindFirstChar(&local_78,L'\\',CaseSensitive);
      if (iVar2 == -1) goto LAB_142a6f71f;
      wVar4 = L'\\';
    }
    else {
      wVar4 = L'/';
    }
    InitializePathSeparator(this,wVar4);
  }
LAB_142a6f71f:
  local_68.Base = local_48;
  local_68.bIsDynamic = false;
  local_68.bIsExternal = false;
  local_68.CurPos = local_48;
  local_68.End = (wchar_t *)local_28;
  bVar1 = NormalizePathForReading(this,param_1,&local_68);
  if (bVar1) {
    this->bNeedDriveWithoutPathFixup = this->bPathSeparatorInitialized == false;
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar3 = FTreeNode::FindOrAdd(&this->Root,&local_78,local_88);
  if (local_88[0] == false) {
    this->NumPaths = this->NumPaths + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  return pTVar3;
}

// InitializePathSeparator @ 142a7ecd0

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::InitializePathSeparator
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *this,wchar_t param_1)

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

// NormalizePathForReading @ 142a86cb0

bool __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::NormalizePathForReading
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *this,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

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

// TryGetChildren @ 142aa54f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::TryGetChildren(TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                 *this,TStringView<wchar_t> *param_1,
                TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EDirectoryTreeGetFlags param_3)

{
  bool bVar1;
  undefined1 auStackY_8c8 [32];
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [16];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  if (((param_1->Size != 0) || ((param_3 & ImpliedParent) != None)) ||
     (bVar1 = false, (int)(this->Root).NumChildNodesAndFlags < 0)) {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = (wchar_t *)&local_848;
    NormalizePathForReading(this,param_1,&local_888);
    local_898.DataPtr = param_1->DataPtr;
    local_898.Size = param_1->Size;
    local_898._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.End = (wchar_t *)local_28;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    bVar1 = FTreeNode::TryGetChildren
                      (&this->Root,&local_848,this->PathSeparator,&local_898,param_2,param_3);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  return bVar1;
}

