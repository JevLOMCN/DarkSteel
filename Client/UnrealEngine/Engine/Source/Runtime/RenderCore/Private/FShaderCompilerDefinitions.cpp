// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 14

// FShaderCompilerDefinitions @ 145e409a0

FShaderCompilerDefinitions * __thiscall
FShaderCompilerDefinitions::FShaderCompilerDefinitions
          (FShaderCompilerDefinitions *this,FShaderCompilerDefinitions *param_1)

{
  TArray<FShaderCompilerDefinitions::FPairType,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<EShaderCompilerDefineVariant,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auVar9 [16];
  ulong64 uVar10;
  uint *puVar11;
  
  uVar5 = (param_1->KeyHashTable).HashSize;
  (this->KeyHashTable).HashSize = uVar5;
  (this->KeyHashTable).HashMask = (param_1->KeyHashTable).HashMask;
  uVar6 = (param_1->KeyHashTable).IndexSize;
  (this->KeyHashTable).Hash = FHashTable::EmptyHash;
  (this->KeyHashTable).IndexSize = uVar6;
  if (uVar6 != 0) {
    auVar9 = ZEXT816(4) * ZEXT416(uVar5);
    uVar10 = auVar9._0_8_;
    if (auVar9._8_8_ != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    puVar11 = operator_new__(uVar10);
    (this->KeyHashTable).Hash = puVar11;
    auVar9 = ZEXT816(4) * ZEXT416((this->KeyHashTable).IndexSize);
    uVar10 = auVar9._0_8_;
    if (auVar9._8_8_ != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    puVar11 = operator_new__(uVar10);
    (this->KeyHashTable).NextIndex = puVar11;
    memcpy((this->KeyHashTable).Hash,(param_1->KeyHashTable).Hash,
           (ulonglong)((this->KeyHashTable).HashSize << 2));
    memcpy((this->KeyHashTable).NextIndex,(param_1->KeyHashTable).NextIndex,
           (ulonglong)((this->KeyHashTable).IndexSize << 2));
  }
  pTVar1 = &this->Pairs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Pairs).ArrayMax;
  iVar7 = (param_1->Pairs).ArrayNum;
  pFVar8 = (param_1->Pairs).AllocatorInstance.Data;
  (this->Pairs).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar3 = &this->ValueTypes;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ValueTypes).ArrayMax;
  iVar7 = (param_1->ValueTypes).ArrayNum;
  pFVar8 = (param_1->ValueTypes).AllocatorInstance.Data;
  (this->ValueTypes).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7);
  }
  pTVar4 = &this->StringValues;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->StringValues).ArrayMax;
  iVar7 = (param_1->StringValues).ArrayNum;
  pFVar8 = (param_1->StringValues).AllocatorInstance.Data;
  (this->StringValues).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FString,FString,int>((pTVar4->AllocatorInstance).Data,(FString *)pFVar8,iVar7);
  }
  this->InitialDefineCount = param_1->InitialDefineCount;
  this->ValueCount = param_1->ValueCount;
  return this;
}

// FShaderCompilerDefinitions @ 145e40b70

FShaderCompilerDefinitions * __thiscall
FShaderCompilerDefinitions::FShaderCompilerDefinitions
          (FShaderCompilerDefinitions *this,bool param_1)

{
  int *piVar1;
  
  FHashTable::FHashTable(&this->KeyHashTable,0x400,0);
  (this->Pairs).ArrayMax = 0;
  (this->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ValueTypes).ArrayMax;
  (this->Pairs).ArrayNum = 0;
  (this->ValueTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTypes).ArrayNum = 0;
  *piVar1 = 0;
  (this->StringValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValues).ArrayNum = 0;
  (this->StringValues).ArrayMax = 0;
  this->InitialDefineCount = 0;
  this->ValueCount = 0;
  if ((param_1) && (GInitialDefines != (FShaderCompilerDefinitions *)0x0)) {
    operator=(this,GInitialDefines);
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x10,&(this->Pairs).AllocatorInstance,0,&(this->Pairs).ArrayMax);
    if (*piVar1 < 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x10,&(this->ValueTypes).AllocatorInstance,(this->ValueTypes).ArrayNum,piVar1);
    }
  }
  return this;
}

// ~FShaderCompilerDefinitions @ 145e438a0

void __thiscall
FShaderCompilerDefinitions::~FShaderCompilerDefinitions(FShaderCompilerDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->StringValues).AllocatorInstance.Data,(this->StringValues).ArrayNum);
  pFVar1 = (this->StringValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValueTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->KeyHashTable).IndexSize != 0) {
    (this->KeyHashTable).HashMask = 0;
    (this->KeyHashTable).IndexSize = 0;
    operator_delete__((this->KeyHashTable).Hash);
    (this->KeyHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->KeyHashTable).NextIndex);
    (this->KeyHashTable).NextIndex = (uint *)0x0;
  }
  return;
}

// operator= @ 145e45050

FShaderCompilerDefinitions * __thiscall
FShaderCompilerDefinitions::operator=
          (FShaderCompilerDefinitions *this,FShaderCompilerDefinitions *param_1)

{
  TArray<FShaderCompilerDefinitions::FPairType,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<EShaderCompilerDefineVariant,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auVar8 [16];
  ulong64 uVar9;
  uint *puVar10;
  
  if ((this->KeyHashTable).IndexSize != 0) {
    (this->KeyHashTable).HashMask = 0;
    (this->KeyHashTable).IndexSize = 0;
    operator_delete__((this->KeyHashTable).Hash);
    (this->KeyHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->KeyHashTable).NextIndex);
    (this->KeyHashTable).NextIndex = (uint *)0x0;
  }
  uVar4 = (param_1->KeyHashTable).HashSize;
  (this->KeyHashTable).HashSize = uVar4;
  (this->KeyHashTable).HashMask = (param_1->KeyHashTable).HashMask;
  uVar5 = (param_1->KeyHashTable).IndexSize;
  (this->KeyHashTable).IndexSize = uVar5;
  if (uVar5 != 0) {
    auVar8 = ZEXT816(4) * ZEXT416(uVar4);
    uVar9 = auVar8._0_8_;
    if (auVar8._8_8_ != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    puVar10 = operator_new__(uVar9);
    (this->KeyHashTable).Hash = puVar10;
    auVar8 = ZEXT816(4) * ZEXT416((this->KeyHashTable).IndexSize);
    uVar9 = auVar8._0_8_;
    if (auVar8._8_8_ != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    puVar10 = operator_new__(uVar9);
    (this->KeyHashTable).NextIndex = puVar10;
    memcpy((this->KeyHashTable).Hash,(param_1->KeyHashTable).Hash,
           (ulonglong)((this->KeyHashTable).HashSize << 2));
    memcpy((this->KeyHashTable).NextIndex,(param_1->KeyHashTable).NextIndex,
           (ulonglong)((this->KeyHashTable).IndexSize << 2));
  }
  pTVar1 = &this->Pairs;
  if (pTVar1 != &param_1->Pairs) {
    iVar6 = (param_1->Pairs).ArrayNum;
    piVar2 = &(this->Pairs).ArrayMax;
    pFVar7 = (param_1->Pairs).AllocatorInstance.Data;
    (this->Pairs).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xc);
      }
    }
  }
  pTVar3 = &this->ValueTypes;
  if (pTVar3 != &param_1->ValueTypes) {
    iVar6 = (param_1->ValueTypes).ArrayNum;
    piVar2 = &(this->ValueTypes).ArrayMax;
    pFVar7 = (param_1->ValueTypes).AllocatorInstance.Data;
    (this->ValueTypes).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
      }
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->StringValues,&param_1->StringValues)
  ;
  this->InitialDefineCount = param_1->InitialDefineCount;
  this->ValueCount = param_1->ValueCount;
  return this;
}

// FindMapIndex @ 145e54270

int __thiscall
FShaderCompilerDefinitions::FindMapIndex
          (FShaderCompilerDefinitions *this,FName param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (this->KeyHashTable).Hash[(this->KeyHashTable).HashMask & param_2];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar4 = 0;
    if ((int)uVar1 < (this->Pairs).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if (*(FName *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xc) == param_1) {
      return uVar1;
    }
    uVar1 = (this->KeyHashTable).NextIndex[uVar1];
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// FindOrAddMapIndex @ 145e54340

int __thiscall
FShaderCompilerDefinitions::FindOrAddMapIndex
          (FShaderCompilerDefinitions *this,FShaderCompilerDefineNameCache *param_1)

{
  int *piVar1;
  FName FVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement local_28 [4];
  FName local_24;
  undefined4 local_1c;
  
  uVar8 = param_1->MapIndex;
  if (this->InitialDefineCount <= uVar8) {
    FVar2 = param_1->Name;
    uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar7 = uVar7 + FVar2.Number;
    uVar8 = FindMapIndex(this,param_1->Name,uVar7);
    if (uVar8 == 0xffffffff) {
      local_24 = param_1->Name;
      pFVar3 = (FName *)(this->Pairs).AllocatorInstance.Data;
      local_1c = 0;
      if (((pFVar3 <= &local_24) &&
          (&local_24 < (FName *)((longlong)pFVar3 + (longlong)(this->Pairs).ArrayMax * 0xc))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      uVar8 = (this->Pairs).ArrayNum;
      piVar1 = &(this->Pairs).ArrayMax;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(this->Pairs).AllocatorInstance,piVar1);
      }
      (this->Pairs).ArrayNum = uVar8 + 1;
      local_28[0] = (FScriptContainerElement)0x0;
      pFVar4 = (this->Pairs).AllocatorInstance.Data;
      *(FName *)(pFVar4 + (longlong)(int)uVar8 * 0xc) = local_24;
      *(undefined4 *)(pFVar4 + (longlong)(int)uVar8 * 0xc + 8) = local_1c;
      pFVar4 = (this->ValueTypes).AllocatorInstance.Data;
      if (((pFVar4 <= local_28) && (local_28 < pFVar4 + (this->ValueTypes).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      iVar9 = (this->ValueTypes).ArrayNum;
      piVar1 = &(this->ValueTypes).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->ValueTypes).AllocatorInstance,piVar1);
      }
      (this->ValueTypes).ArrayNum = iVar9 + 1;
      (this->ValueTypes).AllocatorInstance.Data[iVar9] = local_28[0];
      FHashTable::Add(&this->KeyHashTable,uVar7,uVar8);
    }
    if ((this->InitialDefineCount != 0) && (param_1->MapIndex == -1)) {
      param_1->MapIndex = uVar8;
    }
  }
  return uVar8;
}

// FindOrAddMapIndex @ 145e54550

int __thiscall
FShaderCompilerDefinitions::FindOrAddMapIndex(FShaderCompilerDefinitions *this,FName param_1)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement local_18 [4];
  FName local_14;
  undefined4 local_c;
  
  uVar6 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  uVar6 = param_1.Number + uVar6;
  uVar7 = FindMapIndex(this,param_1,uVar6);
  if (uVar7 == 0xffffffff) {
    pFVar2 = (FName *)(this->Pairs).AllocatorInstance.Data;
    local_c = 0;
    local_14 = param_1;
    if ((pFVar2 <= &local_14) &&
       (&local_14 < (FName *)((longlong)pFVar2 + (longlong)(this->Pairs).ArrayMax * 0xc))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    uVar7 = (this->Pairs).ArrayNum;
    piVar1 = &(this->Pairs).ArrayMax;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(this->Pairs).AllocatorInstance,piVar1);
    }
    (this->Pairs).ArrayNum = uVar7 + 1;
    local_18[0] = (FScriptContainerElement)0x0;
    pFVar3 = (this->Pairs).AllocatorInstance.Data;
    *(FName *)(pFVar3 + (longlong)(int)uVar7 * 0xc) = local_14;
    *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 * 0xc + 8) = local_c;
    pFVar3 = (this->ValueTypes).AllocatorInstance.Data;
    if ((pFVar3 <= local_18) && (local_18 < pFVar3 + (this->ValueTypes).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    iVar8 = (this->ValueTypes).ArrayNum;
    piVar1 = &(this->ValueTypes).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->ValueTypes).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->ValueTypes).AllocatorInstance.Data;
    (this->ValueTypes).ArrayNum = iVar8 + 1;
    pFVar3[iVar8] = local_18[0];
    FHashTable::Add(&this->KeyHashTable,uVar6,uVar7);
  }
  return uVar7;
}

// InitializeInitialDefines @ 145e5f670

void __cdecl
FShaderCompilerDefinitions::InitializeInitialDefines(FShaderCompilerDefinitions *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderCompilerDefinitions *this;
  FShaderCompilerDefinitions *this_00;
  
  if (GInitialDefines != (FShaderCompilerDefinitions *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GInitialDefines == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x142,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = ::operator_new(0x58);
  this_00 = (FShaderCompilerDefinitions *)0x0;
  if (this != (FShaderCompilerDefinitions *)0x0) {
    this_00 = FShaderCompilerDefinitions(this,false);
  }
  GInitialDefines = this_00;
  operator=(this_00,param_1);
  GInitialDefines->InitialDefineCount = (param_1->Pairs).ArrayNum;
  return;
}

// InternalSetValue @ 145e60360

void __thiscall
FShaderCompilerDefinitions::InternalSetValue
          (FShaderCompilerDefinitions *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->ValueTypes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->ValueTypes).AllocatorInstance.Data;
  if (pFVar1[lVar5] == (FScriptContainerElement)0x0) {
    this->ValueCount = this->ValueCount + 1;
  }
  pFVar1[lVar5] = (FScriptContainerElement)0x1;
  uVar4 = 0;
  if (param_1 < (this->Pairs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(int *)((this->Pairs).AllocatorInstance.Data + lVar5 * 0xc + 8) = param_2;
  return;
}

// InternalSetValue @ 145e60450

void __thiscall
FShaderCompilerDefinitions::InternalSetValue
          (FShaderCompilerDefinitions *this,int param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->ValueTypes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->ValueTypes).AllocatorInstance.Data;
  if (pFVar1[lVar5] == (FScriptContainerElement)0x0) {
    this->ValueCount = this->ValueCount + 1;
  }
  pFVar1[lVar5] = (FScriptContainerElement)0x2;
  uVar4 = 0;
  if (param_1 < (this->Pairs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(uint *)((this->Pairs).AllocatorInstance.Data + lVar5 * 0xc + 8) = param_2;
  return;
}

// InternalSetValue @ 145e60540

void __thiscall
FShaderCompilerDefinitions::InternalSetValue
          (FShaderCompilerDefinitions *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->ValueTypes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->ValueTypes).AllocatorInstance.Data;
  if (pFVar1[lVar5] == (FScriptContainerElement)0x0) {
    this->ValueCount = this->ValueCount + 1;
  }
  pFVar1[lVar5] = (FScriptContainerElement)0x3;
  uVar4 = 0;
  if (param_1 < (this->Pairs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(float *)((this->Pairs).AllocatorInstance.Data + lVar5 * 0xc + 8) = param_2;
  return;
}

// InternalSetValue @ 145e60640

void __thiscall
FShaderCompilerDefinitions::InternalSetValue
          (FShaderCompilerDefinitions *this,int param_1,wchar_t *param_2)

{
  int *piVar1;
  wchar_t wVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FString local_28;
  
  lVar8 = (longlong)param_1;
  if (((ushort)(*param_2 + L'￐') < 10) && (param_2[1] == L'\0')) {
    uVar5 = 0;
    if (param_1 < (this->ValueTypes).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (this->ValueTypes).AllocatorInstance.Data;
    if (pFVar9[lVar8] == (FScriptContainerElement)0x0) {
      this->ValueCount = this->ValueCount + 1;
    }
    pFVar9[lVar8] = (FScriptContainerElement)0x1;
    wVar2 = *param_2;
    uVar5 = 0;
    if (param_1 < (this->Pairs).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)((this->Pairs).AllocatorInstance.Data + lVar8 * 0xc + 8) = (ushort)wVar2 - 0x30;
  }
  else {
    uVar7 = 0;
    uVar10 = (uint)~param_1 >> 0x1f;
    uVar5 = uVar7;
    if (param_1 < (this->ValueTypes).ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ValueTypes).AllocatorInstance.Data[lVar8] == (FScriptContainerElement)0x4) {
      uVar5 = uVar7;
      if (param_1 < (this->Pairs).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)((this->Pairs).AllocatorInstance.Data + lVar8 * 0xc + 8);
      if ((int)uVar5 < (this->StringValues).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::operator=
                ((FString *)
                 ((this->StringValues).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10),param_2
                );
    }
    else {
      uVar5 = 0;
      if (param_1 < (this->ValueTypes).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->ValueTypes).AllocatorInstance.Data;
      if (pFVar9[lVar8] == (FScriptContainerElement)0x0) {
        this->ValueCount = this->ValueCount + 1;
      }
      pFVar9[lVar8] = (FScriptContainerElement)0x4;
      ::FString::FString(&local_28,param_2);
      pFVar9 = (this->StringValues).AllocatorInstance.Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           pFVar9 + (longlong)(this->StringValues).ArrayMax * 0x10)) &&
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
      iVar6 = (this->StringValues).ArrayNum;
      piVar1 = &(this->StringValues).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->StringValues).AllocatorInstance,piVar1);
      }
      (this->StringValues).ArrayNum = iVar6 + 1;
      pFVar9 = (this->StringValues).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_28.Data.AllocatorInstance.Data;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_28.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      uVar5 = 0;
      if (param_1 < (this->Pairs).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)((this->Pairs).AllocatorInstance.Data + lVar8 * 0xc + 8) = iVar6;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// InternalSetValue @ 145e609f0

void __thiscall
FShaderCompilerDefinitions::InternalSetValue
          (FShaderCompilerDefinitions *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->ValueTypes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  pFVar1 = (this->ValueTypes).AllocatorInstance.Data;
  if (pFVar1[lVar5] == (FScriptContainerElement)0x0) {
    this->ValueCount = this->ValueCount + 1;
  }
  pFVar1[lVar5] = (FScriptContainerElement)0x1;
  uVar4 = 0;
  if (param_1 < (this->Pairs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(uint *)((this->Pairs).AllocatorInstance.Data + lVar5 * 0xc + 8) = (uint)param_2;
  return;
}

// Merge @ 145e61fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderCompilerDefinitions::Merge
          (FShaderCompilerDefinitions *this,FShaderCompilerDefinitions *param_1)

{
  TArray<EShaderCompilerDefineVariant,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FShaderCompilerDefinitions *pFVar6;
  FShaderCompilerDefinitions *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_8e8 [32];
  longlong local_8c8;
  longlong local_8c0;
  FShaderCompilerDefinitions *local_8b8;
  uint local_8b0;
  undefined2 local_8ac;
  wchar_t local_96;
  undefined2 local_94;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8e8;
  local_8ac = 0;
  local_96 = L'\0';
  local_8b0 = 0;
  iVar11 = (param_1->Pairs).ArrayNum;
  local_8b8 = param_1;
  if (0 < iVar11) {
    do {
      pFVar6 = local_8b8;
      lVar15 = (longlong)(int)local_8b0;
      iVar12 = (local_8b8->ValueTypes).ArrayNum;
      uVar9 = 0;
      if ((int)local_8b0 < iVar12) {
        uVar9 = ~local_8b0 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_8c8 = lVar15, local_8c0 = (longlong)iVar12,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    } while (((pFVar6->ValueTypes).AllocatorInstance.Data[lVar15] == (FScriptContainerElement)0x0)
            && (local_8b0 = local_8b0 + 1, (int)local_8b0 < iVar11));
  }
  if ((int)local_8b0 < (local_8b8->Pairs).ArrayNum) {
    do {
      uVar9 = local_8b0;
      lVar15 = (longlong)(int)local_8b0;
      iVar11 = (param_1->ValueTypes).ArrayNum;
      uVar14 = ~local_8b0 >> 0x1f;
      uVar10 = 0;
      if ((int)local_8b0 < iVar11) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_8b8;
      FVar3 = (param_1->ValueTypes).AllocatorInstance.Data[lVar15];
      if (FVar3 == (FScriptContainerElement)0x1) {
        iVar11 = (param_1->Pairs).ArrayNum;
        uVar10 = 0;
        if ((int)uVar9 < iVar11) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = local_8b8;
        lVar16 = (longlong)(int)local_8b0;
        iVar11 = *(int *)((param_1->Pairs).AllocatorInstance.Data + lVar15 * 0xc + 8);
        iVar12 = (local_8b8->Pairs).ArrayNum;
        uVar9 = 0;
        if ((int)local_8b0 < iVar12) {
          uVar9 = ~local_8b0 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_8c8 = lVar16, local_8c0 = (longlong)iVar12,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = FindOrAddMapIndex(this,*(FName *)((pFVar6->Pairs).AllocatorInstance.Data +
                                                  lVar16 * 0xc));
        InternalSetValue(this,iVar12,iVar11);
      }
      else if (FVar3 == (FScriptContainerElement)0x2) {
        iVar11 = (param_1->Pairs).ArrayNum;
        uVar10 = 0;
        if ((int)uVar9 < iVar11) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = local_8b8;
        lVar16 = (longlong)(int)local_8b0;
        uVar9 = *(uint *)((param_1->Pairs).AllocatorInstance.Data + lVar15 * 0xc + 8);
        iVar11 = (local_8b8->Pairs).ArrayNum;
        uVar10 = 0;
        if ((int)local_8b0 < iVar11) {
          uVar10 = ~local_8b0 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FindOrAddMapIndex(this,*(FName *)((pFVar6->Pairs).AllocatorInstance.Data +
                                                  lVar16 * 0xc));
        InternalSetValue(this,iVar11,uVar9);
      }
      else if (FVar3 == (FScriptContainerElement)0x3) {
        iVar11 = (param_1->Pairs).ArrayNum;
        uVar10 = 0;
        if ((int)uVar9 < iVar11) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = local_8b8;
        lVar16 = (longlong)(int)local_8b0;
        fVar2 = *(float *)((param_1->Pairs).AllocatorInstance.Data + lVar15 * 0xc + 8);
        iVar11 = (local_8b8->Pairs).ArrayNum;
        uVar9 = 0;
        if ((int)local_8b0 < iVar11) {
          uVar9 = ~local_8b0 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FindOrAddMapIndex(this,*(FName *)((pFVar6->Pairs).AllocatorInstance.Data +
                                                  lVar16 * 0xc));
        InternalSetValue(this,iVar11,fVar2);
      }
      else if (FVar3 == (FScriptContainerElement)0x4) {
        lVar15 = (longlong)(int)local_8b0;
        iVar11 = (local_8b8->ValueTypes).ArrayNum;
        uVar9 = 0;
        if ((int)local_8b0 < iVar11) {
          uVar9 = ~local_8b0 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = local_8b8;
        lVar16 = (longlong)(int)local_8b0;
        if ((pFVar6->ValueTypes).AllocatorInstance.Data[lVar15] == (FScriptContainerElement)0x1) {
          iVar11 = (local_8b8->Pairs).ArrayNum;
          uVar9 = 0;
          if ((int)local_8b0 < iVar11) {
            uVar9 = ~local_8b0 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar9 = *(uint *)((pFVar7->Pairs).AllocatorInstance.Data + lVar16 * 0xc + 8);
          if (uVar9 < 10) {
LAB_145e622b9:
            local_96 = (short)uVar9 + L'0';
            local_94 = 0;
            pwVar13 = &local_96;
          }
          else {
            pwVar13 = L"%d";
LAB_145e622e1:
            TCString<wchar_t>::SprintfImpl(&local_96,pwVar13);
            pwVar13 = &local_96;
          }
        }
        else {
          iVar11 = (local_8b8->ValueTypes).ArrayNum;
          uVar9 = 0;
          if ((int)local_8b0 < iVar11) {
            uVar9 = ~local_8b0 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = local_8b8;
          lVar15 = (longlong)(int)local_8b0;
          if ((pFVar7->ValueTypes).AllocatorInstance.Data[lVar16] == (FScriptContainerElement)0x2) {
            iVar11 = (local_8b8->Pairs).ArrayNum;
            uVar9 = 0;
            if ((int)local_8b0 < iVar11) {
              uVar9 = ~local_8b0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar9 = *(uint *)((pFVar6->Pairs).AllocatorInstance.Data + lVar15 * 0xc + 8);
            if (uVar9 < 10) goto LAB_145e622b9;
            pwVar13 = L"%u";
            goto LAB_145e622e1;
          }
          iVar11 = (local_8b8->ValueTypes).ArrayNum;
          uVar9 = 0;
          if ((int)local_8b0 < iVar11) {
            uVar9 = ~local_8b0 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar7 = local_8b8;
          lVar16 = (longlong)(int)local_8b0;
          if ((pFVar6->ValueTypes).AllocatorInstance.Data[lVar15] == (FScriptContainerElement)0x3) {
            iVar11 = (local_8b8->Pairs).ArrayNum;
            uVar9 = 0;
            if ((int)local_8b0 < iVar11) {
              uVar9 = ~local_8b0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TCString<wchar_t>::SprintfImpl(&local_96,L"%#.9gf");
            pwVar13 = &local_96;
          }
          else {
            iVar11 = (local_8b8->ValueTypes).ArrayNum;
            uVar9 = 0;
            if ((int)local_8b0 < iVar11) {
              uVar9 = ~local_8b0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_8c8 = lVar16, local_8c0 = (longlong)iVar11,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((pFVar7->ValueTypes).AllocatorInstance.Data[lVar16] != (FScriptContainerElement)0x4
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Defines.ValueTypes[Index] == EShaderCompilerDefineVariant::String"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderCompilerDefinitions.h"
                                         ,0x125,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar6 = local_8b8;
            lVar15 = (longlong)(int)local_8b0;
            iVar11 = (local_8b8->Pairs).ArrayNum;
            uVar9 = 0;
            if ((int)local_8b0 < iVar11) {
              uVar9 = ~local_8b0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar11 = (pFVar6->StringValues).ArrayNum;
            uVar9 = *(uint *)((pFVar6->Pairs).AllocatorInstance.Data + lVar15 * 0xc + 8);
            lVar15 = (longlong)(int)uVar9;
            uVar10 = 0;
            if ((int)uVar9 < iVar11) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pFVar6->StringValues).AllocatorInstance.Data;
            if (*(int *)(pFVar4 + lVar15 * 0x10 + 8) == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = *(wchar_t **)(pFVar4 + lVar15 * 0x10);
            }
          }
        }
        pFVar6 = local_8b8;
        lVar15 = (longlong)(int)local_8b0;
        iVar11 = (local_8b8->Pairs).ArrayNum;
        uVar9 = 0;
        if ((int)local_8b0 < iVar11) {
          uVar9 = ~local_8b0 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_8c8 = lVar15, local_8c0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = FindOrAddMapIndex(this,*(FName *)((pFVar6->Pairs).AllocatorInstance.Data +
                                                  lVar15 * 0xc));
        InternalSetValue(this,iVar11,pwVar13);
      }
      iVar11 = (local_8b8->Pairs).ArrayNum;
      lVar15 = local_8c0;
      pFVar6 = local_8b8;
      do {
        local_8b0 = local_8b0 + 1;
        local_8c0 = lVar15;
        local_8b8 = pFVar6;
        if (iVar11 <= (int)local_8b0) break;
        lVar16 = (longlong)(int)local_8b0;
        iVar12 = (pFVar6->ValueTypes).ArrayNum;
        local_8c0 = (longlong)iVar12;
        uVar9 = 0;
        if ((int)local_8b0 < iVar12) {
          uVar9 = ~local_8b0 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_8c8 = lVar16,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           lVar15 = local_8c0, bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_8c0 = lVar15;
        pTVar1 = &pFVar6->ValueTypes;
        lVar15 = local_8c0;
        pFVar6 = local_8b8;
      } while ((pTVar1->AllocatorInstance).Data[lVar16] == (FScriptContainerElement)0x0);
    } while ((int)local_8b0 < (local_8b8->Pairs).ArrayNum);
  }
  return;
}

