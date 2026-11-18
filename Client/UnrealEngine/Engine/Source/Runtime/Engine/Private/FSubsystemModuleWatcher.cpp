// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AddClassesForModule @ 148817c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FSubsystemModuleWatcher::AddClassesForModule(FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  UClass *local_78;
  TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x1f8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = *param_1;
  uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (GlobalDynamicSystemModuleMap._8_4_ != GlobalDynamicSystemModuleMap._52_4_) {
    lVar13 = 0x154c6bdd8;
    if (GlobalDynamicSystemModuleMap._64_8_ != 0) {
      lVar13 = GlobalDynamicSystemModuleMap._64_8_;
    }
    for (iVar2 = *(int *)(lVar13 + (ulonglong)
                                   (GlobalDynamicSystemModuleMap._72_4_ - 1 & FVar3.Number + uVar7)
                                   * 4); iVar2 != -1;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + GlobalDynamicSystemModuleMap._0_8_)) {
      if (*(FName *)((longlong)iVar2 * 0x20 + GlobalDynamicSystemModuleMap._0_8_) == FVar3) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("! GlobalDynamicSystemModuleMap.Contains(InModuleName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                           ,0x1fa,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
    }
  }
  pFVar9 = ::FName::ToString(param_1,&local_30);
  pFVar10 = ::FString::FString(&local_40,"/Script/");
  ::FString::ConcatFF(&local_50,pFVar10,pFVar9);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar14.Data = local_50.Data.AllocatorInstance.Data;
  }
  pUVar11 = FindPackage((UObject *)0x0,(wchar_t *)FVar14.Data);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (pUVar11 != (UPackage *)0x0) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    GetObjectsWithPackage(pUVar11,&local_60,false,RF_NoFlags,Borrowed);
    iVar2 = local_60.ArrayNum;
    pFVar1 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
    FVar14.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if (local_60.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      pUVar4 = *(UClass **)FVar14.Data;
      if (pUVar4 != (UClass *)0x0) {
        pUVar12 = Z_Construct_UClass_UClass_NoRegister();
        iVar8 = (int)pUVar12->_padding_;
        if ((((iVar8 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar12->_padding_)) && ((pUVar4->ClassFlags & CLASS_Abstract) == CLASS_None)) &&
           (pUVar12 = UDynamicSubsystem::StaticClass(), pUVar12 != (UClass *)0x0)) {
          iVar8 = (int)pUVar12->_padding_;
          if (((int)pUVar4->_padding_ < iVar8) ||
             ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar8 * 8) !=
              &pUVar12->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            local_78 = pUVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = local_70.ArrayNum;
            if (local_70.ArrayNum == local_70.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            local_70.ArrayNum = iVar8 + 1;
            *(UClass **)(local_70.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_78;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_78);
            }
            FSubsystemCollectionBase::AddAllInstances(pUVar4);
          }
        }
      }
      FVar14.Data = FVar14.Data + 8;
    }
    if (0 < local_70.ArrayNum) {
      TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
      ::Emplace<FName_const_&,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>
                ((TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
                  *)&GlobalDynamicSystemModuleMap,param_1,&local_70);
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return;
}

// DeinitializeModuleWatcher @ 14882e4a0

void __cdecl FSubsystemModuleWatcher::DeinitializeModuleWatcher(void)

{
  TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy> *this;
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  uint uVar4;
  FModuleManager *pFVar5;
  ulong64 *puVar6;
  ForAnyElementType *this_00;
  uint uVar7;
  longlong lVar8;
  
  if (ModulesChangedHandle.ID != 0) {
    pFVar5 = FModuleManager::Get();
    FVar2 = ModulesChangedHandle;
    this = &pFVar5->ModulesChangedEvent;
    if (ModulesChangedHandle.ID != 0) {
      if ((this == (TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy>
                    *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      uVar7 = 0;
      if (0 < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = (ForAnyElementType *)
                    (*(longlong *)&(pFVar5->ModulesChangedEvent).field_0x28 + lVar8);
          if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
             && (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
                *puVar6 == FVar2.ID)) {
            if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_00->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10)
              ;
              *(undefined4 *)&this_00[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
            break;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar7 < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
    ModulesChangedHandle.ID = 0;
  }
  return;
}

// InitializeModuleWatcher @ 148847bd0

void __cdecl FSubsystemModuleWatcher::InitializeModuleWatcher(void)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FModuleManager *pFVar12;
  TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> *pTVar13;
  FDelegateHandle FVar14;
  longlong lVar15;
  FName *pFVar16;
  ForAnyElementType FVar17;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  UObject *local_58;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_50;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x1d0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((ModulesChangedHandle.ID != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ModulesChangedHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x1d2,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pUVar11 = UDynamicSubsystem::StaticClass();
  GetDerivedClasses(pUVar11,&local_50,true);
  iVar7 = local_50.ArrayNum;
  pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
  FVar17.Data = local_50.AllocatorInstance.Data;
  do {
    if (local_50.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar17.Data == pFVar1) {
      pFVar12 = FModuleManager::Get();
      FVar14 = TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
               ::AddStatic<>(&pFVar12->ModulesChangedEvent,
                             (_func___cdecl_void_FName_EModuleChangeReason *)local_res20);
                    /* WARNING: Load size is inaccurate */
      ModulesChangedHandle.ID = *FVar14.ID;
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return;
    }
    pUVar3 = *(UObject **)FVar17.Data;
    if (((pUVar3[5].field_0xc & 1) == 0) && (*(longlong *)&pUVar3->field_0x20 != 0)) {
      local_res18 = *(undefined8 *)(*(longlong *)&pUVar3->field_0x20 + 0x18);
      FPackageName::GetShortFName(&local_res10);
      pFVar12 = FModuleManager::Get();
      bVar8 = FModuleManager::IsModuleLoaded(pFVar12,local_res10);
      FVar6 = local_res10;
      if (bVar8) {
        uVar9 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
        uVar9 = uVar9 + FVar6.Number;
        if (GlobalDynamicSystemModuleMap._8_4_ != GlobalDynamicSystemModuleMap._52_4_) {
          lVar15 = 0x154c6bdd8;
          if (GlobalDynamicSystemModuleMap._64_8_ != 0) {
            lVar15 = GlobalDynamicSystemModuleMap._64_8_;
          }
          uVar2 = *(uint *)(lVar15 + (ulonglong)(GlobalDynamicSystemModuleMap._72_4_ - 1 & uVar9) *
                                     4);
          while (uVar2 != 0xffffffff) {
            pFVar16 = (FName *)((longlong)(int)uVar2 * 0x20 + GlobalDynamicSystemModuleMap._0_8_);
            if (*pFVar16 == local_res10) {
              if (pFVar16 != (FName *)0x0) {
                pTVar13 = (TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_> *)
                          (pFVar16 + 1);
                goto LAB_148847d83;
              }
              break;
            }
            uVar2 = pFVar16[3].ComparisonIndex.Value;
          }
        }
        pTVar13 = TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<FName_const_&>
                            ((TMapBase<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
                              *)&GlobalDynamicSystemModuleMap,uVar9,&local_res10);
LAB_148847d83:
        local_58 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)pTVar13->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = pTVar13->ArrayNum;
        if (iVar10 == pTVar13->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        pTVar13->ArrayNum = iVar10 + 1;
        *(UObject **)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_58;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_58);
        }
      }
    }
    FVar17.Data = FVar17.Data + 8;
  } while( true );
}

// OnModulesChanged @ 14884bb40

void __cdecl FSubsystemModuleWatcher::OnModulesChanged(FName param_1,EModuleChangeReason param_2)

{
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  if (param_2 == ModuleLoaded) {
    AddClassesForModule(local_res8);
  }
  else if (param_2 == ModuleUnloaded) {
    RemoveClassesForModule(local_res8);
    return;
  }
  return;
}

// RemoveClassesForModule @ 148854870

void __cdecl FSubsystemModuleWatcher::RemoveClassesForModule(FName *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FName *pFVar7;
  longlong lVar8;
  FName FVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FName local_res10;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x217,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = *param_1;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (GlobalDynamicSystemModuleMap._8_4_ != GlobalDynamicSystemModuleMap._52_4_) {
    lVar8 = 0x154c6bdd8;
    if (GlobalDynamicSystemModuleMap._64_8_ != 0) {
      lVar8 = GlobalDynamicSystemModuleMap._64_8_;
    }
    uVar5 = *(uint *)(lVar8 + (ulonglong)
                              (GlobalDynamicSystemModuleMap._72_4_ - 1 & FVar2.Number + uVar5) * 4);
    if (uVar5 != 0xffffffff) {
      while (pFVar7 = (FName *)((longlong)(int)uVar5 * 0x20 + GlobalDynamicSystemModuleMap._0_8_),
            *pFVar7 != FVar2) {
        uVar5 = pFVar7[3].ComparisonIndex.Value;
        if (uVar5 == 0xffffffff) {
          return;
        }
      }
      pFVar10 = pFVar7 + 1;
      if (pFVar7 == (FName *)0x0) {
        pFVar10 = (FName *)0x0;
      }
      if (pFVar10 != (FName *)0x0) {
        FVar9 = *pFVar10;
        uVar5 = pFVar10[1].ComparisonIndex.Value;
        FVar2 = (FName)((longlong)FVar9 + (longlong)(int)uVar5 * 8);
        while( true ) {
          if (pFVar10[1].ComparisonIndex.Value != uVar5) {
            `TCheckedPointerIterator<TSubclassOf<UDynamicSubsystem>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar9 == FVar2) break;
          lVar8 = *(longlong *)FVar9;
          if ((lVar8 == 0) || (pUVar6 = UDynamicSubsystem::StaticClass(), pUVar6 == (UClass *)0x0))
          {
LAB_1488549c8:
            FSubsystemCollectionBase::RemoveAllInstances((UClass *)0x0);
            FVar9 = (FName)((longlong)FVar9 + 8);
          }
          else {
            iVar1 = (int)pUVar6->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1488549c8;
            FSubsystemCollectionBase::RemoveAllInstances(*(UClass **)FVar9);
            FVar9 = (FName)((longlong)FVar9 + 8);
          }
        }
        FVar2 = *param_1;
        if (GlobalDynamicSystemModuleMap._8_4_ != GlobalDynamicSystemModuleMap._52_4_) {
          local_res10 = FVar2;
          uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)&GlobalDynamicSystemModuleMap,FVar2.Number + uVar5,&local_res10);
        }
      }
    }
  }
  return;
}

