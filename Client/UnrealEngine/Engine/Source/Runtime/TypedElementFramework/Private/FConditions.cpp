// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 36

// FConditions @ 142c95d20

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::FConditions(FConditions *this,FConditions *param_1)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar2;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar3;
  ForElementType<FName> FVar4;
  
  (this->Columns).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  if ((param_1->Columns).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    memmove(this,param_1,0x100);
  }
  FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Columns).AllocatorInstance.SecondaryData =
       (param_1->Columns).AllocatorInstance.SecondaryData;
  (param_1->Columns).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  (this->Columns).ArrayNum = (param_1->Columns).ArrayNum;
  (this->Columns).ArrayMax = (param_1->Columns).ArrayMax;
  (param_1->Columns).ArrayNum = 0;
  (param_1->Columns).ArrayMax = 0x20;
  (this->ColumnFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0;
  if ((param_1->ColumnFlags).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    memmove(&this->ColumnFlags,&param_1->ColumnFlags,0x20);
  }
  FVar2 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ColumnFlags).AllocatorInstance.SecondaryData =
       (param_1->ColumnFlags).AllocatorInstance.SecondaryData;
  (param_1->ColumnFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0;
  (this->ColumnFlags).ArrayNum = (param_1->ColumnFlags).ArrayNum;
  (this->ColumnFlags).ArrayMax = (param_1->ColumnFlags).ArrayMax;
  (param_1->ColumnFlags).ArrayNum = 0;
  (param_1->ColumnFlags).ArrayMax = 0x20;
  (this->Tokens).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0;
  if ((param_1->Tokens).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    memmove(&this->Tokens,&param_1->Tokens,0x40);
  }
  FVar3 = (this->Tokens).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->Tokens).AllocatorInstance.SecondaryData = (param_1->Tokens).AllocatorInstance.SecondaryData
  ;
  (param_1->Tokens).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0;
  (this->Tokens).ArrayNum = (param_1->Tokens).ArrayNum;
  (this->Tokens).ArrayMax = (param_1->Tokens).ArrayMax;
  (param_1->Tokens).ArrayNum = 0;
  (param_1->Tokens).ArrayMax = 0x40;
  (this->Identifiers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  if ((param_1->Identifiers).AllocatorInstance.SecondaryData == (ForElementType<FName>)0x0) {
    memmove(&this->Identifiers,&param_1->Identifiers,0x100);
  }
  FVar4 = (this->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->Identifiers).AllocatorInstance.SecondaryData =
       (param_1->Identifiers).AllocatorInstance.SecondaryData;
  (param_1->Identifiers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Identifiers).ArrayNum = (param_1->Identifiers).ArrayNum;
  (this->Identifiers).ArrayMax = (param_1->Identifiers).ArrayMax;
  (param_1->Identifiers).ArrayNum = 0;
  (param_1->Identifiers).ArrayMax = 0x20;
  this->ColumnCount = param_1->ColumnCount;
  this->TokenCount = param_1->TokenCount;
  this->bIsCompiled = param_1->bIsCompiled;
  return this;
}

// FConditions @ 142c95f40

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::FConditions(FConditions *this,FConditions *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> _Dst_00;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> _Dst_01;
  ForElementType<FName> _Dst_02;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> _Src_00;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> _Src_01;
  ForElementType<FName> _Src_02;
  
  (this->Columns).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  FVar3 = (param_1->Columns).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Columns).ArrayNum;
  (this->Columns).ArrayNum = iVar2;
  _Src = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->Columns).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,iVar2,0,
               (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *)this,iVar2,
               piVar1);
    FVar3 = (this->Columns).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  (this->ColumnFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0;
  _Src_00 = (param_1->ColumnFlags).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ColumnFlags).ArrayNum;
  (this->ColumnFlags).ArrayNum = iVar2;
  if (_Src_00 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    _Src_00 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
              &param_1->ColumnFlags;
  }
  piVar1 = &(this->ColumnFlags).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
              (1,1,iVar2,0,&(this->ColumnFlags).AllocatorInstance,iVar2,piVar1);
    _Dst_00 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0)
    {
      _Dst_00 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
                &this->ColumnFlags;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar2);
  }
  (this->Tokens).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0;
  _Src_01 = (param_1->Tokens).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Tokens).ArrayNum;
  (this->Tokens).ArrayNum = iVar2;
  if (_Src_01 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    _Src_01 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&param_1->Tokens
    ;
  }
  piVar1 = &(this->Tokens).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x40;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
              (1,1,iVar2,0,&(this->Tokens).AllocatorInstance,iVar2,piVar1);
    _Dst_01 = (this->Tokens).AllocatorInstance.SecondaryData;
    if (_Dst_01 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      _Dst_01 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
    }
    memcpy((void *)_Dst_01,(void *)_Src_01,(longlong)iVar2);
  }
  (this->Identifiers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  _Src_02 = (param_1->Identifiers).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Identifiers).ArrayNum;
  (this->Identifiers).ArrayNum = iVar2;
  if (_Src_02 == (ForElementType<FName>)0x0) {
    _Src_02 = (ForElementType<FName>)&param_1->Identifiers;
  }
  piVar1 = &(this->Identifiers).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,0,&(this->Identifiers).AllocatorInstance,iVar2,piVar1);
    _Dst_02 = (this->Identifiers).AllocatorInstance.SecondaryData;
    if (_Dst_02 == (ForElementType<FName>)0x0) {
      _Dst_02 = (ForElementType<FName>)&this->Identifiers;
    }
    memcpy((void *)_Dst_02,(void *)_Src_02,(longlong)iVar2 << 3);
  }
  this->ColumnCount = param_1->ColumnCount;
  this->TokenCount = param_1->TokenCount;
  this->bIsCompiled = param_1->bIsCompiled;
  return this;
}

// FConditions @ 142c961a0

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::FConditions(FConditions *this,FColumnBase *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::Queries::FConditions::Token,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar6;
  FName FVar7;
  code *pcVar8;
  FColumnBase *pFVar9;
  bool bVar10;
  int iVar11;
  ForElementType<FName> FVar12;
  FConditions *pFVar13;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar14;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar15;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar16;
  ForElementType<FName> FVar17;
  longlong lVar18;
  FWeakObjectPtr FVar19;
  FWeakObjectPtr local_res8;
  FColumnBase *local_res10;
  undefined1 local_58 [4];
  FWeakObjectPtr local_54;
  undefined8 local_4c [2];
  
  pTVar2 = &this->Tokens;
  (this->Columns).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  pTVar3 = &this->Identifiers;
  (this->Columns).ArrayNum = 0;
  piVar4 = &(this->Identifiers).ArrayMax;
  lVar18 = 0x20;
  local_4c[0] = 0;
  piVar5 = &(this->Columns).ArrayMax;
  *piVar5 = 0x20;
  piVar1 = &(this->Tokens).ArrayMax;
  (this->ColumnFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0;
  (this->ColumnFlags).ArrayNum = 0;
  (this->ColumnFlags).ArrayMax = 0x20;
  (this->Tokens).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0;
  (this->Tokens).ArrayNum = 0;
  *piVar1 = 0x40;
  (this->Identifiers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  *piVar4 = 0x20;
  this->ColumnCount = '\x01';
  this->TokenCount = '\0';
  this->bIsCompiled = false;
  (this->Identifiers).ArrayNum = 0;
  local_res10 = param_1;
  if (*piVar4 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,0x20,&pTVar3->AllocatorInstance,0,piVar4);
  }
  FVar19.ObjectIndex = 0x20;
  FVar19.ObjectSerialNumber = 0;
  do {
    FVar17 = (this->Identifiers).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<FName>)pTVar3;
    if (FVar17 != (ForElementType<FName>)0x0) {
      FVar12 = FVar17;
    }
    if ((ulonglong)FVar12 <= local_4c) {
      if (FVar17 == (ForElementType<FName>)0x0) {
        FVar17 = (ForElementType<FName>)pTVar3;
      }
      if ((local_4c < (undefined8 *)((longlong)FVar17 + (longlong)*piVar4 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FConditions *)(*pcVar8)();
        return pFVar13;
      }
    }
    iVar11 = (this->Identifiers).ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                         (0x408,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->Identifiers).ArrayNum = iVar11 + 1;
    FVar17 = (this->Identifiers).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<FName>)pTVar3;
    if (FVar17 != (ForElementType<FName>)0x0) {
      FVar12 = FVar17;
    }
    *(undefined8 *)((longlong)FVar12 + (longlong)iVar11 * 8) = local_4c[0];
    FVar19 = (FWeakObjectPtr)((longlong)FVar19 + -1);
  } while (FVar19 != (FWeakObjectPtr)0x0);
  local_res8 = FVar19;
  local_54 = FVar19;
  FWeakObjectPtr::operator=(&local_54,(FObjectPtr)&local_res8);
  (this->Columns).ArrayNum = 0;
  if (*piVar5 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,0x20,(ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *)this
               ,0,piVar5);
  }
  do {
    FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar14 = FVar6;
    }
    if ((ulonglong)FVar14 <= &local_54) {
      FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
      if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar14 = FVar6;
      }
      if ((&local_54 < (FWeakObjectPtr *)((longlong)FVar14 + (longlong)*piVar5 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FConditions *)(*pcVar8)();
        return pFVar13;
      }
    }
    iVar11 = (this->Columns).ArrayNum;
    if (iVar11 == *piVar5) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                         (0x408,(ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                                 *)this,piVar5);
    }
    (this->Columns).ArrayNum = iVar11 + 1;
    FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar14 = FVar6;
    }
    *(FWeakObjectPtr *)((longlong)FVar14 + (longlong)iVar11 * 8) = local_54;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  lVar18 = 0x40;
  local_58[0] = 0;
  (this->Tokens).ArrayNum = 0;
  if (*piVar1 != 0x40) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
              (1,1,0x40,&pTVar2->AllocatorInstance,0,piVar1);
  }
  do {
    FVar16 = (this->Tokens).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
    if (FVar16 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar15 = FVar16;
    }
    if ((ulonglong)FVar15 <= local_58) {
      if (FVar16 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar16 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
      }
      if ((local_58 < (undefined1 *)((longlong)FVar16 + (longlong)*piVar1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FConditions *)(*pcVar8)();
        return pFVar13;
      }
    }
    iVar11 = (this->Tokens).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
                         (0x101,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar9 = local_res10;
    (this->Tokens).ArrayNum = iVar11 + 1;
    FVar16 = (this->Tokens).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
    if (FVar16 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar15 = FVar16;
    }
    *(undefined1 *)((longlong)iVar11 + (longlong)FVar15) = local_58[0];
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  FVar19 = (local_res10->TypeInfo).WeakPtr;
  if (((this->Columns).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FConditions *)(*pcVar8)();
    return pFVar13;
  }
  FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
  FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
  if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar14 = FVar6;
  }
  *(FWeakObjectPtr *)FVar14 = FVar19;
  FVar7 = pFVar9->Identifier;
  if (((this->Identifiers).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FConditions *)(*pcVar8)();
    return pFVar13;
  }
  FVar17 = (this->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<FName>)0x0) {
    FVar17 = (ForElementType<FName>)pTVar3;
  }
  *(FName *)FVar17 = FVar7;
  return this;
}

// FConditions @ 142c96630

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::FConditions(FConditions *this)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::Queries::FConditions::Token,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FName> FVar10;
  ForElementType<FName> FVar11;
  FConditions *pFVar12;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar13;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar14;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 local_res8;
  undefined1 local_48 [4];
  FWeakObjectPtr local_44;
  undefined8 local_3c [2];
  
  pTVar2 = &this->Tokens;
  (this->Columns).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  pTVar3 = &this->Identifiers;
  (this->Columns).ArrayNum = 0;
  piVar4 = &(this->Identifiers).ArrayMax;
  lVar16 = 0x20;
  local_3c[0] = 0;
  piVar5 = &(this->Columns).ArrayMax;
  *piVar5 = 0x20;
  piVar1 = &(this->Tokens).ArrayMax;
  (this->ColumnFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0;
  (this->ColumnFlags).ArrayNum = 0;
  (this->ColumnFlags).ArrayMax = 0x20;
  (this->Tokens).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0;
  (this->Tokens).ArrayNum = 0;
  *piVar1 = 0x40;
  (this->Identifiers).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  *piVar4 = 0x20;
  this->ColumnCount = '\0';
  this->TokenCount = '\0';
  this->bIsCompiled = false;
  (this->Identifiers).ArrayNum = 0;
  if (*piVar4 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,0x20,&pTVar3->AllocatorInstance,0,piVar4);
  }
  lVar17 = 0x20;
  do {
    FVar11 = (this->Identifiers).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FName>)pTVar3;
    if (FVar11 != (ForElementType<FName>)0x0) {
      FVar10 = FVar11;
    }
    if ((ulonglong)FVar10 <= local_3c) {
      if (FVar11 == (ForElementType<FName>)0x0) {
        FVar11 = (ForElementType<FName>)pTVar3;
      }
      if ((local_3c < (undefined8 *)((longlong)FVar11 + (longlong)*piVar4 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FConditions *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (this->Identifiers).ArrayNum;
    if (iVar9 == *piVar4) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->Identifiers).ArrayNum = iVar9 + 1;
    FVar11 = (this->Identifiers).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FName>)pTVar3;
    if (FVar11 != (ForElementType<FName>)0x0) {
      FVar10 = FVar11;
    }
    *(undefined8 *)((longlong)FVar10 + (longlong)iVar9 * 8) = local_3c[0];
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  local_44.ObjectIndex = 0;
  local_44.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_44,(FObjectPtr)&local_res8);
  (this->Columns).ArrayNum = 0;
  if (*piVar5 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,0x20,(ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *)this
               ,0,piVar5);
  }
  do {
    FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar13 = FVar6;
    }
    if ((ulonglong)FVar13 <= &local_44) {
      FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
      if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar13 = FVar6;
      }
      if ((&local_44 < (FWeakObjectPtr *)((longlong)FVar13 + (longlong)*piVar5 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FConditions *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (this->Columns).ArrayNum;
    if (iVar9 == *piVar5) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                        (0x408,(ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                                *)this,piVar5);
    }
    (this->Columns).ArrayNum = iVar9 + 1;
    FVar6 = (this->Columns).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar6 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar13 = FVar6;
    }
    *(FWeakObjectPtr *)((longlong)FVar13 + (longlong)iVar9 * 8) = local_44;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  local_48[0] = 0;
  (this->Tokens).ArrayNum = 0;
  if (*piVar1 == 0x40) {
    lVar16 = 0x40;
  }
  else {
    lVar16 = 0x40;
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
              (1,1,0x40,&pTVar2->AllocatorInstance,0,piVar1);
  }
  do {
    FVar15 = (this->Tokens).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
    if (FVar15 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar14 = FVar15;
    }
    if ((ulonglong)FVar14 <= local_48) {
      if (FVar15 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar15 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
      }
      if ((local_48 < (undefined1 *)((longlong)FVar15 + (longlong)*piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FConditions *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (this->Tokens).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
                        (0x101,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Tokens).ArrayNum = iVar9 + 1;
    FVar15 = (this->Tokens).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar2;
    if (FVar15 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar14 = FVar15;
    }
    *(undefined1 *)((longlong)iVar9 + (longlong)FVar14) = local_48[0];
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return this;
}

// operator= @ 142c9b3c0

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::operator=(FConditions *this,FConditions *param_1)

{
  int iVar1;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar2;
  int *piVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> _Dst_00;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> _Dst_01;
  ForElementType<FName> _Dst_02;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> _Src_00;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> _Src_01;
  ForElementType<FName> _Src_02;
  
  if (this == param_1) {
LAB_142c9b48a:
    if (this != param_1) goto LAB_142c9b4a4;
LAB_142c9b527:
    if (this != param_1) goto LAB_142c9b541;
LAB_142c9b5c4:
    if (this == param_1) goto LAB_142c9b651;
  }
  else {
    FVar2 = (param_1->Columns).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Columns).ArrayMax;
    iVar1 = (param_1->Columns).ArrayNum;
    (this->Columns).ArrayNum = iVar1;
    _Src = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
    if (FVar2 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      _Src = FVar2;
    }
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0x20;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                (8,4,iVar1,*piVar3,
                 (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *)this,iVar1,
                 piVar3);
      FVar2 = (this->Columns).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
      if (FVar2 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        _Dst = FVar2;
      }
      if (iVar1 == 0) goto LAB_142c9b48a;
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar1 << 3);
    }
LAB_142c9b4a4:
    _Src_00 = (param_1->ColumnFlags).AllocatorInstance.SecondaryData;
    piVar3 = &(this->ColumnFlags).ArrayMax;
    iVar1 = (param_1->ColumnFlags).ArrayNum;
    if (_Src_00 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0)
    {
      _Src_00 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
                &param_1->ColumnFlags;
    }
    (this->ColumnFlags).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0x20;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
                (1,1,iVar1,*piVar3,&(this->ColumnFlags).AllocatorInstance,iVar1,piVar3);
      _Dst_00 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
      if (iVar1 == 0) goto LAB_142c9b527;
      if (_Dst_00 ==
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
        _Dst_00 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
                  &this->ColumnFlags;
      }
      memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar1);
    }
LAB_142c9b541:
    _Src_01 = (param_1->Tokens).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Tokens).ArrayMax;
    iVar1 = (param_1->Tokens).ArrayNum;
    if (_Src_01 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      _Src_01 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
                &param_1->Tokens;
    }
    (this->Tokens).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0x40;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
                (1,1,iVar1,*piVar3,&(this->Tokens).AllocatorInstance,iVar1,piVar3);
      _Dst_01 = (this->Tokens).AllocatorInstance.SecondaryData;
      if (iVar1 == 0) goto LAB_142c9b5c4;
      if (_Dst_01 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        _Dst_01 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
                  &this->Tokens;
      }
      memcpy((void *)_Dst_01,(void *)_Src_01,(longlong)iVar1);
    }
  }
  _Src_02 = (param_1->Identifiers).AllocatorInstance.SecondaryData;
  piVar3 = &(this->Identifiers).ArrayMax;
  iVar1 = (param_1->Identifiers).ArrayNum;
  if (_Src_02 == (ForElementType<FName>)0x0) {
    _Src_02 = (ForElementType<FName>)&param_1->Identifiers;
  }
  (this->Identifiers).ArrayNum = iVar1;
  if ((iVar1 == 0) && (*piVar3 == 0)) {
    *piVar3 = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar1,*piVar3,&(this->Identifiers).AllocatorInstance,iVar1,piVar3);
    _Dst_02 = (this->Identifiers).AllocatorInstance.SecondaryData;
    if (iVar1 != 0) {
      if (_Dst_02 == (ForElementType<FName>)0x0) {
        _Dst_02 = (ForElementType<FName>)&this->Identifiers;
      }
      memcpy((void *)_Dst_02,(void *)_Src_02,(longlong)iVar1 << 3);
    }
  }
LAB_142c9b651:
  this->ColumnCount = param_1->ColumnCount;
  this->TokenCount = param_1->TokenCount;
  this->bIsCompiled = param_1->bIsCompiled;
  return this;
}

// operator() @ 142c9c900

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::
VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
::__l2::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UScriptStruct *pUVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  FWeakObjectPtr *pFVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48 [2];
  
  lVar14 = *(longlong *)this;
  uVar16 = (ulonglong)param_1;
  bVar5 = false;
  local_res18 = param_2.WeakPtr;
  if ((*(int *)(lVar14 + 0x138) <= (int)(uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar10 = *(longlong **)((longlong)this + 0x10);
  lVar12 = lVar14 + 0x110;
  if (*(longlong *)(lVar14 + 0x130) != 0) {
    lVar12 = *(longlong *)(lVar14 + 0x130);
  }
  if ((*(byte *)(uVar16 + lVar12) & 1) == 0) {
    uVar11 = 0;
    if (0 < (int)plVar10[1]) {
      lVar14 = 0;
      do {
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        plVar10 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar11 < (int)plVar10[1]) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_50 = *(FWeakObjectPtr *)(lVar14 + *plVar10);
        bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_50,pUVar9);
        if (bVar3) {
          bVar5 = true;
          **(ulonglong **)((longlong)this + 8) =
               **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 8;
      } while ((int)uVar11 < (int)plVar10[1]);
    }
    pFVar13 = (FWeakObjectPtr *)*plVar10;
    pFVar1 = pFVar13 + (int)plVar10[1];
    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
      pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
      local_48[0] = *pFVar13;
      bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_48,pUVar9);
      if (bVar3) {
        **(ulonglong **)((longlong)this + 8) =
             **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        return true;
      }
    }
  }
  else {
    uVar11 = 0;
    if (0 < (int)plVar10[1]) {
      local_res8 = 0;
      uVar15 = 1;
      do {
        lVar14 = *(longlong *)((longlong)this + 0x18);
        if ((((int)uVar11 < 0) || (*(int *)(lVar14 + 0x808) <= (int)uVar11)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(longlong *)(lVar14 + 0x800) != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x800);
        }
        uVar6 = uVar11;
        if ((int)uVar11 < 0) {
          uVar6 = uVar11 + 0x1f;
        }
        if ((*(uint *)(lVar14 + (longlong)((int)uVar6 >> 5) * 4) & uVar15) == 0) {
          pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          plVar10 = *(longlong **)((longlong)this + 0x10);
          uVar6 = 0;
          if ((int)uVar11 < (int)plVar10[1]) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          local_58 = *(FWeakObjectPtr *)(local_res8 + *plVar10);
          bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_58,pUVar9
                            );
LAB_142c9cb2a:
          if (bVar3 != false) {
            bVar5 = true;
            **(ulonglong **)((longlong)this + 8) =
                 **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
          }
        }
        else {
          plVar10 = *(longlong **)((longlong)this + 0x10);
          uVar6 = 0;
          if ((int)uVar11 < (int)plVar10[1]) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          local_res20 = *(FWeakObjectPtr *)(local_res8 + *plVar10);
          pUVar7 = FWeakObjectPtr::Get(&local_res20);
          pUVar8 = FWeakObjectPtr::Get(&local_res18);
          if (pUVar8 != (UObject *)0x0) {
            if ((*(int *)&pUVar7[1].field_0x10 < *(int *)&pUVar8[1].field_0x10) ||
               (*(undefined1 **)
                 (*(longlong *)&pUVar7[1].field_0x8 + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
                != &pUVar8[1].field_0x8)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            goto LAB_142c9cb2a;
          }
        }
        local_res8 = local_res8 + 8;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while ((int)uVar11 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8));
    }
  }
  return bVar5;
}

// operator() @ 142c9ccb0

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::
VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
::__l2::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UScriptStruct *pUVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  FWeakObjectPtr *pFVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48 [2];
  
  lVar14 = *(longlong *)this;
  uVar16 = (ulonglong)param_1;
  bVar5 = false;
  local_res18 = param_2.WeakPtr;
  if ((*(int *)(lVar14 + 0x138) <= (int)(uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar10 = *(longlong **)((longlong)this + 0x10);
  lVar12 = lVar14 + 0x110;
  if (*(longlong *)(lVar14 + 0x130) != 0) {
    lVar12 = *(longlong *)(lVar14 + 0x130);
  }
  if ((*(byte *)(uVar16 + lVar12) & 1) == 0) {
    uVar11 = 0;
    if (0 < (int)plVar10[1]) {
      lVar14 = 0;
      do {
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        plVar10 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar11 < (int)plVar10[1]) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_50 = *(FWeakObjectPtr *)(lVar14 + *plVar10);
        bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_50,pUVar9);
        if (bVar3) {
          bVar5 = true;
          **(ulonglong **)((longlong)this + 8) =
               **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 8;
      } while ((int)uVar11 < (int)plVar10[1]);
    }
    pFVar13 = (FWeakObjectPtr *)*plVar10;
    pFVar1 = pFVar13 + (int)plVar10[1];
    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
      pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
      local_48[0] = *pFVar13;
      bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_48,pUVar9);
      if (bVar3) {
        **(ulonglong **)((longlong)this + 8) =
             **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        return true;
      }
    }
  }
  else {
    uVar11 = 0;
    if (0 < (int)plVar10[1]) {
      local_res8 = 0;
      uVar15 = 1;
      do {
        lVar14 = *(longlong *)((longlong)this + 0x18);
        if ((((int)uVar11 < 0) || (*(int *)(lVar14 + 0x808) <= (int)uVar11)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(longlong *)(lVar14 + 0x800) != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x800);
        }
        uVar6 = uVar11;
        if ((int)uVar11 < 0) {
          uVar6 = uVar11 + 0x1f;
        }
        if ((*(uint *)(lVar14 + (longlong)((int)uVar6 >> 5) * 4) & uVar15) == 0) {
          pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          plVar10 = *(longlong **)((longlong)this + 0x10);
          uVar6 = 0;
          if ((int)uVar11 < (int)plVar10[1]) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          local_58 = *(FWeakObjectPtr *)(local_res8 + *plVar10);
          bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_58,pUVar9
                            );
LAB_142c9ceda:
          if (bVar3 != false) {
            bVar5 = true;
            **(ulonglong **)((longlong)this + 8) =
                 **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
          }
        }
        else {
          plVar10 = *(longlong **)((longlong)this + 0x10);
          uVar6 = 0;
          if ((int)uVar11 < (int)plVar10[1]) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          local_res20 = *(FWeakObjectPtr *)(local_res8 + *plVar10);
          pUVar7 = FWeakObjectPtr::Get(&local_res20);
          pUVar8 = FWeakObjectPtr::Get(&local_res18);
          if (pUVar8 != (UObject *)0x0) {
            if ((*(int *)&pUVar7[1].field_0x10 < *(int *)&pUVar8[1].field_0x10) ||
               (*(undefined1 **)
                 (*(longlong *)&pUVar7[1].field_0x8 + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
                != &pUVar8[1].field_0x8)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            goto LAB_142c9ceda;
          }
        }
        local_res8 = local_res8 + 8;
        uVar11 = uVar11 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while ((int)uVar11 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8));
    }
  }
  return bVar5;
}

// operator() @ 142c9d060

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::
VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_2>_>'
::__l2::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr *pFVar12;
  longlong lVar13;
  FWeakObjectPtr *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48 [2];
  
  lVar13 = *(longlong *)this;
  uVar16 = (ulonglong)param_1;
  bVar4 = false;
  local_res18 = param_2.WeakPtr;
  if ((*(int *)(lVar13 + 0x138) <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  plVar9 = *(longlong **)((longlong)this + 0x10);
  lVar11 = lVar13 + 0x110;
  if (*(longlong *)(lVar13 + 0x130) != 0) {
    lVar11 = *(longlong *)(lVar13 + 0x130);
  }
  if ((*(byte *)(uVar16 + lVar11) & 1) == 0) {
    uVar10 = 0;
    if (0 < (int)plVar9[1]) {
      lVar13 = 0;
      do {
        pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        plVar9 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar10 < (int)plVar9[1]) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_50 = *(FWeakObjectPtr *)(lVar13 + *plVar9);
        bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_50,pUVar8);
        if (bVar2) {
          bVar4 = true;
          **(ulonglong **)((longlong)this + 8) =
               **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        }
        plVar9 = *(longlong **)((longlong)this + 0x10);
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar10 < (int)plVar9[1]);
    }
    pFVar12 = (FWeakObjectPtr *)*plVar9;
    pFVar14 = pFVar12 + (longlong)(int)plVar9[1] * 2;
    for (; pFVar12 != pFVar14; pFVar12 = pFVar12 + 2) {
      pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
      local_48[0] = *pFVar12;
      bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_48,pUVar8);
      if (bVar2) {
        **(ulonglong **)((longlong)this + 8) =
             **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        return true;
      }
    }
  }
  else {
    uVar10 = 0;
    if (0 < (int)plVar9[1]) {
      local_res8 = 0;
      uVar15 = 1;
      do {
        lVar13 = *(longlong *)((longlong)this + 0x18);
        if ((((int)uVar10 < 0) || (*(int *)(lVar13 + 0x808) <= (int)uVar10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(longlong *)(lVar13 + 0x800) != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x800);
        }
        uVar5 = uVar10;
        if ((int)uVar10 < 0) {
          uVar5 = uVar10 + 0x1f;
        }
        if ((*(uint *)(lVar13 + (longlong)((int)uVar5 >> 5) * 4) & uVar15) == 0) {
          pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          plVar9 = *(longlong **)((longlong)this + 0x10);
          uVar5 = 0;
          if ((int)uVar10 < (int)plVar9[1]) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_58 = *(FWeakObjectPtr *)(local_res8 + *plVar9);
          bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_58,pUVar8
                            );
LAB_142c9d28a:
          if (bVar2 != false) {
            bVar4 = true;
            **(ulonglong **)((longlong)this + 8) =
                 **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
          }
        }
        else {
          plVar9 = *(longlong **)((longlong)this + 0x10);
          uVar5 = 0;
          if ((int)uVar10 < (int)plVar9[1]) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_res20 = *(FWeakObjectPtr *)(local_res8 + *plVar9);
          pUVar6 = FWeakObjectPtr::Get(&local_res20);
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          if (pUVar7 != (UObject *)0x0) {
            if ((*(int *)&pUVar6[1].field_0x10 < *(int *)&pUVar7[1].field_0x10) ||
               (*(undefined1 **)
                 (*(longlong *)&pUVar6[1].field_0x8 + (longlong)*(int *)&pUVar7[1].field_0x10 * 8)
                != &pUVar7[1].field_0x8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            goto LAB_142c9d28a;
          }
        }
        local_res8 = local_res8 + 0x10;
        uVar10 = uVar10 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while ((int)uVar10 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8));
    }
  }
  return bVar4;
}

// operator() @ 142c9d410

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::
VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
::__l2::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  FWeakObjectPtr *pFVar12;
  longlong lVar13;
  FWeakObjectPtr *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48 [2];
  
  lVar13 = *(longlong *)this;
  uVar16 = (ulonglong)param_1;
  bVar4 = false;
  local_res18 = param_2.WeakPtr;
  if ((*(int *)(lVar13 + 0x138) <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  plVar9 = *(longlong **)((longlong)this + 0x10);
  lVar11 = lVar13 + 0x110;
  if (*(longlong *)(lVar13 + 0x130) != 0) {
    lVar11 = *(longlong *)(lVar13 + 0x130);
  }
  if ((*(byte *)(uVar16 + lVar11) & 1) == 0) {
    uVar10 = 0;
    if (0 < (int)plVar9[1]) {
      lVar13 = 0;
      do {
        pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
        plVar9 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar10 < (int)plVar9[1]) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_50 = *(FWeakObjectPtr *)(lVar13 + *plVar9);
        bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_50,pUVar8);
        if (bVar2) {
          bVar4 = true;
          **(ulonglong **)((longlong)this + 8) =
               **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        }
        plVar9 = *(longlong **)((longlong)this + 0x10);
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar10 < (int)plVar9[1]);
    }
    pFVar12 = (FWeakObjectPtr *)*plVar9;
    pFVar14 = pFVar12 + (longlong)(int)plVar9[1] * 2;
    for (; pFVar12 != pFVar14; pFVar12 = pFVar12 + 2) {
      pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
      local_48[0] = *pFVar12;
      bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_48,pUVar8);
      if (bVar2) {
        **(ulonglong **)((longlong)this + 8) =
             **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
        return true;
      }
    }
  }
  else {
    uVar10 = 0;
    if (0 < (int)plVar9[1]) {
      local_res8 = 0;
      uVar15 = 1;
      do {
        lVar13 = *(longlong *)((longlong)this + 0x18);
        if ((((int)uVar10 < 0) || (*(int *)(lVar13 + 0x808) <= (int)uVar10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(longlong *)(lVar13 + 0x800) != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x800);
        }
        uVar5 = uVar10;
        if ((int)uVar10 < 0) {
          uVar5 = uVar10 + 0x1f;
        }
        if ((*(uint *)(lVar13 + (longlong)((int)uVar5 >> 5) * 4) & uVar15) == 0) {
          pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res18);
          plVar9 = *(longlong **)((longlong)this + 0x10);
          uVar5 = 0;
          if ((int)uVar10 < (int)plVar9[1]) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_58 = *(FWeakObjectPtr *)(local_res8 + *plVar9);
          bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_58,pUVar8
                            );
LAB_142c9d63a:
          if (bVar2 != false) {
            bVar4 = true;
            **(ulonglong **)((longlong)this + 8) =
                 **(ulonglong **)((longlong)this + 8) | 1L << (uVar16 & 0x3f);
          }
        }
        else {
          plVar9 = *(longlong **)((longlong)this + 0x10);
          uVar5 = 0;
          if ((int)uVar10 < (int)plVar9[1]) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          local_res20 = *(FWeakObjectPtr *)(local_res8 + *plVar9);
          pUVar6 = FWeakObjectPtr::Get(&local_res20);
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          if (pUVar7 != (UObject *)0x0) {
            if ((*(int *)&pUVar6[1].field_0x10 < *(int *)&pUVar7[1].field_0x10) ||
               (*(undefined1 **)
                 (*(longlong *)&pUVar6[1].field_0x8 + (longlong)*(int *)&pUVar7[1].field_0x10 * 8)
                != &pUVar7[1].field_0x8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            goto LAB_142c9d63a;
          }
        }
        local_res8 = local_res8 + 0x10;
        uVar10 = uVar10 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while ((int)uVar10 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8));
    }
  }
  return bVar4;
}

// operator() @ 142c9f410

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  int iVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  byte local_res10;
  FWeakObjectPtr local_res18;
  
  local_res10 = param_1;
  local_res18 = param_2.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(&local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar7 = 0;
  uVar8 = *(uint *)(plVar2 + 1);
  lVar3 = *plVar2;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      local_res8 = *(FWeakObjectPtr *)(lVar3 + (longlong)iVar1 * 8);
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar6 < pUVar5) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      param_1 = local_res10;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (iVar7 < (int)plVar2[1]) {
    local_res8 = *(FWeakObjectPtr *)(*plVar2 + (longlong)iVar7 * 8);
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    if ((pUVar6 <= pUVar5) && (iVar7 != -1)) {
      **(ulonglong **)this = **(ulonglong **)this | 1L << ((ulonglong)param_1 & 0x3f);
      return true;
    }
  }
  return false;
}

// operator() @ 142c9f510

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  int iVar7;
  uint uVar8;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = param_2.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar7 = 0;
  uVar8 = *(uint *)(plVar2 + 1);
  lVar3 = *plVar2;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)iVar1 * 0x10 + lVar3));
      if (pUVar6 < pUVar5) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar7 < (int)plVar2[1]) &&
      (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)iVar7 * 0x10 + *plVar2)),
      pUVar6 <= pUVar5)) && (iVar7 != -1)) {
    **(ulonglong **)this = **(ulonglong **)this | 1L << ((ulonglong)param_1 & 0x3f);
    return true;
  }
  return false;
}

// operator() @ 142c9f5f0

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  int iVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  
  local_res18 = param_2.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(&local_res18);
  plVar2 = *(longlong **)this;
  iVar7 = 0;
  uVar8 = *(uint *)(plVar2 + 1);
  lVar3 = *plVar2;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      local_res8 = *(FWeakObjectPtr *)(lVar3 + (longlong)iVar1 * 8);
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar6 < pUVar5) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (iVar7 < (int)plVar2[1]) {
    local_res8 = *(FWeakObjectPtr *)(*plVar2 + (longlong)iVar7 * 8);
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    if (pUVar6 <= pUVar5) goto LAB_142c9f6ae;
  }
  iVar7 = -1;
LAB_142c9f6ae:
  return iVar7 != -1;
}

// operator() @ 142c9f8c0

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar1;
  longlong lVar2;
  bool bVar3;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res18 [2];
  
  pTVar1 = (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)
           **(longlong **)((longlong)this + 8);
  lVar2 = (*(longlong **)((longlong)this + 8))[1];
  this_00 = pTVar1;
  local_res18[0] = param_2.WeakPtr;
  while( true ) {
    if (this_00 == pTVar1 + (int)lVar2) {
      return false;
    }
    bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      (this_00,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_res18);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  if ((int)((longlong)this_00 - (longlong)pTVar1 >> 3) == -1) {
    return false;
  }
  **(ulonglong **)this = **(ulonglong **)this | 1L << ((ulonglong)param_1 & 0x3f);
  return true;
}

// operator() @ 142c9f960

bool __thiscall
`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>::operator()
          (void *this,uchar param_1,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  bool bVar1;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar2;
  FWeakObjectPtr local_res18;
  
  this_00 = (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)
            **(longlong **)((longlong)this + 8);
  pTVar2 = this_00 + (longlong)(int)(*(longlong **)((longlong)this + 8))[1] * 2;
  local_res18 = param_2.WeakPtr;
  while( true ) {
    if (this_00 == pTVar2) {
      return false;
    }
    bVar1 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      (this_00,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_res18);
    if (bVar1) break;
    this_00 = this_00 + 2;
  }
  **(ulonglong **)this = **(ulonglong **)this | 1L << ((ulonglong)param_1 & 0x3f);
  return true;
}

// AppendName @ 142ca5da0

void __thiscall
UE::Editor::DataStorage::Queries::FConditions::AppendName
          (FConditions *this,FString *param_1,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_2)

{
  ::FString::AppendChars(param_1,L"<Unavailable>",0xd);
  return;
}

// AppendQuery @ 142ca5dc0

void __cdecl
UE::Editor::DataStorage::Queries::FConditions::AppendQuery
          (FConditions *param_1,FConditions *param_2)

{
  undefined1 uVar1;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar2;
  undefined8 uVar3;
  ForElementType<FName> FVar4;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  uint uVar11;
  byte bVar12;
  
  if ((0x1f < (ulonglong)param_1->ColumnCount + (ulonglong)param_2->ColumnCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Target.ColumnCount + Source.ColumnCount < MaxColumnCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0x252,L"Too many columns in the query."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar12 = 0;
  if (param_2->ColumnCount != '\0') {
    do {
      if (((param_2->Columns).ArrayNum <= (int)(uint)bVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = (param_2->Columns).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_2;
      if (FVar2 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar8 = FVar2;
      }
      uVar11 = (uint)param_1->ColumnCount + (uint)bVar12;
      uVar3 = *(undefined8 *)((longlong)FVar8 + (ulonglong)bVar12 * 8);
      if (((param_1->Columns).ArrayNum <= (int)uVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = (param_1->Columns).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
      if (FVar2 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar8 = FVar2;
      }
      *(undefined8 *)((longlong)FVar8 + (ulonglong)uVar11 * 8) = uVar3;
      if (((param_2->Identifiers).ArrayNum <= (int)(uint)bVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_2->Identifiers).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FName>)&param_2->Identifiers;
      if (FVar4 != (ForElementType<FName>)0x0) {
        FVar9 = FVar4;
      }
      uVar3 = *(undefined8 *)((longlong)FVar9 + (ulonglong)bVar12 * 8);
      uVar11 = (uint)bVar12 + (uint)param_1->ColumnCount;
      if (((param_1->Identifiers).ArrayNum <= (int)uVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (param_1->Identifiers).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FName>)&param_1->Identifiers;
      if (FVar4 != (ForElementType<FName>)0x0) {
        FVar9 = FVar4;
      }
      bVar12 = bVar12 + 1;
      *(undefined8 *)((longlong)FVar9 + (ulonglong)uVar11 * 8) = uVar3;
    } while (bVar12 < param_2->ColumnCount);
  }
  if ((0x3f < (ulonglong)param_1->TokenCount + (ulonglong)param_2->TokenCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Target.TokenCount + Source.TokenCount < MaxTokenCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0x259,L"Too many operations in the query. Try simplifying your query."),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar12 = 0;
  if (param_2->TokenCount != '\0') {
    do {
      if (((param_2->Tokens).ArrayNum <= (int)(uint)bVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (param_2->Tokens).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
               &param_2->Tokens;
      if (FVar5 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar10 = FVar5;
      }
      uVar1 = *(undefined1 *)((ulonglong)bVar12 + (longlong)FVar10);
      uVar11 = (uint)bVar12 + (uint)param_1->TokenCount;
      if (((param_1->Tokens).ArrayNum <= (int)uVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (param_1->Tokens).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
               &param_1->Tokens;
      if (FVar5 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar10 = FVar5;
      }
      bVar12 = bVar12 + 1;
      *(undefined1 *)((ulonglong)uVar11 + (longlong)FVar10) = uVar1;
    } while (bVar12 < param_2->TokenCount);
  }
  param_1->ColumnCount = param_1->ColumnCount + param_2->ColumnCount;
  param_1->TokenCount = param_1->TokenCount + param_2->TokenCount;
  return;
}

// AppendToString @ 142ca6120

void __thiscall
UE::Editor::DataStorage::Queries::FConditions::AppendToString(FConditions *this,FString *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar4;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar9;
  int iVar10;
  ulonglong uVar8;
  
  if (this->bIsCompiled == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsCompiled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                       ,0x2b,L"Query Conditions must call Compile() before you can use them");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->TokenCount != '\0') {
    ::FString::AppendChars(param_1,"{ ",2);
    uVar9 = 0;
    uVar8 = 0;
    if ((this->Tokens).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4 = (this->Tokens).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
    }
    if (*(char *)FVar4 != '\x03') {
      uVar9 = 1;
      if ((this->Columns).ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::FString::AppendChars(param_1,L"<Unavailable>",0xd);
    }
    if (this->TokenCount != '\0') {
      do {
        if ((this->Tokens).ArrayNum <= (int)uVar8) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVar4 = (this->Tokens).AllocatorInstance.SecondaryData;
        FVar5 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
        if (FVar4 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
          FVar5 = FVar4;
        }
        cVar1 = *(char *)(uVar8 + (longlong)FVar5);
        if (cVar1 == '\x01') {
          pcVar6 = " && ";
LAB_142ca6319:
          iVar10 = 4;
LAB_142ca631f:
          ::FString::AppendChars(param_1,pcVar6,iVar10);
          bVar3 = EntersScopeNext(this,(uchar)uVar8);
          if (!bVar3) {
            if ((this->Columns).ArrayNum <= (int)uVar9) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar9 = (uint)(byte)((char)uVar9 + 1);
            ::FString::AppendChars(param_1,L"<Unavailable>",0xd);
          }
        }
        else {
          if (cVar1 == '\x02') {
            pcVar6 = " || ";
            goto LAB_142ca6319;
          }
          if (cVar1 == '\x03') {
            iVar10 = 2;
            pcVar6 = "( ";
            goto LAB_142ca631f;
          }
          if (cVar1 == '\x04') {
            ::FString::AppendChars(param_1," )",2);
          }
          else {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                               ,0x53,L"Invalid query token");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        bVar7 = (uchar)uVar8 + 1;
        uVar8 = (ulonglong)bVar7;
      } while (bVar7 < this->TokenCount);
    }
    ::FString::AppendChars(param_1," }",2);
  }
  return;
}

// Compile @ 142ca7b20

FConditions * __thiscall
UE::Editor::DataStorage::Queries::FConditions::Compile
          (FConditions *this,IQueryConditionCompileContext *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  ForElementType<FName> FVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FConditions *pFVar8;
  UObject *pUVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar10;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar11;
  ForElementType<FName> FVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  UObject *local_res8;
  UObject *local_38;
  undefined8 local_30;
  
  if (this->bIsCompiled != false) {
    return this;
  }
  pTVar2 = &this->ColumnFlags;
  iVar15 = (this->ColumnFlags).ArrayNum;
  bVar14 = this->ColumnCount;
  piVar1 = &(this->ColumnFlags).ArrayNum;
  uVar13 = (uint)bVar14;
  if (iVar15 < (int)(uint)bVar14) {
    iVar7 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
                      (1,1,uVar13 - iVar15,&pTVar2->AllocatorInstance,piVar1,
                       &(this->ColumnFlags).ArrayMax);
    FVar10 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0)
    {
      FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)pTVar2;
    }
    memset((void *)((longlong)FVar10 + (longlong)iVar7),0,(longlong)(int)(uVar13 - iVar15));
  }
  else if ((int)(uint)bVar14 < iVar15) {
    iVar15 = iVar15 - uVar13;
    if (iVar15 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FConditions *)(*pcVar5)();
        return pFVar8;
      }
    }
    else if (iVar15 == 0) goto LAB_142ca7c33;
    FVar10 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0)
    {
      FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)pTVar2;
    }
    iVar7 = (*piVar1 - iVar15) - uVar13;
    if (iVar7 != 0) {
      memmove((void *)((longlong)FVar10 + (ulonglong)bVar14),
              (void *)((longlong)iVar15 + (longlong)((longlong)FVar10 + (ulonglong)bVar14)),
              (longlong)iVar7);
    }
    *piVar1 = *piVar1 - iVar15;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
              (1,1,&pTVar2->AllocatorInstance,*piVar1,&(this->ColumnFlags).ArrayMax);
  }
LAB_142ca7c33:
  bVar14 = 0;
  if (this->ColumnCount != '\0') {
    do {
      if (((this->Identifiers).ArrayNum <= (int)(uint)bVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FConditions *)(*pcVar5)();
        return pFVar8;
      }
      FVar3 = (this->Identifiers).AllocatorInstance.SecondaryData;
      uVar16 = (ulonglong)bVar14;
      FVar12 = (ForElementType<FName>)&this->Identifiers;
      if (FVar3 != (ForElementType<FName>)0x0) {
        FVar12 = FVar3;
      }
      if (*(longlong *)((longlong)FVar12 + uVar16 * 8) != 0) {
        pcVar5 = *(code **)((longlong)*param_1 + 8);
        if (((this->Columns).ArrayNum <= (int)(uint)bVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FConditions *)(*pcVar5)();
          return pFVar8;
        }
        FVar4 = (this->Columns).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
        if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar11 = FVar4;
        }
        local_38 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar11 + uVar16 * 8));
        if (((this->Identifiers).ArrayNum <= (int)(uint)bVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FConditions *)(*pcVar5)();
          return pFVar8;
        }
        FVar3 = (this->Identifiers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FName>)&this->Identifiers;
        if (FVar3 != (ForElementType<FName>)0x0) {
          FVar12 = FVar3;
        }
        local_30 = *(undefined8 *)((longlong)FVar12 + uVar16 * 8);
        pUVar9 = (UObject *)(*pcVar5)(param_1,&local_38);
        if (((this->Columns).ArrayNum <= (int)(uint)bVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FConditions *)(*pcVar5)();
          return pFVar8;
        }
        FVar4 = (this->Columns).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
        if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar11 = FVar4;
        }
        local_res8 = pUVar9;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)((longlong)FVar11 + uVar16 * 8),(FObjectPtr)&local_res8);
      }
      bVar14 = bVar14 + 1;
    } while (bVar14 < this->ColumnCount);
  }
  this->bIsCompiled = true;
  return this;
}

// Contains @ 142ca85e0

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Contains
          (FConditions *this,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_1,
          TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  
  iVar1 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  local_res10 = param_1.WeakPtr;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_res10,
                       (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)pFVar3);
    if (bVar2) {
      return true;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return false;
}

// ConvertColumnBitToArray @ 142ca88f0

void __thiscall
UE::Editor::DataStorage::Queries::FConditions::ConvertColumnBitToArray
          (FConditions *this,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,ulong64 param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar10;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar9;
  
  if (param_2 != 0) {
    uVar7 = 0;
    lVar10 = 0;
    do {
      if ((param_2 & 1) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Columns).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
        pFVar2 = (param_1->AllocatorInstance).Data;
        FVar9 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
        if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar9 = FVar1;
        }
        pFVar8 = (FScriptContainerElement *)((longlong)FVar9 + lVar10);
        if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             *(undefined8 *)pFVar8;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
      param_2 = param_2 >> 1;
    } while (param_2 != 0);
  }
  return;
}

// EntersScope @ 142cab800

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::EntersScope(FConditions *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar3;
  
  if ((this->Tokens).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  FVar3 = (this->Tokens).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FVar3 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
  }
  return *(char *)((longlong)FVar3 + (ulonglong)param_1) == '\x03';
}

// EntersScopeNext @ 142cab890

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::EntersScopeNext(FConditions *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar4;
  
  if ((int)(uint)param_1 < (int)(this->TokenCount - 1)) {
    if ((this->Tokens).ArrayNum <= (int)(param_1 + 1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FVar4 = (this->Tokens).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
    }
    if (*(char *)((longlong)FVar4 + (ulonglong)(param_1 + 1)) == '\x03') {
      return true;
    }
  }
  return false;
}

// GetColumns @ 142cace20

TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> * __thiscall
UE::Editor::DataStorage::Queries::FConditions::GetColumns
          (FConditions *this,
          TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int>
          *__return_storage_ptr__)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *pTVar4;
  
  if (this->bIsCompiled == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsCompiled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                       ,0x166,L"Query Conditions must call Compile() before you can use them");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->ArrayNum = (uint)this->ColumnCount;
  if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    this = (FConditions *)FVar1;
  }
  __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)this;
  return __return_storage_ptr__;
}

// IsCompiled @ 142caf9f0

bool __thiscall UE::Editor::DataStorage::Queries::FConditions::IsCompiled(FConditions *this)

{
  return this->bIsCompiled;
}

// IsEmpty @ 142cafa90

bool __thiscall UE::Editor::DataStorage::Queries::FConditions::IsEmpty(FConditions *this)

{
  return this->ColumnCount == '\0';
}

// MinimumColumnMatchRequired @ 142cb1290

uchar __thiscall
UE::Editor::DataStorage::Queries::FConditions::MinimumColumnMatchRequired(FConditions *this)

{
  uchar uVar1;
  uchar local_res8 [32];
  
  if (this->TokenCount != '\0') {
    local_res8[0] = '\0';
    uVar1 = MinimumColumnMatchRequiredRange(this,local_res8);
    return uVar1;
  }
  return this->ColumnCount == '\x01';
}

// MinimumColumnMatchRequiredRange @ 142cb12d0

uchar __thiscall
UE::Editor::DataStorage::Queries::FConditions::MinimumColumnMatchRequiredRange
          (FConditions *this,uchar *param_1)

{
  char cVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  uchar uVar6;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar7;
  byte bVar8;
  int iVar9;
  wchar_t *pwVar10;
  
  bVar4 = EntersScope(this,*param_1);
  if (bVar4) {
    *param_1 = *param_1 + '\x01';
    bVar5 = MinimumColumnMatchRequiredRange(this,param_1);
  }
  else {
    bVar5 = 1;
  }
  bVar8 = *param_1;
  if (bVar8 < this->TokenCount) {
    do {
      if (((this->Tokens).ArrayNum <= (int)(uint)bVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      FVar2 = (this->Tokens).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&this->Tokens;
      if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar7 = FVar2;
      }
      cVar1 = *(char *)((ulonglong)bVar8 + (longlong)FVar7);
      if (cVar1 == '\x01') {
        bVar4 = EntersScopeNext(this,*param_1);
        if (bVar4) {
          *param_1 = *param_1 + '\x02';
          uVar6 = MinimumColumnMatchRequiredRange(this,param_1);
          bVar8 = bVar5 + uVar6;
        }
        else {
          bVar8 = bVar5 + 1;
        }
      }
      else {
        bVar8 = bVar5;
        if (cVar1 == '\x02') {
          bVar4 = EntersScopeNext(this,*param_1);
          if (bVar4) {
            *param_1 = *param_1 + '\x02';
            bVar8 = MinimumColumnMatchRequiredRange(this,param_1);
            if (bVar5 < bVar8) {
              bVar8 = bVar5;
            }
          }
        }
        else {
          if (cVar1 == '\x03') {
            pwVar10 = 
            L"The scope open in a query should be called during processing as it should be captured by an earlier statement."
            ;
            iVar9 = 0x237;
          }
          else {
            if (cVar1 == '\x04') {
              *param_1 = *param_1 + '\x01';
              return bVar5;
            }
            pwVar10 = L"Encountered an unknown query token.";
            iVar9 = 0x23d;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                             ,iVar9,pwVar10);
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return uVar6;
          }
        }
      }
      bVar5 = bVar8;
      bVar8 = *param_1 + 1;
      *param_1 = bVar8;
    } while (bVar8 < this->TokenCount);
  }
  return bVar5;
}

// UsesDynamicTemplates @ 142cc1640

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::UsesDynamicTemplates(FConditions *this)

{
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar1;
  int iVar2;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->ColumnFlags).AllocatorInstance.SecondaryData;
  iVar2 = (this->ColumnFlags).ArrayNum;
  if (FVar3 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FVar3 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
            &this->ColumnFlags;
  }
  FVar1 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
          ((longlong)FVar3 + (longlong)iVar2);
  while( true ) {
    if ((this->ColumnFlags).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar1) break;
    if ((*(byte *)FVar3 & 1) != 0) {
      return true;
    }
    FVar3 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
            ((longlong)FVar3 + 1);
  }
  return false;
}

// Verify @ 142cc16b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int>
                   *param_2,bool param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_948 [32];
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  longlong local_918;
  longlong local_910;
  undefined8 local_908;
  undefined1 local_8f8 [8];
  ulonglong local_8f0;
  ulonglong *local_8e8;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *local_8e0;
  code *local_8d8;
  ulonglong **local_8d0;
  ulonglong *local_8c8;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *local_8c0;
  code *local_8b8;
  ulonglong **local_8b0;
  code *local_8a8;
  FConditions **local_8a0;
  FConditions *local_898;
  ulonglong *local_890;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> **local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *local_868;
  undefined8 uStack_860;
  undefined1 local_858 [2048];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_948;
  if ((this->bIsCompiled == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsCompiled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0x116,L"Query Conditions must call Compile() before you can use them"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_8f0 = 0;
  bVar4 = UsesDynamicTemplates(this);
  if (bVar4) {
    local_868 = param_2->DataPtr;
    uStack_860 = *(undefined8 *)&param_2->ArrayNum;
    local_890 = &local_8f0;
    local_888 = &local_868;
    local_880 = local_858;
    local_878 = local_8f8;
    local_8a0 = &local_898;
    local_8a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x4000;
    local_898 = this;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8a8);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (param_3) {
    local_8d0 = &local_8e8;
    local_8d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8e8 = &local_8f0;
    local_8e0 = param_2;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8d8);
  }
  else {
    local_8b0 = &local_8c8;
    local_8b8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8c8 = &local_8f0;
    local_8c0 = param_2;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8b8);
  }
  if ((bVar4 != false) && (uVar10 = 0, local_8f0 != 0)) {
    lVar11 = 0;
    uVar9 = local_8f0;
    do {
      if ((uVar9 & 1) != 0) {
        iVar8 = (this->Columns).ArrayNum;
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_928 = (FScriptContainerElement *)(longlong)(int)uVar10;
          local_920 = (FScriptContainerElement *)(longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
        pFVar2 = (param_1->AllocatorInstance).Data;
        FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
        if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar13 = FVar1;
        }
        pFVar12 = (FScriptContainerElement *)((longlong)FVar13 + lVar11);
        if ((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
          local_910 = (longlong)param_1->ArrayNum;
          local_908 = 8;
          local_928 = pFVar12;
          local_920 = pFVar2;
          local_918 = (longlong)param_1->ArrayMax;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar12;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  return bVar4;
}

// Verify @ 142cc1990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> *param_2,
          bool param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_948 [32];
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  longlong local_918;
  longlong local_910;
  undefined8 local_908;
  undefined1 local_8f8 [8];
  ulonglong local_8f0;
  ulonglong *local_8e8;
  TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> *local_8e0;
  code *local_8d8;
  ulonglong **local_8d0;
  ulonglong *local_8c8;
  TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> *local_8c0;
  code *local_8b8;
  ulonglong **local_8b0;
  code *local_8a8;
  FConditions **local_8a0;
  FConditions *local_898;
  ulonglong *local_890;
  FColumnBase **local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  FColumnBase *local_868;
  undefined8 uStack_860;
  undefined1 local_858 [2048];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_948;
  if ((this->bIsCompiled == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsCompiled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0xc2,L"Query Conditions must call Compile() before you can use them"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_8f0 = 0;
  bVar4 = UsesDynamicTemplates(this);
  if (bVar4) {
    local_868 = param_2->DataPtr;
    uStack_860 = *(undefined8 *)&param_2->ArrayNum;
    local_890 = &local_8f0;
    local_888 = &local_868;
    local_880 = local_858;
    local_878 = local_8f8;
    local_8a0 = &local_898;
    local_8a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x4000;
    local_898 = this;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8a8);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (param_3) {
    local_8d0 = &local_8e8;
    local_8d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8e8 = &local_8f0;
    local_8e0 = param_2;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8d8);
  }
  else {
    local_8b0 = &local_8c8;
    local_8b8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8c8 = &local_8f0;
    local_8c0 = param_2;
    bVar4 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_8b8);
  }
  if ((bVar4 != false) && (uVar10 = 0, local_8f0 != 0)) {
    lVar11 = 0;
    uVar9 = local_8f0;
    do {
      if ((uVar9 & 1) != 0) {
        iVar8 = (this->Columns).ArrayNum;
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_928 = (FScriptContainerElement *)(longlong)(int)uVar10;
          local_920 = (FScriptContainerElement *)(longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
        pFVar2 = (param_1->AllocatorInstance).Data;
        FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
        if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar13 = FVar1;
        }
        pFVar12 = (FScriptContainerElement *)((longlong)FVar13 + lVar11);
        if ((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
          local_910 = (longlong)param_1->ArrayNum;
          local_908 = 8;
          local_928 = pFVar12;
          local_920 = pFVar2;
          local_918 = (longlong)param_1->ArrayMax;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar12;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  return bVar4;
}

// Verify @ 142cc1c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_8d8 [32];
  undefined1 local_8b8 [8];
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *local_8b0;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> *local_8a8;
  undefined8 local_8a0;
  code *local_898;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> **local_890;
  code *local_888;
  TArrayView<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_,int> **local_880;
  code *local_878;
  FConditions **local_870;
  FConditions *local_868;
  undefined8 *local_860;
  undefined8 *local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *local_838;
  undefined8 uStack_830;
  undefined1 local_828 [2048];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_8d8;
  if ((this->bIsCompiled == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsCompiled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0xf3,L"Query Conditions must call Compile() before you can use them"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = UsesDynamicTemplates(this);
  if (bVar2) {
    local_838 = param_1->DataPtr;
    uStack_830 = *(undefined8 *)&param_1->ArrayNum;
    local_860 = &local_8a0;
    local_8a0 = 0;
    local_858 = &local_838;
    local_850 = local_828;
    local_848 = local_8b8;
    local_870 = &local_868;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_878 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_1c = 0x4000;
    local_868 = this;
    bVar2 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_878);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (param_2) {
    local_890 = &local_8b0;
    local_898 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8b0 = param_1;
    bVar2 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_898);
  }
  else {
    local_880 = &local_8a8;
    local_888 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_8a8 = param_1;
    bVar2 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_888);
  }
  return bVar2;
}

// Verify @ 142cc1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_8b8 [32];
  undefined1 local_898 [8];
  TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> *local_890;
  undefined8 local_888;
  code *local_880;
  TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> **local_878;
  code *local_870;
  FConditions **local_868;
  FConditions *local_860;
  undefined8 *local_858;
  undefined8 *local_850;
  undefined1 *local_848;
  undefined1 *local_840;
  FColumnBase *local_838;
  undefined8 uStack_830;
  undefined1 local_828 [2048];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_8b8;
  if ((this->bIsCompiled == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsCompiled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                         ,0xa2,L"Query Conditions must call Compile() before you can use them"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = UsesDynamicTemplates(this);
  if (bVar2) {
    local_838 = param_1->DataPtr;
    uStack_830 = *(undefined8 *)&param_1->ArrayNum;
    local_858 = &local_888;
    local_888 = 0;
    local_850 = &local_838;
    local_848 = local_828;
    local_840 = local_898;
    local_868 = &local_860;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_870 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_2>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_1c = 0x4000;
    local_860 = this;
    bVar2 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_870);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    local_878 = &local_890;
    local_880 = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                ::Call;
    local_890 = param_1;
    bVar2 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                  *)&local_880);
  }
  return bVar2;
}

// Verify @ 142cc1f60

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
  local_18;
  
  if (this->bIsCompiled == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsCompiled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                       ,0x14e,L"Query Conditions must call Compile() before you can use them");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  bVar2 = VerifyBootstrap(this,&local_18);
  return bVar2;
}

// Verify @ 142cc1fd0

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::Verify
          (FConditions *this,
          TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  code *local_20;
  TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  **local_18;
  
  if (this->bIsCompiled == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsCompiled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                       ,0x143,L"Query Conditions must call Compile() before you can use them");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_18 = &local_28;
  local_20 = Core::Private::Function::
             TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
             ::Call;
  local_28 = param_1;
  bVar3 = VerifyBootstrap(this,(TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
                                *)&local_20);
  param_1->HashSize = 0;
  FVar1 = (param_1->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return bVar3;
}

// VerifyBootstrap @ 142cc2070

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::VerifyBootstrap
          (FConditions *this,
          TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
          *param_1)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uchar local_res8 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_28;
  TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
  local_20;
  
  if (this->TokenCount != '\0') {
    local_20._0_8_ = *(undefined8 *)param_1;
    local_20._8_8_ = *(undefined8 *)&param_1->field_0x8;
    local_res18[0] = '\0';
    local_res8[0] = '\0';
    bVar3 = VerifyRange(this,local_res18,local_res8,&local_20);
    return bVar3;
  }
  if (this->ColumnCount == '\x01') {
    if ((this->Columns).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FVar1 = (this->Columns).AllocatorInstance.SecondaryData;
    local_res20[0] = 0;
    if (FVar1 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      this = (FConditions *)FVar1;
    }
    local_28 = *(undefined8 *)this;
    uVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res20,&local_28);
    return (bool)uVar4;
  }
  return true;
}

// VerifyRange @ 142cc2160

bool __thiscall
UE::Editor::DataStorage::Queries::FConditions::VerifyRange
          (FConditions *this,uchar *param_1,uchar *param_2,
          TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
          *param_3)

{
  TArray<UE::Editor::DataStorage::Queries::FConditions::Token,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  wchar_t *pwVar14;
  uchar local_res8 [8];
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
  local_68;
  TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
  local_58;
  TFunctionRef<bool___cdecl(unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)>
  local_48;
  
  bVar5 = EntersScope(this,*param_1);
  if (bVar5) {
    local_68._0_8_ = *(undefined8 *)param_3;
    local_68._8_8_ = *(undefined8 *)&param_3->field_0x8;
    *param_1 = *param_1 + '\x01';
    cVar6 = VerifyRange(this,param_1,param_2,&local_68);
  }
  else {
    bVar11 = *param_2;
    if (((this->Columns).ArrayNum <= (int)(uint)bVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    FVar3 = (this->Columns).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
    if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar10 = FVar3;
    }
    local_res8[0] = *param_2;
    local_res20 = *(undefined8 *)((longlong)FVar10 + (ulonglong)bVar11 * 8);
    cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res8,&local_res20);
    *param_2 = *param_2 + '\x01';
  }
  bVar11 = *param_1;
  if (bVar11 < this->TokenCount) {
    pTVar1 = &this->Tokens;
    do {
      if (((this->Tokens).ArrayNum <= (int)(uint)bVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar2 = (this->Tokens).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
      if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FVar9 = FVar2;
      }
      bVar12 = *param_1 + 1;
      cVar8 = *(char *)((ulonglong)bVar11 + (longlong)FVar9);
      *param_1 = bVar12;
      if (cVar8 == '\x01') {
        if (((this->Tokens).ArrayNum <= (int)(uint)bVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FVar2 = (this->Tokens).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
        if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
          FVar9 = FVar2;
        }
        if (*(char *)((ulonglong)bVar12 + (longlong)FVar9) == '\x03') {
          local_48._0_8_ = *(undefined8 *)param_3;
          local_48._8_8_ = *(undefined8 *)&param_3->field_0x8;
          *param_1 = *param_1 + '\x01';
          bVar5 = VerifyRange(this,param_1,param_2,&local_48);
          if ((!bVar5) || (cVar6 == '\0')) goto LAB_142cc23b1;
LAB_142cc2500:
          cVar6 = '\x01';
        }
        else {
          bVar11 = *param_2;
          if (((this->Columns).ArrayNum <= (int)(uint)bVar11) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar3 = (this->Columns).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar10 = FVar3;
          }
          local_res18[0] = *param_2;
          local_70 = *(undefined8 *)((longlong)FVar10 + (ulonglong)bVar11 * 8);
          cVar8 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res18,&local_70);
          if ((cVar8 == '\0') || (cVar6 == '\0')) goto LAB_142cc2442;
LAB_142cc2591:
          cVar6 = '\x01';
LAB_142cc2444:
          *param_2 = *param_2 + '\x01';
        }
      }
      else if (cVar8 == '\x02') {
        if (((this->Tokens).ArrayNum <= (int)(uint)bVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FVar2 = (this->Tokens).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
        if (FVar2 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
          FVar9 = FVar2;
        }
        if (*(char *)((ulonglong)bVar12 + (longlong)FVar9) != '\x03') {
          bVar11 = *param_2;
          if (((this->Columns).ArrayNum <= (int)(uint)bVar11) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar3 = (this->Columns).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)this;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar10 = FVar3;
          }
          local_res10[0] = *param_2;
          local_78 = *(undefined8 *)((longlong)FVar10 + (ulonglong)bVar11 * 8);
          cVar8 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res10,&local_78);
          if ((cVar8 != '\0') || (cVar6 != '\0')) goto LAB_142cc2591;
LAB_142cc2442:
          cVar6 = '\0';
          goto LAB_142cc2444;
        }
        local_58._0_8_ = *(undefined8 *)param_3;
        local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
        *param_1 = *param_1 + '\x01';
        bVar5 = VerifyRange(this,param_1,param_2,&local_58);
        if ((bVar5) || (cVar6 != '\0')) goto LAB_142cc2500;
LAB_142cc23b1:
        cVar6 = '\0';
      }
      else {
        if (cVar8 == '\x03') {
          pwVar14 = 
          L"The scope open in a query should be called during processing as it should be captured by an earlier statement."
          ;
          iVar13 = 0x201;
        }
        else {
          if (cVar8 == '\x04') {
            return (bool)cVar6;
          }
          pwVar14 = L"Encountered an unknown query token.";
          iVar13 = 0x206;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\DataStorage\\Queries\\Conditions.cpp"
                           ,iVar13,pwVar14);
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      bVar11 = *param_1;
    } while (bVar11 < this->TokenCount);
  }
  return (bool)cVar6;
}

