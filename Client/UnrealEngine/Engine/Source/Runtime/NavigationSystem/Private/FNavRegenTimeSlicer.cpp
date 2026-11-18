// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// DebugResetLongTimeSliceFunction @ 146d8ef70

void __thiscall FNavRegenTimeSlicer::DebugResetLongTimeSliceFunction(FNavRegenTimeSlicer *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->DebugLongTimeSliceFunction != 0) {
    plVar1 = *(longlong **)&(this->DebugLongTimeSliceFunction).field_0x28;
    plVar2 = (longlong *)&(this->DebugLongTimeSliceFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->DebugLongTimeSliceFunction = 0;
  }
  return;
}

// DebugSetLongTimeSliceData @ 146d8efb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavRegenTimeSlicer::DebugSetLongTimeSliceData
          (FNavRegenTimeSlicer *this,TFunction<void___cdecl(FName,double)> *param_1,double param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = *(longlong *)param_1;
  uStack_40 = (longlong *)0x0;
  if (local_68 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_58);
  }
  lVar6 = *(longlong *)&this->DebugLongTimeSliceFunction;
  uVar7 = *(undefined8 *)&(this->DebugLongTimeSliceFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->DebugLongTimeSliceFunction).field_0x20;
  plVar10 = *(longlong **)&(this->DebugLongTimeSliceFunction).field_0x28;
  *(longlong *)&this->DebugLongTimeSliceFunction = local_68;
  *(undefined8 *)&(this->DebugLongTimeSliceFunction).field_0x8 = uStack_60;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x10 = (undefined4)local_58;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x14 = local_58._4_4_;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x18 = uStack_50;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x1c = uStack_4c;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x20 = (undefined4)local_48;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x28 = (undefined4)uStack_40;
  *(undefined4 *)&(this->DebugLongTimeSliceFunction).field_0x2c = uStack_40._4_4_;
  local_58._0_4_ = uVar1;
  local_58._4_4_ = uVar2;
  uStack_50 = uVar3;
  uStack_4c = uVar4;
  local_48 = uVar5;
  uStack_40 = plVar10;
  local_68 = lVar6;
  uStack_60 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_58;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  this->DebugLongTimeSliceDuration = param_2;
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// EndTimeSliceAndAdjustDuration @ 146d92d90

void __thiscall FNavRegenTimeSlicer::EndTimeSliceAndAdjustDuration(FNavRegenTimeSlicer *this)

{
  double dVar1;
  
  dVar1 = this->RemainingDuration - (this->TimeLastTested - this->StartTime);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  this->RemainingDuration = dVar1;
  return;
}

// SetupTimeSlice @ 146db9df0

void __thiscall FNavRegenTimeSlicer::SetupTimeSlice(FNavRegenTimeSlicer *this,double param_1)

{
  this->OriginalDuration = param_1;
  this->RemainingDuration = param_1;
  this->TimeLastTested = 0.0;
  this->StartTime = 0.0;
  this->bTimeSliceFinishedCached = false;
  return;
}

// StartTimeSlice @ 146dba7e0

void __thiscall FNavRegenTimeSlicer::StartTimeSlice(FNavRegenTimeSlicer *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  LARGE_INTEGER local_res8 [4];
  
  if (this->bTimeSliceFinishedCached != false) {
    `FNavRegenTimeSlicer::StartTimeSlice'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (this->RemainingDuration <= 0.0) {
    `FNavRegenTimeSlicer::StartTimeSlice'::__l2::<lambda_2>::operator()(local_res8);
  }
  QueryPerformanceCounter(local_res8);
  dVar2 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  this->StartTime = dVar2;
  this->TimeLastTested = (double)auVar1._8_8_;
  return;
}

// TestTimeSliceFinished @ 146dbaf80

bool __thiscall FNavRegenTimeSlicer::TestTimeSliceFinished(FNavRegenTimeSlicer *this)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  FName FVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  FName local_res10;
  
  if (this->bTimeSliceFinishedCached != false) {
    `FNavRegenTimeSlicer::TestTimeSliceFinished'::__l2::<lambda_1>::operator()(&local_res8);
  }
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_res8 = (LARGE_INTEGER)(dVar3 - this->TimeLastTested);
  if ((this->DebugLongTimeSliceDuration <= (double)local_res8) &&
     ((*(longlong *)&this->DebugLongTimeSliceFunction != 0 ||
      (bVar5 = `FNavRegenTimeSlicer::TestTimeSliceFinished'::__l6::<lambda_2>::operator()
                         (&local_res8), bVar5)))) {
    local_res10 = this->DebugSectionName;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->DebugLongTimeSliceFunction);
    plVar1 = *(longlong **)&(this->DebugLongTimeSliceFunction).field_0x28;
    pcVar2 = *(code **)&this->DebugLongTimeSliceFunction;
    plVar7 = (longlong *)&(this->DebugLongTimeSliceFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar7 = plVar1;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,&local_res10,&local_res8);
  }
  FVar4 = FNavigationSystem::DebugTimeSliceDefaultSectionName;
  this->TimeLastTested = dVar3;
  this->DebugSectionName = FVar4;
  bVar5 = this->RemainingDuration <= dVar3 - this->StartTime;
  this->bTimeSliceFinishedCached = bVar5;
  return bVar5;
}

// operator() @ 1504fc2b0

bool __thiscall `FNavRegenTimeSlicer::StartTimeSlice'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7445129205488025139>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7445129205488025139>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc2f0

bool __thiscall
`FNavRegenTimeSlicer::TestTimeSliceFinished'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7445129205488025112>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7445129205488025112>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc5c0

bool __thiscall `FNavRegenTimeSlicer::StartTimeSlice'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7445129205488025138>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7445129205488025138>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fc600

bool __thiscall
`FNavRegenTimeSlicer::TestTimeSliceFinished'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7445129205488025104>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7445129205488025104>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

