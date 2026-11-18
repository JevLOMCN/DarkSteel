// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// FLegacySyncScopedBatch @ 142c96b00

FLegacySyncScopedBatch * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
          (FLegacySyncScopedBatch *this,TTypedElementList<FScriptTypedElementHandle> *param_1,
          bool param_2)

{
  FLegacySync *pFVar1;
  
  pFVar1 = (param_1->LegacySync).Ptr;
  this->ElementListLegacySync = pFVar1;
  this->bNotify = param_2;
  if (pFVar1 != (FLegacySync *)0x0) {
    pFVar1->NumOpenBatchOperations = pFVar1->NumOpenBatchOperations + 1;
  }
  return this;
}

// FLegacySyncScopedBatch @ 142c96b20

FLegacySyncScopedBatch * __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
          (FLegacySyncScopedBatch *this,TTypedElementList<FTypedElementHandle> *param_1,bool param_2
          )

{
  FLegacySync *pFVar1;
  
  pFVar1 = (param_1->LegacySync).Ptr;
  this->ElementListLegacySync = pFVar1;
  this->bNotify = param_2;
  if (pFVar1 != (FLegacySync *)0x0) {
    pFVar1->NumOpenBatchOperations = pFVar1->NumOpenBatchOperations + 1;
  }
  return this;
}

// ~FLegacySyncScopedBatch @ 142c9a050

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
          (FLegacySyncScopedBatch *this)

{
  int *piVar1;
  FLegacySync *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FScriptTypedElementInternalDataPtr local_res8;
  
  this_00 = this->ElementListLegacySync;
  if (this_00 != (FLegacySync *)0x0) {
    bVar4 = this->bNotify;
    if ((this_00->NumOpenBatchOperations < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumOpenBatchOperations > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                           ,0x47,L"Batch operation underflow!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar1 = &this_00->NumOpenBatchOperations;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if ((this_00->bBatchOperationIsDirty == false) || (bVar4 == false)) {
        this_00->bBatchOperationIsDirty = false;
      }
      else {
        this_00->bBatchOperationIsDirty = false;
        local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
        FLegacySync::Private_EmitSyncEvent
                  (this_00,BatchComplete,(FScriptTypedElementHandle *)&local_res8);
        if ((local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
           ((local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + -1,
           (local_res8.ControlBlock)->WeakRefCount == 0)) {
          ::operator_delete(local_res8.ControlBlock,0x10);
          local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
        }
        if ((this_00->bBatchOperationIsDirty != false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bBatchOperationIsDirty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                               ,0x51,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// ~FLegacySyncScopedBatch @ 142c9a140

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
          (FLegacySyncScopedBatch *this)

{
  if (this->ElementListLegacySync != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this->ElementListLegacySync,this->bNotify);
    return;
  }
  return;
}

// ForceDirty @ 142caca00

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::ForceDirty
          (FLegacySyncScopedBatch *this)

{
  FLegacySync *pFVar1;
  
  pFVar1 = this->ElementListLegacySync;
  if ((pFVar1 != (FLegacySync *)0x0) && (0 < pFVar1->NumOpenBatchOperations)) {
    pFVar1->bBatchOperationIsDirty = true;
  }
  return;
}

// ForceDirty @ 142caca20

void __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::ForceDirty
          (FLegacySyncScopedBatch *this)

{
  FLegacySync *pFVar1;
  
  pFVar1 = this->ElementListLegacySync;
  if ((pFVar1 != (FLegacySync *)0x0) && (0 < pFVar1->NumOpenBatchOperations)) {
    pFVar1->bBatchOperationIsDirty = true;
  }
  return;
}

// IsDirty @ 142cafa10

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySyncScopedBatch::IsDirty
          (FLegacySyncScopedBatch *this)

{
  if ((this->ElementListLegacySync != (FLegacySync *)0x0) &&
     (this->ElementListLegacySync->bBatchOperationIsDirty != false)) {
    return true;
  }
  return false;
}

// IsDirty @ 142cafa30

bool __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::IsDirty
          (FLegacySyncScopedBatch *this)

{
  if ((this->ElementListLegacySync != (FLegacySync *)0x0) &&
     (this->ElementListLegacySync->bBatchOperationIsDirty != false)) {
    return true;
  }
  return false;
}

