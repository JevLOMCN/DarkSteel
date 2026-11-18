// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 23

// StaticStruct @ 146abfb50

UScriptStruct * __cdecl FGameplayTagQuery::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQuery.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagQuery.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQuery,(UObject *)pUVar1,
                         L"GameplayTagQuery");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagQuery.OuterSingleton;
}

// FGameplayTagQuery @ 146acb930

FGameplayTagQuery * __thiscall
FGameplayTagQuery::FGameplayTagQuery(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  (this->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDictionary).ArrayNum = 0;
  (this->TagDictionary).ArrayMax = 0;
  (this->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryTokenStream).ArrayNum = 0;
  (this->QueryTokenStream).ArrayMax = 0;
  (this->UserDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDescription).Data.ArrayNum = 0;
  (this->UserDescription).Data.ArrayMax = 0;
  (this->AutoDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDescription).Data.ArrayNum = 0;
  (this->AutoDescription).Data.ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FGameplayTagQuery @ 146acb970

FGameplayTagQuery * __thiscall
FGameplayTagQuery::FGameplayTagQuery(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  (this->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDictionary).ArrayNum = 0;
  (this->TagDictionary).ArrayMax = 0;
  (this->QueryTokenStream).ArrayNum = 0;
  (this->QueryTokenStream).ArrayMax = 0;
  (this->UserDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDescription).Data.ArrayNum = 0;
  (this->UserDescription).Data.ArrayMax = 0;
  (this->AutoDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDescription).Data.ArrayNum = 0;
  (this->AutoDescription).Data.ArrayMax = 0;
  if (this != param_1) {
    this->TokenStreamVersion = param_1->TokenStreamVersion;
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
              (&this->TagDictionary,&param_1->TagDictionary);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&this->QueryTokenStream,&param_1->QueryTokenStream);
    ::FString::operator=(&this->UserDescription,&param_1->UserDescription);
    ::FString::operator=(&this->AutoDescription,&param_1->AutoDescription);
  }
  return this;
}

// FGameplayTagQuery @ 146acba20

FGameplayTagQuery * __thiscall FGameplayTagQuery::FGameplayTagQuery(FGameplayTagQuery *this)

{
  this->TokenStreamVersion = 0;
  (this->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagDictionary).ArrayNum = 0;
  (this->TagDictionary).ArrayMax = 0;
  (this->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryTokenStream).ArrayNum = 0;
  (this->QueryTokenStream).ArrayMax = 0;
  (this->UserDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDescription).Data.ArrayNum = 0;
  (this->UserDescription).Data.ArrayMax = 0;
  (this->AutoDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoDescription).Data.ArrayNum = 0;
  (this->AutoDescription).Data.ArrayMax = 0;
  return this;
}

// operator= @ 146ace230

FGameplayTagQuery * __thiscall
FGameplayTagQuery::operator=(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->TagDictionary;
  pTVar2 = &this->TagDictionary;
  this->TokenStreamVersion = param_1->TokenStreamVersion;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TagDictionary).ArrayNum = (param_1->TagDictionary).ArrayNum;
    (this->TagDictionary).ArrayMax = (param_1->TagDictionary).ArrayMax;
    (param_1->TagDictionary).ArrayNum = 0;
    (param_1->TagDictionary).ArrayMax = 0;
  }
  pTVar3 = &param_1->QueryTokenStream;
  pTVar4 = &this->QueryTokenStream;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->QueryTokenStream).ArrayNum = (param_1->QueryTokenStream).ArrayNum;
    (this->QueryTokenStream).ArrayMax = (param_1->QueryTokenStream).ArrayMax;
    (param_1->QueryTokenStream).ArrayNum = 0;
    (param_1->QueryTokenStream).ArrayMax = 0;
  }
  pFVar5 = &param_1->UserDescription;
  pFVar6 = &this->UserDescription;
  if (pFVar6 != pFVar5) {
    pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UserDescription).Data.ArrayNum = (param_1->UserDescription).Data.ArrayNum;
    (this->UserDescription).Data.ArrayMax = (param_1->UserDescription).Data.ArrayMax;
    (param_1->UserDescription).Data.ArrayNum = 0;
    (param_1->UserDescription).Data.ArrayMax = 0;
  }
  pFVar5 = &param_1->AutoDescription;
  pFVar6 = &this->AutoDescription;
  if (pFVar6 != pFVar5) {
    pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AutoDescription).Data.ArrayNum = (param_1->AutoDescription).Data.ArrayNum;
    (this->AutoDescription).Data.ArrayMax = (param_1->AutoDescription).Data.ArrayMax;
    (param_1->AutoDescription).Data.ArrayNum = 0;
    (param_1->AutoDescription).Data.ArrayMax = 0;
  }
  return this;
}

// operator= @ 146ace350

FGameplayTagQuery * __thiscall
FGameplayTagQuery::operator=(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  if (this != param_1) {
    this->TokenStreamVersion = param_1->TokenStreamVersion;
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
              (&this->TagDictionary,&param_1->TagDictionary);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&this->QueryTokenStream,&param_1->QueryTokenStream);
    ::FString::operator=(&this->UserDescription,&param_1->UserDescription);
    ::FString::operator=(&this->AutoDescription,&param_1->AutoDescription);
  }
  return this;
}

// operator== @ 146ace530

bool __thiscall FGameplayTagQuery::operator==(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (this->TokenStreamVersion != param_1->TokenStreamVersion) {
    return false;
  }
  iVar3 = (this->TagDictionary).ArrayNum;
  if (iVar3 != (param_1->TagDictionary).ArrayNum) {
    return false;
  }
  bVar2 = CompareItems<FGameplayTag,int>
                    ((FGameplayTag *)(this->TagDictionary).AllocatorInstance.Data,
                     (FGameplayTag *)(param_1->TagDictionary).AllocatorInstance.Data,iVar3);
  if (!bVar2) {
    return false;
  }
  iVar3 = (this->QueryTokenStream).ArrayNum;
  if (iVar3 != (param_1->QueryTokenStream).ArrayNum) {
    return false;
  }
  if ((iVar3 != 0) &&
     (iVar3 = memcmp((this->QueryTokenStream).AllocatorInstance.Data,
                     (param_1->QueryTokenStream).AllocatorInstance.Data,(longlong)iVar3), iVar3 != 0
     )) {
    return false;
  }
  iVar3 = (this->UserDescription).Data.ArrayNum;
  iVar1 = (param_1->UserDescription).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_146ace5ba;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->UserDescription).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->UserDescription).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_146ace5ba:
  iVar3 = (this->AutoDescription).Data.ArrayNum;
  iVar1 = (param_1->AutoDescription).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->AutoDescription).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->AutoDescription).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (bVar2) {
    return true;
  }
  return false;
}

// operator!= @ 146ace800

bool __thiscall FGameplayTagQuery::operator!=(FGameplayTagQuery *this,FGameplayTagQuery *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (this->TokenStreamVersion != param_1->TokenStreamVersion) {
    return true;
  }
  iVar3 = (this->TagDictionary).ArrayNum;
  if (iVar3 != (param_1->TagDictionary).ArrayNum) {
    return true;
  }
  bVar2 = CompareItems<FGameplayTag,int>
                    ((FGameplayTag *)(this->TagDictionary).AllocatorInstance.Data,
                     (FGameplayTag *)(param_1->TagDictionary).AllocatorInstance.Data,iVar3);
  if (!bVar2) {
    return true;
  }
  iVar3 = (this->QueryTokenStream).ArrayNum;
  if (iVar3 != (param_1->QueryTokenStream).ArrayNum) {
    return true;
  }
  if ((iVar3 != 0) &&
     (iVar3 = memcmp((this->QueryTokenStream).AllocatorInstance.Data,
                     (param_1->QueryTokenStream).AllocatorInstance.Data,(longlong)iVar3), iVar3 != 0
     )) {
    return true;
  }
  iVar3 = (this->UserDescription).Data.ArrayNum;
  iVar1 = (param_1->UserDescription).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_146ace88a;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->UserDescription).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->UserDescription).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (!bVar2) {
    return true;
  }
LAB_146ace88a:
  iVar3 = (this->AutoDescription).Data.ArrayNum;
  iVar1 = (param_1->AutoDescription).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return false;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->AutoDescription).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->AutoDescription).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (bVar2) {
    return false;
  }
  return true;
}

// Build @ 146ad2810

void __thiscall
FGameplayTagQuery::Build
          (FGameplayTagQuery *this,FGameplayTagQueryExpression *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27 [15];
  
  this->TokenStreamVersion = 0;
  iVar2 = (param_2->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            (&this->UserDescription,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
  piVar1 = &(this->QueryTokenStream).ArrayMax;
  (this->QueryTokenStream).ArrayNum = 0;
  if ((this->QueryTokenStream).ArrayMax < 0x80) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x80,&(this->QueryTokenStream).AllocatorInstance,0,piVar1);
  }
  (this->TagDictionary).ArrayNum = 0;
  if ((this->TagDictionary).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TagDictionary).AllocatorInstance,0,&(this->TagDictionary).ArrayMax);
  }
  pFVar3 = (this->QueryTokenStream).AllocatorInstance.Data;
  local_28 = (FScriptContainerElement)0x0;
  if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + *piVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueryTokenStream).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->QueryTokenStream).AllocatorInstance,piVar1);
  }
  (this->QueryTokenStream).ArrayNum = iVar6 + 1;
  local_27[0] = (FScriptContainerElement)0x1;
  (this->QueryTokenStream).AllocatorInstance.Data[iVar6] = local_28;
  pFVar3 = (this->QueryTokenStream).AllocatorInstance.Data;
  if ((pFVar3 <= local_27) && (local_27 < pFVar3 + *piVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueryTokenStream).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->QueryTokenStream).AllocatorInstance,piVar1);
  }
  (this->QueryTokenStream).ArrayNum = iVar6 + 1;
  (this->QueryTokenStream).AllocatorInstance.Data[iVar6] = local_27[0];
  FGameplayTagQueryExpression::EmitTokens(param_1,&this->QueryTokenStream,&this->TagDictionary);
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BuildQuery @ 146ad2a30

FGameplayTagQuery * __cdecl
FGameplayTagQuery::BuildQuery
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagQueryExpression *param_1,
          FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  pFVar2 = ::FString::FString(&local_18,param_2);
  Build(__return_storage_ptr__,param_1,pFVar2);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// Clear @ 146ad2bd0

void __thiscall FGameplayTagQuery::Clear(FGameplayTagQuery *this)

{
  if (this != &EmptyQuery) {
    this->TokenStreamVersion = EmptyQuery.TokenStreamVersion;
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
              (&this->TagDictionary,&EmptyQuery.TagDictionary);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&this->QueryTokenStream,&EmptyQuery.QueryTokenStream);
    ::FString::operator=(&this->UserDescription,&EmptyQuery.UserDescription);
    ::FString::operator=(&this->AutoDescription,&EmptyQuery.AutoDescription);
    return;
  }
  return;
}

// GetGameplayTagArray @ 146ade300

TArray<FGameplayTag,TSizedDefaultAllocator<32>_> * __thiscall
FGameplayTagQuery::GetGameplayTagArray(FGameplayTagQuery *this)

{
  return &this->TagDictionary;
}

// GetQueryExpr @ 146adfa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayTagQuery::GetQueryExpr(FGameplayTagQuery *this,FGameplayTagQueryExpression *param_1)

{
  TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FGameplayTagQuery *pFVar5;
  FGameplayTagQuery *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement FVar13;
  longlong lVar14;
  ulonglong uVar15;
  FGameplayTagQueryExpression *pFVar16;
  FName local_res8;
  FGameplayTagQueryExpression *local_res10;
  FQueryEvaluator local_a8;
  FGameplayTagQueryExpression local_90;
  FGameplayTagQueryExpression local_68;
  
  iVar12 = 0;
  local_a8.bReadError = false;
  local_68.ExprType = Undefined;
  local_68._1_7_ = 0;
  local_68.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ExprSet.ArrayNum = 0;
  local_68.ExprSet.ArrayMax = 0;
  local_68.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.TagSet.ArrayNum = 0;
  local_68.TagSet.ArrayMax = 0;
  local_res10 = param_1;
  local_a8.Query = this;
  FGameplayTagQueryExpression::operator=(param_1,&local_68);
  if (local_68.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.TagSet.AllocatorInstance.Data);
  }
  FVar7.Data = local_68.ExprSet.AllocatorInstance.Data;
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_68.ExprSet.AllocatorInstance.Data,
             local_68.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)FVar7.Data != (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  pFVar5 = local_a8.Query;
  if (0 < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
    local_a8.CurStreamIdx = 1;
    if ((((local_a8.Query)->QueryTokenStream).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar6 = local_a8.Query;
    local_a8.Version = (int)(byte)*(pFVar5->QueryTokenStream).AllocatorInstance.Data;
    if (local_a8.bReadError == false) {
      lVar14 = (longlong)local_a8.CurStreamIdx;
      if ((local_a8.CurStreamIdx < 0) ||
         (((local_a8.Query)->QueryTokenStream).ArrayNum <= local_a8.CurStreamIdx)) {
LAB_146ae006a:
        if (2 < (byte)LogGameplayTags._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6
                      ::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        }
        local_a8.bReadError = true;
      }
      else {
        uVar9 = local_a8.CurStreamIdx + 1;
        uVar10 = 0;
        if (local_a8.CurStreamIdx < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
          uVar10 = (uint)~local_a8.CurStreamIdx >> 0x1f;
        }
        local_a8.CurStreamIdx = uVar9;
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = local_a8.Query;
        if ((local_a8.bReadError == false) &&
           ((pFVar6->QueryTokenStream).AllocatorInstance.Data[lVar14] !=
            (FScriptContainerElement)0x0)) {
          lVar14 = (longlong)local_a8.CurStreamIdx;
          uVar10 = 0;
          if ((local_a8.CurStreamIdx < 0) ||
             (((local_a8.Query)->QueryTokenStream).ArrayNum <= local_a8.CurStreamIdx)) {
            if (2 < (byte)LogGameplayTags._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                          __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
            }
            local_a8.bReadError = true;
            FVar13 = (FScriptContainerElement)0x0;
          }
          else {
            uVar11 = local_a8.CurStreamIdx + 1;
            uVar9 = uVar10;
            if (local_a8.CurStreamIdx < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
              uVar9 = (uint)~local_a8.CurStreamIdx >> 0x1f;
            }
            local_a8.CurStreamIdx = uVar11;
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar13 = (pFVar5->QueryTokenStream).AllocatorInstance.Data[lVar14];
          }
          pFVar5 = local_a8.Query;
          param_1->ExprType = (EGameplayTagQueryExprType)FVar13;
          if (local_a8.bReadError == false) {
            if (((byte)((char)FVar13 - 1U) < 3) || ((byte)((char)FVar13 - 7U) < 2)) {
              lVar14 = (longlong)local_a8.CurStreamIdx;
              if ((local_a8.CurStreamIdx < 0) ||
                 (((local_a8.Query)->QueryTokenStream).ArrayNum <= local_a8.CurStreamIdx)) {
                if (2 < (byte)LogGameplayTags._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                              ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
                }
                local_a8.bReadError = true;
                uVar10 = 0;
              }
              else {
                uVar9 = local_a8.CurStreamIdx + 1;
                if (local_a8.CurStreamIdx < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
                  uVar10 = (uint)~local_a8.CurStreamIdx >> 0x1f;
                }
                local_a8.CurStreamIdx = uVar9;
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar10 = (uint)(byte)(pFVar5->QueryTokenStream).AllocatorInstance.Data[lVar14];
              }
              if ((local_a8.bReadError == false) && ((char)uVar10 != '\0')) {
                do {
                  if ((local_a8.CurStreamIdx < 0) ||
                     (((local_a8.Query)->QueryTokenStream).ArrayNum <= local_a8.CurStreamIdx))
                  goto LAB_146ae006a;
                  uVar11 = local_a8.CurStreamIdx + 1;
                  uVar9 = 0;
                  if (local_a8.CurStreamIdx < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
                    uVar9 = (uint)~local_a8.CurStreamIdx >> 0x1f;
                  }
                  local_a8.CurStreamIdx = uVar11;
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (local_a8.bReadError != false) break;
                  GetTagFromIndex(local_a8.Query,(int)&local_res8);
                  FGameplayTagQueryExpression::AddTag(param_1,(FGameplayTag)local_res8);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < (int)uVar10);
              }
            }
            else {
              lVar14 = (longlong)local_a8.CurStreamIdx;
              if ((local_a8.CurStreamIdx < 0) ||
                 (((local_a8.Query)->QueryTokenStream).ArrayNum <= local_a8.CurStreamIdx)) {
                if (2 < (byte)LogGameplayTags._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                              ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
                }
                local_a8.bReadError = true;
                uVar15 = 0;
              }
              else {
                uVar9 = local_a8.CurStreamIdx + 1;
                if (local_a8.CurStreamIdx < ((local_a8.Query)->QueryTokenStream).ArrayNum) {
                  uVar10 = (uint)~local_a8.CurStreamIdx >> 0x1f;
                }
                local_a8.CurStreamIdx = uVar9;
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar15 = (ulonglong)(byte)(pFVar5->QueryTokenStream).AllocatorInstance.Data[lVar14];
              }
              if ((local_a8.bReadError == false) && ((char)uVar15 != '\0')) {
                pTVar1 = &param_1->ExprSet;
                pFVar16 = param_1;
                do {
                  local_90.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_90.ExprSet.ArrayNum = 0;
                  local_90.ExprSet.ArrayMax = 0;
                  local_90.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_90.TagSet.ArrayNum = 0;
                  local_90.TagSet.ArrayMax = 0;
                  FQueryEvaluator::ReadExpr(&local_a8,&local_90);
                  if (((pFVar16->ExprType != AllExprMatch) &&
                      ((pFVar16->ExprType - AnyExprMatch & 0xfd) != 0)) &&
                     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_5743514444722338899>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagContainer.h"
                                         ,0x3ad,"UsesExprSet()"), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar16 = (FGameplayTagQueryExpression *)(pTVar1->AllocatorInstance).Data;
                  if (((pFVar16 <= &local_90) && (&local_90 < pFVar16 + (param_1->ExprSet).ArrayMax)
                      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar12 = (param_1->ExprSet).ArrayNum;
                  if (iVar12 == (param_1->ExprSet).ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x828,&pTVar1->AllocatorInstance,
                                        &(param_1->ExprSet).ArrayMax);
                  }
                  FVar7.Data = local_90.ExprSet.AllocatorInstance.Data;
                  (param_1->ExprSet).ArrayNum = iVar12 + 1;
                  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x28;
                  *pFVar3 = (FScriptContainerElement)local_90.ExprType;
                  pFVar2 = pFVar3 + 8;
                  *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
                  iVar12 = local_90.ExprSet.ArrayNum;
                  *(int *)(pFVar3 + 0x10) = local_90.ExprSet.ArrayNum;
                  if (local_90.ExprSet.ArrayNum == 0) {
                    *(int *)(pFVar3 + 0x14) = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x28,8,local_90.ExprSet.ArrayNum,0,(ForAnyElementType *)pFVar2,
                               local_90.ExprSet.ArrayNum,(int *)(pFVar3 + 0x14));
                    /* WARNING: Load size is inaccurate */
                    ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int>
                              (*pFVar2,(FGameplayTagQueryExpression *)FVar7.Data,iVar12);
                  }
                  FVar7.Data = local_90.TagSet.AllocatorInstance.Data;
                  *(undefined8 *)(pFVar3 + 0x18) = 0;
                  lVar14 = (longlong)local_90.TagSet.ArrayNum;
                  *(int *)(pFVar3 + 0x20) = local_90.TagSet.ArrayNum;
                  if (local_90.TagSet.ArrayNum == 0) {
                    *(int *)(pFVar3 + 0x24) = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,4,local_90.TagSet.ArrayNum,0,(ForAnyElementType *)(pFVar3 + 0x18),
                               local_90.TagSet.ArrayNum,(int *)(pFVar3 + 0x24));
                    /* WARNING: Load size is inaccurate */
                    memcpy(pFVar3[0x18],FVar7.Data,lVar14 << 3);
                  }
                  if (local_90.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.TagSet.AllocatorInstance.Data);
                  }
                  DestructItems<FGameplayTagQueryExpression,int>
                            ((FGameplayTagQueryExpression *)local_90.ExprSet.AllocatorInstance.Data,
                             local_90.ExprSet.ArrayNum);
                  if ((FGameplayTagQueryExpression *)local_90.ExprSet.AllocatorInstance.Data !=
                      (FGameplayTagQueryExpression *)0x0) {
                    FMemory::Free(local_90.ExprSet.AllocatorInstance.Data);
                  }
                  uVar15 = uVar15 - 1;
                  pFVar16 = local_res10;
                } while (uVar15 != 0);
              }
            }
          }
        }
      }
    }
    if ((local_a8.CurStreamIdx != ((local_a8.Query)->QueryTokenStream).ArrayNum) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7958607028354547480>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                           ,0xe8,"CurStreamIdx == Query.QueryTokenStream.Num()"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetTagFromIndex @ 146ae1140

FGameplayTag __thiscall FGameplayTagQuery::GetTagFromIndex(FGameplayTagQuery *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayTag FVar4;
  uint in_register_00000014;
  FName FVar5;
  uint in_R8D;
  
  FVar5.Number = in_register_00000014;
  FVar5.ComparisonIndex.Value = param_1;
  if (((int)in_R8D < 0) || ((this->TagDictionary).ArrayNum <= (int)in_R8D)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5743514444722339059>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagContainer.h"
                       ,0x30d,"TagDictionary.IsValidIndex(TagIdx)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.TagName = (FName)(*pcVar1)();
      return (FGameplayTag)FVar4.TagName;
    }
  }
  uVar3 = 0;
  if ((int)in_R8D < (this->TagDictionary).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.TagName = (FName)(*pcVar1)();
      return (FGameplayTag)FVar4.TagName;
    }
  }
  *(undefined8 *)FVar5 =
       *(undefined8 *)((this->TagDictionary).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  return (FGameplayTag)FVar5;
}

// IsEmpty @ 146ae2870

bool __thiscall FGameplayTagQuery::IsEmpty(FGameplayTagQuery *this)

{
  return (this->QueryTokenStream).ArrayNum == 0;
}

// MakeQuery_ExactMatchAllTags @ 146ae3eb0

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_ExactMatchAllTags
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = AllTagsExactMatch;
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_38.TagSet,&param_1->GameplayTags);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,&local_38,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeQuery_ExactMatchAnyTags @ 146ae3f70

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_ExactMatchAnyTags
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = AnyTagsExactMatch;
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_38.TagSet,&param_1->GameplayTags);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,&local_38,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeQuery_MatchAllTags @ 146ae4030

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_MatchAllTags
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = AllTagsMatch;
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_38.TagSet,&param_1->GameplayTags);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,&local_38,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeQuery_MatchAnyTags @ 146ae40f0

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_MatchAnyTags
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = AnyTagsMatch;
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_38.TagSet,&param_1->GameplayTags);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,&local_38,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeQuery_MatchNoTags @ 146ae41b0

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_MatchNoTags
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = NoTagsMatch;
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_38.TagSet,&param_1->GameplayTags);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,&local_38,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeQuery_MatchTag @ 146ae4270

FGameplayTagQuery * __cdecl
FGameplayTagQuery::MakeQuery_MatchTag
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTag *param_1)

{
  FGameplayTagQueryExpression *pFVar1;
  FString local_48;
  FGameplayTagQueryExpression local_38;
  
  local_38._1_4_ = 0;
  local_38._5_2_ = 0;
  local_38._7_1_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  local_38.ExprType = AllTagsMatch;
  pFVar1 = FGameplayTagQueryExpression::AddTag(&local_38,(FGameplayTag)param_1->TagName);
  __return_storage_ptr__->TokenStreamVersion = 0;
  (__return_storage_ptr__->TagDictionary).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TagDictionary).ArrayNum = 0;
  (__return_storage_ptr__->TagDictionary).ArrayMax = 0;
  (__return_storage_ptr__->QueryTokenStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->QueryTokenStream).ArrayNum = 0;
  (__return_storage_ptr__->QueryTokenStream).ArrayMax = 0;
  (__return_storage_ptr__->UserDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->AutoDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->AutoDescription).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  Build(__return_storage_ptr__,pFVar1,&local_48);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Matches @ 146ae4340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGameplayTagQuery::Matches(FGameplayTagQuery *this,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FGameplayTagQuery *pFVar3;
  FGameplayTagQuery *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement FVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement local_res8 [8];
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  FQueryEvaluator local_58;
  
  iVar15 = (this->QueryTokenStream).ArrayNum;
  if (iVar15 == 0) {
    return false;
  }
  local_58.bReadError = false;
  local_58.CurStreamIdx = 0;
  local_58.Query = this;
  if (iVar15 < 1) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    local_58.bReadError = true;
    FVar12 = (FScriptContainerElement)0x0;
  }
  else {
    local_58.CurStreamIdx = 1;
    if (((this->QueryTokenStream).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    FVar12 = *(this->QueryTokenStream).AllocatorInstance.Data;
  }
  pFVar3 = local_58.Query;
  bVar5 = false;
  local_58.Version = (int)(byte)FVar12;
  if (local_58.bReadError == false) {
    lVar16 = (longlong)local_58.CurStreamIdx;
    if ((local_58.CurStreamIdx < 0) ||
       (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
      if (2 < (byte)LogGameplayTags._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6::
                    LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
      local_58.bReadError = true;
    }
    else {
      uVar9 = local_58.CurStreamIdx + 1;
      uVar10 = 0;
      if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
        uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
      }
      local_58.CurStreamIdx = uVar9;
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar4 = local_58.Query;
      if ((local_58.bReadError == false) &&
         ((pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16] != (FScriptContainerElement)0x0)
         ) {
        lVar16 = (longlong)local_58.CurStreamIdx;
        uVar10 = 0;
        if ((local_58.CurStreamIdx < 0) ||
           (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
          if (2 < (byte)LogGameplayTags._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                        __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          }
          local_58.bReadError = true;
          local_res8[0] = (FScriptContainerElement)0x0;
        }
        else {
          uVar11 = local_58.CurStreamIdx + 1;
          uVar9 = uVar10;
          if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
            uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
          }
          local_58.CurStreamIdx = uVar11;
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          local_res8[0] = (pFVar4->QueryTokenStream).AllocatorInstance.Data[lVar16];
        }
        pFVar3 = local_58.Query;
        if (local_58.bReadError == false) {
          switch(local_res8[0]) {
          case (FScriptContainerElement)0x1:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar10 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar10 = (uint)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if ((local_58.bReadError == false) && (iVar15 = 0, (char)uVar10 != '\0')) {
LAB_146ae4620:
              if ((local_58.CurStreamIdx < 0) ||
                 (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
LAB_146ae4d85:
                if (2 < (byte)LogGameplayTags._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                              ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
                }
                local_58.bReadError = true;
              }
              else {
                uVar11 = local_58.CurStreamIdx + 1;
                uVar9 = 0;
                if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                  uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
                }
                local_58.CurStreamIdx = uVar11;
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
                if (local_58.bReadError == false) {
                  if ((!bVar7) &&
                     (GetTagFromIndex(local_58.Query,(int)&local_res18), local_res18 != 0)) {
                    pFVar13 = (param_1->GameplayTags).AllocatorInstance.Data;
                    pFVar1 = pFVar13 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
                    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                      if (*(longlong *)pFVar13 == local_res18) goto LAB_146ae46f3;
                    }
                    pFVar13 = (param_1->ParentTags).AllocatorInstance.Data;
                    pFVar1 = pFVar13 + (longlong)(param_1->ParentTags).ArrayNum * 8;
                    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                      if (*(longlong *)pFVar13 == local_res18) goto LAB_146ae46f3;
                    }
                  }
                  goto LAB_146ae46fa;
                }
              }
LAB_146ae4da5:
              bVar5 = false;
            }
            break;
          case (FScriptContainerElement)0x2:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            bVar5 = true;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar10 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar10 = (uint)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if (local_58.bReadError == false) {
              iVar15 = 0;
              if ((char)uVar10 != '\0') {
                do {
                  if ((local_58.CurStreamIdx < 0) ||
                     (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx))
                  goto LAB_146ae4d85;
                  uVar11 = local_58.CurStreamIdx + 1;
                  uVar9 = 0;
                  if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                    uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
                  }
                  local_58.CurStreamIdx = uVar11;
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    uVar6 = (*pcVar2)();
                    return (bool)uVar6;
                  }
                  if (local_58.bReadError != false) goto LAB_146ae4da5;
                  if (!bVar7) {
                    GetTagFromIndex(local_58.Query,(int)&local_res20);
                    if (local_res20 != 0) {
                      pFVar13 = (param_1->GameplayTags).AllocatorInstance.Data;
                      pFVar1 = pFVar13 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
                      for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                        if (*(longlong *)pFVar13 == local_res20) goto LAB_146ae48a7;
                      }
                      pFVar13 = (param_1->ParentTags).AllocatorInstance.Data;
                      pFVar1 = pFVar13 + (longlong)(param_1->ParentTags).ArrayNum * 8;
                      for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                        if (*(longlong *)pFVar13 == local_res20) goto LAB_146ae48a7;
                      }
                    }
                    bVar7 = true;
                    bVar5 = false;
                  }
LAB_146ae48a7:
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar10);
              }
            }
            else {
              bVar5 = false;
            }
            break;
          case (FScriptContainerElement)0x3:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            bVar5 = true;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar10 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar10 = (uint)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if (local_58.bReadError == false) {
              iVar15 = 0;
              if ((char)uVar10 != '\0') {
LAB_146ae4980:
                if ((-1 < local_58.CurStreamIdx) &&
                   (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum)) {
                  uVar11 = local_58.CurStreamIdx + 1;
                  uVar9 = 0;
                  if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                    uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
                  }
                  local_58.CurStreamIdx = uVar11;
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    uVar6 = (*pcVar2)();
                    return (bool)uVar6;
                  }
                  if (local_58.bReadError == false) {
                    if ((!bVar7) && (GetTagFromIndex(local_58.Query,(int)&local_78), local_78 != 0))
                    {
                      pFVar13 = (param_1->GameplayTags).AllocatorInstance.Data;
                      pFVar1 = pFVar13 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
                      for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                        if (*(longlong *)pFVar13 == local_78) goto LAB_146ae4a53;
                      }
                      pFVar13 = (param_1->ParentTags).AllocatorInstance.Data;
                      pFVar1 = pFVar13 + (longlong)(param_1->ParentTags).ArrayNum * 8;
                      for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                        if (*(longlong *)pFVar13 == local_78) goto LAB_146ae4a53;
                      }
                    }
                    goto LAB_146ae4a59;
                  }
                  goto LAB_146ae4da5;
                }
                goto LAB_146ae4d85;
              }
            }
            else {
              bVar5 = false;
            }
            break;
          case (FScriptContainerElement)0x4:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar14 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar14 = (ulonglong)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if ((local_58.bReadError == false) && ((char)uVar14 != '\0')) {
              do {
                bVar8 = FQueryEvaluator::EvalExpr(&local_58,param_1,bVar7);
                if ((bVar7 == false) && (bVar8)) {
                  bVar7 = true;
                  bVar5 = true;
                }
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            break;
          case (FScriptContainerElement)0x5:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            bVar5 = true;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar14 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar14 = (ulonglong)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if (local_58.bReadError == false) {
              if ((char)uVar14 != '\0') {
                do {
                  bVar8 = FQueryEvaluator::EvalExpr(&local_58,param_1,bVar7);
                  if ((bVar7 == false) && (!bVar8)) {
                    bVar5 = false;
                    bVar7 = true;
                  }
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
            }
            else {
              bVar5 = false;
            }
            break;
          case (FScriptContainerElement)0x6:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            bVar5 = true;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar14 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar14 = (ulonglong)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if (local_58.bReadError == false) {
              if ((char)uVar14 != '\0') {
                do {
                  bVar8 = FQueryEvaluator::EvalExpr(&local_58,param_1,bVar7);
                  if ((bVar7 == false) && (bVar8)) {
                    bVar5 = false;
                    bVar7 = true;
                  }
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
            }
            else {
              bVar5 = false;
            }
            break;
          case (FScriptContainerElement)0x7:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar10 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar10 = (uint)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if ((local_58.bReadError == false) && (iVar15 = 0, (char)uVar10 != '\0')) {
              do {
                if ((local_58.CurStreamIdx < 0) ||
                   (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx))
                goto LAB_146ae4d85;
                uVar11 = local_58.CurStreamIdx + 1;
                uVar9 = 0;
                if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                  uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
                }
                local_58.CurStreamIdx = uVar11;
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
                if (local_58.bReadError != false) goto LAB_146ae4da5;
                if ((!bVar7) && (GetTagFromIndex(local_58.Query,(int)&local_70), local_70 != 0)) {
                  pFVar13 = (param_1->GameplayTags).AllocatorInstance.Data;
                  pFVar1 = pFVar13 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
                  for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                    if (*(longlong *)pFVar13 == local_70) {
                      bVar7 = true;
                      bVar5 = true;
                      break;
                    }
                  }
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)uVar10);
            }
            break;
          case (FScriptContainerElement)0x8:
            lVar16 = (longlong)local_58.CurStreamIdx;
            bVar7 = false;
            bVar5 = true;
            if ((local_58.CurStreamIdx < 0) ||
               (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx)) {
              if (2 < (byte)LogGameplayTags._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              }
              local_58.bReadError = true;
              uVar10 = 0;
            }
            else {
              uVar9 = local_58.CurStreamIdx + 1;
              if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                uVar10 = (uint)~local_58.CurStreamIdx >> 0x1f;
              }
              local_58.CurStreamIdx = uVar9;
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              uVar10 = (uint)(byte)(pFVar3->QueryTokenStream).AllocatorInstance.Data[lVar16];
            }
            if (local_58.bReadError == false) {
              iVar15 = 0;
              if ((char)uVar10 != '\0') {
                do {
                  if ((local_58.CurStreamIdx < 0) ||
                     (((local_58.Query)->QueryTokenStream).ArrayNum <= local_58.CurStreamIdx))
                  goto LAB_146ae4d85;
                  uVar11 = local_58.CurStreamIdx + 1;
                  uVar9 = 0;
                  if (local_58.CurStreamIdx < ((local_58.Query)->QueryTokenStream).ArrayNum) {
                    uVar9 = (uint)~local_58.CurStreamIdx >> 0x1f;
                  }
                  local_58.CurStreamIdx = uVar11;
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    uVar6 = (*pcVar2)();
                    return (bool)uVar6;
                  }
                  if (local_58.bReadError != false) goto LAB_146ae4da5;
                  if (!bVar7) {
                    GetTagFromIndex(local_58.Query,(int)&local_68);
                    if (local_68 != 0) {
                      pFVar13 = (param_1->GameplayTags).AllocatorInstance.Data;
                      pFVar1 = pFVar13 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
                      for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 8) {
                        if (*(longlong *)pFVar13 == local_68) goto LAB_146ae4d68;
                      }
                    }
                    bVar7 = true;
                    bVar5 = false;
                  }
LAB_146ae4d68:
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar10);
              }
            }
            else {
              bVar5 = false;
            }
            break;
          default:
            local_60 = local_res8;
            `FQueryEvaluator::EvalExpr'::__l2::<lambda_1>::operator()(&local_60);
          }
        }
      }
    }
LAB_146ae50b0:
    if ((local_58.CurStreamIdx != ((local_58.Query)->QueryTokenStream).ArrayNum) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7958607028354547502>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                           ,0xd2,"CurStreamIdx == Query.QueryTokenStream.Num()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  return bVar5;
LAB_146ae4a53:
  bVar7 = true;
  bVar5 = false;
LAB_146ae4a59:
  iVar15 = iVar15 + 1;
  if ((int)uVar10 <= iVar15) goto LAB_146ae50b0;
  goto LAB_146ae4980;
LAB_146ae46f3:
  bVar7 = true;
  bVar5 = true;
LAB_146ae46fa:
  iVar15 = iVar15 + 1;
  if ((int)uVar10 <= iVar15) goto LAB_146ae50b0;
  goto LAB_146ae4620;
}

// Serialize @ 146aed0d0

void __thiscall FGameplayTagQuery::Serialize(FGameplayTagQuery *this,FArchive *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->TokenStreamVersion = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FGameplayTag,TSizedDefaultAllocator<32>_>
            (param_1,&this->TagDictionary);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&this->QueryTokenStream);
  return;
}

