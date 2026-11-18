// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 37

// StaticClass @ 148c75aa0

UClass * __cdecl AFunctionalAITestBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITestBase",
               &Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton,
               StaticRegisterNativesAFunctionalAITestBase,0x4e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalAITestBase>,
               InternalVTableHelperCtorCaller<AFunctionalAITestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton;
}

// AFunctionalAITestBase @ 148c7e360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFunctionalAITestBase * __thiscall
AFunctionalAITestBase::AFunctionalAITestBase(AFunctionalAITestBase *this,FVTableHelper *param_1)

{
  AFunctionalTest::AFunctionalTest((AFunctionalTest *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalAITestBase__6B_;
  (this->SpawnedPawns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedPawns).ArrayNum = 0;
  (this->SpawnedPawns).ArrayMax = 0;
  (this->PendingDelayedSpawns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDelayedSpawns).ArrayNum = 0;
  (this->PendingDelayedSpawns).ArrayMax = 0;
  (this->CurrentSpawnSetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSpawnSetName).Data.ArrayNum = 0;
  (this->CurrentSpawnSetName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnAISpawned = 0;
  *(undefined8 *)&(this->OnAISpawned).field_0x8 = 0;
  *(undefined8 *)&(this->OnAISpawned).field_0x10 = 0;
  *(undefined8 *)&this->OnAllAISPawned = 0;
  *(undefined8 *)&(this->OnAllAISPawned).field_0x8 = 0;
  *(undefined8 *)&(this->OnAllAISPawned).field_0x10 = 0;
  (this->NavmeshDelayTimer).Handle = 0;
  return this;
}

// AFunctionalAITestBase @ 148c7e3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFunctionalAITestBase * __thiscall
AFunctionalAITestBase::AFunctionalAITestBase
          (AFunctionalAITestBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  AFunctionalTest::AFunctionalTest((AFunctionalTest *)this,param_1);
  this->CurrentSpawnSetIndex = -1;
  this->_padding_ = (longlong)&___7AFunctionalAITestBase__6B_;
  (this->SpawnedPawns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedPawns).ArrayNum = 0;
  (this->SpawnedPawns).ArrayMax = 0;
  (this->PendingDelayedSpawns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingDelayedSpawns).ArrayNum = 0;
  (this->PendingDelayedSpawns).ArrayMax = 0;
  (this->CurrentSpawnSetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSpawnSetName).Data.ArrayNum = 0;
  (this->CurrentSpawnSetName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnAISpawned = 0;
  *(undefined8 *)&(this->OnAISpawned).field_0x8 = 0;
  *(undefined8 *)&(this->OnAISpawned).field_0x10 = 0;
  *(undefined8 *)&this->OnAllAISPawned = 0;
  *(undefined8 *)&(this->OnAllAISPawned).field_0x8 = 0;
  *(undefined8 *)&(this->OnAllAISPawned).field_0x10 = 0;
  (this->NavmeshDelayTimer).Handle = 0;
  this->SpawnLocationRandomizationRange = 0.0;
  puVar2 = &this->field_0x4d8;
  this->bWaitForNavMesh = 1;
  this->bSingleSetRun = 0;
  this->bDebugNavMeshOnTimeout = 0;
  return this;
}

// ~AFunctionalAITestBase @ 148c80860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::~AFunctionalAITestBase(AFunctionalAITestBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7AFunctionalAITestBase__6B_;
  pvVar1 = *(void **)&(this->OnAllAISPawned).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAllAISPawned);
  pvVar1 = *(void **)&(this->OnAISpawned).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAISpawned);
  pFVar2 = (this->CurrentSpawnSetName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PendingDelayedSpawns).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnedPawns).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  return;
}

// operator() @ 148c82250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`AFunctionalAITestBase::StartSpawning'::__l2::<lambda_1>::operator()
          (void *this,FAITestSpawnInfoBase *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  FString local_58;
  FString local_48;
  int local_38;
  float fStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  float fStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  cVar7 = (**(code **)(param_1->_padding_ + 8))(param_1);
  if (cVar7 == '\0') {
    ::FName::ToString((FName *)(**(longlong **)((longlong)this + 0x18) + 8),&local_48);
    ::FString::PrintfImpl(&local_58,L"Spawn set \'%s\' contains invalid entry at index %d");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    **(undefined1 **)((longlong)this + 0x10) = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    fStack_34 = param_1->PreSpawnDelay;
    if (fStack_34 <= 0.0) {
      if (param_1->SpawnDelay == 0.0) {
        iVar10 = 0;
        if (0 < param_1->NumberToSpawn) {
          do {
            bVar3 = **(byte **)((longlong)this + 0x10);
            bVar9 = (**(code **)(param_1->_padding_ + 0x10))(param_1,*(undefined8 *)this);
            iVar10 = iVar10 + 1;
            **(byte **)((longlong)this + 0x10) = bVar9 & bVar3;
          } while (iVar10 < param_1->NumberToSpawn);
        }
      }
      else {
        bVar3 = **(byte **)((longlong)this + 0x10);
        bVar9 = (**(code **)(param_1->_padding_ + 0x10))(param_1,*(undefined8 *)this);
        **(byte **)((longlong)this + 0x10) = bVar9 & bVar3;
        if (1 < param_1->NumberToSpawn) {
          lVar4 = *(longlong *)this;
          fStack_20 = param_1->SpawnDelay;
          local_14 = **(undefined4 **)((longlong)this + 8);
          local_24 = param_1->NumberToSpawn + -1;
          uStack_18 = *(undefined4 *)(lVar4 + 0x460);
          pFVar1 = (ForAnyElementType *)(lVar4 + 0x450);
          uStack_1c = uStack_1c & 0xffffff00;
          if (((pFVar1->Data <= (FScriptContainerElement *)&local_24) &&
              ((FScriptContainerElement *)&local_24 <
               pFVar1->Data + (longlong)*(int *)(lVar4 + 0x45c) * 0x14)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)(lVar4 + 0x458);
          if (iVar10 == *(int *)(lVar4 + 0x45c)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,pFVar1,(int *)(lVar4 + 0x45c));
          }
          *(int *)(lVar4 + 0x458) = iVar10 + 1;
          pFVar5 = pFVar1->Data;
          pFVar2 = pFVar5 + (longlong)iVar10 * 0x14;
          *(ulonglong *)pFVar2 = CONCAT44(fStack_20,local_24);
          *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_18,uStack_1c);
          *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0x14 + 0x10) = local_14;
        }
      }
    }
    else {
      lVar4 = *(longlong *)this;
      local_28 = **(undefined4 **)((longlong)this + 8);
      uStack_2c = *(undefined4 *)(lVar4 + 0x460);
      pFVar1 = (ForAnyElementType *)(lVar4 + 0x450);
      local_38 = param_1->NumberToSpawn;
      uStack_30 = uStack_30 & 0xffffff00;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar1->Data + (longlong)*(int *)(lVar4 + 0x45c) * 0x14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)(lVar4 + 0x458);
      if (iVar10 == *(int *)(lVar4 + 0x45c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,pFVar1,(int *)(lVar4 + 0x45c));
      }
      *(int *)(lVar4 + 0x458) = iVar10 + 1;
      pFVar5 = pFVar1->Data;
      pFVar2 = pFVar5 + (longlong)iVar10 * 0x14;
      *(ulonglong *)pFVar2 = CONCAT44(fStack_34,local_38);
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,uStack_30);
      *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0x14 + 0x10) = local_28;
    }
  }
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

// operator() @ 148c82580

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`AFunctionalAITestBase::OnTimeout'::__l5::<lambda_1>::operator()
          (void *this,FNavigationOctreeElement *param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  FName local_res8;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  ForAnyElementType local_68;
  int local_60;
  ForAnyElementType local_58;
  int local_50;
  ForAnyElementType local_48;
  FString local_30;
  
  bVar4 = FNavigationRelevantData::IsMatchingFilter
                    ((param_1->Data).Object,*(FNavigationRelevantDataFilter **)this);
  if (bVar4) {
    FNavigationRelevantData::GetModifierForAgent
              ((param_1->Data).Object,(FCompositeNavModifier *)local_88,
               (FNavAgentProperties *)(**(longlong **)((longlong)this + 8) + 0x2d0));
    iVar1 = local_60;
    FVar3.Data = local_68.Data;
    local_b0 = local_60;
    uVar8 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,local_60,0,&local_b8,local_60,&local_ac);
      ConstructItems<FAreaNavModifier,FAreaNavModifier,int>
                (local_b8.Data,(FAreaNavModifier *)FVar3.Data,iVar1);
    }
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    if (0 < local_b0) {
      do {
        uVar5 = 0;
        if ((int)uVar8 < local_b0) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (local_b8.Data + (longlong)(int)uVar8 * 0x70 + 0xc));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar6 != (UObject *)0x0) goto LAB_148c826c2;
LAB_148c82707:
          ::FString::FString(&local_98,L"None");
        }
        else {
          if (pUVar6 == (UObject *)0x0) goto LAB_148c82707;
          UE::GC::MarkAsReachable(pUVar6);
LAB_148c826c2:
          pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_148c82707;
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_148c82707;
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
          local_res8.Number = *(uint *)&pUVar6->field_0x1c;
          ::FName::ToString(&local_res8,&local_98);
        }
        uVar5 = local_98.Data.ArrayNum - 1;
        if (local_98.Data.ArrayNum == 0) {
          uVar5 = 0;
        }
        ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar5);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChar(&local_a8,L',');
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_b0);
    }
    if (4 < (byte)LogFunctionalTest._0_1_) {
      FNavigationElement::GetName((((param_1->Data).Object)->SourceElement).Object,&local_30);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_b8.Data,local_b0);
    if ((FAreaNavModifier *)local_b8.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_58.Data,local_50);
    if ((FSimpleLinkNavModifier *)local_58.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_58.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_68.Data,local_60);
    if ((FAreaNavModifier *)local_68.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_68.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  return;
}

// AddSpawnedPawn @ 148c841e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::AddSpawnedPawn(AFunctionalAITestBase *this,APawn *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<APawn>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TObjectPtr<AController>_u_0 TVar8;
  APawn *local_28;
  TObjectPtr<AController>_u_0 local_20;
  APawn *local_18;
  
  pTVar2 = &this->SpawnedPawns;
  local_28 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(this->SpawnedPawns).ArrayMax * 8))
  {
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
  iVar6 = (this->SpawnedPawns).ArrayNum;
  piVar1 = &(this->SpawnedPawns).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SpawnedPawns).ArrayNum = iVar6 + 1;
  *(APawn **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (APawn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  TVar8 = (TObjectPtr<AController>_u_0)(param_1->Controller).field0_0x0.DebugPtr;
  if (TVar8.DebugPtr != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_AAIController_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) goto LAB_148c842f9;
  }
  TVar8.DebugPtr = (AController *)0x0;
LAB_148c842f9:
  local_20 = TVar8;
  local_18 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAISpawned,&local_20);
  return;
}

// BeginPlay @ 148c89970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::BeginPlay(AFunctionalAITestBase *this)

{
  AFunctionalAITestBase *local_res8 [4];
  code *local_18;
  AFunctionalAITestBase **local_10;
  
  local_10 = local_res8;
  local_res8[0] = (AFunctionalAITestBase *)((ulonglong)local_res8[0] & 0xffffffffffffff00);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`AFunctionalAITestBase::BeginPlay'::__l2::<lambda_1>,bool,FAITestSpawnSetBase_&>
             ::Call;
  (**(code **)(this->_padding_ + 0x8f8))(this,&local_18);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`AFunctionalAITestBase::BeginPlay'::__l2::<lambda_2>,void,FAITestSpawnSetBase_&>
             ::Call;
  local_res8[0] = this;
  (**(code **)(this->_padding_ + 0x8e8))(this,&local_18);
  AActor::BeginPlay((AActor *)this);
  return;
}

// CleanUp @ 148c8aad0

void __thiscall AFunctionalAITestBase::CleanUp(AFunctionalAITestBase *this)

{
  ::FString::operator=((FString *)&this->_padding_,L"");
  this->CurrentSpawnSetIndex = -1;
  KillOffSpawnedPawns(this);
  (**(code **)(this->_padding_ + 0x4a8))(this);
  (this->PendingDelayedSpawns).ArrayNum = 0;
  if ((this->PendingDelayedSpawns).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->PendingDelayedSpawns).AllocatorInstance,0,
               &(this->PendingDelayedSpawns).ArrayMax);
  }
  return;
}

// ClearPendingDelayedSpawns @ 148c8ab70

void __thiscall AFunctionalAITestBase::ClearPendingDelayedSpawns(AFunctionalAITestBase *this)

{
  (**(code **)(this->_padding_ + 0x4a8))();
  (this->PendingDelayedSpawns).ArrayNum = 0;
  if ((this->PendingDelayedSpawns).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->PendingDelayedSpawns).AllocatorInstance,0,
               &(this->PendingDelayedSpawns).ArrayMax);
  }
  return;
}

// ForEachSpawnSet @ 148c8f1d0

void __thiscall
AFunctionalAITestBase::ForEachSpawnSet
          (AFunctionalAITestBase *this,TFunctionRef<void___cdecl(FAITestSpawnSetBase_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xfb,L"Pure virtual not implemented (%s)");
  return;
}

// ForEachSpawnSet @ 148c8f200

void __thiscall
AFunctionalAITestBase::ForEachSpawnSet
          (AFunctionalAITestBase *this,
          TFunctionRef<void___cdecl(FAITestSpawnSetBase_const_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xf8,L"Pure virtual not implemented (%s)");
  return;
}

// GatherRelevantActors @ 148c8f2f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalAITestBase::GatherRelevantActors
          (AFunctionalAITestBase *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_res10;
  UObject *local_48;
  code *local_40;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> **local_38;
  
  AFunctionalTest::GatherRelevantActors((AFunctionalTest *)this,param_1);
  local_38 = &local_res10;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`AFunctionalAITestBase::GatherRelevantActors'::__l2::<lambda_1>,void,FAITestSpawnSetBase_const_&>
             ::Call;
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x8f0))(this,&local_40);
  pFVar8 = (this->SpawnedPawns).AllocatorInstance.Data;
  iVar2 = (this->SpawnedPawns).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->SpawnedPawns).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<APawn>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_148c8f3a2;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_148c8f3a2:
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_48 = pUVar3;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(UObject **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetAdditionalTestFinishedMessage @ 148c8fbe0

FString * __thiscall
AFunctionalAITestBase::GetAdditionalTestFinishedMessage
          (AFunctionalAITestBase *this,FString *__return_storage_ptr__,EFunctionalTestResult param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar12 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->SpawnedPawns).ArrayNum < 1) {
    return __return_storage_ptr__;
  }
  iVar7 = (this->CurrentSpawnSetName).Data.ArrayNum;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar7 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->CurrentSpawnSetName).Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,L"None");
    if (iVar7 != 0) {
      ::FString::PrintfImpl(&local_58,L"spawn set \'%s\', pawns: ");
      if (__return_storage_ptr__ != &local_58) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_148c8fcea;
    }
  }
  ::FString::operator=(__return_storage_ptr__,L"pawns: ");
LAB_148c8fcea:
  piVar1 = &(this->SpawnedPawns).ArrayNum;
  uVar13 = uVar12;
  if (0 < *piVar1) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar11 < (this->SpawnedPawns).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar4)();
        return pFVar9;
      }
      lVar3 = *(longlong *)((this->SpawnedPawns).AllocatorInstance.Data + uVar13);
      if (lVar3 == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = *(FName *)(lVar3 + 0x18);
        ::FName::ToString(&local_res8,&local_48);
      }
      ::FString::PrintfImpl(&local_38,L"%s, ");
      uVar8 = local_38.Data.ArrayNum - 1;
      if (local_38.Data.ArrayNum == 0) {
        uVar8 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,uVar8);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < *piVar1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148c91140

UClass * __cdecl AFunctionalAITestBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITestBase",
               &Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton,
               StaticRegisterNativesAFunctionalAITestBase,0x4e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AFunctionalAITestBase>,
               InternalVTableHelperCtorCaller<AFunctionalAITestBase>,local_res8,
               AFunctionalTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITestBase.InnerSingleton;
}

// GetRandomizedLocation @ 148c91e80

TVector<double> * __thiscall
AFunctionalAITestBase::GetRandomizedLocation
          (AFunctionalAITestBase *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = (int)this->_padding_ * 0xbb38435 + 0x3619636b;
  dVar6 = (double)(float)((uint)this->SpawnLocationRandomizationRange ^
                         __xmm_80000000800000008000000080000000);
  uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
  *(uint *)&this->_padding_ = uVar2;
  dVar5 = (double)this->SpawnLocationRandomizationRange - dVar6;
  fVar3 = (float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  fVar4 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)fVar3 * dVar5 + dVar6 + (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)fVar4 * dVar5 + dVar6 + (param_1->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// GetReproString @ 148c923d0

FString * __thiscall
AFunctionalAITestBase::GetReproString(AFunctionalAITestBase *this,FString *__return_storage_ptr__)

{
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s%d");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSpawnInfo @ 148c92490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall
AFunctionalAITestBase::GetSpawnInfo(AFunctionalAITestBase *this,int param_1,int param_2)

{
  longlong *plVar1;
  FAITestSpawnInfoBase *pFVar2;
  undefined4 in_register_00000014;
  
  plVar1 = (longlong *)
           (**(code **)(this->_padding_ + 0x900))(this,CONCAT44(in_register_00000014,param_1));
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c924b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FAITestSpawnInfoBase *)(**(code **)(*plVar1 + 8))(plVar1,param_2);
    return pFVar2;
  }
  return (FAITestSpawnInfoBase *)0x0;
}

// GetSpawnInfo @ 148c924d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall
AFunctionalAITestBase::GetSpawnInfo(AFunctionalAITestBase *this,int param_1,int param_2)

{
  longlong *plVar1;
  FAITestSpawnInfoBase *pFVar2;
  undefined4 in_register_00000014;
  
  plVar1 = (longlong *)
           (**(code **)(this->_padding_ + 0x908))(this,CONCAT44(in_register_00000014,param_1));
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c924f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FAITestSpawnInfoBase *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    return pFVar2;
  }
  return (FAITestSpawnInfoBase *)0x0;
}

// GetSpawnSet @ 148c92650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnSetBase * __thiscall
AFunctionalAITestBase::GetSpawnSet(AFunctionalAITestBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0x104,L"Pure virtual not implemented (%s)");
  return (FAITestSpawnSetBase *)0x0;
}

// GetSpawnSet @ 148c92680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnSetBase * __thiscall
AFunctionalAITestBase::GetSpawnSet(AFunctionalAITestBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0x101,L"Pure virtual not implemented (%s)");
  return (FAITestSpawnSetBase *)0x0;
}

// IsNavMeshReady @ 148c93d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AFunctionalAITestBase::IsNavMeshReady(AFunctionalAITestBase *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemV1 *this_00;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 == (UWorld *)0x0) {
    return false;
  }
  this_00 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_148c93dd1;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_148c93dd1:
  if ((this_00 != (UNavigationSystemV1 *)0x0) && (0 < (this_00->NavDataSet).ArrayNum)) {
    bVar2 = UNavigationSystemV1::IsNavigationBuildInProgress(this_00);
    return !bVar2;
  }
  return false;
}

// IsOneOfSpawnedPawns @ 148c93e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalAITestBase::IsOneOfSpawnedPawns(AFunctionalAITestBase *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  if (param_1 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      pFVar4 = (this->SpawnedPawns).AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)(this->SpawnedPawns).ArrayNum * 8;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
        if (*(AActor **)pFVar4 == (AActor *)0x0) {
          bVar5 = param_1 == (AActor *)0x0;
        }
        else {
          bVar5 = *(AActor **)pFVar4 == param_1;
        }
        if (bVar5) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsReady_Implementation @ 148c93f10

bool __thiscall AFunctionalAITestBase::IsReady_Implementation(AFunctionalAITestBase *this)

{
  bool bVar1;
  
  if (this->bWaitForNavMesh != 0) {
    bVar1 = IsNavMeshReady(this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsValidSpawnSetIndex @ 148c94290

bool __thiscall AFunctionalAITestBase::IsValidSpawnSetIndex(AFunctionalAITestBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0x10d,L"Pure virtual not implemented (%s)");
  return false;
}

// KillOffSpawnedPawns @ 148c94360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::KillOffSpawnedPawns(AFunctionalAITestBase *this)

{
  TArray<TObjectPtr<APawn>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  pTVar1 = &this->SpawnedPawns;
  uVar5 = 0;
  if (0 < (this->SpawnedPawns).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SpawnedPawns).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->SpawnedPawns).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        AActor::Destroy(*(AActor **)((pTVar1->AllocatorInstance).Data + lVar6),false,true);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->SpawnedPawns).ArrayNum);
  }
  (this->SpawnedPawns).ArrayNum = 0;
  if ((this->SpawnedPawns).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->SpawnedPawns).ArrayMax);
  }
  return;
}

// OnSpawningFailure @ 148c96000

void __thiscall AFunctionalAITestBase::OnSpawningFailure(AFunctionalAITestBase *this)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x880);
  ::FString::FString(&local_18,L"Unable to spawn AI");
  (*pcVar1)(this,4,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnTimeout @ 148c963c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::OnTimeout(AFunctionalAITestBase *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  TTransform<double> *pTVar9;
  longlong *this_00;
  UNavigationSystemV1 *this_01;
  TObjectPtr<ANavigationData>_u_0 TVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  FNavigationRelevantDataFilter local_d8 [4];
  <lambda_1> local_c8;
  double local_b8;
  FName local_a8;
  TObjectPtr<ANavigationData>_u_0 local_a0;
  TVector4<double>_u_0 local_98;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  
  if (this->bDebugNavMeshOnTimeout == 0) goto LAB_148c96779;
  pUVar7 = AActor::GetWorld((AActor *)this);
  if ((pUVar7 == (UWorld *)0x0) ||
     (this_01 = (UNavigationSystemV1 *)(pUVar7->NavigationSystem).field0_0x0.DebugPtr,
     this_01 == (UNavigationSystemV1 *)0x0)) {
LAB_148c96423:
    this_01 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar8->_padding_)) goto LAB_148c96423;
  }
  if (this_01 == (UNavigationSystemV1 *)0x0) goto LAB_148c96779;
  TVar10 = (TObjectPtr<ANavigationData>_u_0)(this_01->MainNavData).field0_0x0.DebugPtr;
  if (TVar10.DebugPtr == (ANavigationData *)0x0) {
LAB_148c9648d:
    TVar10.DebugPtr = (ANavigationData *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if ((*(int *)((TVar10.DebugPtr)->_padding_ + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar8->_padding_)) goto LAB_148c9648d;
  }
  local_a0 = TVar10;
  if (4 < (byte)LogFunctionalTest._0_1_) {
    if (TVar10.DebugPtr == (ANavigationData *)0x0) {
      ::FString::FString((FString *)&local_c8,L"None");
    }
    else {
      local_a8 = (FName)(TVar10.DebugPtr)->_padding_;
      ::FName::ToString(&local_a8,(FString *)&local_c8);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    if (local_c8.AreaFilter != (FNavigationRelevantDataFilter *)0x0) {
      FMemory::Free(local_c8.AreaFilter);
    }
    if (4 < (byte)LogFunctionalTest._0_1_) {
      UNavigationSystemV1::HasDirtyAreasQueued(this_01);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
  }
  INSERT(local_d8[0],0,4,1);
  INSERT(local_d8[0],1,3,1);
  INSERT(local_d8[0],1,2,1);
  INSERT(local_d8[0],0,1,1);
  INSERT(local_d8[0],0,0,1);
  if (this->_padding_ == 0) {
    pTVar9 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar9 = (TTransform<double> *)(this->_padding_ + 0x1f0);
  }
  this_00 = &((this_01->DefaultOctreeController).NavOctree.Object)->_padding_;
  dVar21 = (pTVar9->Rotation).ZW.m128d_f64[1];
  dVar14 = (this->NavMeshDebugOrigin).field0_0x0._s_0.Z * (pTVar9->Scale3D).ZW.m128d_f64[0];
  dVar6 = (pTVar9->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar4 = (pTVar9->Scale3D).XY.m128d_f64[0] * (this->NavMeshDebugOrigin).field0_0x0._s_0.X;
  dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1] * (this->NavMeshDebugOrigin).field0_0x0._s_0.Y;
  uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar16 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar15 = blendpd(auVar16,*(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64,2);
  auVar22._8_4_ = SUB84(dVar5,0);
  auVar22._0_8_ = dVar4;
  auVar22._12_4_ = uVar20;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar20;
  auVar23._0_8_ = auVar22._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar4;
  auVar23._8_8_ = dVar14 * auVar16._8_8_ - (pTVar9->Rotation).ZW.m128d_f64[0] * dVar5;
  auVar16 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._0_8_ = dVar14;
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * (pTVar9->Rotation).ZW.m128d_f64[0] - auVar15._0_8_ * dVar14;
  auVar13._8_8_ = auVar12._8_8_ * (pTVar9->Rotation).ZW.m128d_f64[1] - auVar15._8_8_ * dVar6;
  auVar12 = blendpd(auVar23,auVar13,2);
  auVar24._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar24._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  dVar18 = auVar23._8_8_ + auVar23._8_8_;
  dVar19 = auVar13._0_8_ + auVar13._0_8_;
  auVar25._8_4_ = SUB84(dVar19,0);
  auVar25._0_8_ = dVar18;
  uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar25._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar19,0);
  auVar15._0_8_ = dVar18;
  auVar15._12_4_ = uVar20;
  dVar6 = (this->NavMeshDebugExtent).field0_0x0._s_0.Z;
  auVar12 = blendpd(auVar16,*(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar18;
  auVar26._8_8_ = auVar24._0_8_ * auVar16._8_8_ - (pTVar9->Rotation).ZW.m128d_f64[0] * dVar19;
  dVar1 = (this->NavMeshDebugExtent).field0_0x0._s_0.X;
  auVar16 = blendpd(auVar15,auVar24,2);
  auVar17._0_8_ = auVar16._0_8_ * (pTVar9->Rotation).ZW.m128d_f64[0] - auVar12._0_8_ * auVar24._0_8_
  ;
  auVar17._8_8_ = auVar16._8_8_ * (pTVar9->Rotation).ZW.m128d_f64[1] - auVar12._8_8_ * auVar24._8_8_
  ;
  dVar2 = (this->NavMeshDebugExtent).field0_0x0._s_0.Y;
  auVar16 = blendpd(auVar26,auVar17,2);
  dVar4 = auVar26._8_8_ + dVar4 + dVar21 * dVar18 + (pTVar9->Translation).XY.m128d_f64[0];
  dVar5 = auVar17._0_8_ + dVar5 + dVar21 * dVar19 + (pTVar9->Translation).XY.m128d_f64[1];
  local_b8 = auVar16._0_8_ + dVar14 + dVar21 * auVar24._0_8_ + (pTVar9->Translation).ZW.m128d_f64[0]
  ;
  local_c8.Navmesh = (ARecastNavMesh **)&local_a0;
  local_c8.AreaFilter = local_d8;
  dVar18 = dVar4 - dVar1;
  dVar21 = dVar5 - dVar2;
  dVar14 = local_b8 - dVar6;
  local_78 = ((dVar4 + dVar1) - dVar18) * __real_3fe0000000000000;
  local_70 = ((dVar5 + dVar2) - dVar21) * __real_3fe0000000000000;
  local_68 = ((local_b8 + dVar6) - dVar14) * __real_3fe0000000000000;
  local_98._s_0.X = local_78 + dVar18;
  local_98._s_0.Y = local_70 + dVar21;
  local_98._s_0.Z = local_68 + dVar14;
  local_98._s_0.W = 0.0;
  local_60 = 0;
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
  FindElementsWithBoundsTestInternal<_AFunctionalAITestBase::OnTimeout_::__l5::<lambda_1>_>
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)this_00,0,
             (FOctreeNodeContext *)this_00,(FBoxCenterAndExtent *)&local_98._s_0,&local_c8);
LAB_148c96779:
  AFunctionalTest::OnTimeout((AFunctionalTest *)this);
  return;
}

// RemoveSpawnSetIfPredicate @ 148c97ea0

void __thiscall
AFunctionalAITestBase::RemoveSpawnSetIfPredicate
          (AFunctionalAITestBase *this,TFunctionRef<bool___cdecl(FAITestSpawnSetBase_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xfe,L"Pure virtual not implemented (%s)");
  return;
}

// RunTest @ 148c9a670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AFunctionalAITestBase::RunTest
          (AFunctionalAITestBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  
  KillOffSpawnedPawns(this);
  (**(code **)(this->_padding_ + 0x4a8))(this,0);
  (this->PendingDelayedSpawns).ArrayNum = 0;
  if ((this->PendingDelayedSpawns).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->PendingDelayedSpawns).AllocatorInstance,0,
               &(this->PendingDelayedSpawns).ArrayMax);
  }
  *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar6 = 0;
  iVar7 = param_1->ArrayNum;
  this->bSingleSetRun = 0;
  if (0 < iVar7) {
    uVar6 = 4;
  }
  *(uint *)&this->field_0x4d8 = *(uint *)&this->field_0x4d8 | uVar6;
  if (iVar7 < 1) {
    this->CurrentSpawnSetIndex = this->CurrentSpawnSetIndex + 1;
    iVar7 = this->CurrentSpawnSetIndex;
  }
  else {
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      iVar7 = _wtoi(L"");
      this->CurrentSpawnSetIndex = iVar7;
    }
    else {
      iVar7 = _wtoi(*(wchar_t **)pFVar1);
      this->CurrentSpawnSetIndex = iVar7;
    }
  }
  cVar5 = (**(code **)(this->_padding_ + 0x910))(this,iVar7);
  if (cVar5 == '\0') {
    return false;
  }
  bVar3 = AFunctionalTest::RunTest((AFunctionalTest *)this,param_1);
  return bVar3;
}

// Spawn @ 148c9cc10

bool __thiscall AFunctionalAITestBase::Spawn(AFunctionalAITestBase *this,int param_1,int param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 in_register_00000014;
  
  plVar2 = (longlong *)
           (**(code **)(this->_padding_ + 0x900))(this,CONCAT44(in_register_00000014,param_1));
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c9cc59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,this,*(code **)(*plVar2 + 0x10));
      return (bool)uVar1;
    }
  }
  return false;
}

// StartSpawning @ 148c9ccb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::StartSpawning(AFunctionalAITestBase *this)

{
  FString *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FTimerManager *pFVar5;
  UWorld *this_00;
  FString *pFVar6;
  char local_res8 [8];
  undefined4 local_res10 [2];
  longlong *local_res18;
  FTimerHandle local_res20;
  FString local_88;
  code *local_78;
  AFunctionalAITestBase **local_70;
  FString local_68;
  AFunctionalAITestBase *local_58;
  undefined4 *local_50;
  char *local_48;
  longlong **local_40;
  
  if ((this->bWaitForNavMesh != 0) && (bVar4 = IsNavMeshReady(this), !bVar4)) {
    pFVar5 = AActor::GetWorldTimerManager((AActor *)this);
    FTimerManager::SetTimer<AFunctionalAITestBase>
              (pFVar5,&this->NavmeshDelayTimer,this,(pmf_3d36e721)0x148c9ccb0,__real_3f000000,false,
               __real_bf800000);
    return;
  }
  local_res18 = (longlong *)(**(code **)(this->_padding_ + 0x900))(this,this->CurrentSpawnSetIndex);
  if (local_res18 == (longlong *)0x0) {
    pcVar2 = *(code **)(this->_padding_ + 0x880);
    ::FString::PrintfImpl(&local_88,L"Unable to use spawn set: %d");
    (*pcVar2)(this,4,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    this_00 = AActor::GetWorld((AActor *)this);
    if ((this_00 == (UWorld *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalAITest.cpp"
                           ,0x9f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8[0] = '\x01';
    pFVar6 = ::FName::ToString((FName *)(local_res18 + 1),&local_68);
    pFVar1 = &this->CurrentSpawnSetName;
    if (pFVar1 != pFVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->CurrentSpawnSetName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->CurrentSpawnSetName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_50 = local_res10;
    local_res10[0] = 0;
    local_48 = local_res8;
    local_40 = &local_res18;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`AFunctionalAITestBase::StartSpawning'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_&>
               ::Call;
    local_58 = this;
    (**(code **)(*local_res18 + 0x20))(local_res18,&local_78);
    if (local_res8[0] == '\0') {
      KillOffSpawnedPawns(this);
      local_res20.Handle = 0;
      pFVar5 = UWorld::GetTimerManager(this_00);
      FTimerManager::SetTimer<AFunctionalAITestBase>
                (pFVar5,&local_res20,this,(pmf_3d36e721)0x148c96000,__real_3dcccccd,false,
                 __real_bf800000);
    }
    else if (0 < (this->PendingDelayedSpawns).ArrayNum) {
      (**(code **)(this->_padding_ + 0x4a8))(this,1);
    }
  }
  return;
}

// StartTest @ 148c9cfe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::StartTest(AFunctionalAITestBase *this)

{
  AFunctionalTest::StartTest((AFunctionalTest *)this);
  StartSpawning(this);
  return;
}

// StaticRegisterNativesAFunctionalAITestBase @ 148c9d330

void __cdecl AFunctionalAITestBase::StaticRegisterNativesAFunctionalAITestBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AFunctionalAITestBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 148c9e2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalAITestBase::Tick(AFunctionalAITestBase *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  FAITestSpawnInfoBase *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  AFunctionalTest::Tick((AFunctionalTest *)this,param_1);
  iVar3 = (this->PendingDelayedSpawns).ArrayNum;
  pFVar7 = (this->PendingDelayedSpawns).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar3 * 0x14;
LAB_148c9e307:
  do {
    if ((this->PendingDelayedSpawns).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPendingDelayedSpawn,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    if ((pFVar7[8] == (FScriptContainerElement)0x0) && (this != (AFunctionalAITestBase *)0x0)) {
      fVar2 = *(float *)(pFVar7 + 4);
      *(float *)(pFVar7 + 4) = fVar2 - param_1;
      if (fVar2 - param_1 <= 0.0) {
        iVar4 = *(int *)(pFVar7 + 0x10);
        plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x900))(this,*(int *)(pFVar7 + 0xc));
        if (plVar5 != (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,iVar4);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,this);
          }
        }
        *(int *)pFVar7 = *(int *)pFVar7 + -1;
        if (*(int *)pFVar7 == 0) {
          pFVar7[8] = (FScriptContainerElement)0x1;
          pFVar7 = pFVar7 + 0x14;
          goto LAB_148c9e307;
        }
        pFVar6 = GetSpawnInfo(this,*(int *)(pFVar7 + 0xc),*(int *)(pFVar7 + 0x10));
        if (pFVar6 != (FAITestSpawnInfoBase *)0x0) {
          *(float *)(pFVar7 + 4) = pFVar6->SpawnDelay;
        }
      }
    }
    pFVar7 = pFVar7 + 0x14;
  } while( true );
}

// WantsToRunAgain @ 148ca12c0

bool __thiscall AFunctionalAITestBase::WantsToRunAgain(AFunctionalAITestBase *this)

{
  char cVar1;
  
  if (this->bSingleSetRun == 0) {
    cVar1 = (**(code **)(this->_padding_ + 0x910))(this,this->CurrentSpawnSetIndex + 1);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// execIsOneOfSpawnedPawns @ 148ca90f0

void __cdecl
AFunctionalAITestBase::execIsOneOfSpawnedPawns(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x918))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

