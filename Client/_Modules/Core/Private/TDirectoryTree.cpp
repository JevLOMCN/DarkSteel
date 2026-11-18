// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// ContainsChildPaths @ 14192f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::ContainsChildPaths
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Base = local_38;
  local_58.CurPos = local_38;
  local_58.End = (wchar_t *)local_18;
  local_58.bIsDynamic = false;
  local_58.bIsExternal = false;
  NormalizePathForReading(this,param_1,&local_58);
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FTreeNode::ContainsChildPaths(&this->Root,&local_68);
  if (local_58.bIsDynamic != false) {
    FMemory::Free(local_58.Base);
  }
  return bVar1;
}

// Find @ 14193c620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Find
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1)

{
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Size == 0) {
    if (-1 < (int)(this->Root).NumChildNodesAndFlags) {
      this = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
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
    this = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)
           FTreeNode::Find(&this->Root,&local_68);
    if (local_58.bIsDynamic != false) {
      FMemory::Free(local_58.Base);
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)this;
}

// FindClosestValue @ 14193d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindClosestValue
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *pTVar2;
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
    pTVar1 = FTreeNode::TryFindClosestPath
                       (&this->Root,&local_68,(TStringBuilderBase<wchar_t> *)0x0,this->PathSeparator
                       );
    if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      if (local_58.bIsDynamic == false) {
        return pTVar1;
      }
      FMemory::Free(local_58.Base);
      return pTVar1;
    }
    if (local_58.bIsDynamic != false) {
      FMemory::Free(local_58.Base);
    }
  }
  pTVar2 = (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
  if ((int)(this->Root).NumChildNodesAndFlags < 0) {
    pTVar2 = this;
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)pTVar2;
}

// FindOrAdd @ 14193e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FindOrAdd
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  FTreeNode *pFVar2;
  bool bVar3;
  int iVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
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
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)this;
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
    return (TArray<FName,TSizedDefaultAllocator<32>_> *)this;
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
      if (iVar4 == -1) goto LAB_14193e239;
      wVar6 = L'\\';
    }
    else {
      wVar6 = L'/';
    }
    InitializePathSeparator(this,wVar6);
  }
LAB_14193e239:
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
  if (local_68.bIsDynamic != false) {
    FMemory::Free(local_68.Base);
  }
  return pTVar5;
}

// InitializePathSeparator @ 141950d10

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::InitializePathSeparator
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,wchar_t param_1)

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

// NormalizePathForReading @ 1419573d0

bool __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::NormalizePathForReading
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  TStringBuilderBase<wchar_t> *this_00;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  uVar4 = 0;
  uVar7 = (uint)*(undefined8 *)&param_1->Size;
  local_18.DataPtr = param_1->DataPtr;
  local_18._8_8_ = *(undefined8 *)&param_1->Size;
  uVar6 = uVar4;
  if (0 < (int)uVar7) {
    do {
      wVar1 = local_18.DataPtr[uVar4];
      if (wVar1 == L'/') {
        return false;
      }
      if (wVar1 == L'\\') {
        return false;
      }
      uVar5 = (int)uVar6 + 1;
      if (wVar1 == L':') {
        if (uVar5 != uVar7) {
          wVar1 = local_18.DataPtr[(longlong)(int)uVar6 + 1];
          if (wVar1 == L':') {
            return false;
          }
          if (wVar1 == L'/') {
            return false;
          }
          if (wVar1 == L'\\') {
            return false;
          }
        }
        local_38.DataPtr = (wchar_t *)0x0;
        local_38.Size = 0;
        local_28.DataPtr = (wchar_t *)0x0;
        local_28._8_8_ = local_18._8_8_ & 0xffffffff00000000;
        FPathViews::SplitVolumeSpecifier(&local_18,&local_38,&local_28);
        this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (param_2,local_38.DataPtr,local_38.Size);
        wVar1 = this->PathSeparator;
        if (this_00->End < this_00->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(this_00,1);
        }
        *this_00->CurPos = wVar1;
        this_00->CurPos = this_00->CurPos + 1;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,local_28.DataPtr,local_28.Size);
        pwVar2 = param_2->Base;
        pwVar3 = param_2->CurPos;
        param_1->DataPtr = pwVar2;
        param_1->Size = (int)((longlong)pwVar3 - (longlong)pwVar2 >> 1);
        *(undefined4 *)&param_1->field_0xc = local_28._12_4_;
        return true;
      }
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((longlong)uVar4 < (longlong)(int)uVar7);
  }
  return false;
}

// Remove @ 141964c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::Remove
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
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
    if (local_88[0] == false) goto LAB_141964caa;
    (this->Root).NumChildNodesAndFlags = uVar1 & 0x7fffffff;
    pwVar4 = *(wchar_t **)(this->Root).Value.Pad;
    if (pwVar4 == (wchar_t *)0x0) goto LAB_141964caa;
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
    pwVar4 = local_68.Base;
    if (local_68.bIsDynamic == false) goto LAB_141964caa;
  }
  FMemory::Free(pwVar4);
LAB_141964caa:
  if (local_88[0] != false) {
    if ((this->NumPaths < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumPaths > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x205,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->NumPaths = this->NumPaths + -1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  return;
}

// TryGetChildren @ 141976090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::TryGetChildren
          (TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_> *this,
          TStringView<wchar_t> *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          EDirectoryTreeGetFlags param_3)

{
  bool bVar1;
  undefined1 auStackY_8d8 [32];
  TStringView<wchar_t> local_8a8;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [16];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  if (((param_1->Size != 0) || ((param_3 & ImpliedParent) != None)) ||
     (bVar1 = false, (int)(this->Root).NumChildNodesAndFlags < 0)) {
    local_898.Base = local_878;
    local_898.bIsDynamic = false;
    local_898.bIsExternal = false;
    local_898.CurPos = local_878;
    local_898.End = (wchar_t *)&local_858;
    NormalizePathForReading(this,param_1,&local_898);
    local_8a8.DataPtr = param_1->DataPtr;
    local_8a8.Size = param_1->Size;
    local_8a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = (wchar_t *)local_38;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    bVar1 = FTreeNode::TryGetChildren
                      (&this->Root,&local_858,this->PathSeparator,&local_8a8,param_2,param_3);
    if (local_858.bIsDynamic != false) {
      FMemory::Free(local_858.Base);
    }
    if (local_898.bIsDynamic != false) {
      FMemory::Free(local_898.Base);
    }
  }
  return bVar1;
}

// ContainsPathOrParent @ 141b3c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<int>::ContainsPathOrParent(TDirectoryTree<int> *this,TStringView<wchar_t> *param_1)

{
  TDirectoryTree<int> *pTVar1;
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
    pTVar1 = (TDirectoryTree<int> *)
             FTreeNode::TryFindClosestPath
                       (&this->Root,&local_68,(TStringBuilderBase<wchar_t> *)0x0,this->PathSeparator
                       );
    if (pTVar1 != (TDirectoryTree<int> *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
      goto LAB_141b3c232;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  pTVar1 = (TDirectoryTree<int> *)0x0;
  if ((int)(this->Root).NumChildNodesAndFlags < 0) {
    pTVar1 = this;
  }
LAB_141b3c232:
  return pTVar1 != (TDirectoryTree<int> *)0x0;
}

// Find @ 141b409a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall TDirectoryTree<int>::Find(TDirectoryTree<int> *this,TStringView<wchar_t> *param_1)

{
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Size == 0) {
    if (-1 < (int)(this->Root).NumChildNodesAndFlags) {
      this = (TDirectoryTree<int> *)0x0;
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
    this = (TDirectoryTree<int> *)FTreeNode::Find(&this->Root,&local_68);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  return (int *)this;
}

// Find @ 141b40a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMoveConstructOnly * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::Find
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined1 auStack_88 [32];
  TStringView<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_58;
  wchar_t local_38 [16];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Size == 0) {
    if (-1 < *(int *)((longlong)this + 0x18)) {
      this = (FMoveConstructOnly *)0x0;
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
    this = FTreeNode::Find(this,&local_68);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  return this;
}

// FindClosestValue @ 141b40e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall
TDirectoryTree<int>::FindClosestValue(TDirectoryTree<int> *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  TDirectoryTree<int> *pTVar2;
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
    piVar1 = FTreeNode::TryFindClosestPath
                       (&this->Root,&local_68,(TStringBuilderBase<wchar_t> *)0x0,this->PathSeparator
                       );
    if (piVar1 != (int *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
      return piVar1;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  pTVar2 = (TDirectoryTree<int> *)0x0;
  if ((int)(this->Root).NumChildNodesAndFlags < 0) {
    pTVar2 = this;
  }
  return (int *)pTVar2;
}

// FindOrAdd @ 141b425d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall
TDirectoryTree<int>::FindOrAdd
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
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
      return (int *)this;
    }
    (this->Root).NumChildNodesAndFlags = uVar1 | 0x80000000;
    *(undefined4 *)(this->Root).Value.Pad = 0;
    this->NumPaths = this->NumPaths + 1;
    return (int *)this;
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
      if (iVar3 == -1) goto LAB_141b42684;
      wVar5 = L'\\';
    }
    else {
      wVar5 = L'/';
    }
    InitializePathSeparator(this,wVar5);
  }
LAB_141b42684:
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
  piVar4 = FTreeNode::FindOrAdd(&this->Root,&local_78,local_88);
  if (local_88[0] == false) {
    this->NumPaths = this->NumPaths + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  return piVar4;
}

// FindOrAdd @ 141b42730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMoveConstructOnly * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FindOrAdd
          (void *this,TStringView<wchar_t> *param_1,bool *param_2)

{
  bool bVar1;
  int iVar2;
  FMoveConstructOnly *pFVar3;
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
      *param_2 = SUB41((uint)*(undefined4 *)((longlong)this + 0x18) >> 0x1f,0);
    }
    if ((int)*(uint *)((longlong)this + 0x18) < 0) {
      return this;
    }
    *(undefined4 *)this = 0x1b5;
    *(uint *)((longlong)this + 0x18) = *(uint *)((longlong)this + 0x18) | 0x80000000;
    *(int *)((longlong)this + 0x20) = *(int *)((longlong)this + 0x20) + 1;
    return this;
  }
  if (*(char *)((longlong)this + 0x26) == '\0') {
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar2 = UE::String::FindFirstChar(&local_78,L'/',CaseSensitive);
    if (iVar2 == -1) {
      local_78.DataPtr = param_1->DataPtr;
      local_78.Size = param_1->Size;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar2 = UE::String::FindFirstChar(&local_78,L'\\',CaseSensitive);
      if (iVar2 == -1) goto LAB_141b427e6;
      wVar4 = L'\\';
    }
    else {
      wVar4 = L'/';
    }
    InitializePathSeparator(this,wVar4);
  }
LAB_141b427e6:
  local_68.Base = local_48;
  local_68.bIsDynamic = false;
  local_68.bIsExternal = false;
  local_68.CurPos = local_48;
  local_68.End = (wchar_t *)local_28;
  bVar1 = NormalizePathForReading(this,param_1,&local_68);
  if (bVar1) {
    *(bool *)((longlong)this + 0x27) = *(char *)((longlong)this + 0x26) == '\0';
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar3 = FTreeNode::FindOrAdd(this,&local_78,local_88);
  if (local_88[0] == false) {
    *(int *)((longlong)this + 0x20) = *(int *)((longlong)this + 0x20) + 1;
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = local_88[0];
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  return pFVar3;
}

// InitializePathSeparator @ 141b44c90

void __thiscall
TDirectoryTree<int>::InitializePathSeparator(TDirectoryTree<int> *this,wchar_t param_1)

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

// InitializePathSeparator @ 141b44d70

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
InitializePathSeparator(void *this,wchar_t param_1)

{
  byte *pbVar1;
  wchar_t _C;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  FString *this_00;
  
  if ((*(char *)((longlong)this + 0x26) != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPathSeparatorInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x2db,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _C = *(wchar_t *)((longlong)this + 0x24);
  pbVar1 = (byte *)((longlong)this + 0x27);
  *pbVar1 = *pbVar1 & param_1 != _C;
  if (*pbVar1 == 0) {
    *(undefined1 *)((longlong)this + 0x26) = 1;
    *(wchar_t *)((longlong)this + 0x24) = param_1;
    return;
  }
  uVar4 = *(uint *)((longlong)this + 0x18) & 0x7fffffff;
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    do {
      this_00 = (FString *)(*(longlong *)((longlong)this + 8) + lVar6);
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
  *(undefined2 *)((longlong)this + 0x26) = 1;
  *(wchar_t *)((longlong)this + 0x24) = param_1;
  return;
}

// NormalizePathForReading @ 141b47050

bool __thiscall
TDirectoryTree<int>::NormalizePathForReading
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,
          TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38._8_8_ = *(undefined8 *)&param_1->Size;
  bVar4 = FPathViews::IsDriveSpecifierWithoutRoot(&local_38);
  if (bVar4) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48.DataPtr = (wchar_t *)0x0;
    local_48.Size = 0;
    local_38.DataPtr = (wchar_t *)0x0;
    local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
    FPathViews::SplitVolumeSpecifier(&local_28,&local_48,&local_38);
    iVar3 = local_48.Size;
    pwVar2 = local_48.DataPtr;
    uVar7 = (ulong64)local_48.Size;
    pwVar6 = param_2->CurPos;
    if (param_2->End < pwVar6 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(param_2,uVar7);
      pwVar6 = param_2->CurPos;
    }
    if (iVar3 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(pwVar6,pwVar2,uVar7 * 2);
      pwVar6 = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
      param_2->CurPos = pwVar6;
    }
    wVar1 = this->PathSeparator;
    if (param_2->End < pwVar6 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_2,1);
    }
    pwVar2 = local_38.DataPtr;
    *param_2->CurPos = wVar1;
    iVar3 = local_38.Size;
    uVar7 = (ulong64)local_38.Size;
    param_2->CurPos = param_2->CurPos + 1;
    pwVar6 = param_2->CurPos;
    if (param_2->End < pwVar6 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(param_2,uVar7);
      pwVar6 = param_2->CurPos;
    }
    if (iVar3 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(pwVar6,pwVar2,uVar7 * 2);
      pwVar6 = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
      param_2->CurPos = pwVar6;
    }
    pwVar2 = param_2->Base;
    param_1->DataPtr = pwVar2;
    param_1->Size = (int)((longlong)pwVar6 - (longlong)pwVar2 >> 1);
    *(undefined4 *)&param_1->field_0xc = local_38._12_4_;
    return true;
  }
  return false;
}

// NormalizePathForReading @ 141b471c0

bool __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
NormalizePathForReading
          (void *this,TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38._8_8_ = *(undefined8 *)&param_1->Size;
  bVar4 = FPathViews::IsDriveSpecifierWithoutRoot(&local_38);
  if (bVar4) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48.DataPtr = (wchar_t *)0x0;
    local_48.Size = 0;
    local_38.DataPtr = (wchar_t *)0x0;
    local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
    FPathViews::SplitVolumeSpecifier(&local_28,&local_48,&local_38);
    iVar3 = local_48.Size;
    pwVar2 = local_48.DataPtr;
    uVar7 = (ulong64)local_48.Size;
    pwVar6 = param_2->CurPos;
    if (param_2->End < pwVar6 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(param_2,uVar7);
      pwVar6 = param_2->CurPos;
    }
    if (iVar3 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(pwVar6,pwVar2,uVar7 * 2);
      pwVar6 = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
      param_2->CurPos = pwVar6;
    }
    wVar1 = *(wchar_t *)((longlong)this + 0x24);
    if (param_2->End < pwVar6 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_2,1);
    }
    pwVar2 = local_38.DataPtr;
    *param_2->CurPos = wVar1;
    iVar3 = local_38.Size;
    uVar7 = (ulong64)local_38.Size;
    param_2->CurPos = param_2->CurPos + 1;
    pwVar6 = param_2->CurPos;
    if (param_2->End < pwVar6 + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(param_2,uVar7);
      pwVar6 = param_2->CurPos;
    }
    if (iVar3 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(pwVar6,pwVar2,uVar7 * 2);
      pwVar6 = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
      param_2->CurPos = pwVar6;
    }
    pwVar2 = param_2->Base;
    param_1->DataPtr = pwVar2;
    param_1->Size = (int)((longlong)pwVar6 - (longlong)pwVar2 >> 1);
    *(undefined4 *)&param_1->field_0xc = local_38._12_4_;
    return true;
  }
  return false;
}

// Remove @ 141b4aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDirectoryTree<int>::Remove(TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,bool *param_2)

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

// TryFindClosestPath @ 141bb9d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<int>::TryFindClosestPath
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,
          TStringBuilderBase<wchar_t> *param_2,int **param_3)

{
  int iVar1;
  TDirectoryTree<int> *pTVar2;
  undefined1 auStack_98 [32];
  TStringView<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_68;
  wchar_t local_48 [16];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.DataPtr = param_1->DataPtr;
  iVar1 = param_1->Size;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
    param_2->CurPos = param_2->Base;
  }
  if (iVar1 != 0) {
    local_68.Base = local_48;
    local_68.bIsDynamic = false;
    local_68.bIsExternal = false;
    local_68.CurPos = local_48;
    local_68.End = (wchar_t *)local_28;
    NormalizePathForReading(this,&local_78,&local_68);
    pTVar2 = (TDirectoryTree<int> *)
             FTreeNode::TryFindClosestPath(&this->Root,&local_78,param_2,this->PathSeparator);
    if (pTVar2 != (TDirectoryTree<int> *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
      this = pTVar2;
      goto LAB_141bb9df3;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  }
  if ((-1 < (int)(this->Root).NumChildNodesAndFlags) || (this == (TDirectoryTree<int> *)0x0)) {
    return false;
  }
LAB_141bb9df3:
  if (param_3 != (int **)0x0) {
    *param_3 = (int *)this;
  }
  return true;
}

// TryFindClosestPath @ 141bb9e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<int>::TryFindClosestPath
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,FString *param_2,int **param_3)

{
  TDirectoryTree<int> *pTVar1;
  bool bVar2;
  undefined1 auStack_8c8 [32];
  TStringView<wchar_t> local_8a8;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [16];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_8c8;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  ::FString::Reset(param_2,0);
  local_8a8.DataPtr = param_1->DataPtr;
  local_8a8.Size = param_1->Size;
  local_8a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_858.CurPos = local_858.Base;
  if (param_1->Size == 0) {
LAB_141bb9f14:
    if ((-1 < (int)(this->Root).NumChildNodesAndFlags) || (this == (TDirectoryTree<int> *)0x0)) {
      bVar2 = false;
      goto LAB_141bb9f47;
    }
  }
  else {
    local_898.Base = local_878;
    local_898.bIsDynamic = false;
    local_898.bIsExternal = false;
    local_898.CurPos = local_878;
    local_898.End = (wchar_t *)&local_858;
    NormalizePathForReading(this,&local_8a8,&local_898);
    pTVar1 = (TDirectoryTree<int> *)
             FTreeNode::TryFindClosestPath(&this->Root,&local_8a8,&local_858,this->PathSeparator);
    if (pTVar1 == (TDirectoryTree<int> *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
      goto LAB_141bb9f14;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
    this = pTVar1;
  }
  ::FString::AppendChars
            (param_2,local_858.Base,
             (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
  if (param_3 != (int **)0x0) {
    *param_3 = (int *)this;
  }
  bVar2 = true;
LAB_141bb9f47:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar2;
}

// TryFindClosestPathInternal @ 141bba1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall
TDirectoryTree<int>::TryFindClosestPathInternal
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,
          TStringBuilderBase<wchar_t> *param_2)

{
  int *piVar1;
  undefined1 auStack_98 [32];
  TStringView<wchar_t> local_78;
  TStringBuilderBase<wchar_t> local_68;
  wchar_t local_48 [16];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 != (TStringBuilderBase<wchar_t> *)0x0) {
    param_2->CurPos = param_2->Base;
  }
  if (param_1->Size != 0) {
    local_68.Base = local_48;
    local_68.bIsDynamic = false;
    local_68.bIsExternal = false;
    local_68.CurPos = local_48;
    local_68.End = (wchar_t *)local_28;
    NormalizePathForReading(this,param_1,&local_68);
    local_78.DataPtr = param_1->DataPtr;
    local_78.Size = param_1->Size;
    local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
    piVar1 = FTreeNode::TryFindClosestPath(&this->Root,&local_78,param_2,this->PathSeparator);
    if (piVar1 != (int *)0x0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
      return piVar1;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
  }
  if (-1 < (int)(this->Root).NumChildNodesAndFlags) {
    this = (TDirectoryTree<int> *)0x0;
  }
  return (int *)this;
}

// TryGetChildren @ 141bba290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<int>::TryGetChildren
          (TDirectoryTree<int> *this,TStringView<wchar_t> *param_1,
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

// TryGetChildren @ 141bba3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::TryGetChildren
          (void *this,TStringView<wchar_t> *param_1,
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
     (bVar1 = false, *(int *)((longlong)this + 0x18) < 0)) {
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
                      (this,&local_848,*(wchar_t *)((longlong)this + 0x24),&local_898,param_2,
                       param_3);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  return bVar1;
}

