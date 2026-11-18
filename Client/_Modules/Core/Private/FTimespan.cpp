// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// Assign @ 141927000

void __thiscall
FTimespan::Assign(FTimespan *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  lVar1 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)param_5),8) + (longlong)param_5;
  this->Ticks = ((lVar1 >> 6) +
                ((((longlong)param_2 + (longlong)param_1 * 0x18) * 0x3c + (longlong)param_3) * 0x3c
                + (longlong)param_4) * 10000000) - (lVar1 >> 0x3f);
  return;
}

// ExportTextItem @ 14193a670

bool __thiscall
FTimespan::ExportTextItem
          (FTimespan *this,FString *param_1,FTimespan *param_2,UObject *param_3,int param_4,
          UObject *param_5)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  pFVar2 = ToString(this,&local_18,L"%D.%h:%m:%s.%n");
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ImportTextItem @ 14194d750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FTimespan::ImportTextItem
          (FTimespan *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t *_Str;
  bool bVar1;
  size_t sVar2;
  FString *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  _Str = *param_1;
  sVar2 = wcslen(_Str);
  if (0x1a < (int)sVar2) {
    this_00 = ::FString::FString(&local_18,_Str);
    iVar3 = (this_00->Data).ArrayNum;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    iVar3 = iVar5;
    if (0x1b < iVar5) {
      iVar3 = 0x1b;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    ::FString::RemoveAt(this_00,iVar4,iVar5 - iVar4,No);
    local_28.Data.AllocatorInstance.Data = (this_00->Data).AllocatorInstance.Data;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (this_00->Data).ArrayNum;
    local_28.Data.ArrayMax = (this_00->Data).ArrayMax;
    (this_00->Data).ArrayNum = 0;
    (this_00->Data).ArrayMax = 0;
    bVar1 = Parse(&local_28,this);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      *param_1 = *param_1 + 0x1b;
      return true;
    }
  }
  return false;
}

// NetSerialize @ 141956f90

bool __thiscall
FTimespan::NetSerialize(FTimespan *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    this->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    *param_3 = true;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    *param_3 = true;
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
  *param_3 = true;
  return true;
}

// Parse @ 141959940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FTimespan::Parse(FString *param_1,FTimespan *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *this;
  wchar_t *pwVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForAnyElementType this_00;
  size_t _Size;
  wchar_t *_Str;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  iVar6 = ::FString::Find(param_1,L".",1,IgnoreCase,FromStart,-1);
  if (iVar6 == -1) {
    iVar6 = ::FString::Find(param_1,L",",1,IgnoreCase,FromStart,-1);
    if (iVar6 != -1) goto LAB_1419599ba;
    bVar4 = false;
  }
  else {
LAB_1419599ba:
    bVar4 = true;
  }
  local_48.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar13 = (longlong)local_48.Data.ArrayNum;
  pFVar14 = (param_1->Data).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar14,lVar13 * 2);
  }
  ::FString::ReplaceInline(&local_48,L".",L":",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L",",L":",IgnoreCase);
  bVar2 = ::FString::StartsWith(&local_48,L"-",1,IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"-",L":",IgnoreCase);
  ::FString::ReplaceInline(&local_48,L"+",L":",IgnoreCase);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_48,&local_58,L":",true);
  if (!bVar4) {
    iVar6 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar6 + 1;
    *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 0x10) = 0;
    *(undefined8 *)(local_58.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = 0;
  }
  iVar6 = local_58.ArrayNum;
  uVar12 = (ulonglong)local_58.ArrayNum;
  pFVar14 = local_58.AllocatorInstance.Data + uVar12 * 0x10;
  this_00.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
      uVar12 = local_58._8_8_ & 0xffffffff;
    }
    iVar7 = (int)uVar12;
    if (this_00.Data == pFVar14) break;
    if (1 < *(int *)(this_00.Data + 8)) {
      bVar3 = ::FString::IsNumeric((FString *)this_00.Data);
      if (!bVar3) goto LAB_141959f85;
      uVar12 = local_58._8_8_ & 0xffffffff;
    }
    this_00.Data = this_00.Data + 0x10;
  }
  if (iVar7 < 5) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,5 - iVar7,&local_58.AllocatorInstance,&local_58.ArrayNum,
                       &local_58.ArrayMax);
    _Size = (longlong)(5 - iVar7) * 0x10;
    memmove(local_58.AllocatorInstance.Data + _Size,local_58.AllocatorInstance.Data,
            (longlong)iVar6 << 4);
    memset(local_58.AllocatorInstance.Data,0,_Size);
    iVar7 = local_58.ArrayNum;
LAB_141959bb0:
    if (bVar4) {
      if (iVar7 < 5) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        iVar7 = local_58.ArrayNum;
      }
      iVar6 = *(int *)(local_58.AllocatorInstance.Data + 0x48) + -1;
      if (*(int *)(local_58.AllocatorInstance.Data + 0x48) == 0) {
        iVar6 = 0;
      }
      iVar8 = 0;
      if (iVar6 < 10) {
        if (8 < iVar6) goto LAB_141959d52;
        this = ::FString::FString(&local_38,L"000000000");
        iVar7 = (this->Data).ArrayNum;
        iVar9 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar9 = iVar8;
        }
        iVar7 = iVar9;
        if (9 - iVar6 < iVar9) {
          iVar7 = 9 - iVar6;
        }
        iVar6 = iVar8;
        if (0 < iVar7) {
          iVar6 = iVar7;
        }
        ::FString::RemoveAt(this,iVar6,iVar9 - iVar6,No);
        pFVar14 = (this->Data).AllocatorInstance.Data;
        (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (this->Data).ArrayNum;
        (this->Data).ArrayNum = 0;
        (this->Data).ArrayMax = 0;
        if (local_58.ArrayNum < 5) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
        }
        iVar7 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar7 = iVar8;
        }
        ::FString::AppendChars
                  ((FString *)(local_58.AllocatorInstance.Data + 0x40),(wchar_t *)pFVar14,iVar7);
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (iVar7 < 5) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
        }
        iVar6 = *(int *)(local_58.AllocatorInstance.Data + 0x48) + -1;
        if (*(int *)(local_58.AllocatorInstance.Data + 0x48) == 0) {
          iVar6 = iVar8;
        }
        iVar7 = iVar6;
        if (9 < iVar6) {
          iVar7 = 9;
        }
        if (0 < iVar7) {
          iVar8 = iVar7;
        }
        ::FString::RemoveAt((FString *)(local_58.AllocatorInstance.Data + 0x40),iVar8,iVar6 - iVar8,
                            No);
      }
      iVar7 = local_58.ArrayNum;
    }
LAB_141959d52:
    if (iVar7 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    _Str = L"";
    if (*(int *)(local_58.AllocatorInstance.Data + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)local_58.AllocatorInstance.Data;
    }
    iVar6 = _wtoi(pwVar11);
    if (local_58.ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x18) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x10);
    }
    iVar7 = _wtoi(pwVar11);
    if (local_58.ArrayNum < 3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x28) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x20);
    }
    iVar8 = _wtoi(pwVar11);
    if (local_58.ArrayNum < 4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x38) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x30);
    }
    iVar9 = _wtoi(pwVar11);
    if (local_58.ArrayNum < 5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (*(int *)(local_58.AllocatorInstance.Data + 0x48) != 0) {
      _Str = *(wchar_t **)(local_58.AllocatorInstance.Data + 0x40);
    }
    iVar10 = _wtoi(_Str);
    if ((((iVar6 < 0xa2e3ff) && (iVar7 < 0x18)) && (iVar8 < 0x3c)) &&
       ((iVar9 < 0x3c && (iVar10 < 1000000000)))) {
      lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)iVar10),8) + (longlong)iVar10
      ;
      lVar13 = ((lVar13 >> 6) +
               ((((longlong)iVar7 + (longlong)iVar6 * 0x18) * 0x3c + (longlong)iVar8) * 0x3c +
               (longlong)iVar9) * 10000000) - (lVar13 >> 0x3f);
      param_2->Ticks = lVar13;
      if (bVar2) {
        param_2->Ticks = -lVar13;
      }
      bVar4 = true;
      iVar7 = local_58.ArrayNum;
      goto LAB_141959f8a;
    }
LAB_141959f85:
    iVar7 = local_58.ArrayNum;
  }
  else if (iVar7 < 6) goto LAB_141959bb0;
  bVar4 = false;
LAB_141959f8a:
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,iVar7);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// Serialize @ 141969870

bool __thiscall FTimespan::Serialize(FTimespan *this,FArchive *param_1)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    this->Ticks = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
  return true;
}

// ToString @ 141972ac0

FString * __thiscall
FTimespan::ToString(FTimespan *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  wVar1 = L'+';
  if (this->Ticks < 0) {
    wVar1 = L'-';
  }
  ::FString::AppendChar(__return_storage_ptr__,wVar1);
  wVar1 = *param_1;
  do {
    if (wVar1 == L'\0') {
      return __return_storage_ptr__;
    }
    if (wVar1 == L'%') {
      wVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (wVar1 == L'\0') goto switchD_141972ba6_caseD_45;
      iVar2 = 0;
      switch(wVar1) {
      case L'D':
        ::FString::PrintfImpl(&local_a8,L"%08i");
        iVar3 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar3);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        break;
      default:
        goto switchD_141972ba6_caseD_45;
      case L'd':
        ::FString::PrintfImpl(&local_b8,L"%i");
        iVar3 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar3);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        break;
      case L'f':
        ::FString::PrintfImpl(&local_68,L"%03i");
        iVar3 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        break;
      case L'h':
        ::FString::PrintfImpl(&local_98,L"%02i");
        iVar3 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar3);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        break;
      case L'm':
        ::FString::PrintfImpl(&local_88,L"%02i");
        iVar3 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar3);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        break;
      case L'n':
        ::FString::PrintfImpl(&local_38,L"%09i");
        iVar3 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        break;
      case L's':
        ::FString::PrintfImpl(&local_78,L"%02i");
        iVar3 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar3);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        break;
      case L't':
        ::FString::PrintfImpl(&local_48,L"%07i");
        iVar3 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        break;
      case L'u':
        ::FString::PrintfImpl(&local_58,L"%06i");
        iVar3 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar3 = iVar2;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
switchD_141972ba6_caseD_45:
      ::FString::AppendChar(__return_storage_ptr__,wVar1);
    }
    wVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}

// ToString @ 141973080

FString * __thiscall FTimespan::ToString(FTimespan *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"%h:%m:%s.%f";
  if ((int)(this->Ticks / 864000000000) != 0) {
    pwVar1 = L"%d.%h:%m:%s.%f";
  }
  ToString(this,__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// FromMilliseconds @ 141d79fb0

FTimespan __cdecl FTimespan::FromMilliseconds(double param_1)

{
  longlong *in_RCX;
  undefined1 auVar1 [16];
  double in_XMM1_Qa;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_XMM1_Qa * __real_40c3880000000000 + __real_3fe0000000000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  *in_RCX = (longlong)auVar1._0_8_;
  return (FTimespan)(long64)in_RCX;
}

