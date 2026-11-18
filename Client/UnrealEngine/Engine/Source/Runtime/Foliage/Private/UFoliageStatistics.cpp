// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 13

// StaticClass @ 145ecec90

UClass * __cdecl UFoliageStatistics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageStatistics",
               &Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton,
               StaticRegisterNativesUFoliageStatistics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFoliageStatistics>,
               InternalVTableHelperCtorCaller<UFoliageStatistics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton;
}

// UFoliageStatistics @ 145ed8aa0

UFoliageStatistics * __thiscall
UFoliageStatistics::UFoliageStatistics(UFoliageStatistics *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFoliageStatistics__6B_;
  return this;
}

// UFoliageStatistics @ 145ed8ad0

UFoliageStatistics * __thiscall
UFoliageStatistics::UFoliageStatistics(UFoliageStatistics *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFoliageStatistics__6B_;
  return this;
}

// ~UFoliageStatistics @ 145eda350

void __thiscall UFoliageStatistics::~UFoliageStatistics(UFoliageStatistics *this)

{
  *(undefined ***)this = &___7UFoliageStatistics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// FoliageOverlappingBoxCount @ 145ee1f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UFoliageStatistics::FoliageOverlappingBoxCount
          (UObject *param_1,UStaticMesh *param_2,TBox<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  FFoliageInfo *pFVar3;
  FFoliageImpl *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  AInstancedFoliageActor *this;
  TUniqueObj<FFoliageInfo> *pTVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_d8 [8];
  TArray<UFoliageType_const_*,TSizedDefaultAllocator<32>_> local_d0;
  UStaticMesh *local_c0;
  UClass *local_b8;
  UObject *local_b0;
  TBox<double> *local_a8;
  TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_> local_98;
  
  iVar8 = 0;
  local_c0 = param_2;
  local_a8 = param_3;
  pUVar10 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar10 != (UWorld *)0x0) {
    pUVar11 = AInstancedFoliageActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
    }
    local_98.Flags = OnlyActiveLevels|SkipPendingKill;
    local_98.State.bIsSet = false;
    local_b8 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FActorIteratorState::FActorIteratorState
              (&local_98.State.TypedValue,pUVar10,(TSubclassOf<AActor>)&local_b8);
    local_98.State.bIsSet = true;
    iVar8 = 0;
    while( true ) {
      TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_>::operator++(&local_98);
      if ((local_98.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (local_98.State.TypedValue.ReachedEnd != false) break;
      if ((local_98.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      pAVar12 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
      this = CastChecked<AInstancedFoliageActor,AActor>(pAVar12);
      if ((this != (AInstancedFoliageActor *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        AInstancedFoliageActor::GetAllFoliageTypesForSource(this,(UObject *)param_2,&local_d0);
        iVar6 = local_d0.ArrayNum;
        uVar14 = (ulonglong)local_d0.ArrayNum;
        pFVar1 = local_d0.AllocatorInstance.Data + uVar14 * 8;
        FVar15.Data = local_d0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar14 != iVar6) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<UFoliageType_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_d8);
          }
          if (FVar15.Data == pFVar1) break;
          pUVar2 = *(UObject **)FVar15.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_b0 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          pTVar13 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                    ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                            *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_b0);
          if (((pTVar13 == (TUniqueObj<FFoliageInfo> *)0x0) ||
              (pFVar3 = (pTVar13->Obj).Ptr, pFVar3 == (FFoliageInfo *)0x0)) ||
             (pFVar4 = (pFVar3->Implementation).Ptr, pFVar4 == (FFoliageImpl *)0x0)) {
            uVar14 = local_d0._8_8_ & 0xffffffff;
            FVar15.Data = FVar15.Data + 8;
          }
          else {
            iVar9 = (**(code **)((longlong)*pFVar4 + 0x30))(pFVar4,local_a8);
            uVar14 = local_d0._8_8_ & 0xffffffff;
            iVar8 = iVar8 + iVar9;
            FVar15.Data = FVar15.Data + 8;
          }
        }
        param_2 = local_c0;
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
          param_2 = local_c0;
        }
      }
    }
    if (local_98.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_98.State.TypedValue.CurrentWorld,
                 local_98.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return iVar8;
}

// FoliageOverlappingBoxTransforms @ 145ee21f0

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
UFoliageStatistics::FoliageOverlappingBoxTransforms
          (UObject *param_1,UStaticMesh *param_2,TBox<double> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  FFoliageInfo *pFVar3;
  FFoliageImpl *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  AInstancedFoliageActor *this;
  TUniqueObj<FFoliageInfo> *pTVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_d8 [8];
  TArray<UFoliageType_const_*,TSizedDefaultAllocator<32>_> local_d0;
  UStaticMesh *local_c0;
  UClass *local_b8;
  UObject *local_b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_a8;
  TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_> local_98;
  
  local_c0 = param_2;
  local_a8 = param_4;
  pUVar8 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar8 != (UWorld *)0x0) {
    pUVar9 = AInstancedFoliageActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
    }
    local_98.Flags = OnlyActiveLevels|SkipPendingKill;
    local_98.State.bIsSet = false;
    local_b8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FActorIteratorState::FActorIteratorState
              (&local_98.State.TypedValue,pUVar8,(TSubclassOf<AActor>)&local_b8);
    local_98.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_>::operator++(&local_98);
    while( true ) {
      if ((local_98.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_98.State.TypedValue.ReachedEnd != false) break;
      if ((local_98.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar10 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
      this = CastChecked<AInstancedFoliageActor,AActor>(pAVar10);
      if ((this != (AInstancedFoliageActor *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        AInstancedFoliageActor::GetAllFoliageTypesForSource(this,(UObject *)param_2,&local_d0);
        iVar6 = local_d0.ArrayNum;
        uVar12 = (ulonglong)local_d0.ArrayNum;
        pFVar1 = local_d0.AllocatorInstance.Data + uVar12 * 8;
        FVar13.Data = local_d0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar12 != iVar6) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<UFoliageType_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_d8);
          }
          if (FVar13.Data == pFVar1) break;
          pUVar2 = *(UObject **)FVar13.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_b0 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          pTVar11 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                    ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                            *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_b0);
          if (((pTVar11 != (TUniqueObj<FFoliageInfo> *)0x0) &&
              (pFVar3 = (pTVar11->Obj).Ptr, pFVar3 != (FFoliageInfo *)0x0)) &&
             (pFVar4 = (pFVar3->Implementation).Ptr, pFVar4 != (FFoliageImpl *)0x0)) {
            (**(code **)((longlong)*pFVar4 + 0x38))(pFVar4,param_3,local_a8);
          }
          uVar12 = local_d0._8_8_ & 0xffffffff;
          FVar13.Data = FVar13.Data + 8;
        }
        param_2 = local_c0;
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
          param_2 = local_c0;
        }
      }
      TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_>::operator++(&local_98);
    }
    if (local_98.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_98.State.TypedValue.CurrentWorld,
                 local_98.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FoliageOverlappingMeshCounts_Debug @ 145ee24a0

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
UFoliageStatistics::FoliageOverlappingMeshCounts_Debug
          (UObject *param_1,TVector<double> *param_2,float param_3,
          TMap<UStaticMesh_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>_>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  AInstancedFoliageActor *this;
  UClass *local_a8 [2];
  TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_> local_98;
  TVector<double>_u_0 local_38;
  double local_20;
  
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar3 != (UWorld *)0x0) {
    local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_38._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_20 = (double)param_3;
    TSet<TTuple<UStaticMesh_*,int>,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UStaticMesh_*,int>,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>,FDefaultSetAllocator>
             *)param_4);
    pUVar4 = AInstancedFoliageActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
    }
    local_98.Flags = OnlyActiveLevels|SkipPendingKill;
    local_98.State.bIsSet = false;
    local_a8[0] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_98.State.TypedValue,pUVar3,(TSubclassOf<AActor>)local_a8);
    local_98.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_>::operator++(&local_98);
      if (local_98.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_98.State.TypedValue.ReachedEnd != false) break;
      if (local_98.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pAVar5 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
      this = CastChecked<AInstancedFoliageActor,AActor>(pAVar5);
      if ((this != (AInstancedFoliageActor *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
        AInstancedFoliageActor::GetOverlappingMeshCounts
                  (this,(TSphere<double> *)&local_38._s_0,param_4);
      }
    }
    if (local_98.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_98.State.TypedValue.CurrentWorld,
                 local_98.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FoliageOverlappingSphereCount @ 145ee26a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UFoliageStatistics::FoliageOverlappingSphereCount
          (UObject *param_1,UStaticMesh *param_2,TVector<double> *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  FFoliageInfo *pFVar3;
  FFoliageImpl *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  AInstancedFoliageActor *this;
  TUniqueObj<FFoliageInfo> *pTVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_e8 [8];
  TArray<UFoliageType_const_*,TSizedDefaultAllocator<32>_> local_e0;
  UClass *local_d0;
  UObject *local_c8 [2];
  TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_> local_b8;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  
  iVar8 = 0;
  pUVar10 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar10 != (UWorld *)0x0) {
    local_58 = (param_3->field0_0x0)._s_0.X;
    dStack_50 = (param_3->field0_0x0)._s_0.Y;
    local_48 = (param_3->field0_0x0)._s_0.Z;
    local_40 = (double)param_4;
    pUVar11 = AInstancedFoliageActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar11 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
    }
    local_b8.Flags = OnlyActiveLevels|SkipPendingKill;
    local_b8.State.bIsSet = false;
    local_d0 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FActorIteratorState::FActorIteratorState
              (&local_b8.State.TypedValue,pUVar10,(TSubclassOf<AActor>)&local_d0);
    local_b8.State.bIsSet = true;
    iVar8 = 0;
    while( true ) {
      TActorIteratorBase<TActorIterator<AInstancedFoliageActor>_>::operator++(&local_b8);
      if ((local_b8.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (local_b8.State.TypedValue.ReachedEnd != false) break;
      if ((local_b8.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      pAVar12 = FActorIteratorState::GetActorChecked(&local_b8.State.TypedValue);
      this = CastChecked<AInstancedFoliageActor,AActor>(pAVar12);
      if ((this != (AInstancedFoliageActor *)0x0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        AInstancedFoliageActor::GetAllFoliageTypesForSource(this,(UObject *)param_2,&local_e0);
        iVar6 = local_e0.ArrayNum;
        uVar14 = (ulonglong)local_e0.ArrayNum;
        pFVar1 = local_e0.AllocatorInstance.Data + uVar14 * 8;
        FVar15.Data = local_e0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar14 != iVar6) {
            local_e8[0] = 0;
            `TCheckedPointerIterator<UFoliageType_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_e8);
          }
          if (FVar15.Data == pFVar1) break;
          pUVar2 = *(UObject **)FVar15.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_c8[0] = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          pTVar13 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                    ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                            *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)local_c8);
          if (((pTVar13 == (TUniqueObj<FFoliageInfo> *)0x0) ||
              (pFVar3 = (pTVar13->Obj).Ptr, pFVar3 == (FFoliageInfo *)0x0)) ||
             (pFVar4 = (pFVar3->Implementation).Ptr, pFVar4 == (FFoliageImpl *)0x0)) {
            uVar14 = local_e0._8_8_ & 0xffffffff;
            FVar15.Data = FVar15.Data + 8;
          }
          else {
            iVar9 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4,&local_58);
            uVar14 = local_e0._8_8_ & 0xffffffff;
            iVar8 = iVar8 + iVar9;
            FVar15.Data = FVar15.Data + 8;
          }
        }
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
    }
    if (local_b8.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_b8.State.TypedValue.CurrentWorld,
                 local_b8.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_b8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_b8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return iVar8;
}

// GetPrivateStaticClass @ 145ee4f10

UClass * __cdecl UFoliageStatistics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageStatistics",
               &Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton,
               StaticRegisterNativesUFoliageStatistics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFoliageStatistics>,
               InternalVTableHelperCtorCaller<UFoliageStatistics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageStatistics.InnerSingleton;
}

// StaticRegisterNativesUFoliageStatistics @ 145eecff0

void __cdecl UFoliageStatistics::StaticRegisterNativesUFoliageStatistics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UFoliageStatistics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFoliageOverlappingBoxCount @ 145eef760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFoliageStatistics::execFoliageOverlappingBoxCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  UStaticMesh *local_98;
  UObject *local_90;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_88._s_0.X = local_48;
  local_88._s_0.Y = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88._s_0.Z = local_38;
  uStack_70 = uStack_30;
  local_58 = CONCAT71(uStack_17,local_18);
  local_68 = local_28;
  uStack_60 = uStack_20;
  iVar2 = FoliageOverlappingBoxCount(local_90,local_98,(TBox<double> *)&local_88._s_0);
  *(int *)param_3 = iVar2;
  return;
}

// execFoliageOverlappingBoxTransforms @ 145eef8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UFoliageStatistics::execFoliageOverlappingBoxTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_c8 [32];
  UStaticMesh *local_a8;
  UObject *local_a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_98;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = &local_98;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_88._s_0.X = local_48;
  local_88._s_0.Y = dStack_40;
  local_88._s_0.Z = local_38;
  uStack_70 = uStack_30;
  local_58 = CONCAT71(uStack_17,local_18);
  local_68 = local_28;
  uStack_60 = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FoliageOverlappingBoxTransforms(local_a0,local_a8,(TBox<double> *)&local_88._s_0,pTVar2);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execFoliageOverlappingSphereCount @ 145eefa90

void __cdecl
UFoliageStatistics::execFoliageOverlappingSphereCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  float local_res10 [2];
  UStaticMesh *local_res18;
  UObject *local_res20;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_38;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  local_38._s_0.Z = local_48;
  iVar2 = FoliageOverlappingSphereCount
                    (local_res20,local_res18,(TVector<double> *)&local_38._s_0,local_res10[0]);
  *(int *)param_3 = iVar2;
  return;
}

