// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 6

// PopElement @ 1445605f0

wchar_t * __thiscall FFastXmlImpl::PopElement(FFastXmlImpl *this)

{
  uint uVar1;
  
  if (this->IsStackAllocated[this->StackIndex] != false) {
    FMemory::Free(this->Stack[this->StackIndex]);
    this->Stack[this->StackIndex] = (wchar_t *)0x0;
    this->IsStackAllocated[this->StackIndex] = false;
  }
  if (this->StackIndex != 0) {
    uVar1 = this->StackIndex - 1;
    this->StackIndex = uVar1;
    return this->Stack[uVar1];
  }
  return (wchar_t *)0x0;
}

// ProcessClose @ 1445615a0

wchar_t * __thiscall FFastXmlImpl::ProcessClose(FFastXmlImpl *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  wchar_t *_Str1;
  FText *pFVar5;
  wchar_t *pwVar6;
  wchar_t *_Str2;
  FText local_18;
  
  _Str1 = PopElement(this);
  wVar1 = param_1[1];
  pwVar6 = param_1 + 1;
  _Str2 = _Str1;
  pwVar2 = pwVar6;
  if (wVar1 != L'>') {
    while ((param_1 = pwVar2, wVar1 != L'\0' && (wVar1 != L'>'))) {
      pwVar2 = param_1 + 1;
      wVar1 = param_1[1];
    }
    *param_1 = L'\0';
    _Str2 = pwVar6;
  }
  iVar4 = wcscmp(_Str1,_Str2);
  if (iVar4 == 0) {
    cVar3 = (**(code **)((longlong)*this->Callback + 0x18))(this->Callback,_Str2);
    pwVar6 = param_1 + 1;
    if (cVar3 == '\0') {
      pwVar6 = (wchar_t *)0x0;
    }
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FastXml",L"OpenCloseTagsNotMatched",
                        L"Open and closing tags do not match");
    FText::operator=(&this->ErrorMessage,pFVar5);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pwVar6 = (wchar_t *)0x0;
  }
  return pwVar6;
}

// ProcessClose @ 144561680

/* WARNING: Type propagation algorithm not settling */

wchar_t * __thiscall
FFastXmlImpl::ProcessClose
          (FFastXmlImpl *this,wchar_t param_1,wchar_t *param_2,wchar_t *param_3,int param_4,
          wchar_t **param_5)

{
  FFeedbackContext *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  FText *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t wVar12;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  this_00 = this->FeedbackContext;
  if (this_00 != (FFeedbackContext *)0x0) {
    iVar4 = (int)this->XmlFileContentsLength;
    if (((this->XmlFileContentsLength != (longlong)iVar4) || (iVar4 < 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar1)();
      return pwVar5;
    }
    FFeedbackContext::UpdateProgress
              (this_00,(int)((longlong)param_3 - (longlong)this->XmlFileContents >> 1),iVar4);
  }
  if ((param_1 + L'￑' & 0xffefU) == 0) {
    pwVar5 = wcschr(param_2,param_1);
    lVar10 = 0;
    if (pwVar5 != (wchar_t *)0x0) {
      *pwVar5 = L'\0';
    }
    if ((param_1 == L'?') && (iVar4 = wcscmp(param_2,L"xml"), iVar4 == 0)) {
      cVar3 = (**(code **)*this->Callback)(this->Callback,0,this->LineNumber);
    }
    else {
      cVar3 = (**(code **)((longlong)*this->Callback + 8))
                        (this->Callback,param_2,0,this->LineNumber);
      if (cVar3 == '\0') {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"FastXml",L"UserAbortedOnElement",
                            L"User aborted the parsing process");
        FText::operator=(&this->ErrorMessage,pFVar6);
        if (local_58.TextData.Reference == (ITextData *)0x0) {
          return (wchar_t *)0x0;
        }
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        return (wchar_t *)0x0;
      }
      if (((param_4 & 1U) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeCount % 2 == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                             ,0x69,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pwVar5 = (wchar_t *)(*pcVar1)();
        return pwVar5;
      }
      if (0 < param_4 / 2) {
        do {
          cVar3 = (**(code **)((longlong)*this->Callback + 0x10))
                            (this->Callback,*param_5,param_5[1]);
          if (cVar3 == '\0') {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               (&local_48,L"FastXml",L"UserAbortedOnAttribute",
                                L"User aborted the parsing process");
            FText::operator=(&this->ErrorMessage,pFVar6);
            if (local_48.TextData.Reference == (ITextData *)0x0) {
              return (wchar_t *)0x0;
            }
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
            return (wchar_t *)0x0;
          }
          lVar10 = lVar10 + 1;
          param_5 = param_5 + 2;
        } while (lVar10 < param_4 / 2);
      }
      PushElement(this,param_2);
      pwVar7 = PopElement(this);
      cVar3 = (**(code **)((longlong)*this->Callback + 0x18))(this->Callback,pwVar7);
    }
    if (cVar3 == '\0') {
      return (wchar_t *)0x0;
    }
    if (pwVar5 == (wchar_t *)0x0) {
      param_3 = param_3 + 1;
    }
    goto LAB_144561b46;
  }
  wVar12 = *param_3;
  pwVar5 = param_3;
  while (((wVar12 != L'\0' && ((ushort)wVar12 < 0x100)) &&
         ((this->CharacterTypeMap[(ushort)wVar12] == Whitespace ||
          (this->CharacterTypeMap[(ushort)wVar12] == EndOfLine))))) {
    if (wVar12 == L'\n') {
      this->LineNumber = this->LineNumber + 1;
    }
    pwVar7 = pwVar5 + 1;
    pwVar5 = pwVar5 + 1;
    wVar12 = *pwVar7;
  }
  pwVar9 = (wchar_t *)0x0;
  wVar12 = *pwVar5;
  pwVar7 = pwVar5;
  while ((pwVar8 = (wchar_t *)0x0, wVar12 != L'\0' && (pwVar8 = (wchar_t *)0x0, wVar12 != L'<'))) {
    if (((ushort)wVar12 < 0x100) && (this->CharacterTypeMap[(ushort)wVar12] == EndOfLine)) {
      if (*pwVar7 == L'\r') {
        this->LineNumber = this->LineNumber + 1;
      }
      wVar12 = L' ';
      *pwVar7 = L' ';
      pwVar11 = pwVar7;
      goto LAB_1445617d0;
    }
    pwVar8 = pwVar7 + 1;
    pwVar7 = pwVar7 + 1;
    wVar12 = *pwVar8;
  }
  goto LAB_14456187b;
  while( true ) {
    if (wVar12 == L'\n') {
      this->LineNumber = this->LineNumber + 1;
    }
    wVar12 = pwVar11[1];
    pwVar11 = pwVar11 + 1;
    if (wVar12 == L'\0') break;
LAB_1445617d0:
    if ((0xff < (ushort)wVar12) ||
       ((this->CharacterTypeMap[(ushort)wVar12] != Whitespace &&
        (this->CharacterTypeMap[(ushort)wVar12] != EndOfLine)))) break;
  }
  wVar12 = *pwVar11;
  pwVar8 = pwVar7;
  while ((pwVar7 = pwVar11, pwVar8 = pwVar8 + 1, wVar12 != L'\0' && (wVar12 != L'<'))) {
    if (((ushort)wVar12 < 0x100) && (this->CharacterTypeMap[(ushort)wVar12] == EndOfLine)) {
      if (wVar12 == L'\r') {
        this->LineNumber = this->LineNumber + 1;
      }
      *pwVar8 = L' ';
      wVar12 = *pwVar7;
      while (((wVar12 != L'\0' && ((ushort)wVar12 < 0x100)) &&
             ((this->CharacterTypeMap[(ushort)wVar12] == Whitespace ||
              (this->CharacterTypeMap[(ushort)wVar12] == EndOfLine))))) {
        if (wVar12 == L'\n') {
          this->LineNumber = this->LineNumber + 1;
        }
        pwVar11 = pwVar7 + 1;
        pwVar7 = pwVar7 + 1;
        wVar12 = *pwVar11;
      }
    }
    else {
      pwVar7 = pwVar7 + 1;
      *pwVar8 = wVar12;
    }
    pwVar11 = pwVar7;
    wVar12 = *pwVar7;
  }
LAB_14456187b:
  if (*pwVar7 == L'<') {
    if (pwVar8 == (wchar_t *)0x0) {
      *pwVar7 = L'\0';
    }
    else {
      *pwVar8 = L'\0';
    }
    param_3 = pwVar7 + 1;
    if (*pwVar5 == L'\0') {
      pwVar5 = pwVar9;
    }
    cVar3 = (**(code **)((longlong)*this->Callback + 8))
                      (this->Callback,param_2,pwVar5,this->LineNumber);
    if (cVar3 != '\0') {
      if (((param_4 & 1U) != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeCount % 2 == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                             ,0xc1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pwVar5 = (wchar_t *)(*pcVar1)();
        return pwVar5;
      }
      if (0 < param_4 / 2) {
        do {
          cVar3 = (**(code **)((longlong)*this->Callback + 0x10))
                            (this->Callback,*param_5,param_5[1]);
          if (cVar3 == '\0') {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               (&local_88,L"FastXml",L"UserAbortedOnAttribute",
                                L"User aborted the parsing process");
            FText::operator=(&this->ErrorMessage,pFVar6);
            if (local_88.TextData.Reference == (ITextData *)0x0) {
              return (wchar_t *)0x0;
            }
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            return (wchar_t *)0x0;
          }
          pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
          param_5 = param_5 + 2;
        } while ((longlong)pwVar9 < (longlong)(param_4 / 2));
      }
      PushElement(this,param_2);
      if (*param_3 == L'!') {
        if ((pwVar7[2] == L'-') && (pwVar7[3] == L'-')) {
          pwVar5 = pwVar7 + 4;
          wVar12 = pwVar7[4];
          while ((wVar12 != L'\0' && (wVar12 == L' '))) {
            pwVar7 = pwVar5 + 1;
            pwVar5 = pwVar5 + 1;
            wVar12 = *pwVar7;
          }
          pwVar7 = wcsstr(pwVar5,L"-->");
          param_3 = pwVar5;
          if (pwVar7 != (wchar_t *)0x0) {
            *pwVar7 = L'\0';
            param_3 = pwVar7 + 3;
            cVar3 = (**(code **)((longlong)*this->Callback + 0x20))(this->Callback,pwVar5);
            if (cVar3 == '\0') {
              pFVar6 = FText::AsLocalizable_Advanced_LocText
                                 (&local_78,L"FastXml",L"UserAbortedOnComment",
                                  L"User aborted the parsing process");
              FText::operator=(&this->ErrorMessage,pFVar6);
              if (local_78.TextData.Reference == (ITextData *)0x0) {
                return (wchar_t *)0x0;
              }
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              return (wchar_t *)0x0;
            }
          }
        }
      }
      else if (*param_3 == L'/') {
        param_3 = ProcessClose(this,param_3);
      }
LAB_144561b46:
      if (this->FeedbackContext == (FFeedbackContext *)0x0) {
        return param_3;
      }
      cVar3 = (**(code **)(this->FeedbackContext->_padding_ + 0x60))();
      if (cVar3 == '\0') {
        return param_3;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"FastXml",L"UserAbortedOnFile",
                          L"User cancelled processing of this file");
      FText::operator=(&this->ErrorMessage,pFVar6);
      if (local_38.TextData.Reference == (ITextData *)0x0) {
        return (wchar_t *)0x0;
      }
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return (wchar_t *)0x0;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"FastXml",L"UserAbortedOnElement",
                        L"User aborted the parsing process");
    FText::operator=(&this->ErrorMessage,pFVar6);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      return (wchar_t *)0x0;
    }
  }
  else {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"FastXml",L"ElementDataNotTerminated",
                        L"Data portion of an element wasn\'t terminated properly");
    FText::operator=(&this->ErrorMessage,pFVar6);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      return (wchar_t *)0x0;
    }
  }
  return (wchar_t *)0x0;
}

// ProcessXmlFile @ 144561d20

bool __thiscall FFastXmlImpl::ProcessXmlFile(FFastXmlImpl *this,FText *param_1,int *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  char cVar4;
  undefined1 local_res8 [8];
  
  bVar3 = ProcessXmlFileInternal(this);
  if (bVar3) {
    if (this->FeedbackContext != (FFeedbackContext *)0x0) {
      cVar4 = (**(code **)(this->FeedbackContext->_padding_ + 0x60))();
      if (cVar4 != '\0') goto LAB_144561d5d;
    }
    bVar3 = true;
  }
  else {
LAB_144561d5d:
    bVar3 = false;
  }
  pIVar1 = (this->ErrorMessage).TextData.Reference;
  pIVar2 = (param_1->TextData).Reference;
  if (pIVar2 != pIVar1) {
    (param_1->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  param_1->Flags = (this->ErrorMessage).Flags;
  *param_2 = this->LineNumber;
  return bVar3;
}

// ProcessXmlFileInternal @ 144561dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FFastXmlImpl::ProcessXmlFileInternal(FFastXmlImpl *this)

{
  ulong64 _Size;
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  wchar_t wVar7;
  int iVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  wchar_t *_Str1;
  wchar_t *pwVar11;
  FText *pFVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStackY_40c8 [32];
  FText local_4090;
  FText local_4080;
  FText local_4070;
  FText local_4060;
  FText local_4050;
  wchar_t *local_4038 [2048];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x144561ddc;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_40c8;
  uVar16 = 0;
  this->LineNumber = 1;
  uVar14 = uVar16;
  if (this->StackIndex != 0xffffffff) {
    do {
      if ((this->IsStackAllocated[uVar14] == false) &&
         (pwVar13 = this->Stack[uVar14], pwVar13 != (wchar_t *)0x0)) {
        sVar9 = wcslen(pwVar13);
        _Size = (sVar9 & 0xffffffff) * 2 + 2;
        pwVar10 = FMemory::Malloc(_Size,0);
        this->Stack[uVar14] = pwVar10;
        memcpy(pwVar10,pwVar13,_Size);
        this->IsStackAllocated[uVar14] = true;
      }
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
    } while (uVar15 < this->StackIndex + 1);
  }
  pwVar13 = this->XmlFileContents;
  wVar7 = *pwVar13;
joined_r0x000144561e88:
  if (wVar7 == L'\0') {
LAB_144562267:
    if (this->StackIndex == 0) {
LAB_1445623d3:
      bVar5 = true;
    }
    else {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_4050,L"FastXml",L"InvalidFileFormat",L"Invalid file format");
      FText::operator=(&this->ErrorMessage,pFVar12);
LAB_1445622a4:
      if (local_4050.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4050.TextData.Reference + 0x10))();
      }
LAB_1445622af:
      bVar5 = false;
    }
    return bVar5;
  }
  do {
    if ((0xff < (ushort)wVar7) ||
       ((this->CharacterTypeMap[(ushort)wVar7] != Whitespace &&
        (this->CharacterTypeMap[(ushort)wVar7] != EndOfLine)))) break;
    if (wVar7 == L'\n') {
      this->LineNumber = this->LineNumber + 1;
    }
    wVar7 = pwVar13[1];
    pwVar13 = pwVar13 + 1;
  } while (wVar7 != L'\0');
  wVar7 = *pwVar13;
  if (wVar7 == L'\0') goto LAB_144562267;
  pwVar10 = pwVar13;
  if (wVar7 != L'<') {
LAB_144561efa:
    if (wVar7 == L'/') {
      _Str1 = PopElement(this);
      wVar7 = pwVar10[1];
      pwVar13 = pwVar10 + 1;
      pwVar11 = _Str1;
      pwVar3 = pwVar13;
      if (wVar7 != L'>') {
        while ((pwVar10 = pwVar3, wVar7 != L'\0' && (wVar7 != L'>'))) {
          pwVar3 = pwVar10 + 1;
          wVar7 = pwVar10[1];
        }
        *pwVar10 = L'\0';
        pwVar11 = pwVar13;
      }
      iVar8 = wcscmp(_Str1,pwVar11);
      if (iVar8 == 0) {
        cVar4 = (**(code **)((longlong)*this->Callback + 0x18))(this->Callback,pwVar11);
        if (cVar4 != '\0') {
          pwVar13 = pwVar10 + 1;
          goto LAB_1445622f3;
        }
        goto LAB_1445622af;
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_4080,L"FastXml",L"OpenCloseTagsNotMatched",
                           L"Open and closing tags do not match");
      FText::operator=(&this->ErrorMessage,pFVar12);
      local_4050.TextData.Reference = local_4080.TextData.Reference;
      goto LAB_1445622a4;
    }
LAB_144562017:
    wVar7 = *pwVar10;
    pwVar13 = pwVar10;
    if (wVar7 == L'?') {
      wVar7 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
      pwVar13 = pwVar10;
    }
    while ((wVar7 != L'\0' &&
           ((0xff < (ushort)wVar7 ||
            ((this->CharacterTypeMap[(ushort)wVar7] != Whitespace && (wVar7 != L'>'))))))) {
      pwVar11 = pwVar10 + 1;
      pwVar10 = pwVar10 + 1;
      wVar7 = *pwVar11;
    }
    if (*pwVar10 == L'>') {
      wVar7 = pwVar10[-1];
      if ((wVar7 != L'?') && (wVar7 != L'/')) {
        wVar7 = L'>';
      }
      *pwVar10 = L'\0';
      pwVar10 = pwVar10 + 1;
      iVar8 = 0;
      goto LAB_1445622e2;
    }
    if (*pwVar10 == L'\0') goto LAB_1445623d3;
    *pwVar10 = L'\0';
    pwVar11 = pwVar10 + 1;
    wVar7 = *pwVar11;
    uVar14 = uVar16;
    uVar17 = uVar16;
    if (wVar7 != L'\0') {
LAB_1445620b1:
      if (((ushort)wVar7 < 0x100) &&
         ((this->CharacterTypeMap[(ushort)wVar7] == Whitespace ||
          (this->CharacterTypeMap[(ushort)wVar7] == EndOfLine)))) goto LAB_1445620c8;
      goto LAB_1445620e1;
    }
    goto LAB_144562267;
  }
  pwVar10 = pwVar13 + 1;
  wVar7 = *pwVar10;
  if (wVar7 == L'?') {
    wVar7 = pwVar13[2];
    pwVar10 = pwVar13 + 2;
    goto LAB_144561efa;
  }
  if (wVar7 != L'!') goto LAB_144561efa;
  if ((pwVar13[2] != L'-') || (pwVar13[3] != L'-')) goto LAB_144562017;
  pwVar10 = pwVar13 + 4;
  wVar7 = pwVar13[4];
  while ((wVar7 != L'\0' && (wVar7 == L' '))) {
    pwVar13 = pwVar10 + 1;
    pwVar10 = pwVar10 + 1;
    wVar7 = *pwVar13;
  }
  pwVar11 = wcsstr(pwVar10,L"-->");
  pwVar13 = pwVar10;
  if (pwVar11 != (wchar_t *)0x0) {
    *pwVar11 = L'\0';
    pwVar13 = pwVar11 + 3;
    cVar4 = (**(code **)((longlong)*this->Callback + 0x20))(this->Callback,pwVar10);
    if (cVar4 != '\0') goto LAB_1445622f5;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_4090,L"FastXml",L"UserAbortedOnComment",
                         L"User aborted the parsing process");
    FText::operator=(&this->ErrorMessage,pFVar12);
    local_4050.TextData.Reference = local_4090.TextData.Reference;
    goto LAB_1445622a4;
  }
LAB_1445622f5:
  wVar7 = *pwVar13;
  goto joined_r0x000144561e88;
LAB_1445620c8:
  if (wVar7 == L'\n') {
    this->LineNumber = this->LineNumber + 1;
  }
  wVar7 = pwVar11[1];
  pwVar11 = pwVar11 + 1;
  if (wVar7 != L'\0') goto LAB_1445620b1;
LAB_1445620e1:
  wVar7 = *pwVar11;
  iVar8 = (int)uVar17;
  if ((0xff < (ushort)wVar7) || (this->CharacterTypeMap[(ushort)wVar7] != EndOfElement)) {
    if (0x7ff < (longlong)uVar14) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_4060,L"FastXml",L"TooManyAttributes",
                           L"Encountered too many attributes in a single element for this parser to handle"
                          );
      FText::operator=(&this->ErrorMessage,pFVar12);
      local_4050.TextData.Reference = local_4060.TextData.Reference;
      goto LAB_1445622a4;
    }
    if (((longlong)uVar14 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                           ,0x1a3,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    wVar7 = *pwVar11;
    local_4038[uVar14] = pwVar11;
    while ((wVar7 != L'\0' &&
           ((0xff < (ushort)wVar7 ||
            ((this->CharacterTypeMap[(ushort)wVar7] != Whitespace && (wVar7 != L'='))))))) {
      pwVar10 = pwVar11 + 1;
      pwVar11 = pwVar11 + 1;
      wVar7 = *pwVar10;
    }
    wVar7 = *pwVar11;
    if (wVar7 != L'\0') {
      *pwVar11 = L'\0';
      pwVar11 = pwVar11 + 1;
      if (wVar7 != L'=') {
        wVar7 = *pwVar11;
        while ((wVar7 != L'\0' && (wVar7 != L'='))) {
          pwVar10 = pwVar11 + 1;
          pwVar11 = pwVar11 + 1;
          wVar7 = *pwVar10;
        }
        if (*pwVar11 == L'=') {
          pwVar11 = pwVar11 + 1;
        }
      }
      wVar7 = *pwVar11;
      if (wVar7 == L'\0') goto LAB_144562267;
      do {
        if ((0xff < (ushort)wVar7) ||
           ((this->CharacterTypeMap[(ushort)wVar7] != Whitespace &&
            (this->CharacterTypeMap[(ushort)wVar7] != EndOfLine)))) break;
        if (wVar7 == L'\n') {
          this->LineNumber = this->LineNumber + 1;
        }
        wVar7 = pwVar11[1];
        pwVar11 = pwVar11 + 1;
      } while (wVar7 != L'\0');
      wVar7 = *pwVar11;
      if ((wVar7 == L'\"') || (wVar7 == L'\'')) {
        wVar1 = pwVar11[1];
        pwVar11 = pwVar11 + 1;
        local_4038[uVar14 + 1] = pwVar11;
        uVar17 = (ulonglong)(iVar8 + 2);
        uVar14 = uVar14 + 2;
        while ((wVar1 != L'\0' && (wVar1 != wVar7))) {
          pwVar10 = pwVar11 + 1;
          pwVar11 = pwVar11 + 1;
          wVar1 = *pwVar10;
        }
        if (*pwVar11 != wVar7) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_4070,L"FastXml",L"NoClosingQuoteForAttribute",
                               L"Failed to find closing quote for attribute");
          FText::operator=(&this->ErrorMessage,pFVar12);
          local_4050.TextData.Reference = local_4070.TextData.Reference;
          goto LAB_1445622a4;
        }
        *pwVar11 = L'\0';
        pwVar11 = pwVar11 + 1;
      }
      else {
        uVar17 = (ulonglong)(iVar8 - 1);
        uVar14 = uVar14 - 1;
        while (((wVar7 != L'/' && (wVar7 != L'>')) && (wVar7 != L'\0'))) {
          pwVar10 = pwVar11 + 1;
          pwVar11 = pwVar11 + 1;
          wVar7 = *pwVar10;
        }
      }
    }
    wVar7 = *pwVar11;
    if (wVar7 == L'\0') goto LAB_144562267;
    goto LAB_1445620b1;
  }
  pwVar10 = pwVar11 + 1;
  if (wVar7 == L'?') {
    if (*pwVar10 != L'>') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                         ,399,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      goto LAB_1445622af;
    }
    pwVar10 = pwVar11 + 2;
  }
LAB_1445622e2:
  pwVar13 = ProcessClose(this,wVar7,pwVar13,pwVar10,iVar8,local_4038);
LAB_1445622f3:
  if (pwVar13 == (wchar_t *)0x0) goto LAB_1445622af;
  goto LAB_1445622f5;
}

// PushElement @ 144562410

void __thiscall FFastXmlImpl::PushElement(FFastXmlImpl *this,wchar_t *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (0x7ff < this->StackIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StackIndex < MaxStackDepth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\XmlParser\\Private\\FastXml.cpp"
                       ,0x224,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->StackIndex;
  if (uVar1 < 0x800) {
    if (this->IsStackAllocated[uVar1] != false) {
      FMemory::Free(this->Stack[uVar1]);
    }
    this->IsStackAllocated[this->StackIndex] = false;
    this->Stack[this->StackIndex] = param_1;
    this->StackIndex = this->StackIndex + 1;
  }
  return;
}

