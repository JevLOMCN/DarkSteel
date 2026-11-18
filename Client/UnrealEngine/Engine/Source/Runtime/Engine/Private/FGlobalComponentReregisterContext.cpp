// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FGlobalComponentReregisterContext @ 1477ecca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGlobalComponentReregisterContext * __thiscall
FGlobalComponentReregisterContext::FGlobalComponentReregisterContext
          (FGlobalComponentReregisterContext *this,
          TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UActorComponent *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FGlobalComponentReregisterContext *pFVar9;
  longlong *plVar10;
  FUObjectItem *pFVar11;
  UWorld *pUVar12;
  UWorld *pUVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int *piVar16;
  undefined1 local_res8 [8];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  undefined8 local_res20;
  longlong *local_b8;
  TObjectIterator<UActorComponent> local_b0;
  TObjectIterator<UActorComponent> local_98;
  FNavigationLockContext local_80;
  UWorld *local_70;
  UActorComponent *local_68;
  FString local_60 [2];
  
  (this->ComponentContexts).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentContexts).Array.ArrayNum = 0;
  (this->ComponentContexts).Array.ArrayMax = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34 = 0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  ActiveGlobalReregisterContextCount = ActiveGlobalReregisterContextCount + 1;
  if (ActiveGlobalReregisterContextCount == 1) {
    local_res10 = param_1;
    FlushRenderingCommands();
    local_98.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ObjectArray.ArrayNum = 0;
    local_98.ObjectArray.ArrayMax = 0;
    local_98.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = UActorComponent::StaticClass();
    GetObjectsOfClass(pUVar8,&local_98.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UActorComponent>::Advance(&local_98);
    _Src.Data = local_98.ObjectArray.AllocatorInstance.Data;
    lVar15 = (longlong)local_98.ObjectArray.ArrayNum;
    local_b0.ObjectArray.ArrayNum = local_98.ObjectArray.ArrayNum;
    local_b0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res18 = local_98.ObjectArray.ArrayNum;
    if (local_98.ObjectArray.ArrayNum == 0) {
      local_b0.ObjectArray.ArrayMax = 0;
      local_res18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_98.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_b0,
                 local_98.ObjectArray.ArrayNum,&local_b0.ObjectArray.ArrayMax);
      memcpy(local_b0.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar15 << 3);
      local_res18 = local_98.ObjectArray.ArrayNum;
    }
    local_b0.Index = local_98.Index;
    if (local_98.Index != local_res18) {
      do {
        iVar7 = local_b0.Index;
        uVar6 = 0;
        if (local_b0.Index < local_b0.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_b0.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGlobalComponentReregisterContext *)(*pcVar3)();
          return pFVar9;
        }
        iVar1 = param_1->ArrayNum;
        pFVar14 = (param_1->AllocatorInstance).Data;
        this_00 = *(UActorComponent **)
                   (local_b0.ObjectArray.AllocatorInstance.Data + (longlong)iVar7 * 8);
        pFVar2 = pFVar14 + (longlong)iVar1 * 8;
        while( true ) {
          if (param_1->ArrayNum != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UClass_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar14 == pFVar2) break;
          lVar15 = *(longlong *)pFVar14;
          if (lVar15 != 0) {
            if ((*(int *)(lVar15 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30)) goto LAB_1477ed0c2;
          }
          pFVar14 = pFVar14 + 8;
        }
        plVar10 = ::operator_new(0x18);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          pUVar13 = (UWorld *)0x0;
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[2] = 0;
          local_res20 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar10 + 2),(FObjectPtr)&local_res20);
          *plVar10 = (longlong)&this->ScenesToUpdateAllPrimitiveSceneInfos;
          if ((this_00 == (UActorComponent *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InComponent",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                                 ,10,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FGlobalComponentReregisterContext *)(*pcVar3)();
            return pFVar9;
          }
          pFVar11 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
          if (((ulonglong)((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,local_60,(UObject *)0x0,None);
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InComponent->IsUnreachable()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                               ,0xb,L"%s");
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FGlobalComponentReregisterContext *)(*pcVar3)();
              return pFVar9;
            }
          }
          if ((this_00->bRegistered != 0) &&
             (pUVar12 = UActorComponent::GetWorld(this_00), pUVar12 != (UWorld *)0x0)) {
            pUVar13 = UActorComponent::GetWorld(this_00);
            local_80._9_1_ = local_80._9_1_ & 0xfd | 1;
            local_80.LockReason = '\x01';
            local_80.MyWorld = pUVar13;
            FNavigationLockContext::LockUpdates(&local_80);
            UActorComponent::ExecuteUnregisterEvents(this_00);
            this_00->WorldPrivate = (UWorld *)0x0;
            FNavigationLockContext::UnlockUpdates(&local_80);
          }
          local_70 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UWorld *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar10 + 2),(FObjectPtr)&local_70);
          bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(plVar10 + 2));
          local_68 = (UActorComponent *)0x0;
          if (bVar4) {
            local_68 = this_00;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_68 != (UActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_68);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar10 + 1),(FObjectPtr)&local_68);
          param_1 = local_res10;
        }
        piVar16 = &(this->ComponentContexts).Array.ArrayMax;
        pFVar2 = (this->ComponentContexts).Array.AllocatorInstance.Data;
        local_b8 = plVar10;
        if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*piVar16 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FGlobalComponentReregisterContext *)(*pcVar3)();
          return pFVar9;
        }
        iVar7 = (this->ComponentContexts).Array.ArrayNum;
        if (iVar7 == *piVar16) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar16);
        }
        (this->ComponentContexts).Array.ArrayNum = iVar7 + 1;
        *(longlong **)((this->ComponentContexts).Array.AllocatorInstance.Data + (longlong)iVar7 * 8)
             = local_b8;
LAB_1477ed0c2:
        TObjectIterator<UActorComponent>::Advance(&local_b0);
      } while (local_b0.Index != local_res18);
    }
    if (local_b0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.ObjectArray.AllocatorInstance.Data);
    }
    if (local_98.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ObjectArray.AllocatorInstance.Data);
    }
    UpdateAllPrimitiveSceneInfos(this);
  }
  return this;
}

// FGlobalComponentReregisterContext @ 1477ed140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGlobalComponentReregisterContext * __thiscall
FGlobalComponentReregisterContext::FGlobalComponentReregisterContext
          (FGlobalComponentReregisterContext *this)

{
  UActorComponent *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  FGlobalComponentReregisterContext *pFVar8;
  undefined8 *puVar9;
  FUObjectItem *pFVar10;
  UWorld *pUVar11;
  UWorld *pUVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint local_res8;
  undefined8 local_res10;
  UWorld *local_res18;
  UActorComponent *local_res20;
  undefined8 *local_a8;
  FNavigationLockContext local_a0;
  FString local_90;
  TObjectIterator<UActorComponent> local_80;
  TObjectIterator<UActorComponent> local_68;
  
  (this->ComponentContexts).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentContexts).Array.ArrayNum = 0;
  (this->ComponentContexts).Array.ArrayMax = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34 = 0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  ActiveGlobalReregisterContextCount = ActiveGlobalReregisterContextCount + 1;
  FlushRenderingCommands();
  local_68.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ObjectArray.ArrayNum = 0;
  local_68.ObjectArray.ArrayMax = 0;
  local_68.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UActorComponent::StaticClass();
  GetObjectsOfClass(pUVar7,&local_68.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UActorComponent>::Advance(&local_68);
  _Src.Data = local_68.ObjectArray.AllocatorInstance.Data;
  lVar14 = (longlong)local_68.ObjectArray.ArrayNum;
  local_80.ObjectArray.ArrayNum = local_68.ObjectArray.ArrayNum;
  local_80.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = local_68.ObjectArray.ArrayNum;
  if (local_68.ObjectArray.ArrayNum == 0) {
    local_80.ObjectArray.ArrayMax = 0;
    uVar15 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_68.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_80,
               local_68.ObjectArray.ArrayNum,&local_80.ObjectArray.ArrayMax);
    memcpy(local_80.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar14 << 3);
    uVar15 = local_68.ObjectArray._8_8_ & 0xffffffff;
    local_res8 = local_68.ObjectArray.ArrayNum;
  }
  local_80.Index = local_68.Index;
  if (local_68.Index != (uint)uVar15) {
    do {
      iVar6 = local_80.Index;
      puVar16 = (undefined8 *)0x0;
      uVar5 = 0;
      if (local_80.Index < local_80.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_80.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FGlobalComponentReregisterContext *)(*pcVar2)();
        return pFVar8;
      }
      this_00 = *(UActorComponent **)
                 (local_80.ObjectArray.AllocatorInstance.Data + (longlong)iVar6 * 8);
      puVar9 = ::operator_new(0x18);
      if (puVar9 != (undefined8 *)0x0) {
        pUVar12 = (UWorld *)0x0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        local_res10 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 2),(FObjectPtr)&local_res10);
        *puVar9 = &this->ScenesToUpdateAllPrimitiveSceneInfos;
        if ((this_00 == (UActorComponent *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InComponent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                               ,10,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGlobalComponentReregisterContext *)(*pcVar2)();
          return pFVar8;
        }
        pFVar10 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_90,(UObject *)0x0,None);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InComponent->IsUnreachable()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                             ,0xb,L"%s");
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FGlobalComponentReregisterContext *)(*pcVar2)();
            return pFVar8;
          }
        }
        if ((this_00->bRegistered != 0) &&
           (pUVar11 = UActorComponent::GetWorld(this_00), pUVar11 != (UWorld *)0x0)) {
          pUVar12 = UActorComponent::GetWorld(this_00);
          local_a0._9_1_ = local_a0._9_1_ & 0xfd | 1;
          local_a0.LockReason = '\x01';
          local_a0.MyWorld = pUVar12;
          FNavigationLockContext::LockUpdates(&local_a0);
          UActorComponent::ExecuteUnregisterEvents(this_00);
          this_00->WorldPrivate = (UWorld *)0x0;
          FNavigationLockContext::UnlockUpdates(&local_a0);
        }
        local_res18 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UWorld *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 2),(FObjectPtr)&local_res18);
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(puVar9 + 2));
        local_res20 = (UActorComponent *)0x0;
        if (bVar3) {
          local_res20 = this_00;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20 != (UActorComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res20);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 1),(FObjectPtr)&local_res20);
        uVar15 = (ulonglong)local_res8;
        puVar16 = puVar9;
      }
      piVar13 = &(this->ComponentContexts).Array.ArrayMax;
      pFVar1 = (this->ComponentContexts).Array.AllocatorInstance.Data;
      local_a8 = puVar16;
      if (((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)*piVar13 * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FGlobalComponentReregisterContext *)(*pcVar2)();
        return pFVar8;
      }
      iVar6 = (this->ComponentContexts).Array.ArrayNum;
      if (iVar6 == *piVar13) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar13);
      }
      (this->ComponentContexts).Array.ArrayNum = iVar6 + 1;
      *(undefined8 **)((this->ComponentContexts).Array.AllocatorInstance.Data + (longlong)iVar6 * 8)
           = local_a8;
      TObjectIterator<UActorComponent>::Advance(&local_80);
    } while (local_80.Index != (uint)uVar15);
  }
  if (local_80.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ObjectArray.AllocatorInstance.Data);
  }
  if (local_68.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ObjectArray.AllocatorInstance.Data);
  }
  UpdateAllPrimitiveSceneInfos(this);
  return this;
}

// ~FGlobalComponentReregisterContext @ 1477f35f0

void __thiscall
FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext
          (FGlobalComponentReregisterContext *this)

{
  int *piVar1;
  FComponentReregisterContext *pFVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_68;
  
  if ((ActiveGlobalReregisterContextCount < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveGlobalReregisterContextCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x194,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ActiveGlobalReregisterContextCount = ActiveGlobalReregisterContextCount + -1;
  if (ActiveGlobalReregisterContextCount == 0) {
    pFVar7 = (this->ComponentContexts).Array.AllocatorInstance.Data;
    for (iVar8 = (this->ComponentContexts).Array.ArrayNum; iVar8 != 0; iVar8 = iVar8 + -1) {
      pFVar2 = *(FComponentReregisterContext **)pFVar7;
      if (pFVar2 != (FComponentReregisterContext *)0x0) {
        FComponentReregisterContext::~FComponentReregisterContext(pFVar2);
        ::operator_delete(pFVar2,0x18);
      }
      pFVar7 = pFVar7 + 8;
    }
    piVar1 = &(this->ComponentContexts).Array.ArrayMax;
    (this->ComponentContexts).Array.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    pTVar6 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
             TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                       (&local_68,&this->ScenesToUpdateAllPrimitiveSceneInfos);
    UpdateAllPrimitiveSceneInfosForScenes(pTVar6);
    if ((*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
         *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                           ,0x1a3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->ScenesToUpdateAllPrimitiveSceneInfos).HashSize = 0;
  FVar3 = (this->ScenesToUpdateAllPrimitiveSceneInfos).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements);
  pFVar7 = (this->ComponentContexts).Array.AllocatorInstance.Data;
  for (iVar8 = (this->ComponentContexts).Array.ArrayNum; iVar8 != 0; iVar8 = iVar8 + -1) {
    pFVar2 = *(FComponentReregisterContext **)pFVar7;
    if (pFVar2 != (FComponentReregisterContext *)0x0) {
      FComponentReregisterContext::~FComponentReregisterContext(pFVar2);
      ::operator_delete(pFVar2,0x18);
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->ComponentContexts).Array.ArrayMax;
  (this->ComponentContexts).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar7 = (this->ComponentContexts).Array.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// UpdateAllPrimitiveSceneInfos @ 14787c460

void __thiscall
FGlobalComponentReregisterContext::UpdateAllPrimitiveSceneInfos
          (FGlobalComponentReregisterContext *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar3;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_58;
  
  pTVar3 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
           TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                     (&local_58,&this->ScenesToUpdateAllPrimitiveSceneInfos);
  UpdateAllPrimitiveSceneInfosForScenes(pTVar3);
  if (*(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x8 !=
      *(int *)&(this->ScenesToUpdateAllPrimitiveSceneInfos).Elements.field_0x34) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScenesToUpdateAllPrimitiveSceneInfos.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x1a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

