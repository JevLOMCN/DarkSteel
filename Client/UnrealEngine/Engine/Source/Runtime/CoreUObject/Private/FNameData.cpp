// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// ~FNameData @ 141fbfcf0

void __thiscall UEnum::FNameData::~FNameData(FNameData *this)

{
  if ((this->TaggedNames & 1) != 0) {
    FMemory::Free((void *)(this->TaggedNames & 0xfffffffffffffffe));
  }
  this->TaggedNames = 0;
  if ((this->TaggedValues & 1) != 0) {
    FMemory::Free((void *)(this->TaggedValues & 0xfffffffffffffffe));
  }
  this->NumValues = 0;
  this->TaggedValues = 0;
  return;
}

// operator[] @ 141fc1c80

TTuple<FName,__int64> * __thiscall
UEnum::FNameData::operator[]
          (FNameData *this,TTuple<FName,__int64> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,__int64> *pTVar7;
  long64 *plVar8;
  TArrayView<__int64_const_,int> local_28;
  
  piVar1 = &this->NumValues;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd78,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FName,__int64> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar3 = this->TaggedNames;
  iVar2 = *piVar1;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FName,__int64> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar6 = 0;
  if (param_1 < iVar2) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FName,__int64> *)(*pcVar4)();
      return pTVar7;
    }
  }
  local_28.DataPtr = (long64 *)(this->TaggedValues & 0xfffffffffffffffe);
  local_28.ArrayNum = *piVar1;
  if (local_28.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FName,__int64> *)(*pcVar4)();
      return pTVar7;
    }
  }
  plVar8 = TArrayView<__int64_const_,int>::operator[](&local_28,param_1);
  *(undefined8 *)__return_storage_ptr__ =
       *(undefined8 *)((uVar3 & 0xfffffffffffffffe) + (longlong)param_1 * 8);
  *(long64 *)&__return_storage_ptr__->field_0x8 = *plVar8;
  return __return_storage_ptr__;
}

// AllocateNames @ 141fc58a0

FName * __thiscall UEnum::FNameData::AllocateNames(FNameData *this,int param_1)

{
  FName *pFVar1;
  
  pFVar1 = FMemory::Malloc((longlong)param_1 << 3,0);
  this->TaggedNames = (ulonglong)pFVar1 | 1;
  return pFVar1;
}

// AllocateValues @ 141fc58d0

long64 * __thiscall UEnum::FNameData::AllocateValues(FNameData *this,int param_1)

{
  long64 *plVar1;
  
  plVar1 = FMemory::Malloc((longlong)param_1 << 3,0);
  this->TaggedValues = (ulonglong)plVar1 | 1;
  return plVar1;
}

// DeleteNames @ 141fc9470

void __thiscall UEnum::FNameData::DeleteNames(FNameData *this)

{
  if ((this->TaggedNames & 1) != 0) {
    FMemory::Free((void *)(this->TaggedNames & 0xfffffffffffffffe));
  }
  this->TaggedNames = 0;
  return;
}

// DeleteValues @ 141fc94a0

void __thiscall UEnum::FNameData::DeleteValues(FNameData *this)

{
  if ((this->TaggedValues & 1) != 0) {
    FMemory::Free((void *)(this->TaggedValues & 0xfffffffffffffffe));
  }
  this->TaggedValues = 0;
  return;
}

// DiscardPlaceholder @ 141fc9c50

void __thiscall UEnum::FNameData::DiscardPlaceholder(FNameData *this)

{
  this->NumValues = this->NumValues + -1;
  return;
}

// Empty @ 141fca160

void __thiscall UEnum::FNameData::Empty(FNameData *this)

{
  if ((this->TaggedNames & 1) != 0) {
    FMemory::Free((void *)(this->TaggedNames & 0xfffffffffffffffe));
  }
  this->TaggedNames = 0;
  if ((this->TaggedValues & 1) != 0) {
    FMemory::Free((void *)(this->TaggedValues & 0xfffffffffffffffe));
  }
  this->NumValues = 0;
  this->TaggedValues = 0;
  return;
}

// Initialize @ 141fd4b30

void __thiscall
UEnum::FNameData::Initialize
          (FNameData *this,TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((this->NumValues != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                         ,0x69,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumValues = param_1->ArrayNum;
  pvVar5 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  this->TaggedNames = (ulonglong)pvVar5 | 1;
  puVar6 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  uVar7 = 0;
  this->TaggedValues = (ulonglong)puVar6 | 1;
  if (0 < this->NumValues) {
    lVar9 = 0;
    lVar8 = (longlong)pvVar5 - (longlong)puVar6;
    do {
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(lVar8 + (longlong)puVar6) =
           *(undefined8 *)((param_1->AllocatorInstance).Data + lVar9);
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar1 = lVar9 + 8;
      lVar9 = lVar9 + 0xc;
      *puVar6 = (ulonglong)(byte)(param_1->AllocatorInstance).Data[lVar1];
      puVar6 = puVar6 + 1;
    } while ((int)uVar7 < this->NumValues);
  }
  return;
}

// Initialize @ 141fd4cb0

void __thiscall
UEnum::FNameData::Initialize
          (FNameData *this,TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((this->NumValues != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                         ,0x77,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumValues = param_1->ArrayNum;
  pvVar5 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  this->TaggedNames = (ulonglong)pvVar5 | 1;
  puVar6 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  uVar7 = 0;
  this->TaggedValues = (ulonglong)puVar6 | 1;
  if (0 < this->NumValues) {
    lVar9 = 0;
    lVar8 = (longlong)pvVar5 - (longlong)puVar6;
    do {
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(lVar8 + (longlong)puVar6) =
           *(undefined8 *)((param_1->AllocatorInstance).Data + lVar9);
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar1 = lVar9 + 8;
      lVar9 = lVar9 + 0x10;
      *puVar6 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar1);
      puVar6 = puVar6 + 1;
    } while ((int)uVar7 < this->NumValues);
  }
  return;
}

// Initialize @ 141fd4e30

void __thiscall
UEnum::FNameData::Initialize(FNameData *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  if ((this->NumValues != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                         ,0x5b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->NumValues = param_1->ArrayNum;
  pvVar4 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  this->TaggedNames = (ulonglong)pvVar4 | 1;
  plVar5 = FMemory::Malloc((longlong)param_1->ArrayNum << 3,0);
  uVar7 = 0;
  this->TaggedValues = (ulonglong)plVar5 | 1;
  if (0 < this->NumValues) {
    plVar8 = plVar5;
    do {
      uVar3 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined8 *)((longlong)plVar8 + ((longlong)pvVar4 - (longlong)plVar5)) =
           *(undefined8 *)
            (((longlong)(param_1->AllocatorInstance).Data - (longlong)plVar5) + (longlong)plVar8);
      lVar6 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      *plVar8 = lVar6;
      plVar8 = plVar8 + 1;
    } while ((int)uVar7 < this->NumValues);
  }
  return;
}

// InitializeWithPlaceholder @ 141fd53d0

void __thiscall
UEnum::FNameData::InitializeWithPlaceholder
          (FNameData *this,TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32>_> *param_1,
          long64 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if ((this->NumValues != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                         ,0x85,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NumValues = param_1->ArrayNum;
  pvVar5 = FMemory::Malloc((longlong)param_1->ArrayNum * 8 + 8,0);
  this->TaggedNames = (ulonglong)pvVar5 | 1;
  puVar6 = FMemory::Malloc((longlong)param_1->ArrayNum * 8 + 8,0);
  uVar8 = 0;
  this->TaggedValues = (ulonglong)puVar6 | 1;
  iVar7 = this->NumValues;
  if (0 < iVar7) {
    lVar9 = 0;
    puVar10 = puVar6;
    do {
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)((longlong)puVar10 + ((longlong)pvVar5 - (longlong)puVar6)) =
           *(undefined8 *)((param_1->AllocatorInstance).Data + lVar9);
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar1 = lVar9 + 8;
      lVar9 = lVar9 + 0x10;
      *puVar10 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar1);
      puVar10 = puVar10 + 1;
      iVar7 = this->NumValues;
    } while ((int)uVar8 < iVar7);
  }
  *(undefined8 *)((longlong)pvVar5 + (longlong)iVar7 * 8) = 0;
  puVar6[this->NumValues] = param_2;
  return;
}

// MakeValuesSequentialFromZero @ 141fd7240

void __thiscall UEnum::FNameData::MakeValuesSequentialFromZero(FNameData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  
  iVar1 = this->NumValues;
  plVar7 = (longlong *)(this->TaggedValues & 0xfffffffffffffffe);
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  uVar8 = 0;
  if (0 < this->NumValues) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar1) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*plVar7 != (longlong)(int)uVar8) {
        if ((this->TaggedValues & 1) == 0) {
          plVar7 = FMemory::Malloc((longlong)this->NumValues << 3,0);
          this->TaggedValues = (ulonglong)plVar7 | 1;
        }
        else {
          plVar7 = (longlong *)(this->TaggedValues & 0xfffffffffffffffe);
        }
        if (this->NumValues < 1) {
          return;
        }
        do {
          lVar5 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          *plVar7 = lVar5;
          plVar7 = plVar7 + 1;
        } while (iVar6 < this->NumValues);
        return;
      }
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 1;
    } while ((int)uVar8 < this->NumValues);
  }
  return;
}

// UsePlaceholder @ 141febaf0

void __thiscall UEnum::FNameData::UsePlaceholder(FNameData *this,FName param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  *(FName *)((this->TaggedNames & 0xfffffffffffffffe) + (longlong)this->NumValues * 8) = param_1;
  if (*(longlong *)((this->TaggedValues & 0xfffffffffffffffe) + (longlong)this->NumValues * 8) ==
      param_2) {
    this->NumValues = this->NumValues + 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("reinterpret_cast<int64*>(TaggedValues & MaskPointer)[NumValues] == InValue",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                     ,0xb8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->NumValues = this->NumValues + 1;
  return;
}

