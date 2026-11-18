// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 74

// Construct<FRestrictedConfigInfo> @ 146abe3e0

void __cdecl UE::CoreUObject::Private::Construct<FRestrictedConfigInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FRestrictedConfigInfo> @ 146abe400

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRestrictedConfigInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRestrictedConfigInfo> @ 146abe420

void __cdecl UE::CoreUObject::Private::Destruct<FRestrictedConfigInfo>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FRestrictedConfigInfo> @ 146abe470

bool __cdecl
UE::CoreUObject::Private::Copy<FRestrictedConfigInfo>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTag> @ 146abe740

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGameplayTag> @ 146abe750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGameplayTag> @ 146abe760

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTag>(void *param_1)

{
  return;
}

// PostSerialize<FGameplayTag> @ 146abe770

void __cdecl UE::CoreUObject::Private::PostSerialize<FGameplayTag>(FArchive *param_1,void *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UGameplayTagsManager *pUVar4;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this;
  FName *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *local_res8;
  
  if ((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((*(uint *)&param_1->field_0x34 & 0x401000) == 0)) {
    pUVar4 = UGameplayTagsManager::Get();
    lpCriticalSection = &pUVar4->GameplayTagMapCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar1 = *(FName *)param_2;
    this = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
            *)FGameplayTagRedirectors::Get();
    pFVar5 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
              ::Find(this,FVar1)->TagName;
    if ((pFVar5 != (FName *)0x0) && (*pFVar5 != (FName)0x0)) {
      *(FName *)param_2 = *pFVar5;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
              (&pUVar4->OnGameplayTagLoadedDelegate,param_2);
  }
  if (((param_1->field_0x28 & 4) != 0) && (*(longlong *)param_2 != 0)) {
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x228);
    if (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_GameplayTags();
      Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag,(UObject *)pUVar6,L"GameplayTag");
    }
    local_res8 = Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)Z_Registration_Info_UScriptStruct_FGameplayTag.OuterSingleton);
    }
    (*pcVar2)(param_1,&local_res8,param_2);
  }
  return;
}

// NetSerialize<FGameplayTag> @ 146abe8b0

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FGameplayTag>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  FName FVar1;
  uint uVar2;
  UGameplayTagsManager *pUVar3;
  int *piVar4;
  FName local_res8;
  uint uStackX_1c;
  
  if ((param_1->field_0x28 & 4) != 0) {
    pUVar3 = UGameplayTagsManager::Get();
    FVar1 = *(FName *)param_4;
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uStackX_1c = FVar1.Number;
    piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
             ::FindOrAddImpl<FGameplayTag_const_&>
                       ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                         *)&pUVar3->ReplicationCountMap,uStackX_1c + uVar2,
                        (FGameplayTag *)&local_res8);
    FVar1 = local_res8;
    *piVar4 = *piVar4 + 1;
    uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
             ::FindOrAddImpl<FGameplayTag_const_&>
                       ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                         *)&pUVar3->ReplicationCountMap_SingleTags,uVar2 + FVar1.Number,
                        (FGameplayTag *)&local_res8);
    *piVar4 = *piVar4 + 1;
  }
  FGameplayTag::NetSerialize_Packed(param_4,param_1,param_2,param_3);
  *param_3 = true;
  return true;
}

// Copy<FGameplayTag> @ 146abe960

bool __cdecl UE::CoreUObject::Private::Copy<FGameplayTag>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ImportTextItem<FGameplayTag> @ 146abe990

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FGameplayTag>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// StructuredSerializeFromMismatchedTag<FGameplayTag> @ 146abe9b0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FGameplayTag>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),param_3);
    return true;
  }
  return false;
}

// GetStructTypeHash<FGameplayTag> @ 146abea20

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FGameplayTag>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FGameplayTagCategoryRemap> @ 146abea50

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagCategoryRemap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGameplayTagCategoryRemap> @ 146abea70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagCategoryRemap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGameplayTagCategoryRemap> @ 146abea90

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagCategoryRemap>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameplayTagCategoryRemap> @ 146abeb20

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagCategoryRemap>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagNode> @ 146abf400

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagNode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FGameplayTagNode> @ 146abf430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagNode>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FGameplayTagNode> @ 146abf460

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagNode>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
            (*(TSharedPtr<FGameplayTagNode,1> **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGameplayTagNode> @ 146abf6c0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagNode>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FGameplayTagNode,1> *pTVar4;
  longlong lVar5;
  undefined8 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    pvVar8 = param_2;
    puVar9 = param_1;
    do {
      *puVar9 = *(undefined8 *)((longlong)puVar9 + ((longlong)param_2 - (longlong)param_1));
      FGameplayTagContainer::operator=
                ((FGameplayTagContainer *)(puVar9 + 1),
                 (FGameplayTagContainer *)((longlong)pvVar8 + 8));
      pFVar1 = (ForAnyElementType *)(puVar9 + 5);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x28)) {
        DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
                  ((TSharedPtr<FGameplayTagNode,1> *)pFVar1->Data,*(int *)(puVar9 + 6));
        iVar3 = *(int *)((longlong)pvVar8 + 0x30);
        piVar2 = (int *)((longlong)puVar9 + 0x34);
        pTVar4 = (TSharedPtr<FGameplayTagNode,1> *)
                 ((ForAnyElementType *)((longlong)pvVar8 + 0x28))->Data;
        *(int *)(puVar9 + 6) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<TSharedPtr<FGameplayTagNode,1>,TSharedPtr<FGameplayTagNode,1>,int>
                    (pFVar1->Data,pTVar4,iVar3);
        }
      }
      lVar5 = *(longlong *)((longlong)pvVar8 + 0x40);
      uVar6 = *(undefined8 *)((longlong)pvVar8 + 0x38);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)puVar9[8];
      puVar9[7] = uVar6;
      puVar9[8] = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      *(undefined2 *)(puVar9 + 9) = *(undefined2 *)((longlong)pvVar8 + 0x48);
      param_3 = param_3 + -1;
      pvVar8 = (void *)((longlong)pvVar8 + 0x50);
      puVar9 = puVar9 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagSource> @ 146abf9d0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 5;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGameplayTagSource> @ 146abfa30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 5;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGameplayTagSource> @ 146abfa50

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagSource>(void *param_1)

{
  return;
}

// Copy<FGameplayTagSource> @ 146abfaa0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagSource>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x18));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x18);
      param_2 = (void *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRestrictedGameplayTagTableRow> @ 146ac02f0

void __cdecl UE::CoreUObject::Private::Construct<FRestrictedGameplayTagTableRow>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FRestrictedGameplayTagTableRow__6B_;
  return;
}

// ConstructForTests<FRestrictedGameplayTagTableRow> @ 146ac0320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRestrictedGameplayTagTableRow>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FRestrictedGameplayTagTableRow__6B_;
  return;
}

// Destruct<FRestrictedGameplayTagTableRow> @ 146ac0350

void __cdecl UE::CoreUObject::Private::Destruct<FRestrictedGameplayTagTableRow>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FRestrictedGameplayTagTableRow> @ 146ac0380

bool __cdecl
UE::CoreUObject::Private::Copy<FRestrictedGameplayTagTableRow>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar2);
      if (pvVar2 != pvVar1) {
        *(undefined8 *)((longlong)pvVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 8);
        ::FString::operator=
                  ((FString *)((longlong)pvVar2 + 0x10),(FString *)((longlong)pvVar1 + 0x10));
        *(undefined1 *)((longlong)pvVar2 + 0x20) = *(undefined1 *)((longlong)pvVar1 + 0x20);
      }
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagTableRow> @ 146ac0450

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagTableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FGameplayTagTableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGameplayTagTableRow> @ 146ac0470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagTableRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FGameplayTagTableRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGameplayTagTableRow> @ 146ac0490

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagTableRow>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FGameplayTagTableRow> @ 146ac0540

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagTableRow>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar2);
      if (pvVar2 != pvVar1) {
        *(undefined8 *)((longlong)pvVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 8);
        ::FString::operator=
                  ((FString *)((longlong)pvVar2 + 0x10),(FString *)((longlong)pvVar1 + 0x10));
      }
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagRedirect> @ 146ac0bd0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagRedirect>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGameplayTagRedirect> @ 146ac0c60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagRedirect>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGameplayTagRedirect> @ 146ac0c70

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagRedirect>(void *param_1)

{
  return;
}

// Copy<FGameplayTagRedirect> @ 146ac0d00

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagRedirect>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagContainerNetSerializerSerializationHelper> @ 146ac15e0

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayTagContainerNetSerializerSerializationHelper>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGameplayTagContainerNetSerializerSerializationHelper> @ 146ac15f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerNetSerializerSerializationHelper>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGameplayTagContainerNetSerializerSerializationHelper> @ 146ac1600

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayTagContainerNetSerializerSerializationHelper>
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FGameplayTagContainerNetSerializerSerializationHelper> @ 146ac2380

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagContainerNetSerializerSerializationHelper>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagNetSerializerConfig> @ 146ac2a30

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGameplayTagNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FGameplayTagNetSerializerConfig> @ 146ac2a50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGameplayTagNetSerializerConfig__6B_;
  return;
}

// Destruct<FGameplayTagNetSerializerConfig> @ 146ac2a70

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FGameplayTagNetSerializerConfig> @ 146ac2aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagContainerNetSerializerConfig> @ 146ac3060

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayTagContainerNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGameplayTagContainerNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FGameplayTagContainerNetSerializerConfig> @ 146ac3080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGameplayTagContainerNetSerializerConfig__6B_;
  return;
}

// Destruct<FGameplayTagContainerNetSerializerConfig> @ 146ac30a0

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayTagContainerNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FGameplayTagContainerNetSerializerConfig> @ 146ac3130

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagContainerNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagQuery> @ 146ac34d0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagQuery>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FGameplayTagQuery> @ 146ac3500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagQuery>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FGameplayTagQuery> @ 146ac3530

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagQuery>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGameplayTagQuery> @ 146ac35d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagQuery>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if (puVar2 != puVar1) {
        *puVar2 = *puVar1;
        TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)(puVar2 + 2),
                   (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)(puVar1 + 2));
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar2 + 6),
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar1 + 6));
        ::FString::operator=((FString *)(puVar2 + 10),(FString *)(puVar1 + 10));
        ::FString::operator=((FString *)(puVar2 + 0xe),(FString *)(puVar1 + 0xe));
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x12;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayTagCreationWidgetHelper> @ 146ac3780

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagCreationWidgetHelper>(void *param_1)

{
  return;
}

// ConstructForTests<FGameplayTagCreationWidgetHelper> @ 146ac3790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayTagCreationWidgetHelper>(void *param_1)

{
  return;
}

// Construct<FGameplayTagContainer> @ 146ac37e0

void __cdecl UE::CoreUObject::Private::Construct<FGameplayTagContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FGameplayTagContainer> @ 146ac3800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FGameplayTagContainer> @ 146ac3820

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayTagContainer>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// SerializeSlot<FGameplayTagContainer> @ 146ac3860

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FGameplayTagContainer>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGameplayTagContainer::Serialize(param_2,param_1);
  return bVar1;
}

// NetSerialize<FGameplayTagContainer> @ 146ac3880

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FGameplayTagContainer>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGameplayTagContainer::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// PostScriptConstruct<FGameplayTagContainer> @ 146ac38a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::PostScriptConstruct<FGameplayTagContainer>(void *param_1)

{
  int *piVar1;
  FGameplayTag *pFVar2;
  int iVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags> FVar9;
  UGameplayTagsManager *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FGameplayTag *pFVar12;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FName FStack_58;
  FStatMessage FStack_48;
  
  FVar9 = StatPtr_STAT_FGameplayTagContainer_FillParentTags;
  if (StatPtr_STAT_FGameplayTagContainer_FillParentTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)0x0) {
    pFVar8 = ::FName::FName(&FStackX_10,"STAT_FGameplayTagContainer_FillParentTags");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FGameplayTagContainer_FillParentTags,*pFVar8,
                       L"FGameplayTagContainer::FillParentTags","STATGROUP_GameplayTags",
                       "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  FVar4 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar11 = FVar4.ComparisonIndex.Value;
  uVar10 = FVar4.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar11.Value;
        LStackX_8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                   ,0x29f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar11.Value;
      LStackX_8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar6 = true;
      FStack_58 = FVar4;
      goto LAB_146ad8c81;
    }
  }
  bVar6 = false;
LAB_146ad8c81:
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)((longlong)param_1 + 0x10),0,
               (int *)((longlong)param_1 + 0x1c));
  }
  if (0 < *(int *)((longlong)param_1 + 8)) {
    this = UGameplayTagsManager::Get();
    pFVar12 = *(FGameplayTag **)param_1;
    iVar3 = *(int *)((longlong)param_1 + 8);
    pFVar2 = pFVar12 + iVar3;
    while( true ) {
      if (*(int *)((longlong)param_1 + 8) != iVar3) {
        `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&LStackX_8);
      }
      if (pFVar12 == pFVar2) break;
      UGameplayTagsManager::ExtractParentTags
                (this,pFVar12,
                 (TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10));
      pFVar12 = pFVar12 + 1;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FStack_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_48.NameAndInfo.Index.Value = FStack_58.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FStack_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_8);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Copy<FGameplayTagContainer> @ 146ac38b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayTagContainer>(void *param_1,void *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  
  do {
    if (param_3 == 0) {
      return true;
    }
    if (param_1 != param_2) {
      uVar2 = *(uint *)&((ForAnyElementType *)((longlong)param_2 + 8))->Data;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      puVar1 = (uint *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      *(undefined4 *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = 0;
      if (*puVar1 != uVar2) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,param_1,0,(int *)puVar1);
      }
      iVar3 = *(int *)&((ForAnyElementType *)((longlong)param_2 + 8))->Data;
      if (iVar3 != 0) {
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar3,param_1,(int *)((longlong)param_1 + 8),(int *)puVar1);
        memcpy(((ForAnyElementType *)param_1)->Data + (longlong)iVar7 * 8,
               ((ForAnyElementType *)param_2)->Data,(longlong)iVar3 << 3);
      }
      uVar2 = *(uint *)&((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      pFVar8 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      puVar1 = (uint *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 0x18))->Data + 4);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 0x18))->Data = 0;
      if (*puVar1 != uVar2) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,pFVar8,0,(int *)puVar1);
      }
      if ((pFVar8 == (ForAnyElementType *)((longlong)param_2 + 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar3 = *(int *)&((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      if (iVar3 != 0) {
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar3,pFVar8,(int *)((longlong)param_1 + 0x18),(int *)puVar1);
        memcpy(pFVar8->Data + (longlong)iVar7 * 8,
               ((ForAnyElementType *)((longlong)param_2 + 0x10))->Data,(longlong)iVar3 << 3);
      }
    }
    param_3 = param_3 + -1;
    param_1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    param_2 = (ForAnyElementType *)((longlong)param_2 + 0x20);
  } while( true );
}

// Identical<FGameplayTagContainer> @ 146ac3a80

bool __cdecl
UE::CoreUObject::Private::Identical<FGameplayTagContainer>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  if (*(int *)((longlong)param_1 + 8) != *(int *)((longlong)param_2 + 8)) {
    *param_4 = false;
    return true;
  }
  bVar1 = FGameplayTagContainer::HasAllExact(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// ImportTextItem<FGameplayTagContainer> @ 146ac3ac0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FGameplayTagContainer>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FGameplayTagContainer::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// DereferenceIfNecessary<FGameplayTagNativeAdder,FGameplayTagNativeAdder_*_&> @ 146ac4720

FGameplayTagNativeAdder * __cdecl
UE::Core::Private::DereferenceIfNecessary<FGameplayTagNativeAdder,FGameplayTagNativeAdder_*_&>
          (FGameplayTagNativeAdder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UGameplayTagsManager,UGameplayTagsManager_*_&> @ 146ac4740

UGameplayTagsManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<UGameplayTagsManager,UGameplayTagsManager_*_&>
          (UGameplayTagsManager **param_1)

{
  return *param_1;
}

// IsValidGameplayTagString<TStringBuilderBase<wchar_t>_> @ 146ac9520

bool __cdecl
UE::GameplayTags::Private::IsValidGameplayTagString<TStringBuilderBase<wchar_t>_>
          (TStringView<wchar_t> *param_1,FText *param_2,TStringBuilderBase<wchar_t> *param_3,
          FString *param_4)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FText *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  TStringView<wchar_t> local_f8;
  FText local_e8;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_f8.DataPtr = param_1->DataPtr;
  local_f8.Size = param_1->Size;
  local_f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  bVar4 = true;
  iVar7 = (int)*(undefined8 *)&param_1->Size;
  if (iVar7 == 0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"GameplayTagManager",L"EmptyStringError",L"Tag may not be empty")
    ;
    if (((local_108.AllocatorInstance.Data <= pFVar9) &&
        (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = local_108.ArrayNum;
    if (local_108.ArrayNum == local_108.ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    local_108.ArrayNum = iVar7 + 1;
    FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),pFVar9);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    iVar7 = local_f8.Size;
    bVar4 = false;
  }
  pwVar13 = local_f8.DataPtr;
  uVar16 = 0;
  local_d8 = local_f8.DataPtr;
  while ((local_d8 != local_f8.DataPtr + iVar7 &&
         (((-(ulonglong)((ushort)*local_d8 < 0x40) & 0x400100000000) >> ((byte)*local_d8 & 0x3f) & 1
          ) != 0))) {
    local_d8 = local_d8 + 1;
  }
  iStack_d0 = (int)((longlong)(local_f8.DataPtr + iVar7) - (longlong)local_d8 >> 1);
  if (iStack_d0 != iVar7) {
    if (param_2 != (FText *)0x0) {
      if (iVar7 - iStack_d0 < iVar7) {
        iVar7 = iVar7 - iStack_d0;
      }
      iVar11 = 0;
      if (0 < iVar7) {
        iVar11 = iVar7;
      }
      pwVar12 = local_f8.DataPtr + iVar11;
      pwVar15 = local_f8.DataPtr;
      if (local_f8.DataPtr == pwVar12) {
LAB_146ac9810:
        if (pwVar13 == pwVar12) goto LAB_146ac9937;
      }
      else {
        do {
          pwVar14 = pwVar15 + 1;
          uVar16 = uVar16 | 1L << ((byte)*pwVar15 & 0x3f) &
                            -(ulonglong)((ushort)*pwVar15 < 0x40) & 0x400000000000;
          pwVar15 = pwVar14;
        } while (pwVar14 != pwVar12);
        if (uVar16 == 0) goto LAB_146ac9810;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"GameplayTagManager",L"StartWithPeriod",
                            L"Tag may not begin with a period (\'.\')");
        if (((local_108.AllocatorInstance.Data <= pFVar9) &&
            (pFVar9 < (FText *)(local_108.AllocatorInstance.Data +
                               (longlong)local_108.ArrayMax * 0x10))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar7 + 1;
        FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),pFVar9);
        if (local_98.TextData.Reference == (ITextData *)0x0) goto LAB_146ac9810;
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      uVar16 = 0;
      do {
        wVar1 = *pwVar13;
        pwVar13 = pwVar13 + 1;
        uVar16 = uVar16 | 1L << ((byte)wVar1 & 0x3f) &
                          -(ulonglong)((ushort)wVar1 < 0x40) & 0x100000000;
      } while (pwVar13 != pwVar12);
      if (uVar16 != 0) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"GameplayTagManager",L"StartWithSpace",
                            L"Tag may not begin with a space");
        if (((local_108.AllocatorInstance.Data <= pFVar9) &&
            (pFVar9 < (FText *)(local_108.AllocatorInstance.Data +
                               (longlong)local_108.ArrayMax * 0x10))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar7 + 1;
        FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),pFVar9);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
    }
LAB_146ac9937:
    local_f8._12_4_ = uStack_cc;
    local_f8.Size = iStack_d0;
    bVar4 = false;
    local_f8.DataPtr = local_d8;
    iVar7 = iStack_d0;
  }
  pwVar13 = local_f8.DataPtr + (longlong)iVar7 + -1;
  while ((pwVar13 != local_f8.DataPtr + -1 &&
         (((-(ulonglong)((ushort)*pwVar13 < 0x40) & 0x400100000000) >> ((byte)*pwVar13 & 0x3f) & 1)
          != 0))) {
    pwVar13 = pwVar13 + -1;
  }
  iStack_c0 = (int)((longlong)pwVar13 + (2 - (longlong)local_f8.DataPtr) >> 1);
  local_c8 = local_f8.DataPtr;
  if (iStack_c0 == iVar7) goto LAB_146ac9c48;
  if (param_2 != (FText *)0x0) {
    iVar11 = iVar7;
    if (iVar7 - iStack_c0 < iVar7) {
      iVar11 = iVar7 - iStack_c0;
    }
    uVar16 = 0;
    iVar8 = 0;
    if (0 < iVar11) {
      iVar8 = iVar11;
    }
    pwVar13 = local_f8.DataPtr + ((longlong)iVar7 - (longlong)iVar8);
    pwVar12 = pwVar13 + iVar8;
    pwVar15 = pwVar13;
    if (pwVar13 == pwVar12) {
LAB_146ac9b0d:
      if (pwVar13 == pwVar12) goto LAB_146ac9c3b;
    }
    else {
      do {
        wVar1 = *pwVar15;
        pwVar15 = pwVar15 + 1;
        uVar16 = uVar16 | 1L << ((byte)wVar1 & 0x3f) &
                          -(ulonglong)((ushort)wVar1 < 0x40) & 0x400000000000;
      } while (pwVar15 != pwVar12);
      if (uVar16 == 0) goto LAB_146ac9b0d;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"GameplayTagManager",L"EndWithPeriod",
                          L"Tag may not end with a period (\'.\')");
      if (((local_108.AllocatorInstance.Data <= pFVar9) &&
          (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10
                             ))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar7 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),pFVar9);
      if (local_78.TextData.Reference == (ITextData *)0x0) goto LAB_146ac9b0d;
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    uVar16 = 0;
    do {
      wVar1 = *pwVar13;
      pwVar13 = pwVar13 + 1;
      uVar16 = uVar16 | 1L << ((byte)wVar1 & 0x3f) &
                        -(ulonglong)((ushort)wVar1 < 0x40) & 0x100000000;
    } while (pwVar13 != pwVar12);
    if (uVar16 != 0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"GameplayTagManager",L"EndWithSpace",
                          L"Tag may not end with a space");
      if (((local_108.AllocatorInstance.Data <= pFVar9) &&
          (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10
                             ))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar7 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),pFVar9);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
  }
LAB_146ac9c3b:
  local_f8._12_4_ = uStack_bc;
  local_f8.Size = iStack_c0;
  bVar4 = false;
LAB_146ac9c48:
  local_f8.DataPtr = local_c8;
  FText::FText(&local_e8);
  FText::AsLocalizable_Advanced_LocText
            (&local_b8,L"GameplayTagManager",L"GameplayTagContext",L"Tag");
  pFVar9 = &local_e8;
  if (param_2 == (FText *)0x0) {
    pFVar9 = (FText *)0x0;
  }
  bVar6 = ::FName::IsValidXName(&local_f8,param_4,pFVar9,&local_b8);
  if (bVar6) {
    if (param_3 != (TStringBuilderBase<wchar_t> *)0x0) {
      param_3->CurPos = param_3->Base;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_3,local_f8.DataPtr,local_f8.Size);
    }
  }
  else {
    if (param_2 != (FText *)0x0) {
      if (((local_108.AllocatorInstance.Data <= &local_e8) &&
          (&local_e8 <
           (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar7 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar7 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar7 * 0x10),&local_e8);
    }
    if (param_3 != (TStringBuilderBase<wchar_t> *)0x0) {
      param_3->CurPos = param_3->Base;
      iVar7 = local_f8.Size;
      iVar11 = (int)((longlong)param_3->End - (longlong)param_3->Base >> 1);
      if (iVar11 < iVar7) {
        TStringBuilderBase<wchar_t>::Extend(param_3,(longlong)(iVar7 - iVar11));
        iVar7 = local_f8.Size;
      }
      pwVar13 = local_f8.DataPtr + iVar7;
      for (pwVar12 = local_f8.DataPtr; pwVar12 != pwVar13; pwVar12 = pwVar12 + 1) {
        pFVar2 = (param_4->Data).AllocatorInstance.Data;
        wVar1 = *pwVar12;
        for (pFVar10 = pFVar2; pFVar10 != pFVar2 + (longlong)(param_4->Data).ArrayNum * 2;
            pFVar10 = pFVar10 + 2) {
          if (*(wchar_t *)pFVar10 == wVar1) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar2 >> 1) != -1) {
              if (param_3->End < param_3->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_3,1);
              }
              *param_3->CurPos = L'_';
              goto LAB_146ac9df8;
            }
            break;
          }
        }
        if (param_3->End < param_3->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_3,1);
        }
        *param_3->CurPos = wVar1;
LAB_146ac9df8:
        param_3->CurPos = param_3->CurPos + 1;
      }
    }
    bVar4 = false;
  }
  if (param_2 != (FText *)0x0) {
    if (local_108.ArrayNum == 0) {
      pFVar9 = FText::FText(&local_38);
      FText::operator=(param_2,pFVar9);
    }
    else {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"GameplayTagManager",L"ErrorDelimiter",L", ");
      pFVar9 = FText::Join(&local_58,pFVar9,&local_108);
      FText::operator=(param_2,pFVar9);
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        local_38.TextData.Reference = local_48.TextData.Reference;
      }
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  DestructItems<FText,int>((FText *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FText *)local_108.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar4;
}

// IsValidGameplayTagString<FString> @ 146ac9f40

bool __cdecl
UE::GameplayTags::Private::IsValidGameplayTagString<FString>
          (TStringView<wchar_t> *param_1,FText *param_2,FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FText *pFVar9;
  FScriptContainerElement *pFVar10;
  wchar_t wVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  TStringView<wchar_t> local_f8;
  FText local_e8;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_f8.DataPtr = param_1->DataPtr;
  local_f8.Size = param_1->Size;
  local_f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  bVar3 = true;
  iVar6 = (int)*(undefined8 *)&param_1->Size;
  if (iVar6 == 0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"GameplayTagManager",L"EmptyStringError",L"Tag may not be empty")
    ;
    if (((local_108.AllocatorInstance.Data <= pFVar9) &&
        (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar6 = local_108.ArrayNum;
    if (local_108.ArrayNum == local_108.ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    local_108.ArrayNum = iVar6 + 1;
    FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar9);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    iVar6 = local_f8.Size;
    bVar3 = false;
  }
  pwVar12 = local_f8.DataPtr;
  uVar16 = 0;
  local_d8 = local_f8.DataPtr;
  while ((local_d8 != local_f8.DataPtr + iVar6 &&
         (((-(ulonglong)((ushort)*local_d8 < 0x40) & 0x400100000000) >> ((byte)*local_d8 & 0x3f) & 1
          ) != 0))) {
    local_d8 = local_d8 + 1;
  }
  iStack_d0 = (int)((longlong)(local_f8.DataPtr + iVar6) - (longlong)local_d8 >> 1);
  if (iStack_d0 != iVar6) {
    if (param_2 != (FText *)0x0) {
      if (iVar6 - iStack_d0 < iVar6) {
        iVar6 = iVar6 - iStack_d0;
      }
      iVar7 = 0;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      pwVar13 = local_f8.DataPtr + iVar7;
      pwVar15 = local_f8.DataPtr;
      if (local_f8.DataPtr == pwVar13) {
LAB_146aca230:
        if (pwVar12 == pwVar13) goto LAB_146aca357;
      }
      else {
        do {
          pwVar14 = pwVar15 + 1;
          uVar16 = uVar16 | 1L << ((byte)*pwVar15 & 0x3f) &
                            -(ulonglong)((ushort)*pwVar15 < 0x40) & 0x400000000000;
          pwVar15 = pwVar14;
        } while (pwVar14 != pwVar13);
        if (uVar16 == 0) goto LAB_146aca230;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"GameplayTagManager",L"StartWithPeriod",
                            L"Tag may not begin with a period (\'.\')");
        if (((local_108.AllocatorInstance.Data <= pFVar9) &&
            (pFVar9 < (FText *)(local_108.AllocatorInstance.Data +
                               (longlong)local_108.ArrayMax * 0x10))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar6 + 1;
        FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar9);
        if (local_98.TextData.Reference == (ITextData *)0x0) goto LAB_146aca230;
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      uVar16 = 0;
      do {
        wVar11 = *pwVar12;
        pwVar12 = pwVar12 + 1;
        uVar16 = uVar16 | 1L << ((byte)wVar11 & 0x3f) &
                          -(ulonglong)((ushort)wVar11 < 0x40) & 0x100000000;
      } while (pwVar12 != pwVar13);
      if (uVar16 != 0) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"GameplayTagManager",L"StartWithSpace",
                            L"Tag may not begin with a space");
        if (((local_108.AllocatorInstance.Data <= pFVar9) &&
            (pFVar9 < (FText *)(local_108.AllocatorInstance.Data +
                               (longlong)local_108.ArrayMax * 0x10))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar6 + 1;
        FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar9);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
    }
LAB_146aca357:
    local_f8._12_4_ = uStack_cc;
    local_f8.Size = iStack_d0;
    bVar3 = false;
    local_f8.DataPtr = local_d8;
    iVar6 = iStack_d0;
  }
  pwVar12 = local_f8.DataPtr + (longlong)iVar6 + -1;
  while ((pwVar12 != local_f8.DataPtr + -1 &&
         (((-(ulonglong)((ushort)*pwVar12 < 0x40) & 0x400100000000) >> ((byte)*pwVar12 & 0x3f) & 1)
          != 0))) {
    pwVar12 = pwVar12 + -1;
  }
  iStack_c0 = (int)((longlong)pwVar12 + (2 - (longlong)local_f8.DataPtr) >> 1);
  local_c8 = local_f8.DataPtr;
  if (iStack_c0 == iVar6) goto LAB_146aca668;
  if (param_2 != (FText *)0x0) {
    iVar7 = iVar6;
    if (iVar6 - iStack_c0 < iVar6) {
      iVar7 = iVar6 - iStack_c0;
    }
    uVar16 = 0;
    iVar8 = 0;
    if (0 < iVar7) {
      iVar8 = iVar7;
    }
    pwVar12 = local_f8.DataPtr + ((longlong)iVar6 - (longlong)iVar8);
    pwVar13 = pwVar12 + iVar8;
    pwVar15 = pwVar12;
    if (pwVar12 == pwVar13) {
LAB_146aca52d:
      if (pwVar12 == pwVar13) goto LAB_146aca65b;
    }
    else {
      do {
        wVar11 = *pwVar15;
        pwVar15 = pwVar15 + 1;
        uVar16 = uVar16 | 1L << ((byte)wVar11 & 0x3f) &
                          -(ulonglong)((ushort)wVar11 < 0x40) & 0x400000000000;
      } while (pwVar15 != pwVar13);
      if (uVar16 == 0) goto LAB_146aca52d;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"GameplayTagManager",L"EndWithPeriod",
                          L"Tag may not end with a period (\'.\')");
      if (((local_108.AllocatorInstance.Data <= pFVar9) &&
          (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10
                             ))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar6 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar9);
      if (local_78.TextData.Reference == (ITextData *)0x0) goto LAB_146aca52d;
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    uVar16 = 0;
    do {
      wVar11 = *pwVar12;
      pwVar12 = pwVar12 + 1;
      uVar16 = uVar16 | 1L << ((byte)wVar11 & 0x3f) &
                        -(ulonglong)((ushort)wVar11 < 0x40) & 0x100000000;
    } while (pwVar12 != pwVar13);
    if (uVar16 != 0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"GameplayTagManager",L"EndWithSpace",
                          L"Tag may not end with a space");
      if (((local_108.AllocatorInstance.Data <= pFVar9) &&
          (pFVar9 < (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10
                             ))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar6 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),pFVar9);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
  }
LAB_146aca65b:
  local_f8._12_4_ = uStack_bc;
  local_f8.Size = iStack_c0;
  bVar3 = false;
LAB_146aca668:
  local_f8.DataPtr = local_c8;
  FText::FText(&local_e8);
  FText::AsLocalizable_Advanced_LocText
            (&local_b8,L"GameplayTagManager",L"GameplayTagContext",L"Tag");
  pFVar9 = &local_e8;
  if (param_2 == (FText *)0x0) {
    pFVar9 = (FText *)0x0;
  }
  bVar5 = ::FName::IsValidXName(&local_f8,param_4,pFVar9,&local_b8);
  if (bVar5) {
    if (param_3 != (FString *)0x0) {
      ::FString::Reset(param_3,0);
      ::FString::AppendChars(param_3,local_f8.DataPtr,local_f8.Size);
    }
  }
  else {
    if (param_2 != (FText *)0x0) {
      if (((local_108.AllocatorInstance.Data <= &local_e8) &&
          (&local_e8 <
           (FText *)(local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar6 = local_108.ArrayNum;
      if (local_108.ArrayNum == local_108.ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
      }
      local_108.ArrayNum = iVar6 + 1;
      FText::FText((FText *)(local_108.AllocatorInstance.Data + (longlong)iVar6 * 0x10),&local_e8);
    }
    if (param_3 != (FString *)0x0) {
      ::FString::Reset(param_3,0);
      ::FString::Reserve(param_3,local_f8.Size);
      pwVar12 = local_f8.DataPtr + local_f8.Size;
      for (pwVar13 = local_f8.DataPtr; pwVar13 != pwVar12; pwVar13 = pwVar13 + 1) {
        pFVar1 = (param_4->Data).AllocatorInstance.Data;
        wVar11 = *pwVar13;
        for (pFVar10 = pFVar1; pFVar10 != pFVar1 + (longlong)(param_4->Data).ArrayNum * 2;
            pFVar10 = pFVar10 + 2) {
          if (*(wchar_t *)pFVar10 == wVar11) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar1 >> 1) != -1) {
              wVar11 = L'_';
            }
            break;
          }
        }
        ::FString::AppendChar(param_3,wVar11);
      }
    }
    bVar3 = false;
  }
  if (param_2 != (FText *)0x0) {
    if (local_108.ArrayNum == 0) {
      pFVar9 = FText::FText(&local_38);
      FText::operator=(param_2,pFVar9);
    }
    else {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"GameplayTagManager",L"ErrorDelimiter",L", ");
      pFVar9 = FText::Join(&local_58,pFVar9,&local_108);
      FText::operator=(param_2,pFVar9);
      local_38.TextData.Reference = local_48.TextData.Reference;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        local_38.TextData.Reference = local_48.TextData.Reference;
      }
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  DestructItems<FText,int>((FText *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FText *)local_108.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar3;
}

// NetDeserializeDeltaDefault<8,&UE::Net::FGameplayTagNetSerializer::Deserialize,0,0> @ 146aca9d0

void __cdecl
UE::Net::NetDeserializeDeltaDefault<8,&UE::Net::FGameplayTagNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)param_2->_padding_ = *(undefined8 *)param_2->Prev;
    return;
  }
  FGameplayTagNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FGameplayTagNetSerializer::Serialize,&UE::Net::FGameplayTagNetSerializer::IsEqual> @ 146acaa30

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FGameplayTagNetSerializer::Serialize,&UE::Net::FGameplayTagNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  bool bVar1;
  FNetIsEqualArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  this = param_1->BitStreamWriter;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38.Source0 = param_2->_padding_;
  local_38.Source1 = param_2->Prev;
  local_38.bStateIsQuantized = true;
  bVar1 = FGameplayTagNetSerializer::IsEqual(param_1,&local_38);
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,1);
  if (!bVar1) {
    FGameplayTagNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_GameplayTag @ 146adf950

FPropertyNetSerializerInfo * __cdecl
UE::Net::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_GameplayTag(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTag.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_GameplayTag.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_GameplayTagContainer @ 146adf9c0

FPropertyNetSerializerInfo * __cdecl
UE::Net::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_GameplayTagContainer(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTagContainer.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTagContainer.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// NetSerialize @ 146ae5eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::GameplayTags::GameplayTagDynamicSerialization::NetSerialize
          (FGameplayTag *param_1,FArchive *param_2,UPackageMap *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  FNetTokenExportContext *this;
  FNameTokenStore *pFVar9;
  undefined8 *puVar10;
  UGameplayTagsManager *this_00;
  FGameplayTag FVar11;
  ForAnyElementType FVar12;
  ForElementType<FNetTracePacketContentEvent> FVar13;
  FNetToken_u_0 FVar14;
  FNetTraceCollector *pFVar15;
  FNetToken_u_0 local_res18;
  uint local_res20;
  longlong local_58;
  undefined1 local_50 [8];
  FString local_48;
  
  if (param_3 != (UPackageMap *)0x0) {
    pUVar8 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) &&
        (lVar2 = *(longlong *)&param_3[1].TrackedUnmappedNetGuids.Elements.field_0x20, lVar2 != 0))
       && ((*(byte *)(lVar2 + 0xfc) & 1) != 0)) {
      bVar4 = NetSerialize_ForReplay(param_1,param_2,(UPackageMapClient *)param_3);
      return bVar4;
    }
  }
  if ((param_2->field_0x28 & 4) == 0) {
    if ((param_2->field_0x28 & 1) != 0) {
      if (((param_3 == (UPackageMap *)0x0) ||
          (puVar10 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x350))(param_3),
          puVar10 == (undefined8 *)0x0)) ||
         (pFVar9 = (FNameTokenStore *)
                   Net::FNetTokenStore::GetDataStore
                             ((FNetTokenStore *)*puVar10,
                              Net::FGameplayTagTokenStore::GameplayTokenStoreName),
         pFVar9 == (FNameTokenStore *)0x0)) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7958607028354546178>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                           ,0x5fe,"TagTokenStore");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (1 < (byte)LogGameplayTags._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        }
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7958607028354546162>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                           ,0x60e,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FArchiveState::SetError((FArchiveState *)param_2);
      }
      else {
        Net::FNetTokenDataStore::ReadNetToken((FNetTokenDataStore *)pFVar9,(FArchive *)&local_res20)
        ;
        if ((param_2->field_0x29 & 2) == 0) {
          Net::FNameTokenStore::ResolveToken
                    (pFVar9,(FNetToken)SUB84(&local_58,0),
                     (FNetTokenStoreState *)(ulonglong)local_res20);
          if (local_58 == 0) {
            param_1->TagName = (FName)0x0;
            return true;
          }
          this_00 = UGameplayTagsManager::Get();
          FVar11 = UGameplayTagsManager::RequestGameplayTag
                             (this_00,(FName)local_50,SUB81(local_58,0));
                    /* WARNING: Load size is inaccurate */
          param_1->TagName = *FVar11.TagName;
          return true;
        }
      }
    }
  }
  else {
    this = Net::FNetTokenExportContext::GetNetTokenExportContext(param_2);
    if (((this != (FNetTokenExportContext *)0x0) && (this->NetTokenStore != (FNetTokenStore *)0x0))
       && (pFVar9 = (FNameTokenStore *)
                    Net::FNetTokenStore::GetDataStore
                              (this->NetTokenStore,
                               Net::FGameplayTagTokenStore::GameplayTokenStoreName),
          pFVar9 != (FNameTokenStore *)0x0)) {
      FVar14.Value = 0;
      if (param_1->TagName != (FName)0x0) {
        Net::FNameTokenStore::GetOrCreateToken(pFVar9,(FName)&local_res18);
        FVar14 = local_res18;
      }
      uVar6 = 0xffffffff;
      pFVar15 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar15 = *(FNetTraceCollector **)&param_2[1].field_0x30;
      }
      if (pFVar15 != (FNetTraceCollector *)0x0) {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar15,NameId,*(uint *)&param_2[1].field_0x10);
        ::FString::PrintfImpl(&local_48,L"NetToken (Auth:%u TypeId=%u Index=%u)");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar12.Data = local_48.Data.AllocatorInstance.Data;
        }
        uVar7 = FNetTrace::TraceName((wchar_t *)FVar12.Data);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FVar13 = (pFVar15->Events).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar13 = (ForElementType<FNetTracePacketContentEvent>)&pFVar15->Events;
        }
        *(uint *)((longlong)FVar13 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      Net::FNetTokenDataStore::WriteNetToken((FNetTokenDataStore *)pFVar9,param_2,(FNetToken)FVar14)
      ;
      Net::FNetTokenExportContext::AddNetTokenPendingExport(this,(FNetToken)FVar14);
      if (uVar6 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar15,uVar6,*(uint *)&param_2[1].field_0x10);
      }
      return true;
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7958607028354546208>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                       ,0x5e0,"TagTokenStore");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (1 < (byte)LogGameplayTags._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7958607028354546186>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                       ,0x5f6,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// NetSerialize_ForReplay @ 146ae6270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::GameplayTags::GameplayTagDynamicSerialization::NetSerialize_ForReplay
          (FGameplayTag *param_1,FArchive *param_2,UPackageMapClient *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FNetToken FVar8;
  undefined8 *puVar9;
  FNameTokenStore *this;
  FNetFieldExportGroup *pFVar10;
  FNetFieldExportGroup *pFVar11;
  undefined4 extraout_var;
  UGameplayTagsManager *this_00;
  FGameplayTag FVar12;
  uint uVar13;
  FNetToken_u_0 local_res18;
  TSharedPtr<FNetFieldExportGroup,1> local_f8;
  undefined8 local_e8;
  FName local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  FString local_c0;
  FString local_b0;
  undefined1 local_a0 [8];
  TSharedPtr<FNetFieldExportGroup,1> local_98;
  FString local_88;
  FString local_78;
  FScriptContainerElement local_68 [48];
  
  puVar9 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x350))(param_3);
  if ((puVar9 == (undefined8 *)0x0) ||
     (this = (FNameTokenStore *)
             Net::FNetTokenStore::GetDataStore
                       ((FNetTokenStore *)*puVar9,
                        Net::FGameplayTagTokenStore::GameplayTokenStoreName),
     this == (FNameTokenStore *)0x0)) {
    return false;
  }
  ::FString::FString(&local_c0,L"NetworkGameplayTagDynamicIndex");
  UPackageMapClient::GetNetFieldExportGroup(param_3,&local_f8,&local_c0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((param_2->field_0x28 & 4) == 0) {
    if ((param_2->field_0x28 & 1) != 0) {
      FVar8 = Net::FNetTokenDataStore::ReadNetToken
                        ((FNetTokenDataStore *)this,(FArchive *)&stack0x00000020);
      if ((param_2->field_0x29 & 2) == 0) {
        uVar13 = *(uint *)CONCAT44(extraout_var,FVar8.field0_0x0) & 0xfffff;
        if (uVar13 == 0) {
          bVar6 = true;
          local_d8 = 0;
          param_1->TagName = (FName)0x0;
          goto LAB_146ae671a;
        }
        if (local_f8.Object == (FNetFieldExportGroup *)0x0) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7958607028354546253>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                             ,0x5b3,"NetFieldExportGroup.IsValid()");
          if (bVar6) {
code_r0x000146ae670a:
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        else {
          if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar11 = local_f8.Object;
          if (uVar13 < (uint)((local_f8.Object)->NetFieldExports).ArrayNum) {
            if ((((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            lVar2 = (ulonglong)uVar13 * 0x28;
            local_e0 = *(FName *)((pFVar11->NetFieldExports).AllocatorInstance.Data + lVar2 + 0x18);
            this_00 = UGameplayTagsManager::Get();
            FVar12 = UGameplayTagsManager::RequestGameplayTag
                               (this_00,(FName)local_a0,local_e0.ComparisonIndex.Value._0_1_);
                    /* WARNING: Load size is inaccurate */
            FVar4 = *FVar12.TagName;
            param_1->TagName = FVar4;
            if (FVar4 == (FName)0x0) {
              if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              pFVar11 = local_f8.Object;
              if ((((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              if ((pFVar11->NetFieldExports).AllocatorInstance.Data[lVar2 + 0x23] ==
                  (FScriptContainerElement)0x0) {
                if (2 < (byte)LogGameplayTags._0_1_) {
                  ::FName::ToString(&local_e0,&local_78);
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                }
                if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                pFVar11 = local_f8.Object;
                if ((((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                (pFVar11->NetFieldExports).AllocatorInstance.Data[lVar2 + 0x23] =
                     (FScriptContainerElement)0x1;
              }
            }
            goto LAB_146ae68f9;
          }
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7958607028354546253>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                             ,0x5b3,
                             "TagTokenIndex < (uint32)NetFieldExportGroup->NetFieldExports.Num()");
          if (bVar6) goto code_r0x000146ae670a;
        }
        local_e8 = 0;
        param_1->TagName = (FName)0x0;
      }
    }
    bVar6 = false;
  }
  else {
    Net::FNameTokenStore::GetOrCreateToken(this,(FName)&local_res18);
    Net::FNetTokenDataStore::WriteNetToken
              ((FNetTokenDataStore *)this,param_2,(FNetToken)local_res18);
    uVar13 = local_res18.Value & 0xfffff;
    if (uVar13 != 0) {
      pFVar11 = (FNetFieldExportGroup *)0x0;
      if (local_f8.Object == (FNetFieldExportGroup *)0x0) {
        pFVar10 = ::operator_new(0x30);
        local_f8.Object = pFVar11;
        if (pFVar10 != (FNetFieldExportGroup *)0x0) {
          (pFVar10->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->PathName).Data.ArrayNum = 0;
          (pFVar10->PathName).Data.ArrayMax = 0;
          pFVar10->PathNameIndex = 0;
          (pFVar10->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->NetFieldExports).ArrayNum = 0;
          (pFVar10->NetFieldExports).ArrayMax = 0;
          pFVar10->bDirtyForReplay = true;
          local_f8.Object = pFVar10;
        }
        pFVar10 = ::operator_new(0x18);
        if (pFVar10 != (FNetFieldExportGroup *)0x0) {
          (pFVar10->PathName).Data.ArrayNum = 1;
          (pFVar10->PathName).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)
               &
               ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (pFVar10->PathName).Data.ArrayMax = 1;
          *(FNetFieldExportGroup **)&pFVar10->PathNameIndex = local_f8.Object;
          pFVar11 = pFVar10;
        }
        local_d0 = 0;
        local_c8.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_f8.SharedReferenceCount,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.ReferenceController);
        if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        ::FString::operator=(&(local_f8.Object)->PathName,L"NetworkGameplayTagDynamicIndex");
        local_98.Object = local_f8.Object;
        local_98.SharedReferenceCount.ReferenceController =
             local_f8.SharedReferenceCount.ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        ::FString::FString(&local_b0,L"NetworkGameplayTagDynamicIndex");
        UPackageMapClient::AddNetFieldExportGroup(param_3,&local_b0,&local_98);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) {
        TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::SetNum
                  (&(local_f8.Object)->NetFieldExports,uVar13 + 1,No);
        if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        (local_f8.Object)->bDirtyForReplay = true;
      }
      if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7958607028354546281>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                             ,0x597,
                             "NetFieldExportGroup->NetFieldExports.IsValidIndex(TagTokenIndex)"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((local_f8.Object == (FNetFieldExportGroup *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar11 = local_f8.Object;
      if ((((local_f8.Object)->NetFieldExports).ArrayNum <= (int)uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar3 = (pFVar11->NetFieldExports).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (ulonglong)uVar13 * 0x28;
      if (pFVar3[(ulonglong)uVar13 * 0x28 + 0x20] == (FScriptContainerElement)0x0) {
        FVar4 = param_1->TagName;
        if (pFVar1 != local_68) {
          if (*(void **)pFVar1 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar1);
          }
          *(undefined8 *)pFVar1 = 0;
          *(undefined8 *)(pFVar1 + 8) = 0;
        }
        *(uint *)(pFVar1 + 0x10) = uVar13;
        *(FName *)(pFVar1 + 0x18) = FVar4;
        *(undefined4 *)(pFVar1 + 0x14) = 0;
        *(undefined4 *)(pFVar1 + 0x20) = 0x100;
        if (5 < (byte)LogGameplayTags._0_1_) {
          ::FName::ToString((FName *)(pFVar1 + 0x18),&local_88);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
      }
      UPackageMapClient::TrackNetFieldExport(param_3,local_f8.Object,uVar13);
      bVar6 = true;
      goto LAB_146ae671a;
    }
LAB_146ae68f9:
    bVar6 = true;
  }
LAB_146ae671a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  return bVar6;
}

