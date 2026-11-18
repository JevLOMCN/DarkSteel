// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// BracePatternMatches @ 1476955d0

bool __cdecl
FAudioAddressPattern::BracePatternMatches
          (FString *param_1,int param_2,int param_3,FString *param_4,int *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if ((param_3 - param_2 < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PatternEndIndex - PatternStartIndex > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0xb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pwVar6 = ::FString::operator[](param_1,param_2);
  if ((*pwVar6 != L'{') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pattern[PatternStartIndex] == \'{\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0xc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pwVar6 = ::FString::operator[](param_1,param_3);
  if ((*pwVar6 != L'}') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pattern[PatternEndIndex] == \'}\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0xd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  if (iVar10 == 2) {
    return true;
  }
  iVar9 = param_2 + 1;
  bVar3 = false;
  lVar11 = (longlong)iVar9;
  iVar10 = *param_5;
LAB_1476956d0:
  do {
    iVar8 = (param_4->Data).ArrayNum;
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    if ((iVar7 <= iVar10) || (param_3 <= iVar9)) {
      return false;
    }
    if (iVar9 < 0) {
code_r0x000147695719:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar8 = (param_1->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= iVar9) goto code_r0x000147695719;
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2) == 0x2c) {
      if (bVar3) {
        *param_5 = iVar10;
        return true;
      }
      iVar10 = *param_5;
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 1;
      goto LAB_1476956d0;
    }
    if (iVar9 < 0) {
code_r0x00014769578a:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar8 = (param_1->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= iVar9) goto code_r0x00014769578a;
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (iVar10 < 0) {
code_r0x0001476957e3:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      iVar8 = (param_4->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= iVar10) goto code_r0x0001476957e3;
    }
    if (*(short *)(pFVar1 + lVar11 * 2) ==
        *(short *)((param_4->Data).AllocatorInstance.Data + (longlong)iVar10 * 2)) {
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 1;
      bVar3 = true;
    }
    else {
      iVar10 = *param_5;
      bVar3 = false;
      do {
        if (iVar9 < 0) {
code_r0x000147695864:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        else {
          iVar7 = (param_1->Data).ArrayNum;
          iVar8 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar8 = 0;
          }
          if (iVar8 <= iVar9) goto code_r0x000147695864;
        }
        if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar11 * 2) == 0x2c) break;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 1;
      } while (iVar9 < param_3);
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 1;
    }
  } while( true );
}

// BracketPatternMatches @ 1476958e0

bool __cdecl
FAudioAddressPattern::BracketPatternMatches
          (FString *param_1,int param_2,int param_3,wchar_t param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if ((param_3 - param_2 < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PatternEndIndex - PatternStartIndex > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pwVar6 = ::FString::operator[](param_1,param_2);
  if ((*pwVar6 != L'[') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pattern[PatternStartIndex] == \'[\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pwVar6 = ::FString::operator[](param_1,param_3);
  if ((*pwVar6 != L']') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pattern[PatternEndIndex] == \']\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar7 = (param_1->Data).ArrayNum;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 2) {
    return true;
  }
  bVar2 = false;
  if (((iVar7 == 0) || (iVar7 + -1 < 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x21) {
    iVar5 = (param_1->Data).ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if (iVar7 == 3) {
      return false;
    }
    bVar2 = true;
    param_2 = param_2 + 1;
  }
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = param_2 + 1;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != param_2 + 5) {
LAB_147695b5a:
    if (iVar8 < param_3) {
      lVar9 = (longlong)iVar8 * 2;
      do {
        if (iVar8 < 0) {
code_r0x000147695b9a:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        else {
          iVar5 = (param_1->Data).ArrayNum;
          iVar7 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= iVar8) goto code_r0x000147695b9a;
        }
        if (param_4 == *(wchar_t *)((param_1->Data).AllocatorInstance.Data + lVar9))
        goto LAB_147695b34;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 2;
      } while (iVar8 < param_3);
    }
    return bVar2;
  }
  if ((((param_2 + 2 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= param_2 + 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)param_2 * 2 + 4) != 0x2d)
  goto LAB_147695b5a;
  if (-1 < iVar8) {
    iVar5 = (param_1->Data).ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if (iVar8 < iVar7) goto LAB_147695af9;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_147695af9:
  if (((ushort)param_4 <
       (ushort)*(wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar8 * 2)) ||
     (pwVar6 = ::FString::operator[](param_1,param_2 + 3), (ushort)*pwVar6 < (ushort)param_4)) {
    pwVar6 = ::FString::operator[](param_1,param_2 + 3);
    if ((ushort)param_4 < (ushort)*pwVar6) {
      return bVar2;
    }
    pwVar6 = ::FString::operator[](param_1,iVar8);
    if ((ushort)*pwVar6 < (ushort)param_4) {
      return bVar2;
    }
  }
LAB_147695b34:
  return (bool)(bVar2 ^ 1);
}

// FindPatternTerminatorIndex @ 1476a9090

int __cdecl
FAudioAddressPattern::FindPatternTerminatorIndex(FString *param_1,int param_2,wchar_t param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = param_2 + 1;
  lVar6 = (longlong)iVar5 * 2;
  do {
    if (iVar5 < 0) {
code_r0x0001476a90f6:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    else {
      iVar1 = (param_1->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      if (iVar4 <= iVar5) goto code_r0x0001476a90f6;
    }
    if (*(wchar_t *)((param_1->Data).AllocatorInstance.Data + lVar6) == param_3) {
      return iVar5;
    }
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if ((iVar4 <= iVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EndIndex < Pattern.Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio\\AudioAddressPattern.cpp"
                           ,0x7f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = iVar5 + 1;
    lVar6 = lVar6 + 2;
  } while( true );
}

// GetInvalidChars @ 1476b17b0

TArray<wchar_t,TSizedDefaultAllocator<32>_> * __cdecl FAudioAddressPattern::GetInvalidChars(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,2,0,&InvalidChars.AllocatorInstance,2,&InvalidChars.ArrayMax);
      *(undefined4 *)InvalidChars.AllocatorInstance.Data = 0x230020;
      atexit(`FAudioAddressPattern::GetInvalidChars'::__l2::
             _dynamic_atexit_destructor_for__InvalidChars__);
      _Init_thread_footer(&::_TSS0);
      return &InvalidChars;
    }
  }
  return &InvalidChars;
}

// GetPatternChars @ 1476b2880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<wchar_t,TSizedDefaultAllocator<32>_> * __cdecl FAudioAddressPattern::GetPatternChars(void)

{
  ForAnyElementType FVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,7,0,&PatternChars.AllocatorInstance,7,&PatternChars.ArrayMax);
      FVar1 = PatternChars.AllocatorInstance;
      *(undefined8 *)PatternChars.AllocatorInstance.Data = 0x5b003f002a002c;
      *(undefined4 *)(FVar1.Data + 8) = 0x7b005d;
      *(undefined2 *)(FVar1.Data + 0xc) = 0x7d;
      atexit(`FAudioAddressPattern::GetPatternChars'::__l2::
             _dynamic_atexit_destructor_for__PatternChars__);
      _Init_thread_footer(&::_TSS0);
      return &PatternChars;
    }
  }
  return &PatternChars;
}

// IsValidPath @ 1476bad30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FAudioAddressPattern::IsValidPath(FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  undefined1 auStackY_88 [32];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((1 < (param_1->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,L"/"), iVar4 != 0)) {
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = (param_1->Data).ArrayNum;
    uVar9 = (ulonglong)_tls_index;
    pFVar1 = pFVar8 + (longlong)iVar4 * 2;
    while( true ) {
      if ((param_1->Data).ArrayNum != iVar4) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_48);
      }
      if (pFVar8 == pFVar1) break;
      sVar3 = *(short *)pFVar8;
      if (sVar3 == 0x2f) {
        if (param_2) {
          return false;
        }
      }
      else {
        pTVar5 = GetInvalidChars();
        pFVar7 = (pTVar5->AllocatorInstance).Data;
        pFVar2 = pFVar7 + (longlong)pTVar5->ArrayNum * 2;
        for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 2) {
          if (*(short *)pFVar7 == sVar3) {
            return false;
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          local_40 = 0x2a002c;
          local_34 = 0x7d;
          uStack_3c = 0x5b003f;
          local_38 = 0x7b005d;
          PatternChars.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          PatternChars.ArrayNum = 7;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,7,0,&PatternChars.AllocatorInstance,7,&PatternChars.ArrayMax);
          FVar6 = PatternChars.AllocatorInstance;
          *(ulonglong *)PatternChars.AllocatorInstance.Data = CONCAT44(uStack_3c,local_40);
          *(undefined4 *)(FVar6.Data + 8) = local_38;
          *(undefined2 *)(FVar6.Data + 0xc) = local_34;
          atexit(`FAudioAddressPattern::GetPatternChars'::__l2::
                 _dynamic_atexit_destructor_for__PatternChars__);
          _Init_thread_footer(&::_TSS0);
        }
        for (FVar6.Data = PatternChars.AllocatorInstance.Data;
            FVar6.Data != PatternChars.AllocatorInstance.Data + (longlong)PatternChars.ArrayNum * 2;
            FVar6.Data = FVar6.Data + 2) {
          if (*(short *)FVar6.Data == sVar3) {
            return false;
          }
        }
      }
      pFVar8 = pFVar8 + 2;
    }
    return true;
  }
  return false;
}

// IsValidPattern @ 1476baf30

bool __cdecl
FAudioAddressPattern::IsValidPattern
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if ((iVar1 != 0) && (1 < (param_2->Data).ArrayNum)) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) {
        bVar2 = IsValidPatternPart(param_2);
        return bVar2;
      }
      bVar2 = IsValidPatternPart((FString *)pFVar3);
      if (!bVar2) break;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return false;
}

// IsValidPatternPart @ 1476bafb0

bool __cdecl FAudioAddressPattern::IsValidPatternPart(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = (param_1->Data).ArrayNum;
  bVar6 = false;
  bVar5 = false;
  pFVar1 = pFVar9 + (longlong)iVar4 * 2;
LAB_1476bafe7:
  if ((param_1->Data).ArrayNum != iVar4) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar9 == pFVar1) {
    if ((!bVar5) && (!bVar6)) {
      return true;
    }
    return false;
  }
  sVar3 = *(short *)pFVar9;
  if (sVar3 == 0x2f) {
    return false;
  }
  pTVar7 = GetInvalidChars();
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  pFVar2 = pFVar8 + (longlong)pTVar7->ArrayNum * 2;
  for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 2) {
    if (*(short *)pFVar8 == sVar3) {
      return false;
    }
  }
  switch(sVar3) {
  case 0x2a:
  case 0x3f:
    if (bVar5) {
      return false;
    }
    if (bVar6) {
      return false;
    }
    pFVar9 = pFVar9 + 2;
    goto LAB_1476bafe7;
  case 0x2c:
    if (!bVar5) {
      return false;
    }
    break;
  case 0x5b:
    if (bVar5) {
      return false;
    }
    if (bVar6) {
      return false;
    }
    bVar6 = true;
    pFVar9 = pFVar9 + 2;
    goto LAB_1476bafe7;
  case 0x5d:
    if (bVar5) {
      return false;
    }
    bVar6 = false;
    pFVar9 = pFVar9 + 2;
    goto LAB_1476bafe7;
  case 0x7b:
    goto switchD_1476bb050_caseD_7b;
  case 0x7d:
    if (bVar6) {
      return false;
    }
    bVar5 = false;
  }
  pFVar9 = pFVar9 + 2;
  goto LAB_1476bafe7;
switchD_1476bb050_caseD_7b:
  if (bVar5) {
    return false;
  }
  if (bVar6) {
    return false;
  }
  bVar5 = true;
  pFVar9 = pFVar9 + 2;
  goto LAB_1476bafe7;
}

// PartsMatch @ 1476bde10

bool __cdecl FAudioAddressPattern::PartsMatch(FString *param_1,FString *param_2)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res8 [2];
  int local_res18 [2];
  
  local_res8[0] = 0;
  iVar10 = 0;
LAB_1476bde44:
  do {
    while( true ) {
      while( true ) {
        iVar4 = local_res8[0];
        iVar9 = (param_1->Data).ArrayNum;
        iVar8 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        if (iVar8 <= iVar10) {
          return true;
        }
        iVar8 = (param_2->Data).ArrayNum;
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        if (iVar7 <= local_res8[0]) {
          return true;
        }
        iVar7 = 0;
        if (iVar9 != 0) {
          iVar7 = iVar9 + -1;
        }
        if (iVar7 <= iVar10) {
          iVar7 = 0;
          if (iVar8 != 0) {
            iVar7 = iVar8 + -1;
          }
          if (local_res8[0] < iVar7) {
            return false;
          }
        }
        iVar7 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar7 = 0;
        }
        if (iVar10 < iVar7) {
          iVar7 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= local_res8[0]) {
            return false;
          }
        }
        local_res18[0] = iVar10;
        if ((((iVar9 == 0) || (iVar10 < 0)) || (iVar9 + -1 <= iVar10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        sVar1 = *(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar10 * 2);
        if (sVar1 != 0x2a) break;
        bVar5 = WildPatternMatches(param_1,local_res18,param_2,local_res8);
        if (!bVar5) {
          return false;
        }
        local_res8[0] = local_res8[0] + 1;
        iVar10 = local_res18[0] + 1;
      }
      if (sVar1 != 0x3f) break;
LAB_1476be007:
      local_res8[0] = iVar4 + 1;
      iVar10 = iVar10 + 1;
    }
    if (sVar1 != 0x5b) {
      if (sVar1 != 0x7b) {
        if (iVar10 < 0) {
code_r0x0001476bdf72:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          iVar9 = (param_1->Data).ArrayNum;
          iVar8 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar8 = 0;
          }
          if (iVar8 <= iVar10) goto code_r0x0001476bdf72;
        }
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (iVar4 < 0) {
code_r0x0001476bdfd4:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          iVar9 = (param_2->Data).ArrayNum;
          iVar8 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar8 = 0;
          }
          if (iVar8 <= iVar4) goto code_r0x0001476bdfd4;
        }
        if (*(short *)(pFVar2 + (longlong)iVar10 * 2) !=
            *(short *)((param_2->Data).AllocatorInstance.Data + (longlong)iVar4 * 2)) {
          return false;
        }
        goto LAB_1476be007;
      }
      iVar8 = FindPatternTerminatorIndex(param_1,iVar10,L'}');
      bVar5 = BracePatternMatches(param_1,iVar10,iVar8,param_2,local_res8);
      if (!bVar5) {
        return false;
      }
      iVar10 = iVar8 + 1;
      local_res8[0] = local_res8[0] + 1;
      goto LAB_1476bde44;
    }
    iVar8 = FindPatternTerminatorIndex(param_1,iVar10,L']');
    if (iVar4 < 0) {
code_r0x0001476be0b5:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    else {
      iVar7 = (param_2->Data).ArrayNum;
      iVar9 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar9 = 0;
      }
      if (iVar9 <= iVar4) goto code_r0x0001476be0b5;
    }
    bVar5 = BracketPatternMatches
                      (param_1,iVar10,iVar8,
                       *(wchar_t *)((param_2->Data).AllocatorInstance.Data + (longlong)iVar4 * 2));
    if (!bVar5) {
      return false;
    }
    local_res8[0] = iVar4 + 1;
    iVar10 = iVar8 + 1;
  } while( true );
}

// WildPatternMatches @ 1476cdda0

bool __cdecl
FAudioAddressPattern::WildPatternMatches
          (FString *param_1,int *param_2,FString *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  wchar_t wVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_res10 [2];
  
  iVar12 = *param_2;
  while( true ) {
    iVar7 = (param_1->Data).ArrayNum;
    iVar8 = iVar12 + 1;
    iVar10 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar10 = 0;
    }
    if (iVar10 <= iVar8) break;
    if ((((iVar8 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar12 * 2 + 2) != 0x2a)
    break;
    *param_2 = *param_2 + 1;
    iVar12 = *param_2;
  }
  iVar12 = *param_2;
  iVar10 = iVar12 + 1;
  *param_2 = iVar10;
  iVar8 = (param_1->Data).ArrayNum;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  if (iVar10 == iVar7) {
    return true;
  }
  if ((((iVar8 == 0) || (iVar10 < 0)) || (iVar8 + -1 <= iVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  sVar1 = *(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar12 * 2 + 2);
  iVar12 = *param_2;
  if (-1 < iVar12) {
    iVar7 = (param_1->Data).ArrayNum;
    iVar8 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    if (iVar12 < iVar8) goto LAB_1476cdf16;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_1476cdf16:
  iVar8 = 0;
  sVar2 = *(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar12 * 2);
  wVar9 = L']';
  if ((sVar1 == 0x5b) || (wVar9 = L'}', sVar2 == 0x7b)) {
    iVar8 = FindPatternTerminatorIndex(param_1,*param_2,wVar9);
  }
  do {
    iVar12 = (param_3->Data).ArrayNum;
    iVar7 = *param_4;
    iVar10 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar10 = 0;
    }
    if (iVar10 <= iVar7) {
      return false;
    }
    if (sVar1 == 0x5b) {
      if ((((iVar7 < 0) || (iVar12 == 0)) || (iVar12 + -1 <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = BracketPatternMatches
                        (param_1,*param_2,iVar8,
                         *(wchar_t *)((param_3->Data).AllocatorInstance.Data + (longlong)iVar7 * 2))
      ;
      if (bVar5) {
        *param_2 = iVar8;
        return true;
      }
    }
    else {
      iVar12 = *param_2;
      if (sVar2 == 0x7b) {
        local_res10[0] = iVar7;
        bVar5 = BracePatternMatches(param_1,iVar12,iVar8,param_3,local_res10);
        if (bVar5) {
          *param_2 = iVar8;
          *param_4 = local_res10[0];
          return true;
        }
      }
      else {
        if (iVar12 < 0) {
code_r0x0001476ce07a:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        else {
          iVar7 = (param_1->Data).ArrayNum;
          iVar10 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar10 = 0;
          }
          if (iVar10 <= iVar12) goto code_r0x0001476ce07a;
        }
        pFVar3 = (param_1->Data).AllocatorInstance.Data;
        iVar7 = *param_4;
        if (iVar7 < 0) {
code_r0x0001476ce0d8:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        else {
          iVar10 = (param_3->Data).ArrayNum;
          iVar11 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar11 = 0;
          }
          if (iVar11 <= iVar7) goto code_r0x0001476ce0d8;
        }
        if (*(short *)(pFVar3 + (longlong)iVar12 * 2) ==
            *(short *)((param_3->Data).AllocatorInstance.Data + (longlong)iVar7 * 2)) {
          return true;
        }
        iVar12 = *param_2;
        if (iVar12 < 0) {
code_r0x0001476ce13c:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        else {
          iVar7 = (param_1->Data).ArrayNum;
          iVar10 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar10 = 0;
          }
          if (iVar10 <= iVar12) goto code_r0x0001476ce13c;
        }
        if (*(short *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar12 * 2) == 0x3f) {
          return true;
        }
      }
    }
    *param_4 = *param_4 + 1;
  } while( true );
}

