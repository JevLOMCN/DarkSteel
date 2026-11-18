// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// GetAbilityTag @ 14b8c3e80

FGameplayTag * __cdecl FDS_GameplayTags::GetAbilityTag(EDS_AbilityTagType *param_1)

{
  EDS_AbilityTagType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FGameplayTag *pFVar5;
  longlong lVar6;
  
  EVar1 = *param_1;
  if (AbilityTagMap._8_4_ != AbilityTagMap._52_4_) {
    lVar6 = 0x154cef818;
    if (AbilityTagMap._64_8_ != 0) {
      lVar6 = AbilityTagMap._64_8_;
    }
    for (iVar2 = *(int *)(lVar6 + ((ulonglong)(AbilityTagMap._72_4_ - 1) & (ulonglong)EVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(AbilityTagMap._0_8_ + 0xc + (longlong)iVar2 * 0x14)) {
      if (*(EDS_AbilityTagType *)(AbilityTagMap._0_8_ + (longlong)iVar2 * 0x14) == EVar1) {
        pFVar5 = TMapBase<enum_EDS_AbilityTagType,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>_>
                 ::FindChecked(&AbilityTagMap,EVar1);
        return pFVar5;
      }
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7586757706283745175>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                     ,0x69,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FGameplayTag *)(*pcVar3)();
    return pFVar5;
  }
  return &FGameplayTag::EmptyTag;
}

// GetAbilityTagType @ 14b8c3f40

EDS_AbilityTagType * __cdecl FDS_GameplayTags::GetAbilityTagType(FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  EDS_AbilityTagType *pEVar6;
  longlong lVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (AbilityTagTypeMap._8_4_ != AbilityTagTypeMap._52_4_) {
    lVar7 = 0x154cef868;
    if (AbilityTagTypeMap._64_8_ != 0) {
      lVar7 = AbilityTagTypeMap._64_8_;
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(AbilityTagTypeMap._72_4_ - 1 & FVar1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(AbilityTagTypeMap._0_8_ + (longlong)iVar5 * 0x14) == param_1->TagName) {
          pEVar6 = TMapBase<FGameplayTag,enum_EDS_AbilityTagType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>_>
                   ::FindChecked(&AbilityTagTypeMap,param_1);
          return pEVar6;
        }
        iVar5 = *(int *)(AbilityTagTypeMap._0_8_ + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7586757706283745164>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                     ,0x74,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pEVar6 = (EDS_AbilityTagType *)(*pcVar2)();
    return pEVar6;
  }
  return &NoneAbilityTagType;
}

// GetStateTag @ 14b8c8b00

FGameplayTag * __cdecl FDS_GameplayTags::GetStateTag(EDS_StateTagType *param_1)

{
  EDS_StateTagType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FGameplayTag *pFVar5;
  longlong lVar6;
  
  EVar1 = *param_1;
  if (StateTagMap._8_4_ != StateTagMap._52_4_) {
    lVar6 = 0x154cef8b8;
    if (StateTagMap._64_8_ != 0) {
      lVar6 = StateTagMap._64_8_;
    }
    for (iVar2 = *(int *)(lVar6 + ((ulonglong)(StateTagMap._72_4_ - 1) & (ulonglong)EVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(StateTagMap._0_8_ + 0xc + (longlong)iVar2 * 0x14)) {
      if (*(EDS_StateTagType *)(StateTagMap._0_8_ + (longlong)iVar2 * 0x14) == EVar1) {
        pFVar5 = TMapBase<enum_EDS_StateTagType,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>_>
                 ::FindChecked(&StateTagMap,EVar1);
        return pFVar5;
      }
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7586757706283745153>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                     ,0x7f,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FGameplayTag *)(*pcVar3)();
    return pFVar5;
  }
  return &FGameplayTag::EmptyTag;
}

// GetStateTagType @ 14b8c8bc0

EDS_StateTagType * __cdecl FDS_GameplayTags::GetStateTagType(FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  EDS_StateTagType *pEVar6;
  longlong lVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (StateTagTypeMap._8_4_ != StateTagTypeMap._52_4_) {
    lVar7 = 0x154cef908;
    if (StateTagTypeMap._64_8_ != 0) {
      lVar7 = StateTagTypeMap._64_8_;
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(StateTagTypeMap._72_4_ - 1 & FVar1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(StateTagTypeMap._0_8_ + (longlong)iVar5 * 0x14) == param_1->TagName) {
          pEVar6 = TMapBase<FGameplayTag,enum_EDS_StateTagType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>_>
                   ::FindChecked(&StateTagTypeMap,param_1);
          return pEVar6;
        }
        iVar5 = *(int *)(StateTagTypeMap._0_8_ + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7586757706283745142>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                     ,0x8a,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pEVar6 = (EDS_StateTagType *)(*pcVar2)();
    return pEVar6;
  }
  return &NoneStateTagType;
}

// InitAbilityTag @ 14b8c9ab0

void __cdecl FDS_GameplayTags::InitAbilityTag(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UEnum *this;
  FString *pFVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  int *piVar9;
  UGameplayTagsManager *this_00;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  EDS_AbilityTagType *local_res20;
  FString local_d8;
  UGameplayTagsManager *local_c8;
  FString local_c0;
  FString local_b0;
  TArrayView<FName_const_,int> local_a0;
  undefined1 *local_90;
  EDS_AbilityTagType **local_88;
  EDS_AbilityTagType **local_80;
  undefined1 *local_78;
  FName local_70 [2];
  FString local_60 [2];
  
  local_c8 = UGameplayTagsManager::SingletonManager;
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  this_00 = UGameplayTagsManager::SingletonManager;
  local_c8 = UGameplayTagsManager::SingletonManager;
  this = StaticEnum<enum_EDS_AbilityTagType>();
  if (this == (UEnum *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7586757706283745244>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                       ,0x24,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar1 = (this->Names).NumValues;
    bVar4 = 1 < (int)AbilityTagMap._72_4_;
    if (!bVar4) {
      TSet<TTuple<enum_EDS_AbilityTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>,FDefaultSetAllocator>
      ::UnhashElements(&AbilityTagMap);
    }
    uVar11 = 0;
    AbilityTagMap._8_4_ = 0;
    if (AbilityTagMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&AbilityTagMap,0,(int *)&AbilityTagMap.field_0xc);
    }
    AbilityTagMap._48_4_ = 0xffffffff;
    AbilityTagMap._52_4_ = 0;
    AbilityTagMap._40_4_ = 0;
    if (0x80 < (uint)AbilityTagMap._44_4_) {
      AbilityTagMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&AbilityTagMap.field_0x10,0);
    }
    if (bVar4) {
      AbilityTagMap._72_4_ = 1;
      TSet<TTuple<enum_EDS_AbilityTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>,FDefaultSetAllocator>
      ::Rehash(&AbilityTagMap);
    }
    bVar4 = 1 < (int)AbilityTagTypeMap._72_4_;
    if (!bVar4) {
      TSet<TTuple<FGameplayTag,enum_EDS_AbilityTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>,FDefaultSetAllocator>
      ::UnhashElements(&AbilityTagTypeMap);
    }
    AbilityTagTypeMap._8_4_ = 0;
    if (AbilityTagTypeMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&AbilityTagTypeMap,0,
                 (int *)&AbilityTagTypeMap.field_0xc);
    }
    AbilityTagTypeMap._48_4_ = 0xffffffff;
    AbilityTagTypeMap._52_4_ = 0;
    AbilityTagTypeMap._40_4_ = 0;
    if (0x80 < (uint)AbilityTagTypeMap._44_4_) {
      AbilityTagTypeMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&AbilityTagTypeMap.field_0x10,0);
    }
    if (bVar4) {
      AbilityTagTypeMap._72_4_ = 1;
      TSet<TTuple<FGameplayTag,enum_EDS_AbilityTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>,FDefaultSetAllocator>
      ::Rehash(&AbilityTagTypeMap);
    }
    TSet<TTuple<enum_EDS_AbilityTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>,FDefaultSetAllocator>
    ::Reserve(&AbilityTagMap,iVar1);
    TSet<TTuple<FGameplayTag,enum_EDS_AbilityTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>,FDefaultSetAllocator>
    ::Reserve(&AbilityTagTypeMap,iVar1);
    uVar12 = uVar11;
    if (0 < iVar1) {
      do {
        uVar10 = (uint)uVar11;
        UEnum::GetNameStringByIndex(this,&local_d8,uVar10);
        pFVar6 = ::FString::Replace(&local_d8,local_60,L"_",L".",IgnoreCase);
        if (&local_d8 != pFVar6) {
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          local_d8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_d8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        ::FString::ConcatCF(&local_c0,L"Ability.",&local_d8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_d8.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        local_d8.Data.ArrayNum = local_c0.Data.ArrayNum;
        local_d8.Data.ArrayMax = local_c0.Data.ArrayMax;
        local_c0.Data.ArrayNum = 0;
        local_c0.Data.ArrayMax = 0;
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::FString::FString(&local_b0,L"(Native)");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar8.Data = local_d8.Data.AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(local_70,(wchar_t *)FVar8.Data);
        UGameplayTagsManager::AddNativeGameplayTag(this_00,(FName)&local_res20,(FString *)*pFVar7);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_res20 == (EDS_AbilityTagType *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7586757706283745225>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                             ,0x37,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (((int)uVar10 < 0) || ((this->Names).NumValues <= (int)uVar10)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (-1 < (int)uVar10) goto LAB_14b8c9e58;
LAB_14b8c9e68:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd78,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
LAB_14b8c9e58:
            if ((this->Names).NumValues <= (int)uVar10) goto LAB_14b8c9e68;
          }
          piVar9 = &(this->Names).NumValues;
          local_a0.DataPtr = (FName *)((this->Names).TaggedNames & 0xfffffffffffffffe);
          local_a0.ArrayNum = *piVar9;
          if ((local_a0.ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArrayView<FName_const_,int>::operator[](&local_a0,uVar10);
          uVar11 = (this->Names).TaggedValues;
          iVar2 = *piVar9;
          if ((iVar2 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = 0;
          if ((int)uVar10 < iVar2) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res8[0] = *(undefined1 *)((uVar11 & 0xfffffffffffffffe) + uVar12 * 8);
          local_90 = local_res8;
          local_88 = &local_res20;
          TSet<TTuple<enum_EDS_AbilityTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_AbilityTagType_&,FGameplayTag_&>_>
                    (&AbilityTagMap,
                     (TPairInitializer<EDS_AbilityTagType_&,FGameplayTag_&> *)local_res10,
                     (bool *)&local_90);
          local_80 = &local_res20;
          local_78 = local_res8;
          TSet<TTuple<FGameplayTag,enum_EDS_AbilityTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGameplayTag_&,enum_EDS_AbilityTagType_&>_>
                    (&AbilityTagTypeMap,
                     (TPairInitializer<FGameplayTag_&,EDS_AbilityTagType_&> *)(local_res10 + 8),
                     (bool *)&local_80);
          this_00 = local_c8;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            this_00 = local_c8;
          }
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)iVar1);
    }
  }
  return;
}

// InitNativeTags @ 14b8ca460

void __cdecl FDS_GameplayTags::InitNativeTags(void)

{
  InitAbilityTag();
  InitStateTag();
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  UGameplayTagsManager::DoneAddingNativeTags(UGameplayTagsManager::SingletonManager);
  return;
}

// InitStateTag @ 14b8ca4a0

void __cdecl FDS_GameplayTags::InitStateTag(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UEnum *this;
  FString *pFVar6;
  FName *pFVar7;
  ForAnyElementType FVar8;
  int *piVar9;
  UGameplayTagsManager *this_00;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  EDS_StateTagType *local_res20;
  FString local_d8;
  UGameplayTagsManager *local_c8;
  FString local_c0;
  FString local_b0;
  TArrayView<FName_const_,int> local_a0;
  undefined1 *local_90;
  EDS_StateTagType **local_88;
  EDS_StateTagType **local_80;
  undefined1 *local_78;
  FName local_70 [2];
  FString local_60 [2];
  
  local_c8 = UGameplayTagsManager::SingletonManager;
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  this_00 = UGameplayTagsManager::SingletonManager;
  local_c8 = UGameplayTagsManager::SingletonManager;
  this = StaticEnum<enum_EDS_StateTagType>();
  if (this == (UEnum *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7586757706283745208>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                       ,0x48,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar1 = (this->Names).NumValues;
    bVar4 = 1 < (int)StateTagMap._72_4_;
    if (!bVar4) {
      TSet<TTuple<enum_EDS_StateTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>,FDefaultSetAllocator>
      ::UnhashElements(&StateTagMap);
    }
    uVar11 = 0;
    StateTagMap._8_4_ = 0;
    if (StateTagMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&StateTagMap,0,(int *)&StateTagMap.field_0xc);
    }
    StateTagMap._48_4_ = 0xffffffff;
    StateTagMap._52_4_ = 0;
    StateTagMap._40_4_ = 0;
    if (0x80 < (uint)StateTagMap._44_4_) {
      StateTagMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&StateTagMap.field_0x10,0);
    }
    if (bVar4) {
      StateTagMap._72_4_ = 1;
      TSet<TTuple<enum_EDS_StateTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>,FDefaultSetAllocator>
      ::Rehash(&StateTagMap);
    }
    bVar4 = 1 < (int)StateTagTypeMap._72_4_;
    if (!bVar4) {
      TSet<TTuple<FGameplayTag,enum_EDS_StateTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>,FDefaultSetAllocator>
      ::UnhashElements(&StateTagTypeMap);
    }
    StateTagTypeMap._8_4_ = 0;
    if (StateTagTypeMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&StateTagTypeMap,0,(int *)&StateTagTypeMap.field_0xc)
      ;
    }
    StateTagTypeMap._48_4_ = 0xffffffff;
    StateTagTypeMap._52_4_ = 0;
    StateTagTypeMap._40_4_ = 0;
    if (0x80 < (uint)StateTagTypeMap._44_4_) {
      StateTagTypeMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&StateTagTypeMap.field_0x10,0);
    }
    if (bVar4) {
      StateTagTypeMap._72_4_ = 1;
      TSet<TTuple<FGameplayTag,enum_EDS_StateTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>,FDefaultSetAllocator>
      ::Rehash(&StateTagTypeMap);
    }
    TSet<TTuple<enum_EDS_StateTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>,FDefaultSetAllocator>
    ::Reserve(&StateTagMap,iVar1);
    TSet<TTuple<FGameplayTag,enum_EDS_StateTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>,FDefaultSetAllocator>
    ::Reserve(&StateTagTypeMap,iVar1);
    uVar12 = uVar11;
    if (0 < iVar1) {
      do {
        uVar10 = (uint)uVar11;
        UEnum::GetNameStringByIndex(this,&local_d8,uVar10);
        pFVar6 = ::FString::Replace(&local_d8,local_60,L"_",L".",IgnoreCase);
        if (&local_d8 != pFVar6) {
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          local_d8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_d8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        ::FString::ConcatCF(&local_c0,L"State.",&local_d8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_d8.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
        local_d8.Data.ArrayNum = local_c0.Data.ArrayNum;
        local_d8.Data.ArrayMax = local_c0.Data.ArrayMax;
        local_c0.Data.ArrayNum = 0;
        local_c0.Data.ArrayMax = 0;
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::FString::FString(&local_b0,L"(Native)");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar8.Data = local_d8.Data.AllocatorInstance.Data;
        }
        pFVar7 = ::FName::FName(local_70,(wchar_t *)FVar8.Data);
        UGameplayTagsManager::AddNativeGameplayTag(this_00,(FName)&local_res20,(FString *)*pFVar7);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_res20 == (EDS_StateTagType *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7586757706283745189>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Common\\DS_GameplayTags.cpp"
                             ,0x5b,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (((int)uVar10 < 0) || ((this->Names).NumValues <= (int)uVar10)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (-1 < (int)uVar10) goto LAB_14b8ca848;
LAB_14b8ca858:
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd78,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
LAB_14b8ca848:
            if ((this->Names).NumValues <= (int)uVar10) goto LAB_14b8ca858;
          }
          piVar9 = &(this->Names).NumValues;
          local_a0.DataPtr = (FName *)((this->Names).TaggedNames & 0xfffffffffffffffe);
          local_a0.ArrayNum = *piVar9;
          if ((local_a0.ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArrayView<FName_const_,int>::operator[](&local_a0,uVar10);
          uVar11 = (this->Names).TaggedValues;
          iVar2 = *piVar9;
          if ((iVar2 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = 0;
          if ((int)uVar10 < iVar2) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res8[0] = *(undefined1 *)((uVar11 & 0xfffffffffffffffe) + uVar12 * 8);
          local_90 = local_res8;
          local_88 = &local_res20;
          TSet<TTuple<enum_EDS_StateTagType,FGameplayTag>,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_StateTagType_&,FGameplayTag_&>_>
                    (&StateTagMap,(TPairInitializer<EDS_StateTagType_&,FGameplayTag_&> *)local_res10
                     ,(bool *)&local_90);
          local_80 = &local_res20;
          local_78 = local_res8;
          TSet<TTuple<FGameplayTag,enum_EDS_StateTagType>,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGameplayTag_&,enum_EDS_StateTagType_&>_>
                    (&StateTagTypeMap,
                     (TPairInitializer<FGameplayTag_&,EDS_StateTagType_&> *)(local_res10 + 8),
                     (bool *)&local_80);
          this_00 = local_c8;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            this_00 = local_c8;
          }
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)iVar1);
    }
  }
  return;
}

