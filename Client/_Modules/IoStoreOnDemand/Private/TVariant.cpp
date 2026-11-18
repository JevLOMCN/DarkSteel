// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 5

// Emplace<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType> @ 144597890

void __thiscall
TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
::Emplace<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
          (TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandInstallArgs,TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)>,TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)>_> @ 144597900

void __thiscall
TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
::
Emplace<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandInstallArgs,TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)>,TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)>_>
          (TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
           *this,FOnDemandInstallArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)> *param_2,
          TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)> *param_3)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  bVar1 = this->TypeIndex;
  if (5 < (ulonglong)bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])();
  *(undefined8 *)this = 0;
  *(FScriptContainerElement **)this = (param_1->MountId).Data.AllocatorInstance.Data;
  (param_1->MountId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x8 = (param_1->MountId).Data.ArrayNum;
  *(int *)&this->field_0xc = (param_1->MountId).Data.ArrayMax;
  (param_1->MountId).Data.ArrayNum = 0;
  (param_1->MountId).Data.ArrayMax = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(FScriptContainerElement **)&this->field_0x10 = (param_1->TagSets).AllocatorInstance.Data;
  (param_1->TagSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x18 = (param_1->TagSets).ArrayNum;
  *(int *)&this->field_0x1c = (param_1->TagSets).ArrayMax;
  (param_1->TagSets).ArrayNum = 0;
  (param_1->TagSets).ArrayMax = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(FScriptContainerElement **)&this->field_0x20 = (param_1->PackageIds).AllocatorInstance.Data;
  (param_1->PackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x28 = (param_1->PackageIds).ArrayNum;
  *(int *)&this->field_0x2c = (param_1->PackageIds).ArrayMax;
  (param_1->PackageIds).ArrayNum = 0;
  (param_1->PackageIds).ArrayMax = 0;
  *(FOnDemandInternalContentHandle **)&this->field_0x30 = (param_1->ContentHandle).Handle.Object;
  pTVar2 = (param_1->ContentHandle).Handle.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&this->field_0x38 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(EOnDemandInstallOptions *)&this->field_0x40 = param_1->Options;
  *(int *)&this->field_0x44 = param_1->Priority;
  *(wchar_t **)&this->field_0x48 = (param_1->DebugName).Chars;
  (param_1->DebugName).Chars = (wchar_t *)0x0;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)param_2;
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&this->field_0x68 = uVar4;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->field_0x50 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)param_3;
  *(undefined8 *)&this->field_0xa8 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&this->field_0x98 = uVar4;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->field_0x80 != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined2 *)&this->field_0x108 = 0;
  this->TypeIndex = '\x01';
  return;
}

// IsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType> @ 14459e5b0

bool __thiscall
TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
::IsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType>
          (TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TSharedPtr<IFileHandle,1>,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// ~TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType> @ 1445a8170

void __thiscall
TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
::
~TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
          (TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
           *this)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FLowLevelMemTracker *this_00;
  void *pvVar7;
  char *in_RDX;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
    return;
  case 1:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c86f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  case 3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
    return;
  case 4:
    pvVar7 = (void *)this->_padding_;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    return;
  case 6:
    puVar2 = (undefined8 *)this->_padding_;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    return;
  case 7:
    pvVar7 = (void *)this->_padding_;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    return;
  case 9:
    puVar2 = (undefined8 *)this->_padding_;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    return;
  case 10:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 0xb:
    return;
  case 0xc:
    if (*(void **)&this->TypeIndex != (void *)0x0) {
      FMemory::Free(*(void **)&this->TypeIndex);
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
      return;
    }
    return;
  case 0xd:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 0xe:
    return;
  case 0xf:
    this->_padding_ = *(longlong *)in_RDX;
    return;
  case 0x10:
    this->_padding_ = 0;
    *(int *)&this->_padding_ = (int)*(longlong *)in_RDX;
    *(undefined4 *)in_RDX = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)in_RDX + 4);
    plVar4 = *(longlong **)((longlong)in_RDX + 8);
    *(undefined4 *)((longlong)in_RDX + 4) = 0;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != plVar4) {
        this->_padding_ = (longlong)plVar4;
        (**(code **)(*plVar4 + 8))(plVar4,&stack0x00000008);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar4 = *(longlong **)((longlong)in_RDX + 8);
      if (plVar4 != (longlong *)0x0) {
        *(longlong *)((longlong)in_RDX + 8) = 0;
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    return;
  case 0x11:
    return;
  case 0x12:
    return;
  case 0x13:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 0x14:
    return;
  case 0x15:
    return;
  case 0x16:
    if (this->_padding_ != 0) {
      if (UE::GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)((longlong)*UE::GHttpIoDispatcher.Object + 0x58))
                (UE::GHttpIoDispatcher.Object,this->_padding_);
      this->_padding_ = 0;
    }
    return;
  }
  if (pvVar7 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar7,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar7);
  }
  return;
}

// ~TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType> @ 1445a81d0

void __thiscall
TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
::
~TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
          (TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
           *this)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char *in_RDX;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    puVar2 = (undefined8 *)this->_padding_;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    return;
  case 2:
    return;
  case 3:
    if (*(void **)&this->TypeIndex != (void *)0x0) {
      FMemory::Free(*(void **)&this->TypeIndex);
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
      return;
    }
    return;
  case 4:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 5:
    return;
  case 6:
    this->_padding_ = *(longlong *)in_RDX;
    return;
  case 7:
    this->_padding_ = 0;
    *(int *)&this->_padding_ = (int)*(longlong *)in_RDX;
    *(undefined4 *)in_RDX = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)in_RDX + 4);
    plVar4 = *(longlong **)((longlong)in_RDX + 8);
    *(undefined4 *)((longlong)in_RDX + 4) = 0;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != plVar4) {
        this->_padding_ = (longlong)plVar4;
        (**(code **)(*plVar4 + 8))(plVar4,&stack0x00000008);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar4 = *(longlong **)((longlong)in_RDX + 8);
      if (plVar4 != (longlong *)0x0) {
        *(longlong *)((longlong)in_RDX + 8) = 0;
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    return;
  case 8:
    return;
  case 9:
    return;
  case 10:
    this->_padding_ = 0;
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      return;
    }
    return;
  case 0xb:
    return;
  case 0xc:
    return;
  case 0xd:
    if (this->_padding_ != 0) {
      if (UE::GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)((longlong)*UE::GHttpIoDispatcher.Object + 0x58))
                (UE::GHttpIoDispatcher.Object,this->_padding_);
      this->_padding_ = 0;
    }
    return;
  }
  this->_padding_ = 0;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    return;
  }
  return;
}

