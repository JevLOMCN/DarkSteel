// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 6

// TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError><UE::IoStore::FCasSnapshot_&> @ 1445940d0

TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> * __thiscall
TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::
TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError><UE::IoStore::FCasSnapshot_&>
          (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *this,
          TValueOrError_ValueProxy<UE::IoStore::FCasSnapshot_&> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  TTuple<UE::IoStore::FCasSnapshot_&> TVar4;
  void *pvVar5;
  
  TVar4 = param_1->Args;
  piVar1 = (int *)((longlong)&(this->Variant)._padding_ + 4);
  (this->Variant)._padding_ = 0;
  iVar3 = *(int *)((longlong)TVar4 + 8);
  pvVar5 = *(void **)TVar4;
  *(int *)&(this->Variant)._padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((void *)(this->Variant)._padding_,pvVar5,(longlong)iVar3 << 4);
  }
  plVar2 = &(this->Variant)._padding_;
  *plVar2 = 0;
  piVar1 = (int *)((longlong)&(this->Variant)._padding_ + 4);
  iVar3 = *(int *)((longlong)TVar4 + 0x18);
  pvVar5 = *(void **)((longlong)TVar4 + 0x10);
  *(int *)&(this->Variant)._padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,(ForAnyElementType *)plVar2,iVar3,piVar1);
    memcpy((void *)*plVar2,pvVar5,(longlong)iVar3 * 0x14);
  }
  *(undefined4 *)&(this->Variant)._padding_ = *(undefined4 *)((longlong)TVar4 + 0x20);
  (this->Variant).TypeIndex = '\0';
  return this;
}

// TValueOrError<void,UE::UnifiedError::FError> @ 1445a21d0

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
TValueOrError<void,UE::UnifiedError::FError>::TValueOrError<void,UE::UnifiedError::FError>
          (TValueOrError<void,UE::UnifiedError::FError> *this,
          TValueOrError<void,UE::UnifiedError::FError> *param_1)

{
  bool bVar1;
  IErrorDetails *pIVar2;
  undefined1 local_res8 [32];
  
  (this->Error).bIsSet = false;
  bVar1 = (param_1->Error).bIsSet;
  (this->Error).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (this->Error).TypedValue.ErrorCode = (param_1->Error).TypedValue.ErrorCode;
    (this->Error).TypedValue.ModuleId = (param_1->Error).TypedValue.ModuleId;
    pIVar2 = (param_1->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar2 != (IErrorDetails *)0x0) {
      (this->Error).TypedValue.ErrorDetails.Reference = pIVar2;
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
  }
  return this;
}

// ~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> @ 1445a80c0

void __thiscall
TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::
~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>
          (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *this)

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
  
  bVar1 = (this->Variant).TypeIndex;
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
              ((TReferenceControllerBase<1> *)(this->Variant)._padding_);
    return;
  case 1:
    (this->Variant)._padding_ = 0;
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
      (this->Variant)._padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c86f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  case 3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Variant)._padding_);
    return;
  case 4:
    pvVar7 = (void *)(this->Variant)._padding_;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    return;
  case 6:
    puVar2 = (undefined8 *)(this->Variant)._padding_;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    return;
  case 7:
    pvVar7 = (void *)(this->Variant)._padding_;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    return;
  case 9:
    puVar2 = (undefined8 *)(this->Variant)._padding_;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
    return;
  case 10:
    (this->Variant)._padding_ = 0;
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
      (this->Variant)._padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 0xb:
    return;
  case 0xc:
    pvVar7 = *(void **)&(this->Variant).TypeIndex;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    pvVar7 = (void *)(this->Variant)._padding_;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
      return;
    }
    return;
  case 0xd:
    (this->Variant)._padding_ = 0;
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
      (this->Variant)._padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 0xe:
    return;
  case 0xf:
    (this->Variant)._padding_ = *(longlong *)in_RDX;
    return;
  case 0x10:
    (this->Variant)._padding_ = 0;
    *(int *)&(this->Variant)._padding_ = (int)*(longlong *)in_RDX;
    *(undefined4 *)in_RDX = 0;
    *(undefined4 *)((longlong)&(this->Variant)._padding_ + 4) =
         *(undefined4 *)((longlong)in_RDX + 4);
    plVar4 = *(longlong **)((longlong)in_RDX + 8);
    *(undefined4 *)((longlong)in_RDX + 4) = 0;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)(this->Variant)._padding_;
      if (plVar3 != plVar4) {
        (this->Variant)._padding_ = (longlong)plVar4;
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
    (this->Variant)._padding_ = 0;
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
      (this->Variant)._padding_ = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = (longlong *)(this->Variant)._padding_;
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445c8792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    return;
  case 0x14:
    return;
  case 0x15:
    return;
  case 0x16:
    if ((this->Variant)._padding_ != 0) {
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
                (UE::GHttpIoDispatcher.Object,(this->Variant)._padding_);
      (this->Variant)._padding_ = 0;
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

// ~TValueOrError<void,UE::UnifiedError::FError> @ 1445a8120

void __thiscall
TValueOrError<void,UE::UnifiedError::FError>::~TValueOrError<void,UE::UnifiedError::FError>
          (TValueOrError<void,UE::UnifiedError::FError> *this)

{
  IErrorDetails *pIVar1;
  
  if ((this->Error).bIsSet != false) {
    (this->Error).TypedValue.ErrorCode = 0;
    (this->Error).TypedValue.ModuleId = 0;
    pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar1 != (IErrorDetails *)0x0) {
      (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
    if (pIVar1 != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445a8158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar1 + 0x10))();
      return;
    }
  }
  return;
}

// operator= @ 1445a9bd0

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
TValueOrError<void,UE::UnifiedError::FError>::operator=
          (TValueOrError<void,UE::UnifiedError::FError> *this,
          TValueOrError<void,UE::UnifiedError::FError> *param_1)

{
  IErrorDetails *pIVar1;
  undefined1 local_res8 [8];
  
  if (param_1 != this) {
    if ((param_1->Error).bIsSet != false) {
      if ((this->Error).bIsSet != false) {
        (this->Error).TypedValue.ErrorCode = 0;
        (this->Error).TypedValue.ModuleId = 0;
        pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
        if (pIVar1 != (IErrorDetails *)0x0) {
          (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
        if (pIVar1 != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
      }
      (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (this->Error).TypedValue.ErrorCode = (param_1->Error).TypedValue.ErrorCode;
      (this->Error).TypedValue.ModuleId = (param_1->Error).TypedValue.ModuleId;
      pIVar1 = (param_1->Error).TypedValue.ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (this->Error).TypedValue.ErrorDetails.Reference = pIVar1;
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      (this->Error).bIsSet = true;
      return this;
    }
    if ((this->Error).bIsSet != false) {
      (this->Error).TypedValue.ErrorCode = 0;
      (this->Error).TypedValue.ModuleId = 0;
      pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (this->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (this->Error).TypedValue.ErrorDetails.Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      (this->Error).bIsSet = false;
    }
  }
  return this;
}

// StealValue @ 144601300

FCasSnapshot * __thiscall
TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::StealValue
          (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *this,
          FCasSnapshot *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FCasSnapshot *pFVar3;
  ulonglong uVar4;
  
  if ((this->Variant).TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCasSnapshot *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Blocks).AllocatorInstance.Data =
       (FScriptContainerElement *)(this->Variant)._padding_;
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->Blocks).ArrayNum = (int)(this->Variant)._padding_;
  (__return_storage_ptr__->Blocks).ArrayMax = *(int *)((longlong)&(this->Variant)._padding_ + 4);
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->ChunkLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ChunkLocations).AllocatorInstance.Data =
       (FScriptContainerElement *)(this->Variant)._padding_;
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->ChunkLocations).ArrayNum = (int)(this->Variant)._padding_;
  (__return_storage_ptr__->ChunkLocations).ArrayMax =
       *(int *)((longlong)&(this->Variant)._padding_ + 4);
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->CurrentBlockId).Id = (uint)(this->Variant)._padding_;
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCasSnapshot *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(this);
  (this->Variant).TypeIndex = '\x02';
  return __return_storage_ptr__;
}

