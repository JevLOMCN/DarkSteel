// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146f11da0

UClass * __cdecl UEnvQueryTest_GameplayTags::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_GameplayTags",
               &Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_GameplayTags,0x268,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UEnvQueryTest_GameplayTags>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_GameplayTags>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton;
}

// UEnvQueryTest_GameplayTags @ 146f2d060

UEnvQueryTest_GameplayTags * __thiscall
UEnvQueryTest_GameplayTags::UEnvQueryTest_GameplayTags
          (UEnvQueryTest_GameplayTags *this,FVTableHelper *param_1)

{
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
  FGameplayTagQuery::FGameplayTagQuery(&this->TagQueryToMatch);
  this->bSearchComponentsForTags = false;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  return this;
}

// UEnvQueryTest_GameplayTags @ 146f2d0c0

UEnvQueryTest_GameplayTags * __thiscall
UEnvQueryTest_GameplayTags::UEnvQueryTest_GameplayTags
          (UEnvQueryTest_GameplayTags *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
  FGameplayTagQuery::FGameplayTagQuery(&this->TagQueryToMatch);
  this->bSearchComponentsForTags = false;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(undefined1 *)&this->_padding_ = 0;
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  this->bUpdatedToUseQuery = false;
  pUVar1 = UEnvQueryItemType_ActorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  this->bRejectIncompatibleItems = false;
  return this;
}

// ~UEnvQueryTest_GameplayTags @ 146f2f150

void __thiscall
UEnvQueryTest_GameplayTags::~UEnvQueryTest_GameplayTags(UEnvQueryTest_GameplayTags *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryTest_GameplayTags__6B_;
  pFVar1 = (this->GameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryToMatch).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f52f80

FText * __thiscall
UEnvQueryTest_GameplayTags::GetDescriptionDetails
          (UEnvQueryTest_GameplayTags *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = 0x230;
  if (1 < (this->TagQueryToMatch).UserDescription.Data.ArrayNum) {
    lVar1 = 0x220;
  }
  FText::FromString(__return_storage_ptr__,(FString *)((longlong)&this->_padding_ + lVar1));
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f59190

UClass * __cdecl UEnvQueryTest_GameplayTags::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_GameplayTags",
               &Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_GameplayTags,0x268,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UEnvQueryTest_GameplayTags>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_GameplayTags>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_GameplayTags.InnerSingleton;
}

// PostLoad @ 146f5fd80

void __thiscall UEnvQueryTest_GameplayTags::PostLoad(UEnvQueryTest_GameplayTags *this)

{
  FGameplayTagContainer *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGameplayTagQuery *pFVar5;
  FGameplayTagQueryExpression local_98;
  FString local_70;
  FGameplayTagQuery local_60;
  
  if (this->bUpdatedToUseQuery == false) {
    this->bUpdatedToUseQuery = true;
    bVar3 = FGameplayTagQuery::IsEmpty(&this->TagQueryToMatch);
    if (bVar3) {
      local_98.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ExprSet.ArrayNum = 0;
      local_98.ExprSet.ArrayMax = 0;
      local_98.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.TagSet.ArrayNum = 0;
      local_98.TagSet.ArrayMax = 0;
      if (this->TagsToMatch == Any) {
        local_98.ExprType = AnyTagsMatch;
      }
      else if (this->TagsToMatch == All) {
        local_98.ExprType = AllTagsMatch;
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Tests\\EnvQueryTest_GameplayTags.cpp"
                           ,0x3b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((2 < (byte)(local_98.ExprType - AnyTagsMatch)) &&
            (1 < (byte)(local_98.ExprType - AnyTagsExactMatch))) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5743514444722338906>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagContainer.h"
                               ,0x3a6,"UsesTagSet()"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = &this->GameplayTags;
      if (((FGameplayTagContainer *)&local_98.TagSet == this_00) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->GameplayTags).GameplayTags.ArrayNum;
      if (iVar1 != 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar1,&local_98.TagSet.AllocatorInstance,&local_98.TagSet.ArrayNum,
                           &local_98.TagSet.ArrayMax);
        memcpy(local_98.TagSet.AllocatorInstance.Data + (longlong)iVar4 * 8,
               (this_00->GameplayTags).AllocatorInstance.Data,(longlong)iVar1 << 3);
      }
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      pFVar5 = FGameplayTagQuery::BuildQuery(&local_60,&local_98,&local_70);
      FGameplayTagQuery::operator=(&this->TagQueryToMatch,pFVar5);
      if (local_60.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AutoDescription.Data.AllocatorInstance.Data);
      }
      if (local_60.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.UserDescription.Data.AllocatorInstance.Data);
      }
      if (local_60.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.QueryTokenStream.AllocatorInstance.Data);
      }
      if (local_60.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.TagDictionary.AllocatorInstance.Data);
      }
      FGameplayTagContainer::Reset(this_00,0);
      if (local_98.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.TagSet.AllocatorInstance.Data);
      }
      DestructItems<FGameplayTagQueryExpression,int>
                ((FGameplayTagQueryExpression *)local_98.ExprSet.AllocatorInstance.Data,
                 local_98.ExprSet.ArrayNum);
      if ((FGameplayTagQueryExpression *)local_98.ExprSet.AllocatorInstance.Data !=
          (FGameplayTagQueryExpression *)0x0) {
        FMemory::Free(local_98.ExprSet.AllocatorInstance.Data);
      }
    }
  }
  UEnvQueryTest::PostLoad((UEnvQueryTest *)this);
  return;
}

// PreSave @ 146f60090

void __thiscall
UEnvQueryTest_GameplayTags::PreSave(UEnvQueryTest_GameplayTags *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res8 [4];
  
  this->bUpdatedToUseQuery = true;
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8[0] + 0x9c) = *(int *)(local_res8[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res8);
  return;
}

// RunTest @ 146f6d7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryTest_GameplayTags::RunTest(UEnvQueryTest_GameplayTags *this,FEnvQueryInstance *param_1)

{
  code *pcVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  UObject *pUVar10;
  FProperty *pFVar11;
  longlong *plVar12;
  AActor *this_00;
  UClass *pUVar13;
  UObjectBaseUtility *this_01;
  longlong *plVar14;
  LARGE_INTEGER local_res10;
  UClass *local_res18 [2];
  FGameplayTagContainer local_b8;
  FItemIterator local_98 [2];
  
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar10 == (UObject *)0x0) {
    return;
  }
  plVar12 = (longlong *)this->_padding_;
  plVar14 = (longlong *)0x0;
  if (plVar12 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar12 + 0x2b0))(plVar12,pUVar10);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar11 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar11 == (FProperty *)0x0) ||
         (cVar7 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar11), cVar7 == '\0')) {
        local_res10.s.LowPart._0_1_ = 0;
        bVar8 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_res10);
        if (!bVar8) goto LAB_146f6d88b;
      }
      this->_padding_ = (longlong)pFVar11;
    }
  }
LAB_146f6d88b:
  plVar12 = plVar14;
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    plVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
  }
  bVar8 = this->bRejectIncompatibleItems;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = &this->_padding_;
  }
  lVar2 = *plVar12;
  FEnvQueryInstance::FItemIterator::FItemIterator(local_98,(UEnvQueryTest *)this,param_1,-1);
  dVar3 = __real_4170000000000000;
  do {
    dVar6 = local_98[0].Deadline;
    iVar5 = (int)local_98[0]._padding_;
    lVar4 = local_98[0]._padding_;
    if (((*(int *)(local_98[0]._padding_ + 8) <= (int)local_98[0]._padding_) ||
        ((*(byte *)(local_98[0]._padding_ + 0x10c) & 2) != 0)) ||
       ((0.0 <= local_98[0].Deadline &&
        (QueryPerformanceCounter(&local_res10),
        dVar6 <= (double)CONCAT71(local_res10.QuadPart._1_7_,local_res10.s.LowPart._0_1_) *
                 FGenericPlatformTime::SecondsPerCycle + dVar3)))) {
      *(int *)(lVar4 + 0xec) = iVar5;
      return;
    }
    this_00 = UEnvQueryTest::GetItemActor((UEnvQueryTest *)this,param_1,iVar5);
    plVar12 = plVar14;
    if (this_00 != (AActor *)0x0) {
      pUVar13 = Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
      plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar13);
    }
    if (this->bSearchComponentsForTags == false) {
LAB_146f6d9cc:
      if (plVar12 != (longlong *)0x0) goto LAB_146f6d9d1;
      local_98[0].ItemScore = -3.4028235e+38;
      local_98[0]._34_1_ = (bVar8 == false) + 2U | local_98[0]._34_1_ & 0xfe;
    }
    else {
      if (plVar12 == (longlong *)0x0) {
        pcVar1 = *(code **)(this_00->_padding_ + 0x740);
        local_res18[0] = Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18[0] != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res18[0]);
        }
        this_01 = (UObjectBaseUtility *)(*pcVar1)(this_00,local_res18);
        plVar12 = plVar14;
        if (this_01 != (UObjectBaseUtility *)0x0) {
          pUVar13 = Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
          plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar13);
        }
        goto LAB_146f6d9cc;
      }
LAB_146f6d9d1:
      local_b8.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.GameplayTags.ArrayNum = 0;
      local_b8.GameplayTags.ArrayMax = 0;
      local_b8.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ParentTags.ArrayNum = 0;
      local_b8.ParentTags.ArrayMax = 0;
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_b8);
      bVar9 = FGameplayTagContainer::MatchesQuery(&local_b8,&this->TagQueryToMatch);
      if (local_b8.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.ParentTags.AllocatorInstance.Data);
      }
      if (local_b8.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.GameplayTags.AllocatorInstance.Data);
      }
      FEnvQueryInstance::FItemIterator::SetScore
                (local_98,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                 (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar9,SUB81(lVar2,0));
    }
    FEnvQueryInstance::FItemIterator::StoreTestResult(local_98);
    if ((*(byte *)(local_98[0]._padding_ + 0x10c) & 2) == 0) {
      local_98[0].ItemScore = 0.0;
      local_98[0].NumPassedForItem = 0;
      local_98[0].NumTestsForItem = 0;
      INSERT(local_98[0]._34_1_,'\0',1,1);
      INSERT(local_98[0]._34_1_,'\x01',0,1);
      FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)local_98);
    }
  } while( true );
}

// SatisfiesTest @ 146f72d80

bool __thiscall
UEnvQueryTest_GameplayTags::SatisfiesTest
          (UEnvQueryTest_GameplayTags *this,IGameplayTagAssetInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FGameplayTagContainer local_28;
  
  if (param_1 == (IGameplayTagAssetInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemGameplayTagAssetInterface != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Tests\\EnvQueryTest_GameplayTags.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_28);
  bVar2 = FGameplayTagContainer::MatchesQuery(&local_28,&this->TagQueryToMatch);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetTagQueryToMatch @ 146f75710

void __thiscall
UEnvQueryTest_GameplayTags::SetTagQueryToMatch
          (UEnvQueryTest_GameplayTags *this,FGameplayTagQuery *param_1)

{
  FGameplayTagQuery::operator=(&this->TagQueryToMatch,param_1);
  return;
}

// StaticRegisterNativesUEnvQueryTest_GameplayTags @ 146f76ec0

void __cdecl UEnvQueryTest_GameplayTags::StaticRegisterNativesUEnvQueryTest_GameplayTags(void)

{
  return;
}

