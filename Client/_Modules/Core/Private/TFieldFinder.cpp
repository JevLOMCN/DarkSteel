// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Find @ 1417cc9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbFieldView * __thiscall
UE::Logging::Private::TFieldFinder<char8_t>::Find
          (TFieldFinder<char8_t> *this,TStringView<char8_t> *param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  uchar *puVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> *pTVar11;
  FCbFieldView *pFVar12;
  undefined1 auStack_1f8 [32];
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  uchar *local_1c8;
  undefined8 uStack_1c0;
  TStringBuilderBase<wchar_t> local_1b8;
  wchar_t local_198 [32];
  TStringConversion<TStringConvert<char8_t,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  if (-1 < param_2) {
    iVar9 = this->Index;
    while ((iVar9 < param_2 && ((*(byte *)&this->It & 0x1f) != 0))) {
      this->Index = iVar9 + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
      iVar9 = this->Index;
    }
    if (param_2 < iVar9) {
      uVar1 = *(undefined8 *)&(this->Fields).field_0x10;
      iVar9 = 0;
      this->Index = 0;
      uVar7 = *(undefined8 *)&(this->Fields).field_0x8;
      *(undefined8 *)&this->It = *(undefined8 *)&this->Fields;
      *(undefined8 *)&(this->It).field_0x8 = uVar7;
      *(undefined8 *)&(this->It).field_0x10 = uVar1;
      if (0 < param_2) {
        iVar9 = 0;
        do {
          if ((*(byte *)&this->It & 0x1f) == 0) break;
          this->Index = iVar9 + 1;
          TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
          iVar9 = this->Index;
        } while (iVar9 < param_2);
      }
    }
    if (param_2 == iVar9) {
      uVar2 = *(uint *)&(this->It).field_0x4;
      uVar3 = param_1->Size;
      if ((uVar3 == uVar2) &&
         ((((uVar3 == 0 || (uVar2 == 0)) ||
           (iVar9 = strncmp((char *)param_1->DataPtr,
                            (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar2),
                            (longlong)(int)uVar2), iVar9 == 0)) && (uVar3 == uVar2))))
      goto LAB_1417ccc91;
    }
  }
  iVar9 = this->Index;
  if ((*(byte *)&this->It & 0x1f) != 0) {
    uVar2 = param_1->Size;
    do {
      uVar3 = *(uint *)&(this->It).field_0x4;
      if ((uVar2 == uVar3) &&
         ((((uVar2 == 0 || (uVar3 == 0)) ||
           (iVar10 = strncmp((char *)param_1->DataPtr,
                             (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar3),
                             (longlong)(int)uVar3), iVar10 == 0)) && (uVar2 == uVar3))))
      goto LAB_1417ccc91;
      this->Index = this->Index + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
    } while ((*(byte *)&this->It & 0x1f) != 0);
  }
  uVar1 = *(undefined8 *)&(this->Fields).field_0x10;
  this->Index = 0;
  uVar7 = *(undefined8 *)&(this->Fields).field_0x8;
  *(undefined8 *)&this->It = *(undefined8 *)&this->Fields;
  *(undefined8 *)&(this->It).field_0x8 = uVar7;
  *(undefined8 *)&(this->It).field_0x10 = uVar1;
  if (0 < iVar9) {
    do {
      if ((*(byte *)&this->It & 0x1f) == 0) break;
      uVar2 = *(uint *)&(this->It).field_0x4;
      uVar3 = param_1->Size;
      if ((uVar3 == uVar2) &&
         ((((uVar3 == 0 || (uVar2 == 0)) ||
           (iVar10 = strncmp((char *)param_1->DataPtr,
                             (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar2),
                             (longlong)(int)uVar2), iVar10 == 0)) && (uVar3 == uVar2))))
      goto LAB_1417ccc91;
      this->Index = this->Index + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
    } while (this->Index < iVar9);
  }
  pTVar11 = StringCast<wchar_t,128,char8_t>(&local_158,this->Format);
  puVar6 = param_1->DataPtr;
  uStack_1c0 = *(undefined8 *)&param_1->Size;
  iVar10 = (int)*(undefined8 *)&param_1->Size;
  pwVar4 = pTVar11->Ptr;
  local_1b8.Base = local_198;
  local_1b8.bIsDynamic = false;
  local_1b8.bIsExternal = false;
  local_1b8.CurPos = local_198;
  local_1b8.End = (wchar_t *)&local_158;
  local_1c8 = puVar6;
  iVar9 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar6,iVar10);
  if (local_1b8.End <
      (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)(local_1b8.CurPos + iVar9)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1b8,(longlong)iVar9);
  }
  if (iVar10 != 0) {
    local_1b8.CurPos = Core::Private::Convert(local_1b8.CurPos,iVar9,puVar6,iVar10);
  }
  if (local_1b8.End <
      (TStringConversion<TStringConvert<char8_t,wchar_t>,128> *)(local_1b8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
  }
  *local_1b8.CurPos = L'\0';
  local_1d8 = local_1b8.Base;
  local_1d0 = pwVar4;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x14d,L"Log format requires field \'%s\' which was not provided. [[%s]]");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b8);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FCbFieldView *)(*pcVar5)();
    return pFVar12;
  }
LAB_1417ccc91:
  return (FCbFieldView *)&this->It;
}

// Find @ 1417cccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbFieldView * __thiscall
UE::Logging::Private::TFieldFinder<wchar_t>::Find
          (TFieldFinder<wchar_t> *this,TStringView<char8_t> *param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  uchar *puVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FCbFieldView *pFVar11;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  wchar_t *local_b0;
  uchar *local_a8;
  undefined8 uStack_a0;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (-1 < param_2) {
    iVar9 = this->Index;
    while ((iVar9 < param_2 && ((*(byte *)&this->It & 0x1f) != 0))) {
      this->Index = iVar9 + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
      iVar9 = this->Index;
    }
    if (param_2 < iVar9) {
      uVar1 = *(undefined8 *)&(this->Fields).field_0x10;
      this->Index = 0;
      uVar7 = *(undefined8 *)&(this->Fields).field_0x8;
      *(undefined8 *)&this->It = *(undefined8 *)&this->Fields;
      *(undefined8 *)&(this->It).field_0x8 = uVar7;
      *(undefined8 *)&(this->It).field_0x10 = uVar1;
      iVar9 = 0;
      iVar10 = 0;
      if (0 < param_2) {
        do {
          iVar9 = iVar10;
          if ((*(byte *)&this->It & 0x1f) == 0) break;
          this->Index = iVar9 + 1;
          TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
          iVar9 = this->Index;
          iVar10 = iVar9;
        } while (iVar9 < param_2);
      }
    }
    if (param_2 == iVar9) {
      uVar2 = *(uint *)&(this->It).field_0x4;
      uVar3 = param_1->Size;
      if ((uVar3 == uVar2) &&
         ((((uVar3 == 0 || (uVar2 == 0)) ||
           (iVar9 = strncmp((char *)param_1->DataPtr,
                            (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar2),
                            (longlong)(int)uVar2), iVar9 == 0)) && (uVar3 == uVar2))))
      goto LAB_1417ccf6b;
    }
  }
  iVar9 = this->Index;
  if ((*(byte *)&this->It & 0x1f) != 0) {
    uVar2 = param_1->Size;
    do {
      uVar3 = *(uint *)&(this->It).field_0x4;
      if ((uVar2 == uVar3) &&
         ((((uVar2 == 0 || (uVar3 == 0)) ||
           (iVar10 = strncmp((char *)param_1->DataPtr,
                             (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar3),
                             (longlong)(int)uVar3), iVar10 == 0)) && (uVar2 == uVar3))))
      goto LAB_1417ccf6b;
      this->Index = this->Index + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
    } while ((*(byte *)&this->It & 0x1f) != 0);
  }
  uVar1 = *(undefined8 *)&(this->Fields).field_0x10;
  this->Index = 0;
  uVar7 = *(undefined8 *)&(this->Fields).field_0x8;
  *(undefined8 *)&this->It = *(undefined8 *)&this->Fields;
  *(undefined8 *)&(this->It).field_0x8 = uVar7;
  *(undefined8 *)&(this->It).field_0x10 = uVar1;
  if (0 < iVar9) {
    do {
      if ((*(byte *)&this->It & 0x1f) == 0) break;
      uVar2 = *(uint *)&(this->It).field_0x4;
      uVar3 = param_1->Size;
      if ((uVar3 == uVar2) &&
         ((((uVar3 == 0 || (uVar2 == 0)) ||
           (iVar10 = strncmp((char *)param_1->DataPtr,
                             (char *)(*(longlong *)&(this->It).field_0x8 - (ulonglong)uVar2),
                             (longlong)(int)uVar2), iVar10 == 0)) && (uVar3 == uVar2))))
      goto LAB_1417ccf6b;
      this->Index = this->Index + 1;
      TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&this->It);
    } while (this->Index < iVar9);
  }
  puVar6 = param_1->DataPtr;
  uStack_a0 = *(undefined8 *)&param_1->Size;
  local_98.Base = local_78;
  iVar10 = (int)*(undefined8 *)&param_1->Size;
  local_98.CurPos = local_78;
  pwVar4 = this->Format;
  local_98.End = (wchar_t *)local_38;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_a8 = puVar6;
  iVar9 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar6,iVar10);
  if (local_98.End < local_98.CurPos + iVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_98,(longlong)iVar9);
  }
  if (iVar10 != 0) {
    local_98.CurPos = Core::Private::Convert(local_98.CurPos,iVar9,puVar6,iVar10);
  }
  if (local_98.End < local_98.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_98,1);
  }
  *local_98.CurPos = L'\0';
  local_b8 = local_98.Base;
  local_b0 = pwVar4;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                     ,0x14d,L"Log format requires field \'%s\' which was not provided. [[%s]]");
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FCbFieldView *)(*pcVar5)();
    return pFVar11;
  }
LAB_1417ccf6b:
  return (FCbFieldView *)&this->It;
}

// FindByPath @ 1417ce520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbFieldView * __thiscall
UE::Logging::Private::TFieldFinder<char8_t>::FindByPath
          (TFieldFinder<char8_t> *this,FCbFieldView *__return_storage_ptr__,
          TStringView<char8_t> *param_1,int param_2)

{
  uint uVar1;
  uchar *puVar2;
  code *pcVar3;
  void *pvVar4;
  ECbFieldError EVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FCbFieldView *pFVar10;
  FCbObjectView *this_00;
  size_t sVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_288 [32];
  TStringView<char8_t> local_248;
  TStringView<char8_t> local_238;
  TStringView<char8_t> local_228;
  TStringView<char8_t> local_218;
  TStringView<char8_t> local_208;
  FCbObjectView local_1f8;
  FCbFieldView local_1e8;
  uchar *local_1d8;
  undefined8 uStack_1d0;
  TStringBuilderBase<wchar_t> local_1c8;
  wchar_t local_1a8 [32];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_248.DataPtr = param_1->DataPtr;
  local_248.Size = param_1->Size;
  local_248._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_238.DataPtr = local_248.DataPtr;
  local_238._8_8_ = local_248._8_8_;
  bVar7 = String::SplitFirstChar(&local_238,'/',&local_248,param_1,CaseSensitive);
  local_228.DataPtr = local_248.DataPtr;
  local_228.Size = local_248.Size;
  local_228._12_4_ = local_248._12_4_;
  pFVar10 = Find(this,&local_228,param_2);
  EVar5 = pFVar10->Error;
  uVar6 = *(undefined2 *)&pFVar10->field_0x2;
  uVar1 = pFVar10->NameLen;
  pvVar4 = pFVar10->Value;
  __return_storage_ptr__->TypeWithFlags = pFVar10->TypeWithFlags;
  __return_storage_ptr__->Error = EVar5;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar6;
  __return_storage_ptr__->NameLen = uVar1;
  __return_storage_ptr__->Value = pvVar4;
  if (bVar7) {
    do {
      local_248.DataPtr = param_1->DataPtr;
      local_248.Size = param_1->Size;
      local_248._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_218.DataPtr = local_248.DataPtr;
      local_218._8_8_ = local_248._8_8_;
      bVar7 = String::SplitFirstChar(&local_218,'/',&local_248,param_1,CaseSensitive);
      this_00 = FCbFieldView::AsObjectView(__return_storage_ptr__,&local_1f8);
      local_208.DataPtr = local_248.DataPtr;
      local_208.Size = local_248.Size;
      local_208._12_4_ = local_248._12_4_;
      pFVar10 = FCbObjectView::FindView(this_00,&local_1e8,&local_208);
      EVar5 = pFVar10->Error;
      uVar6 = *(undefined2 *)&pFVar10->field_0x2;
      uVar1 = pFVar10->NameLen;
      pvVar4 = pFVar10->Value;
      __return_storage_ptr__->TypeWithFlags = pFVar10->TypeWithFlags;
      __return_storage_ptr__->Error = EVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar6;
      __return_storage_ptr__->NameLen = uVar1;
      __return_storage_ptr__->Value = pvVar4;
      if ((__return_storage_ptr__->TypeWithFlags & CustomByName) == None) {
        puVar2 = this->Format;
        local_68.Data = (FScriptContainerElement *)0x0;
        if (puVar2 == (uchar *)0x0) {
          local_60 = (FScriptContainerElement *)0x0;
          local_58 = 0;
        }
        else {
          sVar11 = strlen((char *)puVar2);
          local_58 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,(int)sVar11);
          uVar1 = local_58 + 1;
          uVar14 = uVar1;
          if (uVar1 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_1417ce673;
            }
          }
          else {
LAB_1417ce673:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar14,2);
          }
          local_60 = local_168;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          pwVar12 = Core::Private::Convert((wchar_t *)local_60,uVar1,puVar2,(int)sVar11 + 1);
          if ((pwVar12 == (wchar_t *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pFVar10 = (FCbFieldView *)(*pcVar3)();
            return pFVar10;
          }
        }
        puVar2 = param_1->DataPtr;
        uStack_1d0 = *(undefined8 *)&param_1->Size;
        local_1c8.Base = local_1a8;
        iVar13 = (int)*(undefined8 *)&param_1->Size;
        local_1c8.CurPos = local_1a8;
        local_1c8.bIsDynamic = false;
        local_1c8.bIsExternal = false;
        local_1c8.End = (wchar_t *)local_168;
        local_1d8 = puVar2;
        iVar9 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,iVar13);
        if (local_1c8.End < (FScriptContainerElement *)(local_1c8.CurPos + iVar9)) {
          TStringBuilderBase<wchar_t>::Extend(&local_1c8,(longlong)iVar9);
        }
        if (iVar13 != 0) {
          local_1c8.CurPos = Core::Private::Convert(local_1c8.CurPos,iVar9,puVar2,iVar13);
        }
        if (local_1c8.End < (FScriptContainerElement *)(local_1c8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_1c8,1);
        }
        *local_1c8.CurPos = L'\0';
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Field",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                           ,0x15c,L"Log format requires field \'%s\' which was not provided. [[%s]]"
                          );
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1c8);
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FCbFieldView *)(*pcVar3)();
          return pFVar10;
        }
      }
    } while (bVar7);
  }
  return __return_storage_ptr__;
}

// FindByPath @ 1417ce820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbFieldView * __thiscall
UE::Logging::Private::TFieldFinder<wchar_t>::FindByPath
          (TFieldFinder<wchar_t> *this,FCbFieldView *__return_storage_ptr__,
          TStringView<char8_t> *param_1,int param_2)

{
  code *pcVar1;
  uchar *puVar2;
  void *pvVar3;
  ECbFieldError EVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FCbFieldView *pFVar10;
  FCbObjectView *this_00;
  int iVar11;
  undefined1 auStackY_168 [32];
  TStringView<char8_t> local_128;
  TStringView<char8_t> local_118;
  TStringView<char8_t> local_108;
  TStringView<char8_t> local_f8;
  TStringView<char8_t> local_e8;
  FCbObjectView local_d8;
  FCbFieldView local_c8;
  uchar *local_b8;
  undefined8 uStack_b0;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128.DataPtr = param_1->DataPtr;
  local_128.Size = param_1->Size;
  local_128._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_118.DataPtr = local_128.DataPtr;
  local_118._8_8_ = local_128._8_8_;
  bVar7 = String::SplitFirstChar(&local_118,'/',&local_128,param_1,CaseSensitive);
  local_108.DataPtr = local_128.DataPtr;
  local_108.Size = local_128.Size;
  local_108._12_4_ = local_128._12_4_;
  pFVar10 = Find(this,&local_108,param_2);
  EVar4 = pFVar10->Error;
  uVar5 = *(undefined2 *)&pFVar10->field_0x2;
  uVar6 = pFVar10->NameLen;
  pvVar3 = pFVar10->Value;
  __return_storage_ptr__->TypeWithFlags = pFVar10->TypeWithFlags;
  __return_storage_ptr__->Error = EVar4;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar5;
  __return_storage_ptr__->NameLen = uVar6;
  __return_storage_ptr__->Value = pvVar3;
  if (bVar7) {
    do {
      local_128.DataPtr = param_1->DataPtr;
      local_128.Size = param_1->Size;
      local_128._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_f8.DataPtr = local_128.DataPtr;
      local_f8._8_8_ = local_128._8_8_;
      bVar7 = String::SplitFirstChar(&local_f8,'/',&local_128,param_1,CaseSensitive);
      this_00 = FCbFieldView::AsObjectView(__return_storage_ptr__,&local_d8);
      local_e8.DataPtr = local_128.DataPtr;
      local_e8.Size = local_128.Size;
      local_e8._12_4_ = local_128._12_4_;
      pFVar10 = FCbObjectView::FindView(this_00,&local_c8,&local_e8);
      EVar4 = pFVar10->Error;
      uVar5 = *(undefined2 *)&pFVar10->field_0x2;
      uVar6 = pFVar10->NameLen;
      pvVar3 = pFVar10->Value;
      __return_storage_ptr__->TypeWithFlags = pFVar10->TypeWithFlags;
      __return_storage_ptr__->Error = EVar4;
      *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar5;
      __return_storage_ptr__->NameLen = uVar6;
      __return_storage_ptr__->Value = pvVar3;
      if ((__return_storage_ptr__->TypeWithFlags & CustomByName) == None) {
        puVar2 = param_1->DataPtr;
        uStack_b0 = *(undefined8 *)&param_1->Size;
        local_a8.Base = local_88;
        iVar11 = (int)*(undefined8 *)&param_1->Size;
        local_a8.CurPos = local_88;
        local_a8.bIsDynamic = false;
        local_a8.bIsExternal = false;
        local_a8.End = (wchar_t *)local_48;
        local_b8 = puVar2;
        iVar9 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,iVar11);
        if (local_a8.End < local_a8.CurPos + iVar9) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,(longlong)iVar9);
        }
        if (iVar11 != 0) {
          local_a8.CurPos = Core::Private::Convert(local_a8.CurPos,iVar9,puVar2,iVar11);
        }
        if (local_a8.End < local_a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
        }
        *local_a8.CurPos = L'\0';
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Field",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\StructuredLog.cpp"
                           ,0x15c,L"Log format requires field \'%s\' which was not provided. [[%s]]"
                          );
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
        if (bVar8) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FCbFieldView *)(*pcVar1)();
          return pFVar10;
        }
      }
    } while (bVar7);
  }
  return __return_storage_ptr__;
}

