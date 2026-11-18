// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 7

// FGameplayTagQueryExpression @ 146acba50

FGameplayTagQueryExpression * __thiscall
FGameplayTagQueryExpression::FGameplayTagQueryExpression
          (FGameplayTagQueryExpression *this,FGameplayTagQueryExpression *param_1)

{
  TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FGameplayTagQueryExpression *pFVar5;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->ExprSet;
  this->ExprType = param_1->ExprType;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExprSet).ArrayMax;
  iVar4 = (param_1->ExprSet).ArrayNum;
  pFVar5 = (FGameplayTagQueryExpression *)(param_1->ExprSet).AllocatorInstance.Data;
  (this->ExprSet).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &this->TagSet;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TagSet).ArrayMax;
  iVar4 = (param_1->TagSet).ArrayNum;
  _Src = (param_1->TagSet).AllocatorInstance.Data;
  (this->TagSet).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
  }
  return this;
}

// operator= @ 146ace3c0

FGameplayTagQueryExpression * __thiscall
FGameplayTagQueryExpression::operator=
          (FGameplayTagQueryExpression *this,FGameplayTagQueryExpression *param_1)

{
  TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->ExprSet;
  pTVar2 = &this->ExprSet;
  this->ExprType = param_1->ExprType;
  if (pTVar2 != pTVar1) {
    DestructItems<FGameplayTagQueryExpression,int>
              ((FGameplayTagQueryExpression *)(pTVar2->AllocatorInstance).Data,
               (this->ExprSet).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExprSet).ArrayNum = (param_1->ExprSet).ArrayNum;
    (this->ExprSet).ArrayMax = (param_1->ExprSet).ArrayMax;
    (param_1->ExprSet).ArrayNum = 0;
    (param_1->ExprSet).ArrayMax = 0;
  }
  pTVar3 = &param_1->TagSet;
  pTVar4 = &this->TagSet;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TagSet).ArrayNum = (param_1->TagSet).ArrayNum;
    (this->TagSet).ArrayMax = (param_1->TagSet).ArrayMax;
    (param_1->TagSet).ArrayNum = 0;
    (param_1->TagSet).ArrayMax = 0;
  }
  return this;
}

// AddTag @ 146ad08f0

FGameplayTagQueryExpression * __thiscall
FGameplayTagQueryExpression::AddTag(FGameplayTagQueryExpression *this,FGameplayTag param_1)

{
  int *piVar1;
  EGameplayTagQueryExprType EVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGameplayTagQueryExpression *pFVar7;
  FName local_res10 [3];
  
  EVar2 = this->ExprType;
  local_res10[0] = param_1.TagName;
  if ((EVar2 != AllTagsMatch) &&
     ((AllTagsExactMatch < EVar2 || ((0x18aU >> (EVar2 & 0x1f) & 1) == 0)))) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5743514444722338913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagContainer.h"
                       ,0x39f,"UsesTagSet()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FGameplayTagQueryExpression *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (FName *)(this->TagSet).AllocatorInstance.Data;
  if ((pFVar3 <= local_res10) && (local_res10 < pFVar3 + (this->TagSet).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FGameplayTagQueryExpression *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->TagSet).ArrayNum;
  piVar1 = &(this->TagSet).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->TagSet).AllocatorInstance,piVar1);
  }
  (this->TagSet).ArrayNum = iVar6 + 1;
  *(FName *)((this->TagSet).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10[0];
  return this;
}

// AddTag @ 146ad0a00

FGameplayTagQueryExpression * __thiscall
FGameplayTagQueryExpression::AddTag(FGameplayTagQueryExpression *this,FName param_1)

{
  UGameplayTagsManager *this_00;
  FGameplayTagQueryExpression *pFVar1;
  FName local_res18;
  
  this_00 = UGameplayTagsManager::Get();
  UGameplayTagsManager::RequestGameplayTag
            (this_00,(FName)&local_res18,param_1.ComparisonIndex.Value._0_1_);
  pFVar1 = AddTag(this,(FGameplayTag)local_res18);
  return pFVar1;
}

// ConvertToJsonObject @ 146ad4390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGameplayTagQueryExpression::ConvertToJsonObject
          (FGameplayTagQueryExpression *this,TSharedRef<FJsonObject,1> *param_1)

{
  FName *pFVar1;
  FGameplayTagQueryExpression *pFVar2;
  int iVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  UPackage *pUVar12;
  UEnum *this_00;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FGameplayTagQueryExpression *this_01;
  FName *this_02;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_138;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_128;
  TSharedPtr<FJsonValue,1> local_118;
  TSharedPtr<FJsonValue,1> local_108;
  TSharedRef<FJsonObject,1> local_f8;
  FName local_e8;
  TSharedRef<FJsonObject,1> local_e0;
  FString local_d0;
  TSharedPtr<FJsonObject,1> local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  TSharedPtr<FJsonObject,1> local_68 [2];
  
  pTVar7 = _UNK_150651568;
  pTVar6 = ___xmm_00000000000000000000000000000010;
  iVar3 = (this->TagSet).ArrayNum;
  this_02 = (FName *)(this->TagSet).AllocatorInstance.Data;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = this_02 + iVar3;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  while( true ) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    if ((this->TagSet).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (this_02 == pFVar1) {
      iVar3 = (this->ExprSet).ArrayNum;
      this_01 = (FGameplayTagQueryExpression *)(this->ExprSet).AllocatorInstance.Data;
      pFVar2 = this_01 + iVar3;
      goto LAB_146ad4732;
    }
    pTVar11 = ::operator_new(0x60);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_e0.Object = (FJsonObject *)pTVar6;
      local_e0.SharedReferenceCount.ReferenceController = pTVar7;
    }
    else {
      pTVar11->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[2]._padding_ = 0;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[1]._padding_ = 0;
      pTVar11[3]._padding_ = 0;
      pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0;
      *(undefined4 *)&pTVar11[4]._padding_ = 0xffffffff;
      pTVar11[5]._padding_ = 0;
      pTVar13 = pTVar11 + 1;
      if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      pTVar14 = pTVar11;
      local_e0.Object = (FJsonObject *)pTVar13;
      local_e0.SharedReferenceCount.ReferenceController = pTVar11;
    }
    if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_GameplayTags();
      Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar12,L"GameplayTag")
      ;
    }
    bVar8 = FJsonObjectConverter::UStructToJsonObject
                      ((UStruct *)Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton,
                       this_02,&local_e0,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,None);
    if (!bVar8) break;
    pTVar11 = ::operator_new(0x30);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      local_118.Object = (FJsonValue *)pTVar6;
      local_118.SharedReferenceCount.ReferenceController = pTVar7;
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0.Object = (FJsonObject *)pTVar13;
      local_c0.SharedReferenceCount.ReferenceController = pTVar14;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar11 + 1),&local_c0);
      if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      local_118.Object = (FJsonValue *)(pTVar11 + 1);
      local_118.SharedReferenceCount.ReferenceController = pTVar11;
    }
    if (((local_128.AllocatorInstance.Data <= &local_118) &&
        (&local_118 <
         (TSharedPtr<FJsonValue,1> *)
         (local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x10))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar10 = local_128.ArrayNum;
    if (local_128.ArrayNum == local_128.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_128.AllocatorInstance,&local_128.ArrayMax);
    }
    local_128.ArrayNum = iVar10 + 1;
    *(FJsonValue **)&local_128.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
         local_118.Object;
    *(TReferenceControllerBase<1> **)
     (local_128.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
         local_118.SharedReferenceCount.ReferenceController;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_118.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    this_02 = this_02 + 1;
  }
  if (1 < (byte)LogGameplayTags._0_1_) {
    ::FName::ToString(this_02,&local_d0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  bVar8 = false;
LAB_146ad4afd:
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_138.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_128.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return bVar8;
LAB_146ad4732:
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if ((this->ExprSet).ArrayNum != iVar3) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<FGameplayTagQueryExpression_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res20);
  }
  if (this_01 == pFVar2) {
    pFVar4 = param_1->Object;
    this_00 = Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton == (UEnum *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_GameplayTags();
      this_00 = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType,
                              (UObject *)pUVar12,L"EGameplayTagQueryExprType");
      Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton = this_00;
      if ((this_00 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    UEnum::GetNameByValue(this_00,(long64)&local_e8);
    ::FName::ToString(&local_e8,&local_a0);
    ::FString::FString(&local_b0,L"ExprType");
    FJsonObject::SetStringField(pFVar4,&local_b0,&local_a0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    pFVar4 = param_1->Object;
    ::FString::FString(&local_90,L"ExprSet");
    FJsonObject::SetArrayField(pFVar4,&local_90,&local_138);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    pFVar4 = param_1->Object;
    ::FString::FString(&local_80,L"TagSet");
    FJsonObject::SetArrayField(pFVar4,&local_80,&local_128);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    bVar8 = true;
    goto LAB_146ad4afd;
  }
  local_f8.SharedReferenceCount.ReferenceController = ::operator_new(0x60);
  if (local_f8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_f8.Object = (FJsonObject *)pTVar6;
    local_f8.SharedReferenceCount.ReferenceController = pTVar7;
  }
  else {
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_f8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    local_f8.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
    local_f8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_f8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    local_f8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_f8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&local_f8.SharedReferenceCount.ReferenceController[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&local_f8.SharedReferenceCount.ReferenceController[4]._padding_ + 4) =
         0;
    local_f8.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
    local_f8.Object = (FJsonObject *)(local_f8.SharedReferenceCount.ReferenceController + 1);
    if (((TReferenceControllerBase<1> *)local_f8.Object == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  bVar8 = ConvertToJsonObject(this_01,&local_f8);
  if (!bVar8) {
    if (1 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    bVar8 = false;
    goto LAB_146ad4afd;
  }
  pTVar11 = ::operator_new(0x30);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_108.Object = (FJsonValue *)pTVar6;
    local_108.SharedReferenceCount.ReferenceController = pTVar7;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    local_68[0].Object = local_f8.Object;
    local_68[0].SharedReferenceCount.ReferenceController =
         local_f8.SharedReferenceCount.ReferenceController;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar11 + 1),local_68);
    if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    pTVar14 = pTVar11;
    local_108.Object = (FJsonValue *)(pTVar11 + 1);
    local_108.SharedReferenceCount.ReferenceController = pTVar11;
  }
  if (((local_138.AllocatorInstance.Data <= &local_108) &&
      (&local_108 <
       (TSharedPtr<FJsonValue,1> *)
       (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  iVar10 = local_138.ArrayNum;
  if (local_138.ArrayNum == local_138.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
  }
  local_138.ArrayNum = iVar10 + 1;
  *(FJsonValue **)&local_138.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
       local_108.Object;
  *(TReferenceControllerBase<1> **)(local_138.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8)
       = local_108.SharedReferenceCount.ReferenceController;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  this_01 = this_01 + 1;
  goto LAB_146ad4732;
}

// EmitTokens @ 146ad74a0

void __thiscall
FGameplayTagQueryExpression::EmitTokens
          (FGameplayTagQueryExpression *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_2)

{
  FGameplayTagQueryExpression *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FGameplayTagQueryExpression *this_00;
  FName *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res20;
  FScriptContainerElement local_48;
  FScriptContainerElement local_47;
  FScriptContainerElement local_46;
  FScriptContainerElement local_45 [5];
  FName *local_40;
  
  local_48 = (FScriptContainerElement)this->ExprType;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= &local_48) && (&local_48 < pFVar2 + param_1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  (param_1->AllocatorInstance).Data[iVar6] = local_48;
  switch(this->ExprType) {
  case AnyTagsMatch:
  case AllTagsMatch:
  case NoTagsMatch:
  case AnyTagsExactMatch:
  case AllTagsExactMatch:
    local_47 = *(FScriptContainerElement *)&(this->TagSet).ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= &local_47) && (&local_47 < pFVar2 + param_1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    (param_1->AllocatorInstance).Data[iVar6] = local_47;
    pFVar8 = (FName *)(this->TagSet).AllocatorInstance.Data;
    iVar6 = (this->TagSet).ArrayNum;
    local_40 = pFVar8 + iVar6;
    while( true ) {
      pFVar4 = local_40;
      if ((this->TagSet).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar4) break;
      local_res20 = *pFVar8;
      iVar7 = TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
                        (param_2,(FGameplayTag *)&local_res20);
      if ((0xfe < iVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TagIdx <= 254",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                             ,0x92e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_46 = SUB41(iVar7,0);
      if (((pFVar2 <= &local_46) && (&local_46 < pFVar2 + param_1->ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar8 = pFVar8 + 1;
      (param_1->AllocatorInstance).Data[iVar7] = local_46;
    }
    break;
  case AnyExprMatch:
  case AllExprMatch:
  case NoExprMatch:
    local_45[0] = *(FScriptContainerElement *)&(this->ExprSet).ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= local_45) && (local_45 < pFVar2 + param_1->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    (param_1->AllocatorInstance).Data[iVar6] = local_45[0];
    iVar6 = (this->ExprSet).ArrayNum;
    this_00 = (FGameplayTagQueryExpression *)(this->ExprSet).AllocatorInstance.Data;
    pFVar1 = this_00 + iVar6;
    while( true ) {
      if ((this->ExprSet).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FGameplayTagQueryExpression_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_00 == pFVar1) break;
      EmitTokens(this_00,param_1,param_2);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// MakeFromJsonObject @ 146ae33c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGameplayTagQueryExpression::MakeFromJsonObject
          (TSharedRef<FJsonObject,1> *param_1,FGameplayTagQueryExpression *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  UPackage *pUVar10;
  long64 lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  FStaticBasicLogRecord *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  FGameplayTagQueryExpression *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 local_148;
  FGameplayTagQueryExpression local_140;
  FGameplayTagQueryExpression local_118;
  FString local_f0;
  TSharedRef<FJsonObject,1> local_e0;
  TSharedRef<FJsonObject,1> local_d0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_c0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_b8 [2];
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  local_a8 = L"ExprType";
  uStack_a0 = 8;
  local_78._12_4_ = uStack_9c;
  local_78.Size = 8;
  local_78.DataPtr = L"ExprType";
  local_140.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ExprSet.ArrayNum = 0;
  local_140.ExprSet.ArrayMax = 0;
  local_140.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.TagSet.ArrayNum = 0;
  local_140.TagSet.ArrayMax = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_res10 = param_2;
  bVar6 = FJsonObject::TryGetStringField(param_1->Object,&local_78,&local_f0);
  if (bVar6) {
    if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton == (UEnum *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_GameplayTags();
      Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType,(UObject *)pUVar10
                         ,L"EGameplayTagQueryExprType");
    }
    lVar11 = UEnum::GetValueByNameString
                       (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton,&local_f0
                        ,None);
    local_140.ExprType = (EGameplayTagQueryExprType)lVar11;
    uStack_90 = 6;
    local_98 = L"TagSet";
    local_68._12_4_ = uStack_8c;
    local_68.Size = 6;
    local_68.DataPtr = L"TagSet";
    bVar6 = FJsonObject::TryGetArrayField(param_1->Object,&local_68,&local_c0);
    if (bVar6) {
      iVar9 = local_c0->ArrayNum;
      pFVar17 = (local_c0->AllocatorInstance).Data;
      pFVar18 = pFVar17 + (longlong)iVar9 * 0x10;
      while( true ) {
        if (local_c0->ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        param_2 = local_res10;
        if (pFVar17 == pFVar18) goto LAB_146ae36e8;
        local_148 = 0;
        if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_GameplayTags();
          Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar10,
                               L"GameplayTag");
        }
        pUVar3 = Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        plVar12 = (longlong *)(**(code **)**(undefined8 **)pFVar17)();
        if ((*plVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        local_e0.Object = (FJsonObject *)*plVar12;
        local_e0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar12[1];
        if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_e0.Object == (FJsonObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        bVar6 = FJsonObjectConverter::JsonObjectToUStruct
                          (&local_e0,(UStruct *)pUVar3,&local_148,0,0,false,(FText *)0x0,
                           (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                            *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0.SharedReferenceCount.ReferenceController);
        if (!bVar6) break;
        if (((local_140.TagSet.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             local_140.TagSet.AllocatorInstance.Data + (longlong)local_140.TagSet.ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar8 = local_140.TagSet.ArrayNum;
        if (local_140.TagSet.ArrayNum == local_140.TagSet.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_140.TagSet.AllocatorInstance,&local_140.TagSet.ArrayMax);
        }
        pFVar17 = pFVar17 + 0x10;
        local_140.TagSet.ArrayNum = iVar8 + 1;
        *(undefined8 *)(local_140.TagSet.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_148;
      }
      if (1 < (byte)LogGameplayTags._0_1_) {
        pFVar15 = &::LOG_Static;
        goto LAB_146ae3a3c;
      }
    }
    else {
LAB_146ae36e8:
      local_88 = L"ExprSet";
      uStack_80 = 7;
      local_58._12_4_ = uStack_7c;
      local_58.Size = 7;
      local_58.DataPtr = L"ExprSet";
      bVar6 = FJsonObject::TryGetArrayField(param_1->Object,&local_58,local_b8);
      if (!bVar6) {
LAB_146ae3a1b:
        operator=(param_2,&local_140);
        bVar6 = true;
        goto LAB_146ae3a4a;
      }
      local_res20 = local_b8[0]->ArrayNum;
      uVar13 = (ulonglong)(int)local_res20;
      pFVar17 = (local_b8[0]->AllocatorInstance).Data;
      pFVar18 = pFVar17 + uVar13 * 0x10;
      while( true ) {
        if (local_b8[0]->ArrayNum != (int)uVar13) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        param_2 = local_res10;
        if (pFVar17 == pFVar18) goto LAB_146ae3a1b;
        local_118.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ExprSet.ArrayNum = 0;
        local_118.ExprSet.ArrayMax = 0;
        local_118.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.TagSet.ArrayNum = 0;
        local_118.TagSet.ArrayMax = 0;
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        plVar12 = (longlong *)(**(code **)**(undefined8 **)pFVar17)();
        if ((*plVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        local_d0.Object = (FJsonObject *)*plVar12;
        local_d0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar12[1];
        if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_d0.Object == (FJsonObject *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        bVar6 = MakeFromJsonObject(&local_d0,&local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        if (!bVar6) break;
        if (((local_140.ExprSet.AllocatorInstance.Data <= &local_118) &&
            (&local_118 <
             (FGameplayTagQueryExpression *)
             (local_140.ExprSet.AllocatorInstance.Data + (longlong)local_140.ExprSet.ArrayMax * 0x28
             ))) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        iVar9 = local_140.ExprSet.ArrayNum;
        if (local_140.ExprSet.ArrayNum == local_140.ExprSet.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_140.ExprSet.AllocatorInstance,&local_140.ExprSet.ArrayMax)
          ;
        }
        FVar5.Data = local_118.ExprSet.AllocatorInstance.Data;
        FVar4.Data = local_140.ExprSet.AllocatorInstance.Data;
        lVar14 = (longlong)iVar9;
        local_140.ExprSet.ArrayNum = iVar9 + 1;
        local_140.ExprSet.AllocatorInstance.Data[lVar14 * 0x28].field_0x0 = local_118.ExprType;
        pFVar1 = local_140.ExprSet.AllocatorInstance.Data + lVar14 * 0x28 + 8;
        *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
        iVar9 = local_118.ExprSet.ArrayNum;
        *(int *)(local_140.ExprSet.AllocatorInstance.Data + lVar14 * 0x28 + 0x10) =
             local_118.ExprSet.ArrayNum;
        if (local_118.ExprSet.ArrayNum == 0) {
          *(int *)(local_140.ExprSet.AllocatorInstance.Data + lVar14 * 0x28 + 0x14) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_118.ExprSet.ArrayNum,0,(ForAnyElementType *)pFVar1,
                     local_118.ExprSet.ArrayNum,
                     (int *)(local_140.ExprSet.AllocatorInstance.Data + lVar14 * 0x28 + 0x14));
          ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int>
                    (*(FScriptContainerElement **)&pFVar1->field_0x0,
                     (FGameplayTagQueryExpression *)FVar5.Data,iVar9);
        }
        FVar5.Data = local_118.TagSet.AllocatorInstance.Data;
        *(undefined8 *)&FVar4.Data[lVar14 * 0x28 + 0x18].field_0x0 = 0;
        lVar16 = (longlong)local_118.TagSet.ArrayNum;
        *(int *)(FVar4.Data + lVar14 * 0x28 + 0x20) = local_118.TagSet.ArrayNum;
        if (local_118.TagSet.ArrayNum == 0) {
          *(int *)(FVar4.Data + lVar14 * 0x28 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_118.TagSet.ArrayNum,0,
                     (ForAnyElementType *)(FVar4.Data + lVar14 * 0x28 + 0x18),
                     local_118.TagSet.ArrayNum,(int *)(FVar4.Data + lVar14 * 0x28 + 0x24));
          memcpy(*(FScriptContainerElement **)&FVar4.Data[lVar14 * 0x28 + 0x18].field_0x0,FVar5.Data
                 ,lVar16 << 3);
        }
        if (local_118.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.TagSet.AllocatorInstance.Data);
        }
        DestructItems<FGameplayTagQueryExpression,int>
                  ((FGameplayTagQueryExpression *)local_118.ExprSet.AllocatorInstance.Data,
                   local_118.ExprSet.ArrayNum);
        if ((FGameplayTagQueryExpression *)local_118.ExprSet.AllocatorInstance.Data !=
            (FGameplayTagQueryExpression *)0x0) {
          FMemory::Free(local_118.ExprSet.AllocatorInstance.Data);
        }
        uVar13 = (ulonglong)local_res20;
        pFVar17 = pFVar17 + 0x10;
      }
      if (1 < (byte)LogGameplayTags._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
      if (local_118.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.TagSet.AllocatorInstance.Data);
      }
      DestructItems<FGameplayTagQueryExpression,int>
                ((FGameplayTagQueryExpression *)local_118.ExprSet.AllocatorInstance.Data,
                 local_118.ExprSet.ArrayNum);
      if ((FGameplayTagQueryExpression *)local_118.ExprSet.AllocatorInstance.Data !=
          (FGameplayTagQueryExpression *)0x0) {
        FMemory::Free(local_118.ExprSet.AllocatorInstance.Data);
      }
    }
  }
  else if (1 < (byte)LogGameplayTags._0_1_) {
    pFVar15 = &::LOG_Static;
LAB_146ae3a3c:
    UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogGameplayTags);
  }
  bVar6 = false;
LAB_146ae3a4a:
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_140.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_140.ExprSet.AllocatorInstance.Data,
             local_140.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_140.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_140.ExprSet.AllocatorInstance.Data);
  }
  return bVar6;
}

