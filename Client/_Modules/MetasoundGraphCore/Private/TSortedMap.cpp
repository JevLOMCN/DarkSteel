// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 13

// AllocateMemoryForEmplace<FGuid_const_&> @ 14ad29db0

TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> * __thiscall
TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::AllocateMemoryForEmplace<FGuid_const_&>
          (TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *this,FGuid *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>_const_,int,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
                     (this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  lVar8 = (longlong)iVar6;
  if ((iVar6 < 0) || (iVar1 < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar6 < 0) goto LAB_14ad29eb1;
  }
  if (iVar6 < (this->Pairs).ArrayNum) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)(*pcVar4)();
      return pTVar7;
    }
    pFVar3 = (this->Pairs).AllocatorInstance.Data;
    pTVar7 = (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
             (pFVar3 + lVar8 * 0x28);
    uVar2 = *(uint *)(pFVar3 + lVar8 * 0x28);
    if ((uVar2 <= param_1->A) &&
       ((param_1->A != uVar2 ||
        ((*(uint *)&pTVar7->field_0x4 <= param_1->B &&
         ((param_1->B != *(uint *)&pTVar7->field_0x4 ||
          ((*(uint *)&pTVar7->field_0x8 <= param_1->C &&
           ((param_1->C != *(uint *)&pTVar7->field_0x8 ||
            (*(uint *)&pTVar7->field_0xc <= param_1->D)))))))))))) {
      DestructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int>(pTVar7,1);
      return pTVar7;
    }
  }
LAB_14ad29eb1:
  TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  return (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
         ((this->Pairs).AllocatorInstance.Data + lVar8 * 0x28);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14ad29ef0

TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
* __thiscall
TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x18 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
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
      pTVar7 = (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14ad2a00b;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
              *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14ad2a00b:
  TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x18);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14ad2a050

TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
* __thiscall
TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
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
      pTVar7 = (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14ad2a166;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14ad2a166:
  TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  return (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14ad2a1b0

TTuple<FName,Metasound::FAnyDataReference> * __thiscall
TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
           *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar11 = uVar1;
    do {
      iVar6 = (uVar11 >> 1) + iVar10;
      lVar7 = (longlong)iVar6 * 0x20;
      iVar9 = *(int *)(pFVar2 + lVar7) - (param_1->ComparisonIndex).Value;
      if (iVar9 == 0) {
        iVar9 = *(int *)(pFVar2 + lVar7 + 4) - param_1->Number;
      }
      if (iVar9 < 0) {
        iVar10 = iVar6 + (uVar11 & 1);
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar1 < iVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTuple<FName,Metasound::FAnyDataReference> *)(*pcVar3)();
      return pTVar8;
    }
    if (iVar10 < 0) goto LAB_14ad2a2c7;
  }
  if (iVar10 < (this->Pairs).ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTuple<FName,Metasound::FAnyDataReference> *)(*pcVar3)();
      return pTVar8;
    }
    pTVar8 = (TTuple<FName,Metasound::FAnyDataReference> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x20);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar8;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar8->field_0x4;
    }
    if (-1 < iVar6) {
      DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>(pTVar8,1);
      return pTVar8;
    }
  }
LAB_14ad2a2c7:
  TArray<TTuple<FName,Metasound::FAnyDataReference>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar10,1);
  return (TTuple<FName,Metasound::FAnyDataReference> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x20);
}

// AllocateMemoryForEmplace<FName_const_&> @ 14ad2a310

TTuple<FName,unsigned___int64> * __thiscall
TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,unsigned___int64> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
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
      pTVar7 = (TTuple<FName,unsigned___int64> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14ad2a411;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,unsigned___int64> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,unsigned___int64> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_14ad2a411:
  TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,unsigned___int64> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// AllocateMemoryForEmplace<unsigned___int64_const_&> @ 14ad2a450

TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo> *
__thiscall
TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
::AllocateMemoryForEmplace<unsigned___int64_const_&>
          (TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
           *this,ulong64 *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo> *pTVar7;
  FScriptContainerElement *_Src;
  int iVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar6 = (uVar9 >> 1) + iVar8;
      if (*(ulonglong *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x78) < *param_1)
      {
        iVar8 = iVar6 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
                *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar8 < 0) goto LAB_14ad2a54b;
  }
  if (iVar8 < *piVar1) {
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
                *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
              *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x78);
    if (*(ulonglong *)pTVar7 <= *param_1) {
      DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int>
                (pTVar7,1);
      return pTVar7;
    }
  }
LAB_14ad2a54b:
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  _Src = (this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x78;
  memmove(_Src + 0x78,_Src,(longlong)(iVar6 - iVar8) * 0x78);
  return (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo> *
         )((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x78);
}

// Emplace<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_> @ 14ad2cbd0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> * __thiscall
TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
::
Emplace<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
          (TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
           *this,FLiteralNodeID *param_1,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *pTVar8;
  TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar1 = (this->Pairs).ArrayNum;
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>_const_,int,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
                    ((TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
                      *)(this->Pairs).AllocatorInstance.Data,iVar1,param_1,local_res8,
                     (TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>
                      )local_res8);
  if ((iVar7 < 0) || (iVar1 < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)(*pcVar2)();
      return pTVar8;
    }
    if (-1 < iVar7) goto LAB_14ad2cc45;
  }
  else {
LAB_14ad2cc45:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)(*pcVar2)();
        return pTVar8;
      }
      pTVar9 = (TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
                *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x20);
      bVar6 = Metasound::DynamicGraph::operator<(param_1,(FLiteralNodeID *)pTVar9);
      if (!bVar6) {
        DestructItems<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,int>
                  (pTVar9,1);
        goto LAB_14ad2cccd;
      }
    }
  }
  TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x20);
LAB_14ad2cccd:
  uVar3 = (param_1->ToNode).B;
  uVar4 = (param_1->ToNode).C;
  uVar5 = (param_1->ToNode).D;
  *(uint *)&pTVar9->field_0x0 = (param_1->ToNode).A;
  *(uint *)&pTVar9->field_0x4 = uVar3;
  *(uint *)&pTVar9->field_0x8 = uVar4;
  *(uint *)&pTVar9->field_0xc = uVar5;
  uVar3 = (param_1->ToVertex).Number;
  *(uint *)&pTVar9->field_0x10 = (param_1->ToVertex).ComparisonIndex.Value;
  *(uint *)&pTVar9->field_0x14 = uVar3;
  *(INode **)&pTVar9->field_0x18 = param_2->Ptr;
  param_2->Ptr = (INode *)0x0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)&pTVar9->field_0x18;
}

// Find @ 14ad50860

FDeprecationNodeStorageAdapter * __thiscall
TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
::Find(TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDeprecationNodeStorageAdapter *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FDeprecationNodeStorageAdapter *)0x0;
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
      pFVar4 = (FDeprecationNodeStorageAdapter *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FDeprecationNodeStorageAdapter *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 0x10);
}

// Find @ 14ad50900

TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
* __thiscall
TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::Find(TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
       *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
  *pTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
            *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18 + 8);
}

// Find @ 14ad509b0

TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
* __thiscall
TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
::Find(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
       *this,FName param_1)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  uint uVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar2 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar2,(FNameFastLess)FVar2);
  if (uVar4 == 0xffffffff) {
    return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
            *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10 + 8);
}

// Find @ 14ad50a60

FOperatorInfo * __thiscall
TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
::Find(TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
       *this,ulong64 param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FOperatorInfo *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(ulonglong *)(pFVar3 + (longlong)iVar1 * 0x78) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(ulonglong *)(pFVar3 + (longlong)iVar7 * 0x78) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FOperatorInfo *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = (FOperatorInfo *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x78 + 8);
  }
  else {
    pFVar8 = (FOperatorInfo *)0x0;
  }
  return pFVar8;
}

// Remove @ 14ad5ea60

int __thiscall
TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::Remove
          (TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName param_1)

{
  int *piVar1;
  code *pcVar2;
  FKeyForward FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar3 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&this->Pairs,&local_res8,FVar3,(FNameFastLess)FVar3);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar7 << 4);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// RemoveAndCopyValue @ 14ad5eb40

bool __thiscall
TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
::RemoveAndCopyValue
          (TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
           *this,FLiteralNodeID *param_1,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *param_2)

{
  int *piVar1;
  INode *pIVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FKeyForward local_res8;
  
  uVar7 = Algo::
          BinarySearchBy<TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>
                      )local_res8);
  if (uVar7 == 0xffffffff) {
    return false;
  }
  uVar11 = ~uVar7 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar7 < (this->Pairs).ArrayNum) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar10 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x18;
  if ((FScriptContainerElement *)param_2 != pFVar10) {
    pIVar2 = param_2->Ptr;
    param_2->Ptr = *(INode **)&pFVar10->field_0x0;
    *(undefined8 *)&pFVar10->field_0x0 = 0;
    if (pIVar2 != (INode *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->Pairs).ArrayNum) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar10 = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
  puVar3 = *(undefined8 **)(pFVar10 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  iVar9 = (this->Pairs).ArrayNum + ~uVar7;
  if (iVar9 != 0) {
    memmove(pFVar10,pFVar10 + 0x20,(longlong)iVar9 << 5);
  }
  piVar1 = &(this->Pairs).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
  return true;
}

