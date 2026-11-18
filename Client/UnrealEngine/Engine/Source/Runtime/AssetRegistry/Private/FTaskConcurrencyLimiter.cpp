// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FTaskConcurrencyLimiter @ 142ad78d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskConcurrencyLimiter * __thiscall
UE::Tasks::FTaskConcurrencyLimiter::FTaskConcurrencyLimiter
          (FTaskConcurrencyLimiter *this,uint param_1,ETaskPriority param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar2 = ::operator_new(0x240,0x40);
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[4]._padding_ = 0;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPimpl_TaskConcurrencyLimiter_Private_Tasks_UE___00_SharedPointerInternals__6B_
    ;
    pTVar2[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[4].WeakReferenceCount = (atomic<int>)0x0;
    TaskConcurrencyLimiter_Private::FConcurrencySlots::FConcurrencySlots
              ((FConcurrencySlots *)(pTVar2 + 8),param_1);
    *(ETaskPriority *)&pTVar2[0x14]._padding_ = param_2;
    pTVar2[0x18]._padding_ = 0;
    pTVar2[0x1c]._padding_ = 0;
    pTVar2[0x18]._padding_ = 0;
    pTVar2[0x1c]._padding_ = 0;
    uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
    pTVar2[0x18]._padding_ = pTVar2[0x18]._padding_ & 0xfffffffffc000000U | (ulonglong)uVar1;
    pTVar2[0x1c]._padding_ = pTVar2[0x1c]._padding_ & 0xfffffffffc000000U | (ulonglong)uVar1;
    *(undefined4 *)&pTVar2[0x20]._padding_ = 0;
    pTVar2[0x20].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x20].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3 = pTVar2;
  }
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>::
  TSharedRef<UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl,1>
            (&this->Pimpl,(FPimpl *)(pTVar3 + 4),pTVar3);
  return this;
}

