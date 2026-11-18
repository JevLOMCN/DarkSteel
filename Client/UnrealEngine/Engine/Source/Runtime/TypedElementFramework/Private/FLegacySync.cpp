// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 18

// FLegacySync @ 142c96aa0

FLegacySync * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::FLegacySync
          (FLegacySync *this,TTypedElementList<FScriptTypedElementHandle> *param_1)

{
  this->ElementList = param_1;
  *(undefined8 *)&this->OnSyncEventDelegate = 0;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x10 = 0;
  this->NumOpenBatchOperations = 0;
  this->bBatchOperationIsDirty = false;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x18 = 2;
  return this;
}

// FLegacySync @ 142c96ad0

FLegacySync * __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::FLegacySync
          (FLegacySync *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  this->ElementList = param_1;
  *(undefined8 *)&this->OnSyncEventDelegate = 0;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x10 = 0;
  this->NumOpenBatchOperations = 0;
  this->bBatchOperationIsDirty = false;
  *(undefined8 *)&(this->OnSyncEventDelegate).field_0x18 = 2;
  return this;
}

// ~FLegacySync @ 142c99fd0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::~FLegacySync(FLegacySync *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSyncEventDelegate).field_0x8,*(int *)&(this->OnSyncEventDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSyncEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSyncEventDelegate);
  return;
}

// ~FLegacySync @ 142c9a010

void __thiscall TTypedElementList<FTypedElementHandle>::FLegacySync::~FLegacySync(FLegacySync *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSyncEventDelegate).field_0x8,*(int *)&(this->OnSyncEventDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSyncEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSyncEventDelegate);
  return;
}

// BeginBatchOperation @ 142ca6ed0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::BeginBatchOperation(FLegacySync *this)

{
  this->NumOpenBatchOperations = this->NumOpenBatchOperations + 1;
  return;
}

// BeginBatchOperation @ 142ca6ee0

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::BeginBatchOperation(FLegacySync *this)

{
  this->NumOpenBatchOperations = this->NumOpenBatchOperations + 1;
  return;
}

// EndBatchOperation @ 142cab4c0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::EndBatchOperation
          (FLegacySync *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FScriptTypedElementInternalDataPtr local_res8;
  
  if (this->NumOpenBatchOperations < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOpenBatchOperations > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                       ,0x47,L"Batch operation underflow!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &this->NumOpenBatchOperations;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((this->bBatchOperationIsDirty == false) || (!param_1)) {
      this->bBatchOperationIsDirty = false;
    }
    else {
      this->bBatchOperationIsDirty = false;
      local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
      Private_EmitSyncEvent(this,BatchComplete,(FScriptTypedElementHandle *)&local_res8);
      if (local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
        (local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + -1;
        if ((local_res8.ControlBlock)->WeakRefCount == 0) {
          ::operator_delete(local_res8.ControlBlock,0x10);
          local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
        }
      }
      if (this->bBatchOperationIsDirty != false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bBatchOperationIsDirty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                           ,0x51,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// EndBatchOperation @ 142cab5a0

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::EndBatchOperation
          (FLegacySync *this,bool param_1)

{
  int *piVar1;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  FTypedElementHandle local_38;
  
  if ((this->NumOpenBatchOperations < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOpenBatchOperations > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                         ,0x47,L"Batch operation underflow!"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &this->NumOpenBatchOperations;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((this->bBatchOperationIsDirty == false) || (!param_1)) {
      this->bBatchOperationIsDirty = false;
    }
    else {
      this->bBatchOperationIsDirty = false;
      local_38._12_4_ = 0;
      local_38.DataPtr = (FTypedElementInternalData *)0x0;
      local_38.ReferenceId = -1;
      Private_EmitSyncEvent(this,BatchComplete,&local_38);
      iVar6 = local_38.ReferenceId;
      if (local_38.DataPtr != (FTypedElementInternalData *)0x0) {
        lVar12 = (longlong)local_38.ReferenceId;
        LOCK();
        (local_38.DataPtr)->RefCount = (local_38.DataPtr)->RefCount + -1;
        UNLOCK();
        lpCriticalSection = ((local_38.DataPtr)->References).Ptr;
        if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_38.ReferenceId != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          lVar2 = *(longlong *)&(lpCriticalSection->References).field_0x0;
          puVar11 = &(lpCriticalSection->References).field_0x10;
          bVar5 = (byte)iVar6 & 0x1f;
          uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
          if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
          puVar13 = puVar11;
          if (puVar3 != (undefined1 *)0x0) {
            puVar13 = puVar3;
          }
          lVar9 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5);
          if (((*(uint *)(puVar13 + lVar9 * 4) & uVar14) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar2)
                 = iVar6;
          }
          puVar10 = (undefined4 *)(lVar12 * 0x108 + lVar2);
          *puVar10 = 0xffffffff;
          if (*(int *)&(lpCriticalSection->References).field_0x34 < 1) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
          }
          puVar10[1] = uVar8;
          puVar3 = &(lpCriticalSection->References).field_0x34;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
          if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
          if (puVar3 != (undefined1 *)0x0) {
            puVar11 = puVar3;
          }
          *(uint *)(puVar11 + lVar9 * 4) = *(uint *)(puVar11 + lVar9 * 4) & ~uVar14;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
      }
      local_38.DataPtr = (FTypedElementInternalData *)0x0;
      local_38.ReferenceId = -1;
      if ((this->bBatchOperationIsDirty != false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bBatchOperationIsDirty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                             ,0x51,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// ForceBatchOperationDirty @ 142cac9c0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::ForceBatchOperationDirty
          (FLegacySync *this)

{
  if (0 < this->NumOpenBatchOperations) {
    this->bBatchOperationIsDirty = true;
  }
  return;
}

// ForceBatchOperationDirty @ 142cac9e0

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::ForceBatchOperationDirty(FLegacySync *this)

{
  if (0 < this->NumOpenBatchOperations) {
    this->bBatchOperationIsDirty = true;
  }
  return;
}

// IsBatchOperationDirty @ 142caf960

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::IsBatchOperationDirty(FLegacySync *this)

{
  return this->bBatchOperationIsDirty;
}

// IsBatchOperationDirty @ 142caf970

bool __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::IsBatchOperationDirty(FLegacySync *this)

{
  return this->bBatchOperationIsDirty;
}

// IsRunningBatchOperation @ 142cafb00

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::IsRunningBatchOperation
          (FLegacySync *this)

{
  return 0 < this->NumOpenBatchOperations;
}

// IsRunningBatchOperation @ 142cafb10

bool __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::IsRunningBatchOperation(FLegacySync *this)

{
  return 0 < this->NumOpenBatchOperations;
}

// OnSyncEvent @ 142cb2210

FOnSyncEvent * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::OnSyncEvent(FLegacySync *this)

{
  return &this->OnSyncEventDelegate;
}

// OnSyncEvent @ 142cb2220

FOnSyncEvent * __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::OnSyncEvent(FLegacySync *this)

{
  return &this->OnSyncEventDelegate;
}

// Private_EmitSyncEvent @ 142cb2370

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::Private_EmitSyncEvent
          (FLegacySync *this,ESyncType param_1,FScriptTypedElementHandle *param_2)

{
  undefined1 *puVar1;
  TTypedElementList<FScriptTypedElementHandle> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_48;
  
  pTVar2 = this->ElementList;
  bVar5 = 0 < this->NumOpenBatchOperations;
  this->bBatchOperationIsDirty = (bool)(this->bBatchOperationIsDirty | bVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSyncEventDelegate,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnSyncEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar11 = *(int *)&(this->OnSyncEventDelegate).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&(this->OnSyncEventDelegate).field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnSyncEventDelegate).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar12 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,pTVar2,param_1,param_2,bVar5), cVar9 == '\0')
         ) {
        bVar7 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnSyncEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSyncEventDelegate,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// Private_EmitSyncEvent @ 142cb24e0

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::Private_EmitSyncEvent
          (FLegacySync *this,ESyncType param_1,FTypedElementHandle *param_2)

{
  undefined1 *puVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_48;
  
  pTVar2 = this->ElementList;
  bVar5 = 0 < this->NumOpenBatchOperations;
  this->bBatchOperationIsDirty = (bool)(this->bBatchOperationIsDirty | bVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSyncEventDelegate,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnSyncEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar11 = *(int *)&(this->OnSyncEventDelegate).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&(this->OnSyncEventDelegate).field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnSyncEventDelegate).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar12 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,pTVar2,param_1,param_2,bVar5), cVar9 == '\0')
         ) {
        bVar7 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnSyncEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSyncEventDelegate,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

