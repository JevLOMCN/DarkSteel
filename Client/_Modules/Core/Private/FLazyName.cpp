// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// CallParseNumber<char> @ 141a490e0

uint __cdecl FLazyName::CallParseNumber<char>(char *param_1,int param_2)

{
  uint uVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = UE::Core::Private::ParseNumberFromName<char>(param_1,local_res10);
  return uVar1;
}

// CallParseNumber<char8_t> @ 141a49100

uint __cdecl FLazyName::CallParseNumber<char8_t>(uchar *param_1,int param_2)

{
  uint uVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = UE::Core::Private::ParseNumberFromName<char8_t>(param_1,local_res10);
  return uVar1;
}

// CallParseNumber<wchar_t> @ 141a49120

uint __cdecl FLazyName::CallParseNumber<wchar_t>(wchar_t *param_1,int param_2)

{
  uint uVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = UE::Core::Private::ParseNumberFromName<wchar_t>(param_1,local_res10);
  return uVar1;
}

// Resolve @ 141a90580

FName __thiscall FLazyName::Resolve(FLazyName *this)

{
  ELiteralType EVar1;
  byte bVar2;
  wchar_t wVar3;
  uint uVar4;
  wchar_t *_Str;
  code *pcVar5;
  bool bVar6;
  FName FVar7;
  size_t sVar8;
  FNameEntryIds FVar9;
  int iVar10;
  wchar_t *pwVar11;
  FName in_RDX;
  FNameEntryIds FVar12;
  FNameEntryIds FVar13;
  FNameEntryIds FVar14;
  FWideStringViewWithWidth local_res8;
  FNameUtf8StringViewWithWidth local_res18;
  undefined8 uStack_90;
  wchar_t *local_88;
  int iStack_80;
  uint uStack_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  FNameStringView_u_0 local_38;
  ulonglong uStack_30;
  
  _Str = (this->Either).WideLiteral;
  if ((longlong)_Str < 0) {
    *(uint *)((longlong)in_RDX + 4) = this->Number;
    *(int *)in_RDX = (int)_Str;
    return in_RDX;
  }
  EVar1 = this->LiteralType;
  FVar13.ComparisonId.Value = 0;
  FVar13.DisplayId.Value = 0;
  FVar9.ComparisonId.Value = 0;
  FVar9.DisplayId.Value = 0;
  local_68 = _Str;
  if (EVar1 == AnsiLiteral) {
    if (_Str != (wchar_t *)0x0) {
      sVar8 = strlen((char *)_Str);
      local_88 = local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)sVar8);
      uStack_90 = uStack_60;
      if ((int)sVar8 != 0) {
        UE::Core::Private::ParseNumberFromName<char>((char *)_Str,(int *)&uStack_90);
        uVar4 = uStack_7c;
        iStack_80 = (int)uStack_90;
        if (iStack_80 != 0) {
          uStack_7c = uStack_7c & 0xffffff00;
          uStack_30 = CONCAT44(uVar4,iStack_80) & 0xffffff00ffffffff;
          local_38.Wide = local_88;
          FVar9 = FNameHelper::FindOrStoreString((FNameStringView *)&local_38,FNAME_Add);
        }
      }
    }
  }
  else if (EVar1 == Utf8Literal) {
    FVar14.ComparisonId.Value = 0;
    FVar14.DisplayId.Value = 0;
    pwVar11 = _Str;
    if (_Str != (wchar_t *)0x0) {
      bVar2 = (byte)*_Str;
      FVar13 = FVar14;
      while (bVar2 != 0) {
        pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
        FVar13.ComparisonId.Value = FVar13.ComparisonId.Value.Value | (uint)bVar2;
        FVar13.DisplayId.Value = 0;
        bVar2 = *(byte *)pwVar11;
      }
    }
    iVar10 = (int)pwVar11 - (int)_Str;
    uStack_90 = CONCAT44(CONCAT31(uStack_90._5_3_,((ulonglong)FVar13 & 0xffffff80) != 0),iVar10);
    uStack_60 = uStack_90;
    if (iVar10 == 0) {
      FVar9.ComparisonId.Value = 0;
      FVar9.DisplayId.Value = 0;
    }
    else {
      UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)_Str,(int *)&uStack_60);
      local_48 = local_68;
      uStack_40 = uStack_60;
      FNameHelper::MakeWithNumber(&local_res18,(EFindName)&local_48,1);
      FVar9 = (FNameEntryIds)((ulonglong)local_res18.Str & 0xffffffff);
    }
  }
  else if (EVar1 == WideLiteral) {
    FVar12.ComparisonId.Value = 0;
    FVar12.DisplayId.Value = 0;
    pwVar11 = _Str;
    if (_Str != (wchar_t *)0x0) {
      wVar3 = *_Str;
      FVar13 = FVar12;
      while (wVar3 != L'\0') {
        pwVar11 = pwVar11 + 1;
        FVar13.ComparisonId.Value = FVar13.ComparisonId.Value.Value | (uint)(ushort)wVar3;
        FVar13.DisplayId.Value = 0;
        wVar3 = *pwVar11;
      }
    }
    iVar10 = (int)((longlong)pwVar11 - (longlong)_Str >> 1);
    uStack_90 = CONCAT44(CONCAT31(uStack_90._5_3_,((ulonglong)FVar13 & 0xffffff80) != 0),iVar10);
    uStack_70 = uStack_90;
    if (iVar10 == 0) {
      FVar9.ComparisonId.Value = 0;
      FVar9.DisplayId.Value = 0;
    }
    else {
      local_78 = _Str;
      UE::Core::Private::ParseNumberFromName<wchar_t>(_Str,(int *)&uStack_70);
      local_58 = local_78;
      uStack_50 = uStack_70;
      FNameHelper::MakeWithNumber(&local_res8,(EFindName)&local_58,1);
      FVar9 = (FNameEntryIds)((ulonglong)local_res8.Str & 0xffffffff);
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x11b0,L"");
    FVar9 = FVar13;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar7 = (FName)(*pcVar5)();
      return FVar7;
    }
  }
  (this->Either).PackedName = (ulonglong)FVar9 & 0xffffffff | 0x8000000000000000;
  uVar4 = this->Number;
  *(uint *)in_RDX = FVar9.ComparisonId.Value.Value;
  *(uint *)((longlong)in_RDX + 4) = uVar4;
  return in_RDX;
}

// ToString @ 141a971f0

FString * __thiscall FLazyName::ToString(FLazyName *this,FString *__return_storage_ptr__)

{
  FName this_00;
  
  this_00 = Resolve(this);
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToUtf8String @ 141a97820

FUtf8String * __thiscall
FLazyName::ToUtf8String(FLazyName *this,FUtf8String *__return_storage_ptr__)

{
  FName this_00;
  
  this_00 = Resolve(this);
  ::FName::ToUtf8String((FName *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// UEOpEquals @ 141a992f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FLazyName::UEOpEquals(FLazyName *this,FLazyName *param_1)

{
  ELiteralType EVar1;
  ELiteralType EVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ELiteralType EVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FName FVar9;
  FName FVar10;
  wchar_t *_Str;
  undefined1 auStack_898 [48];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  pwVar3 = (wchar_t *)(param_1->Either).AnsiLiteral;
  pwVar4 = (wchar_t *)(this->Either).AnsiLiteral;
  if (((longlong)pwVar4 < 0) || ((longlong)pwVar3 < 0)) {
    FVar9 = Resolve(param_1);
    FVar10 = Resolve(this);
    return *(longlong *)FVar10 == *(longlong *)FVar9;
  }
  if (pwVar4 == pwVar3) {
    return true;
  }
  EVar1 = this->LiteralType;
  EVar2 = param_1->LiteralType;
  _Str = pwVar3;
  EVar5 = EVar1;
  if (EVar1 <= EVar2) {
    _Str = pwVar4;
    EVar5 = EVar2;
    pwVar4 = pwVar3;
  }
  if (EVar5 == WideLiteral) {
    if (EVar1 <= EVar2) {
      EVar2 = EVar1;
    }
    if (EVar2 == AnsiLiteral) {
      iVar6 = FGenericPlatformStricmp::Stricmp((char *)_Str,pwVar4);
      goto LAB_141a993a7;
    }
    if (EVar2 == Utf8Literal) {
      local_868.Base = local_848;
      local_868.CurPos = local_848;
      local_868.End = local_32;
      iVar6 = 0;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      if (_Str != (wchar_t *)0x0) {
        sVar8 = strlen((char *)_Str);
        iVar6 = (int)sVar8;
      }
      iVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)_Str,iVar6);
      if (local_868.End < local_868.CurPos + iVar7) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar7);
      }
      if (iVar6 != 0) {
        local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar7,(uchar *)_Str,iVar6);
      }
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\0';
      iVar6 = FGenericPlatformStricmp::Stricmp(local_868.Base,pwVar4);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return iVar6 == 0;
    }
    if (EVar2 == WideLiteral) {
      iVar6 = FGenericPlatformStricmp::Stricmp(_Str,pwVar4);
      goto LAB_141a993a7;
    }
  }
  else if (EVar5 == Utf8Literal) {
    iVar6 = FGenericPlatformStricmp::Stricmp((uchar *)_Str,(uchar *)pwVar4);
    return iVar6 == 0;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((char *)_Str,(char *)pwVar4);
LAB_141a993a7:
  return iVar6 == 0;
}

// UEOpEquals @ 141a99530

bool __thiscall FLazyName::UEOpEquals(FLazyName *this,FName param_1)

{
  byte bVar1;
  wchar_t *_Str;
  bool bVar2;
  size_t sVar3;
  FName FVar4;
  int iVar5;
  wchar_t *pwVar6;
  byte bVar7;
  uchar *local_res8;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  _Str = (wchar_t *)(this->Either).AnsiLiteral;
  if (((longlong)_Str < 0) || (param_1 != (FName)0x0)) {
    FVar4 = Resolve(this);
    return param_1 == *(FName *)FVar4;
  }
  if (this->LiteralType == AnsiLiteral) {
    iVar5 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar3 = strlen((char *)_Str);
      iVar5 = (int)sVar3;
    }
    bVar2 = FNameHelper::EqualsString<char>((FName)0x0,(char *)_Str,iVar5);
    return bVar2;
  }
  if (this->LiteralType == Utf8Literal) {
    bVar7 = 0;
    pwVar6 = _Str;
    if (_Str != (wchar_t *)0x0) {
      bVar1 = (byte)*_Str;
      bVar7 = 0;
      while (bVar1 != 0) {
        pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
        bVar7 = bVar7 | bVar1;
        bVar1 = *(byte *)pwVar6;
      }
    }
    iVar5 = (int)pwVar6 - (int)_Str;
    _iStack_10 = CONCAT44(CONCAT31(uStack_c._1_3_,(bVar7 & 0x80) != 0),iVar5);
    if (iVar5 == 0) {
      return true;
    }
    local_18 = _Str;
    UE::Core::Private::ParseNumberFromName<char8_t>((uchar *)_Str,&iStack_10);
    FNameHelper::MakeWithNumber((FNameUtf8StringViewWithWidth *)&local_res8,(EFindName)&local_18,1);
    return local_res8 == (uchar *)0x0;
  }
  iVar5 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar5 = (int)sVar3;
  }
  bVar2 = FNameHelper::EqualsString<wchar_t>((FName)0x0,_Str,iVar5);
  return bVar2;
}

