// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// FScopedClearNewPendingChange @ 142c984e0

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FScopedClearNewPendingChange::
FScopedClearNewPendingChange
          (FScopedClearNewPendingChange *this,FScopedClearNewPendingChange *param_1)

{
  this->TypedElementList = param_1->TypedElementList;
  param_1->TypedElementList = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  return this;
}

// FScopedClearNewPendingChange @ 142c98500

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FScopedClearNewPendingChange::
FScopedClearNewPendingChange
          (FScopedClearNewPendingChange *this,TTypedElementList<FScriptTypedElementHandle> *param_1)

{
  FLegacySync *pFVar1;
  bool bVar2;
  
  this->TypedElementList = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  bVar2 = param_1->bHasPendingNotify == false;
  pFVar1 = (param_1->LegacySync).Ptr;
  if (pFVar1 != (FLegacySync *)0x0) {
    bVar2 = bVar2 && pFVar1->NumOpenBatchOperations < 1;
  }
  if (bVar2) {
    this->TypedElementList = param_1;
  }
  return this;
}

// FScopedClearNewPendingChange @ 142c98540

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::FScopedClearNewPendingChange
          (FScopedClearNewPendingChange *this,FScopedClearNewPendingChange *param_1)

{
  this->TypedElementList = param_1->TypedElementList;
  param_1->TypedElementList = (TTypedElementList<FTypedElementHandle> *)0x0;
  return this;
}

// FScopedClearNewPendingChange @ 142c98560

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::FScopedClearNewPendingChange
          (FScopedClearNewPendingChange *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  FLegacySync *pFVar1;
  bool bVar2;
  
  this->TypedElementList = (TTypedElementList<FTypedElementHandle> *)0x0;
  bVar2 = param_1->bHasPendingNotify == false;
  pFVar1 = (param_1->LegacySync).Ptr;
  if (pFVar1 != (FLegacySync *)0x0) {
    bVar2 = bVar2 && pFVar1->NumOpenBatchOperations < 1;
  }
  if (bVar2) {
    this->TypedElementList = param_1;
  }
  return this;
}

// ~FScopedClearNewPendingChange @ 142c9a5c0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::FScopedClearNewPendingChange::
~FScopedClearNewPendingChange(FScopedClearNewPendingChange *this)

{
  if (this->TypedElementList != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    this->TypedElementList->bHasPendingNotify = false;
  }
  return;
}

// ~FScopedClearNewPendingChange @ 142c9a5e0

void __thiscall
TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::~FScopedClearNewPendingChange
          (FScopedClearNewPendingChange *this)

{
  if (this->TypedElementList != (TTypedElementList<FTypedElementHandle> *)0x0) {
    this->TypedElementList->bHasPendingNotify = false;
  }
  return;
}

// operator= @ 142c9c160

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FScopedClearNewPendingChange::operator=
          (FScopedClearNewPendingChange *this,FScopedClearNewPendingChange *param_1)

{
  this->TypedElementList = param_1->TypedElementList;
  param_1->TypedElementList = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  return this;
}

// operator= @ 142c9c180

FScopedClearNewPendingChange * __thiscall
TTypedElementList<FTypedElementHandle>::FScopedClearNewPendingChange::operator=
          (FScopedClearNewPendingChange *this,FScopedClearNewPendingChange *param_1)

{
  this->TypedElementList = param_1->TypedElementList;
  param_1->TypedElementList = (TTypedElementList<FTypedElementHandle> *)0x0;
  return this;
}

