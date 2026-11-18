// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f12b60

UClass * __cdecl UEnvQueryGenerator_ActorsOfClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ActorsOfClass",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_ActorsOfClass>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ActorsOfClass>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton;
}

// UEnvQueryGenerator_ActorsOfClass @ 146f2a7d0

UEnvQueryGenerator_ActorsOfClass * __thiscall
UEnvQueryGenerator_ActorsOfClass::UEnvQueryGenerator_ActorsOfClass
          (UEnvQueryGenerator_ActorsOfClass *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_ActorsOfClass__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SearchedActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)pFVar1;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SearchRadius)._padding_ = (longlong)pFVar1;
  (this->SearchCenter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryGenerator_ActorsOfClass @ 146f2a8a0

UEnvQueryGenerator_ActorsOfClass * __thiscall
UEnvQueryGenerator_ActorsOfClass::UEnvQueryGenerator_ActorsOfClass
          (UEnvQueryGenerator_ActorsOfClass *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd | 1;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_ActorsOfClass__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SearchedActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius)._padding_ = 0;
  (this->GenerateOnlyActorsInRadius).DefaultValue = false;
  pFVar1 = FBoolProperty::StaticClass();
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)pFVar1;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SearchRadius)._padding_ = (longlong)pFVar1;
  (this->SearchCenter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = UEnvQueryItemType_Actor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->SearchedActorClass).Class.field0_0x0.DebugPtr = pUVar2;
  (this->GenerateOnlyActorsInRadius).DefaultValue = true;
  (this->SearchRadius).DefaultValue = 500.0;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->SearchCenter).Class.field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~UEnvQueryGenerator_ActorsOfClass @ 146f2e990

void __thiscall
UEnvQueryGenerator_ActorsOfClass::~UEnvQueryGenerator_ActorsOfClass
          (UEnvQueryGenerator_ActorsOfClass *this)

{
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->GenerateOnlyActorsInRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4c170

/* WARNING: Type propagation algorithm not settling */
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
UEnvQueryGenerator_ActorsOfClass::GenerateItems
          (UEnvQueryGenerator_ActorsOfClass *this,FEnvQueryInstance *param_1)

{
  FProperty *this_00;
  USceneComponent *pUVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  FString *pFVar13;
  UClass *pUVar14;
  wchar_t *pwVar15;
  uint uVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  UClass *local_res8;
  UClass *local_res18;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_1a8;
  AActor *local_198;
  AActor *local_190;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_188;
  TActorIteratorBase<TActorIterator<AActor>_> local_178;
  double local_108;
  TActorIteratorBase<TActorIterator<AActor>_> local_f8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  FString local_80;
  FString local_70;
  FString local_60 [3];
  
  pUVar10 = (this->SearchedActorClass).Class.field0_0x0.DebugPtr;
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  iVar6 = (int)pUVar7->_padding_;
  if (((int)pUVar10->_padding_ < iVar6) ||
     ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) != &pUVar7->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if ((this->SearchedActorClass).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar8 == (UObject *)0x0) {
    return;
  }
  pUVar9 = UEngine::GetWorldFromContextObject(GEngine,pUVar8,LogAndReturnNull);
  if (pUVar9 == (UWorld *)0x0) {
    return;
  }
  FAIDataProviderValue::BindData
            ((FAIDataProviderValue *)&this->GenerateOnlyActorsInRadius,pUVar8,
             (int)param_1->_padding_);
  this_00 = (FProperty *)(this->GenerateOnlyActorsInRadius)._padding_;
  pUVar7 = (UClass *)0x0;
  pUVar10 = pUVar7;
  if (this_00 != (FProperty *)0x0) {
    pUVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (this_00,(UObject *)(this->GenerateOnlyActorsInRadius)._padding_,0);
  }
  if (pUVar10 == (UClass *)0x0) {
    pUVar10 = (UClass *)&(this->GenerateOnlyActorsInRadius).DefaultValue;
  }
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  if (*(bool *)&pUVar10->_padding_ == false) {
    local_res18 = (this->SearchedActorClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    TActorIterator<AActor>::TActorIterator<AActor>
              ((TActorIterator<AActor> *)&local_f8,pUVar9,(TSubclassOf<AActor>)&local_res18,
               OnlyActiveLevels|SkipPendingKill);
    while( true ) {
      if ((local_f8.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_f8.State.TypedValue.ReachedEnd != false) break;
      if ((local_f8.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar12 = FActorIteratorState::GetActorChecked(&local_f8.State.TypedValue);
      if (pAVar12 == (AActor *)0x0) {
        pFVar13 = GetTypeName<AActor>(local_60);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar15);
      }
      local_190 = pAVar12;
      if (((local_1a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
          ((FScriptContainerElement *)&local_190 <
           local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = local_1a8.ArrayNum;
      if (local_1a8.ArrayNum == local_1a8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
      }
      local_1a8.ArrayNum = iVar6 + 1;
      *(AActor **)(local_1a8.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_190;
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_f8);
    }
    if (local_f8.State.bIsSet == false) goto LAB_146f4c781;
    UWorld::RemoveOnActorSpawnedHandler
              (local_f8.State.TypedValue.CurrentWorld,
               local_f8.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_f8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
  }
  else {
    pUVar10 = (this->SearchCenter).Class.field0_0x0.DebugPtr;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    pUVar14 = pUVar7;
    if ((pUVar10 != (UClass *)0x0) &&
       (pUVar11 = UEnvQueryContext::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar6 = (int)pUVar11->_padding_;
      if (((int)pUVar10->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar11->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar14 = (this->SearchCenter).Class.field0_0x0.DebugPtr;
      }
    }
    FEnvQueryInstance::PrepareContext(param_1,pUVar14,&local_188);
    FAIDataProviderValue::BindData
              ((FAIDataProviderValue *)&this->SearchRadius,pUVar8,(int)param_1->_padding_);
    fVar17 = FAIDataProviderFloatValue::GetValue(&this->SearchRadius);
    local_res8 = (this->SearchedActorClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    TActorIterator<AActor>::TActorIterator<AActor>
              ((TActorIterator<AActor> *)&local_178,pUVar9,(TSubclassOf<AActor>)&local_res8,
               OnlyActiveLevels|SkipPendingKill);
    while( true ) {
      if ((local_178.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_178.State.TypedValue.ReachedEnd != false) break;
      pUVar10 = pUVar7;
      pUVar14 = pUVar7;
      if (local_188.ArrayNum < 1) {
LAB_146f4c5a3:
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_178);
      }
      else {
        do {
          if ((local_178.State.bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pAVar12 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
          if (pAVar12 == (AActor *)0x0) {
            pFVar13 = GetTypeName<AActor>(&local_70);
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar15);
          }
          pUVar1 = (pAVar12->RootComponent).field0_0x0.DebugPtr;
          local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          if (pUVar1 != (USceneComponent *)0x0) {
            local_98 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
            uStack_94 = *(undefined4 *)
                         ((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
            uStack_90 = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
            uStack_8c = *(undefined4 *)
                         ((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
            local_88 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
            local_108 = local_88;
            uVar19 = local_98;
            uVar20 = uStack_94;
            uVar21 = uStack_90;
            uVar22 = uStack_8c;
          }
          uVar16 = (uint)pUVar10;
          uVar5 = 0;
          if ((int)uVar16 < local_188.ArrayNum) {
            uVar5 = ~uVar16 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          dVar3 = (double)CONCAT44(uVar22,uVar21) -
                  *(double *)(local_188.AllocatorInstance.Data + 8 + (longlong)pUVar14);
          dVar18 = (double)CONCAT44(uVar20,uVar19) -
                   *(double *)(local_188.AllocatorInstance.Data + (longlong)pUVar14);
          if (dVar3 * dVar3 + dVar18 * dVar18 +
              (local_108 - *(double *)(local_188.AllocatorInstance.Data + 0x10 + (longlong)pUVar14))
              * (local_108 -
                *(double *)(local_188.AllocatorInstance.Data + 0x10 + (longlong)pUVar14)) <
              (double)(fVar17 * fVar17)) {
            if ((local_178.State.bIsSet == false) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pAVar12 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
            if (pAVar12 == (AActor *)0x0) {
              pFVar13 = GetTypeName<AActor>(&local_80);
              if ((pFVar13->Data).ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar15);
            }
            local_198 = pAVar12;
            if (((local_1a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_198) &&
                ((FScriptContainerElement *)&local_198 <
                 local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = local_1a8.ArrayNum;
            if (local_1a8.ArrayNum == local_1a8.ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_1a8.AllocatorInstance,&local_1a8.ArrayMax);
            }
            local_1a8.ArrayNum = iVar6 + 1;
            *(AActor **)(local_1a8.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_198;
            goto LAB_146f4c5a3;
          }
          pUVar10 = (UClass *)(ulonglong)(uVar16 + 1);
          pUVar14 = (UClass *)&pUVar14->_padding_;
        } while ((int)(uVar16 + 1) < local_188.ArrayNum);
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_178);
      }
    }
    local_f8.State.TypedValue.ActorArray.AllocatorInstance.Data = local_188.AllocatorInstance.Data;
    if (local_178.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_178.State.TypedValue.CurrentWorld,
                 local_178.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      local_f8.State.TypedValue.ActorArray.AllocatorInstance.Data = local_188.AllocatorInstance.Data
      ;
      if (local_178.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.State.TypedValue.ActorArray.AllocatorInstance.Data);
        local_f8.State.TypedValue.ActorArray.AllocatorInstance.Data =
             local_188.AllocatorInstance.Data;
      }
    }
  }
  if (local_f8.State.TypedValue.ActorArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_f8.State.TypedValue.ActorArray.AllocatorInstance.Data);
  }
LAB_146f4c781:
  (**(code **)(this->_padding_ + 0x2e0))(this,param_1,&local_1a8);
  FEnvQueryInstance::AddItemData<UEnvQueryItemType_Actor,AActor_*>(param_1,&local_1a8);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  return;
}

// GetDescriptionDetails @ 146f50df0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_ActorsOfClass::GetDescriptionDetails
          (UEnvQueryGenerator_ActorsOfClass *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  local_88.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Pairs.ArrayNum = 0;
  local_88.Pairs.ArrayMax = 0;
  pFVar3 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->SearchRadius,&local_58);
  pFVar4 = FText::FromString(&local_68,pFVar3);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,pFVar4);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_78,L"Radius");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_88,&local_78,&local_28);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"EnvQueryGenerator",L"ActorsOfClassDescription",L"radius: {Radius}"
                     );
  pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar5,&local_88);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data,
             local_88.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_88.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_88.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f53770

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_ActorsOfClass::GetDescriptionTitle
          (UEnvQueryGenerator_ActorsOfClass *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FProperty *this_00;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UClass *pUVar5;
  bool *pbVar6;
  FTextFormat *pFVar7;
  UClass *pUVar8;
  FName local_res8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  FString local_118;
  FString local_108;
  FText local_f8;
  FString local_e8;
  FString local_d8;
  FText local_c8;
  FFormatArgumentValue local_b8;
  FFormatArgumentValue local_98;
  FFormatArgumentValue local_78;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Pairs.ArrayNum = 0;
  local_128.Pairs.ArrayMax = 0;
  UEnvQueryTypes::GetShortTypeName(&local_f8,(UObject *)this);
  local_b8.Type = Text;
  FText::FText((FText *)&local_b8.TextValue,&local_f8);
  if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_108,L"DescriptionTitle");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_108,&local_b8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  pUVar8 = (this->SearchedActorClass).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
LAB_146f5389d:
    ::FString::FString(&local_118,L"None");
  }
  else {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_146f5389d;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) ||
       (pUVar8 = (this->SearchedActorClass).Class.field0_0x0.DebugPtr, pUVar8 == (UClass *)0x0))
    goto LAB_146f5389d;
    local_res8 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_res8,&local_118);
  }
  pFVar4 = FText::FromString(&local_58,&local_118);
  local_98.Type = Text;
  FText::FText((FText *)&local_98.TextValue,pFVar4);
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_e8,L"ActorsClass");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_e8,&local_98);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((this->GenerateOnlyActorsInRadius)._padding_ == 0) {
    this_00 = (FProperty *)(this->GenerateOnlyActorsInRadius)._padding_;
    pbVar6 = (bool *)0x0;
    if (this_00 != (FProperty *)0x0) {
      pbVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)0x0,0);
    }
    if (pbVar6 == (bool *)0x0) {
      pbVar6 = &(this->GenerateOnlyActorsInRadius).DefaultValue;
    }
    if (*pbVar6 == false) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"EnvQueryGenerator",L"DescriptionGenerateActors",
                          L"{DescriptionTitle}: generate set of actors of {ActorsClass}");
      pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar4,Default);
      FText::Format(__return_storage_ptr__,pFVar7,&local_128);
      goto LAB_146f53b05;
    }
  }
  pUVar8 = (this->SearchCenter).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_146f539f6;
LAB_146f53a24:
    pUVar8 = (UClass *)0x0;
  }
  else {
    if (pUVar8 == (UClass *)0x0) goto LAB_146f53a24;
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_146f539f6:
    pUVar5 = UEnvQueryContext::StaticClass();
    if (pUVar5 == (UClass *)0x0) goto LAB_146f53a24;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146f53a24;
  }
  UEnvQueryTypes::GetShortTypeName(&local_c8,(UObject *)pUVar8);
  local_78.Type = Text;
  FText::FText((FText *)&local_78.TextValue,&local_c8);
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_d8,L"DescribeContext");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_128,&local_d8,&local_78);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"EnvQueryGenerator",L"DescriptionGenerateActorsAroundContext",
                      L"{DescriptionTitle}: generate set of actors of {ActorsClass} around {DescribeContext}"
                     );
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar7,&local_128);
  local_48.TextData.Reference = local_38.TextData.Reference;
LAB_146f53b05:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
             local_128.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_128.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f57fd0

UClass * __cdecl UEnvQueryGenerator_ActorsOfClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_ActorsOfClass",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_ActorsOfClass>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_ActorsOfClass>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.InnerSingleton;
}

// ProcessItems @ 146f623b0

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
UEnvQueryGenerator_ActorsOfClass::ProcessItems
          (UEnvQueryGenerator_ActorsOfClass *this,FEnvQueryInstance *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass @ 146f76cb0

void __cdecl
UEnvQueryGenerator_ActorsOfClass::StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass(void)

{
  return;
}

