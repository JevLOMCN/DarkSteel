// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// IsBaseOf @ 1415c97b0

bool __thiscall
UE::Core::FVersePath::IsBaseOf(FVersePath *this,FVersePath *param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *_Str1;
  undefined4 uStack_c;
  
  iVar4 = (this->PathString).Data.ArrayNum;
  if (iVar4 < 2) goto LAB_1415c98dc;
  if ((param_1->PathString).Data.ArrayNum == 0) {
    _Str1 = L"";
  }
  else {
    _Str1 = (wchar_t *)(param_1->PathString).Data.AllocatorInstance.Data;
  }
  iVar4 = wcsncmp(_Str1,(wchar_t *)(this->PathString).Data.AllocatorInstance.Data,
                  (longlong)(iVar4 + -1));
  if (iVar4 != 0) goto LAB_1415c98dc;
  iVar8 = (param_1->PathString).Data.ArrayNum;
  iVar7 = (this->PathString).Data.ArrayNum;
  iVar4 = iVar7 + -1;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  iVar5 = 0;
  iVar6 = iVar4;
  if (iVar7 == 0) {
    iVar6 = iVar5;
  }
  if (iVar6 == iVar9) goto LAB_1415c9888;
  iVar9 = 0;
  if ((iVar7 == 0) || (iVar9 = iVar4, -1 < iVar4)) {
    iVar4 = iVar9;
    iVar7 = iVar5;
    if (iVar8 != 0) {
      iVar7 = iVar8 + -1;
    }
    if (iVar7 <= iVar4) goto LAB_1415c9845;
  }
  else {
LAB_1415c9845:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x113,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(short *)((param_1->PathString).Data.AllocatorInstance.Data + (longlong)iVar4 * 2) == 0x2f) {
LAB_1415c9888:
    if (param_2 != (TStringView<wchar_t> *)0x0) {
      iVar4 = (param_1->PathString).Data.ArrayNum;
      iVar8 = (this->PathString).Data.ArrayNum;
      iVar7 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      iVar4 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar4 = iVar5;
      }
      iVar8 = (iVar7 - iVar4) + -1;
      iVar4 = iVar7;
      if (iVar8 < iVar7) {
        iVar4 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar4) {
        iVar8 = iVar4;
      }
      param_2->DataPtr =
           (wchar_t *)
           ((param_1->PathString).Data.AllocatorInstance.Data +
           ((longlong)iVar7 - (longlong)iVar8) * 2);
      *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar8);
    }
    return true;
  }
LAB_1415c98dc:
  if (param_2 != (TStringView<wchar_t> *)0x0) {
    param_2->DataPtr = (wchar_t *)0x0;
    param_2->Size = 0;
  }
  return false;
}

// IsValidDomain @ 1415c9c50

bool __cdecl UE::Core::FVersePath::IsValidDomain(wchar_t *param_1,int param_2,FText *param_3)

{
  bool bVar1;
  wchar_t *local_res8 [4];
  
  local_res8[0] = param_1;
  bVar1 = VersePath::Private::ParseDomain<wchar_t_const_*>
                    (local_res8,param_1 + param_2,false,param_3);
  if ((bVar1) && (local_res8[0] == param_1 + param_2)) {
    return true;
  }
  return false;
}

// IsValidDomain @ 1415c9ca0

bool __cdecl UE::Core::FVersePath::IsValidDomain(wchar_t *param_1,FText *param_2)

{
  FNullTerminal FVar1;
  bool bVar2;
  wchar_t *local_res8 [4];
  
  local_res8[0]._0_1_ = SUB81(param_1,0);
  FVar1 = local_res8[0]._0_1_;
  local_res8[0] = param_1;
  bVar2 = VersePath::Private::ParseDomain<UE::VersePath::Private::FNullTerminal>
                    (local_res8,FVar1,false,param_2);
  if ((bVar2) && (*local_res8[0] == L'\0')) {
    return true;
  }
  return false;
}

// IsValidFullPath @ 1415c9cf0

bool __cdecl UE::Core::FVersePath::IsValidFullPath(wchar_t *param_1,int param_2,FText *param_3)

{
  wchar_t *pwVar1;
  bool bVar2;
  FText *pFVar3;
  wchar_t *local_res8;
  FText local_18;
  
  pwVar1 = param_1 + param_2;
  if ((param_1 == pwVar1) || (*param_1 != L'/')) {
    if (param_3 != (FText *)0x0) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"VersePath",L"StartWithSlash",
                          L"Verse path must start with a slash");
      FText::operator=(param_3,pFVar3);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    local_res8 = param_1 + 1;
    bVar2 = VersePath::Private::ParseDomain<wchar_t_const_*>(&local_res8,pwVar1,true,param_3);
    if (bVar2) {
      if (local_res8 != pwVar1) {
        if (*local_res8 == L'/') {
          local_res8 = local_res8 + 1;
          bVar2 = VersePath::Private::ParseSubpath<wchar_t_const_*>(&local_res8,pwVar1,param_3);
          if (!bVar2) {
            return false;
          }
        }
        if (local_res8 != pwVar1) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// IsValidFullPath @ 1415c9dd0

bool __cdecl UE::Core::FVersePath::IsValidFullPath(wchar_t *param_1,FText *param_2)

{
  bool bVar1;
  FText *pFVar2;
  wchar_t *local_res8 [4];
  FText local_18;
  
  if ((*param_1 == L'\0') || (*param_1 != L'/')) {
    if (param_2 != (FText *)0x0) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"VersePath",L"StartWithSlash",
                          L"Verse path must start with a slash");
      FText::operator=(param_2,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    local_res8[0] = param_1 + 1;
    bVar1 = VersePath::Private::ParseDomain<UE::VersePath::Private::FNullTerminal>
                      (local_res8,local_res8[0]._0_1_,true,param_2);
    if (bVar1) {
      if ((*local_res8[0] != L'\0') && (*local_res8[0] == L'/')) {
        local_res8[0] = local_res8[0] + 1;
        bVar1 = VersePath::Private::ParseSubpath<UE::VersePath::Private::FNullTerminal>
                          (local_res8,local_res8[0]._0_1_,param_2);
        if (!bVar1) {
          return false;
        }
      }
      if (*local_res8[0] == L'\0') {
        return true;
      }
    }
  }
  return false;
}

// IsValidIdent @ 1415c9fe0

bool __cdecl
UE::Core::FVersePath::IsValidIdent(wchar_t *param_1,int param_2,FText *param_3,FText *param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  FText *pFVar4;
  wchar_t *local_res8;
  undefined1 local_res10 [8];
  
  if (param_3 != (FText *)0x0) {
    pFVar4 = FText::GetEmpty();
    pIVar1 = (param_3->TextData).Reference;
    pIVar2 = (pFVar4->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (param_3->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    param_3->Flags = pFVar4->Flags;
  }
  local_res8 = param_1;
  bVar3 = VersePath::Private::ParseIdent<wchar_t_const_*>
                    (&local_res8,param_1 + param_2,false,param_3,param_4);
  if ((bVar3) && (local_res8 == param_1 + param_2)) {
    return true;
  }
  return false;
}

// IsValidIdent @ 1415ca0b0

bool __cdecl UE::Core::FVersePath::IsValidIdent(wchar_t *param_1,FText *param_2,FText *param_3)

{
  FNullTerminal FVar1;
  bool bVar2;
  wchar_t *local_res8 [4];
  
  local_res8[0]._0_1_ = SUB81(param_1,0);
  FVar1 = local_res8[0]._0_1_;
  local_res8[0] = param_1;
  bVar2 = VersePath::Private::ParseIdent<UE::VersePath::Private::FNullTerminal>
                    (local_res8,FVar1,false,param_2,param_3);
  if ((bVar2) && (*local_res8[0] == L'\0')) {
    return true;
  }
  return false;
}

// IsValidSubpath @ 1415ca280

bool __cdecl UE::Core::FVersePath::IsValidSubpath(wchar_t *param_1,int param_2,FText *param_3)

{
  bool bVar1;
  wchar_t *local_res8 [4];
  
  local_res8[0] = param_1;
  bVar1 = VersePath::Private::ParseSubpath<wchar_t_const_*>(local_res8,param_1 + param_2,param_3);
  if ((bVar1) && (local_res8[0] == param_1 + param_2)) {
    return true;
  }
  return false;
}

// IsValidSubpath @ 1415ca2c0

bool __cdecl UE::Core::FVersePath::IsValidSubpath(wchar_t *param_1,FText *param_2)

{
  FNullTerminal FVar1;
  bool bVar2;
  wchar_t *local_res8 [4];
  
  local_res8[0]._0_1_ = SUB81(param_1,0);
  FVar1 = local_res8[0]._0_1_;
  local_res8[0] = param_1;
  bVar2 = VersePath::Private::ParseSubpath<UE::VersePath::Private::FNullTerminal>
                    (local_res8,FVar1,param_2);
  if ((bVar2) && (*local_res8[0] == L'\0')) {
    return true;
  }
  return false;
}

// TryMake @ 1416062a0

bool __cdecl UE::Core::FVersePath::TryMake(FVersePath *param_1,FString *param_2,FText *param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar5 = IsValidFullPath(pwVar7,param_3);
  if (bVar5) {
    if (&param_1->PathString != param_2) {
      pFVar4 = (param_1->PathString).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->PathString).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->PathString).Data.ArrayNum = (param_2->Data).ArrayNum;
      (param_1->PathString).Data.ArrayMax = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
    iVar3 = (param_1->PathString).Data.ArrayNum;
    pFVar4 = (param_1->PathString).Data.AllocatorInstance.Data;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    pFVar1 = pFVar4 + (longlong)iVar6 * 2;
    while ((pFVar4 = pFVar4 + 2, pFVar4 != pFVar1 && (uVar2 = *(ushort *)pFVar4, uVar2 != 0x2f))) {
      *(ushort *)pFVar4 = (-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2;
    }
    return true;
  }
  return false;
}

// TryMake @ 141606370

bool __cdecl UE::Core::FVersePath::TryMake(FVersePath *param_1,FString *param_2,FText *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar6 = IsValidFullPath(pwVar8,param_3);
  if (!bVar6) {
    return false;
  }
  if (&param_1->PathString != param_2) {
    iVar4 = (param_1->PathString).Data.ArrayMax;
    piVar1 = &(param_1->PathString).Data.ArrayMax;
    iVar7 = (param_2->Data).ArrayNum;
    pFVar5 = (param_2->Data).AllocatorInstance.Data;
    (param_1->PathString).Data.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,iVar4,(ForAnyElementType *)param_1,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((param_1->PathString).Data.AllocatorInstance.Data,pFVar5,(longlong)iVar7 * 2);
      }
    }
  }
  iVar4 = (param_1->PathString).Data.ArrayNum;
  pFVar5 = (param_1->PathString).Data.AllocatorInstance.Data;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  pFVar2 = pFVar5 + (longlong)iVar7 * 2;
  while ((pFVar5 = pFVar5 + 2, pFVar5 != pFVar2 && (uVar3 = *(ushort *)pFVar5, uVar3 != 0x2f))) {
    *(ushort *)pFVar5 = (-(ushort)(uVar3 - 0x41 < 0x1a) & 0x20) + uVar3;
  }
  return true;
}

