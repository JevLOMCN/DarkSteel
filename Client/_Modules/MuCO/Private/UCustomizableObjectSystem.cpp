// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 57

// StaticClass @ 14ac045c0

UClass * __cdecl UCustomizableObjectSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSystem",
               &Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObjectSystem>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSystem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton;
}

// UCustomizableObjectSystem @ 14ac0be70

UCustomizableObjectSystem * __thiscall
UCustomizableObjectSystem::UCustomizableObjectSystem
          (UCustomizableObjectSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectSystem__6B_;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectSystemPrivate *)0x0;
  return this;
}

// ~UCustomizableObjectSystem @ 14ac0d030

void __thiscall
UCustomizableObjectSystem::~UCustomizableObjectSystem(UCustomizableObjectSystem *this)

{
  this->_padding_ = (longlong)&___7UCustomizableObjectSystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddUncompiledCOWarning @ 14ac14970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystem::AddUncompiledCOWarning
          (UCustomizableObjectSystem *this,UCustomizableObject *param_1,FString *param_2)

{
  int iVar1;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = (FName)param_1->_padding_;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl(&local_48,L"Warning: Customizable Object [%s] not loaded or compiled.");
  iVar1 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_res10 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res10,&local_38);
  ::FString::PrintfImpl
            (&local_28,
             L"Customizable Object [%s] not loaded or compiled. This is not an Editor build, so this is an unrecoverable bad state; could be due to code or a cook failure.  %s"
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (1 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginDestroy @ 14ac15940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCustomizableObjectSystem::BeginDestroy(UCustomizableObjectSystem *this)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  UCustomizableObjectSystemPrivate *pUVar6;
  FTaskBase *pFVar7;
  code *pcVar8;
  bool bVar9;
  FStreamingManagerCollection *this_00;
  undefined ***pppuVar10;
  TSharedPtr<FUpdateContextPrivate,1> *pTVar11;
  IStreamingManager *pIVar12;
  FMutableTaskGraph *pFVar13;
  undefined1 auStack_c8 [32];
  FTaskHandle **local_a8;
  FTaskHandle *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  FSharedReferencer<1> FStack_78;
  TWeakPtr<FTSTicker::FElement,1> local_70;
  longlong local_60;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_58;
  undefined **local_48;
  FUnrealMutableModelBulkReader *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
LAB_14ac15bc1:
    UObject::BeginDestroy((UObject *)this);
    return;
  }
  this_00 = IStreamingManager::Get();
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pUVar6 = (this->Private).field0_0x0.DebugPtr;
  pIVar12 = (IStreamingManager *)&pUVar6->_padding_;
  if (pUVar6 == (UCustomizableObjectSystemPrivate *)0x0) {
    pIVar12 = (IStreamingManager *)0x0;
  }
  FStreamingManagerCollection::RemoveStreamingManager(this_00,pIVar12);
  pUVar6 = (this->Private).field0_0x0.DebugPtr;
  local_70.Object = (pUVar6->TickWarningsDelegateHandle).Object;
  local_70.WeakReferenceCount.ReferenceController =
       (pUVar6->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_70);
  pUVar6 = (this->Private).field0_0x0.DebugPtr;
  pFVar13 = &pUVar6->MutableTaskGraph;
  if (pFVar13 != (FMutableTaskGraph *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
    (pUVar6->MutableTaskGraph).bAllowLaunchMutableTaskLowPriority = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
    if ((((this->Private).field0_0x0.DebugPtr)->Streamer).Object ==
        (FUnrealMutableModelBulkReader *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private->Streamer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x37d,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pUVar6 = (this->Private).field0_0x0.DebugPtr;
    local_98 = (FTaskHandle *)0x0;
    local_90 = 0;
    local_38 = (pUVar6->Streamer).SharedReferenceCount.ReferenceController;
    local_40 = (pUVar6->Streamer).Object;
    if (local_38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UCustomizableObjectSystem::BeginDestroy'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_58.AllocatorInstance.Data =
         (FScriptContainerElement *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UCustomizableObjectSystem::BeginDestroy'::__l5::<lambda_1>,void>::Call;
    local_a8 = &local_98;
    local_30 = (undefined ***)0x0;
    FMutableTaskGraph::AddMutableThreadTask
              (&pUVar6->MutableTaskGraph,(wchar_t *)&local_88,
               (TUniqueFunction<void___cdecl(void)> *)L"EndStream",&local_58);
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88 + 6);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_88)(local_88,1);
      }
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      pppuVar10 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar10 = local_30;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar2 = local_98;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_98,(int)local_90);
    if (pFVar2 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar2);
    }
    pUVar6 = (this->Private).field0_0x0.DebugPtr;
    pFVar13 = &pUVar6->MutableTaskGraph;
    if (pFVar13 != (FMutableTaskGraph *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
      pFVar7 = (pUVar6->MutableTaskGraph).LastMutableTask.Pimpl.Reference;
      pFVar2 = &(pUVar6->MutableTaskGraph).LastMutableTask;
      if (pFVar7 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(pFVar7);
        if (pFVar2 != (FTaskHandle *)&local_60) {
          pFVar7 = (pFVar2->Pimpl).Reference;
          (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
          if (pFVar7 != (FTaskBase *)0x0) {
            LOCK();
            paVar3 = &pFVar7->RefCount;
            aVar5 = *paVar3;
            *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
            UNLOCK();
            if (aVar5 == (atomic<unsigned_int>)0x1) {
              (**(code **)pFVar7->_padding_)(pFVar7,1);
            }
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
      pUVar6 = (this->Private).field0_0x0.DebugPtr;
      pTVar11 = &pUVar6->CurrentMutableOperation;
      local_80 = 0;
      FStack_78.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar11 != (TSharedPtr<FUpdateContextPrivate,1> *)&local_80) {
        pTVar11->Object = (FUpdateContextPrivate *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pUVar6->CurrentMutableOperation).SharedReferenceCount,&FStack_78);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_78.ReferenceController);
      (((this->Private).field0_0x0.DebugPtr)->CurrentInstanceBeingUpdated).field0_0x0.DebugPtr =
           (UCustomizableObjectInstance *)0x0;
      UCustomizableObjectSystemPrivate::SSystem = (UCustomizableObjectSystem *)0x0;
      (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectSystemPrivate *)0x0;
      goto LAB_14ac15bc1;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DiscardInstances @ 14ac18530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCustomizableObjectSystem::DiscardInstances(UCustomizableObjectSystem *this)

{
  undefined8 *puVar1;
  int iVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  UCustomizableObjectInstanceUsage *this_00;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  EInternalObjectFlags EVar11;
  uint uVar12;
  UCustomizableObjectInstance *this_01;
  UCustomizableInstancePrivate *pUVar13;
  UCustomizableObject *this_02;
  UCustomizableObjectPrivate *this_03;
  UModelResources *pUVar14;
  UClass *pUVar15;
  UCustomizableSkeletalComponent *pUVar16;
  UCustomizableObjectInstance *pUVar17;
  USkeletalMeshComponent *this_04;
  UObject *pUVar18;
  FName *pFVar19;
  FModuleManager *this_05;
  IModuleInterface *pIVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  undefined8 *puVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  int local_res10;
  longlong local_res20;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_d8;
  undefined1 local_c0 [12];
  uint local_b4;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>
  *local_98;
  undefined8 *local_90;
  int local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_80;
  FName local_58 [3];
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4174,"Mutable_DiscardInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0x104e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4174);
  }
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x1050,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = CVarMaxNumInstancesToDiscardPerTick.Ref;
  iVar24 = 0;
  local_res10 = 0;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = pTVar7->ShadowedValue[0];
  TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_c0,
             &(((this->Private).field0_0x0.DebugPtr)->MutablePendingInstanceWork).
              PendingInstanceDiscards);
  if (local_a4 < *(int *)(local_b0 + 0x18)) {
    do {
      uVar8 = local_c0._0_8_;
      if (iVar2 <= iVar24) break;
      lVar22 = (longlong)local_a4;
      this_01 = (UCustomizableObjectInstance *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)local_c0._0_8_ + lVar22 * 0x10))
      ;
      pUVar3 = (this->Private).field0_0x0.DebugPtr;
      if (((pUVar3->CurrentMutableOperation).Object == (FUpdateContextPrivate *)0x0) ||
         (bVar9 = TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr>::
                  UEOpEquals<UCustomizableObjectInstance,bool>
                            (&((pUVar3->CurrentMutableOperation).Object)->Instance,
                             (TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr> *)
                             (*(longlong *)uVar8 + lVar22 * 0x10)), !bVar9)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (((this_01 != (UCustomizableObjectInstance *)0x0) &&
          (pUVar13 = UCustomizableObjectInstance::GetPrivate(this_01),
          pUVar13 != (UCustomizableInstancePrivate *)0x0)) && (!bVar9)) {
        pUVar13 = UCustomizableObjectInstance::GetPrivate(this_01);
        if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Private",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                               ,0x32c,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        cVar10 = (**(code **)(*(longlong *)
                               (((this->Private).field0_0x0.DebugPtr)->CurrentInstanceLODManagement)
                               .field0_0x0.DebugPtr + 0x2d8))();
        if (cVar10 != '\0') {
          if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Private",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                 ,0x32c,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar26 = (float)(**(code **)(*(longlong *)
                                        (((this->Private).field0_0x0.DebugPtr)->
                                        CurrentInstanceLODManagement).field0_0x0.DebugPtr + 0x2d0))
                                    ();
          if (pUVar13->LastMinSquareDistFromComponentToPlayer <= fVar26 * fVar26)
          goto LAB_14ac18a52;
        }
        UCustomizableInstancePrivate::DiscardResources(pUVar13);
        this_02 = UCustomizableObjectInstance::GetCustomizableObject(this_01);
        if (this_02 != (UCustomizableObject *)0x0) {
          this_03 = UCustomizableObject::GetPrivate(this_02);
          pUVar14 = UCustomizableObjectPrivate::GetModelResources(this_03);
          if (pUVar14 != (UModelResources *)0x0) {
            local_d8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ObjectArray.ArrayNum = 0;
            local_d8.ObjectArray.ArrayMax = 0;
            local_d8.Index = 0xffffffff;
            EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
            pUVar15 = UCustomizableObjectInstanceUsage::StaticClass();
            GetObjectsOfClass(pUVar15,&local_d8.ObjectArray,true,RF_ClassDefaultObject,
                              EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted)
                             );
            while( true ) {
              TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_d8);
              lVar22 = (longlong)local_d8.Index;
              if ((local_d8.Index < 0) || (local_d8.ObjectArray.ArrayNum <= local_d8.Index)) break;
              uVar12 = 0;
              if (local_d8.Index < local_d8.ObjectArray.ArrayNum) {
                uVar12 = (uint)~local_d8.Index >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this_00 = *(UCustomizableObjectInstanceUsage **)
                         (local_d8.ObjectArray.AllocatorInstance.Data + lVar22 * 8);
              if ((this_00 != (UCustomizableObjectInstanceUsage *)0x0) &&
                 (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
                pUVar16 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                                    ((this_00->Private).field0_0x0.DebugPtr);
                if (pUVar16 == (UCustomizableSkeletalComponent *)0x0) {
                  pUVar17 = (this_00->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
                }
                else {
                  pUVar17 = (pUVar16->CustomizableObjectInstance).field0_0x0.DebugPtr;
                }
                if (pUVar17 == this_01) {
                  this_04 = UCustomizableObjectInstanceUsage::GetAttachParent(this_00);
                  if (this_04 != (USkeletalMeshComponent *)0x0) {
                    UCustomizableObjectInstanceUsage::GetComponentName(this_00);
                    pFVar4 = (pUVar14->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
                    for (pFVar21 = pFVar4;
                        pFVar21 !=
                        pFVar4 + (longlong)(pUVar14->ComponentNamesPerObjectComponent).ArrayNum * 8;
                        pFVar21 = pFVar21 + 8) {
                      if (*(longlong *)pFVar21 == local_res20) {
                        iVar24 = (int)((longlong)pFVar21 - (longlong)pFVar4 >> 3);
                        if ((-1 < iVar24) &&
                           (iVar24 < (pUVar14->ReferenceSkeletalMeshesData).ArrayNum)) {
                          pUVar3 = (this->Private).field0_0x0.DebugPtr;
                          pUVar18 = (UObject *)0x0;
                          if ((pUVar3 != (UCustomizableObjectSystemPrivate *)0x0) &&
                             (pUVar3->bReplaceDiscardedWithReferenceMesh != false)) {
                            pFVar4 = (pUVar14->ReferenceSkeletalMeshesData).AllocatorInstance.Data;
                            local_80.WeakPtr =
                                 *(FWeakObjectPtr *)(pFVar4 + (longlong)iVar24 * 0xe8 + 8);
                            FSoftObjectPath::FSoftObjectPath
                                      (&local_80.ObjectID,
                                       (FSoftObjectPath *)(pFVar4 + (longlong)iVar24 * 0xe8 + 0x10))
                            ;
                            pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_80);
                            if (pUVar18 == (UObject *)0x0) {
                              if (local_80.ObjectID.AssetPath.PackageName != (FName)0x0) {
                                FSoftObjectPath::TryLoad
                                          (&local_80.ObjectID,(FUObjectSerializeContext *)0x0);
                                pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_80);
                                goto LAB_14ac1896c;
                              }
LAB_14ac18994:
                              pUVar18 = (UObject *)0x0;
                            }
                            else {
LAB_14ac1896c:
                              if (pUVar18 == (UObject *)0x0) goto LAB_14ac18994;
                              pUVar15 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                              iVar24 = (int)pUVar15->_padding_;
                              if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar24) ||
                                 ((longlong *)
                                  *(undefined1 **)
                                   (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) +
                                   (longlong)iVar24 * 8) != &pUVar15->_padding_))
                              goto LAB_14ac18994;
                            }
                            if (local_80.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_80.ObjectID.SubPathString.Data.AllocatorInstance.
                                            Data);
                            }
                          }
                          UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this_04);
                          (**(code **)(this_04->_padding_ + 0xb48))(this_04,pUVar18,1);
                        }
                        break;
                      }
                    }
                  }
                  pFVar19 = ::FName::FName(local_58,"CustomizableObject");
                  FVar5 = *pFVar19;
                  this_05 = FModuleManager::Get();
                  pIVar20 = FModuleManager::LoadModuleChecked(this_05,FVar5);
                  (**(code **)((longlong)*pIVar20 + 0x60))(pIVar20,&local_90);
                  puVar1 = local_90 + local_88;
                  for (puVar23 = local_90; puVar23 != puVar1; puVar23 = puVar23 + 1) {
                    (**(code **)(*(longlong *)*puVar23 + 0x2d8))((longlong *)*puVar23,this_00);
                  }
                }
              }
            }
            iVar24 = local_res10;
            if (local_d8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.ObjectArray.AllocatorInstance.Data);
            }
          }
        }
        TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::
        RemoveByIndex(local_98,local_a4);
        iVar24 = iVar24 + 1;
        local_res10 = iVar24;
      }
LAB_14ac18a52:
      local_a8 = local_a8 & ~local_b4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_c0 + 8));
    } while (local_a4 < *(int *)(local_b0 + 0x18));
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnableBenchmark @ 14ac19be0

void __thiscall UCustomizableObjectSystem::EnableBenchmark(UCustomizableObjectSystem *this)

{
  FLogBenchmarkUtil::bIsEnabledOverride = true;
  return;
}

// EndBenchmark @ 14ac19e30

void __thiscall UCustomizableObjectSystem::EndBenchmark(UCustomizableObjectSystem *this)

{
  FLogBenchmarkUtil::bIsEnabledOverride = false;
  return;
}

// GetAverageBuildTime @ 14ac1d580

int __thiscall UCustomizableObjectSystem::GetAverageBuildTime(UCustomizableObjectSystem *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  UCustomizableObjectSystemPrivate *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pUVar2 = (this->Private).field0_0x0.DebugPtr;
  lpCriticalSection = &(pUVar2->LogBenchmarkUtil).InstanceBuildTimeAvrg.LockInstanceBuildTimeAvrg;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar1 = (pUVar2->LogBenchmarkUtil).InstanceBuildTimeAvrg.Value;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)(dVar1 * __real_408f400000000000);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDesc @ 14ac1de00

FString * __thiscall
UCustomizableObjectSystem::GetDesc(UCustomizableObjectSystem *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Customizable Object System Singleton");
  return __return_storage_ptr__;
}

// GetInstance @ 14ac1e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCustomizableObjectSystem * __cdecl UCustomizableObjectSystem::GetInstance(void)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystem *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FUObjectItem *this;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (UCustomizableObjectSystemPrivate::SSystem == (UCustomizableObjectSystem *)0x0) {
    if (4 < (byte)LogMutable._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    }
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar4 = StaticClass();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._8_8_ = pUVar4;
    pUVar3 = (UCustomizableObjectSystem *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    UCustomizableObjectSystemPrivate::SSystem = pUVar3;
    if (pUVar3 == (UCustomizableObjectSystem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UCustomizableObjectSystemPrivate::SSystem != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
        return pUVar3;
      }
    }
    if (*(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4) <=
        GUObjectArray.ObjLastNonGCIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GUObjectArray.IsDisregardForGC(UCustomizableObjectSystemPrivate::SSystem)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x2fe,
                         L"Mutable was initialized too early in the UE4 init process, for instance, in the constructor of a default UObject."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
        return pUVar3;
      }
    }
    this = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4))
    ;
    FUObjectItem::SetRootFlags(this,RootSet);
    if (*(int *)((longlong)&UCustomizableObjectSystemPrivate::SSystem->_padding_ + 4) <=
        GUObjectArray.ObjLastNonGCIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GUObjectArray.IsDisregardForGC(UCustomizableObjectSystemPrivate::SSystem)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x300,
                         L"Mutable was initialized too early in the UE4 init process, for instance, in the constructor of a default UObject."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
        return pUVar3;
      }
    }
    InitSystem(UCustomizableObjectSystemPrivate::SSystem);
  }
  return UCustomizableObjectSystemPrivate::SSystem;
}

// GetInstanceChecked @ 14ac1e410

UCustomizableObjectSystem * __cdecl UCustomizableObjectSystem::GetInstanceChecked(void)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystem *pUVar3;
  
  pUVar3 = GetInstance();
  if ((pUVar3 == (UCustomizableObjectSystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("System",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x30b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetInstanceLODManagement @ 14ac1e460

UCustomizableInstanceLODManagementBase * __thiscall
UCustomizableObjectSystem::GetInstanceLODManagement(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableInstanceLODManagementBase *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectSystemPrivate *)0x0) {
    return (((this->Private).field0_0x0.DebugPtr)->CurrentInstanceLODManagement).field0_0x0.DebugPtr
    ;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                     ,0x333,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableInstanceLODManagementBase *)(*pcVar1)();
    return pUVar3;
  }
  return (((this->Private).field0_0x0.DebugPtr)->CurrentInstanceLODManagement).field0_0x0.DebugPtr;
}

// GetNumInstances @ 14ac20660

int __thiscall UCustomizableObjectSystem::GetNumInstances(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FLogBenchmarkUtil::GetInstancesStats
            (&((this->Private).field0_0x0.DebugPtr)->LogBenchmarkUtil,local_res18,local_res8,
             local_res10);
  return local_res8[0];
}

// GetNumPendingInstances @ 14ac206d0

/* WARNING: Type propagation algorithm not settling */

int __thiscall UCustomizableObjectSystem::GetNumPendingInstances(UCustomizableObjectSystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UCustomizableObjectSystemPrivate *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  pUVar6 = (this->Private).field0_0x0.DebugPtr;
  iVar9 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingIDsToRelease.Elements.field_0x8;
  iVar1 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingIDsToRelease.Elements.field_0x34;
  iVar2 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingInstanceDiscards.Elements.field_0x34;
  iVar3 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingInstanceUpdates.Elements.field_0x34;
  iVar4 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingInstanceDiscards.Elements.field_0x8;
  iVar5 = *(int *)&(pUVar6->MutablePendingInstanceWork).PendingInstanceUpdates.Elements.field_0x8;
  if (pUVar6 == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  return ((this->Private).field0_0x0.DebugPtr)->NumLODUpdatesLastTick +
         (((iVar9 - iVar1) - iVar2) - iVar3) + iVar4 + iVar5;
}

// GetPluginVersion @ 14ac22290

FString * __thiscall
UCustomizableObjectSystem::GetPluginVersion
          (UCustomizableObjectSystem *this,FString *__return_storage_ptr__)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,"CustomizableObject");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivate @ 14ac223d0

UCustomizableObjectSystemPrivate * __thiscall
UCustomizableObjectSystem::GetPrivate(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectSystemPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                     ,0x32c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableObjectSystemPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac22420

UCustomizableObjectSystemPrivate * __thiscall
UCustomizableObjectSystem::GetPrivate(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectSystemPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                     ,0x333,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableObjectSystemPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ac22760

UClass * __cdecl UCustomizableObjectSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSystem",
               &Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObjectSystem>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSystem>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSystem.InnerSingleton;
}

// GetSkeletalMeshMinLODQualityLevel @ 14ac24da0

int __thiscall
UCustomizableObjectSystem::GetSkeletalMeshMinLODQualityLevel(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return UCustomizableObjectSystemPrivate::SkeletalMeshMinLodQualityLevel;
}

// GetTextureMemoryUsed @ 14ac251a0

long64 __thiscall UCustomizableObjectSystem::GetTextureMemoryUsed(UCustomizableObjectSystem *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UCustomizableObjectSystemPrivate *pUVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar5 = (*pcVar3)();
      return lVar5;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  lpCriticalSection = &(pUVar1->LogBenchmarkUtil).TextureGPUSize.LockTextureGPUSize;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = (pUVar1->LogBenchmarkUtil).TextureGPUSize.Value;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTotalInstances @ 14ac25600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall UCustomizableObjectSystem::GetTotalInstances(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UCustomizableObjectInstance> local_28;
  
  iVar5 = 0;
  local_28.Index = 0xffffffff;
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
    }
    if ((*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) != 0) &&
       ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) + 8) >>
         0x1e & 1) == 0)) {
      lVar7 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
      }
      if ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) + 8) &
          0x10) == 0) {
        iVar5 = iVar5 + 1;
      }
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return iVar5;
}

// GetWorkingMemory @ 14ac25a40

int __thiscall UCustomizableObjectSystem::GetWorkingMemory(UCustomizableObjectSystem *this)

{
  int iVar1;
  
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings) {
    return 0x4000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ac25a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)CVarWorkingMemoryKB._8_8_ + 200))();
  return iVar1;
}

// InitSystem @ 14ac27190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCustomizableObjectSystem::InitSystem(UCustomizableObjectSystem *this)

{
  FName FVar1;
  UCustomizableObjectSystemPrivate *pUVar2;
  FSystem *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UCustomizableObjectSystemPrivate *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<UE::Mutable::Private::FSystem,1> *pTVar11;
  TSharedPtr<FUnrealMutableModelBulkReader,1> *pTVar12;
  UObject *pUVar13;
  longlong *plVar14;
  TSharedPtr<FUpdateContextPrivate,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  FUnrealMutableModelBulkReader *pFVar17;
  FUnrealMutableModelBulkReader *pFVar18;
  undefined1 auStack_1b8 [32];
  FUnrealMutableModelBulkReader *local_198;
  FSharedReferencer<1> FStack_190;
  FUnrealMutableModelBulkReader *local_188;
  FSharedReferencer<1> FStack_180;
  FSettings local_178;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  TSharedPtr<UE::Mutable::Private::FModelReader,1> local_158;
  FName local_148 [2];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar7 = ::FName::FName(local_148,"Private");
  FVar1 = *pFVar7;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = Z_Construct_UClass_UCustomizableObjectSystemPrivate_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar8);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._24_4_ = RF_NoFlags;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._8_8_ = this;
  local_138._16_8_ = FVar1;
  pUVar9 = (UCustomizableObjectSystemPrivate *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar14 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar9 == (UCustomizableObjectSystemPrivate *)0x0)) {
    (this->Private).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UCustomizableObjectSystemPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x347,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->Private).field0_0x0.DebugPtr = pUVar9;
  }
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ((this->Private).field0_0x0.DebugPtr)->bReplaceDiscardedWithReferenceMesh = false;
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  pTVar15 = &pUVar9->CurrentMutableOperation;
  if (pTVar15 != (TSharedPtr<FUpdateContextPrivate,1> *)&local_168) {
    pTVar15->Object = (FUpdateContextPrivate *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pUVar9->CurrentMutableOperation).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  (((this->Private).field0_0x0.DebugPtr)->CurrentInstanceBeingUpdated).field0_0x0.DebugPtr =
       (UCustomizableObjectInstance *)0x0;
  iVar6 = (**(code **)(*(longlong *)CVarWorkingMemoryKB._8_8_ + 200))();
  ((this->Private).field0_0x0.DebugPtr)->LastWorkingMemoryBytes = (longlong)(iVar6 << 10);
  local_178.WorkingMemoryBytes = 0;
  local_178.ImageCompressionQuality = 0;
  local_178.bProfile = false;
  UE::Mutable::Private::FSettings::SetProfile(&local_178,false);
  UE::Mutable::Private::FSettings::SetWorkingMemoryBytes
            (&local_178,((this->Private).field0_0x0.DebugPtr)->LastWorkingMemoryBytes);
  pTVar10 = ::operator_new(0x18);
  pFVar18 = (FUnrealMutableModelBulkReader *)&DAT_00000010;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_198 = ___xmm_00000000000000000000000000000010;
    pFVar17 = (FUnrealMutableModelBulkReader *)&DAT_00000010;
    FStack_190.ReferenceController = _UNK_150651568;
    pTVar10 = pTVar16;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSystem_Private_Mutable_UE___00_SharedPointerInternals__6B_
    ;
    UE::Mutable::Private::FSystem::FSystem((FSystem *)(pTVar10 + 1),&local_178);
    pFVar17 = (FUnrealMutableModelBulkReader *)(pTVar10 + 1);
    if (pFVar17 == (FUnrealMutableModelBulkReader *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    FStack_190.ReferenceController = pTVar10;
    local_198 = pFVar17;
  }
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  pTVar11 = &pUVar9->MutableSystem;
  if (pTVar11 != (TSharedPtr<UE::Mutable::Private::FSystem,1> *)&local_198) {
    pTVar11->Object = (FSystem *)pFVar17;
    local_198 = (FUnrealMutableModelBulkReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pUVar9->MutableSystem).SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if ((((this->Private).field0_0x0.DebugPtr)->MutableSystem).Object == (FSystem *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private->MutableSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x354,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar10 = ::operator_new(0x58);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_188 = ___xmm_00000000000000000000000000000010;
    FStack_180.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFUnrealMutableModelBulkReader___00_SharedPointerInternals__6B_
    ;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[1]._padding_ = (longlong)&___7FUnrealMutableModelBulkReader__6B_;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar10[2].SharedReferenceCount,4000)
    ;
    pFVar18 = (FUnrealMutableModelBulkReader *)(pTVar10 + 1);
    *(undefined4 *)&pTVar10[5]._padding_ = 0;
    if (pFVar18 == (FUnrealMutableModelBulkReader *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    FStack_180.ReferenceController = pTVar10;
    pTVar16 = pTVar10;
    local_188 = pFVar18;
  }
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  pTVar12 = &pUVar9->Streamer;
  if (pTVar12 != (TSharedPtr<FUnrealMutableModelBulkReader,1> *)&local_188) {
    pTVar12->Object = pFVar18;
    local_188 = (FUnrealMutableModelBulkReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pUVar9->Streamer).SharedReferenceCount,&FStack_180);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_180.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  if ((((this->Private).field0_0x0.DebugPtr)->Streamer).Object ==
      (FUnrealMutableModelBulkReader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private->Streamer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x357,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  if ((pUVar9->MutableSystem).Object == (FSystem *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = (this->Private).field0_0x0.DebugPtr;
  this_00 = (pUVar9->MutableSystem).Object;
  local_158.Object = (FModelReader *)(pUVar2->Streamer).Object;
  local_158.SharedReferenceCount.ReferenceController =
       (pUVar2->Streamer).SharedReferenceCount.ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Mutable::Private::FSystem::SetStreamingInterface(this_00,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  pUVar13 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar13,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UCustomizableInstanceLODManagement_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar13;
  pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  (pUVar9->DefaultInstanceLODManagement).field0_0x0.DebugPtr =
       (UCustomizableInstanceLODManagementBase *)pUVar13;
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((((this->Private).field0_0x0.DebugPtr)->DefaultInstanceLODManagement).field0_0x0.DebugPtr ==
      (UCustomizableInstanceLODManagementBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPrivate()->DefaultInstanceLODManagement != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x35b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar9 = (this->Private).field0_0x0.DebugPtr;
  if (pUVar9 == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = (this->Private).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (UObject *)(pUVar9->DefaultInstanceLODManagement).field0_0x0.DebugPtr,
     pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  (pUVar2->CurrentInstanceLODManagement).field0_0x0 =
       (pUVar9->DefaultInstanceLODManagement).field0_0x0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  plVar14 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.GPUSkin.Support16BitBoneIndex",1);
  if (plVar14 == (longlong *)0x0) {
    uVar5 = false;
  }
  else {
    uVar5 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  }
  ((this->Private).field0_0x0.DebugPtr)->bSupport16BitBoneIndex = (bool)uVar5;
  CVarMutableSinkFunction();
  UCustomizableObjectSystemPrivate::OnMutableEnabledChanged((IConsoleVariable *)0x0);
  return;
}

// IsActive @ 14ac278b0

bool __cdecl UCustomizableObjectSystem::IsActive(void)

{
  if ((UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0) &&
     (bIsMutableEnabled)) {
    return true;
  }
  return false;
}

// IsCreated @ 14ac27930

bool __cdecl UCustomizableObjectSystem::IsCreated(void)

{
  return UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0;
}

// IsMeshCacheEnabled @ 14ac279a0

bool __cdecl UCustomizableObjectSystem::IsMeshCacheEnabled(bool param_1)

{
  uint uVar1;
  
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings) {
    return false;
  }
  uVar1 = TConsoleVariableData<bool>::GetShadowIndex(param_1);
  return (CVarEnableMeshCache.Ref)->ShadowedValue[uVar1];
}

// IsMutableAnimInfoDebuggingEnabled @ 14ac27b90

bool __thiscall
UCustomizableObjectSystem::IsMutableAnimInfoDebuggingEnabled(UCustomizableObjectSystem *this)

{
  return false;
}

// IsOnlyGenerateRequestedLODsEnabled @ 14ac27db0

bool __thiscall
UCustomizableObjectSystem::IsOnlyGenerateRequestedLODsEnabled(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return UCustomizableObjectSystemPrivate::EnableOnlyGenerateRequestedLODs != 0;
}

// IsProgressiveMipStreamingEnabled @ 14ac27e00

bool __thiscall
UCustomizableObjectSystem::IsProgressiveMipStreamingEnabled(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return UCustomizableObjectSystemPrivate::EnableMutableProgressiveMipStreaming != 0;
}

// IsReplaceDiscardedWithReferenceMeshEnabled @ 14ac27e50

bool __thiscall
UCustomizableObjectSystem::IsReplaceDiscardedWithReferenceMeshEnabled
          (UCustomizableObjectSystem *this)

{
  UCustomizableObjectSystemPrivate *pUVar1;
  
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObjectSystemPrivate *)0x0) {
    return pUVar1->bReplaceDiscardedWithReferenceMesh;
  }
  return false;
}

// IsSupport16BitBoneIndexEnabled @ 14ac28630

bool __thiscall
UCustomizableObjectSystem::IsSupport16BitBoneIndexEnabled(UCustomizableObjectSystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectSystemPrivate *)0x0) {
    return ((this->Private).field0_0x0.DebugPtr)->bSupport16BitBoneIndex;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                     ,0x333,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return ((this->Private).field0_0x0.DebugPtr)->bSupport16BitBoneIndex;
}

// IsUpdateResultValid @ 14ac28840

bool __cdecl UCustomizableObjectSystem::IsUpdateResultValid(EUpdateResult param_1)

{
  return param_1 < Error;
}

// IsUpdating @ 14ac28850

bool __thiscall
UCustomizableObjectSystem::IsUpdating
          (UCustomizableObjectSystem *this,UCustomizableObjectInstance *param_1)

{
  UCustomizableObjectSystemPrivate *pUVar1;
  FUpdateContextPrivate *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UCustomizableObjectInstance *pUVar6;
  FMutablePendingInstanceUpdate *pFVar7;
  FWeakObjectPtr local_res10;
  UCustomizableObjectInstance *local_res18 [2];
  
  if (param_1 == (UCustomizableObjectInstance *)0x0) {
    return false;
  }
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  pFVar2 = (pUVar1->CurrentMutableOperation).Object;
  if (pFVar2 != (FUpdateContextPrivate *)0x0) {
    pUVar6 = (UCustomizableObjectInstance *)FWeakObjectPtr::Get(&(pFVar2->Instance).WeakPtr);
    if (pUVar6 == param_1) {
      return true;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  pFVar7 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
           Find(&(pUVar1->MutablePendingInstanceWork).PendingInstanceUpdates,
                (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)local_res10);
  return pFVar7 != (FMutablePendingInstanceUpdate *)0x0;
}

// ReleaseInstanceIDs @ 14ac2dce0

void __thiscall UCustomizableObjectSystem::ReleaseInstanceIDs(UCustomizableObjectSystem *this)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_10;
  
  pTVar3 = CVarMaxNumInstanceIDsToReleasePerTick.Ref;
  iVar6 = 0;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = pTVar3->ShadowedValue[0];
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_38,
             &(((this->Private).field0_0x0.DebugPtr)->MutablePendingInstanceWork).
              PendingIDsToRelease);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      iVar4 = local_1c;
      if (iVar1 <= iVar6) {
        return;
      }
      impl::Task_Game_ReleaseInstanceID
                (*(uint *)(*(longlong *)local_38._0_8_ + (longlong)local_1c * 0xc));
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::RemoveByIndex
                (local_10,iVar4);
      iVar6 = iVar6 + 1;
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  return;
}

// SetInstanceLODManagement @ 14ac35f90

void __thiscall
UCustomizableObjectSystem::SetInstanceLODManagement
          (UCustomizableObjectSystem *this,UCustomizableInstanceLODManagementBase *param_1)

{
  UCustomizableObjectSystemPrivate *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (UCustomizableInstanceLODManagementBase *)0x0) {
    if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x32c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_1 = (((this->Private).field0_0x0.DebugPtr)->DefaultInstanceLODManagement).field0_0x0.
              DebugPtr;
  }
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableInstanceLODManagementBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar1->CurrentInstanceLODManagement).field0_0x0.DebugPtr = param_1;
  return;
}

// SetOnlyGenerateRequestedLODsEnabled @ 14ac370e0

void __thiscall
UCustomizableObjectSystem::SetOnlyGenerateRequestedLODsEnabled
          (UCustomizableObjectSystem *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UCustomizableObjectSystemPrivate::EnableOnlyGenerateRequestedLODs = (uint)param_1;
  return;
}

// SetProgressiveMipStreamingEnabled @ 14ac37130

void __thiscall
UCustomizableObjectSystem::SetProgressiveMipStreamingEnabled
          (UCustomizableObjectSystem *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x32c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UCustomizableObjectSystemPrivate::EnableMutableProgressiveMipStreaming = (uint)param_1;
  return;
}

// SetReplaceDiscardedWithReferenceMeshEnabled @ 14ac381d0

void __thiscall
UCustomizableObjectSystem::SetReplaceDiscardedWithReferenceMeshEnabled
          (UCustomizableObjectSystem *this,bool param_1)

{
  UCustomizableObjectSystemPrivate *pUVar1;
  
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  if (pUVar1 != (UCustomizableObjectSystemPrivate *)0x0) {
    pUVar1->bReplaceDiscardedWithReferenceMesh = param_1;
  }
  return;
}

// SetWorkingMemory @ 14ac393f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystem::SetWorkingMemory(UCustomizableObjectSystem *this,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = CVarWorkingMemoryKB._8_8_;
  local_28 = 0xe000000;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0xf000000;
  local_10 = 0x1000000;
  ::FString::PrintfImpl(&local_38,L"%d");
  lVar1 = *(longlong *)uVar2;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  uVar3 = (**(code **)(lVar1 + 0xa8))(uVar2,local_48,&local_28);
  (**(code **)(lVar1 + 0xb0))(uVar2,FVar4.Data,uVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  return;
}

// ShouldClearWorkingMemoryOnUpdateEnd @ 14ac394f0

bool __cdecl UCustomizableObjectSystem::ShouldClearWorkingMemoryOnUpdateEnd(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarClearWorkingMemoryOnUpdateEnd.Ref;
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// ShouldReuseTexturesBetweenInstances @ 14ac39550

bool __cdecl UCustomizableObjectSystem::ShouldReuseTexturesBetweenInstances(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarReuseImagesBetweenInstances.Ref;
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// StaticRegisterNativesUCustomizableObjectSystem @ 14ac39ae0

void __cdecl UCustomizableObjectSystem::StaticRegisterNativesUCustomizableObjectSystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObjectSystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14ac45c30

bool __thiscall UCustomizableObjectSystem::Tick(UCustomizableObjectSystem *this,float param_1)

{
  TickInternal(this,false);
  return true;
}

// TickInternal @ 14ac45c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall UCustomizableObjectSystem::TickInternal(UCustomizableObjectSystem *this,bool param_1)

{
  FMutableTaskGraph *this_00;
  double *pdVar1;
  float fVar2;
  uchar uVar3;
  ECOInstanceFlags EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UCustomizableObjectInstanceUsage *this_01;
  UCustomizableObjectInstanceUsagePrivate *pUVar11;
  UCustomizableInstanceLODManagementBase *pUVar12;
  ulonglong uVar13;
  longlong lVar14;
  FTaskBase *pFVar15;
  TNode *pTVar16;
  code *pcVar17;
  double dVar18;
  undefined1 auVar19 [16];
  TConsoleVariableData<int> *pTVar20;
  bool bVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  EInternalObjectFlags EVar25;
  int iVar26;
  UCustomizableObjectSystemPrivate *pUVar27;
  UCustomizableInstancePrivate *pUVar28;
  UCustomizableSkeletalComponent *pUVar29;
  UCustomizableObject *pUVar30;
  USkeletalMeshComponent *this_02;
  USkeletalMesh *pUVar31;
  UCustomizableObjectInstance *pUVar32;
  TSharedRef<FUpdateContextPrivate,1> *pTVar33;
  UObject *pUVar34;
  longlong *plVar35;
  FCustomizableObjectInstanceDescriptor *pFVar36;
  UClass *pUVar37;
  FStreamingManagerCollection *this_03;
  byte bVar38;
  uint uVar39;
  ForElementType<FSetElementId> FVar40;
  FMutableUpdateCandidate *pFVar41;
  FMutableUpdateCandidate *pFVar42;
  EQueuePriorityType EVar43;
  longlong lVar44;
  FMutableUpdateCandidate *pFVar45;
  uint *puVar46;
  uint uVar47;
  FUpdateContextPrivate *pFVar48;
  bool bVar49;
  double dVar50;
  double dVar51;
  undefined1 auStackY_388 [32];
  EQueuePriorityType local_358;
  undefined1 local_356;
  bool local_355;
  TObjectIterator<UCustomizableObjectInstance> local_350;
  TObjectIterator<UCustomizableObjectInstance> local_338;
  FMutableUpdateCandidate *local_320;
  FWeakObjectPtr local_318;
  TSharedRef<FUpdateContextPrivate,1> *local_310;
  TSharedRef<FUpdateContextPrivate,1> local_308;
  TObjectIterator<UCustomizableObjectInstance> local_2f8;
  int local_2e0;
  int local_2dc;
  FName local_2d8;
  UCustomizableObjectInstance *local_2d0;
  UCustomizableObjectInstance *local_2c8;
  UCustomizableObjectSystem *local_2c0;
  UCustomizableObjectInstance *local_2b8;
  TObjectIterator<UCustomizableObjectInstanceUsage> local_2b0;
  longlong *local_298;
  uint uStack_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  uint local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [12];
  uint local_25c;
  longlong local_258;
  uint local_250;
  int local_24c;
  TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator> *local_240
  ;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  undefined1 local_208 [12];
  uint local_1fc;
  longlong local_1f8;
  uint local_1f0;
  int local_1ec;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_1e0;
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  ForElementType<FSetElementId> local_178;
  int local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [64];
  ForElementType<FSetElementId> local_120;
  int local_118;
  undefined1 local_110 [64];
  ForElementType<FSetElementId> local_d0;
  int local_c8;
  undefined1 local_c0 [64];
  ForElementType<FSetElementId> local_80;
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_388;
  bVar49 = -1 < CpuChannel->Enabled;
  local_355 = param_1;
  local_2c0 = this;
  if (bVar49) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3805,"Mutable_UCustomizableObjectSystem::TickInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xedd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3805);
  }
  bVar21 = IsInGameThread();
  if ((!bVar21) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xedf,L""), bVar21)) {
    pcVar17 = (code *)swi(3);
    iVar23 = (*pcVar17)();
    return iVar23;
  }
  pUVar27 = (this->Private).field0_0x0.DebugPtr;
  if (pUVar27 != (UCustomizableObjectSystemPrivate *)0x0) {
    if (GIsRequestingExit == false) {
      if (((GWorld.World == (UWorld *)0x0) ||
          (uVar3 = ((GWorld.World)->WorldType).Value, (byte)(uVar3 - 1) < 3)) || (uVar3 == '\x05'))
      {
        pFVar42 = (FMutableUpdateCandidate *)0x0;
        uVar47 = 0;
        pUVar27->NumSkeletalMeshes = 0;
        TObjectIterator<UCustomizableObjectInstance>::TObjectIterator<UCustomizableObjectInstance>
                  (&local_2f8,RF_ClassDefaultObject,true,Borrowed);
        while ((lVar44 = (longlong)local_2f8.Index, -1 < local_2f8.Index &&
               (local_2f8.Index < local_2f8.ObjectArray.ArrayNum))) {
          uVar24 = uVar47;
          if (local_2f8.Index < local_2f8.ObjectArray.ArrayNum) {
            uVar24 = (uint)~local_2f8.Index >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar17 = (code *)swi(3);
            iVar23 = (*pcVar17)();
            return iVar23;
          }
          if ((*(longlong *)(local_2f8.ObjectArray.AllocatorInstance.Data + lVar44 * 8) != 0) &&
             ((*(uint *)(*(longlong *)(local_2f8.ObjectArray.AllocatorInstance.Data + lVar44 * 8) +
                        8) >> 0x1e & 1) == 0)) {
            lVar44 = (longlong)local_2f8.Index;
            uVar24 = uVar47;
            if (local_2f8.Index < local_2f8.ObjectArray.ArrayNum) {
              uVar24 = (uint)~local_2f8.Index >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar17 = (code *)swi(3);
              iVar23 = (*pcVar17)();
              return iVar23;
            }
            pUVar28 = UCustomizableObjectInstance::GetPrivate
                                (*(UCustomizableObjectInstance **)
                                  (local_2f8.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
            pUVar27->NumSkeletalMeshes =
                 pUVar27->NumSkeletalMeshes +
                 (*(int *)&(pUVar28->SkeletalMeshes).field_0x8 -
                 *(int *)&(pUVar28->SkeletalMeshes).field_0x34);
          }
          TObjectIterator<UCustomizableObjectInstance>::Advance(&local_2f8);
        }
        if (local_2f8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.ObjectArray.AllocatorInstance.Data);
        }
        TObjectIterator<UCustomizableObjectInstanceUsage>::
        TObjectIterator<UCustomizableObjectInstanceUsage>
                  (&local_2b0,RF_ClassDefaultObject,true,Borrowed);
        while( true ) {
          lVar44 = (longlong)local_2b0.Index;
          uVar24 = 0;
          if ((local_2b0.Index < 0) || (local_2b0.ObjectArray.ArrayNum <= local_2b0.Index)) break;
          if (local_2b0.Index < local_2b0.ObjectArray.ArrayNum) {
            uVar24 = (uint)~local_2b0.Index >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar17 = (code *)swi(3);
            iVar23 = (*pcVar17)();
            return iVar23;
          }
          this_01 = *(UCustomizableObjectInstanceUsage **)
                     (local_2b0.ObjectArray.AllocatorInstance.Data + lVar44 * 8);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_01 != (UCustomizableObjectInstanceUsage *)0x0) goto LAB_14ac45f8a;
          }
          else if (this_01 != (UCustomizableObjectInstanceUsage *)0x0) {
            UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14ac45f8a:
            if ((((uint)this_01->_padding_ >> 0x1e & 1) == 0) &&
               (pUVar11 = (this_01->Private).field0_0x0.DebugPtr,
               pUVar11->bPendingSetSkeletalMesh != false)) {
              pUVar11->bPendingSetSkeletalMesh = false;
              pUVar29 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                                  ((this_01->Private).field0_0x0.DebugPtr);
              if (pUVar29 == (UCustomizableSkeletalComponent *)0x0) {
                pUVar32 = (this_01->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
              }
              else {
                pUVar32 = (pUVar29->CustomizableObjectInstance).field0_0x0.DebugPtr;
              }
              if (pUVar32 != (UCustomizableObjectInstance *)0x0) {
                pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
                pUVar28->InstanceFlagsPrivate = pUVar28->InstanceFlagsPrivate | UsedByComponent;
                pUVar30 = UCustomizableObjectInstance::GetCustomizableObject(pUVar32);
                if ((pUVar30 != (UCustomizableObject *)0x0) &&
                   (this_02 = UCustomizableObjectInstanceUsage::GetAttachParent(this_01),
                   this_02 != (USkeletalMeshComponent *)0x0)) {
                  pUVar29 = UCustomizableObjectInstanceUsagePrivate::
                            GetCustomizableSkeletalComponent((this_01->Private).field0_0x0.DebugPtr)
                  ;
                  if (pUVar29 == (UCustomizableSkeletalComponent *)0x0) {
                    cVar22 = this_01->bUsedSkipSetReferenceSkeletalMesh;
                  }
                  else {
                    cVar22 = pUVar29->bSkipSetReferenceSkeletalMesh;
                  }
                  if ((cVar22 == '\0') && (pUVar30->bEnableUseRefSkeletalMeshAsPlaceholder != false)
                     ) {
                    UCustomizableObjectInstanceUsage::GetComponentName(this_01);
                    pUVar31 = UCustomizableObject::GetComponentMeshReferenceSkeletalMesh
                                        (pUVar30,&local_2d8);
                    if (pUVar31 != (USkeletalMesh *)0x0) {
                      UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this_02);
                      (**(code **)(this_02->_padding_ + 0xb48))(this_02,pUVar31,1);
                    }
                  }
                  pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
                  pUVar28->bAutomaticUpdateRequired = true;
                }
              }
            }
          }
          TObjectIterator<UCustomizableObjectInstanceUsage>::Advance(&local_2b0);
        }
        if (local_2b0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.ObjectArray.AllocatorInstance.Data);
        }
        local_320 = (FMutableUpdateCandidate *)0x0;
        pFVar45 = pFVar42;
        if (((((this->Private).field0_0x0.DebugPtr)->CurrentMutableOperation).Object ==
             (FUpdateContextPrivate *)0x0) && (bIsMutableEnabled != false)) {
          local_1b8._0_8_ = 0;
          local_1b8._8_8_ = 0;
          local_198 = (uint *)0x0;
          local_190 = 0;
          local_18c = 0x80;
          local_188 = 0xffffffff;
          local_184 = 0;
          local_178 = (ForElementType<FSetElementId>)0x0;
          local_170 = 0;
          pUVar27 = GetPrivate(this);
          pUVar12 = (pUVar27->CurrentInstanceLODManagement).field0_0x0.DebugPtr;
          (**(code **)(*(longlong *)pUVar12 + 0x2b0))(pUVar12,local_1b8);
          TObjectIterator<UCustomizableObjectInstance>::TObjectIterator<UCustomizableObjectInstance>
                    (&local_350,RF_ClassDefaultObject,true,Borrowed);
          while ((lVar44 = (longlong)local_350.Index, -1 < local_350.Index &&
                 (iVar23 = local_350.ObjectArray.ArrayNum, local_350.Index < iVar23))) {
            uVar39 = uVar24;
            if (local_350.Index < iVar23) {
              uVar39 = (uint)~local_350.Index >> 0x1f;
            }
            if (uVar39 == 0) {
              bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar21) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              iVar23 = local_350.ObjectArray.ArrayNum;
            }
            if (*(longlong *)(local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8) == 0) {
LAB_14ac465ea:
              lVar44 = (longlong)local_350.Index;
              uVar39 = uVar24;
              if (local_350.Index < iVar23) {
                uVar39 = (uint)~local_350.Index >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              local_2d0 = *(UCustomizableObjectInstance **)
                           (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8);
              uVar39 = ((uint)((ulonglong)local_2d0 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_2d0 >> 4)) * -0x7a143595;
              uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
              iVar23 = TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<UCustomizableObjectInstance_const_*>
                                 ((TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
                                   *)local_1b8,uVar39 >> 0x10 ^ uVar39,&local_2d0);
              if ((iVar23 != -1) &&
                 (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<2590677887300407185>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                      ,0xf91,
                                      "!RequestedLODUpdates.Contains(*CustomizableObjectInstance)"),
                 bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              TObjectIterator<UCustomizableObjectInstance>::Advance(&local_350);
            }
            else {
              if ((*(uint *)(*(longlong *)
                              (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8) + 8) >>
                   0x1e & 1) != 0) {
LAB_14ac465e5:
                iVar23 = local_350.ObjectArray.ArrayNum;
                goto LAB_14ac465ea;
              }
              lVar44 = (longlong)local_350.Index;
              uVar39 = uVar47;
              if (local_350.Index < local_350.ObjectArray.ArrayNum) {
                uVar39 = (uint)~local_350.Index >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              pUVar28 = UCustomizableObjectInstance::GetPrivate
                                  (*(UCustomizableObjectInstance **)
                                    (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
              if (pUVar28 == (UCustomizableInstancePrivate *)0x0) goto LAB_14ac465e5;
              lVar44 = (longlong)local_350.Index;
              uVar39 = uVar47;
              if (local_350.Index < local_350.ObjectArray.ArrayNum) {
                uVar39 = (uint)~local_350.Index >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              pUVar28 = UCustomizableObjectInstance::GetPrivate
                                  (*(UCustomizableObjectInstance **)
                                    (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
              lVar44 = (longlong)local_350.Index;
              iVar23 = local_350.ObjectArray.ArrayNum;
              if ((pUVar28->InstanceFlagsPrivate & UsedByComponentInPlay) == ECONone) {
                if ((pUVar28->InstanceFlagsPrivate & UsedByComponent) == ECONone) {
                  uVar39 = uVar24;
                  if (local_350.Index < iVar23) {
                    uVar39 = (uint)~local_350.Index >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar17 = (code *)swi(3);
                    iVar23 = (*pcVar17)();
                    return iVar23;
                  }
                  uVar13 = *(ulonglong *)(local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8)
                  ;
                  uVar39 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
                  uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
                  if (local_1b8._8_4_ == local_184) {
LAB_14ac465cb:
                    pUVar28->InstanceFlagsPrivate =
                         pUVar28->InstanceFlagsPrivate &
                         ~(PendingLODsUpdate|UsedByComponentInPlay|UsedByComponent);
                    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_350);
                  }
                  else {
                    FVar40 = (ForElementType<FSetElementId>)local_180;
                    if (local_178 != (ForElementType<FSetElementId>)0x0) {
                      FVar40 = local_178;
                    }
                    iVar23 = *(int *)((longlong)FVar40 +
                                     (ulonglong)(local_170 - 1U & (uVar39 >> 0x10 ^ uVar39)) * 4);
                    if (iVar23 == -1) goto LAB_14ac465cb;
                    do {
                      if (*(ulonglong *)((longlong)iVar23 * 0x118 + local_1b8._0_8_) == uVar13) {
                        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<2590677887300407178>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                            ,0xf8a,
                                            "!RequestedLODUpdates.Contains(*CustomizableObjectInstance)"
                                           );
                        if (bVar21) {
                          pcVar17 = (code *)swi(3);
                          iVar23 = (*pcVar17)();
                          return iVar23;
                        }
                        goto LAB_14ac465cb;
                      }
                      iVar23 = *(int *)((longlong)iVar23 * 0x118 + 0x110 + local_1b8._0_8_);
                    } while (iVar23 != -1);
                    pUVar28->InstanceFlagsPrivate =
                         pUVar28->InstanceFlagsPrivate &
                         ~(PendingLODsUpdate|UsedByComponentInPlay|UsedByComponent);
                    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_350);
                  }
                }
                else {
                  uVar39 = uVar24;
                  if (local_350.Index < iVar23) {
                    uVar39 = (uint)~local_350.Index >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar17 = (code *)swi(3);
                    iVar23 = (*pcVar17)();
                    return iVar23;
                  }
                  uVar13 = *(ulonglong *)(local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8)
                  ;
                  uVar39 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
                  uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
                  if (local_1b8._8_4_ != local_184) {
                    FVar40 = (ForElementType<FSetElementId>)local_180;
                    if (local_178 != (ForElementType<FSetElementId>)0x0) {
                      FVar40 = local_178;
                    }
                    for (iVar23 = *(int *)((longlong)FVar40 +
                                          (ulonglong)(local_170 - 1U & (uVar39 >> 0x10 ^ uVar39)) *
                                          4); iVar23 != -1;
                        iVar23 = *(int *)((longlong)iVar23 * 0x118 + 0x110 + local_1b8._0_8_)) {
                      if (*(ulonglong *)((longlong)iVar23 * 0x118 + local_1b8._0_8_) == uVar13) {
                        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<2590677887300407173>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                            ,0xf85,
                                            "!RequestedLODUpdates.Contains(*CustomizableObjectInstance)"
                                           );
                        if (bVar21) {
                          pcVar17 = (code *)swi(3);
                          iVar23 = (*pcVar17)();
                          return iVar23;
                        }
                        break;
                      }
                    }
                  }
                  lVar44 = (longlong)local_350.Index;
                  uVar39 = uVar24;
                  if (local_350.Index < local_350.ObjectArray.ArrayNum) {
                    uVar39 = (uint)~local_350.Index >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar17 = (code *)swi(3);
                    iVar23 = (*pcVar17)();
                    return iVar23;
                  }
                  UCustomizableInstancePrivate::UpdateInstanceIfNotGenerated
                            (pUVar28,*(UCustomizableObjectInstance **)
                                      (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8),
                             (TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
                              *)local_1b8);
                  pUVar28->InstanceFlagsPrivate =
                       pUVar28->InstanceFlagsPrivate &
                       ~(PendingLODsUpdate|UsedByComponentInPlay|UsedByComponent);
                  TObjectIterator<UCustomizableObjectInstance>::Advance(&local_350);
                }
              }
              else {
                uVar39 = uVar24;
                if (local_350.Index < iVar23) {
                  uVar39 = (uint)~local_350.Index >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar17 = (code *)swi(3);
                  iVar23 = (*pcVar17)();
                  return iVar23;
                }
                UCustomizableInstancePrivate::TickUpdateCloseCustomizableObjects
                          (pUVar28,*(UCustomizableObjectInstance **)
                                    (local_350.ObjectArray.AllocatorInstance.Data + lVar44 * 8),
                           (TMap<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
                            *)local_1b8);
                pUVar28->InstanceFlagsPrivate =
                     pUVar28->InstanceFlagsPrivate &
                     ~(PendingLODsUpdate|UsedByComponentInPlay|UsedByComponent);
                TObjectIterator<UCustomizableObjectInstance>::Advance(&local_350);
              }
            }
          }
          if (local_350.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.ObjectArray.AllocatorInstance.Data);
          }
          dVar18 = __real_7fefffffffffffff;
          local_358 = Low;
          local_310 = (TSharedRef<FUpdateContextPrivate,1> *)0x0;
          TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
          TIterator::TIterator
                    ((TIterator *)local_268,
                     &(((this->Private).field0_0x0.DebugPtr)->MutablePendingInstanceWork).
                      PendingInstanceUpdates);
          if (local_24c < *(int *)(local_258 + 0x18)) {
            local_320 = (FMutableUpdateCandidate *)0x0;
            dVar51 = dVar18;
            do {
              iVar23 = local_24c;
              pTVar33 = (TSharedRef<FUpdateContextPrivate,1> *)
                        (*(longlong *)local_268._0_8_ + (longlong)local_24c * 0x18);
              bVar21 = FWeakObjectPtr::IsValid
                                 ((FWeakObjectPtr *)
                                  (*(longlong *)
                                    (*(longlong *)local_268._0_8_ + (longlong)local_24c * 0x18) +
                                  0x40));
              if (bVar21) {
                pUVar32 = (UCustomizableObjectInstance *)
                          FWeakObjectPtr::Get(&(pTVar33->Object->Instance).WeakPtr);
                pUVar30 = UCustomizableObjectInstance::GetCustomizableObject(pUVar32);
                if (pUVar30 == (UCustomizableObject *)0x0) goto LAB_14ac46831;
                local_2c8 = (UCustomizableObjectInstance *)
                            FWeakObjectPtr::Get(&(pTVar33->Object->Instance).WeakPtr);
                pUVar28 = UCustomizableObjectInstance::GetPrivate(local_2c8);
                EVar43 = Low;
                EVar4 = pUVar28->InstanceFlagsPrivate;
                uVar39 = EVar4 >> 9;
                uVar47 = EVar4 >> 10;
                if ((pUVar28->SkeletalMeshStatus == NotGenerated) ||
                   (bVar21 = UCustomizableObjectInstance::HasAnySkeletalMesh(local_2c8), !bVar21)) {
LAB_14ac467d1:
                  EVar43 = Med;
                }
                else if (((uVar39 & 1) == 0) || ((uVar47 & 1) == 0)) {
                  if ((EVar4 >> 7 & 1) == 0) {
                    if ((uVar39 & 1) != 0) {
                      if ((uVar47 & 1) == 0) goto LAB_14ac467d1;
LAB_14ac467c7:
                      if ((EVar4 >> 7 & 1) != 0) goto LAB_14ac467cc;
                    }
                  }
                  else if ((uVar39 & 1) == 0) {
LAB_14ac467cc:
                    EVar43 = High;
                  }
                  else {
                    if ((uVar47 & 1) != 0) goto LAB_14ac467c7;
                    EVar43 = High;
                  }
                }
                else {
                  EVar43 = Med_Low;
                }
                if (pTVar33->Object->PriorityType <= local_358) {
                  pUVar32 = (UCustomizableObjectInstance *)
                            FWeakObjectPtr::Get(&(pTVar33->Object->Instance).WeakPtr);
                  pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
                  dVar50 = (double)pUVar28->MinSquareDistFromComponentToPlayer;
                  if ((dVar50 < dVar18) ||
                     ((dVar50 == dVar18 &&
                      (pdVar1 = &pTVar33->Object->StartQueueTime,
                      *pdVar1 <= dVar51 && dVar51 != *pdVar1)))) {
                    dVar51 = pTVar33->Object->StartQueueTime;
                    dVar18 = dVar50;
                    local_358 = EVar43;
                    local_310 = pTVar33;
                  }
                }
              }
              else {
LAB_14ac46831:
                TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                ::RemoveByIndex(local_240,iVar23);
              }
              local_250 = local_250 & ~local_25c;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_268 + 8));
            } while (local_24c < *(int *)(local_258 + 0x18));
          }
          uVar47 = local_190;
          uStack_28c = 1;
          uStack_27c = uVar24;
          uStack_290 = uVar24;
          local_278 = uVar24;
          if (local_190 != 0) {
            puVar46 = (uint *)(local_1b8 + 0x10);
            if (local_198 != (uint *)0x0) {
              puVar46 = local_198;
            }
            uVar39 = *puVar46;
            pFVar41 = pFVar42;
            local_278 = 0;
            uStack_290 = 0;
            while (uVar39 == 0) {
              iVar23 = (int)pFVar45;
              local_278 = (int)pFVar41 + 0x20;
              pFVar41 = (FMutableUpdateCandidate *)(ulonglong)local_278;
              uStack_290 = iVar23 + 1;
              pFVar45 = (FMutableUpdateCandidate *)(ulonglong)uStack_290;
              uStack_27c = local_190;
              if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)uStack_290) goto LAB_14ac468e0;
              uVar39 = puVar46[(longlong)iVar23 + 1];
            }
            uStack_28c = -uVar39 & uVar39;
            uVar13 = (ulonglong)uStack_28c * 2 + 1;
            lVar44 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            local_2e0 = (int)lVar44;
            uStack_27c = (local_278 - 1) + local_2e0;
            if ((int)local_190 < (int)uStack_27c) {
              uStack_27c = local_190;
            }
          }
LAB_14ac468e0:
          local_298 = (longlong *)local_1b8;
          uStack_274 = local_1bc;
          local_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
          uVar39 = local_190 & 0xffffffe0;
          iStack_270 = local_1b8._8_4_ - local_184;
          uStack_280 = 0xffffffff;
          TStack_230.CurrentBitIndex = uStack_27c;
          TStack_230.UnvisitedBitMask = 0xffffffff;
          TStack_230._padding_ = CONCAT44(uStack_28c,uStack_290);
          iVar23 = (int)local_190 >> 5;
          TStack_230._28_4_ = local_1bc;
          TStack_230.BaseBitIndex = local_278;
          uStack_210 = CONCAT44(uStack_26c,iStack_270);
          bVar38 = (byte)local_190;
          local_238 = local_298;
          TStack_230.Array = local_288;
          if (((int)local_190 < 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar21)) {
            pcVar17 = (code *)swi(3);
            iVar23 = (*pcVar17)();
            return iVar23;
          }
          auVar19 = ___xmm_00000000ffffffff0000008000000000;
          if (uVar47 != local_190) {
            puVar46 = (uint *)(local_1b8 + 0x10);
            if (local_198 != (uint *)0x0) {
              puVar46 = local_198;
            }
            uVar47 = -1 << (bVar38 & 0x1f) & puVar46[iVar23];
            while (uVar47 == 0) {
              lVar44 = (longlong)iVar23;
              uVar39 = uVar39 + 0x20;
              iVar23 = iVar23 + 1;
              uVar47 = local_190;
              if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
              goto LAB_14ac46a20;
              uVar47 = puVar46[lVar44 + 1];
            }
            uVar13 = (ulonglong)(-uVar47 & uVar47) * 2 + 1;
            lVar44 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            local_2dc = (int)lVar44;
            uVar47 = local_2dc + -1 + uVar39;
            if ((int)local_190 < (int)uVar47) {
              uVar47 = local_190;
            }
          }
LAB_14ac46a20:
          while( true ) {
            plVar35 = local_238;
            if ((int)local_238[1] - *(int *)((longlong)local_238 + 0x34) != (int)uStack_210) {
              local_356 = 0;
              `TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_356);
            }
            this = local_2c0;
            pFVar45 = local_320;
            lVar44 = (longlong)TStack_230.CurrentBitIndex;
            if (((TStack_230.CurrentBitIndex == uVar47) &&
                (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
               (plVar35 == (longlong *)local_1b8)) break;
            lVar14 = *plVar35;
            pUVar32 = *(UCustomizableObjectInstance **)(lVar44 * 0x118 + lVar14);
            if ((pUVar32 != (UCustomizableObjectInstance *)0x0) &&
               (pUVar30 = UCustomizableObjectInstance::GetCustomizableObject(pUVar32),
               pUVar30 != (UCustomizableObject *)0x0)) {
              pFVar45 = (FMutableUpdateCandidate *)(lVar14 + 8 + lVar44 * 0x118);
              bVar21 = FMutableUpdateCandidate::HasBeenIssued(pFVar45);
              if ((!bVar21) &&
                 (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<2590677887300407237>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                      ,0xfc5,"LODUpdateCandidate.HasBeenIssued()"), bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              if (pFVar45->Priority <= local_358) {
                pUVar28 = UCustomizableObjectInstance::GetPrivate
                                    (pFVar45->CustomizableObjectInstance);
                local_168._0_4_ = (pUVar28->CommittedDescriptorHash).Hash;
                local_168[4] = (pUVar28->CommittedDescriptorHash).bStreamingEnabled;
                local_160._0_8_ = 0;
                local_160._8_8_ = 0;
                local_160._32_8_ = 0;
                local_160._40_16_ = auVar19;
                local_120 = (ForElementType<FSetElementId>)0x0;
                local_118 = 0;
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_160,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&(pUVar28->CommittedDescriptorHash).MinLODs);
                local_110._0_8_ = 0;
                local_110._8_8_ = 0;
                local_110._32_8_ = 0;
                local_110._40_16_ = auVar19;
                local_d0 = (ForElementType<FSetElementId>)0x0;
                local_c8 = 0;
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_110,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&(pUVar28->CommittedDescriptorHash).QualitySettingMinLODs);
                local_c0._0_8_ = 0;
                local_c0._8_8_ = 0;
                local_c0._32_8_ = 0;
                local_c0._40_16_ = auVar19;
                local_80 = (ForElementType<FSetElementId>)0x0;
                local_78 = 0;
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_c0,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&(pUVar28->CommittedDescriptorHash).FirstRequestedLOD);
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_160,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&pFVar45->MinLOD);
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_110,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&pFVar45->QualitySettingMinLODs);
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)local_c0,
                            (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                             *)&pFVar45->FirstRequestedLOD);
                if ((double)pUVar28->MinSquareDistFromComponentToPlayer < dVar18) {
                  iVar23 = UCustomizableInstancePrivate::GetState(pUVar28);
                  bVar21 = IsStreamingEnabled(pUVar30,iVar23);
                  if (((bVar21) ||
                      (bVar21 = FDescriptorHash::IsSubset
                                          ((FDescriptorHash *)local_168,
                                           &pUVar28->CommittedDescriptorHash), !bVar21)) ||
                     (pUVar28->bAutomaticUpdateRequired != false)) {
                    local_358 = pFVar45->Priority;
                    dVar18 = (double)pUVar28->MinSquareDistFromComponentToPlayer;
                    local_310 = (TSharedRef<FUpdateContextPrivate,1> *)0x0;
                    local_320 = pFVar45;
                  }
                }
                local_78 = 0;
                if (local_80 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_80);
                }
                TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_c0);
                local_c8 = 0;
                if (local_d0 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_d0);
                }
                TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_110);
                local_118 = 0;
                if (local_120 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_120);
                }
                TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_160);
              }
            }
            TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
          }
          ((local_2c0->Private).field0_0x0.DebugPtr)->NumLODUpdatesLastTick =
               local_1b8._8_4_ - local_184;
          if (local_320 == (FMutableUpdateCandidate *)0x0) {
LAB_14ac46d6c:
            pTVar33 = local_310;
            if (local_310 != (TSharedRef<FUpdateContextPrivate,1> *)0x0) {
              pFVar41 = pFVar45;
              if ((pFVar45 != (FMutableUpdateCandidate *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!LODUpdateCandidateFound",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                      ,0xfee,L""), bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              goto LAB_14ac46da8;
            }
            if (pFVar45 != (FMutableUpdateCandidate *)0x0) {
              pUVar32 = pFVar45->CustomizableObjectInstance;
              pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
              if (pUVar28->SkeletalMeshStatus == Success) {
                pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
                pFVar36 = &pUVar28->CommittedDescriptor;
              }
              else {
                pUVar28 = UCustomizableObjectInstance::GetPrivate(pUVar32);
                pFVar36 = UCustomizableInstancePrivate::GetDescriptor(pUVar28);
              }
              local_308.SharedReferenceCount.ReferenceController = ::operator_new(0x820);
              if (local_308.SharedReferenceCount.ReferenceController ==
                  (TReferenceControllerBase<1> *)0x0) {
                local_308.Object = ___xmm_00000000000000000000000000000010;
                local_308.SharedReferenceCount.ReferenceController = _UNK_150651568;
                pFVar48 = ___xmm_00000000000000000000000000000010;
              }
              else {
                (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)0x1;
                (local_308.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)0x1;
                (local_308.SharedReferenceCount.ReferenceController)->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFUpdateContextPrivate___00_SharedPointerInternals__6B_
                ;
                FUpdateContextPrivate::FUpdateContextPrivate
                          ((FUpdateContextPrivate *)
                           (local_308.SharedReferenceCount.ReferenceController + 1),pUVar32,pFVar36)
                ;
                pFVar48 = (FUpdateContextPrivate *)
                          (local_308.SharedReferenceCount.ReferenceController + 1);
                local_308.Object = pFVar48;
                if ((pFVar48 == (FUpdateContextPrivate *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar21)) {
                  pcVar17 = (code *)swi(3);
                  iVar23 = (*pcVar17)();
                  return iVar23;
                }
              }
              FMutableUpdateCandidate::ApplyLODUpdateParamsToInstance(pFVar45,pFVar48);
              UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh
                        ((this->Private).field0_0x0.DebugPtr,&local_308);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_308.SharedReferenceCount.ReferenceController);
            }
          }
          else {
            pUVar27 = (local_2c0->Private).field0_0x0.DebugPtr;
            pUVar32 = local_320->CustomizableObjectInstance;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar32 != (UCustomizableObjectInstance *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar32);
            }
            local_318.ObjectIndex = 0;
            local_318.ObjectSerialNumber = 0;
            local_2b8 = pUVar32;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar32 != (UCustomizableObjectInstance *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar32);
            }
            FWeakObjectPtr::operator=(&local_318,(FObjectPtr)&local_2b8);
            pTVar33 = &TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                       ::Find(&(pUVar27->MutablePendingInstanceWork).PendingInstanceUpdates,
                              (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)
                              local_318)->Context;
            pFVar41 = pFVar42;
            if (pTVar33 == (TSharedRef<FUpdateContextPrivate,1> *)0x0) goto LAB_14ac46d6c;
LAB_14ac46da8:
            pUVar34 = FWeakObjectPtr::Get(&(pTVar33->Object->Instance).WeakPtr);
            if ((pUVar34 == (UObject *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PendingInstance",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                    ,0xff1,L""), bVar21)) {
              pcVar17 = (code *)swi(3);
              iVar23 = (*pcVar17)();
              return iVar23;
            }
            uVar47 = ((uint)((ulonglong)pUVar34 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar34 >> 4))
                     * -0x7a143595;
            uVar47 = (uVar47 >> 0xd ^ uVar47) * -0x3d4d51cb;
            if (local_1b8._8_4_ != local_184) {
              FVar40 = (ForElementType<FSetElementId>)local_180;
              if (local_178 != (ForElementType<FSetElementId>)0x0) {
                FVar40 = local_178;
              }
              iVar23 = *(int *)((longlong)FVar40 +
                               (ulonglong)(local_170 - 1U & (uVar47 >> 0x10 ^ uVar47)) * 4);
              while (iVar23 != -1) {
                plVar35 = (longlong *)((longlong)iVar23 * 0x118 + local_1b8._0_8_);
                if ((UObject *)*plVar35 == pUVar34) {
                  pFVar45 = (FMutableUpdateCandidate *)(plVar35 + 1);
                  if (plVar35 == (longlong *)0x0) {
                    pFVar45 = pFVar42;
                  }
                  if (pFVar45 != (FMutableUpdateCandidate *)0x0) {
                    FMutableUpdateCandidate::ApplyLODUpdateParamsToInstance(pFVar45,pTVar33->Object)
                    ;
                  }
                  break;
                }
                iVar23 = (int)plVar35[0x22];
              }
            }
            UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh
                      ((this->Private).field0_0x0.DebugPtr,pTVar33);
            FMutablePendingInstanceWork::RemoveUpdate
                      (&((this->Private).field0_0x0.DebugPtr)->MutablePendingInstanceWork,
                       &pTVar33->Object->Instance);
            pFVar45 = pFVar41;
          }
          local_338.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ObjectArray.ArrayNum = 0;
          local_338.ObjectArray.ArrayMax = 0;
          local_338.Index = 0xffffffff;
          EVar25 = UE::GetAsyncLoadingInternalFlagsExclusion();
          pUVar37 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
          GetObjectsOfClass(pUVar37,&local_338.ObjectArray,true,RF_ClassDefaultObject,
                            EVar25 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
          while( true ) {
            TObjectIterator<UCustomizableObjectInstance>::Advance(&local_338);
            lVar44 = (longlong)local_338.Index;
            if ((local_338.Index < 0) || (local_338.ObjectArray.ArrayNum <= local_338.Index)) break;
            uVar47 = uVar24;
            if (local_338.Index < local_338.ObjectArray.ArrayNum) {
              uVar47 = (uint)~local_338.Index >> 0x1f;
            }
            if ((uVar47 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar17 = (code *)swi(3);
              iVar23 = (*pcVar17)();
              return iVar23;
            }
            if ((*(longlong *)(local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8) != 0) &&
               ((*(uint *)(*(longlong *)(local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8)
                          + 8) >> 0x1e & 1) == 0)) {
              lVar44 = (longlong)local_338.Index;
              uVar47 = uVar24;
              if (local_338.Index < local_338.ObjectArray.ArrayNum) {
                uVar47 = (uint)~local_338.Index >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar17 = (code *)swi(3);
                iVar23 = (*pcVar17)();
                return iVar23;
              }
              pUVar28 = UCustomizableObjectInstance::GetPrivate
                                  (*(UCustomizableObjectInstance **)
                                    (local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
              if (pUVar28 != (UCustomizableInstancePrivate *)0x0) {
                lVar44 = (longlong)local_338.Index;
                uVar47 = uVar24;
                if (local_338.Index < local_338.ObjectArray.ArrayNum) {
                  uVar47 = (uint)~local_338.Index >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar17 = (code *)swi(3);
                  iVar23 = (*pcVar17)();
                  return iVar23;
                }
                pUVar28 = UCustomizableObjectInstance::GetPrivate
                                    (*(UCustomizableObjectInstance **)
                                      (local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
                lVar44 = (longlong)local_338.Index;
                fVar2 = pUVar28->MinSquareDistFromComponentToPlayer;
                uVar47 = uVar24;
                if (local_338.Index < local_338.ObjectArray.ArrayNum) {
                  uVar47 = (uint)~local_338.Index >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar17 = (code *)swi(3);
                  iVar23 = (*pcVar17)();
                  return iVar23;
                }
                pUVar28 = UCustomizableObjectInstance::GetPrivate
                                    (*(UCustomizableObjectInstance **)
                                      (local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
                pUVar28->LastMinSquareDistFromComponentToPlayer = fVar2;
                lVar44 = (longlong)local_338.Index;
                uVar47 = uVar24;
                if (local_338.Index < local_338.ObjectArray.ArrayNum) {
                  uVar47 = (uint)~local_338.Index >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar17 = (code *)swi(3);
                  iVar23 = (*pcVar17)();
                  return iVar23;
                }
                pUVar28 = UCustomizableObjectInstance::GetPrivate
                                    (*(UCustomizableObjectInstance **)
                                      (local_338.ObjectArray.AllocatorInstance.Data + lVar44 * 8));
                pUVar28->MinSquareDistFromComponentToPlayer = 3.4028235e+38;
              }
            }
          }
          if (local_338.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.ObjectArray.AllocatorInstance.Data);
          }
          UCustomizableObjectSystemPrivate::UpdateMemoryLimit((this->Private).field0_0x0.DebugPtr);
          DiscardInstances(this);
          pTVar20 = CVarMaxNumInstanceIDsToReleasePerTick.Ref;
          bVar21 = IsInParallelGameThread();
          if (((!bVar21) && (bVar21 = IsInGameThread(), !bVar21)) &&
             (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007945>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6c9,"GetShadowIndex() == 0"), bVar21)) {
            pcVar17 = (code *)swi(3);
            iVar23 = (*pcVar17)();
            return iVar23;
          }
          iVar23 = pTVar20->ShadowedValue[0];
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::TIterator::
          TIterator((TIterator *)local_208,
                    &(((this->Private).field0_0x0.DebugPtr)->MutablePendingInstanceWork).
                     PendingIDsToRelease);
          pFVar41 = pFVar42;
          if (local_1ec < *(int *)(local_1f8 + 0x18)) {
            do {
              iVar5 = local_1ec;
              if (iVar23 <= (int)pFVar41) break;
              impl::Task_Game_ReleaseInstanceID
                        (*(uint *)(*(longlong *)local_208._0_8_ + (longlong)local_1ec * 0xc));
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::RemoveByIndex
                        (local_1e0,iVar5);
              pFVar41 = (FMutableUpdateCandidate *)(ulonglong)((int)pFVar41 + 1);
              local_1f0 = local_1f0 & ~local_1fc;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_208 + 8));
            } while (local_1ec < *(int *)(local_1f8 + 0x18));
          }
          local_170 = 0;
          if (local_178 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_178);
          }
          TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1b8);
        }
        pUVar27 = (this->Private).field0_0x0.DebugPtr;
        bVar21 = IsInGameThread();
        if ((!bVar21) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
                                ,0x14d,L""), bVar21)) {
          pcVar17 = (code *)swi(3);
          iVar23 = (*pcVar17)();
          return iVar23;
        }
        FMutableTaskGraph::TryLaunchGameThreadTask(&pUVar27->MutableTaskGraph);
        FMutableTaskGraph::TryLaunchMutableTaskLowPriority(&pUVar27->MutableTaskGraph,false);
        pFVar15 = (pUVar27->MutableTaskGraph).LastMutableTask.Pimpl.Reference;
        if ((pFVar15 == (FTaskBase *)0x0) ||
           (uVar47 = 1, (pFVar15->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
          uVar47 = uVar24;
        }
        pFVar15 = (pUVar27->MutableTaskGraph).LastMutableTaskLowPriority.Pimpl.Reference;
        if ((pFVar15 == (FTaskBase *)0x0) ||
           (uVar39 = 1, (pFVar15->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
          uVar39 = uVar24;
        }
        pTVar16 = ((pUVar27->MutableTaskGraph).GameThreadTasks.Tail)->NextNode;
        iVar23 = (pUVar27->MutableTaskGraph).QueueMutableTasksLowPriority.ArrayNum;
        FLogBenchmarkUtil::UpdateStats(&((this->Private).field0_0x0.DebugPtr)->LogBenchmarkUtil);
        if ((bIsMutableEnabled == false) &&
           ((((this->Private).field0_0x0.DebugPtr)->CurrentMutableOperation).Object ==
            (FUpdateContextPrivate *)0x0)) {
          this_03 = IStreamingManager::Get();
          if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Private",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                  ,0x32c,L""), bVar21)) {
            pcVar17 = (code *)swi(3);
            iVar23 = (*pcVar17)();
            return iVar23;
          }
          pUVar27 = (this->Private).field0_0x0.DebugPtr;
          pFVar41 = (FMutableUpdateCandidate *)&pUVar27->_padding_;
          if (pUVar27 == (UCustomizableObjectSystemPrivate *)0x0) {
            pFVar41 = pFVar42;
          }
          FStreamingManagerCollection::RemoveStreamingManager(this_03,(IStreamingManager *)pFVar41);
        }
        pUVar27 = (this->Private).field0_0x0.DebugPtr;
        pFVar48 = (pUVar27->CurrentMutableOperation).Object;
        iVar5 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingIDsToRelease.Elements.
                         field_0x34;
        iVar6 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingInstanceDiscards.Elements.
                         field_0x34;
        iVar7 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingInstanceUpdates.Elements.
                         field_0x34;
        iVar8 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingIDsToRelease.Elements.
                         field_0x8;
        iVar9 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingInstanceDiscards.Elements.
                         field_0x8;
        iVar10 = *(int *)&(pUVar27->MutablePendingInstanceWork).PendingInstanceUpdates.Elements.
                          field_0x8;
        if ((pUVar27 == (UCustomizableObjectSystemPrivate *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Private",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                ,0x32c,L""), bVar21)) {
          pcVar17 = (code *)swi(3);
          iVar23 = (*pcVar17)();
          return iVar23;
        }
        iVar26 = FMutableStreamableManager::Tick
                           ((((this->Private).field0_0x0.DebugPtr)->StreamableManager).Object,
                            local_355);
        iVar26 = ((((uint)(pFVar48 != (FUpdateContextPrivate *)0x0) - iVar5) - iVar6) - iVar7) +
                 (uint)(pFVar45 != (FMutableUpdateCandidate *)0x0) + iVar8 + iVar9 + iVar10 +
                 iVar23 + (uint)(pTVar16 != (TNode *)0x0) + uVar47 + uVar39 + iVar26;
        goto LAB_14ac45d6f;
      }
    }
    else {
      pUVar27 = GetPrivate(this);
      FMutableTaskGraph::UnlockMutableThread(&pUVar27->MutableTaskGraph);
      pUVar27 = GetPrivate(this);
      this_00 = &pUVar27->MutableTaskGraph;
      if (this_00 == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      (pUVar27->MutableTaskGraph).bAllowLaunchMutableTaskLowPriority = true;
      FMutableTaskGraph::TryLaunchMutableTaskLowPriority(this_00,false);
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    }
  }
  iVar26 = 0;
LAB_14ac45d6f:
  if (bVar49) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar26;
}

// execGetAverageBuildTime @ 14ac4d3f0

void __cdecl
UCustomizableObjectSystem::execGetAverageBuildTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 1);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x330);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    dVar1 = *(double *)(lVar2 + 0x328);
    LeaveCriticalSection(lpCriticalSection);
    *(int *)param_3 = (int)(dVar1 * __real_408f400000000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execGetInstance @ 14ac4d660

void __cdecl
UCustomizableObjectSystem::execGetInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCustomizableObjectSystem *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetInstance();
  *(UCustomizableObjectSystem **)param_3 = pUVar1;
  return;
}

// execGetInstanceChecked @ 14ac4d690

void __cdecl
UCustomizableObjectSystem::execGetInstanceChecked(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystem *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetInstance();
  if (pUVar3 == (UCustomizableObjectSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("System",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x30b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(UCustomizableObjectSystem **)param_3 = pUVar3;
  return;
}

// execGetNumInstances @ 14ac4d700

void __cdecl
UCustomizableObjectSystem::execGetNumInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLogBenchmarkUtil::GetInstancesStats
            ((FLogBenchmarkUtil *)(*(longlong *)(param_1 + 1) + 0x208),local_res18,local_res8,
             local_res10);
  *(int *)param_3 = local_res8[0];
  return;
}

// execGetNumPendingInstances @ 14ac4d790

void __cdecl
UCustomizableObjectSystem::execGetNumPendingInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetNumPendingInstances((UCustomizableObjectSystem *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetPluginVersion @ 14ac4d7d0

void __cdecl
UCustomizableObjectSystem::execGetPluginVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res10;
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ::FName::FName(&local_res10,"CustomizableObject");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetTextureMemoryUsed @ 14ac4dbc0

void __cdecl
UCustomizableObjectSystem::execGetTextureMemoryUsed(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 1);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x240);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    uVar2 = *(undefined8 *)(lVar1 + 0x238);
    LeaveCriticalSection(lpCriticalSection);
    *(undefined8 *)param_3 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execGetTotalInstances @ 14ac4dc60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UCustomizableObjectSystem::execGetTotalInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  int iVar7;
  TObjectIterator<UCustomizableObjectInstance> local_28;
  
  local_28.Index = 0xffffffff;
  iVar7 = 0;
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) != 0) &&
       ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 8) >>
         0x1e & 1) == 0)) {
      lVar6 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 8) &
          0x10) == 0) {
        iVar7 = iVar7 + 1;
      }
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  *(int *)param_3 = iVar7;
  return;
}

// execGetWorkingMemory @ 14ac4ddd0

void __cdecl
UCustomizableObjectSystem::execGetWorkingMemory(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings != false) {
    *(undefined4 *)param_3 = 0x4000;
    return;
  }
  uVar1 = (**(code **)(*(longlong *)CVarWorkingMemoryKB._8_8_ + 200))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIsUpdateResultValid @ 14ac4de20

void __cdecl
UCustomizableObjectSystem::execIsUpdateResultValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res10[0] < 2;
  return;
}

// execIsUpdating @ 14ac4dea0

void __cdecl
UCustomizableObjectSystem::execIsUpdating(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  UObject *pUVar7;
  FMutablePendingInstanceUpdate *pFVar8;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
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
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x333,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 1);
  lVar3 = *(longlong *)(lVar2 + 0x160);
  if (lVar3 != 0) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 0x40));
    if (pUVar7 == pUVar5) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pFVar8 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
           Find((TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                 *)(lVar2 + 0x60),
                (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)local_res18);
  *(bool *)param_3 = pFVar8 != (FMutablePendingInstanceUpdate *)0x0;
  return;
}

// execSetWorkingMemory @ 14ac4e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObjectSystem::execSetWorkingMemory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  local_38 = 0xe000000;
  local_34 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = CVarWorkingMemoryKB._8_8_;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0xf000000;
  local_20 = 0x1000000;
  ::FString::PrintfImpl(&local_48,L"%d");
  lVar2 = *(longlong *)uVar3;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar4 = (**(code **)(lVar2 + 0xa8))(uVar3,local_58,&local_38);
  (**(code **)(lVar2 + 0xb0))(uVar3,FVar5.Data,uVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  return;
}

