// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 80

// StaticClass @ 146ac2d90

UClass * __cdecl UBlueprintGameplayTagLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"BlueprintGameplayTagLibrary",
               &Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintGameplayTagLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintGameplayTagLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintGameplayTagLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton;
}

// UBlueprintGameplayTagLibrary @ 146acc390

UBlueprintGameplayTagLibrary * __thiscall
UBlueprintGameplayTagLibrary::UBlueprintGameplayTagLibrary
          (UBlueprintGameplayTagLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintGameplayTagLibrary__6B_;
  return this;
}

// UBlueprintGameplayTagLibrary @ 146acc3c0

UBlueprintGameplayTagLibrary * __thiscall
UBlueprintGameplayTagLibrary::UBlueprintGameplayTagLibrary
          (UBlueprintGameplayTagLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintGameplayTagLibrary__6B_;
  return this;
}

// ~UBlueprintGameplayTagLibrary @ 146acd870

void __thiscall
UBlueprintGameplayTagLibrary::~UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintGameplayTagLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddGameplayTag @ 146acfca0

void __cdecl
UBlueprintGameplayTagLibrary::AddGameplayTag(FGameplayTagContainer *param_1,FGameplayTag param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_2.TagName;
  FGameplayTagContainer::AddTag(param_1,(FGameplayTag *)local_res10);
  return;
}

// AppendGameplayTagContainers @ 146ad1e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintGameplayTagLibrary::AppendGameplayTagContainers
          (FGameplayTagContainer *param_1,FGameplayTagContainer *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags> FVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackX_20 [8];
  undefined1 auStack_68 [4];
  FColor_u_0 FStack_64;
  FName FStack_60;
  FName FStack_58;
  FName FStack_50;
  FName FStack_48;
  
  if (GEnableGameplayTagDetailedStats) {
    FVar14 = StatPtr_STAT_FGameplayTagContainer_AppendTags;
    if (StatPtr_STAT_FGameplayTagContainer_AppendTags ==
        (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)0x0) {
      pFVar13 = ::FName::FName(&FStack_50,"STAT_FGameplayTagContainer_AppendTags");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FGameplayTagContainer_AppendTags,*pFVar13,
                          L"FGameplayTagContainer::AppendTags","STATGROUP_GameplayTags",
                          "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
  }
  else {
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)
             &TStatId::TStatId_NAME_None;
  }
  FVar15 = *(FName *)FVar14;
  bVar8 = false;
  bVar7 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_64.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_64._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_58.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        FStack_58.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_58,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x2e6);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_60 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar9 = true;
      goto LAB_146ad227b;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  FStack_60 = FStack_48;
  FVar15 = FStack_48;
LAB_146ad227b:
  iVar3 = (param_2->GameplayTags).ArrayNum;
  if (iVar3 != 0) {
    iVar4 = (param_1->GameplayTags).ArrayNum;
    uVar17 = iVar4 + iVar3;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(param_1->GameplayTags).ArrayMax;
    if ((param_1->GameplayTags).ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar17,(ForAnyElementType *)param_1,iVar4,piVar1);
    }
    pFVar18 = (param_2->GameplayTags).AllocatorInstance.Data;
    iVar3 = (param_2->GameplayTags).ArrayNum;
    pFVar2 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_2->GameplayTags).ArrayNum != iVar3) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_20);
      }
      if (pFVar18 == pFVar2) break;
      uVar17 = 0;
      lVar16 = 0;
      if (0 < (longlong)iVar4) {
        do {
          uVar11 = 0;
          if ((int)uVar17 < (param_1->GameplayTags).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((param_1->GameplayTags).AllocatorInstance.Data + lVar16 * 8) ==
              *(longlong *)pFVar18) goto LAB_146ad23fd;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar4);
      }
      pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar18) && (pFVar18 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (param_1->GameplayTags).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)param_1,piVar1);
      }
      (param_1->GameplayTags).ArrayNum = iVar12 + 1;
      *(longlong *)((param_1->GameplayTags).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(longlong *)pFVar18;
LAB_146ad23fd:
      pFVar18 = pFVar18 + 8;
    }
    iVar3 = (param_1->ParentTags).ArrayNum;
    uVar17 = (param_2->ParentTags).ArrayNum + iVar3;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar1 = &(param_1->ParentTags).ArrayMax;
    if ((param_1->ParentTags).ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar17,&(param_1->ParentTags).AllocatorInstance,iVar3,piVar1);
    }
    pFVar18 = (param_2->ParentTags).AllocatorInstance.Data;
    iVar4 = (param_2->ParentTags).ArrayNum;
    pFVar2 = pFVar18 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_2->ParentTags).ArrayNum != iVar4) {
        auStack_68[0] = 0;
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStack_68);
      }
      FVar15 = FStack_60;
      if (pFVar18 == pFVar2) break;
      uVar17 = 0;
      lVar16 = 0;
      if (0 < (longlong)iVar3) {
        do {
          uVar11 = 0;
          if ((int)uVar17 < (param_1->ParentTags).ArrayNum) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)((param_1->ParentTags).AllocatorInstance.Data + lVar16 * 8) ==
              *(longlong *)pFVar18) goto LAB_146ad2571;
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar3);
      }
      pFVar5 = (param_1->ParentTags).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar18) && (pFVar18 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (param_1->ParentTags).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(param_1->ParentTags).AllocatorInstance,piVar1);
      }
      (param_1->ParentTags).ArrayNum = iVar12 + 1;
      *(longlong *)((param_1->ParentTags).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(longlong *)pFVar18;
LAB_146ad2571:
      pFVar18 = pFVar18 + 8;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// BreakGameplayTagContainer @ 146ad2680

void __cdecl
UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
          (FGameplayTagContainer *param_1,TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=(param_2,&param_1->GameplayTags);
  return;
}

// Conv_ObjectToGameplayTagAssetInterface @ 146ad4310

TScriptInterface<IGameplayTagAssetInterface> * __cdecl
UBlueprintGameplayTagLibrary::Conv_ObjectToGameplayTagAssetInterface
          (TScriptInterface<IGameplayTagAssetInterface> *__return_storage_ptr__,UObject *param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UObject *)0x0)) {
    *(UObject **)__return_storage_ptr__ = param_1;
    if (param_1 == (UObject *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    UE::GC::MarkAsReachable(param_1);
    *(UObject **)__return_storage_ptr__ = param_1;
  }
  pUVar1 = UGameplayTagAssetInterface::StaticClass();
  pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  *(void **)&__return_storage_ptr__->field_0x8 = pvVar2;
  return __return_storage_ptr__;
}

// DoesContainerMatchTagQuery @ 146ad6440

bool __cdecl
UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery
          (FGameplayTagContainer *param_1,FGameplayTagQuery *param_2)

{
  bool bVar1;
  
  bVar1 = FGameplayTagQuery::Matches(param_2,param_1);
  return bVar1;
}

// DoesTagAssetInterfaceHaveTag @ 146ad6460

bool __cdecl
UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag
          (TScriptInterface<IGameplayTagAssetInterface> *param_1,FGameplayTag param_2)

{
  undefined1 uVar1;
  
  if ((*(longlong *)param_1 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146ad6472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x18))();
    return (bool)uVar1;
  }
  return false;
}

// EqualEqual_GameplayTag @ 146ad7950

bool __cdecl
UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(FGameplayTag param_1,FGameplayTag param_2)

{
  return param_1.TagName == param_2.TagName;
}

// EqualEqual_GameplayTagContainer @ 146ad7960

bool __cdecl
UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer
          (FGameplayTagContainer *param_1,FGameplayTagContainer *param_2)

{
  bool bVar1;
  
  if ((param_1->GameplayTags).ArrayNum != (param_2->GameplayTags).ArrayNum) {
    return false;
  }
  bVar1 = FGameplayTagContainer::HasAllExact(param_1,param_2);
  return bVar1;
}

// Filter @ 146ad90f0

FGameplayTagContainer * __cdecl
UBlueprintGameplayTagLibrary::Filter
          (FGameplayTagContainer *__return_storage_ptr__,FGameplayTagContainer *param_1,
          FGameplayTagContainer *param_2,bool param_3)

{
  if (param_3) {
    FGameplayTagContainer::FilterExact(param_1,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  FGameplayTagContainer::Filter(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetAllActorsOfClassMatchingTagQuery @ 146add960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery
          (UObject *param_1,TSubclassOf<AActor> param_2,FGameplayTagQuery *param_3,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  AActor *this;
  longlong *plVar10;
  longlong lVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  UObject *local_res10 [2];
  FName local_res20;
  AActor *local_f8;
  FGameplayTagContainer local_f0;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  TActorIteratorBase<TActorIterator<AActor>_> local_a8;
  FString local_48;
  
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  pUVar8 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  lVar11 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar11 != 0) && (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (pUVar2 = *(UObject **)param_2.Class.field0_0x0, pUVar2 != (UObject *)0x0)) &&
       (pUVar8 != (UWorld *)0x0)) {
      bVar5 = false;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar2), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_a8.Flags = OnlyActiveLevels|SkipPendingKill;
      local_a8.State.bIsSet = false;
      local_res10[0] = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FActorIteratorState::FActorIteratorState
                (&local_a8.State.TypedValue,pUVar8,(TSubclassOf<AActor>)local_res10);
      local_a8.State.bIsSet = true;
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
      pwVar13 = L"";
      while( true ) {
        if ((local_a8.State.bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_a8.State.TypedValue.ReachedEnd != false) break;
        if ((local_a8.State.bIsSet == false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = FActorIteratorState::GetActorChecked(&local_a8.State.TypedValue);
        if (this == (AActor *)0x0) {
          pFVar12 = GetTypeName<AActor>(&local_48);
          if ((pFVar12->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar13);
        }
        local_f8 = this;
        if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
          pUVar9 = UGameplayTagAssetInterface::StaticClass();
          plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar9);
          if (plVar10 == (longlong *)0x0) {
            if (bVar5) goto LAB_146addd09;
            if (2 < (byte)LogGameplayTags._0_1_) {
              lVar11 = *(longlong *)param_2.Class.field0_0x0;
              if ((lVar11 == 0) ||
                 (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_146addc89:
                lVar11 = 0;
              }
              else {
                iVar7 = (int)pUVar9->_padding_;
                if ((*(int *)(lVar11 + 0x38) < iVar7) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8)
                    != &pUVar9->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_146addc89;
                lVar11 = *(longlong *)param_2.Class.field0_0x0;
              }
              local_res20 = *(FName *)(lVar11 + 0x18);
              ::FName::ToString(&local_res20,&local_b8);
              local_d0 = (FName)local_f8->_padding_;
              ::FName::ToString(&local_d0,&local_c8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = true;
            goto LAB_146addd09;
          }
          local_f0.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f0.GameplayTags.ArrayNum = 0;
          local_f0.GameplayTags.ArrayMax = 0;
          local_f0.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f0.ParentTags.ArrayNum = 0;
          local_f0.ParentTags.ArrayMax = 0;
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_f0);
          bVar6 = FGameplayTagQuery::Matches(param_3,&local_f0);
          if (bVar6) {
            pFVar3 = (param_4->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
                ((FScriptContainerElement *)&local_f8 < pFVar3 + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = param_4->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_4->AllocatorInstance,piVar1);
            }
            param_4->ArrayNum = iVar7 + 1;
            *(AActor **)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_f8;
          }
          if (local_f0.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.ParentTags.AllocatorInstance.Data);
          }
          if (local_f0.GameplayTags.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_146addd09;
          FMemory::Free(local_f0.GameplayTags.AllocatorInstance.Data);
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
        }
        else {
LAB_146addd09:
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
        }
      }
      if (local_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_a8.State.TypedValue.CurrentWorld,
                   local_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GetDebugStringFromGameplayTag @ 146ade170

FString * __cdecl
UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag
          (FString *__return_storage_ptr__,FGameplayTag param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1.TagName;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDebugStringFromGameplayTagContainer @ 146ade1a0

FString * __cdecl
UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer
          (FString *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  int iVar6;
  FString local_18;
  
  uVar5 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar6 = (param_1->GameplayTags).ArrayNum;
  if (0 < iVar6) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar6) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
      }
      ::FName::ToString((FName *)((param_1->GameplayTags).AllocatorInstance.Data +
                                 (longlong)(int)uVar5 * 8),&local_18);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if ((int)uVar5 < (param_1->GameplayTags).ArrayNum + -1) {
        ::FString::AppendChars(__return_storage_ptr__,L", ",2);
      }
      iVar6 = (param_1->GameplayTags).ArrayNum;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar6);
  }
  return __return_storage_ptr__;
}

// GetNumGameplayTagsInContainer @ 146adea80

int __cdecl
UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(FGameplayTagContainer *param_1)

{
  return (param_1->GameplayTags).ArrayNum;
}

// GetOwnedGameplayTags @ 146adebc0

FGameplayTagContainer * __cdecl
UBlueprintGameplayTagLibrary::GetOwnedGameplayTags
          (FGameplayTagContainer *__return_storage_ptr__,
          TScriptInterface<IGameplayTagAssetInterface> *param_1)

{
  longlong *plVar1;
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  if ((*(longlong *)param_1 != 0) &&
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146adece0

UClass * __cdecl UBlueprintGameplayTagLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"BlueprintGameplayTagLibrary",
               &Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintGameplayTagLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintGameplayTagLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintGameplayTagLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton;
}

// GetTagName @ 146ae1340

FName __cdecl UBlueprintGameplayTagLibrary::GetTagName(FGameplayTag *param_1)

{
  FName *in_RDX;
  
  param_1->TagName = *in_RDX;
  return (FName)param_1;
}

// HasAllMatchingGameplayTags @ 146ae18a0

bool __cdecl
UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags
          (TScriptInterface<IGameplayTagAssetInterface> *param_1,FGameplayTagContainer *param_2)

{
  undefined1 uVar1;
  
  if ((*(longlong *)param_1 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146ae18b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x20))();
    return (bool)uVar1;
  }
  return (param_2->GameplayTags).ArrayNum == 0;
}

// HasAllTags @ 146ae18d0

bool __cdecl
UBlueprintGameplayTagLibrary::HasAllTags
          (FGameplayTagContainer *param_1,FGameplayTagContainer *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_10 [8];
  
  if (!param_3) {
    bVar4 = FGameplayTagContainer::HasAll(param_1,param_2);
    return bVar4;
  }
  iVar3 = (param_2->GameplayTags).ArrayNum;
  if (iVar3 == 0) {
LAB_146ae1778:
    bVar4 = true;
  }
  else {
    pFVar6 = (param_2->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_2->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_10);
      }
      if (pFVar6 == pFVar1) goto LAB_146ae1778;
      pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
      if (pFVar5 == pFVar2) break;
      while (*(longlong *)pFVar5 != *(longlong *)pFVar6) {
        pFVar5 = pFVar5 + 8;
        if (pFVar5 == pFVar2) goto LAB_146ae176e;
      }
      pFVar6 = pFVar6 + 8;
    }
LAB_146ae176e:
    bVar4 = false;
  }
  return bVar4;
}

// HasAnyMatchingGameplayTags @ 146ae1b30

bool __cdecl
UBlueprintGameplayTagLibrary::HasAnyMatchingGameplayTags
          (TScriptInterface<IGameplayTagAssetInterface> *param_1,FGameplayTagContainer *param_2)

{
  undefined1 uVar1;
  
  if ((*(longlong *)param_1 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146ae1b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x28))();
    return (bool)uVar1;
  }
  return false;
}

// HasAnyTags @ 146ae1b50

bool __cdecl
UBlueprintGameplayTagLibrary::HasAnyTags
          (FGameplayTagContainer *param_1,FGameplayTagContainer *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_10 [8];
  
  if (!param_3) {
    bVar4 = FGameplayTagContainer::HasAny(param_1,param_2);
    return bVar4;
  }
  iVar3 = (param_2->GameplayTags).ArrayNum;
  if (iVar3 != 0) {
    pFVar6 = (param_2->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_2->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_10);
      }
      if (pFVar6 == pFVar1) break;
      pFVar5 = (param_1->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
      if (pFVar5 != pFVar2) {
        do {
          if (*(longlong *)pFVar5 == *(longlong *)pFVar6) {
            return true;
          }
          pFVar5 = pFVar5 + 8;
        } while (pFVar5 != pFVar2);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return false;
}

// HasTag @ 146ae1c70

bool __cdecl
UBlueprintGameplayTagLibrary::HasTag
          (FGameplayTagContainer *param_1,FGameplayTag param_2,bool param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3) {
    if (param_2.TagName != (FName)0x0) {
      pFVar2 = (FName *)(param_1->GameplayTags).AllocatorInstance.Data;
      pFVar1 = pFVar2 + (param_1->GameplayTags).ArrayNum;
      for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
        if (*pFVar2 == param_2.TagName) {
          return true;
        }
      }
    }
  }
  else if (param_2.TagName != (FName)0x0) {
    pFVar2 = (FName *)(param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (param_1->GameplayTags).ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == param_2.TagName) {
        return true;
      }
    }
    pFVar2 = (FName *)(param_1->ParentTags).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (param_1->ParentTags).ArrayNum;
    if (pFVar2 != pFVar1) {
      do {
        if (*pFVar2 == param_2.TagName) {
          return true;
        }
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar1);
      return false;
    }
  }
  return false;
}

// IsGameplayTagValid @ 146ae2c60

bool __cdecl UBlueprintGameplayTagLibrary::IsGameplayTagValid(FGameplayTag param_1)

{
  return param_1.TagName != (FName)0x0;
}

// IsTagQueryEmpty @ 146ae2ca0

bool __cdecl UBlueprintGameplayTagLibrary::IsTagQueryEmpty(FGameplayTagQuery *param_1)

{
  return (param_1->QueryTokenStream).ArrayNum == 0;
}

// MakeGameplayTagContainerFromArray @ 146ae3ad0

FGameplayTagContainer * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray
          (FGameplayTagContainer *__return_storage_ptr__,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_1)

{
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&__return_storage_ptr__->GameplayTags,param_1);
  FGameplayTagContainer::FillParentTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeGameplayTagContainerFromTag @ 146ae3b10

FGameplayTagContainer * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag
          (FGameplayTagContainer *__return_storage_ptr__,FGameplayTag param_1)

{
  FName local_res10 [3];
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  local_res10[0] = param_1.TagName;
  FGameplayTagContainer::AddTag(__return_storage_ptr__,(FGameplayTag *)local_res10);
  return __return_storage_ptr__;
}

// MakeGameplayTagQuery @ 146ae3b50

FGameplayTagQuery * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagQuery
          (FGameplayTagQuery *__return_storage_ptr__,FGameplayTagQuery *param_1)

{
  FScriptContainerElement *pFVar1;
  
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
  FGameplayTagQuery::operator=(__return_storage_ptr__,param_1);
  pFVar1 = (param_1->AutoDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UserDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->QueryTokenStream).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->TagDictionary).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// MakeGameplayTagQuery_MatchAllTags @ 146ae3be0

FGameplayTagQuery * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchAllTags
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
  FGameplayTagQuery::Build(__return_storage_ptr__,&local_38,&local_48);
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

// MakeGameplayTagQuery_MatchAnyTags @ 146ae3ca0

FGameplayTagQuery * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchAnyTags
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
  FGameplayTagQuery::Build(__return_storage_ptr__,&local_38,&local_48);
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

// MakeGameplayTagQuery_MatchNoTags @ 146ae3d60

FGameplayTagQuery * __cdecl
UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchNoTags
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
  FGameplayTagQuery::Build(__return_storage_ptr__,&local_38,&local_48);
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

// MakeLiteralGameplayTag @ 146ae3e20

FGameplayTag __cdecl UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(FGameplayTag param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1.TagName = in_RDX;
  return (FGameplayTag)param_1.TagName;
}

// MakeLiteralGameplayTagContainer @ 146ae3e30

FGameplayTagContainer * __cdecl
UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer
          (FGameplayTagContainer *__return_storage_ptr__,FGameplayTagContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data =
       (param_1->GameplayTags).AllocatorInstance.Data;
  (param_1->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = (param_1->GameplayTags).ArrayNum;
  (__return_storage_ptr__->GameplayTags).ArrayMax = (param_1->GameplayTags).ArrayMax;
  (param_1->GameplayTags).ArrayNum = 0;
  (param_1->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data =
       (param_1->ParentTags).AllocatorInstance.Data;
  (param_1->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = (param_1->ParentTags).ArrayNum;
  (__return_storage_ptr__->ParentTags).ArrayMax = (param_1->ParentTags).ArrayMax;
  (param_1->ParentTags).ArrayNum = 0;
  (param_1->ParentTags).ArrayMax = 0;
  pFVar1 = (param_1->ParentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->GameplayTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// MatchesAnyTags @ 146ae5430

bool __cdecl
UBlueprintGameplayTagLibrary::MatchesAnyTags
          (FGameplayTag param_1,FGameplayTagContainer *param_2,bool param_3)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res8 [4];
  
  if (!param_3) {
    local_res8[0] = param_1.TagName;
    bVar3 = FGameplayTag::MatchesAny((FGameplayTag *)local_res8,param_2);
    return bVar3;
  }
  iVar2 = (param_2->GameplayTags).ArrayNum;
  if (iVar2 != 0) {
    pFVar4 = (FName *)(param_2->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar4 + iVar2;
    for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 1) {
      if (*pFVar4 == param_1.TagName) {
        return true;
      }
    }
  }
  return false;
}

// MatchesTag @ 146ae57e0

bool __cdecl
UBlueprintGameplayTagLibrary::MatchesTag(FGameplayTag param_1,FGameplayTag param_2,bool param_3)

{
  bool bVar1;
  FName local_res8;
  FName local_res10 [3];
  
  if (!param_3) {
    local_res8 = param_1.TagName;
    local_res10[0] = param_2.TagName;
    bVar1 = FGameplayTag::MatchesTag((FGameplayTag *)&local_res8,(FGameplayTag *)local_res10);
    return bVar1;
  }
  if (param_2.TagName == (FName)0x0) {
    return false;
  }
  return param_1.TagName == param_2.TagName;
}

// NotEqual_GameplayTag @ 146ae7140

bool __cdecl
UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(FGameplayTag param_1,FGameplayTag param_2)

{
  return param_1.TagName != param_2.TagName;
}

// NotEqual_GameplayTagContainer @ 146ae7150

bool __cdecl
UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer
          (FGameplayTagContainer *param_1,FGameplayTagContainer *param_2)

{
  bool bVar1;
  
  if ((param_1->GameplayTags).ArrayNum != (param_2->GameplayTags).ArrayNum) {
    return true;
  }
  bVar1 = FGameplayTagContainer::HasAllExact(param_1,param_2);
  return !bVar1;
}

// NotEqual_TagContainerTagContainer @ 146ae7180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer
          (FGameplayTagContainer *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FName *pFVar6;
  UGameplayTagsManager *pUVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType FVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  FGameplayTag local_res8;
  FName local_res10;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FGameplayTagContainer local_88;
  FString local_68;
  FString local_58;
  FString local_48;
  int iVar15;
  
  iVar15 = 0;
  iVar14 = 0;
  local_88.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.GameplayTags.ArrayNum = 0;
  local_88.GameplayTags.ArrayMax = 0;
  local_88.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ParentTags.ArrayNum = 0;
  local_88.ParentTags.ArrayMax = 0;
  ::FString::FString(&local_48,L"(");
  ::FString::FString(&local_98,L")");
  local_c8.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_c8.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  iVar12 = local_48.Data.ArrayNum + -1;
  FVar11.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar12 = iVar14;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  bVar5 = ::FString::StartsWith(&local_c8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
  if (!bVar5) goto LAB_146ae768e;
  iVar12 = local_98.Data.ArrayNum + -1;
  FVar11.Data = local_98.Data.AllocatorInstance.Data;
  if (local_98.Data.ArrayNum == 0) {
    iVar12 = iVar14;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  bVar5 = ::FString::EndsWith(&local_c8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
  if (!bVar5) goto LAB_146ae768e;
  iVar12 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar12 = iVar14;
  }
  if (iVar12 + -1 < iVar12) {
    iVar12 = iVar12 + -1;
  }
  iVar10 = iVar15;
  if (0 < iVar12) {
    iVar10 = iVar12;
  }
  ::FString::RemoveAt(&local_c8,iVar10,1,No);
  ::FString::RemoveAt(&local_c8,0,1,No);
  ::FString::FString(&local_68,L"=");
  ::FString::Split(&local_c8,&local_68,(FString *)0x0,&local_c8,CaseSensitive,FromStart);
  iVar10 = 0;
  iVar12 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar12 = iVar10;
  }
  if (iVar12 + -1 < iVar12) {
    iVar12 = iVar12 + -1;
  }
  iVar9 = iVar15;
  if (0 < iVar12) {
    iVar9 = iVar12;
  }
  ::FString::RemoveAt(&local_c8,iVar9,1,No);
  ::FString::RemoveAt(&local_c8,0,1,No);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  ::FString::FString(&local_58,L",");
  ::FString::FString(&local_a8,L"\"");
  bVar5 = ::FString::Split(&local_c8,&local_58,&local_b8,&local_d8,CaseSensitive,FromStart);
  if (bVar5) {
    do {
      ::FString::Split(&local_b8,&local_68,(FString *)0x0,&local_b8,CaseSensitive,FromStart);
      iVar12 = local_98.Data.ArrayNum + -1;
      FVar11.Data = local_98.Data.AllocatorInstance.Data;
      if (local_98.Data.ArrayNum == 0) {
        iVar12 = iVar14;
        FVar11.Data = (FScriptContainerElement *)L"";
      }
      bVar5 = ::FString::EndsWith(&local_b8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
      if (bVar5) {
        iVar12 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar12 = iVar10;
        }
        if (iVar12 + -1 < iVar12) {
          iVar12 = iVar12 + -1;
        }
        iVar9 = iVar10;
        if (0 < iVar12) {
          iVar9 = iVar12;
        }
        ::FString::RemoveAt(&local_b8,iVar9,1,No);
        iVar12 = local_a8.Data.ArrayNum + -1;
        FVar11.Data = local_a8.Data.AllocatorInstance.Data;
        if (local_a8.Data.ArrayNum == 0) {
          iVar12 = iVar14;
          FVar11.Data = (FScriptContainerElement *)L"";
        }
        bVar5 = ::FString::StartsWith(&local_b8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
        if (bVar5) {
          iVar12 = local_a8.Data.ArrayNum + -1;
          FVar11.Data = local_a8.Data.AllocatorInstance.Data;
          if (local_a8.Data.ArrayNum == 0) {
            iVar12 = iVar14;
            FVar11.Data = (FScriptContainerElement *)L"";
          }
          bVar5 = ::FString::EndsWith(&local_b8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
          if (bVar5) {
            iVar12 = local_b8.Data.ArrayNum + -1;
            if (local_b8.Data.ArrayNum == 0) {
              iVar12 = iVar10;
            }
            if (iVar12 + -1 < iVar12) {
              iVar12 = iVar12 + -1;
            }
            iVar9 = iVar15;
            if (0 < iVar12) {
              iVar9 = iVar12;
            }
            ::FString::RemoveAt(&local_b8,iVar9,1,No);
            ::FString::RemoveAt(&local_b8,0,1,No);
          }
        }
      }
      iVar12 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar12 = iVar15;
      }
      ::FString::AssignRange(&local_c8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar12);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar11.Data = local_b8.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
      pUVar7 = UGameplayTagsManager::Get();
      UGameplayTagsManager::RequestGameplayTag(pUVar7,(FName)&local_res8,(*pFVar6).ComparisonIndex);
      FGameplayTagContainer::AddTag(&local_88,&local_res8);
      bVar5 = ::FString::Split(&local_c8,&local_58,&local_b8,&local_d8,CaseSensitive,FromStart);
    } while (bVar5);
  }
  if (local_d8.Data.ArrayNum < 2) {
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    uVar3 = local_c8.Data._8_8_;
    iVar12 = local_c8.Data.ArrayNum;
    local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    uVar4 = local_c8.Data._8_8_;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = (int)uVar3;
    local_c8.Data.ArrayMax = SUB84(uVar3,4);
    local_d8.Data.ArrayNum = local_c8.Data.ArrayNum;
    local_d8.Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data._8_8_ = uVar4;
    if (1 < iVar12) goto LAB_146ae7510;
  }
  else {
LAB_146ae7510:
    ::FString::Split(&local_d8,&local_68,(FString *)0x0,&local_d8,CaseSensitive,FromStart);
    iVar12 = local_98.Data.ArrayNum + -1;
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      iVar12 = iVar14;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    bVar5 = ::FString::EndsWith(&local_d8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
    if (bVar5) {
      iVar12 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar12 = iVar15;
      }
      if (iVar12 + -1 < iVar12) {
        iVar12 = iVar12 + -1;
      }
      iVar10 = iVar15;
      if (0 < iVar12) {
        iVar10 = iVar12;
      }
      ::FString::RemoveAt(&local_d8,iVar10,1,No);
      iVar12 = local_a8.Data.ArrayNum + -1;
      FVar11.Data = local_a8.Data.AllocatorInstance.Data;
      if (local_a8.Data.ArrayNum == 0) {
        iVar12 = iVar14;
        FVar11.Data = (FScriptContainerElement *)L"";
      }
      bVar5 = ::FString::StartsWith(&local_d8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
      if (bVar5) {
        iVar12 = local_a8.Data.ArrayNum + -1;
        FVar11.Data = local_a8.Data.AllocatorInstance.Data;
        if (local_a8.Data.ArrayNum == 0) {
          iVar12 = iVar14;
          FVar11.Data = (FScriptContainerElement *)L"";
        }
        bVar5 = ::FString::EndsWith(&local_d8,(wchar_t *)FVar11.Data,iVar12,CaseSensitive);
        if (bVar5) {
          iVar12 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar12 = iVar15;
          }
          if (iVar12 + -1 < iVar12) {
            iVar12 = iVar12 + -1;
          }
          if (0 < iVar12) {
            iVar15 = iVar12;
          }
          ::FString::RemoveAt(&local_d8,iVar15,1,No);
          ::FString::RemoveAt(&local_d8,0,1,No);
        }
      }
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
    pUVar7 = UGameplayTagsManager::Get();
    UGameplayTagsManager::RequestGameplayTag(pUVar7,(FName)&local_res8,(*pFVar6).ComparisonIndex);
    FGameplayTagContainer::AddTag(&local_88,&local_res8);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_146ae768e:
  iVar12 = local_88.GameplayTags.ArrayNum;
  uVar13 = (ulonglong)local_88.GameplayTags.ArrayNum;
  bVar5 = true;
  if (((param_1->GameplayTags).ArrayNum == local_88.GameplayTags.ArrayNum) &&
     (bVar5 = false, local_88.GameplayTags.ArrayNum != 0)) {
    pFVar2 = local_88.GameplayTags.AllocatorInstance.Data + uVar13 * 8;
    FVar11.Data = local_88.GameplayTags.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar12) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
        uVar13 = local_88.GameplayTags._8_8_ & 0xffffffff;
      }
      bVar5 = false;
      if (FVar11.Data == pFVar2) break;
      pFVar8 = (param_1->GameplayTags).AllocatorInstance.Data;
      pFVar1 = pFVar8 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
      bVar5 = true;
      if (pFVar8 == pFVar1) break;
      while (*(longlong *)pFVar8 != *(longlong *)FVar11.Data) {
        pFVar8 = pFVar8 + 8;
        if (pFVar8 == pFVar1) goto LAB_146ae7701;
      }
      FVar11.Data = FVar11.Data + 8;
    }
  }
LAB_146ae7701:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentTags.AllocatorInstance.Data);
  }
  if (local_88.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GameplayTags.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->ParentTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->GameplayTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return bVar5;
}

// NotEqual_TagTag @ 146ae77b0

bool __cdecl UBlueprintGameplayTagLibrary::NotEqual_TagTag(FGameplayTag param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  local_res8 = param_1.TagName;
  ::FName::ToString(&local_res8,&local_18);
  iVar2 = (param_2->Data).ArrayNum;
  if (local_18.Data.ArrayNum == iVar2) {
    if (local_18.Data.ArrayNum < 2) {
      bVar3 = false;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar3 = iVar2 != 0;
    }
  }
  else {
    bVar3 = local_18.Data.ArrayNum + iVar2 != 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar3;
}

// RemoveGameplayTag @ 146aead40

bool __cdecl
UBlueprintGameplayTagLibrary::RemoveGameplayTag(FGameplayTagContainer *param_1,FGameplayTag param_2)

{
  bool bVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_2.TagName;
  bVar1 = FGameplayTagContainer::RemoveTag(param_1,(FGameplayTag *)local_res10,false);
  return bVar1;
}

// StaticRegisterNativesUBlueprintGameplayTagLibrary @ 146aeda40

void __cdecl UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x25;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddGameplayTag @ 146af12c0

void __cdecl
UBlueprintGameplayTagLibrary::execAddGameplayTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGameplayTagContainer *this;
  FName local_res10;
  FName local_res20;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = &local_28;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGameplayTagContainer::AddTag(this,(FGameplayTag *)&local_res20);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execAppendGameplayTagContainers @ 146af13d0

void __cdecl
UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGameplayTagContainer *pFVar2;
  FGameplayTagContainer *this;
  FGameplayTagContainer local_48;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GameplayTags.ArrayNum = 0;
  local_48.GameplayTags.ArrayMax = 0;
  this = &local_28;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_48.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentTags.ArrayNum = 0;
  local_48.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar2 = &local_48;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar2 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGameplayTagContainer::AppendTags(this,pFVar2);
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execBreakGameplayTagContainer @ 146af1570

void __cdecl
UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_38;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_28;
  void *local_18;
  undefined8 local_10;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar2 = &local_28;
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = &local_38;
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=(this,pTVar2);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConv_ObjectToGameplayTagAssetInterface @ 146af16a0

void __cdecl
UBlueprintGameplayTagLibrary::execConv_ObjectToGameplayTagAssetInterface
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *this;
  UClass *pUVar2;
  void *pvVar3;
  UObject *local_res10;
  
  pvVar3 = (void *)0x0;
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res10 == (UObject *)0x0) goto LAB_146af173d;
    UE::GC::MarkAsReachable(local_res10);
  }
  if (this != (UObject *)0x0) {
    pUVar2 = UGameplayTagAssetInterface::StaticClass();
    pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
  }
LAB_146af173d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(this);
  }
  *(UObject **)param_3 = this;
  *(void **)((longlong)param_3 + 8) = pvVar3;
  return;
}

// execDoesContainerMatchTagQuery @ 146af1770

void __cdecl
UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagQuery *this;
  FGameplayTagContainer *pFVar3;
  FGameplayTagContainer local_78;
  FGameplayTagQuery local_58;
  
  local_78.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.GameplayTags.ArrayNum = 0;
  local_78.GameplayTags.ArrayMax = 0;
  local_78.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ParentTags.ArrayNum = 0;
  local_78.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_58.TokenStreamVersion = 0;
  local_58.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = &local_78;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar3 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_58.TagDictionary.ArrayNum = 0;
  local_58.TagDictionary.ArrayMax = 0;
  local_58.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.QueryTokenStream.ArrayNum = 0;
  local_58.QueryTokenStream.ArrayMax = 0;
  local_58.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UserDescription.Data.ArrayNum = 0;
  local_58.UserDescription.Data.ArrayMax = 0;
  local_58.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AutoDescription.Data.ArrayNum = 0;
  local_58.AutoDescription.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = &local_58;
  if ((FGameplayTagQuery *)param_2->MostRecentPropertyAddress != (FGameplayTagQuery *)0x0) {
    this = (FGameplayTagQuery *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FGameplayTagQuery::Matches(this,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_58.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AutoDescription.Data.AllocatorInstance.Data);
  }
  if (local_58.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UserDescription.Data.AllocatorInstance.Data);
  }
  if (local_58.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.QueryTokenStream.AllocatorInstance.Data);
  }
  if (local_58.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.TagDictionary.AllocatorInstance.Data);
  }
  if (local_78.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ParentTags.AllocatorInstance.Data);
  }
  if (local_78.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execDoesTagAssetInterfaceHaveTag @ 146af1900

void __cdecl
UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 local_res10;
  UObject *local_18;
  longlong *plStack_10;
  
  local_18 = (UObject *)0x0;
  plStack_10 = (longlong *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_18;
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  plVar5 = plStack_10;
  if (pUVar3 == (UObject *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,uVar2);
    *(undefined1 *)param_3 = uVar4;
  }
  return;
}

// execEqualEqual_GameplayTag @ 146af1a10

void __cdecl
UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
  local_res18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18 == local_res10;
  return;
}

// execEqualEqual_GameplayTagContainer @ 146af1ae0

void __cdecl
UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  FGameplayTagContainer *this;
  FGameplayTagContainer local_48;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GameplayTags.ArrayNum = 0;
  local_48.GameplayTags.ArrayMax = 0;
  this = &local_28;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_48.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentTags.ArrayNum = 0;
  local_48.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar3 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((this->GameplayTags).ArrayNum == (pFVar3->GameplayTags).ArrayNum) {
    bVar2 = FGameplayTagContainer::HasAllExact(this,pFVar3);
  }
  else {
    bVar2 = false;
  }
  *(bool *)param_3 = bVar2;
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execFilter @ 146af1c40

void __cdecl
UBlueprintGameplayTagLibrary::execFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGameplayTagContainer *pFVar2;
  FGameplayTagContainer *this;
  int local_res10 [2];
  FGameplayTagContainer local_78;
  FGameplayTagContainer local_58;
  FGameplayTagContainer local_38;
  
  local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.GameplayTags.ArrayNum = 0;
  local_58.GameplayTags.ArrayMax = 0;
  local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParentTags.ArrayNum = 0;
  local_58.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.GameplayTags.ArrayNum = 0;
  local_78.GameplayTags.ArrayMax = 0;
  this = &local_58;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_78.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ParentTags.ArrayNum = 0;
  local_78.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  pFVar2 = &local_78;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar2 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    FGameplayTagContainer::Filter(this,&local_38,pFVar2);
  }
  else {
    FGameplayTagContainer::FilterExact(this,&local_38,pFVar2);
  }
  FGameplayTagContainer::operator=(param_3,&local_38);
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  if (local_78.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ParentTags.AllocatorInstance.Data);
  }
  if (local_78.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.GameplayTags.AllocatorInstance.Data);
  }
  if (local_58.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ParentTags.AllocatorInstance.Data);
  }
  if (local_58.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execGetAllActorsOfClassMatchingTagQuery @ 146af1e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  bool bVar7;
  int iVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  AActor *this;
  longlong *plVar11;
  UObject *pUVar12;
  FString *pFVar13;
  ForAnyElementType *pFVar14;
  wchar_t *pwVar15;
  FGameplayTagQuery *this_00;
  UObject *local_res10 [2];
  UObject *local_res20;
  AActor *local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  FGameplayTagContainer local_160;
  FGameplayTagQuery local_138;
  UObject *local_e8;
  FName local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  TActorIteratorBase<TActorIterator<AActor>_> local_a8;
  FString local_48;
  
  bVar5 = false;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_138.TokenStreamVersion = 0;
  local_138.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.TagDictionary.ArrayNum = 0;
  local_138.TagDictionary.ArrayMax = 0;
  local_138.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.QueryTokenStream.ArrayNum = 0;
  local_138.QueryTokenStream.ArrayMax = 0;
  local_138.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.UserDescription.Data.ArrayNum = 0;
  local_138.UserDescription.Data.ArrayMax = 0;
  local_138.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AutoDescription.Data.ArrayNum = 0;
  local_138.AutoDescription.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  this_00 = &local_138;
  if ((FGameplayTagQuery *)param_2->MostRecentPropertyAddress != (FGameplayTagQuery *)0x0) {
    this_00 = (FGameplayTagQuery *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  pUVar6 = local_res10[0];
  pFVar14 = &local_170;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar14 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  pUVar12 = local_res20;
  piVar1 = (int *)((longlong)&pFVar14[1].Data + 4);
  *(undefined4 *)&pFVar14[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar14,0,piVar1);
  }
  pUVar9 = UEngine::GetWorldFromContextObject(GEngine,pUVar12,LogAndReturnNull);
  if ((pUVar6 != (UObject *)0x0) &&
     (pUVar10 = Z_Construct_UClass_AActor_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)&pUVar6[1].field_0x10 < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (pUVar9 != (UWorld *)0x0)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar6), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_a8.Flags = OnlyActiveLevels|SkipPendingKill;
      local_a8.State.bIsSet = false;
      local_e8 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FActorIteratorState::FActorIteratorState
                (&local_a8.State.TypedValue,pUVar9,(TSubclassOf<AActor>)&local_e8);
      local_a8.State.bIsSet = true;
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
      pwVar15 = L"";
      while( true ) {
        if ((local_a8.State.bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_a8.State.TypedValue.ReachedEnd != false) break;
        if ((local_a8.State.bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = FActorIteratorState::GetActorChecked(&local_a8.State.TypedValue);
        if (this == (AActor *)0x0) {
          pFVar13 = GetTypeName<AActor>(&local_48);
          if ((pFVar13->Data).ArrayNum != 0) {
            pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar15);
        }
        local_178 = this;
        if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
          pUVar10 = UGameplayTagAssetInterface::StaticClass();
          plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar10);
          if (plVar11 == (longlong *)0x0) {
            if (bVar5) goto LAB_146af2304;
            if (2 < (byte)LogGameplayTags._0_1_) {
              pUVar10 = Z_Construct_UClass_AActor_NoRegister();
              if (pUVar10 == (UClass *)0x0) {
LAB_146af2286:
                pUVar12 = (UObject *)0x0;
              }
              else {
                iVar8 = (int)pUVar10->_padding_;
                if ((*(int *)&pUVar6[1].field_0x10 < iVar8) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar8 * 8) !=
                    &pUVar10->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                pUVar12 = pUVar6;
                if (!bVar5) goto LAB_146af2286;
              }
              local_e0.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
              local_e0.Number = *(uint *)&pUVar12->field_0x1c;
              ::FName::ToString(&local_e0,&local_c0);
              local_d8 = (FName)local_178->_padding_;
              ::FName::ToString(&local_d8,&local_d0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = true;
            goto LAB_146af2304;
          }
          local_160.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.GameplayTags.ArrayNum = 0;
          local_160.GameplayTags.ArrayMax = 0;
          local_160.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.ParentTags.ArrayNum = 0;
          local_160.ParentTags.ArrayMax = 0;
          (**(code **)(*plVar11 + 0x10))(plVar11,&local_160);
          bVar7 = FGameplayTagQuery::Matches(this_00,&local_160);
          if (bVar7) {
            if (((pFVar14->Data <= (FScriptContainerElement *)&local_178) &&
                ((FScriptContainerElement *)&local_178 < pFVar14->Data + (longlong)*piVar1 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = *(int *)&pFVar14[1].Data;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar14,piVar1);
            }
            *(int *)&pFVar14[1].Data = iVar8 + 1;
            *(AActor **)(pFVar14->Data + (longlong)iVar8 * 8) = local_178;
          }
          if (local_160.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.ParentTags.AllocatorInstance.Data);
          }
          if (local_160.GameplayTags.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_146af2304;
          FMemory::Free(local_160.GameplayTags.AllocatorInstance.Data);
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
        }
        else {
LAB_146af2304:
          TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_a8);
        }
      }
      if (local_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_a8.State.TypedValue.CurrentWorld,
                   local_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if (local_138.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AutoDescription.Data.AllocatorInstance.Data);
  }
  if (local_138.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.UserDescription.Data.AllocatorInstance.Data);
  }
  if (local_138.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.QueryTokenStream.AllocatorInstance.Data);
  }
  if (local_138.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.TagDictionary.AllocatorInstance.Data);
  }
  return;
}

// execGetDebugStringFromGameplayTag @ 146af23d0

void __cdecl
UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FName local_res18;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  ::FName::ToString(&local_res18,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetDebugStringFromGameplayTagContainer @ 146af24c0

void __cdecl
UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void **ppvVar7;
  FString local_48;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ppvVar7 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = *(int *)(ppvVar7 + 1);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
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
      ::FName::ToString((FName *)((longlong)*ppvVar7 + (longlong)(int)uVar6 * 8),&local_38);
      uVar4 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar4 = 0;
      }
      ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((int)uVar6 < *(int *)(ppvVar7 + 1) + -1) {
        ::FString::AppendChars(&local_48,L", ",2);
      }
      iVar5 = *(int *)(ppvVar7 + 1);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetNumGameplayTagsInContainer @ 146af26b0

void __cdecl
UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar2 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(ppvVar2 + 1);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetOwnedGameplayTags @ 146af2770

void __cdecl
UBlueprintGameplayTagLibrary::execGetOwnedGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong *plVar3;
  void **ppvVar4;
  UObject *local_38;
  longlong *plStack_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = (UObject *)0x0;
  plStack_30 = (longlong *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pUVar2 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  local_28 = (void *)0x0;
  plVar3 = plStack_30;
  if (pUVar2 == (UObject *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  local_20 = 0;
  local_10 = 0;
  local_18 = (void *)0x0;
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (pUVar2 != (UObject *)0x0) {
      plVar3 = plStack_30;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_28;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = (void *)0x0;
  }
  ppvVar4 = (void **)((longlong)param_3 + 0x10);
  if (ppvVar4 != &local_18) {
    if (*ppvVar4 != (void *)0x0) {
      FMemory::Free(*ppvVar4);
    }
    *ppvVar4 = local_18;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_10;
    local_18 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetTagName @ 146af28e0

void __cdecl
UBlueprintGameplayTagLibrary::execGetTagName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)puVar2;
  return;
}

// execHasAllMatchingGameplayTags @ 146af2a60

void __cdecl
UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  longlong *plVar4;
  void **ppvVar5;
  UObject *local_38;
  longlong *plStack_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = (UObject *)0x0;
  plStack_30 = (longlong *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar2 = local_38;
  ppvVar5 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  plVar4 = plStack_30;
  if (pUVar2 == (UObject *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = *(int *)(ppvVar5 + 1) == 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,ppvVar5);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execHasAllTags @ 146af2bb0

void __cdecl
UBlueprintGameplayTagLibrary::execHasAllTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  FGameplayTagContainer *this;
  int local_res10 [2];
  FGameplayTagContainer local_58;
  FGameplayTagContainer local_38;
  
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.GameplayTags.ArrayNum = 0;
  local_58.GameplayTags.ArrayMax = 0;
  this = &local_38;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParentTags.ArrayNum = 0;
  local_58.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  pFVar3 = &local_58;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar3 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    bVar2 = FGameplayTagContainer::HasAll(this,pFVar3);
  }
  else {
    bVar2 = FGameplayTagContainer::HasAllExact(this,pFVar3);
  }
  *(bool *)param_3 = bVar2;
  if (local_58.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ParentTags.AllocatorInstance.Data);
  }
  if (local_58.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.GameplayTags.AllocatorInstance.Data);
  }
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execHasAnyMatchingGameplayTags @ 146af2e30

void __cdecl
UBlueprintGameplayTagLibrary::execHasAnyMatchingGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  longlong *plVar4;
  void **ppvVar5;
  UObject *local_38;
  longlong *plStack_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = (UObject *)0x0;
  plStack_30 = (longlong *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar2 = local_38;
  ppvVar5 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  plVar4 = plStack_30;
  if (pUVar2 == (UObject *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,ppvVar5);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execHasAnyTags @ 146af2f80

void __cdecl
UBlueprintGameplayTagLibrary::execHasAnyTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  FGameplayTagContainer *this;
  int local_res10 [2];
  FGameplayTagContainer local_58;
  FGameplayTagContainer local_38;
  
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.GameplayTags.ArrayNum = 0;
  local_58.GameplayTags.ArrayMax = 0;
  this = &local_38;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParentTags.ArrayNum = 0;
  local_58.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  pFVar3 = &local_58;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar3 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    bVar2 = FGameplayTagContainer::HasAny(this,pFVar3);
  }
  else {
    bVar2 = FGameplayTagContainer::HasAnyExact(this,pFVar3);
  }
  *(bool *)param_3 = bVar2;
  if (local_58.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ParentTags.AllocatorInstance.Data);
  }
  if (local_58.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.GameplayTags.AllocatorInstance.Data);
  }
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execHasTag @ 146af31c0

void __cdecl
UBlueprintGameplayTagLibrary::execHasTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  undefined1 uVar4;
  longlong *plVar5;
  void **ppvVar6;
  int local_res10 [2];
  longlong local_res18 [2];
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  ppvVar6 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    if (local_res18[0] != 0) {
      plVar5 = *ppvVar6;
      plVar2 = plVar5 + *(int *)(ppvVar6 + 1);
      for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        if (*plVar5 == local_res18[0]) goto LAB_146af3370;
      }
      plVar5 = ppvVar6[2];
      plVar2 = plVar5 + *(int *)(ppvVar6 + 3);
      for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        if (*plVar5 == local_res18[0]) goto LAB_146af3370;
      }
    }
  }
  else if (local_res18[0] != 0) {
    plVar5 = *ppvVar6;
    plVar2 = plVar5 + *(int *)(ppvVar6 + 1);
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      if (*plVar5 == local_res18[0]) goto LAB_146af3370;
    }
  }
  uVar4 = 0;
LAB_146af32f8:
  *(undefined1 *)param_3 = uVar4;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
LAB_146af3370:
  uVar4 = 1;
  goto LAB_146af32f8;
}

// execIsGameplayTagValid @ 146af3380

void __cdecl
UBlueprintGameplayTagLibrary::execIsGameplayTagValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res10 != 0;
  return;
}

// execIsTagQueryEmpty @ 146af3410

void __cdecl
UBlueprintGameplayTagLibrary::execIsTagQueryEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_58 [8];
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)(puVar2 + 0x20) == 0;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execMakeGameplayTagContainerFromArray @ 146af3510

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  FGameplayTagContainer *pFVar7;
  undefined1 local_38 [24];
  undefined8 local_20;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_38._0_8_ = (FScriptContainerElement *)0x0;
  local_38._8_4_ = 0;
  local_38._12_4_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_38._16_8_ = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  pFVar7 = (FGameplayTagContainer *)local_38;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar7 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((FGameplayTagContainer *)(local_38 + 0x10) == pFVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = *(int *)((longlong)&pFVar7->GameplayTags + 8);
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar1,(ForAnyElementType *)(local_38 + 0x10),(int *)&local_20,
                       (int *)((longlong)&local_20 + 4));
    memcpy((FScriptContainerElement *)(local_38._16_8_ + (longlong)iVar5 * 8),
           *(void **)&pFVar7->GameplayTags,(longlong)iVar1 << 3);
  }
  FGameplayTagContainer::FillParentTags((FGameplayTagContainer *)(local_38 + 0x10));
  if (param_3 != (FGameplayTagContainer *)(local_38 + 0x10)) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = local_38._16_8_;
    *(int *)((longlong)param_3 + 8) = (int)local_20;
    *(int *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    local_38._16_8_ = (FScriptContainerElement *)0x0;
  }
  puVar6 = (undefined1 *)((longlong)param_3 + 0x10);
  if ((ForAnyElementType *)puVar6 != &local_18) {
    if (*(void **)puVar6 != (void *)0x0) {
      FMemory::Free(*(void **)puVar6);
    }
    *(FScriptContainerElement **)puVar6 = local_18.Data;
    *(int *)((longlong)param_3 + 0x18) = (int)local_10;
    *(int *)((longlong)param_3 + 0x1c) = local_10._4_4_;
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if ((FScriptContainerElement *)local_38._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._16_8_);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return;
}

// execMakeGameplayTagContainerFromTag @ 146af36f0

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  FName local_res10;
  FName local_res18 [2];
  FGameplayTagContainer local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  FGameplayTagContainer::AddTag(&local_38,(FGameplayTag *)local_res18);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.GameplayTags.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.GameplayTags.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.GameplayTags.ArrayMax;
    local_38.GameplayTags.ArrayNum = 0;
    local_38.GameplayTags.ArrayMax = 0;
    local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  puVar2 = (undefined8 *)((longlong)param_3 + 0x10);
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)puVar2 != &local_38.ParentTags) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = local_38.ParentTags.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x18) = local_38.ParentTags.ArrayNum;
    *(int *)((longlong)param_3 + 0x1c) = local_38.ParentTags.ArrayMax;
    local_38.ParentTags.ArrayNum = 0;
    local_38.ParentTags.ArrayMax = 0;
    local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execMakeGameplayTagQuery @ 146af3820

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  size_t _Size;
  longlong lVar5;
  int iVar6;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_f0;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  int local_a8 [2];
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_a0;
  void *local_90;
  ulonglong local_88;
  void *local_80;
  ulonglong local_78;
  void *local_70;
  undefined8 local_68;
  FGameplayTagQuery local_58;
  
  iVar6 = 0;
  local_a8[0] = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  iVar2 = local_a8[0];
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=(&local_f0,&local_a0);
  pvVar3 = local_90;
  iVar4 = (int)local_88;
  _Size = (size_t)(int)local_88;
  local_d8 = CONCAT44(local_d8._4_4_,(int)local_88);
  if (((int)local_88 == 0) && (local_d8._4_4_ == 0)) {
    local_d8 = local_88 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_88,local_d8._4_4_,&local_e0,(int)local_88,
               (int *)((longlong)&local_d8 + 4));
    if (iVar4 != 0) {
      memcpy(local_e0.Data,pvVar3,_Size);
    }
  }
  pvVar3 = local_80;
  iVar4 = (int)local_78;
  lVar5 = (longlong)(int)local_78;
  local_c8 = CONCAT44(local_c8._4_4_,(int)local_78);
  if (((int)local_78 == 0) && (local_c8._4_4_ == 0)) {
    local_c8 = local_78 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_78,local_c8._4_4_,&local_d0,(int)local_78,
               (int *)((longlong)&local_c8 + 4));
    if (iVar4 != 0) {
      memcpy(local_d0.Data,pvVar3,lVar5 * 2);
    }
  }
  pvVar3 = local_70;
  iVar4 = (int)local_68;
  lVar5 = (longlong)(int)local_68;
  local_b8 = CONCAT44(local_b8._4_4_,(int)local_68);
  if (((int)local_68 != 0) || (local_b8._4_4_ != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,local_b8._4_4_,&local_c0,(int)local_68,
               (int *)((longlong)&local_b8 + 4));
    if (iVar4 != 0) {
      memcpy(local_c0.Data,pvVar3,lVar5 * 2);
    }
    iVar6 = local_b8._4_4_;
  }
  local_58.TokenStreamVersion = iVar2;
  local_58.TagDictionary.AllocatorInstance.Data = local_f0.AllocatorInstance.Data;
  local_58.TagDictionary.ArrayNum = local_f0.ArrayNum;
  local_58.TagDictionary.ArrayMax = local_f0.ArrayMax;
  local_58.QueryTokenStream.AllocatorInstance.Data = local_e0.Data;
  local_58.QueryTokenStream.ArrayNum = (int)local_d8;
  local_58.QueryTokenStream.ArrayMax = local_d8._4_4_;
  local_58.UserDescription.Data.AllocatorInstance.Data = local_d0.Data;
  local_58.UserDescription.Data.ArrayNum = (int)local_c8;
  local_58.UserDescription.Data.ArrayMax = local_c8._4_4_;
  local_58.AutoDescription.Data.AllocatorInstance.Data = local_c0.Data;
  local_58.AutoDescription.Data.ArrayNum = (int)local_b8;
  local_b8 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_58.AutoDescription.Data.ArrayMax = iVar6;
  FGameplayTagQuery::operator=(param_3,&local_58);
  if (local_58.AutoDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AutoDescription.Data.AllocatorInstance.Data);
  }
  if (local_58.UserDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UserDescription.Data.AllocatorInstance.Data);
  }
  if (local_58.QueryTokenStream.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.QueryTokenStream.AllocatorInstance.Data);
  }
  if (local_58.TagDictionary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.TagDictionary.AllocatorInstance.Data);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// execMakeGameplayTagQuery_MatchAllTags @ 146af3b40

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery_MatchAllTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar2;
  FGameplayTagQueryExpression local_a8;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_80;
  void *local_70;
  undefined8 local_68;
  FGameplayTagQuery local_60;
  FString local_18;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a8._1_4_ = 0;
  local_a8._5_2_ = 0;
  pTVar2 = &local_80;
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_a8._7_1_ = 0;
  local_a8.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ExprSet.ArrayNum = 0;
  local_a8.ExprSet.ArrayMax = 0;
  local_a8.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TagSet.ArrayNum = 0;
  local_a8.TagSet.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8.ExprType = AllTagsMatch;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_a8.TagSet,pTVar2);
  local_60.TokenStreamVersion = 0;
  local_60.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.TagDictionary.ArrayNum = 0;
  local_60.TagDictionary.ArrayMax = 0;
  local_60.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.QueryTokenStream.ArrayNum = 0;
  local_60.QueryTokenStream.ArrayMax = 0;
  local_60.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.UserDescription.Data.ArrayNum = 0;
  local_60.UserDescription.Data.ArrayMax = 0;
  local_60.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.AutoDescription.Data.ArrayNum = 0;
  local_60.AutoDescription.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGameplayTagQuery::Build(&local_60,&local_a8,&local_18);
  if (local_a8.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data,
             local_a8.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_a8.ExprSet.AllocatorInstance.Data);
  }
  FGameplayTagQuery::operator=(param_3,&local_60);
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
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// execMakeGameplayTagQuery_MatchAnyTags @ 146af3ce0

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery_MatchAnyTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar2;
  FGameplayTagQueryExpression local_a8;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_80;
  void *local_70;
  undefined8 local_68;
  FGameplayTagQuery local_60;
  FString local_18;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a8._1_4_ = 0;
  local_a8._5_2_ = 0;
  pTVar2 = &local_80;
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_a8._7_1_ = 0;
  local_a8.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ExprSet.ArrayNum = 0;
  local_a8.ExprSet.ArrayMax = 0;
  local_a8.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TagSet.ArrayNum = 0;
  local_a8.TagSet.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8.ExprType = AnyTagsMatch;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_a8.TagSet,pTVar2);
  local_60.TokenStreamVersion = 0;
  local_60.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.TagDictionary.ArrayNum = 0;
  local_60.TagDictionary.ArrayMax = 0;
  local_60.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.QueryTokenStream.ArrayNum = 0;
  local_60.QueryTokenStream.ArrayMax = 0;
  local_60.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.UserDescription.Data.ArrayNum = 0;
  local_60.UserDescription.Data.ArrayMax = 0;
  local_60.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.AutoDescription.Data.ArrayNum = 0;
  local_60.AutoDescription.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGameplayTagQuery::Build(&local_60,&local_a8,&local_18);
  if (local_a8.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data,
             local_a8.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_a8.ExprSet.AllocatorInstance.Data);
  }
  FGameplayTagQuery::operator=(param_3,&local_60);
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
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// execMakeGameplayTagQuery_MatchNoTags @ 146af3e80

void __cdecl
UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery_MatchNoTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar2;
  FGameplayTagQueryExpression local_a8;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> local_80;
  void *local_70;
  undefined8 local_68;
  FGameplayTagQuery local_60;
  FString local_18;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a8._1_4_ = 0;
  local_a8._5_2_ = 0;
  pTVar2 = &local_80;
  if ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_a8._7_1_ = 0;
  local_a8.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ExprSet.ArrayNum = 0;
  local_a8.ExprSet.ArrayMax = 0;
  local_a8.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TagSet.ArrayNum = 0;
  local_a8.TagSet.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8.ExprType = NoTagsMatch;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Append<FGameplayTag,TSizedDefaultAllocator<32>_>
            (&local_a8.TagSet,pTVar2);
  local_60.TokenStreamVersion = 0;
  local_60.TagDictionary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.TagDictionary.ArrayNum = 0;
  local_60.TagDictionary.ArrayMax = 0;
  local_60.QueryTokenStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.QueryTokenStream.ArrayNum = 0;
  local_60.QueryTokenStream.ArrayMax = 0;
  local_60.UserDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.UserDescription.Data.ArrayNum = 0;
  local_60.UserDescription.Data.ArrayMax = 0;
  local_60.AutoDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.AutoDescription.Data.ArrayNum = 0;
  local_60.AutoDescription.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGameplayTagQuery::Build(&local_60,&local_a8,&local_18);
  if (local_a8.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data,
             local_a8.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_a8.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_a8.ExprSet.AllocatorInstance.Data);
  }
  FGameplayTagQuery::operator=(param_3,&local_60);
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
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// execMakeLiteralGameplayTag @ 146af4020

void __cdecl
UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execMakeLiteralGameplayTagContainer @ 146af40b0

void __cdecl
UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  FGameplayTagContainer local_88;
  FGameplayTagContainer local_68;
  undefined1 local_48 [16];
  undefined8 local_38 [2];
  
  local_68.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GameplayTags.ArrayNum = 0;
  local_68.GameplayTags.ArrayMax = 0;
  local_68.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ParentTags.ArrayNum = 0;
  local_68.ParentTags.ArrayMax = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.GameplayTags.ArrayNum = 0;
  local_88.GameplayTags.ArrayMax = 0;
  local_88.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ParentTags.ArrayNum = 0;
  local_88.ParentTags.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGameplayTagContainer::operator=(&local_88,&local_68);
  FVar7.Data = local_88.ParentTags.AllocatorInstance.Data;
  FVar8.Data = local_88.GameplayTags.AllocatorInstance.Data;
  iVar3 = local_88.GameplayTags.ArrayNum;
  iVar4 = local_88.GameplayTags.ArrayMax;
  iVar6 = local_88.ParentTags.ArrayMax;
  local_88.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.GameplayTags.ArrayNum = 0;
  local_88.GameplayTags.ArrayMax = 0;
  local_88.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_88.ParentTags.ArrayNum;
  local_88.ParentTags.ArrayNum = 0;
  local_88.ParentTags.ArrayMax = 0;
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar8.Data;
    FVar8.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar3;
    *(int *)((longlong)param_3 + 0xc) = iVar4;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  if (puVar1 != local_38) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = FVar7.Data;
    FVar7.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x18) = iVar5;
    *(int *)((longlong)param_3 + 0x1c) = iVar6;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_68.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ParentTags.AllocatorInstance.Data);
  }
  if (local_68.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execMatchesAnyTags @ 146af4230

void __cdecl
UBlueprintGameplayTagLibrary::execMatchesAnyTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  FName *pFVar5;
  FGameplayTagContainer *pFVar6;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FGameplayTagContainer local_38;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pFVar6 = &local_38;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar6 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    bVar4 = FGameplayTag::MatchesAny((FGameplayTag *)&local_res20,pFVar6);
  }
  else {
    iVar2 = (pFVar6->GameplayTags).ArrayNum;
    if (iVar2 != 0) {
      pFVar5 = (FName *)(pFVar6->GameplayTags).AllocatorInstance.Data;
      pFVar1 = pFVar5 + iVar2;
      if (pFVar5 != pFVar1) {
        do {
          if (*pFVar5 == local_res18) {
            bVar4 = true;
            goto LAB_146af4383;
          }
          pFVar5 = pFVar5 + 1;
        } while (pFVar5 != pFVar1);
        bVar4 = false;
        goto LAB_146af4383;
      }
    }
    bVar4 = false;
  }
LAB_146af4383:
  *(bool *)param_3 = bVar4;
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execMatchesTag @ 146af43c0

void __cdecl
UBlueprintGameplayTagLibrary::execMatchesTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_28;
  FName local_20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = local_res20;
  local_28 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    if (local_res18 == (FName)0x0) {
      *(undefined1 *)param_3 = 0;
      return;
    }
    *(bool *)param_3 = local_res20 == local_res18;
    return;
  }
  bVar2 = FGameplayTag::MatchesTag((FGameplayTag *)&local_20,(FGameplayTag *)&local_28);
  *(bool *)param_3 = bVar2;
  return;
}

// execNotEqual_GameplayTag @ 146af4500

void __cdecl
UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
  local_res18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18 != local_res10;
  return;
}

// execNotEqual_GameplayTagContainer @ 146af45d0

void __cdecl
UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  FGameplayTagContainer *this;
  FGameplayTagContainer local_48;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GameplayTags.ArrayNum = 0;
  local_48.GameplayTags.ArrayMax = 0;
  this = &local_28;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  local_48.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentTags.ArrayNum = 0;
  local_48.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar3 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((this->GameplayTags).ArrayNum == (pFVar3->GameplayTags).ArrayNum) {
    bVar2 = FGameplayTagContainer::HasAllExact(this,pFVar3);
  }
  else {
    bVar2 = false;
  }
  *(byte *)param_3 = bVar2 ^ 1;
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execNotEqual_TagContainerTagContainer @ 146af4730

void __cdecl
UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  void *local_68;
  undefined8 local_60;
  FString local_58;
  FGameplayTagContainer local_48;
  FGameplayTagContainer local_28;
  
  local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GameplayTags.ArrayNum = 0;
  local_48.GameplayTags.ArrayMax = 0;
  local_48.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentTags.ArrayNum = 0;
  local_48.ParentTags.ArrayMax = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src = local_68;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_60;
  local_58.Data.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,(ForAnyElementType *)&local_58,(int)local_60,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::operator=(&local_28,&local_48);
  bVar2 = NotEqual_TagContainerTagContainer(&local_28,&local_58);
  *(bool *)param_3 = bVar2;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execNotEqual_TagTag @ 146af48d0

void __cdecl
UBlueprintGameplayTagLibrary::execNotEqual_TagTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  FString local_28;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  _Src = local_38;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_30;
  local_40 = (int)local_30;
  if ((int)local_30 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_30,0,&local_48,(int)local_30,&local_3c);
    memcpy(local_48.Data,_Src,lVar3 * 2);
  }
  local_res18 = local_res10;
  ::FName::ToString(&local_res18,&local_28);
  if (local_28.Data.ArrayNum == local_40) {
    if (local_28.Data.ArrayNum < 2) goto LAB_146af4a0d;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_28.Data.AllocatorInstance.Data,(wchar_t *)local_48.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = local_28.Data.ArrayNum + local_40 == 1;
  }
  bVar4 = !bVar4;
LAB_146af4a0d:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  *(bool *)param_3 = bVar4;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execRemoveGameplayTag @ 146af4a60

void __cdecl
UBlueprintGameplayTagLibrary::execRemoveGameplayTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FGameplayTagContainer *this;
  FName local_res10;
  FName local_res18 [2];
  FGameplayTagContainer local_38;
  
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = &local_38;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    this = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FGameplayTagContainer::RemoveTag(this,(FGameplayTag *)local_res18,false);
  *(bool *)param_3 = bVar2;
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

