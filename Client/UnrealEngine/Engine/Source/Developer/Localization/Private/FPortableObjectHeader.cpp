// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// Clear @ 146b52440

void __thiscall FPortableObjectHeader::Clear(FPortableObjectHeader *this)

{
  int *piVar1;
  
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)(this->HeaderEntries).AllocatorInstance.Data,
             (this->HeaderEntries).ArrayNum);
  piVar1 = &(this->HeaderEntries).ArrayMax;
  (this->HeaderEntries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->HeaderEntries).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Comments).AllocatorInstance.Data,(this->Comments).ArrayNum);
  piVar1 = &(this->Comments).ArrayMax;
  (this->Comments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// FindEntry @ 146b5f380

TTuple<FString,FString> * __thiscall
FPortableObjectHeader::FindEntry(FPortableObjectHeader *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TTuple<FString,FString> *pTVar4;
  TTuple<FString,FString> *pTVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HeaderEntries).ArrayNum;
  pTVar4 = (TTuple<FString,FString> *)(this->HeaderEntries).AllocatorInstance.Data;
  pTVar5 = pTVar4 + iVar1;
  while( true ) {
    if ((this->HeaderEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar4 == pTVar5) {
      return (TTuple<FString,FString> *)0x0;
    }
    iVar3 = *(int *)&pTVar4->field_0x8;
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) {
        return pTVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pTVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar2 == 1;
    }
    if (bVar6) break;
    pTVar4 = pTVar4 + 1;
  }
  return pTVar4;
}

// FindEntry @ 146b5f420

TTuple<FString,FString> * __thiscall
FPortableObjectHeader::FindEntry(FPortableObjectHeader *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TTuple<FString,FString> *pTVar4;
  TTuple<FString,FString> *pTVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HeaderEntries).ArrayNum;
  pTVar4 = (TTuple<FString,FString> *)(this->HeaderEntries).AllocatorInstance.Data;
  pTVar5 = pTVar4 + iVar1;
  while( true ) {
    if ((this->HeaderEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,FString>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pTVar4 == pTVar5) {
      return (TTuple<FString,FString> *)0x0;
    }
    iVar3 = *(int *)&pTVar4->field_0x8;
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) {
        return pTVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pTVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar2 == 1;
    }
    if (bVar6) break;
    pTVar4 = pTVar4 + 1;
  }
  return pTVar4;
}

// FromLocPOEntry @ 146b60d90

/* WARNING: Removing unreachable block (ram,0x000146b60ff3) */

bool __thiscall
FPortableObjectHeader::FromLocPOEntry
          (FPortableObjectHeader *this,TSharedRef<FPortableObjectEntry_const_,1> *param_1)

{
  int *piVar1;
  FPortableObjectEntry *pFVar2;
  void *_Src;
  wchar_t *pwVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  FString *this_00;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType this_01;
  int iVar15;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((1 < (int)param_1->Object->_padding_) || ((param_1->Object->MsgStr).ArrayNum != 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  Clear(this);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->Comments,&param_1->Object->TranslatorComments);
  pFVar2 = param_1->Object;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if (((pFVar2->MsgStr).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar14 = (pFVar2->MsgStr).AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = *(int *)(pFVar14 + 8);
  lVar12 = (longlong)local_78.Data.ArrayNum;
  _Src = *(void **)pFVar14;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
  }
  ::FString::ReplaceEscapedCharWithCharInline
            (&local_78,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  ::FString::ParseIntoArray(&local_78,&local_88,NewLineDelimiter,true);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar5 = local_88.ArrayNum;
  pFVar14 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
  this_01.Data = local_88.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_88.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_01.Data == pFVar14) {
        DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      pwVar3 = *(wchar_t **)this_01.Data;
      iVar9 = *(int *)(this_01.Data + 8);
      pwVar10 = pwVar3;
      if (pwVar3 != pwVar3 + iVar9) break;
LAB_146b61006:
      this_01.Data = this_01.Data + 0x10;
    }
    do {
      if (*pwVar10 == L':') {
        iVar11 = (int)((longlong)pwVar10 - (longlong)pwVar3 >> 1);
        if (iVar11 != -1) {
          iVar8 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar8 = 0;
          }
          if (iVar11 < iVar8) {
            iVar8 = iVar11;
          }
          iVar15 = 0;
          if (0 < iVar8) {
            iVar15 = iVar8;
          }
          pwVar10 = L"";
          if (iVar9 != 0) {
            pwVar10 = pwVar3;
          }
          ::FString::ConstructFromPtrSize(&local_58,pwVar10,iVar15);
          ::FString::TrimStartAndEnd(&local_58,&local_48);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          this_00 = ::FString::RightChop((FString *)this_01.Data,&local_38,iVar11 + 1);
          ::FString::TrimStartAndEnd(this_00,&local_68);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          iVar9 = (this->HeaderEntries).ArrayNum;
          piVar1 = &(this->HeaderEntries).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&(this->HeaderEntries).AllocatorInstance,piVar1);
          }
          pFVar13 = (this->HeaderEntries).AllocatorInstance.Data;
          (this->HeaderEntries).ArrayNum = iVar9 + 1;
          pFVar13 = pFVar13 + (longlong)iVar9 * 0x20;
          ::FString::FString((FString *)pFVar13,&local_48);
          *(undefined8 *)&pFVar13[0x10].field_0x0 = 0;
          *(FScriptContainerElement **)&pFVar13[0x10].field_0x0 =
               local_68.Data.AllocatorInstance.Data;
          *(int *)(pFVar13 + 0x18) = local_68.Data.ArrayNum;
          *(int *)(pFVar13 + 0x1c) = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_146b61006;
      }
      pwVar10 = pwVar10 + 1;
    } while (pwVar10 != pwVar3 + iVar9);
    this_01.Data = this_01.Data + 0x10;
  } while( true );
}

// GetEntryValue @ 146b73310

FString * __thiscall
FPortableObjectHeader::GetEntryValue
          (FPortableObjectHeader *this,FString *__return_storage_ptr__,FString *param_1)

{
  TTuple<FString,FString> *pTVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pTVar1 = FindEntry(this,param_1);
  if (pTVar1 != (TTuple<FString,FString> *)0x0) {
    ::FString::operator=(__return_storage_ptr__,(FString *)&pTVar1->field_0x10);
  }
  return __return_storage_ptr__;
}

// HasEntry @ 146b778c0

bool __thiscall FPortableObjectHeader::HasEntry(FPortableObjectHeader *this,FString *param_1)

{
  TTuple<FString,FString> *pTVar1;
  
  pTVar1 = FindEntry(this,param_1);
  return pTVar1 != (TTuple<FString,FString> *)0x0;
}

// SetEntryValue @ 146b88750

void __thiscall
FPortableObjectHeader::SetEntryValue(FPortableObjectHeader *this,FString *param_1,FString *param_2)

{
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar5 = (this->HeaderEntries).ArrayNum;
  pTVar1 = &this->HeaderEntries;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar5 * 0x20;
  do {
    if ((this->HeaderEntries).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) goto LAB_146b887db;
    iVar4 = *(int *)(pFVar6 + 8);
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar3) {
      if (iVar4 < 2) {
LAB_146b887c8:
        if (pFVar6 == (FScriptContainerElement *)0x0) {
LAB_146b887db:
          iVar5 = (this->HeaderEntries).ArrayNum;
          piVar2 = &(this->HeaderEntries).ArrayMax;
          if (iVar5 == *piVar2) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->HeaderEntries).ArrayNum = iVar5 + 1;
          pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
          ::FString::FString((FString *)pFVar6,param_1);
          ::FString::FString((FString *)(pFVar6 + 0x10),param_2);
        }
        else {
          ::FString::operator=((FString *)(pFVar6 + 0x10),param_2);
        }
        return;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar6,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
    else {
      bVar8 = iVar4 + iVar3 == 1;
    }
    if (bVar8) goto LAB_146b887c8;
    pFVar6 = pFVar6 + 0x20;
  } while( true );
}

// ToString @ 146b8e7e0

FString * __thiscall
FPortableObjectHeader::ToString(FPortableObjectHeader *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (this->Comments).ArrayNum;
  pFVar1 = (this->Comments).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->Comments).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar1 == pFVar2) break;
    ::FString::PrintfImpl(&local_58,L"# %s%s");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar1 = pFVar1 + 0x10;
  }
  ::FString::PrintfImpl(&local_58,L"msgid \"\"%s");
  iVar3 = 0;
  iVar4 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"msgstr \"\"%s");
  iVar4 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar4 = (this->HeaderEntries).ArrayNum;
  pFVar1 = (this->HeaderEntries).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->HeaderEntries).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTuple<FString,FString>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar1 == pFVar2) break;
    ::FString::FString(&local_48,(FString *)pFVar1);
    ::FString::FString(&local_38,(FString *)(pFVar1 + 0x10));
    ::FString::PrintfImpl(&local_58,L"\"%s: %s\\n\"%s");
    iVar5 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar5 = iVar3;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar1 = pFVar1 + 0x20;
  }
  return __return_storage_ptr__;
}

// UpdateTimeStamp @ 146b90950

void __thiscall FPortableObjectHeader::UpdateTimeStamp(FPortableObjectHeader *this)

{
  FDateTime this_00;
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28;
  FString local_18;
  
  this_00 = FDateTime::UtcNow();
  pFVar1 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_18,L"%Y-%m-%d %H:%M");
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"POT-Creation-Date");
  SetEntryValue(this,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"PO-Revision-Date");
  SetEntryValue(this,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

