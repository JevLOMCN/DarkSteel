// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticStruct @ 1468d5d80

UScriptStruct * __cdecl FWidgetAnimationHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationHandle,(UObject *)pUVar1,
                         L"WidgetAnimationHandle");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetAnimationHandle.OuterSingleton;
}

// FWidgetAnimationHandle @ 1468ffb50

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
FWidgetAnimationHandle::FWidgetAnimationHandle
          (FWidgetAnimationHandle *this,TSharedPtr<FWidgetAnimationState,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->WeakState).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakState).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FWidgetAnimationHandle @ 1468ffb90

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
FWidgetAnimationHandle::FWidgetAnimationHandle(FWidgetAnimationHandle *this)

{
  (this->WeakState).Object = (FWidgetAnimationState *)0x0;
  (this->WeakState).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// GetAnimationState @ 14691da00

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationState * __thiscall
FWidgetAnimationHandle::GetAnimationState(FWidgetAnimationHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetAnimationState *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->WeakState).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FWidgetAnimationState *)0x0;
}

// GetSequencePlayer @ 1469240b0

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer * __thiscall
FWidgetAnimationHandle::GetSequencePlayer(FWidgetAnimationHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UUMGSequencePlayer *pUVar4;
  FWidgetAnimationState *this_00;
  bool bVar5;
  
  pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return (UUMGSequencePlayer *)0x0;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->WeakState).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this_00 == (FWidgetAnimationState *)0x0) {
    return (UUMGSequencePlayer *)0x0;
  }
  pUVar4 = FWidgetAnimationState::GetOrCreateLegacyPlayer(this_00);
  return pUVar4;
}

// GetUserTag @ 1469252c0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall FWidgetAnimationHandle::GetUserTag(FWidgetAnimationHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FName in_RDX;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469252f9;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WeakState).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    *(FName *)in_RDX = pFVar4->UserTag;
    return in_RDX;
  }
LAB_1469252f9:
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// IsValid @ 14692d5b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetAnimationHandle::IsValid(FWidgetAnimationHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->WeakState).Object != (FWidgetAnimationState *)0x0) &&
      (pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// PinAnimationState @ 146931280

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FWidgetAnimationState,1> * __thiscall
FWidgetAnimationHandle::PinAnimationState
          (FWidgetAnimationHandle *this,TSharedPtr<FWidgetAnimationState,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FWidgetAnimationState *)0x0;
  pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->WeakState).Object;
  }
  return __return_storage_ptr__;
}

// SetUserTag @ 146944320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationHandle::SetUserTag(FWidgetAnimationHandle *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pFVar4 = (FWidgetAnimationState *)0x0;
  pTVar1 = (this->WeakState).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WeakState).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    pFVar4->UserTag = param_1;
  }
  return;
}

