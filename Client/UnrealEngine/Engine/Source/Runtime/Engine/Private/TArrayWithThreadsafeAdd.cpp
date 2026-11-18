// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// EmplaceThreadsafe<FTickTaskLevel::FTickScheduleDetails_const_&> @ 1488a8370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_>::
EmplaceThreadsafe<FTickTaskLevel::FTickScheduleDetails_const_&>
          (TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_>
           *this,FTickScheduleDetails *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  LOCK();
  puVar1 = &this->field_0x8;
  iVar6 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  UNLOCK();
  if (*(int *)&this->field_0xc < iVar6 + 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldNum + Count <= this->ArrayMax",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0xb4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->Cooldown;
  puVar2 = (undefined8 *)(*(longlong *)this + (longlong)iVar6 * 0x10);
  *puVar2 = param_1->TickFunction;
  puVar2[1] = uVar4;
  return iVar6;
}

// TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> @ 1488ad7a0

TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> * __thiscall
TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_>::
TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_>
          (TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> @ 1488ad7c0

TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> * __thiscall
TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_>::
TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_>
          (TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1488ad7e0

TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::
TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 4;
  return this;
}

// ~TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> @ 1488b1980

void __thiscall
TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_>::
~TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_>
          (TArrayWithThreadsafeAdd<FTickFunction_*,TSizedDefaultAllocator<32>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> @ 1488b19a0

void __thiscall
TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_>::
~TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_>
          (TArrayWithThreadsafeAdd<FBaseGraphTask_*,TSizedDefaultAllocator<32>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1488b19c0

void __thiscall
TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::
~TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  
  pTVar1 = this;
  if (*(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        **)&this->field_0x20 !=
      (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    pTVar1 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               **)&this->field_0x20;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar1,*(int *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
    return;
  }
  return;
}

