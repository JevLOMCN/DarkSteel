// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 22

// Emplace<unsigned_int_const_&,int_const_&> @ 14ad84580

int * __thiscall
TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
Emplace<unsigned_int_const_&,int_const_&>
          (TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_> *this
          ,uint *param_1,int *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  piVar7 = &(this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 8) < *param_1) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      piVar7 = (int *)(*pcVar3)();
      return piVar7;
    }
    if (-1 < iVar9) goto LAB_14ad84616;
  }
  else {
LAB_14ad84616:
    if (iVar9 < *piVar7) {
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        piVar7 = (int *)(*pcVar3)();
        return piVar7;
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar2 + (longlong)iVar9 * 8;
      if (*(uint *)(pFVar2 + (longlong)iVar9 * 8) <= *param_1) goto LAB_14ad846b8;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar7,&(this->Pairs).ArrayMax);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 8;
  memmove(pFVar8 + 8,pFVar8,(longlong)(iVar6 - iVar9) << 3);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 8;
LAB_14ad846b8:
  *(uint *)pFVar8 = *param_1;
  *(int *)(pFVar8 + 4) = *param_2;
  return (int *)(pFVar8 + 4);
}

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ae0f0e0

TTuple<FGuid,int> * __thiscall
TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::
AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_> *this,
          FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FGuid,int> *pTVar5;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,int>_const_,int,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,int> *)(this->Pairs).AllocatorInstance.Data,iVar1,param_1,
                     local_res8,(TLess<FGuid_const_&>)local_res8);
  if ((iVar4 < 0) || (iVar1 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,int> *)(*pcVar2)();
      return pTVar5;
    }
    if (iVar4 < 0) goto LAB_14ae0f1ca;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,int> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FGuid,int> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x14);
    if (*(uint *)pTVar5 <= param_1->A) {
      if (param_1->A != *(uint *)pTVar5) {
        return pTVar5;
      }
      if (*(uint *)&pTVar5->field_0x4 <= param_1->B) {
        if (param_1->B != *(uint *)&pTVar5->field_0x4) {
          return pTVar5;
        }
        if (*(uint *)&pTVar5->field_0x8 <= param_1->C) {
          if (param_1->C != *(uint *)&pTVar5->field_0x8) {
            return pTVar5;
          }
          if (*(uint *)&pTVar5->field_0xc <= param_1->D) {
            return pTVar5;
          }
        }
      }
    }
  }
LAB_14ae0f1ca:
  TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar4,1);
  return (TTuple<FGuid,int> *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x14);
}

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ae0f210

TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> * __thiscall
TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *pTVar5;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>_const_,int,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  if ((iVar4 < 0) || (iVar1 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)(*pcVar2)();
      return pTVar5;
    }
    if (iVar4 < 0) goto LAB_14ae0f30b;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0xf0);
    if ((*(uint *)pTVar5 <= param_1->A) &&
       ((param_1->A != *(uint *)pTVar5 ||
        ((*(uint *)&pTVar5->field_0x4 <= param_1->B &&
         ((param_1->B != *(uint *)&pTVar5->field_0x4 ||
          ((*(uint *)&pTVar5->field_0x8 <= param_1->C &&
           ((param_1->C != *(uint *)&pTVar5->field_0x8 ||
            (*(uint *)&pTVar5->field_0xc <= param_1->D)))))))))))) {
      DestructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int>(pTVar5,1);
      return pTVar5;
    }
  }
LAB_14ae0f30b:
  TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar4,1);
  return (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0xf0);
}

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ae0f340

TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  if ((iVar4 < 0) || (iVar1 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar5;
    }
    if (iVar4 < 0) goto LAB_14ae0f442;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
    if ((*(uint *)pTVar5 <= param_1->A) &&
       ((param_1->A != *(uint *)pTVar5 ||
        ((*(uint *)&pTVar5->field_0x4 <= param_1->B &&
         ((param_1->B != *(uint *)&pTVar5->field_0x4 ||
          ((*(uint *)&pTVar5->field_0x8 <= param_1->C &&
           ((param_1->C != *(uint *)&pTVar5->field_0x8 ||
            (*(uint *)&pTVar5->field_0xc <= param_1->D)))))))))))) {
      DestructItems<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,int>(pTVar5,1);
      return pTVar5;
    }
  }
LAB_14ae0f442:
  TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar4,1);
  return (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
}

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ae0f480

TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> * __thiscall
TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *pTVar5;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  if ((iVar4 < 0) || (iVar1 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
               (*pcVar2)();
      return pTVar5;
    }
    if (iVar4 < 0) goto LAB_14ae0f582;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
               (*pcVar2)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
    if ((*(uint *)pTVar5 <= param_1->A) &&
       ((param_1->A != *(uint *)pTVar5 ||
        ((*(uint *)&pTVar5->field_0x4 <= param_1->B &&
         ((param_1->B != *(uint *)&pTVar5->field_0x4 ||
          ((*(uint *)&pTVar5->field_0x8 <= param_1->C &&
           ((param_1->C != *(uint *)&pTVar5->field_0x8 ||
            (*(uint *)&pTVar5->field_0xc <= param_1->D)))))))))))) {
      DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
LAB_14ae0f582:
  TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar4,1);
  return (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
}

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ae0f5c0

TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> * __thiscall
TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *pTVar5;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  if ((iVar4 < 0) || (iVar1 < iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
               (*pcVar2)();
      return pTVar5;
    }
    if (iVar4 < 0) goto LAB_14ae0f6c2;
  }
  if (iVar4 < (this->Pairs).ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
               (*pcVar2)();
      return pTVar5;
    }
    pTVar5 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
    if ((*(uint *)pTVar5 <= param_1->A) &&
       ((param_1->A != *(uint *)pTVar5 ||
        ((*(uint *)&pTVar5->field_0x4 <= param_1->B &&
         ((param_1->B != *(uint *)&pTVar5->field_0x4 ||
          ((*(uint *)&pTVar5->field_0x8 <= param_1->C &&
           ((param_1->C != *(uint *)&pTVar5->field_0x8 ||
            (*(uint *)&pTVar5->field_0xc <= param_1->D)))))))))))) {
      DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
LAB_14ae0f6c2:
  TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar4,1);
  return (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x20);
}

// Emplace<Metasound::Frontend::FNodeClassRegistryKey_const_&,int_const_&> @ 14ae106d0

int * __thiscall
TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
::Emplace<Metasound::Frontend::FNodeClassRegistryKey_const_&,int_const_&>
          (TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
           *this,FNodeClassRegistryKey *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  FNodeClassRegistryKey *pFVar9;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>_const_,int,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                    ((TTuple<Metasound::Frontend::FNodeClassRegistryKey,int> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>)local_res8);
  if ((iVar7 < 0) || (iVar1 < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      piVar8 = (int *)(*pcVar2)();
      return piVar8;
    }
    if (-1 < iVar7) goto LAB_14ae10745;
  }
  else {
LAB_14ae10745:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        piVar8 = (int *)(*pcVar2)();
        return piVar8;
      }
      pFVar9 = (FNodeClassRegistryKey *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
      bVar6 = Metasound::Frontend::operator<(param_1,pFVar9);
      if (!bVar6) goto LAB_14ae107c2;
    }
  }
  TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pFVar9 = (FNodeClassRegistryKey *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
LAB_14ae107c2:
  uVar4 = *(undefined3 *)&param_1->field_0x1;
  FVar5.Value = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uVar3 = *(undefined8 *)&(param_1->ClassName).Namespace.Number;
  pFVar9->Type = param_1->Type;
  *(undefined3 *)&pFVar9->field_0x1 = uVar4;
  (pFVar9->ClassName).Namespace.ComparisonIndex = (FNameEntryId)FVar5.Value;
  *(undefined8 *)&(pFVar9->ClassName).Namespace.Number = uVar3;
  uVar3 = *(undefined8 *)&(param_1->ClassName).Variant.Number;
  *(undefined8 *)&(pFVar9->ClassName).Name.Number = *(undefined8 *)&(param_1->ClassName).Name.Number
  ;
  *(undefined8 *)&(pFVar9->ClassName).Variant.Number = uVar3;
  (pFVar9->Version).Minor = (param_1->Version).Minor;
  *(int *)(pFVar9 + 1) = *param_2;
  return (int *)(pFVar9 + 1);
}

// Emplace<Metasound::Frontend::FNodeClassRegistryKey,int_const_&> @ 14ae10800

int * __thiscall
TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
::Emplace<Metasound::Frontend::FNodeClassRegistryKey,int_const_&>
          (TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
           *this,FNodeClassRegistryKey *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  FNodeClassRegistryKey *pFVar9;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>_const_,int,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                    ((TTuple<Metasound::Frontend::FNodeClassRegistryKey,int> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>)local_res8);
  if ((iVar7 < 0) || (iVar1 < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      piVar8 = (int *)(*pcVar2)();
      return piVar8;
    }
    if (-1 < iVar7) goto LAB_14ae10875;
  }
  else {
LAB_14ae10875:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        piVar8 = (int *)(*pcVar2)();
        return piVar8;
      }
      pFVar9 = (FNodeClassRegistryKey *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
      bVar6 = Metasound::Frontend::operator<(param_1,pFVar9);
      if (!bVar6) goto LAB_14ae108f2;
    }
  }
  TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pFVar9 = (FNodeClassRegistryKey *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
LAB_14ae108f2:
  uVar4 = *(undefined3 *)&param_1->field_0x1;
  FVar5.Value = (param_1->ClassName).Namespace.ComparisonIndex.Value;
  uVar3 = *(undefined8 *)&(param_1->ClassName).Namespace.Number;
  pFVar9->Type = param_1->Type;
  *(undefined3 *)&pFVar9->field_0x1 = uVar4;
  (pFVar9->ClassName).Namespace.ComparisonIndex = (FNameEntryId)FVar5.Value;
  *(undefined8 *)&(pFVar9->ClassName).Namespace.Number = uVar3;
  uVar3 = *(undefined8 *)&(param_1->ClassName).Variant.Number;
  *(undefined8 *)&(pFVar9->ClassName).Name.Number = *(undefined8 *)&(param_1->ClassName).Name.Number
  ;
  *(undefined8 *)&(pFVar9->ClassName).Variant.Number = uVar3;
  (pFVar9->Version).Minor = (param_1->Version).Minor;
  *(int *)(pFVar9 + 1) = *param_2;
  return (int *)(pFVar9 + 1);
}

// Find @ 14ae31c50

int * __thiscall
TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
          (TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_> *this,
          FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (int *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 0x10);
}

// Find @ 14ae31cf0

FGraphModifyDelegates * __thiscall
TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Find(TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGraphModifyDelegates *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FGraphModifyDelegates *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGraphModifyDelegates *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGraphModifyDelegates *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xf0 + 0x10);
}

// Find @ 14ae31d90

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Find(TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 0x10);
}

// Find @ 14ae31e30

TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> * __thiscall
TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Find(TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 0x10);
}

// Find @ 14ae31ed0

TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> * __thiscall
TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Find(TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 0x10);
}

// Find @ 14ae31f70

int * __thiscall
TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
::Find(TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
       *this,FNodeClassRegistryKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (int *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 0x24);
}

// Remove @ 14ae42890

int __thiscall
TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Remove(TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
         *this,FGuid *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    if (*(void **)(_Dst + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 0x10));
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// AllocateMemoryForEmplace<Metasound::FFrontendQueryKey_const_&> @ 14ae4af60

TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
::AllocateMemoryForEmplace<Metasound::FFrontendQueryKey_const_&>
          (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
           *this,FFrontendQueryKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  longlong lVar5;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_const_,int,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                    ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
  if ((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    if (iVar3 < 0) goto LAB_14ae4b03e;
  }
  if (iVar3 < (this->Pairs).ArrayNum) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    lVar5 = (longlong)iVar3 * 0xe0;
    bVar2 = Metasound::operator<
                      (param_1,(FFrontendQueryKey *)((this->Pairs).AllocatorInstance.Data + lVar5));
    if (!bVar2) {
      pTVar4 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)((this->Pairs).AllocatorInstance.Data + lVar5);
      DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
                (pTVar4,1);
      return pTVar4;
    }
  }
LAB_14ae4b03e:
  TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar3,1);
  return (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0xe0);
}

// Emplace<Metasound::FFrontendQueryKey_const_&> @ 14ae4d780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
::Emplace<Metasound::FFrontendQueryKey_const_&>
          (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
           *this,FFrontendQueryKey *param_1)

{
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  undefined1 auStack_f8 [32];
  FFrontendQueryEntry local_d8;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = AllocateMemoryForEmplace<Metasound::FFrontendQueryKey_const_&>(this,param_1);
  local_28 = (void *)0x0;
  local_20 = 0;
  local_1c = 1;
  Metasound::FFrontendQueryKey::FFrontendQueryKey((FFrontendQueryKey *)this_00,param_1);
  *(undefined8 *)&this_00->field_0xd0 = 0;
  if (local_28 == (void *)0x0) {
    *(uint *)&this_00->field_0x20 = local_d8.ID.A;
    *(uint *)&this_00->field_0x24 = local_d8.ID.B;
    *(uint *)&this_00->field_0x28 = local_d8.ID.C;
    *(uint *)&this_00->field_0x2c = local_d8.ID.D;
    *(longlong *)&this_00->field_0x30 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x38 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x40 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x48 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x50 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x58 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x60 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x68 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x70 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x78 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x80 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x88 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x90 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0x98 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0xa0 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0xa8 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0xb0 = local_d8.Value._padding_;
    *(longlong *)&this_00->field_0xb8 = local_d8.Value._padding_;
    this_00->field_0xc0 = local_d8.Value.TypeIndex;
    *(undefined7 *)&this_00->field_0xc1 = local_d8.Value._145_7_;
    *(float *)&this_00->field_0xc8 = local_d8.Score;
    *(undefined4 *)&this_00->field_0xcc = local_d8._172_4_;
  }
  if (*(void **)&this_00->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0xd0);
  }
  *(void **)&this_00->field_0xd0 = local_28;
  *(undefined4 *)&this_00->field_0xd8 = local_20;
  *(undefined4 *)&this_00->field_0xdc = local_1c;
  DestructItems<Metasound::FFrontendQueryEntry,int>(&local_d8,0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)&this_00->field_0x20;
}

// Emplace<Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&> @ 14ae4d8f0

TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
::
Emplace<Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
          (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
           *this,FFrontendQueryKey *param_1,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  ForElementType<Metasound::FFrontendQueryEntry> FVar2;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  void *pvVar3;
  undefined1 *puVar4;
  
  this_00 = AllocateMemoryForEmplace<Metasound::FFrontendQueryKey_const_&>(this,param_1);
  Metasound::FFrontendQueryKey::FFrontendQueryKey((FFrontendQueryKey *)this_00,param_1);
  puVar4 = &this_00->field_0x20;
  *(undefined8 *)&this_00->field_0xd0 = 0;
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  iVar1 = param_2->ArrayNum;
  *(int *)&this_00->field_0xd8 = iVar1;
  if (FVar2 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&this_00->field_0xdc = 1;
    return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)puVar4;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
            (0xb0,8,iVar1,0,(ForElementType<Metasound::FFrontendQueryEntry> *)puVar4,iVar1,
             (int *)&this_00->field_0xdc);
  pvVar3 = *(void **)&this_00->field_0xd0;
  if (*(void **)&this_00->field_0xd0 == (void *)0x0) {
    pvVar3 = puVar4;
  }
  ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
            (pvVar3,(FFrontendQueryEntry *)param_2,iVar1);
  return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)puVar4;
}

// Emplace<Metasound::FFrontendQueryKey> @ 14ae4d9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
::Emplace<Metasound::FFrontendQueryKey>
          (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
           *this,FFrontendQueryKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *this_00;
  longlong lVar5;
  undefined1 auStack_118 [32];
  FKeyForward local_e8;
  FFrontendQueryEntry local_e0;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_const_,int,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                    ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_e8
                     ,(TLess<Metasound::FFrontendQueryKey_const_&>)local_e8);
  if ((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    if (-1 < iVar3) goto LAB_14ae4da42;
  }
  else {
LAB_14ae4da42:
    if (iVar3 < (this->Pairs).ArrayNum) {
      if (iVar3 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar1)();
          return pTVar4;
        }
      }
      lVar5 = (longlong)iVar3 * 0xe0;
      bVar2 = Metasound::operator<
                        (param_1,(FFrontendQueryKey *)((this->Pairs).AllocatorInstance.Data + lVar5)
                        );
      if (!bVar2) {
        this_00 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                   *)((this->Pairs).AllocatorInstance.Data + lVar5);
        DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
                  (this_00,1);
        goto LAB_14ae4daca;
      }
    }
  }
  TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar3,1);
  this_00 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
             *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar3 * 0xe0);
LAB_14ae4daca:
  local_24 = 1;
  local_30 = (void *)0x0;
  local_28 = 0;
  Metasound::FFrontendQueryKey::FFrontendQueryKey((FFrontendQueryKey *)this_00,param_1);
  *(undefined8 *)&this_00->field_0xd0 = 0;
  if (local_30 == (void *)0x0) {
    *(uint *)&this_00->field_0x20 = local_e0.ID.A;
    *(uint *)&this_00->field_0x24 = local_e0.ID.B;
    *(uint *)&this_00->field_0x28 = local_e0.ID.C;
    *(uint *)&this_00->field_0x2c = local_e0.ID.D;
    *(longlong *)&this_00->field_0x30 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x38 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x40 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x48 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x50 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x58 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x60 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x68 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x70 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x78 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x80 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x88 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x90 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0x98 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0xa0 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0xa8 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0xb0 = local_e0.Value._padding_;
    *(longlong *)&this_00->field_0xb8 = local_e0.Value._padding_;
    this_00->field_0xc0 = local_e0.Value.TypeIndex;
    *(undefined7 *)&this_00->field_0xc1 = local_e0.Value._145_7_;
    *(float *)&this_00->field_0xc8 = local_e0.Score;
    *(undefined4 *)&this_00->field_0xcc = local_e0._172_4_;
  }
  if (*(void **)&this_00->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0xd0);
  }
  *(void **)&this_00->field_0xd0 = local_30;
  *(undefined4 *)&this_00->field_0xd8 = local_28;
  *(undefined4 *)&this_00->field_0xdc = local_24;
  DestructItems<Metasound::FFrontendQueryEntry,int>(&local_e0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)&this_00->field_0x20;
}

// Find @ 14ae71350

int * __thiscall
TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Find
          (TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_> *this
          ,uint param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(uint *)(pFVar8 + (longlong)iVar1 * 8) < param_1) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(uint *)(pFVar8 + (longlong)iVar6 * 8) <= param_1)) &&
     (iVar6 != -1)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      piVar7 = (int *)(*pcVar3)();
      return piVar7;
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 8 + 4;
  }
  else {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  return (int *)pFVar8;
}

// Find @ 14ae71420

TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
::Find(TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
       *this,FFrontendQueryKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xe0 + 0x20);
}

// Remove @ 14ae837c0

int __thiscall
TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Remove
          (TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_> *this
          ,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (this->Pairs).ArrayNum;
  uVar7 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar6 = (uVar8 >> 1) + uVar7;
      if (*(uint *)(pFVar2 + (longlong)iVar6 * 8) < param_1) {
        uVar7 = iVar6 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if ((((int)uVar7 < (this->Pairs).ArrayNum) &&
      (*(uint *)(pFVar2 + (longlong)(int)uVar7 * 8) <= param_1)) && (uVar7 != 0xffffffff)) {
    if ((int)uVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    pFVar2 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
    iVar6 = (this->Pairs).ArrayNum + ~uVar7;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    return 1;
  }
  return 0;
}

