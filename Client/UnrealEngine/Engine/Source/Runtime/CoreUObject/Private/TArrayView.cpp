// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 27

// operator[] @ 141e89490

uint * __thiscall
TArrayView<unsigned_int,int>::operator[](TArrayView<unsigned_int,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
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
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141e89510

FAssetRegistryExportPath * __thiscall
TArrayView<FAssetRegistryExportPath,int>::operator[]
          (TArrayView<FAssetRegistryExportPath,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAssetRegistryExportPath *pFVar4;
  
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
      pFVar4 = (FAssetRegistryExportPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141e89590

FNumberlessExportPath * __thiscall
TArrayView<FixedTagPrivate::FNumberlessExportPath,int>::operator[]
          (TArrayView<FixedTagPrivate::FNumberlessExportPath,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNumberlessExportPath *pFVar4;
  
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
      pFVar4 = (FNumberlessExportPath *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141e89610

FDisplayNameEntryId * __thiscall
TArrayView<FDisplayNameEntryId,int>::operator[]
          (TArrayView<FDisplayNameEntryId,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDisplayNameEntryId *pFVar4;
  
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
      pFVar4 = (FDisplayNameEntryId *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141e89690

FMarshalledText * __thiscall
TArrayView<FixedTagPrivate::FMarshalledText,int>::operator[]
          (TArrayView<FixedTagPrivate::FMarshalledText,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMarshalledText *pFVar4;
  
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
      pFVar4 = (FMarshalledText *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141e89710

FName * __thiscall TArrayView<FName,int>::operator[](TArrayView<FName,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  
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
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 141fc1c00

long64 * __thiscall
TArrayView<__int64_const_,int>::operator[](TArrayView<__int64_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  
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
      plVar4 = (long64 *)(*pcVar1)();
      return plVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<UObject_*,int><TArray<UObject_*,TMemoryImageAllocator<0>_>_&,TArray<UObject_*,TMemoryImageAllocator<0>_>_> @ 141fed590

TArrayView<UObject_*,int> * __thiscall
TArrayView<UObject_*,int>::
TArrayView<UObject_*,int><TArray<UObject_*,TMemoryImageAllocator<0>_>_&,TArray<UObject_*,TMemoryImageAllocator<0>_>_>
          (TArrayView<UObject_*,int> *this,TArray<UObject_*,TMemoryImageAllocator<0>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TArrayView<UObject_*,int> *pTVar5;
  
  FVar4 = param_1->AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(param_1->AllocatorInstance).field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  this->DataPtr = (UObject **)FVar4;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<UObject_*,int> *)(*pcVar2)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UE::GC::FMemberDeclaration,int><TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 141fed610

TArrayView<UE::GC::FMemberDeclaration,int> * __thiscall
TArrayView<UE::GC::FMemberDeclaration,int>::
TArrayView<UE::GC::FMemberDeclaration,int><TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<UE::GC::FMemberDeclaration,int> *this,
          TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::GC::FMemberDeclaration> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::GC::FMemberDeclaration,int> *pTVar5;
  ForElementType<UE::GC::FMemberDeclaration> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::GC::FMemberDeclaration>)param_1;
  if (FVar2 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (FMemberDeclaration *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::GC::FMemberDeclaration,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<UObject_*,int><UObject_*> @ 141fed690

TArrayView<UObject_*,int> * __thiscall
TArrayView<UObject_*,int>::TArrayView<UObject_*,int><UObject_*>
          (TArrayView<UObject_*,int> *this,UObject **param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UObject_*,int> *pTVar3;
  
  this->DataPtr = param_1;
  this->ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UObject_*,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// Last @ 142063590

UObject ** __thiscall TArrayView<UObject_*,int>::Last(TArrayView<UObject_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject **ppUVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppUVar4 = (UObject **)(*pcVar1)();
      return ppUVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Slice @ 14208f450

TArrayView<UE::GC::FAROQueue,int> * __thiscall
TArrayView<UE::GC::FAROQueue,int>::Slice
          (TArrayView<UE::GC::FAROQueue,int> *this,
          TArrayView<UE::GC::FAROQueue,int> *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::GC::FAROQueue,int> *pTVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15b,L"Invalid index (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::GC::FAROQueue,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15c,L"Invalid count (%lld)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::GC::FAROQueue,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->ArrayNum < param_1 + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + InNum <= ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x15d,
                       L"Range (index: %lld, count: %lld) lies outside the view of %lld elements");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::GC::FAROQueue,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->ArrayNum = param_2;
  __return_storage_ptr__->DataPtr = this->DataPtr + param_1;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<UE::GC::FAROQueue,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// TArrayView<FLinkerLoad_*_const,int><TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>,TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>_> @ 142094fd0

TArrayView<FLinkerLoad_*_const,int> * __thiscall
TArrayView<FLinkerLoad_*_const,int>::
TArrayView<FLinkerLoad_*_const,int><TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>,TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FLinkerLoad_*_const,int> *this,
          TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FLinkerLoad_*_const,int> *pTVar4;
  
  this->DataPtr = (FLinkerLoad **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FLinkerLoad_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// FindByKey<FOverriddenPropertyNodeID> @ 1420e40a0

FOverriddenPropertyNode * __thiscall
TArrayView<FOverriddenPropertyNode,int>::FindByKey<FOverriddenPropertyNodeID>
          (TArrayView<FOverriddenPropertyNode,int> *this,FOverriddenPropertyNodeID *param_1)

{
  bool bVar1;
  FOverriddenPropertyNode *this_00;
  FOverriddenPropertyNode *pFVar2;
  FOverriddenPropertyNodeID local_48;
  undefined1 local_28;
  FOverriddenPropertyNode *local_20;
  undefined8 local_18;
  
  this_00 = this->DataPtr;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FOverriddenPropertyNode *)0x0;
    }
    FOverriddenPropertyPath::FOverriddenPropertyPath(&local_48.Path,&param_1->Path);
    local_48.Object.WeakPtr = (param_1->Object).WeakPtr;
    local_28 = 0;
    local_20 = (FOverriddenPropertyNode *)0x0;
    local_18 = 0;
    bVar1 = FOverriddenPropertyNodeID::operator==(&this_00->NodeID,&local_48);
    DestructItems<FOverriddenPropertyNode,int>(local_20,(int)local_18);
    if (local_20 != (FOverriddenPropertyNode *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_48.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Path.Path.AllocatorInstance.Data);
    }
    if (bVar1) break;
    this_00 = this_00 + 1;
  }
  return this_00;
}

// operator[] @ 142202330

FFrame ** __thiscall
TArrayView<FFrame_const_*_const,int>::operator[]
          (TArrayView<FFrame_const_*_const,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrame **ppFVar4;
  
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
      ppFVar4 = (FFrame **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14225a460

FName * __thiscall
TArrayView<FName_const_,int>::operator[](TArrayView<FName_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  
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
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 1423011d0

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::
TArrayView<int_const_,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<int_const_,int> *this,
          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int_const_,int> *pTVar5;
  ForElementType<int> FVar6;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<int>)param_1;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar6 = FVar2;
  }
  this->DataPtr = (int *)FVar6;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    this->ArrayNum = iVar1;
    return this;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14230c3a0

FCellExportMapEntry * __thiscall
TArrayView<FCellExportMapEntry_const_,int>::operator[]
          (TArrayView<FCellExportMapEntry_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCellExportMapEntry *pFVar4;
  
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
      pFVar4 = (FCellExportMapEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c420

FExportMapEntry * __thiscall
TArrayView<FExportMapEntry_const_,int>::operator[]
          (TArrayView<FExportMapEntry_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FExportMapEntry *pFVar4;
  
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
      pFVar4 = (FExportMapEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c4a0

FPackageObjectIndex * __thiscall
TArrayView<FPackageObjectIndex_const_,int>::operator[]
          (TArrayView<FPackageObjectIndex_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPackageObjectIndex *pFVar4;
  
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
      pFVar4 = (FPackageObjectIndex *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c520

ulong64 * __thiscall
TArrayView<unsigned___int64_const_,int>::operator[]
          (TArrayView<unsigned___int64_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 *puVar4;
  
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
      puVar4 = (ulong64 *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c5a0

int * __thiscall TArrayView<int,int>::operator[](TArrayView<int,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
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
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c620

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 ** __thiscall
TArrayView<FAsyncPackage2_*,int>::operator[](TArrayView<FAsyncPackage2_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAsyncPackage2 **ppFVar4;
  
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
      ppFVar4 = (FAsyncPackage2 **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c6a0

FUObjectItem ** __thiscall
TArrayView<FUObjectItem_*,int>::operator[](TArrayView<FUObjectItem_*,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUObjectItem **ppFVar4;
  
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
      ppFVar4 = (FUObjectItem **)(*pcVar1)();
      return ppFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c720

FExportCell * __thiscall
TArrayView<FExportCell,int>::operator[](TArrayView<FExportCell,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FExportCell *pFVar4;
  
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
      pFVar4 = (FExportCell *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c7a0

FExportObject * __thiscall
TArrayView<FExportObject,int>::operator[](TArrayView<FExportObject,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FExportObject *pFVar4;
  
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
      pFVar4 = (FExportObject *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14230c820

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEventLoadNode2 * __thiscall
TArrayView<FEventLoadNode2,int>::operator[](TArrayView<FEventLoadNode2,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEventLoadNode2 *pFVar4;
  
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
      pFVar4 = (FEventLoadNode2 *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

