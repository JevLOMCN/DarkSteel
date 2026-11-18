// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 88

// operator()<short_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142ccce20

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::SortByPrefix'::__l4::<lambda_1>::
operator()<short_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,short *param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  ulonglong local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  local_38 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  uStack_30 = 1;
  if (iVar2 < 2) {
    if (-iVar2 < 8) {
      local_38 = ((ulonglong)(ushort)-(*param_1 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_1;
      iVar1 = iVar2 * 8 + 0x30;
      bVar5 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = local_38 >> (-bVar5 & 0x3f);
      }
      else {
        local_38 = local_38 << (bVar5 & 0x3f);
      }
      if (1 < (int)(8 - (2U - iVar2 & 7))) {
        local_28.View.DataPtr = (param_2->View).DataPtr;
        local_28.View.Size = (param_2->View).Size;
        local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
        pFVar4 = UE::Editor::DataStorage::
                 TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                 ::CalculatePrefix(&local_18,2,iVar2,&local_28);
        local_38 = pFVar4->Prefix | local_38;
        uStack_30 = (undefined1)*(undefined8 *)&pFVar4->bHasRemainingBytes;
      }
    }
  }
  else if (1 < (int)(8 - (2U - iVar2 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar4 = UE::Editor::DataStorage::
             TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,2,iVar2,&local_28);
    uVar3 = *(undefined4 *)&pFVar4->bHasRemainingBytes;
    __return_storage_ptr__->Prefix = pFVar4->Prefix;
    *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,(char)uVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&> @ 142cccf60

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
SortByPrefix'::__l4::<lambda_1>::operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  int iVar5;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar1 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar1 < 4) {
    if (-iVar1 < 8) {
      iVar5 = iVar1 * 8 + 0x20;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        local_18.Prefix = (ulong64)(*param_1 >> (-bVar2 & 0x3f));
      }
      else {
        local_18.Prefix = (ulonglong)*param_1 << (bVar2 & 0x3f);
      }
      UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_int_&>
                (&local_18,4,iVar1,param_2,param_3);
    }
  }
  else if (iVar1 < 8) {
    if (4 - iVar1 < 8) {
      bVar2 = (byte)(iVar1 * 8);
      if (iVar1 * 8 < 0) {
        local_18.Prefix = (ulong64)(*param_2 >> (-bVar2 & 0x3f));
      }
      else {
        local_18.Prefix = (ulonglong)*param_2 << (bVar2 & 0x3f);
      }
      iVar5 = 8 - iVar1;
      if (iVar5 < 8) {
        iVar1 = iVar1 * 8 + -0x20;
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          uVar4 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_3 << (bVar2 & 0x3f);
        }
        uVar3 = uVar4 | local_18.Prefix;
        goto LAB_142ccd022;
      }
    }
  }
  else {
    iVar5 = 8 - iVar1;
    if (iVar5 < 8) {
      iVar1 = iVar1 * 8 + -0x20;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = (ulong64)(*param_3 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_3 << (bVar2 & 0x3f);
      }
LAB_142ccd022:
      __return_storage_ptr__->Prefix = uVar3;
      *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
           CONCAT71(local_18._9_7_,8 < iVar5 + 4U);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142ccd0a0

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::SortByPrefix'::__l4::<lambda_1>::
operator()<unsigned_int_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  ulonglong local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  local_38 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  uStack_30 = 1;
  if (iVar2 < 4) {
    if (-iVar2 < 8) {
      iVar1 = iVar2 * 8 + 0x20;
      bVar5 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = (ulonglong)(*param_1 >> (-bVar5 & 0x3f));
      }
      else {
        local_38 = (ulonglong)*param_1 << (bVar5 & 0x3f);
      }
      if (1 < (int)(8 - (-iVar2 - 4U & 7))) {
        local_28.View.DataPtr = (param_2->View).DataPtr;
        local_28.View.Size = (param_2->View).Size;
        local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
        pFVar4 = UE::Editor::DataStorage::
                 TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                 ::CalculatePrefix(&local_18,4,iVar2,&local_28);
        local_38 = pFVar4->Prefix | local_38;
        uStack_30 = (undefined1)*(undefined8 *)&pFVar4->bHasRemainingBytes;
      }
    }
  }
  else if (1 < (int)(8 - (-iVar2 - 4U & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar4 = UE::Editor::DataStorage::
             TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,4,iVar2,&local_28);
    uVar3 = *(undefined4 *)&pFVar4->bHasRemainingBytes;
    __return_storage_ptr__->Prefix = pFVar4->Prefix;
    *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,(char)uVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// operator()<unsigned___int64_&,unsigned___int64_&,unsigned___int64_&> @ 142ccd1c0

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix'::__l4::
<lambda_1>::operator()<unsigned___int64_&,unsigned___int64_&,unsigned___int64_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,ulong64 *param_1,ulong64 *param_2,
          ulong64 *param_3)

{
  int iVar1;
  byte bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  int iVar5;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar1 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar1 < 8) {
    if (-iVar1 < 8) {
      bVar2 = (byte)(iVar1 * 8);
      if (iVar1 * 8 < 0) {
        local_18.Prefix = *param_1 >> (-bVar2 & 0x3f);
      }
      else {
        local_18.Prefix = *param_1 << (bVar2 & 0x3f);
      }
      UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64,unsigned___int64_&>
                (&local_18,8,iVar1,param_2,param_3);
    }
  }
  else if (iVar1 < 0x10) {
    if (8 - iVar1 < 8) {
      iVar5 = iVar1 * 8 + -0x40;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        local_18.Prefix = *param_2 >> (-bVar2 & 0x3f);
      }
      else {
        local_18.Prefix = *param_2 << (bVar2 & 0x3f);
      }
      iVar5 = 0x10 - iVar1;
      if (iVar5 < 8) {
        iVar1 = iVar1 * 8 + -0x80;
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          uVar4 = *param_3 >> (-bVar2 & 0x3f);
        }
        else {
          uVar4 = *param_3 << (bVar2 & 0x3f);
        }
        uVar3 = uVar4 | local_18.Prefix;
        goto LAB_142ccd284;
      }
    }
  }
  else {
    iVar5 = 0x10 - iVar1;
    if (iVar5 < 8) {
      iVar1 = iVar1 * 8 + -0x80;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = *param_3 >> (-bVar2 & 0x3f);
      }
      else {
        uVar3 = *param_3 << (bVar2 & 0x3f);
      }
LAB_142ccd284:
      __return_storage_ptr__->Prefix = uVar3;
      *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
           CONCAT71(local_18._9_7_,8 < iVar5 + 8U);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<short_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142ccd300

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix'::__l2::<lambda_1>::
operator()<short_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,short *param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  ulonglong local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  local_38 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  uStack_30 = 1;
  if (iVar2 < 2) {
    if (-iVar2 < 8) {
      local_38 = ((ulonglong)(ushort)-(*param_1 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_1;
      iVar1 = iVar2 * 8 + 0x30;
      bVar5 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = local_38 >> (-bVar5 & 0x3f);
      }
      else {
        local_38 = local_38 << (bVar5 & 0x3f);
      }
      if (1 < (int)(8 - (2U - iVar2 & 7))) {
        local_28.View.DataPtr = (param_2->View).DataPtr;
        local_28.View.Size = (param_2->View).Size;
        local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
        pFVar4 = UE::Editor::DataStorage::
                 TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                 ::CalculatePrefix(&local_18,2,iVar2,&local_28);
        local_38 = pFVar4->Prefix | local_38;
        uStack_30 = (undefined1)*(undefined8 *)&pFVar4->bHasRemainingBytes;
      }
    }
  }
  else if (1 < (int)(8 - (2U - iVar2 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar4 = UE::Editor::DataStorage::
             TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,2,iVar2,&local_28);
    uVar3 = *(undefined4 *)&pFVar4->bHasRemainingBytes;
    __return_storage_ptr__->Prefix = pFVar4->Prefix;
    *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,(char)uVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&> @ 142ccd440

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::CalculatePrefix'::__l2::<lambda_1>::
operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,ushort *param_1,uint *param_2,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_3)

{
  int iVar1;
  int iVar2;
  FPrefixInfo *pFVar3;
  byte bVar4;
  ulonglong uVar5;
  ulong64 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  local_38 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  uStack_30 = 1;
  if (iVar2 < 2) {
    if (-iVar2 < 8) {
      iVar1 = iVar2 * 8 + 0x30;
      bVar4 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = (ulong64)(*param_1 >> (-bVar4 & 0x3f));
      }
      else {
        local_38 = (ulonglong)*param_1 << (bVar4 & 0x3f);
      }
      if (2 - iVar2 < 8) {
        iVar1 = iVar2 * 8 + 0x10;
        bVar4 = (byte)iVar1;
        if (iVar1 < 0) {
          uVar5 = (ulonglong)(*param_2 >> (-bVar4 & 0x3f));
        }
        else {
          uVar5 = (ulonglong)*param_2 << (bVar4 & 0x3f);
        }
        local_38 = uVar5 | local_38;
        if (1 < (int)(8 - (-iVar2 - 2U & 7))) {
          local_28.View.DataPtr = (param_3->View).DataPtr;
          local_28.View.Size = (param_3->View).Size;
          local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
          pFVar3 = UE::Editor::DataStorage::
                   TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                   ::CalculatePrefix(&local_18,6,iVar2,&local_28);
          uStack_30 = (undefined1)*(undefined8 *)&pFVar3->bHasRemainingBytes;
          local_38 = local_38 | pFVar3->Prefix;
        }
      }
    }
  }
  else if (iVar2 < 6) {
    if (2 - iVar2 < 8) {
      iVar1 = iVar2 * 8 + 0x10;
      bVar4 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = (ulong64)(*param_2 >> (-bVar4 & 0x3f));
      }
      else {
        local_38 = (ulonglong)*param_2 << (bVar4 & 0x3f);
      }
      if (1 < (int)(8 - (-iVar2 - 2U & 7))) {
        local_28.View.DataPtr = (param_3->View).DataPtr;
        local_28.View.Size = (param_3->View).Size;
        local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
        pFVar3 = UE::Editor::DataStorage::
                 TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                 ::CalculatePrefix(&local_18,6,iVar2,&local_28);
        uStack_30 = (undefined1)*(undefined8 *)&pFVar3->bHasRemainingBytes;
        local_38 = pFVar3->Prefix | local_38;
      }
    }
  }
  else if (1 < (int)(8 - (-iVar2 - 2U & 7))) {
    local_28.View.DataPtr = (param_3->View).DataPtr;
    local_28.View.Size = (param_3->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
    pFVar3 = UE::Editor::DataStorage::
             TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,6,iVar2,&local_28);
    local_38 = pFVar3->Prefix;
    uStack_30 = (undefined1)*(undefined4 *)&pFVar3->bHasRemainingBytes;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,unsigned_char_const_&> @ 142ccd620

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::CalculatePrefix'
::__l2::<lambda_1>::operator()<unsigned_int_const_&,unsigned_char_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  iVar1 = *(int *)((longlong)this + 8);
  local_18 = 0;
  bStack_10 = true;
  if (iVar1 < 4) {
    if (7 < -iVar1) goto LAB_142ccd6c6;
    iVar2 = iVar1 * 8 + 0x20;
    bVar3 = (byte)iVar2;
    if (iVar2 < 0) {
      local_18 = (ulong64)(*param_1 >> (-bVar3 & 0x3f));
    }
    else {
      local_18 = (ulonglong)*param_1 << (bVar3 & 0x3f);
    }
    iVar2 = 4 - iVar1;
    if (7 < iVar2) goto LAB_142ccd6c6;
    iVar1 = iVar1 * 8 + 0x18;
    bVar3 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = (ulonglong)(*param_2 >> (-bVar3 & 0x3f));
    }
    else {
      uVar4 = (ulonglong)*param_2 << (bVar3 & 0x3f);
    }
    local_18 = uVar4 | local_18;
  }
  else {
    iVar2 = 4 - iVar1;
    if (7 < iVar2) goto LAB_142ccd6c6;
    iVar1 = iVar1 * 8 + 0x18;
    bVar3 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)(*param_2 >> (-bVar3 & 0x3f));
    }
    else {
      local_18 = (ulonglong)*param_2 << (bVar3 & 0x3f);
    }
  }
  bStack_10 = 8 < iVar2 + 1U;
LAB_142ccd6c6:
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&> @ 142ccd6e0

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::CalculatePrefix'::
__l2::<lambda_1>::
operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uchar *param_2,
          ushort *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar2 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar2 < 4) {
    if (7 < -iVar2) goto LAB_142ccd7b0;
    iVar1 = iVar2 * 8 + 0x20;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_1 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_1 << (bVar4 & 0x3f);
    }
    if (7 < 4 - iVar2) goto LAB_142ccd7b0;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
    local_18.Prefix = uVar3 | local_18.Prefix;
  }
  else if (iVar2 < 5) {
    if (7 < 4 - iVar2) goto LAB_142ccd7b0;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
  }
  UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short,unsigned_int_const_&>
            (&local_18,5,iVar2,param_3,param_4);
LAB_142ccd7b0:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&> @ 142ccd7d0

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::CalculatePrefix'::__l2::<lambda_1>::
operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uchar *param_2,
          ushort *param_3,uint *param_4,ulong64 *param_5,ushort *param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar2 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar2 < 4) {
    if (7 < -iVar2) goto LAB_142ccd8c4;
    iVar1 = iVar2 * 8 + 0x20;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_1 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_1 << (bVar4 & 0x3f);
    }
    if (7 < 4 - iVar2) goto LAB_142ccd8c4;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
    local_18.Prefix = uVar3 | local_18.Prefix;
  }
  else if (iVar2 < 5) {
    if (7 < 4 - iVar2) goto LAB_142ccd8c4;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
  }
  UE::Editor::DataStorage::Private::
  CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
            (&local_18,5,iVar2,param_3,param_4,param_5,param_6);
LAB_142ccd8c4:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142ccd8e0

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::CalculatePrefix'::__l2::<lambda_1>::
operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uchar *param_2,
          ushort *param_3,uint *param_4,ulong64 *param_5,ushort *param_6,uchar *param_7,
          ushort *param_8)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar2 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar2 < 4) {
    if (7 < -iVar2) goto LAB_142ccd9ee;
    iVar1 = iVar2 * 8 + 0x20;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_1 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_1 << (bVar4 & 0x3f);
    }
    if (7 < 4 - iVar2) goto LAB_142ccd9ee;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
    local_18.Prefix = uVar3 | local_18.Prefix;
  }
  else if (iVar2 < 5) {
    if (7 < 4 - iVar2) goto LAB_142ccd9ee;
    iVar1 = iVar2 * 8 + 0x18;
    bVar4 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*param_2 >> (-bVar4 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*param_2 << (bVar4 & 0x3f);
    }
  }
  UE::Editor::DataStorage::Private::
  CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
            (&local_18,5,iVar2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_142ccd9ee:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,unsigned_int_const_&,unsigned_int_const_&> @ 142ccda10

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
CalculatePrefix'::__l2::<lambda_1>::
operator()<unsigned_int_const_&,unsigned_int_const_&,unsigned_int_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  int iVar5;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar1 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar1 < 4) {
    if (-iVar1 < 8) {
      iVar5 = iVar1 * 8 + 0x20;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        local_18.Prefix = (ulong64)(*param_1 >> (-bVar2 & 0x3f));
      }
      else {
        local_18.Prefix = (ulonglong)*param_1 << (bVar2 & 0x3f);
      }
      UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_int_const_&>
                (&local_18,4,iVar1,param_2,param_3);
    }
  }
  else if (iVar1 < 8) {
    if (4 - iVar1 < 8) {
      bVar2 = (byte)(iVar1 * 8);
      if (iVar1 * 8 < 0) {
        local_18.Prefix = (ulong64)(*param_2 >> (-bVar2 & 0x3f));
      }
      else {
        local_18.Prefix = (ulonglong)*param_2 << (bVar2 & 0x3f);
      }
      iVar5 = 8 - iVar1;
      if (iVar5 < 8) {
        iVar1 = iVar1 * 8 + -0x20;
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          uVar4 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_3 << (bVar2 & 0x3f);
        }
        uVar3 = uVar4 | local_18.Prefix;
        goto LAB_142ccdad2;
      }
    }
  }
  else {
    iVar5 = 8 - iVar1;
    if (iVar5 < 8) {
      iVar1 = iVar1 * 8 + -0x20;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = (ulong64)(*param_3 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_3 << (bVar2 & 0x3f);
      }
LAB_142ccdad2:
      __return_storage_ptr__->Prefix = uVar3;
      *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
           CONCAT71(local_18._9_7_,8 < iVar5 + 4U);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// operator()<unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142ccdb50

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix'::__l2::<lambda_1>::
operator()<unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,uint *param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FPrefixInfo *pFVar4;
  byte bVar5;
  ulonglong local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  local_38 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  uStack_30 = 1;
  if (iVar2 < 4) {
    if (-iVar2 < 8) {
      iVar1 = iVar2 * 8 + 0x20;
      bVar5 = (byte)iVar1;
      if (iVar1 < 0) {
        local_38 = (ulonglong)(*param_1 >> (-bVar5 & 0x3f));
      }
      else {
        local_38 = (ulonglong)*param_1 << (bVar5 & 0x3f);
      }
      if (1 < (int)(8 - (-iVar2 - 4U & 7))) {
        local_28.View.DataPtr = (param_2->View).DataPtr;
        local_28.View.Size = (param_2->View).Size;
        local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
        pFVar4 = UE::Editor::DataStorage::
                 TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                 ::CalculatePrefix(&local_18,4,iVar2,&local_28);
        local_38 = pFVar4->Prefix | local_38;
        uStack_30 = (undefined1)*(undefined8 *)&pFVar4->bHasRemainingBytes;
      }
    }
  }
  else if (1 < (int)(8 - (-iVar2 - 4U & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar4 = UE::Editor::DataStorage::
             TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
             ::CalculatePrefix(&local_18,4,iVar2,&local_28);
    uVar3 = *(undefined4 *)&pFVar4->bHasRemainingBytes;
    __return_storage_ptr__->Prefix = pFVar4->Prefix;
    *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,(char)uVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Prefix = local_38;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// operator()<unsigned___int64_const_&,unsigned___int64_const_&,unsigned___int64_const_&> @ 142ccdc70

FPrefixInfo * __thiscall
`UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::CalculatePrefix'::__l2::
<lambda_1>::operator()<unsigned___int64_const_&,unsigned___int64_const_&,unsigned___int64_const_&>
          (void *this,FPrefixInfo *__return_storage_ptr__,ulong64 *param_1,ulong64 *param_2,
          ulong64 *param_3)

{
  int iVar1;
  byte bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  int iVar5;
  FPrefixInfo local_18;
  
  local_18.Prefix = 0;
  iVar1 = *(int *)((longlong)this + 8);
  local_18.bHasRemainingBytes = true;
  if (iVar1 < 8) {
    if (-iVar1 < 8) {
      bVar2 = (byte)(iVar1 * 8);
      if (iVar1 * 8 < 0) {
        local_18.Prefix = *param_1 >> (-bVar2 & 0x3f);
      }
      else {
        local_18.Prefix = *param_1 << (bVar2 & 0x3f);
      }
      UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64,unsigned___int64_const_&>
                (&local_18,8,iVar1,param_2,param_3);
    }
  }
  else if (iVar1 < 0x10) {
    if (8 - iVar1 < 8) {
      iVar5 = iVar1 * 8 + -0x40;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        local_18.Prefix = *param_2 >> (-bVar2 & 0x3f);
      }
      else {
        local_18.Prefix = *param_2 << (bVar2 & 0x3f);
      }
      iVar5 = 0x10 - iVar1;
      if (iVar5 < 8) {
        iVar1 = iVar1 * 8 + -0x80;
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          uVar4 = *param_3 >> (-bVar2 & 0x3f);
        }
        else {
          uVar4 = *param_3 << (bVar2 & 0x3f);
        }
        uVar3 = uVar4 | local_18.Prefix;
        goto LAB_142ccdd34;
      }
    }
  }
  else {
    iVar5 = 0x10 - iVar1;
    if (iVar5 < 8) {
      iVar1 = iVar1 * 8 + -0x80;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = *param_3 >> (-bVar2 & 0x3f);
      }
      else {
        uVar3 = *param_3 << (bVar2 & 0x3f);
      }
LAB_142ccdd34:
      __return_storage_ptr__->Prefix = uVar3;
      *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
           CONCAT71(local_18._9_7_,8 < iVar5 + 8U);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// ~FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> @ 142ce4800

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
~FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>
          (FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_> @ 142ce4820

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::
~FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          (FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_> @ 142ce4840

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::
~FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
          (FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int> @ 142ce4860

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::
~FMultiValueTestSorter<unsigned_int>(FMultiValueTestSorter<unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char> @ 142ce4880

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::
~FMultiValueTestSorter<unsigned_int,unsigned_char>
          (FMultiValueTestSorter<unsigned_int,unsigned_char> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> @ 142ce48a0

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> @ 142ce48c0

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64> @ 142ce48e0

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short> @ 142ce4900

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char> @ 142ce4920

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short> @ 142ce4940

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::
~FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> @ 142ce4960

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
~FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>
          (FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_> @ 142ce4980

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::
~FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          (FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> @ 142ce49a0

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::
~FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CalculatePrefix @ 142ceca30

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
CalculatePrefix(FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this,
               FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
               uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  FPrefixInfo local_18;
  
  uVar9 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPrefixInfo *)(*pcVar2)();
    return pFVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
  local_18.Prefix = 0;
  local_18.bHasRemainingBytes = true;
  if ((int)param_3 < 1) {
    if (7 < (int)-param_3) goto LAB_142cecb11;
    uVar8 = ((ulonglong)(byte)-((char)*pFVar7 >> 7) | 0x80) ^ (ulonglong)(byte)*pFVar7;
    iVar1 = param_3 * 8 + 0x38;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = uVar8 >> (-bVar6 & 0x3f);
    }
    else {
      local_18.Prefix = uVar8 << (bVar6 & 0x3f);
    }
  }
  DataStorage::Private::CalculatePrefix<unsigned_short,unsigned___int64_const_&>
            (&local_18,1,param_3,(ushort *)(pFVar7 + 2),(ulong64 *)(pFVar7 + 8));
LAB_142cecb11:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cecb40

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
  *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           ::CalculatePrefix'::__l2::<lambda_1>::
           operator()<short_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
                     (&local_28,&local_18,(short *)pFVar1,
                      (TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
                       *)(pFVar1 + 8));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cecc00

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
  *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
           ::CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
                     (&local_28,&local_18,(ushort *)pFVar1,(uint *)(pFVar1 + 4),
                      (TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
                       *)(pFVar1 + 8));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ceccc0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::CalculatePrefix
          (FMultiValueTestSorter<unsigned_int> *this,FPrefixInfo *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  uint uVar7;
  ulong64 local_18;
  bool bStack_10;
  undefined7 uStack_f;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_18 = 0;
  bStack_10 = true;
  if ((int)-param_3 < 8) {
    uVar4 = *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    iVar1 = param_3 * 8 + 0x20;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18 = (ulong64)(uVar4 >> (-bVar6 & 0x3f));
    }
    else {
      local_18 = (ulonglong)uVar4 << (bVar6 & 0x3f);
    }
    bStack_10 = 8 < -param_3 + 4;
  }
  __return_storage_ptr__->Prefix = local_18;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes = CONCAT71(uStack_f,bStack_10);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cecdb0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::CalculatePrefix
          (FMultiValueTestSorter<unsigned_int,unsigned_char> *this,
          FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned_int,unsigned_char> *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::
           CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_int_const_&,unsigned_char_const_&>
                     (&local_28,&local_18,(uint *)pFVar1,(uchar *)(pFVar1 + 4));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cece70

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this,
               FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
               uint param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  uint uVar8;
  FPrefixInfo local_18;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FPrefixInfo *)(*pcVar3)();
    return pFVar6;
  }
  local_18.Prefix = 0;
  local_18.bHasRemainingBytes = true;
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 8;
  if ((int)param_3 < 4) {
    if (7 < (int)-param_3) goto LAB_142cecf3d;
    iVar2 = param_3 * 8 + 0x20;
    bVar7 = (byte)iVar2;
    if (iVar2 < 0) {
      local_18.Prefix = (ulong64)(*(uint *)pFVar1 >> (-bVar7 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*(uint *)pFVar1 << (bVar7 & 0x3f);
    }
  }
  DataStorage::Private::CalculatePrefix<unsigned_char,unsigned_short_const_&>
            (&local_18,4,param_3,(uchar *)(pFVar1 + 4),(ushort *)(pFVar1 + 6));
LAB_142cecf3d:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142cecf60

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::CalculatePrefix
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this,
          FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::
           CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&>
                     (&local_28,&local_18,(uint *)pFVar1,(uchar *)(pFVar1 + 4),
                      (ushort *)(pFVar1 + 6),(uint *)(pFVar1 + 8));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced030

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
                *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
               uint param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  byte bVar7;
  uint uVar8;
  FPrefixInfo local_18;
  
  uVar8 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FPrefixInfo *)(*pcVar3)();
    return pFVar6;
  }
  local_18.Prefix = 0;
  local_18.bHasRemainingBytes = true;
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18;
  if ((int)param_3 < 4) {
    if (7 < (int)-param_3) goto LAB_142ced116;
    iVar2 = param_3 * 8 + 0x20;
    bVar7 = (byte)iVar2;
    if (iVar2 < 0) {
      local_18.Prefix = (ulong64)(*(uint *)pFVar1 >> (-bVar7 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*(uint *)pFVar1 << (bVar7 & 0x3f);
    }
  }
  DataStorage::Private::
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
            (&local_18,4,param_3,(uchar *)(pFVar1 + 4),(ushort *)(pFVar1 + 6),(uint *)(pFVar1 + 8),
             (ulong64 *)(pFVar1 + 0x10));
LAB_142ced116:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced140

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
  *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_20 = param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  local_28 = this;
  pFVar5 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
           ::CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
                     (&local_28,&local_18,(uint *)pFVar7,(uchar *)(pFVar7 + 4),
                      (ushort *)(pFVar7 + 6),(uint *)(pFVar7 + 8),(ulong64 *)(pFVar7 + 0x10),
                      (ushort *)(pFVar7 + 0x18));
  bVar3 = pFVar5->bHasRemainingBytes;
  uVar2 = *(undefined7 *)&pFVar5->field_0x9;
  __return_storage_ptr__->Prefix = pFVar5->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar2;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced220

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FPrefixInfo local_18;
  
  uVar8 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPrefixInfo *)(*pcVar2)();
    return pFVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
  local_18.Prefix = 0;
  local_18.bHasRemainingBytes = true;
  if ((int)param_3 < 4) {
    if (7 < (int)-param_3) goto LAB_142ced319;
    iVar1 = param_3 * 8 + 0x20;
    bVar6 = (byte)iVar1;
    if (iVar1 < 0) {
      local_18.Prefix = (ulong64)(*(uint *)pFVar7 >> (-bVar6 & 0x3f));
    }
    else {
      local_18.Prefix = (ulonglong)*(uint *)pFVar7 << (bVar6 & 0x3f);
    }
  }
  DataStorage::Private::
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
            (&local_18,4,param_3,(uchar *)(pFVar7 + 4),(ushort *)(pFVar7 + 6),(uint *)(pFVar7 + 8),
             (ulong64 *)(pFVar7 + 0x10),(ushort *)(pFVar7 + 0x18),(uchar *)(pFVar7 + 0x1a));
LAB_142ced319:
  __return_storage_ptr__->Prefix = local_18.Prefix;
  *(ulonglong *)&__return_storage_ptr__->bHasRemainingBytes =
       CONCAT71(local_18._9_7_,local_18.bHasRemainingBytes);
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced350

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  uint uVar4;
  FPrefixInfo *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
  *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPrefixInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  local_20 = param_3;
  local_28 = this;
  pFVar5 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
           ::CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
                     (&local_28,&local_18,(uint *)pFVar7,(uchar *)(pFVar7 + 4),
                      (ushort *)(pFVar7 + 6),(uint *)(pFVar7 + 8),(ulong64 *)(pFVar7 + 0x10),
                      (ushort *)(pFVar7 + 0x18),(uchar *)(pFVar7 + 0x1a),(ushort *)(pFVar7 + 0x1c));
  bVar3 = pFVar5->bHasRemainingBytes;
  uVar2 = *(undefined7 *)&pFVar5->field_0x9;
  __return_storage_ptr__->Prefix = pFVar5->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar2;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced440

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
CalculatePrefix(FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this,
               FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
               uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::CalculatePrefix'::__l2::
           <lambda_1>::operator()<unsigned_int_const_&,unsigned_int_const_&,unsigned_int_const_&>
                     (&local_28,&local_18,(uint *)pFVar1,(uint *)(pFVar1 + 4),(uint *)(pFVar1 + 8));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced500

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::CalculatePrefix(FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
                  *this,FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,
                 uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
  *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
           ::CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
                     (&local_28,&local_18,(uint *)pFVar1,
                      (TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
                       *)(pFVar1 + 8));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// CalculatePrefix @ 142ced5c0

FPrefixInfo * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::CalculatePrefix
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this,
          FPrefixInfo *__return_storage_ptr__,ICoreProvider *param_1,ulong64 param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined7 uVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  uint uVar7;
  FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *local_28;
  uint local_20;
  FPrefixInfo local_18;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPrefixInfo *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  local_20 = param_3;
  local_28 = this;
  pFVar6 = `UE::Editor::DataStorage::Tests::
           FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::
           CalculatePrefix'::__l2::<lambda_1>::
           operator()<unsigned___int64_const_&,unsigned___int64_const_&,unsigned___int64_const_&>
                     (&local_28,&local_18,(ulong64 *)pFVar1,(ulong64 *)(pFVar1 + 8),
                      (ulong64 *)(pFVar1 + 0x10));
  bVar4 = pFVar6->bHasRemainingBytes;
  uVar3 = *(undefined7 *)&pFVar6->field_0x9;
  __return_storage_ptr__->Prefix = pFVar6->Prefix;
  __return_storage_ptr__->bHasRemainingBytes = bVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
  return __return_storage_ptr__;
}

// Compare @ 142cf04a0

int __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
Compare(FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this,
       ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  
  uVar6 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar9 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  uVar7 = (uint)param_3;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar7;
  if (((*pFVar9 == pFVar1[lVar8 * 0x10]) &&
      (*(short *)(pFVar9 + 2) == *(short *)(pFVar1 + lVar8 * 0x10 + 2))) &&
     (*(longlong *)(pFVar9 + 8) == *(longlong *)(pFVar1 + lVar8 * 0x10 + 8))) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar6 < (this->Values).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar9 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    uVar4 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    if (((char)*pFVar9 < (char)pFVar1[lVar8 * 0x10]) ||
       (((char)*pFVar9 <= (char)pFVar1[lVar8 * 0x10] &&
        ((*(ushort *)(pFVar9 + 2) < *(ushort *)(pFVar1 + lVar8 * 0x10 + 2) ||
         ((*(ushort *)(pFVar9 + 2) == *(ushort *)(pFVar1 + lVar8 * 0x10 + 2) &&
          (*(ulonglong *)(pFVar9 + 8) < *(ulonglong *)(pFVar1 + lVar8 * 0x10 + 8))))))))) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Compare @ 142cf06a0

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::Compare(FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar11 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar11 < (this->Values).ArrayNum) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar9 = (longlong)(int)uVar11;
  if (*(short *)pFVar7 == *(short *)(pFVar1 + lVar9 * 0x18)) {
    iVar5 = *(int *)(pFVar7 + 0x10);
    iVar8 = (int)*(undefined8 *)(pFVar1 + lVar9 * 0x18 + 0x10);
    if (iVar5 == iVar8) {
      if ((iVar5 != 0) && (iVar8 != 0)) {
        iVar6 = iVar8;
        if (iVar5 < iVar8) {
          iVar6 = iVar5;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp
                          (*(wchar_t **)(pFVar7 + 8),*(wchar_t **)(pFVar1 + lVar9 * 0x18 + 8),
                           (longlong)iVar6);
        if (iVar6 != 0) goto LAB_142cf0805;
      }
      if (iVar5 == iVar8) {
        return 0;
      }
    }
  }
LAB_142cf0805:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar11 < (this->Values).ArrayNum) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (*(short *)pFVar7 < *(short *)(pFVar1 + lVar9 * 0x18)) {
LAB_142cf08ed:
    iVar5 = -1;
  }
  else {
    if (*(short *)pFVar7 <= *(short *)(pFVar1 + lVar9 * 0x18)) {
      iVar5 = *(int *)(pFVar7 + 0x10);
      iVar8 = (int)*(undefined8 *)(pFVar1 + lVar9 * 0x18 + 0x10);
      if ((iVar5 == 0) || (iVar8 == 0)) {
LAB_142cf08db:
        iVar6 = iVar5 - iVar8;
      }
      else {
        iVar6 = iVar8;
        if (iVar5 < iVar8) {
          iVar6 = iVar5;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp
                          (*(wchar_t **)(pFVar7 + 8),*(wchar_t **)(pFVar1 + lVar9 * 0x18 + 8),
                           (longlong)iVar6);
        if (iVar6 == 0) goto LAB_142cf08db;
      }
      if (iVar6 < 0) goto LAB_142cf08ed;
    }
    iVar5 = 1;
  }
  return iVar5;
}

// Compare @ 142cf0910

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::Compare(FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar7 = (uint)param_3;
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar11 = (longlong)(int)uVar7;
  if ((*(short *)pFVar8 == *(short *)(pFVar1 + lVar11 * 0x18)) &&
     (*(int *)(pFVar8 + 4) == *(int *)(pFVar1 + lVar11 * 0x18 + 4))) {
    iVar5 = *(int *)(pFVar8 + 0x10);
    iVar9 = (int)*(undefined8 *)(pFVar1 + lVar11 * 0x18 + 0x10);
    if (iVar5 == iVar9) {
      if ((iVar5 != 0) && (iVar9 != 0)) {
        iVar6 = iVar9;
        if (iVar5 < iVar9) {
          iVar6 = iVar5;
        }
        iVar6 = wcsncmp(*(wchar_t **)(pFVar8 + 8),*(wchar_t **)(pFVar1 + lVar11 * 0x18 + 8),
                        (longlong)iVar6);
        if (iVar6 != 0) goto LAB_142cf0a78;
      }
      if (iVar5 == iVar9) {
        return 0;
      }
    }
  }
LAB_142cf0a78:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (*(ushort *)pFVar8 < *(ushort *)(pFVar1 + lVar11 * 0x18)) {
LAB_142cf0b6c:
    iVar5 = -1;
  }
  else {
    if (*(ushort *)pFVar8 == *(ushort *)(pFVar1 + lVar11 * 0x18)) {
      if (*(uint *)(pFVar8 + 4) < *(uint *)(pFVar1 + lVar11 * 0x18 + 4)) goto LAB_142cf0b6c;
      if (*(uint *)(pFVar8 + 4) != *(uint *)(pFVar1 + lVar11 * 0x18 + 4)) goto LAB_142cf0b65;
      iVar5 = *(int *)(pFVar8 + 0x10);
      iVar9 = (int)*(undefined8 *)(pFVar1 + lVar11 * 0x18 + 0x10);
      if ((iVar5 == 0) || (iVar9 == 0)) {
LAB_142cf0b5a:
        iVar6 = iVar5 - iVar9;
      }
      else {
        iVar6 = iVar9;
        if (iVar5 < iVar9) {
          iVar6 = iVar5;
        }
        iVar6 = wcsncmp(*(wchar_t **)(pFVar8 + 8),*(wchar_t **)(pFVar1 + lVar11 * 0x18 + 8),
                        (longlong)iVar6);
        if (iVar6 == 0) goto LAB_142cf0b5a;
      }
      if (iVar6 < 0) goto LAB_142cf0b6c;
    }
LAB_142cf0b65:
    iVar5 = 1;
  }
  return iVar5;
}

// Compare @ 142cf0b90

int __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::Compare
          (FMultiValueTestSorter<unsigned_int> *this,ICoreProvider *param_1,ulong64 param_2,
          ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  uVar6 = (uint)param_3;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  if (*(int *)(pFVar1 + (longlong)(int)uVar7 * 4) ==
      *(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    uVar4 = 0;
    if ((int)uVar6 < (this->Values).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = 1;
    if (*(uint *)(pFVar1 + (longlong)(int)uVar7 * 4) <
        *(uint *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)) {
      iVar5 = -1;
    }
  }
  return iVar5;
}

// Compare @ 142cf0d40

int __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::Compare
          (FMultiValueTestSorter<unsigned_int,unsigned_char> *this,ICoreProvider *param_1,
          ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar6 = (uint)param_3;
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar9 = (longlong)(int)uVar6;
  if ((*(int *)pFVar8 == *(int *)(pFVar1 + lVar9 * 8)) && (pFVar8[4] == pFVar1[lVar9 * 8 + 4])) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
    uVar4 = 0;
    if ((int)uVar6 < (this->Values).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    uVar4 = *(uint *)(pFVar1 + lVar9 * 8);
    uVar7 = *(uint *)pFVar8;
    if ((uVar7 < uVar4) || ((uVar7 == uVar4 && ((byte)pFVar8[4] < (byte)pFVar1[lVar9 * 8 + 4])))) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Compare @ 142cf0f20

int __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
Compare(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this,
       ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar9;
  if (((*(int *)pFVar6 == *(int *)(pFVar1 + lVar8 * 8)) && (pFVar6[4] == pFVar1[lVar8 * 8 + 4])) &&
     (*(short *)(pFVar6 + 6) == *(short *)(pFVar1 + lVar8 * 8 + 6))) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
    uVar4 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar6 < *(uint *)(pFVar1 + lVar8 * 8)) ||
       ((*(uint *)pFVar6 == *(uint *)(pFVar1 + lVar8 * 8) &&
        (((byte)pFVar6[4] < (byte)pFVar1[lVar8 * 8 + 4] ||
         ((pFVar6[4] == pFVar1[lVar8 * 8 + 4] &&
          (*(ushort *)(pFVar6 + 6) < *(ushort *)(pFVar1 + lVar8 * 8 + 6))))))))) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Compare @ 142cf1110

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::Compare
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this,
          ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc;
  uVar9 = (uint)param_3;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar1 = (longlong)(int)uVar9 * 0xc;
  pFVar6 = (this->Values).AllocatorInstance.Data + lVar1;
  if ((((*(int *)pFVar7 == *(int *)pFVar6) && (pFVar7[4] == pFVar6[4])) &&
      (*(short *)(pFVar7 + 6) == *(short *)(pFVar6 + 6))) &&
     (*(int *)(pFVar7 + 8) == *(int *)(pFVar6 + 8))) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc;
    uVar4 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar7 < *(uint *)(pFVar6 + lVar1)) ||
       ((*(uint *)pFVar7 == *(uint *)(pFVar6 + lVar1) &&
        (((byte)pFVar7[4] < (byte)pFVar6[lVar1 + 4] ||
         ((pFVar7[4] == pFVar6[lVar1 + 4] &&
          ((*(ushort *)(pFVar7 + 6) < *(ushort *)(pFVar6 + lVar1 + 6) ||
           ((*(ushort *)(pFVar7 + 6) == *(ushort *)(pFVar6 + lVar1 + 6) &&
            (*(uint *)(pFVar7 + 8) < *(uint *)(pFVar6 + lVar1 + 8))))))))))))) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Compare @ 142cf1330

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
Compare(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
        *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar9 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18;
  uVar4 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar4 = ~uVar9 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar1 = (longlong)(int)uVar9 * 0x18;
  pFVar6 = (this->Values).AllocatorInstance.Data + lVar1;
  if ((((*(int *)pFVar7 == *(int *)pFVar6) && (pFVar7[4] == pFVar6[4])) &&
      (*(short *)(pFVar7 + 6) == *(short *)(pFVar6 + 6))) &&
     ((*(int *)(pFVar7 + 8) == *(int *)(pFVar6 + 8) &&
      (*(longlong *)(pFVar7 + 0x10) == *(longlong *)(pFVar6 + 0x10))))) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18;
    uVar4 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar4 = ~uVar9 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar7 < *(uint *)(pFVar6 + lVar1)) ||
       ((*(uint *)pFVar7 == *(uint *)(pFVar6 + lVar1) &&
        (((byte)pFVar7[4] < (byte)pFVar6[lVar1 + 4] ||
         ((pFVar7[4] == pFVar6[lVar1 + 4] &&
          ((*(ushort *)(pFVar7 + 6) < *(ushort *)(pFVar6 + lVar1 + 6) ||
           ((*(ushort *)(pFVar7 + 6) == *(ushort *)(pFVar6 + lVar1 + 6) &&
            ((*(uint *)(pFVar7 + 8) < *(uint *)(pFVar6 + lVar1 + 8) ||
             ((*(uint *)(pFVar7 + 8) == *(uint *)(pFVar6 + lVar1 + 8) &&
              (*(ulonglong *)(pFVar7 + 0x10) < *(ulonglong *)(pFVar6 + lVar1 + 0x10)))))))))))))))))
    {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Compare @ 142cf1560

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::Compare(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar3 = ~uVar7 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  uVar8 = (uint)param_3;
  pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
  uVar3 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar3 = ~uVar8 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  lVar9 = (longlong)(int)uVar8 * 0x20;
  pFVar5 = (this->Values).AllocatorInstance.Data + lVar9;
  if (((((*(int *)pFVar6 == *(int *)pFVar5) && (pFVar6[4] == pFVar5[4])) &&
       (*(short *)(pFVar6 + 6) == *(short *)(pFVar5 + 6))) &&
      ((*(int *)(pFVar6 + 8) == *(int *)(pFVar5 + 8) &&
       (*(longlong *)(pFVar6 + 0x10) == *(longlong *)(pFVar5 + 0x10))))) &&
     (*(short *)(pFVar6 + 0x18) == *(short *)(pFVar5 + 0x18))) {
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    uVar3 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar5 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar6 < *(uint *)(pFVar5 + lVar9)) ||
       ((*(uint *)pFVar6 == *(uint *)(pFVar5 + lVar9) &&
        (((byte)pFVar6[4] < (byte)pFVar5[lVar9 + 4] ||
         ((pFVar6[4] == pFVar5[lVar9 + 4] &&
          ((*(ushort *)(pFVar6 + 6) < *(ushort *)(pFVar5 + lVar9 + 6) ||
           ((*(ushort *)(pFVar6 + 6) == *(ushort *)(pFVar5 + lVar9 + 6) &&
            ((*(uint *)(pFVar6 + 8) < *(uint *)(pFVar5 + lVar9 + 8) ||
             ((*(uint *)(pFVar6 + 8) == *(uint *)(pFVar5 + lVar9 + 8) &&
              ((*(ulonglong *)(pFVar6 + 0x10) < *(ulonglong *)(pFVar5 + lVar9 + 0x10) ||
               ((*(ulonglong *)(pFVar6 + 0x10) == *(ulonglong *)(pFVar5 + lVar9 + 0x10) &&
                (*(ushort *)(pFVar6 + 0x18) < *(ushort *)(pFVar5 + lVar9 + 0x18)))))))))))))))))))))
    {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Compare @ 142cf17a0

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::Compare(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar3 = ~uVar7 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  uVar8 = (uint)param_3;
  pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
  uVar3 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar3 = ~uVar8 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  lVar9 = (longlong)(int)uVar8 * 0x20;
  pFVar5 = (this->Values).AllocatorInstance.Data + lVar9;
  if (((((*(int *)pFVar6 == *(int *)pFVar5) && (pFVar6[4] == pFVar5[4])) &&
       (*(short *)(pFVar6 + 6) == *(short *)(pFVar5 + 6))) &&
      ((*(int *)(pFVar6 + 8) == *(int *)(pFVar5 + 8) &&
       (*(longlong *)(pFVar6 + 0x10) == *(longlong *)(pFVar5 + 0x10))))) &&
     ((*(short *)(pFVar6 + 0x18) == *(short *)(pFVar5 + 0x18) && (pFVar6[0x1a] == pFVar5[0x1a])))) {
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    uVar3 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar5 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar6 < *(uint *)(pFVar5 + lVar9)) ||
       ((*(uint *)pFVar6 == *(uint *)(pFVar5 + lVar9) &&
        (((byte)pFVar6[4] < (byte)pFVar5[lVar9 + 4] ||
         ((pFVar6[4] == pFVar5[lVar9 + 4] &&
          ((*(ushort *)(pFVar6 + 6) < *(ushort *)(pFVar5 + lVar9 + 6) ||
           ((*(ushort *)(pFVar6 + 6) == *(ushort *)(pFVar5 + lVar9 + 6) &&
            ((*(uint *)(pFVar6 + 8) < *(uint *)(pFVar5 + lVar9 + 8) ||
             ((*(uint *)(pFVar6 + 8) == *(uint *)(pFVar5 + lVar9 + 8) &&
              ((*(ulonglong *)(pFVar6 + 0x10) < *(ulonglong *)(pFVar5 + lVar9 + 0x10) ||
               ((*(ulonglong *)(pFVar6 + 0x10) == *(ulonglong *)(pFVar5 + lVar9 + 0x10) &&
                ((*(ushort *)(pFVar6 + 0x18) < *(ushort *)(pFVar5 + lVar9 + 0x18) ||
                 ((*(ushort *)(pFVar6 + 0x18) == *(ushort *)(pFVar5 + lVar9 + 0x18) &&
                  ((byte)pFVar6[0x1a] < (byte)pFVar5[lVar9 + 0x1a])))))))))))))))))))))))) {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Compare @ 142cf19f0

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::Compare(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = (uint)param_2;
  uVar3 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar3 = ~uVar7 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  uVar8 = (uint)param_3;
  pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
  uVar3 = 0;
  if ((int)uVar8 < (this->Values).ArrayNum) {
    uVar3 = ~uVar8 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  lVar9 = (longlong)(int)uVar8 * 0x20;
  pFVar5 = (this->Values).AllocatorInstance.Data + lVar9;
  if (((((*(int *)pFVar6 == *(int *)pFVar5) && (pFVar6[4] == pFVar5[4])) &&
       (*(short *)(pFVar6 + 6) == *(short *)(pFVar5 + 6))) &&
      ((*(int *)(pFVar6 + 8) == *(int *)(pFVar5 + 8) &&
       (*(longlong *)(pFVar6 + 0x10) == *(longlong *)(pFVar5 + 0x10))))) &&
     ((*(short *)(pFVar6 + 0x18) == *(short *)(pFVar5 + 0x18) &&
      ((pFVar6[0x1a] == pFVar5[0x1a] && (*(short *)(pFVar6 + 0x1c) == *(short *)(pFVar5 + 0x1c))))))
     ) {
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar6 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    uVar3 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    pFVar5 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar6 < *(uint *)(pFVar5 + lVar9)) ||
       ((*(uint *)pFVar6 == *(uint *)(pFVar5 + lVar9) &&
        (((byte)pFVar6[4] < (byte)pFVar5[lVar9 + 4] ||
         ((pFVar6[4] == pFVar5[lVar9 + 4] &&
          ((*(ushort *)(pFVar6 + 6) < *(ushort *)(pFVar5 + lVar9 + 6) ||
           ((*(ushort *)(pFVar6 + 6) == *(ushort *)(pFVar5 + lVar9 + 6) &&
            ((*(uint *)(pFVar6 + 8) < *(uint *)(pFVar5 + lVar9 + 8) ||
             ((*(uint *)(pFVar6 + 8) == *(uint *)(pFVar5 + lVar9 + 8) &&
              ((*(ulonglong *)(pFVar6 + 0x10) < *(ulonglong *)(pFVar5 + lVar9 + 0x10) ||
               ((*(ulonglong *)(pFVar6 + 0x10) == *(ulonglong *)(pFVar5 + lVar9 + 0x10) &&
                ((*(ushort *)(pFVar6 + 0x18) < *(ushort *)(pFVar5 + lVar9 + 0x18) ||
                 ((*(ushort *)(pFVar6 + 0x18) == *(ushort *)(pFVar5 + lVar9 + 0x18) &&
                  (((byte)pFVar6[0x1a] < (byte)pFVar5[lVar9 + 0x1a] ||
                   ((pFVar6[0x1a] == pFVar5[lVar9 + 0x1a] &&
                    (*(ushort *)(pFVar6 + 0x1c) < *(ushort *)(pFVar5 + lVar9 + 0x1c)))))))))))))))))
            )))))))))))) {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Compare @ 142cf1c60

int __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
Compare(FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this,ICoreProvider *param_1,
       ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
  uVar9 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  lVar1 = (longlong)(int)uVar9 * 0xc;
  if (((*(int *)pFVar8 == *(int *)(pFVar2 + (longlong)(int)uVar9 * 0xc)) &&
      (*(int *)(pFVar8 + 4) == *(int *)(pFVar2 + lVar1 + 4))) &&
     (*(int *)(pFVar8 + 8) == *(int *)(pFVar2 + lVar1 + 8))) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
    uVar5 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((*(uint *)pFVar8 < *(uint *)(pFVar2 + lVar1)) ||
       ((*(uint *)pFVar8 == *(uint *)(pFVar2 + lVar1) &&
        ((*(uint *)(pFVar8 + 4) < *(uint *)(pFVar2 + lVar1 + 4) ||
         ((*(uint *)(pFVar8 + 4) == *(uint *)(pFVar2 + lVar1 + 4) &&
          (*(uint *)(pFVar8 + 8) < *(uint *)(pFVar2 + lVar1 + 8))))))))) {
      iVar6 = -1;
    }
    else {
      iVar6 = 1;
    }
  }
  return iVar6;
}

// Compare @ 142cf1e60

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::Compare(FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          *this,ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = (uint)param_2;
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  uVar11 = (uint)param_3;
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar11 < (this->Values).ArrayNum) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar9 = (longlong)(int)uVar11;
  if (*(int *)pFVar7 == *(int *)(pFVar1 + lVar9 * 0x18)) {
    iVar5 = *(int *)(pFVar7 + 0x10);
    iVar8 = (int)*(undefined8 *)(pFVar1 + lVar9 * 0x18 + 0x10);
    if (iVar5 == iVar8) {
      if ((iVar5 != 0) && (iVar8 != 0)) {
        iVar6 = iVar8;
        if (iVar5 < iVar8) {
          iVar6 = iVar5;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp
                          (*(wchar_t **)(pFVar7 + 8),*(wchar_t **)(pFVar1 + lVar9 * 0x18 + 8),
                           (longlong)iVar6);
        if (iVar6 != 0) goto LAB_142cf1fc3;
      }
      if (iVar5 == iVar8) {
        return 0;
      }
    }
  }
LAB_142cf1fc3:
  uVar4 = 0;
  if ((int)uVar10 < (this->Values).ArrayNum) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
  uVar4 = 0;
  if ((int)uVar11 < (this->Values).ArrayNum) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (*(uint *)pFVar7 < *(uint *)(pFVar1 + lVar9 * 0x18)) {
LAB_142cf20a9:
    iVar5 = -1;
  }
  else {
    if (*(uint *)pFVar7 == *(uint *)(pFVar1 + lVar9 * 0x18)) {
      uVar4 = *(uint *)(pFVar7 + 0x10);
      uVar10 = (uint)*(undefined8 *)(pFVar1 + lVar9 * 0x18 + 0x10);
      if ((uVar4 == 0) || (uVar10 == 0)) {
LAB_142cf2097:
        iVar5 = uVar4 - uVar10;
      }
      else {
        uVar11 = uVar10;
        if ((int)uVar4 < (int)uVar10) {
          uVar11 = uVar4;
        }
        iVar5 = FGenericPlatformStricmp::Strnicmp
                          (*(wchar_t **)(pFVar7 + 8),*(wchar_t **)(pFVar1 + lVar9 * 0x18 + 8),
                           (longlong)(int)uVar11);
        if (iVar5 == 0) goto LAB_142cf2097;
      }
      if (iVar5 < 0) goto LAB_142cf20a9;
    }
    iVar5 = 1;
  }
  return iVar5;
}

// Compare @ 142cf20d0

int __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::Compare
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this,
          ICoreProvider *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar7 = (uint)param_2;
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  uVar9 = (uint)param_3;
  uVar5 = 0;
  if ((int)uVar9 < (this->Values).ArrayNum) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  lVar1 = (longlong)(int)uVar9 * 0x18;
  if (((*(longlong *)pFVar8 == *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x18)) &&
      (*(longlong *)(pFVar8 + 8) == *(longlong *)(pFVar2 + lVar1 + 8))) &&
     (*(longlong *)(pFVar8 + 0x10) == *(longlong *)(pFVar2 + lVar1 + 0x10))) {
    iVar6 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->Values).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
    uVar5 = 0;
    if ((int)uVar9 < (this->Values).ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar2 = (this->Values).AllocatorInstance.Data;
    if ((*(ulonglong *)pFVar8 < *(ulonglong *)(pFVar2 + lVar1)) ||
       ((*(ulonglong *)pFVar8 == *(ulonglong *)(pFVar2 + lVar1) &&
        ((*(ulonglong *)(pFVar8 + 8) < *(ulonglong *)(pFVar2 + lVar1 + 8) ||
         ((*(ulonglong *)(pFVar8 + 8) == *(ulonglong *)(pFVar2 + lVar1 + 8) &&
          (*(ulonglong *)(pFVar8 + 0x10) < *(ulonglong *)(pFVar2 + lVar1 + 0x10))))))))) {
      iVar6 = -1;
    }
    else {
      iVar6 = 1;
    }
  }
  return iVar6;
}

// GetShortName @ 142cf5b60

FText * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
GetShortName(FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this,
            FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5bb0

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetShortName(FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5c00

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::GetShortName(FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5c50

FText * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::GetShortName
          (FMultiValueTestSorter<unsigned_int> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5ca0

FText * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::GetShortName
          (FMultiValueTestSorter<unsigned_int,unsigned_char> *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5cf0

FText * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this,
            FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5d40

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::GetShortName
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this,
          FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5d90

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
             *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5de0

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5e30

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5e80

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5ed0

FText * __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
GetShortName(FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this,
            FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5f20

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetShortName(FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetShortName @ 142cf5f70

FText * __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::GetShortName
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this,
          FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetSortType @ 142cf6510

ESortType __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
GetSortType(FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6520

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetSortType(FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6530

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
::GetSortType(FMultiValueTestSorter<unsigned_short,unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6540

ESortType __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int>::GetSortType
          (FMultiValueTestSorter<unsigned_int> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6550

ESortType __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char>::GetSortType
          (FMultiValueTestSorter<unsigned_int,unsigned_char> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6560

ESortType __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short>::
GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6570

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int>::GetSortType
          (FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6580

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>::
GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64>
            *this)

{
  return HybridSort;
}

// GetSortType @ 142cf6590

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
::GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf65a0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
::GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf65b0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
::GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_char,unsigned_short,unsigned_int,unsigned___int64,unsigned_short,unsigned_char,unsigned_short>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf65c0

ESortType __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
GetSortType(FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this)

{
  return HybridSort;
}

// GetSortType @ 142cf65d0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::GetSortType(FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              *this)

{
  return HybridSort;
}

// GetSortType @ 142cf65e0

ESortType __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::GetSortType
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this)

{
  return HybridSort;
}

// SortByPrefix @ 142cf9ae0

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::
SortByPrefix(FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64> *this,
            ICoreProvider *param_1,uint param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  <lambda_2> local_88 [4];
  int local_84;
  ForAnyElementType local_80;
  int local_78;
  int iStack_74;
  ForAnyElementType local_70;
  int local_68 [2];
  FPrefixInfo local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  FData local_40;
  
  iVar10 = param_4 - param_3;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  iStack_74 = 0;
  uVar8 = iVar10 + 1;
  local_84 = iVar10;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8,&local_80,0,&iStack_74);
  }
  lVar11 = (longlong)param_3 << 4;
  lVar9 = lVar11;
  uVar8 = param_3;
  FVar3.Data = local_80.Data;
  iVar6 = local_78;
  do {
    local_80.Data = FVar3.Data;
    local_78 = iVar6;
    if (param_4 < (int)uVar8) {
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68[0] = 0;
      local_68[1] = 0;
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,&local_70,local_68,local_68 + 1);
      RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<signed_char,unsigned_short,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
                ((FData *)FVar3.Data,(FData *)local_70.Data,iVar6,local_88);
      if ((FData *)local_70.Data != (FData *)0x0) {
        FMemory::Free(local_70.Data);
      }
      uVar8 = 0;
      if (-1 < iVar10) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < local_78) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = local_80.Data + lVar9 + 8;
          local_50 = *(undefined4 *)pFVar1;
          uStack_4c = *(undefined4 *)(pFVar1 + 4);
          uStack_48 = *(undefined4 *)(pFVar1 + 8);
          uStack_44 = *(undefined4 *)(pFVar1 + 0xc);
          uVar5 = 0;
          if ((int)(uVar8 + param_3) < (this->Values).ArrayNum) {
            uVar5 = ~(uVar8 + param_3) >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x18;
          pFVar1 = (this->Values).AllocatorInstance.Data + lVar11;
          *(undefined4 *)pFVar1 = local_50;
          *(undefined4 *)(pFVar1 + 4) = uStack_4c;
          *(undefined4 *)(pFVar1 + 8) = uStack_48;
          *(undefined4 *)(pFVar1 + 0xc) = uStack_44;
          lVar11 = lVar11 + 0x10;
        } while ((int)uVar8 <= iVar10);
      }
      if ((FData *)local_80.Data != (FData *)0x0) {
        FMemory::Free(local_80.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data;
    local_60.Prefix = 0;
    local_60.bHasRemainingBytes = true;
    if ((int)param_2 < 1) {
      if ((int)-param_2 < 8) {
        local_60.Prefix =
             ((ulonglong)(byte)-((char)pFVar1[lVar9] >> 7) | 0x80) ^ (ulonglong)(byte)pFVar1[lVar9];
        iVar10 = param_2 * 8 + 0x38;
        bVar7 = (byte)iVar10;
        if (iVar10 < 0) {
          local_60.Prefix = local_60.Prefix >> (-bVar7 & 0x3f);
        }
        else {
          local_60.Prefix = local_60.Prefix << (bVar7 & 0x3f);
        }
        goto LAB_142cf9c25;
      }
    }
    else {
LAB_142cf9c25:
      DataStorage::Private::CalculatePrefix<unsigned_short,unsigned___int64_&>
                (&local_60,1,param_2,(ushort *)(pFVar1 + lVar9 + 2),(ulong64 *)(pFVar1 + lVar9 + 8))
      ;
    }
    local_40.Prefix = local_60.Prefix;
    uVar5 = 0;
    if ((int)uVar8 < (this->Values).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Values).AllocatorInstance.Data + lVar9;
    local_40.ValueTuple._0_8_ = *(undefined8 *)pFVar1;
    local_40.ValueTuple._8_8_ = *(undefined8 *)(pFVar1 + 8);
    if (((local_80.Data <= &local_40) &&
        (&local_40 < (FData *)(local_80.Data + (longlong)iStack_74 * 0x18))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_78 == iStack_74) {
      local_78 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_80,&iStack_74);
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
    iVar6 = local_78 + 1;
    *(ulong64 *)&local_80.Data[(longlong)local_78 * 0x18].field_0x0 = local_40.Prefix;
    *(undefined8 *)(local_80.Data + (longlong)local_78 * 0x18 + 8) = local_40.ValueTuple._0_8_;
    *(undefined8 *)(local_80.Data + (longlong)local_78 * 0x18 + 0x10) = local_40.ValueTuple._8_8_;
    iVar10 = local_84;
    FVar3.Data = local_80.Data;
  } while( true );
}

// SortByPrefix @ 142cf9ed0

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::SortByPrefix(FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,ICoreProvider *param_1,uint param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  <lambda_2> local_a8 [8];
  undefined8 local_a0;
  ForAnyElementType local_98;
  int local_90 [2];
  FData local_88;
  FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
  *local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FPrefixInfo local_48;
  
  iVar11 = param_4 - param_3;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar11);
  uVar9 = iVar11 + 1;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar7 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&local_b8,0,(int *)((longlong)&local_b0 + 4));
    iVar7 = (int)local_b0;
  }
  if (param_3 <= param_4) {
    lVar12 = (longlong)param_3 * 0x18;
    uVar9 = param_3;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Values).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Values).AllocatorInstance.Data + lVar12;
      local_68 = this;
      local_60 = param_2;
      pFVar6 = `UE::Editor::DataStorage::Tests::
               FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               ::SortByPrefix'::__l4::<lambda_1>::
               operator()<short_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
                         (&local_68,&local_48,(short *)pFVar10,
                          (TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
                           *)(pFVar10 + 8));
      local_88.Prefix = pFVar6->Prefix;
      uVar5 = 0;
      if ((int)uVar9 < (this->Values).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      pFVar10 = pFVar1 + lVar12;
      local_88.ValueTuple._0_8_ = *(undefined8 *)pFVar10;
      local_88.ValueTuple._8_8_ = *(undefined8 *)(pFVar10 + 8);
      local_88.ValueTuple._16_8_ = *(undefined8 *)(pFVar1 + lVar12 + 0x10);
      if (((local_b8.Data <= &local_88) &&
          (&local_88 < (FData *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x20))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = (int)local_b0;
      if ((int)local_b0 == local_b0._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_b8,(int *)((longlong)&local_b0 + 4));
      }
      iVar7 = iVar11 + 1;
      uVar9 = uVar9 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar7);
      lVar12 = lVar12 + 0x18;
      *(ulong64 *)&local_b8.Data[(longlong)iVar11 * 0x20].field_0x0 = local_88.Prefix;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 8) = local_88.ValueTuple._0_8_;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 0x10) = local_88.ValueTuple._8_8_;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 0x10 + 8) =
           local_88.ValueTuple._16_8_;
    } while ((int)uVar9 <= param_4);
    iVar11 = (int)local_a0;
  }
  FVar3.Data = local_b8.Data;
  lVar12 = (longlong)param_3 * 0x18;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar7,&local_98,local_90,local_90 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
            ((FData *)FVar3.Data,(FData *)local_98.Data,iVar7,local_a8);
  if ((FData *)local_98.Data != (FData *)0x0) {
    FMemory::Free(local_98.Data);
  }
  uVar9 = 0;
  if (-1 < iVar11) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (int)local_b0) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = local_b8.Data + lVar8 + 8;
      local_58 = *(undefined4 *)pFVar10;
      uStack_54 = *(undefined4 *)(pFVar10 + 4);
      uStack_50 = *(undefined4 *)(pFVar10 + 8);
      uStack_4c = *(undefined4 *)(pFVar10 + 0xc);
      local_a0 = *(undefined8 *)(local_b8.Data + lVar8 + 0x18);
      uVar5 = 0;
      if ((int)(uVar9 + param_3) < (this->Values).ArrayNum) {
        uVar5 = ~(uVar9 + param_3) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x20;
      pFVar10 = pFVar1 + lVar12;
      *(undefined4 *)pFVar10 = local_58;
      *(undefined4 *)(pFVar10 + 4) = uStack_54;
      *(undefined4 *)(pFVar10 + 8) = uStack_50;
      *(undefined4 *)(pFVar10 + 0xc) = uStack_4c;
      *(undefined8 *)(pFVar1 + lVar12 + 0x10) = local_a0;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar9 <= iVar11);
  }
  if ((FData *)local_b8.Data != (FData *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// SortByPrefix @ 142cfa290

void __thiscall
UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::
SortByPrefix(FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *this,
            ICoreProvider *param_1,uint param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FPrefixInfo *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  ForAnyElementType local_98;
  int local_90;
  int iStack_8c;
  ForAnyElementType local_88;
  int local_80 [2];
  FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int> *local_78;
  uint local_70;
  FPrefixInfo local_68;
  FData local_58;
  
  iVar5 = param_4;
  iVar11 = param_4 - param_3;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  iStack_8c = 0;
  uVar13 = iVar11 + 1;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,&local_98,0,&iStack_8c);
  }
  lVar15 = (longlong)param_3 * 0xc;
  lVar16 = lVar15;
  uVar13 = param_3;
  FVar4.Data = local_98.Data;
  iVar7 = local_90;
  while( true ) {
    local_98.Data = FVar4.Data;
    local_90 = iVar7;
    if (iVar5 < (int)uVar13) {
      uVar10 = 0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80[0] = 0;
      local_80[1] = 0;
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,&local_88,local_80,local_80 + 1);
      RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix_::__l2::<lambda_2>_>
                ((FData *)FVar4.Data,(FData *)local_88.Data,iVar7,(<lambda_2> *)&param_4);
      if ((FData *)local_88.Data != (FData *)0x0) {
        FMemory::Free(local_88.Data);
      }
      uVar12 = uVar10;
      if (-1 < iVar11) {
        do {
          uVar9 = (uint)uVar10;
          uVar13 = 0;
          if ((int)uVar9 < local_90) {
            uVar13 = ~uVar9 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = *(undefined8 *)(local_98.Data + uVar12 + 8);
          uVar2 = *(undefined4 *)(local_98.Data + uVar12 + 0x10);
          uVar13 = 0;
          if ((int)(uVar9 + param_3) < (this->Values).ArrayNum) {
            uVar13 = ~(uVar9 + param_3) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this->Values).AllocatorInstance.Data;
          uVar10 = (ulonglong)(uVar9 + 1);
          *(undefined8 *)(pFVar14 + lVar15) = uVar1;
          *(undefined4 *)(pFVar14 + lVar15 + 8) = uVar2;
          lVar15 = lVar15 + 0xc;
          uVar12 = uVar12 + 0x18;
        } while ((int)(uVar9 + 1) <= iVar11);
      }
      if ((FData *)local_98.Data != (FData *)0x0) {
        FMemory::Free(local_98.Data);
      }
      return;
    }
    uVar9 = 0;
    if ((int)uVar13 < (this->Values).ArrayNum) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar14 = (this->Values).AllocatorInstance.Data + lVar16;
    local_78 = this;
    local_70 = param_2;
    pFVar8 = `UE::Editor::DataStorage::Tests::
             FMultiValueTestSorter<unsigned_int,unsigned_int,unsigned_int>::SortByPrefix'::__l4::
             <lambda_1>::operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
                       (&local_78,&local_68,(uint *)pFVar14,(uint *)(pFVar14 + 4),
                        (uint *)(pFVar14 + 8));
    local_58.Prefix = pFVar8->Prefix;
    uVar9 = 0;
    if ((int)uVar13 < (this->Values).ArrayNum) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar14 = (this->Values).AllocatorInstance.Data;
    local_58.ValueTuple._0_8_ = *(undefined8 *)(pFVar14 + lVar16);
    local_58.ValueTuple._8_4_ = *(undefined4 *)(pFVar14 + lVar16 + 8);
    if (((local_98.Data <= &local_58) &&
        (&local_58 < (FData *)(local_98.Data + (longlong)iStack_8c * 0x18))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_90 == iStack_8c) {
      local_90 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_98,&iStack_8c);
    }
    uVar13 = uVar13 + 1;
    lVar16 = lVar16 + 0xc;
    iVar7 = local_90 + 1;
    *(ulong64 *)&local_98.Data[(longlong)local_90 * 0x18].field_0x0 = local_58.Prefix;
    *(undefined8 *)(local_98.Data + (longlong)local_90 * 0x18 + 8) = local_58.ValueTuple._0_8_;
    *(ulonglong *)(local_98.Data + (longlong)local_90 * 0x18 + 0x10) =
         CONCAT44(local_58._20_4_,local_58.ValueTuple._8_4_);
    FVar4.Data = local_98.Data;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SortByPrefix @ 142cfa660

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
::SortByPrefix(FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               *this,ICoreProvider *param_1,uint param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FPrefixInfo *pFVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  <lambda_2> local_a8 [8];
  undefined8 local_a0;
  ForAnyElementType local_98;
  int local_90 [2];
  FData local_88;
  FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
  *local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FPrefixInfo local_48;
  
  iVar11 = param_4 - param_3;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar11);
  uVar9 = iVar11 + 1;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar7 = 0;
  if (0 < (int)uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&local_b8,0,(int *)((longlong)&local_b0 + 4));
    iVar7 = (int)local_b0;
  }
  if (param_3 <= param_4) {
    lVar12 = (longlong)param_3 * 0x18;
    uVar9 = param_3;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Values).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Values).AllocatorInstance.Data + lVar12;
      local_68 = this;
      local_60 = param_2;
      pFVar6 = `UE::Editor::DataStorage::Tests::
               FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
               ::SortByPrefix'::__l4::<lambda_1>::
               operator()<unsigned_int_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
                         (&local_68,&local_48,(uint *)pFVar10,
                          (TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
                           *)(pFVar10 + 8));
      local_88.Prefix = pFVar6->Prefix;
      uVar5 = 0;
      if ((int)uVar9 < (this->Values).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      pFVar10 = pFVar1 + lVar12;
      local_88.ValueTuple._0_8_ = *(undefined8 *)pFVar10;
      local_88.ValueTuple._8_8_ = *(undefined8 *)(pFVar10 + 8);
      local_88.ValueTuple._16_8_ = *(undefined8 *)(pFVar1 + lVar12 + 0x10);
      if (((local_b8.Data <= &local_88) &&
          (&local_88 < (FData *)(local_b8.Data + (longlong)local_b0._4_4_ * 0x20))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = (int)local_b0;
      if ((int)local_b0 == local_b0._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_b8,(int *)((longlong)&local_b0 + 4));
      }
      iVar7 = iVar11 + 1;
      uVar9 = uVar9 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar7);
      lVar12 = lVar12 + 0x18;
      *(ulong64 *)&local_b8.Data[(longlong)iVar11 * 0x20].field_0x0 = local_88.Prefix;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 8) = local_88.ValueTuple._0_8_;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 0x10) = local_88.ValueTuple._8_8_;
      *(undefined8 *)(local_b8.Data + (longlong)iVar11 * 0x20 + 0x10 + 8) =
           local_88.ValueTuple._16_8_;
    } while ((int)uVar9 <= param_4);
    iVar11 = (int)local_a0;
  }
  FVar3.Data = local_b8.Data;
  lVar12 = (longlong)param_3 * 0x18;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar7,&local_98,local_90,local_90 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>::SortByPrefix_::__l2::<lambda_2>_>
            ((FData *)FVar3.Data,(FData *)local_98.Data,iVar7,local_a8);
  if ((FData *)local_98.Data != (FData *)0x0) {
    FMemory::Free(local_98.Data);
  }
  uVar9 = 0;
  if (-1 < iVar11) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (int)local_b0) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = local_b8.Data + lVar8 + 8;
      local_58 = *(undefined4 *)pFVar10;
      uStack_54 = *(undefined4 *)(pFVar10 + 4);
      uStack_50 = *(undefined4 *)(pFVar10 + 8);
      uStack_4c = *(undefined4 *)(pFVar10 + 0xc);
      local_a0 = *(undefined8 *)(local_b8.Data + lVar8 + 0x18);
      uVar5 = 0;
      if ((int)(uVar9 + param_3) < (this->Values).ArrayNum) {
        uVar5 = ~(uVar9 + param_3) >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x20;
      pFVar10 = pFVar1 + lVar12;
      *(undefined4 *)pFVar10 = local_58;
      *(undefined4 *)(pFVar10 + 4) = uStack_54;
      *(undefined4 *)(pFVar10 + 8) = uStack_50;
      *(undefined4 *)(pFVar10 + 0xc) = uStack_4c;
      *(undefined8 *)(pFVar1 + lVar12 + 0x10) = local_a0;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar9 <= iVar11);
  }
  if ((FData *)local_b8.Data != (FData *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// SortByPrefix @ 142cfaa20

void __thiscall
UE::Editor::DataStorage::Tests::
FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix
          (FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *this,
          ICoreProvider *param_1,uint param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FPrefixInfo *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  longlong lVar13;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  <lambda_2> local_a8 [8];
  undefined8 local_a0;
  ForAnyElementType local_98;
  int local_90 [2];
  FData local_88;
  FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64> *local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FPrefixInfo local_48;
  
  iVar12 = param_4 - param_3;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar12);
  uVar10 = iVar12 + 1;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar10,&local_b8,0,&iStack_ac);
  }
  lVar13 = (longlong)param_3 * 0x18;
  lVar9 = lVar13;
  uVar10 = param_3;
  if (param_3 <= param_4) {
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->Values).AllocatorInstance.Data + lVar9;
      local_68 = this;
      local_60 = param_2;
      pFVar7 = `UE::Editor::DataStorage::Tests::
               FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::
               SortByPrefix'::__l4::<lambda_1>::
               operator()<unsigned___int64_&,unsigned___int64_&,unsigned___int64_&>
                         (&local_68,&local_48,(ulong64 *)pFVar11,(ulong64 *)(pFVar11 + 8),
                          (ulong64 *)(pFVar11 + 0x10));
      local_88.Prefix = pFVar7->Prefix;
      uVar6 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      pFVar11 = pFVar1 + lVar9;
      local_88.ValueTuple._0_8_ = *(undefined8 *)pFVar11;
      local_88.ValueTuple._8_8_ = *(undefined8 *)(pFVar11 + 8);
      local_88.ValueTuple._16_8_ = *(undefined8 *)(pFVar1 + lVar9 + 0x10);
      if (((local_b8.Data <= &local_88) &&
          (&local_88 < (FData *)(local_b8.Data + (longlong)iStack_ac * 0x20))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_b0 == iStack_ac) {
        local_b0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_b8,&iStack_ac);
      }
      lVar8 = (longlong)local_b0;
      uVar10 = uVar10 + 1;
      local_b0 = local_b0 + 1;
      *(ulong64 *)&local_b8.Data[lVar8 * 0x20].field_0x0 = local_88.Prefix;
      *(undefined8 *)(local_b8.Data + lVar8 * 0x20 + 8) = local_88.ValueTuple._0_8_;
      *(undefined8 *)(local_b8.Data + lVar8 * 0x20 + 0x10) = local_88.ValueTuple._8_8_;
      *(undefined8 *)(local_b8.Data + lVar8 * 0x20 + 0x10 + 8) = local_88.ValueTuple._16_8_;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar10 <= param_4);
    iVar12 = (int)local_a0;
  }
  iVar4 = local_b0;
  FVar3.Data = local_b8.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,local_b0,&local_98,local_90,local_90 + 1);
  RadixSort64<1,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::FData,int,_UE::Editor::DataStorage::Tests::FMultiValueTestSorter<unsigned___int64,unsigned___int64,unsigned___int64>::SortByPrefix_::__l2::<lambda_2>_>
            ((FData *)FVar3.Data,(FData *)local_98.Data,iVar4,local_a8);
  if ((FData *)local_98.Data != (FData *)0x0) {
    FMemory::Free(local_98.Data);
  }
  uVar10 = 0;
  if (-1 < iVar12) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < local_b0) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = local_b8.Data + lVar9 + 8;
      local_58 = *(undefined4 *)pFVar11;
      uStack_54 = *(undefined4 *)(pFVar11 + 4);
      uStack_50 = *(undefined4 *)(pFVar11 + 8);
      uStack_4c = *(undefined4 *)(pFVar11 + 0xc);
      local_a0 = *(undefined8 *)(local_b8.Data + lVar9 + 0x18);
      uVar6 = 0;
      if ((int)(uVar10 + param_3) < (this->Values).ArrayNum) {
        uVar6 = ~(uVar10 + param_3) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
      pFVar11 = pFVar1 + lVar13;
      *(undefined4 *)pFVar11 = local_58;
      *(undefined4 *)(pFVar11 + 4) = uStack_54;
      *(undefined4 *)(pFVar11 + 8) = uStack_50;
      *(undefined4 *)(pFVar11 + 0xc) = uStack_4c;
      *(undefined8 *)(pFVar1 + lVar13 + 0x10) = local_a0;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar10 <= iVar12);
  }
  if ((FData *)local_b8.Data != (FData *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

