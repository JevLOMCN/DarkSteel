// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 38

// TArrayView<UMassProcessor_*,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_> @ 1470cf3e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassProcessor_*,int> * __thiscall
TArrayView<UMassProcessor_*,int>::
TArrayView<UMassProcessor_*,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMassProcessor_*,int> *this,
          TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMassProcessor_*,int> *pTVar4;
  
  this->DataPtr = (UMassProcessor **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMassProcessor_*,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UMassProcessor_*_const,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_> @ 1470cf450

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassProcessor_*_const,int> * __thiscall
TArrayView<UMassProcessor_*_const,int>::
TArrayView<UMassProcessor_*_const,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMassProcessor_*_const,int> *this,
          TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMassProcessor_*_const,int> *pTVar4;
  
  this->DataPtr = (UMassProcessor **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMassProcessor_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_> @ 1470cf4c0

TArrayView<UScriptStruct_const_*_const,int> * __thiscall
TArrayView<UScriptStruct_const_*_const,int>::
TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UScriptStruct_const_*_const,int> *this,
          TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar4;
  
  this->DataPtr = (UScriptStruct **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UScriptStruct_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UMassProcessor_*_const,int><TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_> @ 1470cf530

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassProcessor_*_const,int> * __thiscall
TArrayView<UMassProcessor_*_const,int>::
TArrayView<UMassProcessor_*_const,int><TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UMassProcessor_*_const,int> *this,
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMassProcessor_*_const,int> *pTVar4;
  
  this->DataPtr = (UMassProcessor **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMassProcessor_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> @ 1470cf5a0

TArrayView<FInstancedStruct_const_,int> * __thiscall
TArrayView<FInstancedStruct_const_,int>::
TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FInstancedStruct_const_,int> *this,
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FInstancedStruct_const_,int> *pTVar4;
  
  this->DataPtr = (FInstancedStruct *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FInstancedStruct_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_&,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_> @ 1470cf610

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::
TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_&,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  
  this->DataPtr = (FMassArchetypeEntityCollection *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1470cf680

TArrayView<FMassEntityHandle_const_,int> * __thiscall
TArrayView<FMassEntityHandle_const_,int>::
TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassEntityHandle_const_,int> *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  
  this->DataPtr = (FMassEntityHandle *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassEntityHandle,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1470cf6f0

TArrayView<FMassEntityHandle,int> * __thiscall
TArrayView<FMassEntityHandle,int>::
TArrayView<FMassEntityHandle,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassEntityHandle,int> *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassEntityHandle,int> *pTVar4;
  
  this->DataPtr = (FMassEntityHandle *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassEntityHandle,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>_&,TArrayView<FMassEntityHandle,int>_> @ 1470cf760

TArrayView<FMassEntityHandle_const_,int> * __thiscall
TArrayView<FMassEntityHandle_const_,int>::
TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>_&,TArrayView<FMassEntityHandle,int>_>
          (TArrayView<FMassEntityHandle_const_,int> *this,TArrayView<FMassEntityHandle,int> *param_1
          )

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FMassProcessingPhaseConfig_const_,int><FMassProcessingPhaseConfig_(&)[6],FMassProcessingPhaseConfig_[6]> @ 1470cf780

TArrayView<FMassProcessingPhaseConfig_const_,int> * __thiscall
TArrayView<FMassProcessingPhaseConfig_const_,int>::
TArrayView<FMassProcessingPhaseConfig_const_,int><FMassProcessingPhaseConfig_(&)[6],FMassProcessingPhaseConfig_[6]>
          (TArrayView<FMassProcessingPhaseConfig_const_,int> *this,
          FMassProcessingPhaseConfig (*param_1) [6])

{
  FMassProcessingPhaseConfig *pFVar1;
  
  pFVar1 = UE::Core::Private::GetDataImpl<FMassProcessingPhaseConfig_(&)[6]>(param_1);
  this->DataPtr = pFVar1;
  this->ArrayNum = 6;
  return this;
}

// TArrayView<FMassEntityHandle,int><FMassEntityHandle> @ 1470cf930

TArrayView<FMassEntityHandle,int> * __thiscall
TArrayView<FMassEntityHandle,int>::TArrayView<FMassEntityHandle,int><FMassEntityHandle>
          (TArrayView<FMassEntityHandle,int> *this,FMassEntityHandle *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FMassEntityHandle,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FMassEntityHandle,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_> @ 1470d0ca0

TArrayView<UScriptStruct_const_*_const,int> * __thiscall
TArrayView<UScriptStruct_const_*_const,int>::
TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<UScriptStruct_const_*_const,int> *this,
          TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar4;
  
  this->DataPtr = (UScriptStruct **)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UScriptStruct_const_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_> @ 1470d0d10

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::
TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  
  this->DataPtr = (FMassArchetypeEntityCollection *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_> @ 1470d0d80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassProcessor_*_const,int> * __thiscall
TArrayView<UMassProcessor_*_const,int>::
TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
          (TArrayView<UMassProcessor_*_const,int> *this,TArrayView<UMassProcessor_*,int> *param_1)

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_> @ 1470d0da0

TArrayView<UScriptStruct_const_*_const,int> * __thiscall
TArrayView<UScriptStruct_const_*_const,int>::
TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
          (TArrayView<UScriptStruct_const_*_const,int> *this,
          TArrayView<UScriptStruct_const_*,int> *param_1)

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FInstancedStruct_const_,int><TArrayView<FInstancedStruct,int>,TArrayView<FInstancedStruct,int>_> @ 1470d0dc0

TArrayView<FInstancedStruct_const_,int> * __thiscall
TArrayView<FInstancedStruct_const_,int>::
TArrayView<FInstancedStruct_const_,int><TArrayView<FInstancedStruct,int>,TArrayView<FInstancedStruct,int>_>
          (TArrayView<FInstancedStruct_const_,int> *this,TArrayView<FInstancedStruct,int> *param_1)

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_> @ 1470d0de0

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::
TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this,
          TArrayView<FMassArchetypeEntityCollection,int> *param_1)

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int><TArrayView<FMassArchetypeEntityCollectionWithPayload,int>,TArrayView<FMassArchetypeEntityCollectionWithPayload,int>_> @ 1470d0e00

TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int>::
TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int><TArrayView<FMassArchetypeEntityCollectionWithPayload,int>,TArrayView<FMassArchetypeEntityCollectionWithPayload,int>_>
          (TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *this,
          TArrayView<FMassArchetypeEntityCollectionWithPayload,int> *param_1)

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_> @ 1470d0e20

TArrayView<FMassEntityHandle_const_,int> * __thiscall
TArrayView<FMassEntityHandle_const_,int>::
TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
          (TArrayView<FMassEntityHandle_const_,int> *this,TArrayView<FMassEntityHandle,int> *param_1
          )

{
  this->DataPtr = param_1->DataPtr;
  this->ArrayNum = param_1->ArrayNum;
  return this;
}

// TArrayView<FMassArchetypeEntityCollection_const_,int> @ 1470f1e30

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::
TArrayView<FMassArchetypeEntityCollection_const_,int>
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this)

{
  this->DataPtr = (FMassArchetypeEntityCollection *)0x0;
  this->ArrayNum = 0;
  return this;
}

// TArrayView<UMassProcessor_*,int> @ 1470f1e50

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassProcessor_*,int> * __thiscall
TArrayView<UMassProcessor_*,int>::TArrayView<UMassProcessor_*,int>
          (TArrayView<UMassProcessor_*,int> *this)

{
  this->DataPtr = (UMassProcessor **)0x0;
  this->ArrayNum = 0;
  return this;
}

// TArrayView<UScriptStruct_const_*_const,int> @ 1470f1e70

TArrayView<UScriptStruct_const_*_const,int> * __thiscall
TArrayView<UScriptStruct_const_*_const,int>::TArrayView<UScriptStruct_const_*_const,int>
          (TArrayView<UScriptStruct_const_*_const,int> *this,
          initializer_list<UScriptStruct_const_*_const> *param_1)

{
  this->DataPtr = param_1->_First;
  this->ArrayNum = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 3);
  return this;
}

// operator[] @ 1470f95e0

FArchetypeEntityRange * __thiscall
TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::operator[]
          (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArchetypeEntityRange *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FArchetypeEntityRange *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9660

FMassArchetypeEntityCollection * __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::operator[]
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMassArchetypeEntityCollection *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassArchetypeEntityCollection *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f96e0

FMassChildOfFragment * __thiscall
TArrayView<FMassChildOfFragment_const_,int>::operator[]
          (TArrayView<FMassChildOfFragment_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMassChildOfFragment *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassChildOfFragment *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9760

FMassEntityHandle * __thiscall
TArrayView<FMassEntityHandle_const_,int>::operator[]
          (TArrayView<FMassEntityHandle_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMassEntityHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassEntityHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f97e0

FTestFragment_Array * __thiscall
TArrayView<FTestFragment_Array_const_,int>::operator[]
          (TArrayView<FTestFragment_Array_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Array *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Array *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9860

FTestFragment_Bool * __thiscall
TArrayView<FTestFragment_Bool_const_,int>::operator[]
          (TArrayView<FTestFragment_Bool_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Bool *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Bool *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f98e0

FTestFragment_Float * __thiscall
TArrayView<FTestFragment_Float_const_,int>::operator[]
          (TArrayView<FTestFragment_Float_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Float *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Float *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9960

FTestFragment_Int * __thiscall
TArrayView<FTestFragment_Int_const_,int>::operator[]
          (TArrayView<FTestFragment_Int_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Int *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Int *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f99e0

FTestFragment_Large * __thiscall
TArrayView<FTestFragment_Large_const_,int>::operator[]
          (TArrayView<FTestFragment_Large_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Large *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Large *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9a60

FMassEntityHandle * __thiscall
TArrayView<FMassEntityHandle,int>::operator[](TArrayView<FMassEntityHandle,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMassEntityHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMassEntityHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9ae0

FTestFragment_Float * __thiscall
TArrayView<FTestFragment_Float,int>::operator[]
          (TArrayView<FTestFragment_Float,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Float *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Float *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1470f9b60

FTestFragment_Int * __thiscall
TArrayView<FTestFragment_Int,int>::operator[](TArrayView<FTestFragment_Int,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTestFragment_Int *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTestFragment_Int *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Find @ 14711e840

int __thiscall
TArrayView<FMassEntityHandle,int>::Find
          (TArrayView<FMassEntityHandle,int> *this,FMassEntityHandle *param_1)

{
  FMassEntityHandle *pFVar1;
  FMassEntityHandle *pFVar2;
  
  pFVar1 = this->DataPtr;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if ((pFVar2->Index == (*param_1).Index) && (pFVar2->SerialNumber == (*param_1).SerialNumber))
      {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + this->ArrayNum);
  }
  return -1;
}

// IsEmpty @ 147192840

bool __thiscall
TArrayView<FMassArchetypeEntityCollection_const_,int>::IsEmpty
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *this)

{
  return this->ArrayNum == 0;
}

// IsEmpty @ 147192850

bool __thiscall
TArrayView<FMassEntityHandle_const_,int>::IsEmpty(TArrayView<FMassEntityHandle_const_,int> *this)

{
  return this->ArrayNum == 0;
}

// Sort @ 1471ab880

void __thiscall
TArrayView<FMassEntityHandle_const_,int>::Sort(TArrayView<FMassEntityHandle_const_,int> *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FMassEntityHandle_const_,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle_const_,TLess<void>_>_>
            (this->DataPtr,this->ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  return;
}

