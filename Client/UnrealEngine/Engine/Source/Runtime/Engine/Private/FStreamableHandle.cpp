// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// FStreamableHandle @ 14877cdf0

FStreamableHandle * __thiscall
FStreamableHandle::FStreamableHandle
          (FStreamableHandle *this,FPrivateToken param_1,FSourceLocation *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->CompleteDelegate = 0;
  *(undefined8 *)&(this->CompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CancelDelegate = 0;
  *(undefined8 *)&(this->CancelDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UpdateDelegate = 0;
  *(undefined8 *)&(this->UpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateDelegate).field_0x10 = 0;
  (this->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  uVar2 = (param_2->Impl)._Column;
  pcVar1 = (param_2->Impl)._File;
  (this->Location).Impl._Line = (param_2->Impl)._Line;
  (this->Location).Impl._Column = uVar2;
  (this->Location).Impl._File = pcVar1;
  (this->Location).Impl._Function = (param_2->Impl)._Function;
  (this->Error).bIsSet = false;
  UE::IoStore::FOnDemandContentHandle::FOnDemandContentHandle
            (&(this->DownloadCachePin).ContentHandle);
  (this->DownloadContext).Ptr = (FDownloadContext *)0x0;
  this->Priority = 0;
  this->StreamablesLoading = 0;
  this->CompletedChildCount = 0;
  this->CanceledChildCount = 0;
  (this->RequestedAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedAssets).ArrayNum = 0;
  (this->RequestedAssets).ArrayMax = 0;
  (this->ChildHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildHandles).ArrayNum = 0;
  (this->ChildHandles).ArrayMax = 0;
  (this->ParentHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentHandles).ArrayNum = 0;
  (this->ParentHandles).ArrayMax = 0;
  this->OwningManager = (FStreamableManager *)0x0;
  (this->AdditionalContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalContextData).ArrayNum = 0;
  (this->AdditionalContextData).ArrayMax = 0;
  this->bLoadStarted = false;
  this->bLoadCompleted = false;
  this->bReleased = false;
  this->bCanceled = false;
  this->bStalled = false;
  this->bReleaseWhenLoaded = false;
  this->bIsCombinedHandle = false;
  return this;
}

// ~FStreamableHandle @ 14877fcb0

void __thiscall FStreamableHandle::~FStreamableHandle(FStreamableHandle *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FDownloadContext *this_00;
  IErrorDetails *pIVar4;
  void *pvVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  FStreamable *pFVar11;
  int iVar12;
  uint uVar13;
  FSoftObjectPath *pFVar14;
  FSoftObjectPath *pFVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  FSoftObjectPath *local_res18;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x430,
                         L"Streamable handles aren\'t thread-safe and must be destroyed on the game thread"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->bCanceled == false) && (this->bReleased == false)) && (this->bLoadStarted != false)) {
    local_res10 = (this->RequestedAssets).ArrayNum;
    uVar10 = (ulonglong)(int)local_res10;
    pFVar14 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
    pFVar15 = pFVar14 + uVar10;
    local_res18 = pFVar15;
    while( true ) {
      if ((this->RequestedAssets).ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar15) break;
      pFVar11 = FStreamableManager::FindStreamable(this->OwningManager,pFVar14);
      if ((pFVar11 != (FStreamable *)0x0) &&
         (uVar13 = (pFVar11->ActiveHandles).ArrayNum - 1, -1 < (int)uVar13)) {
        lVar16 = (longlong)(int)uVar13;
        lVar17 = lVar16 * 8;
        do {
          uVar9 = 0;
          if ((int)uVar13 < (pFVar11->ActiveHandles).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(FStreamableHandle **)((pFVar11->ActiveHandles).AllocatorInstance.Data + lVar17) ==
              this) {
            uVar9 = 0;
            if ((int)uVar13 < (pFVar11->ActiveHandles).ArrayNum) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar2 = (pFVar11->ActiveHandles).ArrayNum;
            pFVar3 = (pFVar11->ActiveHandles).AllocatorInstance.Data;
            iVar12 = ~uVar13 + iVar2;
            if (1 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              memmove(pFVar3 + lVar16 * 8,pFVar3 + (longlong)(iVar2 - iVar12) * 8,
                      (longlong)iVar12 << 3);
            }
            piVar1 = &(pFVar11->ActiveHandles).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          lVar16 = lVar16 + -1;
          lVar17 = lVar17 + -8;
          uVar13 = uVar13 - 1;
          pFVar15 = local_res18;
        } while (-1 < (int)uVar13);
      }
      uVar10 = (ulonglong)local_res10;
      pFVar14 = pFVar14 + 1;
    }
    this->OwningManager = (FStreamableManager *)0x0;
    this->bReleased = true;
  }
  DestructItems<TSharedPtr<FStreamableHandleContextDataBase,1>,int>
            ((TSharedPtr<FStreamableHandleContextDataBase,1> *)
             (this->AdditionalContextData).AllocatorInstance.Data,
             (this->AdditionalContextData).ArrayNum);
  pFVar3 = (this->AdditionalContextData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TWeakPtr<FStreamableHandle,1>,int>
            ((TWeakPtr<FStreamableHandle,1> *)(this->ParentHandles).AllocatorInstance.Data,
             (this->ParentHandles).ArrayNum);
  pFVar3 = (this->ParentHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<FStreamableHandle,1>,int>
            ((TSharedPtr<FStreamableHandle,1> *)(this->ChildHandles).AllocatorInstance.Data,
             (this->ChildHandles).ArrayNum);
  pFVar3 = (this->ChildHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data,
             (this->RequestedAssets).ArrayNum);
  pFVar3 = (this->RequestedAssets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->DownloadContext).Ptr;
  if (this_00 != (FDownloadContext *)0x0) {
    UE::IoStore::FOnDemandInstallRequest::Cancel(&this_00->InstallRequest);
    UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&this_00->InstallRequest);
    ::operator_delete(this_00,0x48);
  }
  UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle
            (&(this->DownloadCachePin).ContentHandle);
  if ((this->Error).bIsSet != false) {
    (this->Error).TypedValue.ErrorCode = 0;
    (this->Error).TypedValue.ModuleId = 0;
    pIVar4 = (this->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar4 != (IErrorDetails *)0x0) {
      (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    pIVar4 = (this->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar4 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
  }
  pFVar3 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate);
  pvVar5 = *(void **)&(this->UpdateDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate);
  pvVar5 = *(void **)&(this->CancelDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CancelDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate);
  pvVar5 = *(void **)&(this->CompleteDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CompleteDelegate);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148780073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return;
    }
  }
  return;
}

// operator() @ 148781ff0

void __thiscall
`FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AsyncLoadCallbackWrapper @ 148789410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamableHandle::AsyncLoadCallbackWrapper
          (FStreamableHandle *this,FName *param_1,UPackage *param_2,Type param_3,
          FSoftObjectPath *param_4)

{
  FDynamicErrorDetails *pFVar1;
  longlong *plVar2;
  FStreamableManager *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  bool bVar6;
  FError *pFVar7;
  FDynamicErrorDetails *this_01;
  undefined1 local_res8 [8];
  FError local_c8;
  char local_b8;
  undefined1 local_b0 [24];
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> local_98;
  FDynamicErrorDetails *local_90;
  FError local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  TOptional<UE::UnifiedError::FError> local_68;
  FSoftObjectPath local_50;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x4f4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->OwningManager == (FStreamableManager *)0x0) {
    if ((this->bCanceled == false) && (5 < (byte)LogStreamableManager._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    }
  }
  else {
    local_b8 = '\0';
    if (param_3 != Succeeded) {
      pFVar7 = UE::UnifiedError::StreamableManager::GetStreamableError(&local_88,param_3);
      TVar5.Reference = local_c8.ErrorDetails.Reference;
      if (pFVar7 != &local_c8) {
        if ((local_b8 != '\0') &&
           (local_c8.ErrorCode = 0, local_c8.ModuleId = 0,
           local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar5.Reference + 0x10))();
          if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 0x10))();
          }
        }
        UE::UnifiedError::FError::FError(&local_c8,pFVar7);
        local_b8 = '\x01';
      }
      TVar5.Reference = local_88.ErrorDetails.Reference;
      local_88.ErrorCode = 0;
      local_88.ModuleId = 0;
      if (local_88.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_88.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar5.Reference + 0x10))();
        if (local_88.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_88.ErrorDetails.Reference + 0x10))();
        }
      }
      ::FName::ToString(param_1,(FString *)local_b0);
      FSoftObjectPath::ToString(param_4,(FString *)(local_b0 + 0x10));
      if ((local_b8 == '\0') &&
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
      this_01 = ::operator_new(0x48);
      if (this_01 == (FDynamicErrorDetails *)0x0) {
        local_90 = (FDynamicErrorDetails *)0x0;
      }
      else {
        local_70 = 0;
        UE::UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                  (this_01,(IErrorDetails *)&local_70);
        pFVar1 = this_01 + 1;
        this_01->_padding_ =
             (longlong)
             &UE::UnifiedError::
              TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
              ::_vftable__for__UE__UnifiedError__IErrorDetails__;
        plVar2 = &this_01[1]._padding_;
        pFVar1->_padding_ = 0;
        this_01->_padding_ =
             (longlong)
             &UE::UnifiedError::
              TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
              ::_vftable__for__FRefCountBase__;
        this_01[1]._padding_ = 0;
        *plVar2 = 0;
        this_01[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
        *(undefined1 *)&this_01[2]._padding_ = 5;
        if (pFVar1 != (FDynamicErrorDetails *)local_b0) {
          pFVar1->_padding_ = local_b0._0_8_;
          local_b0._0_8_ = (FScriptContainerElement *)0x0;
          *(undefined4 *)&this_01[1]._padding_ = local_b0._8_4_;
          *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = local_b0._12_4_;
          local_b0._8_8_ = 0;
        }
        if (plVar2 != (longlong *)(local_b0 + 0x10)) {
          if ((void *)*plVar2 != (void *)0x0) {
            FMemory::Free((void *)*plVar2);
          }
          *plVar2 = local_b0._16_8_;
          local_b0._16_8_ = (void *)0x0;
          *(undefined4 *)&this_01[1].InnerErrorDetails.Reference = local_98.Reference._0_4_;
          *(undefined4 *)((longlong)&this_01[1].InnerErrorDetails.Reference + 4) =
               local_98.Reference._4_4_;
          local_98.Reference = (IErrorDetails *)0x0;
        }
        *(undefined1 *)&this_01[2]._padding_ = 5;
        local_90 = this_01;
        (**(code **)(this_01->_padding_ + 8))(this_01,local_res8);
      }
      UE::UnifiedError::FError::PushErrorDetails(&local_c8,(IErrorDetails *)&local_90);
      if ((local_b8 == '\0') &&
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
      SetError(this,&local_c8);
      if ((void *)local_b0._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._16_8_);
      }
      if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
    }
    this_00 = this->OwningManager;
    local_68.bIsSet = (bool)local_b8;
    if (local_b8 != '\0') {
      local_68.TypedValue.ErrorCode = local_c8.ErrorCode;
      local_68.TypedValue.ModuleId = local_c8.ModuleId;
      local_68.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_68.TypedValue.ErrorDetails.Reference = local_c8.ErrorDetails.Reference;
        (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 8))
                  (local_c8.ErrorDetails.Reference,local_78);
      }
    }
    local_50.SubPathString.Data.AllocatorInstance.Data =
         (param_4->SubPathString).Data.AllocatorInstance.Data;
    local_50.AssetPath.PackageName = (param_4->AssetPath).PackageName;
    local_50.AssetPath.AssetName = (param_4->AssetPath).AssetName;
    (param_4->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.SubPathString.Data.ArrayNum = (param_4->SubPathString).Data.ArrayNum;
    local_50.SubPathString.Data.ArrayMax = (param_4->SubPathString).Data.ArrayMax;
    (param_4->SubPathString).Data.ArrayNum = 0;
    (param_4->SubPathString).Data.ArrayMax = 0;
    FStreamableManager::AsyncLoadCallback(this_00,&local_50,param_2,&local_68);
    if (this->bLoadCompleted == false) {
      CallUpdateDelegate(this);
    }
    TVar5.Reference = local_c8.ErrorDetails.Reference;
    if ((local_b8 != '\0') &&
       (local_c8.ErrorCode = 0, local_c8.ModuleId = 0,
       local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  pFVar3 = (param_4->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BindCancelDelegate @ 148789970

bool __thiscall
FStreamableHandle::BindCancelDelegate
          (FStreamableHandle *this,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return true;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// BindCancelDelegate @ 1487899f0

bool __thiscall
FStreamableHandle::BindCancelDelegate
          (FStreamableHandle *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> local_28;
  
  if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
    this_00 = UE::StreamableManager::Private::WrapDelegate(&local_28,param_1);
    if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      if (*(void **)&this_00->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00->field_0x8);
      }
      bVar1 = true;
    }
    else {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      if (*(void **)&this_00->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00->field_0x8);
      }
      bVar1 = false;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return bVar1;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// BindCompleteDelegate @ 148789af0

bool __thiscall
FStreamableHandle::BindCompleteDelegate
          (FStreamableHandle *this,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return true;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// BindCompleteDelegate @ 148789b70

bool __thiscall
FStreamableHandle::BindCompleteDelegate
          (FStreamableHandle *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> local_28;
  
  if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
    this_00 = UE::StreamableManager::Private::WrapDelegate(&local_28,param_1);
    if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      if (*(void **)&this_00->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00->field_0x8);
      }
      bVar1 = true;
    }
    else {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      if (*(void **)&this_00->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00->field_0x8);
      }
      bVar1 = false;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return bVar1;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// BindUpdateDelegate @ 148789c70

bool __thiscall
FStreamableHandle::BindUpdateDelegate
          (FStreamableHandle *this,
          TDelegate<void___cdecl(TSharedRef<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  if ((this->bLoadCompleted == false) && (this->bCanceled == false)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return true;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// CallUpdateDelegate @ 14878ac50

void __thiscall FStreamableHandle::CallUpdateDelegate(FStreamableHandle *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<FStreamableHandle,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  FStreamableHandle *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<FStreamableHandle,1> local_48;
  FReadAccessScope local_38;
  
  pTVar6 = TSharedFromThis<FStreamableHandle,1>::AsShared
                     ((TSharedFromThis<FStreamableHandle,1> *)this,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate,
             &local_38);
  if ((*(int *)&(this->UpdateDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->UpdateDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x68);
    local_58 = pTVar6->Object;
    local_50 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(plVar2,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  iVar1 = (this->ParentHandles).ArrayNum;
  pFVar9 = (this->ParentHandles).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->ParentHandles).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar9 == pFVar8) {
        return;
      }
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14878ad20:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pFVar9 = pFVar9 + 0x10;
    }
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14878ad20;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar10 = aVar4 == aVar5;
      if (bVar10) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar10);
    if (*(FStreamableHandle **)pFVar9 == (FStreamableHandle *)0x0) goto LAB_14878ad20;
    CallUpdateDelegate(*(FStreamableHandle **)pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// CancelHandle @ 14878b8c0

void __thiscall FStreamableHandle::CancelHandle(FStreamableHandle *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  FStreamableManager *pFVar6;
  FDownloadContext *pFVar7;
  longlong lVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  atomic<int> aVar14;
  TSharedRef<FStreamableHandle,1> *pTVar15;
  ulonglong uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FSoftObjectPath *pFVar20;
  FScriptContainerElement *pFVar21;
  TWeakPtr<FStreamableHandle,1> *pTVar22;
  int iVar23;
  FSoftObjectPath *pFVar24;
  ForAnyElementType FVar25;
  TReferenceControllerBase<1> *pTVar26;
  int iVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168;
  undefined1 local_167 [7];
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  ForAnyElementType local_148;
  ulonglong local_140;
  uint local_138;
  TWeakPtr<FStreamableHandle,1> local_128;
  TSharedRef<FStreamableHandle,1> local_118;
  FScriptContainerElement *local_108;
  TSharedRef<FStreamableHandle,1> local_f8;
  longlong local_e8;
  TReferenceControllerBase<1> *local_e0;
  FScriptContainerElement *local_d8;
  TWeakPtr<FStreamableHandle,1> local_c8;
  FDestructionSentinel local_b8;
  TSharedPtr<FStreamableHandle,1> local_98;
  TSharedRef<FStreamableHandle,1> local_88;
  TSharedRef<FStreamableHandle,1> local_78;
  TSharedPtr<FStreamableHandle,1> local_68;
  TSharedRef<FStreamableHandle,1> local_58;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                          ,0x38e,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this->bCanceled == false) && (this->OwningManager != (FStreamableManager *)0x0)) {
    TSharedFromThis<FStreamableHandle,1>::AsShared
              ((TSharedFromThis<FStreamableHandle,1> *)this,&local_118);
    if ((this->bLoadCompleted == false) && (this->bReleased == false)) {
      this->bCanceled = true;
      NotifyParentsOfCancellation(this);
      local_98.Object = local_118.Object;
      local_98.SharedReferenceCount.ReferenceController =
           local_118.SharedReferenceCount.ReferenceController;
      local_140 = 0;
      local_150 = (undefined1  [8])0x0;
      local_148.Data = (FScriptContainerElement *)0x0;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ExecuteDelegate(&this->CancelDelegate,&local_98,
                      (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_150);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
                 (FWriteAccessScope *)&local_b8);
      if (((int)local_140 != 0) && (local_148.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_148.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,0x10);
        local_140 = local_140 & 0xffffffff00000000;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_150);
      UnbindDelegates(this);
      if (this->bLoadStarted != false) {
        iVar5 = (this->RequestedAssets).ArrayNum;
        pFVar20 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
        pFVar24 = pFVar20 + iVar5;
        while( true ) {
          if ((this->RequestedAssets).ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar20 == pFVar24) break;
          pFVar6 = this->OwningManager;
          local_88.Object = local_118.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_118.SharedReferenceCount.ReferenceController;
          if (local_118.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FStreamableManager::RemoveReferencedAsset(pFVar6,pFVar20,&local_88);
          pFVar20 = pFVar20 + 1;
        }
      }
      pFVar7 = (this->DownloadContext).Ptr;
      if (pFVar7 != (FDownloadContext *)0x0) {
        pTVar15 = TSharedFromThis<FStreamableHandle,1>::AsShared
                            ((TSharedFromThis<FStreamableHandle,1> *)this,&local_78);
        cVar12 = (**(code **)((pFVar7->InstallRequest)._padding_ + 8))(pFVar7);
        if (cVar12 == '\0') {
          pFVar7 = (pTVar15->Object->DownloadContext).Ptr;
          (pTVar15->Object->DownloadContext).Ptr = (FDownloadContext *)0x0;
          if (pFVar7 != (FDownloadContext *)0x0) {
            UE::IoStore::FOnDemandInstallRequest::Cancel(&pFVar7->InstallRequest);
            UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&pFVar7->InstallRequest);
            ::operator_delete(pFVar7,0x48);
          }
        }
        else {
          UE::IoStore::FOnDemandInstallRequest::Cancel(&pFVar7->InstallRequest);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                (&this->OwningManager->ManagedActiveHandles,&local_118);
      pTVar3 = &this->ChildHandles;
      iVar5 = (this->ChildHandles).ArrayNum;
      pFVar18 = (pTVar3->AllocatorInstance).Data;
      pFVar21 = pFVar18 + (longlong)iVar5 * 0x10;
      while( true ) {
        if ((this->ChildHandles).ArrayNum != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar18 == pFVar21) break;
        if ((*(longlong *)pFVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)pFVar18;
        local_c8.Object = local_118.Object;
        local_c8.WeakReferenceCount.ReferenceController =
             local_118.SharedReferenceCount.ReferenceController;
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *)
                   (lVar8 + 0xe0),&local_c8);
        if (local_c8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)((local_c8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_c8.WeakReferenceCount.ReferenceController,1);
          }
        }
        pFVar18 = pFVar18 + 0x10;
      }
      DestructItems<TSharedPtr<FStreamableHandle,1>,int>
                ((TSharedPtr<FStreamableHandle,1> *)(pTVar3->AllocatorInstance).Data,
                 (this->ChildHandles).ArrayNum);
      piVar2 = &(this->ChildHandles).ArrayMax;
      (this->ChildHandles).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
      }
      iVar5 = (this->ParentHandles).ArrayNum;
      this->CompletedChildCount = 0;
      this->CanceledChildCount = 0;
      this->OwningManager = (FStreamableManager *)0x0;
      if (0 < iVar5) {
        pTVar22 = (TWeakPtr<FStreamableHandle,1> *)(this->ParentHandles).AllocatorInstance.Data;
        local_160.Data = (FScriptContainerElement *)0x0;
        local_158 = iVar5;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,0,&local_160,iVar5,&local_154);
        ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int>
                  (local_160.Data,pTVar22,iVar5);
        iVar5 = local_158;
        pTVar22 = (TWeakPtr<FStreamableHandle,1> *)(local_160.Data + (longlong)local_158 * 0x10);
        FVar25.Data = local_160.Data;
        while( true ) {
          if (local_158 != iVar5) {
            `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_167);
          }
          if ((TWeakPtr<FStreamableHandle,1> *)FVar25.Data == pTVar22) break;
          pTVar26 = (((TWeakPtr<FStreamableHandle,1> *)FVar25.Data)->WeakReferenceCount).
                    ReferenceController;
          pTVar19 = pTVar26;
          if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
LAB_14878bcf1:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            FVar25.Data = FVar25.Data + 0x10;
          }
          else {
            aVar4 = pTVar26->SharedReferenceCount;
            do {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              if (aVar4 == (atomic<int>)0x0) goto LAB_14878bcf1;
              LOCK();
              aVar14 = pTVar26->SharedReferenceCount;
              bVar11 = aVar4 == aVar14;
              if (bVar11) {
                pTVar26->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar14 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar14;
            } while (!bVar11);
            pTVar19 = pTVar26;
            if (((TWeakPtr<FStreamableHandle,1> *)FVar25.Data)->Object == (FStreamableHandle *)0x0)
            goto LAB_14878bcf1;
            UpdateCombinedHandle(((TWeakPtr<FStreamableHandle,1> *)FVar25.Data)->Object);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar26);
            FVar25.Data = FVar25.Data + 0x10;
          }
        }
        DestructItems<TWeakPtr<FStreamableHandle,1>,int>
                  ((TWeakPtr<FStreamableHandle,1> *)local_160.Data,local_158);
        if ((TWeakPtr<FStreamableHandle,1> *)local_160.Data != (TWeakPtr<FStreamableHandle,1> *)0x0)
        {
          FMemory::Free(local_160.Data);
        }
      }
    }
    else {
      if (StreamableDelegateDelayHelper != (FStreamableDelegateDelayHelper *)0x0) {
        local_68.Object = local_118.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_118.SharedReferenceCount.ReferenceController;
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FStreamableDelegateDelayHelper::CancelDelegatesForHandle
                  (StreamableDelegateDelayHelper,&local_68);
      }
      if (this->bReleased == false) {
        bVar11 = IsInGameThread();
        if ((!bVar11) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInGameThread()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                ,0x3e0,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((this->bReleased == false) && (this->bCanceled == false)) {
          if ((this->OwningManager == (FStreamableManager *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OwningManager",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                  ,1000,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (this->bLoadCompleted == false) {
            this->bReleaseWhenLoaded = true;
          }
          else {
            this->bReleased = true;
            TSharedFromThis<FStreamableHandle,1>::AsShared
                      ((TSharedFromThis<FStreamableHandle,1> *)this,&local_f8);
            if (this->bLoadStarted != false) {
              iVar5 = (this->RequestedAssets).ArrayNum;
              pFVar20 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
              pFVar24 = pFVar20 + iVar5;
              while( true ) {
                if ((this->RequestedAssets).ArrayNum != iVar5) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res20);
                }
                if (pFVar20 == pFVar24) break;
                pFVar6 = this->OwningManager;
                local_58.Object = local_f8.Object;
                local_58.SharedReferenceCount.ReferenceController =
                     local_f8.SharedReferenceCount.ReferenceController;
                if (local_f8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_f8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FStreamableManager::RemoveReferencedAsset(pFVar6,pFVar20,&local_58);
                pFVar20 = pFVar20 + 1;
              }
            }
            TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                      (&this->OwningManager->ManagedActiveHandles,&local_f8);
            local_138 = (this->ChildHandles).ArrayNum;
            uVar16 = (ulonglong)(int)local_138;
            pFVar18 = (this->ChildHandles).AllocatorInstance.Data;
            local_d8 = pFVar18 + uVar16 * 0x10;
            while( true ) {
              pFVar21 = local_d8;
              local_108 = pFVar18;
              if ((this->ChildHandles).ArrayNum != (int)uVar16) {
                local_168 = 0;
                `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_168);
              }
              if (pFVar18 == pFVar21) break;
              pTVar26 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
              lVar8 = *(longlong *)pFVar18;
              if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar26->SharedReferenceCount =
                     (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_e8 = lVar8;
              local_e0 = pTVar26;
              if ((lVar8 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_128.Object = local_f8.Object;
              local_128.WeakReferenceCount.ReferenceController =
                   local_f8.SharedReferenceCount.ReferenceController;
              if (local_f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                     (atomic<int>)
                     ((int)(local_f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount +
                     1);
                UNLOCK();
              }
              if (((*(TWeakPtr<FStreamableHandle,1> **)(lVar8 + 0xe0) <= &local_128) &&
                  (&local_128 <
                   *(TWeakPtr<FStreamableHandle,1> **)(lVar8 + 0xe0) + *(int *)(lVar8 + 0xec))) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar5 = *(int *)(lVar8 + 0xe8);
              if (iVar5 != 0) {
                pTVar22 = *(TWeakPtr<FStreamableHandle,1> **)(lVar8 + 0xe0);
                iVar27 = 0;
                bVar11 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
                                   (pTVar22,&local_128);
                bVar11 = !bVar11;
                iVar17 = 0;
                do {
                  iVar10 = iVar17;
                  do {
                    iVar10 = iVar10 + 1;
                    if (iVar5 <= iVar10) break;
                    bVar13 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
                                       (pTVar22 + iVar10,&local_128);
                  } while (bVar11 == !bVar13);
                  iVar23 = iVar10 - iVar17;
                  if (bVar11 == false) {
                    DestructItems<TWeakPtr<FStreamableHandle,1>,int>(pTVar22 + iVar17,iVar23);
                  }
                  else {
                    if (iVar27 != iVar17) {
                      memmove(pTVar22 + iVar27,pTVar22 + iVar17,(longlong)iVar23 << 4);
                    }
                    iVar27 = iVar27 + iVar23;
                  }
                  bVar11 = (bool)(bVar11 ^ 1);
                  iVar17 = iVar10;
                } while (iVar10 < iVar5);
                *(int *)(local_e8 + 0xe8) = iVar27;
                pFVar18 = local_108;
                pTVar26 = local_e0;
              }
              if (local_128.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_128.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar4 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar4 == (atomic<int>)0x1) {
                  (**(code **)((local_128.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_128.WeakReferenceCount.ReferenceController,1);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              uVar16 = (ulonglong)local_138;
              pFVar18 = pFVar18 + 0x10;
            }
            DestructItems<TSharedPtr<FStreamableHandle,1>,int>
                      ((TSharedPtr<FStreamableHandle,1> *)
                       (this->ChildHandles).AllocatorInstance.Data,(this->ChildHandles).ArrayNum);
            piVar2 = &(this->ChildHandles).ArrayMax;
            (this->ChildHandles).ArrayNum = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,&(this->ChildHandles).AllocatorInstance,0,piVar2);
            }
            this->CompletedChildCount = 0;
            this->CanceledChildCount = 0;
            this->OwningManager = (FStreamableManager *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.SharedReferenceCount.ReferenceController);
          }
        }
      }
      this->bCanceled = true;
      NotifyParentsOfCancellation(this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  return;
}

// CompleteLoad @ 14878d810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamableHandle::CompleteLoad(FStreamableHandle *this)

{
  int *piVar1;
  int iVar2;
  TWeakPtr<FStreamableHandle,1> *pTVar3;
  atomic<int> aVar4;
  FStreamableHandle **ppFVar5;
  atomic<int> aVar6;
  FError *pFVar7;
  FText *pFVar8;
  TSharedRef<FStreamableHandle,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FStreamableHandle *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  TSharedPtr<FStreamableHandle,1> local_28;
  TSharedRef<FStreamableHandle,1> local_18;
  
  if ((this->Error).bIsSet != false) {
    if (GStreamableLogStreamableFailuresAsErrors) {
      if ((byte)LogStreamableManager._0_1_ < 2) goto LAB_14878d8e3;
      pFVar7 = TOptional<UE::UnifiedError::FError>::operator->(&this->Error);
      pFVar8 = UE::UnifiedError::FError::GetErrorMessage(pFVar7,(FText *)&local_28,true);
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    }
    else {
      if ((byte)LogStreamableManager._0_1_ < 6) goto LAB_14878d8e3;
      pFVar7 = TOptional<UE::UnifiedError::FError>::operator->(&this->Error);
      pFVar8 = UE::UnifiedError::FError::GetErrorMessage(pFVar7,(FText *)&local_28,true);
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
    }
    if (local_28.Object != (FStreamableHandle *)0x0) {
      (**(code **)((local_28.Object)->_padding_ + 0x10))();
    }
  }
LAB_14878d8e3:
  if ((this->bCanceled == false) && (this->bReleased == false)) {
    this->bLoadCompleted = true;
    pTVar9 = TSharedFromThis<FStreamableHandle,1>::AsShared
                       ((TSharedFromThis<FStreamableHandle,1> *)this,&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar9->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::StreamableManager::Private::
    ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
              (&this->CompleteDelegate,&local_28,&this->CancelDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate);
    iVar2 = (this->ParentHandles).ArrayNum;
    pFVar11 = (this->ParentHandles).AllocatorInstance.Data;
    pFVar13 = pFVar11 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->ParentHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar11 == pFVar13) break;
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14878d9d0:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        pFVar11 = pFVar11 + 0x10;
      }
      else {
        aVar4 = pTVar10->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14878d9d0;
          }
          LOCK();
          aVar6 = pTVar10->SharedReferenceCount;
          bVar15 = aVar4 == aVar6;
          if (bVar15) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar15);
        if (*(longlong *)pFVar11 == 0) goto LAB_14878d9d0;
        piVar1 = (int *)(*(longlong *)pFVar11 + 0xb8);
        *piVar1 = *piVar1 + 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        pFVar11 = pFVar11 + 0x10;
      }
    }
    iVar2 = (this->ParentHandles).ArrayNum;
    if (0 < iVar2) {
      pTVar3 = (TWeakPtr<FStreamableHandle,1> *)(this->ParentHandles).AllocatorInstance.Data;
      local_28.Object = (FStreamableHandle *)0x0;
      local_28.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,(ForAnyElementType *)&local_28,iVar2,
                 (int *)((longlong)&local_28.SharedReferenceCount.ReferenceController + 4));
      ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int>
                (local_28.Object,pTVar3,iVar2);
      iVar2 = (int)local_28.SharedReferenceCount.ReferenceController;
      lVar12 = (longlong)(int)local_28.SharedReferenceCount.ReferenceController;
      ppFVar5 = (FStreamableHandle **)&(local_28.Object)->_padding_;
      pFVar14 = local_28.Object;
      while( true ) {
        if ((int)local_28.SharedReferenceCount.ReferenceController != iVar2) {
          `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar14 == (FStreamableHandle *)(ppFVar5 + lVar12 * 2)) break;
        pTVar10 = ((FWeakReferencer<1> *)&pFVar14->_padding_)->ReferenceController;
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14878daa5:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          pFVar14 = (FStreamableHandle *)&pFVar14->CompleteDelegate;
        }
        else {
          aVar4 = pTVar10->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              pTVar10 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14878daa5;
            }
            LOCK();
            aVar6 = pTVar10->SharedReferenceCount;
            bVar15 = aVar4 == aVar6;
            if (bVar15) {
              pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar6 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar6;
          } while (!bVar15);
          if ((FStreamableHandle *)pFVar14->_padding_ == (FStreamableHandle *)0x0)
          goto LAB_14878daa5;
          UpdateCombinedHandle((FStreamableHandle *)pFVar14->_padding_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          pFVar14 = (FStreamableHandle *)&pFVar14->CompleteDelegate;
        }
      }
      DestructItems<TWeakPtr<FStreamableHandle,1>,int>
                ((TWeakPtr<FStreamableHandle,1> *)local_28.Object,
                 (int)local_28.SharedReferenceCount.ReferenceController);
      if (local_28.Object != (FStreamableHandle *)0x0) {
        FMemory::Free(local_28.Object);
      }
    }
  }
  return;
}

// CreateCombinedHandle @ 14878ed60

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableHandle::CreateCombinedHandle
          (FStreamableHandle *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArrayView<TSharedPtr<FStreamableHandle,1>_const_,int> *param_1)

{
  int iVar1;
  FStreamableManager *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FStreamableHandle,1> *pTVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  FString *pFVar6;
  TArray<TSharedPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  int local_100;
  undefined2 local_fc;
  FOnDemandContentHandle local_f8;
  bool local_e0;
  TSharedPtr<FStreamableHandle,1> local_d8;
  FSourceLocation local_c8;
  TSharedPtr<FStreamableHandle,1> *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  TSharedRef<FStreamableHandle,1> local_50;
  TArrayView<TSharedPtr<FStreamableHandle,1>_const_,int> local_38;
  FString local_28;
  
  pTVar4 = TSharedFromThis<FStreamableHandle,1>::AsShared
                     ((TSharedFromThis<FStreamableHandle,1> *)this,&local_50);
  local_d8.Object = pTVar4->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,899,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if (((this->bCanceled == false) && (this->bReleased == false)) &&
     (this_00 = this->OwningManager, this_00 != (FStreamableManager *)0x0)) {
    iVar1 = param_1->ArrayNum;
    pTVar5 = param_1->DataPtr;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_168.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_168.AllocatorInstance,iVar1,&local_168.ArrayMax);
      ConstructItems<TSharedPtr<FStreamableHandle,1>,TSharedPtr<FStreamableHandle,1>,int>
                (local_168.AllocatorInstance.Data,pTVar5,iVar1);
    }
    TArray<TSharedPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FStreamableHandle,1>_const_&>(&local_168,&local_d8);
    local_158._0_8_ = (FSoftObjectPath *)0x0;
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    local_158._8_4_ = 0;
    local_158._12_4_ = 0;
    local_100 = 0;
    local_fc._0_1_ = false;
    local_fc._1_1_ = false;
    local_e0 = false;
    pFVar6 = ::FString::FString(&local_28,&HandleDebugName_CombinedHandle);
    iStack_a0 = local_168.ArrayNum;
    local_a8 = (TSharedPtr<FStreamableHandle,1> *)local_168.AllocatorInstance.Data;
    if (local_168.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    local_38._12_4_ = uStack_9c;
    local_38.ArrayNum = iStack_a0;
    local_c8.Impl._Function =
         "class TSharedPtr<struct FStreamableHandle,1> __cdecl FStreamableHandle::CreateCombinedHandle(const class TArrayView<class TSharedPtr<struct FStreamableHandle,1> const ,int> &)"
    ;
    local_c8.Impl._Line = 0x566;
    local_c8.Impl._Column = 0x13;
    local_c8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
    ;
    local_38.DataPtr = local_a8;
    FStreamableManager::CreateCombinedHandle
              (this_00,__return_storage_ptr__,&local_38,pFVar6,
               SkipNulls|RedirectParents|MergeDebugNames,(FStreamableAsyncLoadParams *)local_158,
               &local_c8);
    if (local_e0 != false) {
      UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_98);
    if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
      local_108 = local_108 & 0xffffffff00000000;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (FStack_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_110.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_80);
    if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_128.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
      local_120 = local_120 & 0xffffffff00000000;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (FStack_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_148,(FWriteAccessScope *)&local_68);
    if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_140.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
      local_138 = local_138 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_140.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_158._0_8_,local_158._8_4_);
    if ((FSoftObjectPath *)local_158._0_8_ != (FSoftObjectPath *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
    DestructItems<TSharedPtr<FStreamableHandle,1>,int>
              ((TSharedPtr<FStreamableHandle,1> *)local_168.AllocatorInstance.Data,
               local_168.ArrayNum);
    if ((TSharedPtr<FStreamableHandle,1> *)local_168.AllocatorInstance.Data !=
        (TSharedPtr<FStreamableHandle,1> *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  else {
    __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteDelegate @ 148797cf0

void __cdecl
FStreamableHandle::ExecuteDelegate
          (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
           *param_1,TSharedPtr<FStreamableHandle,1> *param_2,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_3)

{
  TSharedPtr<FStreamableHandle,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FStreamableHandle *)0x0;
  UE::StreamableManager::Private::
  ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
            (param_1,&local_18,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteDelegate @ 148797d40

void __cdecl
FStreamableHandle::ExecuteDelegate
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TSharedPtr<FStreamableHandle,1> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *pTVar2;
  FStreamableHandle *local_58;
  TReferenceControllerBase<1> *local_50;
  bool local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  int local_18;
  
  pTVar1 = UE::StreamableManager::Private::WrapDelegate
                     ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_28,param_3);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FStreamableHandle *)0x0;
  pTVar2 = UE::StreamableManager::Private::WrapDelegate
                     ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_40,param_1);
  UE::StreamableManager::Private::
  ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
            (pTVar2,(TSharedPtr<FStreamableHandle,1> *)&local_58,pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_58);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_50,(FDestructionSentinel *)&local_58);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_50,(FDestructionSentinel *)&local_58);
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteDelegate @ 148797ea0

void __cdecl
FStreamableHandle::ExecuteDelegate
          (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
           *param_1,TSharedPtr<FStreamableHandle,1> *param_2,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_3)

{
  FStreamableHandle *pFVar1;
  char cVar2;
  FStreamableDelegateDelayHelper *this;
  FStreamableDelegateDelayHelper *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FStreamableHandle,1> local_38;
  FReadAccessScope local_28;
  
  pFVar1 = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FStreamableHandle *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    local_38.Object = pFVar1;
    local_38.SharedReferenceCount.ReferenceController = pTVar4;
    if (GStreamableDelegateDelayFrames == 0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>::Execute
                (param_1,&local_38);
    }
    else {
      pFVar3 = StreamableDelegateDelayHelper;
      if (StreamableDelegateDelayHelper == (FStreamableDelegateDelayHelper *)0x0) {
        this = ::operator_new(0x90);
        pFVar3 = (FStreamableDelegateDelayHelper *)0x0;
        if (this != (FStreamableDelegateDelayHelper *)0x0) {
          pFVar3 = FStreamableDelegateDelayHelper::FStreamableDelegateDelayHelper(this);
        }
      }
      StreamableDelegateDelayHelper = pFVar3;
      FStreamableDelegateDelayHelper::
      AddDelegate<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_const_&>
                (StreamableDelegateDelayHelper,param_1,param_3,&local_38);
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteDelegate @ 148797fd0

void __cdecl
FStreamableHandle::ExecuteDelegate
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          TSharedPtr<FStreamableHandle,1> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *pTVar2;
  FStreamableHandle *local_58;
  TReferenceControllerBase<1> *local_50;
  bool local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  int local_18;
  
  pTVar1 = UE::StreamableManager::Private::WrapDelegate
                     ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_28,param_3);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FStreamableHandle *)0x0;
  pTVar2 = UE::StreamableManager::Private::WrapDelegate
                     ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_40,param_1);
  UE::StreamableManager::Private::
  ExecuteDelegateInternal<TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>_>
            (pTVar2,(TSharedPtr<FStreamableHandle,1> *)&local_58,pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_58);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_50,(FDestructionSentinel *)&local_58);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_50,(FDestructionSentinel *)&local_58);
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// FindMatchingHandle @ 148799bd0

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableHandle::FindMatchingHandle
          (FStreamableHandle *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TFunction<bool___cdecl(FStreamableHandle_const_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  atomic<int> aVar7;
  undefined8 uVar8;
  TSharedPtr<FStreamableHandle,1> *pTVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  FStreamableHandle *pFVar15;
  FStreamableHandle *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  FScriptContainerElement *local_98;
  FStreamableHandle *local_90;
  TSharedPtr<FStreamableHandle,1> local_88;
  TSharedPtr<FStreamableHandle,1> local_78;
  TFunction<bool___cdecl(FStreamableHandle_const_&)> local_68;
  FStreamableHandle *pFVar14;
  
  pFVar16 = (FStreamableHandle *)0x0;
  local_a0 = (TReferenceControllerBase<1> *)((ulonglong)local_a0 & 0xffffffff00000000);
  local_90 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  plVar18 = (longlong *)&param_1->field_0x10;
  pcVar2 = *(code **)param_1;
  plVar11 = plVar18;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar11 = *(longlong **)&param_1->field_0x28;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  cVar6 = (*pcVar2)(uVar8,this);
  if (cVar6 == '\0') {
    iVar1 = (this->ChildHandles).ArrayNum;
    uVar10 = (ulonglong)iVar1;
    pFVar17 = (this->ChildHandles).AllocatorInstance.Data;
    local_98 = pFVar17 + uVar10 * 0x10;
    local_a0 = (TReferenceControllerBase<1> *)CONCAT44(local_a0._4_4_,iVar1);
    pFVar14 = pFVar16;
    while( true ) {
      pFVar5 = local_98;
      if ((this->ChildHandles).ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a8);
      }
      if (pFVar17 == pFVar5) {
        __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        goto LAB_148799e54;
      }
      pFVar15 = *(FStreamableHandle **)pFVar17;
      if (pFVar15 == (FStreamableHandle *)0x0) {
        uVar13 = (uint)pFVar14 | 2;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = &local_88;
        pFVar15 = pFVar16;
      }
      else {
        local_68._0_8_ = *(undefined8 *)param_1;
        local_68._40_8_ = 0;
        if (local_68._0_8_ != 0) {
          puVar12 = *(undefined8 **)&param_1->field_0x28;
          if (*(undefined8 **)&param_1->field_0x28 == (undefined8 *)0x0) {
            puVar12 = plVar18;
          }
          (**(code **)*puVar12)(puVar12,&local_68.field_0x10);
        }
        uVar13 = (uint)pFVar14 | 1;
        pTVar9 = FindMatchingHandle(pFVar15,&local_78,&local_68);
        pFVar15 = pTVar9->Object;
      }
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      (pTVar9->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar9->Object = (FStreamableHandle *)0x0;
      if ((uVar13 & 2) != 0) {
        uVar13 = uVar13 & 0xfffffffd;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 & 0xfffffffe;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      pFVar14 = (FStreamableHandle *)(ulonglong)uVar13;
      if (pFVar15 != (FStreamableHandle *)0x0) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar10 = (ulonglong)local_a0 & 0xffffffff;
      pFVar17 = pFVar17 + 0x10;
      this = local_90;
    }
    __return_storage_ptr__->Object = pFVar15;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_148799e54:
    if (*(longlong *)param_1 != 0) {
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar18 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  else {
    local_a0 = (TReferenceControllerBase<1> *)this->_padding_;
    if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = local_a0->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_a0 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148799c6f;
        }
        LOCK();
        aVar7 = local_a0->SharedReferenceCount;
        bVar19 = aVar4 == aVar7;
        if (bVar19) {
          local_a0->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar19);
      pFVar16 = (FStreamableHandle *)this->_padding_;
    }
LAB_148799c6f:
    pTVar3 = local_a0;
    if ((pFVar16 != this) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x69a,L""), bVar19)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar2)();
      return pTVar9;
    }
    if (pFVar16 == (FStreamableHandle *)0x0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar19) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar2)();
        return pTVar9;
      }
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar19) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar2)();
        return pTVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = pFVar16;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar16;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_a0;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (*(longlong *)param_1 != 0) {
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar18 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  return __return_storage_ptr__;
}

// GetDownloadCachePins @ 14879d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> * __thiscall
FStreamableHandle::GetDownloadCachePins
          (FStreamableHandle *this,
          TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Dst;
  ForElementType<FStreamableHandle_const_*> FVar8;
  ForElementType<FStreamableHandle_const_*> FVar9;
  uchar *puVar10;
  uchar *puVar11;
  undefined1 auStack_1a8 [32];
  FStreamableHandle **local_188;
  ForElementType<FStreamableHandle_const_*> local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  FStreamableHandle *local_148;
  ForElementType<FStreamableHandle_const_*> local_140;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_140.SecondaryData = (ForElementType<FStreamableHandle_const_*>)0x0;
  local_38 = 0;
  local_34 = 0x20;
  iVar5 = 0;
  local_150 = (undefined1  [8])this;
  if ((&local_140 <= (ForElementType<FStreamableHandle_const_*> *)local_150) &&
     (local_150 < &local_140.SecondaryData)) {
    local_168 = 8;
    local_180 = (ForElementType<FStreamableHandle_const_*>)&local_140;
    local_170 = 0;
    local_178 = 0x20;
    local_188 = (FStreamableHandle **)local_150;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    iVar5 = local_38;
    if (local_38 == local_34) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamableHandle_const_*>_>
                        (0x808,&local_140,&local_34);
    }
  }
  local_38 = iVar5 + 1;
  FVar9 = (ForElementType<FStreamableHandle_const_*>)&local_140;
  if (local_140.SecondaryData != (ForElementType<FStreamableHandle_const_*>)0x0) {
    FVar9 = local_140.SecondaryData;
  }
  *(undefined1 (*) [8])((longlong)FVar9 + (longlong)iVar5 * 8) = local_150;
  bVar4 = local_38 == 0;
  FVar9 = local_140.SecondaryData;
  do {
    if (bVar4 || local_38 < 0) {
      local_180 = (ForElementType<FStreamableHandle_const_*>)(longlong)local_38;
      local_188 = (FStreamableHandle **)0x0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      FVar9 = local_140.SecondaryData;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_140;
    if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
      FVar8 = FVar9;
    }
    lVar1 = (longlong)(local_38 + -1) * 8;
    lVar2 = *(longlong *)(lVar1 + (longlong)FVar8);
    FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_140;
    if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
      FVar8 = FVar9;
    }
    _Dst = (void *)((longlong)FVar8 + lVar1);
    iVar5 = (local_38 - (local_38 + -1)) + -1;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
      FVar9 = local_140.SecondaryData;
    }
    local_38 = local_38 + -1;
    if ((((FStreamableDownloadCachePin *)(lVar2 + 0x98))->ContentHandle).Handle.Object !=
        (FOnDemandInternalContentHandle *)0x0) {
      TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FStreamableDownloadCachePin_const_&>
                (__return_storage_ptr__,(FStreamableDownloadCachePin *)(lVar2 + 0x98));
      FVar9 = local_140.SecondaryData;
    }
    iVar5 = *(int *)(lVar2 + 0xd8);
    puVar10 = *(uchar **)(lVar2 + 0xd0);
    puVar11 = puVar10 + (longlong)iVar5 * 0x10;
    while( true ) {
      if (*(int *)(lVar2 + 0xd8) != iVar5) {
        local_158[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_158);
        FVar9 = local_140.SecondaryData;
      }
      if (puVar10 == puVar11) break;
      local_148 = *(FStreamableHandle **)puVar10;
      FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_140;
      if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
        FVar8 = FVar9;
      }
      if ((ulonglong)FVar8 <= &local_148) {
        FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_140;
        if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
          FVar8 = FVar9;
        }
        if (&local_148 < (FStreamableHandle **)((longlong)FVar8 + (longlong)local_34 * 8)) {
          local_170 = (longlong)local_38;
          local_168 = 8;
          local_180 = (ForElementType<FStreamableHandle_const_*>)&local_140;
          if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
            local_180 = FVar9;
          }
          local_188 = &local_148;
          local_178 = (longlong)local_34;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar9 = local_140.SecondaryData;
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<FStreamableDownloadCachePin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar7;
          }
        }
      }
      iVar6 = local_38;
      if (local_38 == local_34) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamableHandle_const_*>_>
                          (0x808,&local_140,&local_34);
        FVar9 = local_140.SecondaryData;
      }
      local_38 = iVar6 + 1;
      FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_140;
      if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
        FVar8 = FVar9;
      }
      puVar10 = puVar10 + 0x10;
      *(FStreamableHandle **)((longlong)FVar8 + (longlong)iVar6 * 8) = local_148;
      FVar9 = local_140.SecondaryData;
    }
    bVar4 = false;
    if (local_38 == 0) {
      if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
        FMemory::Free((void *)FVar9);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetDownloadPriority @ 14879db30

TOptional<short> __thiscall FStreamableHandle::GetDownloadPriority(FStreamableHandle *this)

{
  FDownloadContext *pFVar1;
  short *in_RDX;
  
  if (((this->bCanceled == false) && (this->bReleased == false)) &&
     (pFVar1 = (this->DownloadContext).Ptr, pFVar1 != (FDownloadContext *)0x0)) {
    *in_RDX = pFVar1->Priority;
    *(undefined1 *)(in_RDX + 1) = 1;
    return SUB84(in_RDX,0);
  }
  *(undefined1 *)(in_RDX + 1) = 0;
  return SUB84(in_RDX,0);
}

// GetLoadedAsset @ 1487a1050

UObject * __thiscall FStreamableHandle::GetLoadedAsset(FStreamableHandle *this)

{
  UObject *pUVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  pUVar1 = (UObject *)0x0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  ForEachLoadedAsset<_FStreamableHandle::GetLoadedAssets_::__l2::<lambda_1>_>
            (this,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&local_18);
  if (0 < (int)local_10) {
    pUVar1 = (UObject *)*local_18;
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return pUVar1;
}

// GetLoadedAssets @ 1487a10a0

void __thiscall
FStreamableHandle::GetLoadedAssets
          (FStreamableHandle *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FStreamableManager *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FStreamable *pFVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  FSoftObjectPath *pFVar10;
  FSoftObjectPath *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackX_8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  
  if (this->bLoadCompleted != false) {
    pFVar11 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
    iVar1 = (this->RequestedAssets).ArrayNum;
    pFVar10 = pFVar11 + iVar1;
    pTStackX_10 = param_1;
    while( true ) {
      if ((this->RequestedAssets).ArrayNum != iVar1) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_8);
      }
      if (pFVar11 == pFVar10) break;
      if ((this->bCanceled == false) && (this->bReleased == false)) {
        pFVar3 = this->OwningManager;
        bVar6 = IsInGameThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                               ,0x91a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar7 = FStreamableManager::FindStreamable(pFVar3,pFVar11);
        if ((pFVar7 == (FStreamable *)0x0) ||
           (pUVar8 = (pFVar7->Target).field0_0x0.DebugPtr, pUVar8 == (UObject *)0x0)) {
          pUVar8 = (UObject *)0x0;
        }
      }
      else {
        pUVar8 = FSoftObjectPath::ResolveObject(pFVar11);
      }
      `FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>::operator()(&pTStackX_10,pUVar8);
      pFVar11 = pFVar11 + 1;
    }
    uVar2 = (this->ChildHandles).ArrayNum;
    uVar9 = (ulonglong)(int)uVar2;
    pFVar13 = (this->ChildHandles).AllocatorInstance.Data;
    pFVar12 = pFVar13 + uVar9 * 0x10;
    while( true ) {
      if ((this->ChildHandles).ArrayNum != (int)uVar9) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_18);
      }
      if (pFVar13 == pFVar12) break;
      if ((*(longlong *)pFVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)pFVar13;
      iVar1 = *(int *)(lVar4 + 200);
      pFVar11 = *(FSoftObjectPath **)(lVar4 + 0xc0);
      pFVar10 = pFVar11 + iVar1;
      while( true ) {
        if (*(int *)(lVar4 + 200) != iVar1) {
          auStackX_20[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStackX_20);
        }
        if (pFVar11 == pFVar10) break;
        if ((this->bCanceled == false) && (this->bReleased == false)) {
          pFVar3 = this->OwningManager;
          bVar6 = IsInGameThread();
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                 ,0x91a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar7 = FStreamableManager::FindStreamable(pFVar3,pFVar11);
          if ((pFVar7 == (FStreamable *)0x0) ||
             (pUVar8 = (pFVar7->Target).field0_0x0.DebugPtr, pUVar8 == (UObject *)0x0)) {
            pUVar8 = (UObject *)0x0;
          }
        }
        else {
          pUVar8 = FSoftObjectPath::ResolveObject(pFVar11);
        }
        `FStreamableHandle::GetLoadedAssets'::__l2::<lambda_1>::operator()(&pTStackX_10,pUVar8);
        pFVar11 = pFVar11 + 1;
      }
      uVar9 = (ulonglong)uVar2;
      pFVar13 = pFVar13 + 0x10;
    }
  }
  return;
}

// GetLoadedCount @ 1487a10b0

void __thiscall FStreamableHandle::GetLoadedCount(FStreamableHandle *this,int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  iVar1 = (this->RequestedAssets).ArrayNum;
  *param_2 = iVar1;
  *param_1 = iVar1 - this->StreamablesLoading;
  iVar1 = (this->ChildHandles).ArrayNum;
  pFVar4 = (this->ChildHandles).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ChildHandles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    local_res18[0] = 0;
    local_res10[0] = 0;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    GetLoadedCount(*(FStreamableHandle **)pFVar4,local_res10,local_res18);
    *param_1 = *param_1 + local_res10[0];
    *param_2 = *param_2 + local_res18[0];
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// GetOutermostHandle @ 1487a2490

TSharedPtr<FStreamableHandle,1> * __thiscall
FStreamableHandle::GetOutermostHandle
          (FStreamableHandle *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FStreamableHandle *pFVar2;
  FWeakReferencer<1> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  int iVar9;
  TSharedPtr<FStreamableHandle,1> *pTVar10;
  ulonglong uVar11;
  TSharedRef<FStreamableHandle,1> *pTVar12;
  int iVar13;
  FStreamableHandle *pFVar14;
  FStreamableHandle *pFVar15;
  ForAnyElementType FVar16;
  TWeakPtr<FStreamableHandle,1> *pTVar17;
  FStreamableHandle *this_00;
  bool bVar18;
  undefined1 local_res8 [8];
  TSharedPtr<FStreamableHandle,1> *local_res10;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> local_58;
  TSharedRef<FStreamableHandle,1> local_48;
  
  iVar13 = (this->ParentHandles).ArrayNum;
  local_res10 = __return_storage_ptr__;
  if (iVar13 == 0) {
    pTVar12 = TSharedFromThis<FStreamableHandle,1>::AsShared
                        ((TSharedFromThis<FStreamableHandle,1> *)this,&local_48);
    __return_storage_ptr__->Object = pTVar12->Object;
    pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  this_00 = (FStreamableHandle *)0x0;
  if (iVar13 != 1) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::operator=
              (&local_58,&this->ParentHandles);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
LAB_1487a2590:
    iVar13 = local_58.ArrayNum;
    uVar11 = (ulonglong)local_58.ArrayNum;
    pTVar17 = (TWeakPtr<FStreamableHandle,1> *)(local_58.AllocatorInstance.Data + uVar11 * 0x10);
    FVar16.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      iVar8 = (int)uVar11;
      if ((int)uVar11 != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
        iVar8 = local_58.ArrayNum;
      }
      if ((TWeakPtr<FStreamableHandle,1> *)FVar16.Data == pTVar17) break;
      pFVar14 = (FStreamableHandle *)
                (((TWeakPtr<FStreamableHandle,1> *)FVar16.Data)->WeakReferenceCount).
                ReferenceController;
      pFVar15 = pFVar14;
      if (pFVar14 == (FStreamableHandle *)0x0) {
LAB_1487a25e4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        uVar11 = local_58._8_8_ & 0xffffffff;
        FVar16.Data = FVar16.Data + 0x10;
      }
      else {
        aVar6 = *(atomic<int> *)&pFVar14->_padding_;
        do {
          pFVar15 = this_00;
          if (aVar6 == (atomic<int>)0x0) goto LAB_1487a25e4;
          LOCK();
          aVar7 = *(atomic<int> *)&pFVar14->_padding_;
          bVar18 = aVar6 == aVar7;
          if (bVar18) {
            *(atomic<int> *)&pFVar14->_padding_ = (atomic<int>)((int)aVar6 + 1);
            aVar7 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar7;
        } while (!bVar18);
        pFVar2 = ((TWeakPtr<FStreamableHandle,1> *)FVar16.Data)->Object;
        pFVar15 = pFVar14;
        if (pFVar2 == (FStreamableHandle *)0x0) goto LAB_1487a25e4;
        if (((TArray<TWeakPtr<FStreamableHandle,1>,TSizedDefaultAllocator<32>_> *)&local_68 ==
             &pFVar2->ParentHandles) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar18)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
          return pTVar10;
        }
        iVar8 = (pFVar2->ParentHandles).ArrayNum;
        if (iVar8 == 0) goto LAB_1487a25e4;
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar8,&local_68,(int *)&local_60,(int *)((longlong)&local_60 + 4))
        ;
        ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int>
                  (local_68.Data + (longlong)iVar9 * 0x10,
                   (TWeakPtr<FStreamableHandle,1> *)(pFVar2->ParentHandles).AllocatorInstance.Data,
                   iVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        uVar11 = local_58._8_8_ & 0xffffffff;
        FVar16.Data = FVar16.Data + 0x10;
      }
    }
    if (0 < (int)local_60) {
      DestructItems<TWeakPtr<FStreamableHandle,1>,int>
                ((TWeakPtr<FStreamableHandle,1> *)local_58.AllocatorInstance.Data,iVar8);
      FVar16.Data = local_68.Data;
      iVar13 = (int)local_60;
      local_58.ArrayNum = (int)local_60;
      if (((int)local_60 == 0) && (local_58.ArrayMax == 0)) {
        local_58._8_8_ = local_60 & 0xffffffff;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_60,local_58.ArrayMax,&local_58.AllocatorInstance,(int)local_60,
                   &local_58.ArrayMax);
        ConstructItems<TWeakPtr<FStreamableHandle,1>,TWeakPtr<FStreamableHandle,1>,int>
                  (local_58.AllocatorInstance.Data,(TWeakPtr<FStreamableHandle,1> *)FVar16.Data,
                   iVar13);
        iVar13 = (int)local_60;
      }
      if ((longlong)local_60 < 0) {
        DestructItems<TWeakPtr<FStreamableHandle,1>,int>
                  ((TWeakPtr<FStreamableHandle,1> *)local_68.Data,iVar13);
        uVar11 = local_60 >> 0x20;
        local_60 = local_60 & 0xffffffff00000000;
        if ((int)uVar11 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_68,0,(int *)((longlong)&local_60 + 4));
        }
      }
      else {
        DestructItems<TWeakPtr<FStreamableHandle,1>,int>
                  ((TWeakPtr<FStreamableHandle,1> *)local_68.Data,iVar13);
        local_60 = local_60 & 0xffffffff00000000;
      }
      goto LAB_1487a2590;
    }
    if ((iVar8 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
      return pTVar10;
    }
    pTVar10 = local_res10;
    local_res10->Object = (FStreamableHandle *)0x0;
    FVar3.ReferenceController =
         *(TReferenceControllerBase<1> **)(local_58.AllocatorInstance.Data + 8);
    (local_res10->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = (FVar3.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          (local_res10->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = (FVar3.ReferenceController)->SharedReferenceCount;
        bVar18 = aVar6 == aVar7;
        if (bVar18) {
          (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar18);
    }
    if ((local_res10->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      local_res10->Object = *(FStreamableHandle **)local_58.AllocatorInstance.Data;
    }
    DestructItems<TWeakPtr<FStreamableHandle,1>,int>
              ((TWeakPtr<FStreamableHandle,1> *)local_68.Data,(int)local_60);
    if ((TWeakPtr<FStreamableHandle,1> *)local_68.Data != (TWeakPtr<FStreamableHandle,1> *)0x0) {
      FMemory::Free(local_68.Data);
    }
    DestructItems<TWeakPtr<FStreamableHandle,1>,int>
              ((TWeakPtr<FStreamableHandle,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if ((TWeakPtr<FStreamableHandle,1> *)local_58.AllocatorInstance.Data ==
        (TWeakPtr<FStreamableHandle,1> *)0x0) {
      return pTVar10;
    }
    FMemory::Free(local_58.AllocatorInstance.Data);
    return pTVar10;
  }
  pFVar1 = (this->ParentHandles).AllocatorInstance.Data;
  pFVar14 = *(FStreamableHandle **)(pFVar1 + 8);
  pFVar15 = pFVar14;
  if (pFVar14 != (FStreamableHandle *)0x0) {
    aVar6 = *(atomic<int> *)&pFVar14->_padding_;
    do {
      pFVar15 = this_00;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1487a24f4;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar14->_padding_;
      bVar18 = aVar6 == aVar7;
      if (bVar18) {
        *(atomic<int> *)&pFVar14->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar18);
    this_00 = *(FStreamableHandle **)pFVar1;
    pFVar15 = pFVar14;
    if (this_00 != (FStreamableHandle *)0x0) goto LAB_1487a251a;
  }
LAB_1487a24f4:
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar14 = pFVar15;
  if (bVar18) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
    return pTVar10;
  }
LAB_1487a251a:
  GetOutermostHandle(this_00,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return __return_storage_ptr__;
}

// GetOwningManager @ 1487a2860

FStreamableManager * __thiscall FStreamableHandle::GetOwningManager(FStreamableHandle *this)

{
  code *pcVar1;
  bool bVar2;
  FStreamableManager *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,899,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStreamableManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->bCanceled == false) && (this->bReleased == false)) {
    return this->OwningManager;
  }
  return (FStreamableManager *)0x0;
}

// GetProgress @ 1487a2c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FStreamableHandle::GetProgress(FStreamableHandle *this,EStreamableProgressType param_1)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<FStreamableHandle_const_*> FVar8;
  ForElementType<FStreamableHandle_const_*> FVar9;
  FScriptContainerElement *pFVar10;
  uchar *puVar11;
  int iVar12;
  uchar *puVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_1e8 [32];
  FStreamableHandle **local_1c8;
  ForElementType<FStreamableHandle_const_*> local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined1 local_197 [3];
  int local_194;
  int local_190 [2];
  undefined1 local_188 [8];
  FStreamableHandle *local_180;
  ForElementType<FStreamableHandle_const_*> local_178;
  int local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (param_1 == Load) {
    fVar19 = __real_3f800000;
    if (this->bLoadCompleted == false) {
      iVar6 = (this->ChildHandles).ArrayNum;
      iVar14 = (this->RequestedAssets).ArrayNum;
      pFVar10 = (this->ChildHandles).AllocatorInstance.Data;
      iVar12 = iVar14 - this->StreamablesLoading;
      pFVar15 = pFVar10 + (longlong)iVar6 * 0x10;
      while( true ) {
        if ((this->ChildHandles).ArrayNum != iVar6) {
          local_198 = 0;
          `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_198);
        }
        if (pFVar10 == pFVar15) break;
        local_190[0] = 0;
        local_194 = 0;
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar16 = (float)(*pcVar3)();
          return fVar16;
        }
        GetLoadedCount(*(FStreamableHandle **)pFVar10,&local_194,local_190);
        iVar12 = iVar12 + local_194;
        iVar14 = iVar14 + local_190[0];
        pFVar10 = pFVar10 + 0x10;
      }
      fVar19 = (float)iVar12 / (float)iVar14;
    }
  }
  else {
    iVar14 = 0;
    local_178.SecondaryData = (ForElementType<FStreamableHandle_const_*>)0x0;
    local_70 = 0;
    local_6c = 0x20;
    fVar16 = 0.0;
    iVar6 = 0;
    local_188 = (undefined1  [8])this;
    if ((&local_178 <= (ForElementType<FStreamableHandle_const_*> *)local_188) &&
       (local_188 < &local_178.SecondaryData)) {
      local_1a8 = 8;
      local_1c0 = (ForElementType<FStreamableHandle_const_*>)&local_178;
      local_1b0 = 0;
      local_1b8 = 0x20;
      local_1c8 = (FStreamableHandle **)local_188;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar16 = (float)(*pcVar3)();
        return fVar16;
      }
      iVar6 = local_70;
      if (local_70 == local_6c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamableHandle_const_*>_>
                          (0x808,&local_178,&local_6c);
      }
    }
    dVar4 = __real_3ff0000000000000;
    local_70 = iVar6 + 1;
    FVar9 = (ForElementType<FStreamableHandle_const_*>)&local_178;
    if (local_178.SecondaryData != (ForElementType<FStreamableHandle_const_*>)0x0) {
      FVar9 = local_178.SecondaryData;
    }
    *(undefined1 (*) [8])((longlong)FVar9 + (longlong)iVar6 * 8) = local_188;
    bVar5 = local_70 == 0;
    FVar9 = local_178.SecondaryData;
    do {
      if (bVar5 || local_70 < 0) {
        local_1c0 = (ForElementType<FStreamableHandle_const_*>)(longlong)local_70;
        local_1c8 = (FStreamableHandle **)0x0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar9 = local_178.SecondaryData;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          fVar16 = (float)(*pcVar3)();
          return fVar16;
        }
      }
      iVar6 = local_70 + -1;
      FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_178;
      if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
        FVar8 = FVar9;
      }
      lVar1 = *(longlong *)((longlong)FVar8 + (longlong)iVar6 * 8);
      FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_178;
      if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
        FVar8 = FVar9;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 8);
      iVar6 = (local_70 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
        FVar9 = local_178.SecondaryData;
      }
      local_70 = local_70 + -1;
      lVar2 = *(longlong *)(lVar1 + 0xa8);
      if (lVar2 != 0) {
        iVar14 = iVar14 + 1;
        if (param_1 == DownloadRelative) {
          uVar7 = *(ulonglong *)(lVar2 + 0x30);
          if (uVar7 == 0) {
LAB_1487a301f:
            dVar18 = 0.0;
          }
          else {
            dVar17 = (double)*(ulonglong *)(lVar2 + 0x38);
            if ((longlong)uVar7 < 0) {
              uVar7 = uVar7 >> 1 | (ulonglong)((uint)uVar7 & 1);
LAB_1487a3007:
              dVar18 = dVar17 / ((double)uVar7 + (double)uVar7);
              if (dVar4 <= dVar18) {
                dVar18 = dVar4;
              }
              if (dVar18 <= 0.0) {
                dVar18 = 0.0;
              }
            }
            else {
              dVar18 = dVar17 / (double)(longlong)uVar7;
              if (dVar4 <= dVar17 / (double)(longlong)uVar7) {
                dVar18 = dVar4;
              }
              if (dVar18 <= 0.0) {
                dVar18 = 0.0;
              }
            }
          }
        }
        else {
          uVar7 = *(ulonglong *)(lVar2 + 0x28);
          if (uVar7 == 0) goto LAB_1487a301f;
          dVar17 = (double)((*(longlong *)(lVar2 + 0x38) - *(longlong *)(lVar2 + 0x30)) + uVar7);
          if ((longlong)uVar7 < 0) {
            uVar7 = uVar7 >> 1 | (ulonglong)((uint)uVar7 & 1);
            goto LAB_1487a3007;
          }
          dVar18 = dVar17 / (double)(longlong)uVar7;
          if (dVar4 <= dVar17 / (double)(longlong)uVar7) {
            dVar18 = dVar4;
          }
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
        }
        fVar16 = fVar16 + (float)dVar18;
      }
      iVar6 = *(int *)(lVar1 + 0xd8);
      puVar11 = *(uchar **)(lVar1 + 0xd0);
      puVar13 = puVar11 + (longlong)iVar6 * 0x10;
      while( true ) {
        if (*(int *)(lVar1 + 0xd8) != iVar6) {
          local_197[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_197);
          FVar9 = local_178.SecondaryData;
        }
        if (puVar11 == puVar13) break;
        local_180 = *(FStreamableHandle **)puVar11;
        FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_178;
        if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
          FVar8 = FVar9;
        }
        if ((ulonglong)FVar8 <= &local_180) {
          FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_178;
          if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
            FVar8 = FVar9;
          }
          if (&local_180 < (FStreamableHandle **)((longlong)FVar8 + (longlong)local_6c * 8)) {
            local_1b0 = (longlong)local_70;
            local_1a8 = 8;
            local_1c8 = &local_180;
            local_1c0 = (ForElementType<FStreamableHandle_const_*>)&local_178;
            if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
              local_1c0 = FVar9;
            }
            local_1b8 = (longlong)local_6c;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            FVar9 = local_178.SecondaryData;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              fVar16 = (float)(*pcVar3)();
              return fVar16;
            }
          }
        }
        iVar12 = local_70;
        if (local_70 == local_6c) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamableHandle_const_*>_>
                             (0x808,&local_178,&local_6c);
          FVar9 = local_178.SecondaryData;
        }
        local_70 = iVar12 + 1;
        FVar8 = (ForElementType<FStreamableHandle_const_*>)&local_178;
        if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
          FVar8 = FVar9;
        }
        puVar11 = puVar11 + 0x10;
        *(FStreamableHandle **)((longlong)FVar8 + (longlong)iVar12 * 8) = local_180;
        FVar9 = local_178.SecondaryData;
      }
      bVar5 = local_70 == 0;
    } while (!bVar5);
    fVar19 = __real_3f800000;
    if (0 < iVar14) {
      fVar19 = fVar16 / (float)iVar14;
    }
    if (FVar9 != (ForElementType<FStreamableHandle_const_*>)0x0) {
      FMemory::Free((void *)FVar9);
    }
  }
  return fVar19;
}

// GetRequestedAssets @ 1487a3f80

void __thiscall
FStreamableHandle::GetRequestedAssets
          (FStreamableHandle *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FSoftObjectPath *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_48;
  
  if (param_1 != &this->RequestedAssets) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->RequestedAssets).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar7 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                ((param_1->AllocatorInstance).Data,pFVar7,iVar2);
    }
  }
  if (param_2) {
    iVar2 = (this->ChildHandles).ArrayNum;
    pFVar9 = (this->ChildHandles).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->ChildHandles).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar8) break;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GetRequestedAssets(*(FStreamableHandle **)pFVar9,&local_48,true);
      iVar4 = local_48.ArrayNum;
      pFVar7 = (FSoftObjectPath *)
               (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x20);
      FVar6.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if (local_48.ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if ((FSoftObjectPath *)FVar6.Data == pFVar7) break;
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (param_1,(FSoftObjectPath *)FVar6.Data);
        FVar6.Data = FVar6.Data + 0x20;
      }
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if ((FSoftObjectPath *)local_48.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  return;
}

// HasCancelDelegate @ 1487ab1b0

bool __thiscall FStreamableHandle::HasCancelDelegate(FStreamableHandle *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate,
             &local_28);
  if ((*(int *)&(this->CancelDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CancelDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// HasCompleteDelegate @ 1487ab210

bool __thiscall FStreamableHandle::HasCompleteDelegate(FStreamableHandle *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate,
             &local_28);
  if ((*(int *)&(this->CompleteDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CompleteDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// HasLoadCompletedOrStalled @ 1487ab2c0

bool __thiscall FStreamableHandle::HasLoadCompletedOrStalled(FStreamableHandle *this)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (((this->bIsCombinedHandle != false) || (this->bLoadCompleted != false)) ||
     (this->bStalled != false)) {
    iVar1 = (this->ChildHandles).ArrayNum;
    pFVar3 = (this->ChildHandles).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ChildHandles).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) {
        return true;
      }
      if ((*(FStreamableHandle **)pFVar3 != (FStreamableHandle *)0x0) &&
         (bVar2 = HasLoadCompletedOrStalled(*(FStreamableHandle **)pFVar3), !bVar2)) break;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return false;
}

// HasUpdateDelegate @ 1487ab530

bool __thiscall FStreamableHandle::HasUpdateDelegate(FStreamableHandle *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate,
             &local_28);
  if ((*(int *)&(this->UpdateDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->UpdateDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsHandleNameEmptyOrDefault @ 1487aef60

bool __thiscall FStreamableHandle::IsHandleNameEmptyOrDefault(FStreamableHandle *this)

{
  FString *this_00;
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res8;
  FString local_18;
  
  bVar6 = false;
  this_00 = &this->DebugName;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (1 < (this->DebugName).Data.ArrayNum) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar4 = ::FName::ToString(&local_res8,&local_18);
    iVar3 = (this->DebugName).Data.ArrayNum;
    iVar1 = (pFVar4->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        bVar6 = true;
        goto LAB_1487aefcf;
      }
      iVar3 = wcscmp((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar1 == 1;
    }
    bVar6 = true;
    if (!bVar5) {
      bVar5 = false;
      goto LAB_1487aefd2;
    }
  }
LAB_1487aefcf:
  bVar5 = true;
LAB_1487aefd2:
  if ((bVar6) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    iVar3 = (this->DebugName).Data.ArrayNum;
    if (iVar3 == HandleDebugName_AssetList.Data.ArrayNum) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                         (wchar_t *)HandleDebugName_AssetList.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + HandleDebugName_AssetList.Data.ArrayNum == 1;
    }
    if (!bVar6) {
      iVar3 = (this->DebugName).Data.ArrayNum;
      if (iVar3 == HandleDebugName_CombinedHandle.Data.ArrayNum) {
        if (iVar3 < 2) {
          return true;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this_00->Data).AllocatorInstance.Data,
                           (wchar_t *)HandleDebugName_CombinedHandle.Data.AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar3 + HandleDebugName_CombinedHandle.Data.ArrayNum == 1;
      }
      if (!bVar6) {
        iVar3 = HandleDebugName_Preloading.Data.ArrayNum + -1;
        FVar2.Data = HandleDebugName_Preloading.Data.AllocatorInstance.Data;
        if (HandleDebugName_Preloading.Data.ArrayNum == 0) {
          iVar3 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        bVar6 = ::FString::StartsWith(this_00,(wchar_t *)FVar2.Data,iVar3,IgnoreCase);
        if (!bVar6) {
          return false;
        }
      }
    }
  }
  return true;
}

// NotifyParentsOfCancellation @ 1487b09a0

void __thiscall FStreamableHandle::NotifyParentsOfCancellation(FStreamableHandle *this)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ParentHandles).ArrayNum;
  pFVar6 = (this->ParentHandles).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->ParentHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) {
        return;
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) break;
LAB_1487b0a10:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar6 = pFVar6 + 0x10;
    }
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1487b0a10;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    if (*(longlong *)pFVar6 == 0) goto LAB_1487b0a10;
    piVar1 = (int *)(*(longlong *)pFVar6 + 0xbc);
    *piVar1 = *piVar1 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// NotifyParentsOfCompletion @ 1487b0a60

void __thiscall FStreamableHandle::NotifyParentsOfCompletion(FStreamableHandle *this)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ParentHandles).ArrayNum;
  pFVar6 = (this->ParentHandles).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->ParentHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) {
        return;
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) break;
LAB_1487b0ad0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar6 = pFVar6 + 0x10;
    }
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1487b0ad0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    if (*(longlong *)pFVar6 == 0) goto LAB_1487b0ad0;
    piVar1 = (int *)(*(longlong *)pFVar6 + 0xb8);
    *piVar1 = *piVar1 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// ReleaseHandle @ 1487b7010

void __thiscall FStreamableHandle::ReleaseHandle(FStreamableHandle *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FStreamableManager *this_00;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TWeakPtr<FStreamableHandle,1> *this_01;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  int iVar12;
  FSoftObjectPath *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  FSoftObjectPath *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TWeakPtr<FStreamableHandle,1> local_78;
  TSharedRef<FStreamableHandle,1> local_68;
  TSharedRef<FStreamableHandle,1> local_58;
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x3e0,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->bReleased == false) && (this->bCanceled == false)) {
    if ((this->OwningManager == (FStreamableManager *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                           ,1000,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->bLoadCompleted != false) {
      this->bReleased = true;
      TSharedFromThis<FStreamableHandle,1>::AsShared
                ((TSharedFromThis<FStreamableHandle,1> *)this,&local_68);
      if (this->bLoadStarted != false) {
        iVar4 = (this->RequestedAssets).ArrayNum;
        pFVar13 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
        pFVar16 = pFVar13 + iVar4;
        while( true ) {
          if ((this->RequestedAssets).ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar13 == pFVar16) break;
          this_00 = this->OwningManager;
          local_58.Object = local_68.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FStreamableManager::RemoveReferencedAsset(this_00,pFVar13,&local_58);
          pFVar13 = pFVar13 + 1;
        }
      }
      TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                (&this->OwningManager->ManagedActiveHandles,&local_68);
      local_res18 = (this->ChildHandles).ArrayNum;
      uVar11 = (ulonglong)(int)local_res18;
      pFVar17 = (this->ChildHandles).AllocatorInstance.Data;
      pFVar14 = pFVar17 + uVar11 * 0x10;
      do {
        local_res20 = pFVar17;
        if ((this->ChildHandles).ArrayNum != (int)uVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar17 == pFVar14) {
          DestructItems<TSharedPtr<FStreamableHandle,1>,int>
                    ((TSharedPtr<FStreamableHandle,1> *)(this->ChildHandles).AllocatorInstance.Data,
                     (this->ChildHandles).ArrayNum);
          piVar2 = &(this->ChildHandles).ArrayMax;
          (this->ChildHandles).ArrayNum = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->ChildHandles).AllocatorInstance,0,piVar2);
          }
          this->CompletedChildCount = 0;
          this->CanceledChildCount = 0;
          this->OwningManager = (FStreamableManager *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          return;
        }
        pTVar5 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
        lVar6 = *(longlong *)pFVar17;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar6 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_78.Object = local_68.Object;
        local_78.WeakReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        if (((*(TWeakPtr<FStreamableHandle,1> **)(lVar6 + 0xe0) <= &local_78) &&
            (&local_78 < *(TWeakPtr<FStreamableHandle,1> **)(lVar6 + 0xe0) + *(int *)(lVar6 + 0xec))
            ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar4 = *(int *)(lVar6 + 0xe8);
        if (iVar4 != 0) {
          this_01 = *(TWeakPtr<FStreamableHandle,1> **)(lVar6 + 0xe0);
          iVar18 = 0;
          bVar9 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>(this_01,&local_78);
          bVar9 = !bVar9;
          iVar12 = 0;
          do {
            iVar8 = iVar12;
            do {
              iVar8 = iVar8 + 1;
              if (iVar4 <= iVar8) break;
              bVar10 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
                                 (this_01 + iVar8,&local_78);
            } while (bVar9 == !bVar10);
            iVar15 = iVar8 - iVar12;
            if (bVar9 == false) {
              DestructItems<TWeakPtr<FStreamableHandle,1>,int>(this_01 + iVar12,iVar15);
            }
            else {
              if (iVar18 != iVar12) {
                memmove(this_01 + iVar18,this_01 + iVar12,(longlong)iVar15 << 4);
              }
              iVar18 = iVar18 + iVar15;
            }
            bVar9 = (bool)(bVar9 ^ 1);
            iVar12 = iVar8;
          } while (iVar8 < iVar4);
          *(int *)(lVar6 + 0xe8) = iVar18;
          pFVar17 = local_res20;
        }
        if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_78.WeakReferenceCount.ReferenceController,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        uVar11 = (ulonglong)local_res18;
        pFVar17 = pFVar17 + 0x10;
      } while( true );
    }
    this->bReleaseWhenLoaded = true;
  }
  return;
}

// SetDebugNameIfEmptyOrDefault @ 1487c1a20

void __thiscall
FStreamableHandle::SetDebugNameIfEmptyOrDefault(FStreamableHandle *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = IsHandleNameEmptyOrDefault(this);
  if (bVar1) {
    ::FString::operator=(&this->DebugName,param_1);
  }
  return;
}

// SetDownloadPriority @ 1487c1a70

bool __thiscall FStreamableHandle::SetDownloadPriority(FStreamableHandle *this,short param_1)

{
  FDownloadContext *pFVar1;
  
  if (((this->bCanceled == false) && (this->bReleased == false)) &&
     (pFVar1 = (this->DownloadContext).Ptr, pFVar1 != (FDownloadContext *)0x0)) {
    pFVar1->Priority = param_1;
    pFVar1 = (this->DownloadContext).Ptr;
    UE::IoStore::FOnDemandInstallRequest::UpdatePriority
              (&pFVar1->InstallRequest,(int)pFVar1->Priority);
    return true;
  }
  return false;
}

// SetError @ 1487c1ac0

void __thiscall FStreamableHandle::SetError(FStreamableHandle *this,FError *param_1)

{
  FDynamicErrorDetails *pFVar1;
  longlong *plVar2;
  TOptional<UE::UnifiedError::FError> *this_00;
  int iVar3;
  IErrorDetails *pIVar4;
  FScriptContainerElement *_Src;
  FSoftObjectPath *pFVar5;
  code *pcVar6;
  bool bVar7;
  FDynamicErrorDetails *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FDynamicErrorDetails *local_res20;
  undefined8 local_58;
  FDynamicErrorDetails local_50;
  
  if ((this->Error).bIsSet == false) {
    this_00 = &this->Error;
    if ((TOptional<UE::UnifiedError::FError> *)param_1 != this_00) {
      (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (this_00->TypedValue).ErrorCode = param_1->ErrorCode;
      (this->Error).TypedValue.ModuleId = param_1->ModuleId;
      pIVar4 = (param_1->ErrorDetails).Reference;
      if (pIVar4 != (IErrorDetails *)0x0) {
        (this->Error).TypedValue.ErrorDetails.Reference = pIVar4;
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      }
      (this->Error).bIsSet = true;
    }
    iVar3 = (this->DebugName).Data.ArrayNum;
    _Src = (this->DebugName).Data.AllocatorInstance.Data;
    local_50._padding_ = 0;
    local_50._padding_ = CONCAT44(local_50._padding_._4_4_,iVar3);
    if (iVar3 == 0) {
      local_50._padding_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)&local_50,iVar3,
                 (int *)((longlong)&local_50._padding_ + 4));
      memcpy((void *)local_50._padding_,_Src,(longlong)iVar3 * 2);
    }
    iVar3 = (this->RequestedAssets).ArrayNum;
    pFVar5 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
    local_50._padding_ = 0;
    local_50.InnerErrorDetails.Reference._0_4_ = iVar3;
    if (iVar3 == 0) {
      local_50.InnerErrorDetails.Reference = (IErrorDetails *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,0,(ForAnyElementType *)&local_50._padding_,iVar3,
                 (int *)((longlong)&local_50.InnerErrorDetails.Reference + 4));
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>((void *)local_50._padding_,pFVar5,iVar3);
    }
    if ((this->Error).bIsSet == false) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    this_01 = ::operator_new(0x48);
    if (this_01 == (FDynamicErrorDetails *)0x0) {
      local_res20 = (FDynamicErrorDetails *)0x0;
    }
    else {
      local_58 = 0;
      UE::UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                (this_01,(IErrorDetails *)&local_58);
      pFVar1 = this_01 + 1;
      this_01->_padding_ =
           (longlong)
           &UE::UnifiedError::
            TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
            _vftable__for__UE__UnifiedError__IErrorDetails__;
      plVar2 = &this_01[1]._padding_;
      pFVar1->_padding_ = 0;
      this_01->_padding_ =
           (longlong)
           &UE::UnifiedError::
            TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
            _vftable__for__FRefCountBase__;
      this_01[1]._padding_ = 0;
      *plVar2 = 0;
      this_01[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
      *(undefined1 *)&this_01[2]._padding_ = 5;
      if (pFVar1 != &local_50) {
        pFVar1->_padding_ = local_50._padding_;
        local_50._padding_ = 0;
        *(undefined4 *)&this_01[1]._padding_ = (undefined4)local_50._padding_;
        *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = local_50._padding_._4_4_;
        local_50._padding_ = 0;
      }
      if (plVar2 != &local_50._padding_) {
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)*plVar2,*(int *)&this_01[1].InnerErrorDetails.Reference);
        if ((void *)*plVar2 != (void *)0x0) {
          FMemory::Free((void *)*plVar2);
        }
        *plVar2 = local_50._padding_;
        local_50._padding_ = 0;
        *(int *)&this_01[1].InnerErrorDetails.Reference = (int)local_50.InnerErrorDetails.Reference;
        *(undefined4 *)((longlong)&this_01[1].InnerErrorDetails.Reference + 4) =
             local_50.InnerErrorDetails.Reference._4_4_;
        local_50.InnerErrorDetails.Reference = (IErrorDetails *)0x0;
      }
      *(undefined1 *)&this_01[2]._padding_ = 5;
      local_res20 = this_01;
      (**(code **)(this_01->_padding_ + 8))(this_01,local_res18);
    }
    UE::UnifiedError::FError::PushErrorDetails(&this_00->TypedValue,(IErrorDetails *)&local_res20);
    if ((this->Error).bIsSet == false) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    SetErrorOnParents(this,&(this->Error).TypedValue);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_50._padding_,(int)local_50.InnerErrorDetails.Reference);
    if ((FSoftObjectPath *)local_50._padding_ != (FSoftObjectPath *)0x0) {
      FMemory::Free((void *)local_50._padding_);
    }
    if ((void *)local_50._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_50._padding_);
    }
  }
  return;
}

// SetErrorOnParents @ 1487c1d70

void __thiscall FStreamableHandle::SetErrorOnParents(FStreamableHandle *this,FError *param_1)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ParentHandles).ArrayNum;
  pFVar6 = (this->ParentHandles).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->ParentHandles).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar5) {
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) break;
LAB_1487c1de0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar6 = pFVar6 + 0x10;
    }
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1487c1de0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    if (*(FStreamableHandle **)pFVar6 == (FStreamableHandle *)0x0) goto LAB_1487c1de0;
    SetError(*(FStreamableHandle **)pFVar6,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// StartStalledHandle @ 1487c4eb0

void __thiscall FStreamableHandle::StartStalledHandle(FStreamableHandle *this)

{
  FStreamableManager *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<FStreamableHandle,1> *pTVar3;
  TSharedRef<FStreamableHandle,1> local_18;
  
  if (((this->bStalled != false) && (this->bCanceled == false)) && (this->bReleased == false)) {
    if (this->OwningManager == (FStreamableManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x417,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = this->OwningManager;
    this->bStalled = false;
    pTVar3 = TSharedFromThis<FStreamableHandle,1>::AsShared
                       ((TSharedFromThis<FStreamableHandle,1> *)this,&local_18);
    FStreamableManager::StartHandleRequests(this_00,pTVar3);
  }
  return;
}

// UnbindDelegates @ 1487cad80

void __thiscall FStreamableHandle::UnbindDelegates(FStreamableHandle *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompleteDelegate);
  return;
}

// UpdateCombinedHandle @ 1487cd3e0

void __thiscall FStreamableHandle::UpdateCombinedHandle(FStreamableHandle *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  uint uVar5;
  FStreamableManager *pFVar6;
  longlong lVar7;
  TWeakPtr<FStreamableHandle,1> *this_00;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  TSharedRef<FStreamableHandle,1> *pTVar12;
  ulonglong uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FSoftObjectPath *pFVar16;
  int iVar17;
  FSoftObjectPath *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TWeakPtr<FStreamableHandle,1> local_c8;
  FScriptContainerElement *local_b8;
  TSharedRef<FStreamableHandle,1> local_a8;
  longlong local_98;
  TReferenceControllerBase<1> *local_90;
  FScriptContainerElement *local_88;
  TSharedRef<FStreamableHandle,1> local_80;
  TSharedRef<FStreamableHandle,1> local_70;
  TSharedRef<FStreamableHandle,1> local_58;
  
  if ((this->bCanceled == false) && (this->bReleased == false)) {
    if (this->bIsCombinedHandle == false) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6594131278881096846>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                          ,0x48e,"IsCombinedHandle()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      iVar4 = (this->ChildHandles).ArrayNum;
      if (iVar4 <= this->CanceledChildCount + this->CompletedChildCount) {
        pFVar15 = (this->ChildHandles).AllocatorInstance.Data;
        bVar11 = true;
        bVar10 = true;
        pFVar20 = pFVar15 + (longlong)iVar4 * 0x10;
        while( true ) {
          if ((this->ChildHandles).ArrayNum != iVar4) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar15 == pFVar20) break;
          if (bVar11) {
            if ((*(longlong *)pFVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(char *)(*(longlong *)pFVar15 + 0x109) == '\0') &&
               (*(char *)(*(longlong *)pFVar15 + 0x10b) == '\0')) goto LAB_1487cd51c;
            bVar11 = true;
          }
          else {
LAB_1487cd51c:
            bVar11 = false;
          }
          if (bVar10) {
            if ((*(longlong *)pFVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(char *)(*(longlong *)pFVar15 + 0x10b) == '\0') goto LAB_1487cd561;
            bVar10 = true;
          }
          else {
LAB_1487cd561:
            bVar10 = false;
          }
          if ((!bVar11) && (!bVar10)) {
            return;
          }
          pFVar15 = pFVar15 + 0x10;
        }
        if (bVar10) {
          pFVar6 = this->OwningManager;
          if (pFVar6 != (FStreamableManager *)0x0) {
            pTVar12 = TSharedFromThis<FStreamableHandle,1>::AsShared
                                ((TSharedFromThis<FStreamableHandle,1> *)this,&local_80);
            TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                      (&pFVar6->PendingCombinedHandles,pTVar12);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80.SharedReferenceCount.ReferenceController);
          }
          CancelHandle(this);
        }
        else if (bVar11) {
          pFVar6 = this->OwningManager;
          if (pFVar6 != (FStreamableManager *)0x0) {
            pTVar12 = TSharedFromThis<FStreamableHandle,1>::AsShared
                                ((TSharedFromThis<FStreamableHandle,1> *)this,&local_70);
            TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                      (&pFVar6->PendingCombinedHandles,pTVar12);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.SharedReferenceCount.ReferenceController);
          }
          CompleteLoad(this);
          if (this->bReleaseWhenLoaded != false) {
            bVar10 = IsInGameThread();
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsInGameThread()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                    ,0x3e0,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((this->bReleased == false) && (this->bCanceled == false)) {
              if ((this->OwningManager == (FStreamableManager *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("OwningManager",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                      ,1000,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (this->bLoadCompleted == false) {
                this->bReleaseWhenLoaded = true;
              }
              else {
                this->bReleased = true;
                TSharedFromThis<FStreamableHandle,1>::AsShared
                          ((TSharedFromThis<FStreamableHandle,1> *)this,&local_a8);
                if (this->bLoadStarted != false) {
                  iVar4 = (this->RequestedAssets).ArrayNum;
                  pFVar16 = (FSoftObjectPath *)(this->RequestedAssets).AllocatorInstance.Data;
                  pFVar18 = pFVar16 + iVar4;
                  while( true ) {
                    if ((this->RequestedAssets).ArrayNum != iVar4) {
                      local_res18[0] = 0;
                      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>
                      ::operator()(local_res18);
                    }
                    if (pFVar16 == pFVar18) break;
                    pFVar6 = this->OwningManager;
                    local_58.Object = local_a8.Object;
                    local_58.SharedReferenceCount.ReferenceController =
                         local_a8.SharedReferenceCount.ReferenceController;
                    if (local_a8.SharedReferenceCount.ReferenceController !=
                        (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    FStreamableManager::RemoveReferencedAsset(pFVar6,pFVar16,&local_58);
                    pFVar16 = pFVar16 + 1;
                  }
                }
                TArray<TSharedRef<FStreamableHandle,1>,TSizedDefaultAllocator<32>_>::Remove
                          (&this->OwningManager->ManagedActiveHandles,&local_a8);
                uVar5 = (this->ChildHandles).ArrayNum;
                uVar13 = (ulonglong)(int)uVar5;
                pFVar15 = (this->ChildHandles).AllocatorInstance.Data;
                local_88 = pFVar15 + uVar13 * 0x10;
                while( true ) {
                  pFVar20 = local_88;
                  local_b8 = pFVar15;
                  if ((this->ChildHandles).ArrayNum != (int)uVar13) {
                    local_res20[0] = 0;
                    `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(local_res20);
                  }
                  if (pFVar15 == pFVar20) break;
                  pTVar21 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
                  lVar7 = *(longlong *)pFVar15;
                  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar21->SharedReferenceCount =
                         (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_98 = lVar7;
                  local_90 = pTVar21;
                  if ((lVar7 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_c8.Object = local_a8.Object;
                  local_c8.WeakReferenceCount.ReferenceController =
                       local_a8.SharedReferenceCount.ReferenceController;
                  if (local_a8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                         (atomic<int>)
                         ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                               WeakReferenceCount + 1);
                    UNLOCK();
                  }
                  if (((*(TWeakPtr<FStreamableHandle,1> **)(lVar7 + 0xe0) <= &local_c8) &&
                      (&local_c8 <
                       *(TWeakPtr<FStreamableHandle,1> **)(lVar7 + 0xe0) + *(int *)(lVar7 + 0xec)))
                     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar4 = *(int *)(lVar7 + 0xe8);
                  if (iVar4 != 0) {
                    this_00 = *(TWeakPtr<FStreamableHandle,1> **)(lVar7 + 0xe0);
                    iVar19 = 0;
                    bVar10 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
                                       (this_00,&local_c8);
                    bVar10 = !bVar10;
                    iVar14 = 0;
                    do {
                      iVar9 = iVar14;
                      do {
                        iVar9 = iVar9 + 1;
                        if (iVar4 <= iVar9) break;
                        bVar11 = TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
                                           (this_00 + iVar9,&local_c8);
                      } while (bVar10 == !bVar11);
                      iVar17 = iVar9 - iVar14;
                      if (bVar10 == false) {
                        DestructItems<TWeakPtr<FStreamableHandle,1>,int>(this_00 + iVar14,iVar17);
                      }
                      else {
                        if (iVar19 != iVar14) {
                          memmove(this_00 + iVar19,this_00 + iVar14,(longlong)iVar17 << 4);
                        }
                        iVar19 = iVar19 + iVar17;
                      }
                      bVar10 = (bool)(bVar10 ^ 1);
                      iVar14 = iVar9;
                    } while (iVar9 < iVar4);
                    *(int *)(local_98 + 0xe8) = iVar19;
                    pFVar15 = local_b8;
                    pTVar21 = local_90;
                  }
                  if (local_c8.WeakReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    paVar1 = &(local_c8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                    aVar3 = *paVar1;
                    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar3 == (atomic<int>)0x1) {
                      (**(code **)((local_c8.WeakReferenceCount.ReferenceController)->_padding_ + 8)
                      )(local_c8.WeakReferenceCount.ReferenceController,1);
                    }
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar21);
                  uVar13 = (ulonglong)uVar5;
                  pFVar15 = pFVar15 + 0x10;
                }
                DestructItems<TSharedPtr<FStreamableHandle,1>,int>
                          ((TSharedPtr<FStreamableHandle,1> *)
                           (this->ChildHandles).AllocatorInstance.Data,(this->ChildHandles).ArrayNum
                          );
                piVar2 = &(this->ChildHandles).ArrayMax;
                (this->ChildHandles).ArrayNum = 0;
                if (*piVar2 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,&(this->ChildHandles).AllocatorInstance,0,piVar2);
                }
                this->CompletedChildCount = 0;
                this->CanceledChildCount = 0;
                this->OwningManager = (FStreamableManager *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a8.SharedReferenceCount.ReferenceController);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// WaitUntilComplete @ 1487d28b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FStreamableHandle::WaitUntilComplete(FStreamableHandle *this,float param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedFromThis<FStreamableHandle,1> *this_00;
  FStreamableHandle *pFVar2;
  FStreamableManager *this_01;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  Type TVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TSharedRef<FStreamableHandle,1> *pTVar10;
  longlong lVar11;
  FStreamableHandle *pFVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  longlong local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TSharedRef<FStreamableHandle,1> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  FStreamableHandle *local_c8;
  FStreamableHandle *local_c0;
  FStreamableHandle *local_b8 [2];
  FScriptContainerElement *local_a8;
  int iStack_a0;
  code *local_98;
  FStreamableHandle **local_90;
  TSharedRef<FStreamableHandle,1> local_88;
  TArrayView<int_const_,int> local_78;
  TSharedRef<FStreamableHandle,1> local_68;
  TSharedRef<FStreamableHandle,1> local_58 [2];
  
  if (this->bLoadCompleted == false) {
    if (param_2) {
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      pTVar10 = TSharedFromThis<FStreamableHandle,1>::AsShared
                          ((TSharedFromThis<FStreamableHandle,1> *)this,&local_88);
      if (((local_f8.Data <= pTVar10) &&
          (pTVar10 < (TSharedRef<FStreamableHandle,1> *)
                     (local_f8.Data + (longlong)local_f0._4_4_ * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar6 = (*pcVar3)();
        return TVar6;
      }
      iVar7 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar7 + 1);
      *(FStreamableHandle **)&local_f8.Data[(longlong)iVar7 * 0x10].field_0x0 = pTVar10->Object;
      pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_f8.Data + (longlong)iVar7 * 0x10 + 8) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      uVar13 = 0;
      if (0 < (int)local_f0) {
        local_res20 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar13 < (int)local_f0) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar6 = (*pcVar3)();
            return TVar6;
          }
          pTVar1 = *(TReferenceControllerBase<1> **)(local_f8.Data + local_res20 + 8);
          this_00 = *(TSharedFromThis<FStreamableHandle,1> **)(local_f8.Data + local_res20);
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (*(char *)((longlong)&this_00[0x10].WeakThis.WeakReferenceCount.ReferenceController + 4
                       ) != '\0') {
            if (2 < (byte)LogStreamableManager._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
            }
            if (((*(char *)((longlong)&this_00[0x10].WeakThis.WeakReferenceCount.ReferenceController
                           + 4) != '\0') &&
                (*(char *)((longlong)&this_00[0x10].WeakThis.WeakReferenceCount.ReferenceController
                          + 3) == '\0')) &&
               (*(char *)((longlong)&this_00[0x10].WeakThis.WeakReferenceCount.ReferenceController +
                         2) == '\0')) {
              if ((this_00[0xf].WeakThis.Object == (FStreamableHandle *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("OwningManager",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                                     ,0x417,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar6 = (*pcVar3)();
                return TVar6;
              }
              pFVar12 = this_00[0xf].WeakThis.Object;
              *(undefined1 *)
               ((longlong)&this_00[0x10].WeakThis.WeakReferenceCount.ReferenceController + 4) = 0;
              pTVar10 = TSharedFromThis<FStreamableHandle,1>::AsShared(this_00,&local_68);
              FStreamableManager::StartHandleRequests((FStreamableManager *)pFVar12,pTVar10);
            }
          }
          iVar7 = *(int *)&this_00[0xd].WeakThis.WeakReferenceCount.ReferenceController;
          pFVar12 = this_00[0xd].WeakThis.Object;
          plVar4 = &pFVar12->_padding_;
          while( true ) {
            if (*(int *)&this_00[0xd].WeakThis.WeakReferenceCount.ReferenceController != iVar7) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar12 == (FStreamableHandle *)(plVar4 + (longlong)iVar7 * 2)) break;
            pFVar2 = (FStreamableHandle *)pFVar12->_padding_;
            if (pFVar2 != (FStreamableHandle *)0x0) {
              local_e8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar12->_padding_;
              if (local_e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              local_e8.Object = pFVar2;
              if ((pFVar2 == (FStreamableHandle *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x25d,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar6 = (*pcVar3)();
                return TVar6;
              }
              if (((local_f8.Data <= &local_e8) &&
                  (&local_e8 <
                   (TSharedRef<FStreamableHandle,1> *)
                   (local_f8.Data + (longlong)local_f0._4_4_ * 0x10))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar6 = (*pcVar3)();
                return TVar6;
              }
              if ((int)local_f0 == local_f0._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
                local_f0 = CONCAT44(local_f0._4_4_,iVar9);
              }
              lVar11 = (longlong)(int)local_f0;
              local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
              *(FStreamableHandle **)&local_f8.Data[lVar11 * 0x10].field_0x0 = local_e8.Object;
              *(TReferenceControllerBase<1> **)(local_f8.Data + lVar11 * 0x10 + 8) =
                   local_e8.SharedReferenceCount.ReferenceController;
              if (local_e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_e8.SharedReferenceCount.ReferenceController);
            }
            pFVar12 = (FStreamableHandle *)&pFVar12->CompleteDelegate;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          uVar13 = uVar13 + 1;
          local_res20 = local_res20 + 0x10;
        } while ((int)uVar13 < (int)local_f0);
      }
      DestructItems<TSharedRef<FStreamableHandle,1>,int>
                ((TSharedRef<FStreamableHandle,1> *)local_f8.Data,(int)local_f0);
      if ((TSharedRef<FStreamableHandle,1> *)local_f8.Data != (TSharedRef<FStreamableHandle,1> *)0x0
         ) {
        FMemory::Free(local_f8.Data);
      }
    }
    if ((param_1 == 0.0) && (GStreamableFlushAllAsyncLoadRequestsOnWait == false)) {
      this_01 = this->OwningManager;
      pTVar10 = TSharedFromThis<FStreamableHandle,1>::AsShared
                          ((TSharedFromThis<FStreamableHandle,1> *)this,local_58);
      FStreamableManager::GetAsyncLoadRequestIds(this_01,&local_d8,pTVar10);
      local_a8 = local_d8.AllocatorInstance.Data;
      if ((local_d8.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar6 = (*pcVar3)();
        return TVar6;
      }
      iStack_a0 = local_d8.ArrayNum;
      local_78.DataPtr = (int *)local_a8;
      FlushAsyncLoading(&local_78);
      bVar5 = HasLoadCompletedOrStalled(this);
      if ((bVar5) ||
         (local_c8 = this,
         bVar5 = `FStreamableHandle::WaitUntilComplete'::__l42::<lambda_1>::operator()(&local_c8),
         bVar5)) {
        if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        goto LAB_1487d2dfb;
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
    }
    local_90 = &local_c0;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStreamableHandle::WaitUntilComplete'::__l2::<lambda_2>,bool>::
               Call;
    local_c0 = this;
    TVar6 = ProcessAsyncLoadingUntilComplete
                      ((TFunctionRef<bool___cdecl(void)> *)&local_98,(double)param_1);
    if (((TVar6 == Complete) && (bVar5 = HasLoadCompletedOrStalled(this), !bVar5)) &&
       (this->bCanceled == false)) {
      local_b8[0] = this;
      `FStreamableHandle::WaitUntilComplete'::__l47::<lambda_3>::operator()(local_b8);
    }
  }
  else {
LAB_1487d2dfb:
    TVar6 = Complete;
  }
  return TVar6;
}

// operator() @ 150530f30

bool __thiscall `FStreamableHandle::WaitUntilComplete'::__l42::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881096350>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<6594131278881096350>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150531260

bool __thiscall `FStreamableHandle::WaitUntilComplete'::__l47::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6594131278881096362>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<6594131278881096362>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

