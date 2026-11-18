// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// FPortableObjectEntry @ 146b43370

FPortableObjectEntry * __thiscall
FPortableObjectEntry::FPortableObjectEntry(FPortableObjectEntry *this,FPortableObjectEntry *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  pTVar1 = &this->MsgStr;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MsgStr).ArrayMax;
  iVar3 = (param_1->MsgStr).ArrayNum;
  pFVar4 = (param_1->MsgStr).AllocatorInstance.Data;
  (this->MsgStr).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar1 = &this->ExtractedComments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExtractedComments).ArrayMax;
  iVar3 = (param_1->ExtractedComments).ArrayNum;
  pFVar4 = (param_1->ExtractedComments).AllocatorInstance.Data;
  (this->ExtractedComments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar1 = &this->TranslatorComments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TranslatorComments).ArrayMax;
  iVar3 = (param_1->TranslatorComments).ArrayNum;
  pFVar4 = (param_1->TranslatorComments).AllocatorInstance.Data;
  (this->TranslatorComments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar1 = &this->ReferenceComments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ReferenceComments).ArrayMax;
  iVar3 = (param_1->ReferenceComments).ArrayNum;
  pFVar4 = (param_1->ReferenceComments).AllocatorInstance.Data;
  (this->ReferenceComments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar1 = &this->Flags;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Flags).ArrayMax;
  iVar3 = (param_1->Flags).ArrayNum;
  pFVar4 = (param_1->Flags).AllocatorInstance.Data;
  (this->Flags).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar1 = &this->UnknownElements;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->UnknownElements).ArrayMax;
  iVar3 = (param_1->UnknownElements).ArrayNum;
  pFVar4 = (param_1->UnknownElements).AllocatorInstance.Data;
  (this->UnknownElements).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  return this;
}

// ~FPortableObjectEntry @ 146b44b30

void __thiscall FPortableObjectEntry::~FPortableObjectEntry(FPortableObjectEntry *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->UnknownElements).AllocatorInstance.Data,
             (this->UnknownElements).ArrayNum);
  pFVar1 = (this->UnknownElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(this->Flags).AllocatorInstance.Data,(this->Flags).ArrayNum)
  ;
  pFVar1 = (this->Flags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ReferenceComments).AllocatorInstance.Data,
             (this->ReferenceComments).ArrayNum);
  pFVar1 = (this->ReferenceComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TranslatorComments).AllocatorInstance.Data,
             (this->TranslatorComments).ArrayNum);
  pFVar1 = (this->TranslatorComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExtractedComments).AllocatorInstance.Data,
             (this->ExtractedComments).ArrayNum);
  pFVar1 = (this->ExtractedComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MsgStr).AllocatorInstance.Data,(this->MsgStr).ArrayNum);
  pFVar1 = (this->MsgStr).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddExtractedComment @ 146b4f880

void __thiscall
FPortableObjectEntry::AddExtractedComment(FPortableObjectEntry *this,FString *param_1)

{
  if (1 < (param_1->Data).ArrayNum) {
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&this->ExtractedComments,param_1);
    return;
  }
  return;
}

// AddExtractedComments @ 146b4f8a0

void __thiscall
FPortableObjectEntry::AddExtractedComments
          (FPortableObjectEntry *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < *(int *)(pFVar2 + 8)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&this->ExtractedComments,(FString *)pFVar2);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// AddReference @ 146b4fac0

void __thiscall FPortableObjectEntry::AddReference(FPortableObjectEntry *this,FString *param_1)

{
  if (1 < (param_1->Data).ArrayNum) {
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&this->ReferenceComments,param_1);
    return;
  }
  return;
}

// AddReferences @ 146b4fae0

void __thiscall
FPortableObjectEntry::AddReferences
          (FPortableObjectEntry *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < *(int *)(pFVar2 + 8)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&this->ReferenceComments,(FString *)pFVar2);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// AddTranslatorComment @ 146b50ba0

void __thiscall
FPortableObjectEntry::AddTranslatorComment(FPortableObjectEntry *this,FString *param_1)

{
  if (1 < (param_1->Data).ArrayNum) {
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&this->TranslatorComments,param_1);
    return;
  }
  return;
}

// AddTranslatorComments @ 146b50bc0

void __thiscall
FPortableObjectEntry::AddTranslatorComments
          (FPortableObjectEntry *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (1 < *(int *)(pFVar2 + 8)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&this->TranslatorComments,(FString *)pFVar2);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// ToString @ 146b8e060

FString * __thiscall
FPortableObjectEntry::ToString(FPortableObjectEntry *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (((int)this->_padding_ < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MsgId.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\PortableObjectFormatDOM.cpp"
                         ,0x3e3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  uVar5 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar10 = (this->TranslatorComments).ArrayNum;
  pFVar6 = (this->TranslatorComments).AllocatorInstance.Data;
  pFVar11 = pFVar6 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((this->TranslatorComments).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar11) break;
    ::FString::PrintfImpl(&local_c8,L"# %s%s");
    iVar7 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  iVar10 = (this->ExtractedComments).ArrayNum;
  pFVar6 = (this->ExtractedComments).AllocatorInstance.Data;
  pFVar11 = pFVar6 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((this->ExtractedComments).ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    uVar8 = 0;
    if (pFVar6 == pFVar11) break;
    if (*(int *)(pFVar6 + 8) < 2) {
      ::FString::PrintfImpl(&local_a8,L"#.%s");
      uVar9 = local_a8.Data.ArrayNum - 1;
      if (local_a8.Data.ArrayNum == 0) {
        uVar9 = uVar8;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,uVar9);
      FVar4.Data = local_a8.Data.AllocatorInstance.Data;
    }
    else {
      ::FString::PrintfImpl(&local_b8,L"#. %s%s");
      uVar9 = local_b8.Data.ArrayNum - 1;
      if (local_b8.Data.ArrayNum == 0) {
        uVar9 = uVar8;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,uVar9);
      FVar4.Data = local_b8.Data.AllocatorInstance.Data;
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  iVar10 = (this->ReferenceComments).ArrayNum;
  pFVar6 = (this->ReferenceComments).AllocatorInstance.Data;
  pFVar11 = pFVar6 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((this->ReferenceComments).ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar6 == pFVar11) break;
    ::FString::PrintfImpl(&local_98,L"#: %s%s");
    uVar9 = local_98.Data.ArrayNum - 1;
    if (local_98.Data.ArrayNum == 0) {
      uVar9 = uVar8;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar9);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  if (1 < (int)this->_padding_) {
    ::FString::PrintfImpl(&local_88,L"msgctxt \"%s\"%s");
    uVar9 = local_88.Data.ArrayNum - 1;
    if (local_88.Data.ArrayNum == 0) {
      uVar9 = uVar8;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,uVar9);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_78,L"msgid \"%s\"%s");
  uVar9 = local_78.Data.ArrayNum - 1;
  if (local_78.Data.ArrayNum == 0) {
    uVar9 = uVar8;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,uVar9);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar10 = (this->MsgStr).ArrayNum;
  if (iVar10 == 0) {
    ::FString::PrintfImpl(&local_68,L"msgstr \"\"%s");
    uVar5 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar5 = uVar8;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar5);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else if (iVar10 == 1) {
    ::FString::PrintfImpl(&local_58,L"msgstr \"%s\"%s");
    uVar5 = local_58.Data.ArrayNum - 1;
    if (local_58.Data.ArrayNum == 0) {
      uVar5 = uVar8;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar5);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else if (0 < iVar10) {
    do {
      uVar9 = uVar8;
      if ((int)uVar5 < (this->MsgStr).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
      ::FString::PrintfImpl(&local_48,L"msgstr[%d] \"%s\"%s");
      iVar10 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar10);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->MsgStr).ArrayNum);
  }
  return __return_storage_ptr__;
}

