// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// OutputBlendSpace @ 14645f720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAnimGraphRuntimeTrace::OutputBlendSpace
          (FAnimationBaseContext *param_1,FAnimNode_BlendSpaceGraphBase *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  undefined8 *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (-1 < AnimationChannel->Enabled) {
    if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext.AnimInstanceProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimGraphRuntimeTrace.cpp"
                           ,0x40,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FObjectTrace::OutputObject(param_1->AnimInstanceProxy->AnimInstanceObject);
    FObjectTrace::OutputObject((UObject *)(param_2->BlendSpace).field0_0x0.DebugPtr);
    iVar3 = (param_2->BlendFilter).FilterPerAxis.ArrayNum;
    uVar9 = 0;
    fVar1 = param_2->X;
    fVar2 = param_2->Y;
    if (iVar3 < 3) {
      uVar10 = 0;
      if (iVar3 < 2) {
        if (iVar3 < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
        }
      }
      else {
        pFVar4 = (param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
        uVar9 = *(undefined4 *)(pFVar4 + 0x38);
        uVar8 = *(undefined4 *)pFVar4;
      }
    }
    else {
      pFVar4 = (param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      uVar10 = *(undefined4 *)(pFVar4 + 0x70);
      uVar9 = *(undefined4 *)(pFVar4 + 0x38);
      uVar8 = *(undefined4 *)pFVar4;
    }
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationBlendSpacePlayerFields>
                ((TLogScope<0> *)&local_70);
      QueryPerformanceCounter(&local_78);
      *local_70 = CONCAT44(local_78.s.HighPart,local_78.s.LowPart);
      uVar7 = FObjectTrace::GetObjectId(param_1->AnimInstanceProxy->AnimInstanceObject);
      local_70[1] = uVar7;
      uVar7 = FObjectTrace::GetObjectId((UObject *)(param_2->BlendSpace).field0_0x0.DebugPtr);
      local_70[2] = uVar7;
      *(int *)(local_70 + 3) = param_1->CurrentNodeId;
      *(float *)((longlong)local_70 + 0x1c) = fVar1;
      *(float *)(local_70 + 4) = fVar2;
      *(undefined4 *)((longlong)local_70 + 0x24) = 0;
      *(undefined4 *)(local_70 + 5) = uVar8;
      *(undefined4 *)((longlong)local_70 + 0x2c) = uVar9;
      *(undefined4 *)(local_70 + 6) = uVar10;
      *(undefined8 *)(local_68 + 0x28) = *(undefined8 *)(local_68 + 0x20);
    }
  }
  return;
}

// OutputBlendSpacePlayer @ 14645f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAnimGraphRuntimeTrace::OutputBlendSpacePlayer
          (FAnimationBaseContext *param_1,FAnimNode_BlendSpacePlayerBase *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (-1 < AnimationChannel->Enabled) {
    if ((param_1->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InContext.AnimInstanceProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimGraphRuntimeTrace.cpp"
                           ,0x23,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FObjectTrace::OutputObject(param_1->AnimInstanceProxy->AnimInstanceObject);
    pUVar5 = (UObject *)(**(code **)(param_2->_padding_ + 0x148))(param_2);
    FObjectTrace::OutputObject(pUVar5);
    (**(code **)(param_2->_padding_ + 0x150))(param_2,&local_70);
    iVar1 = (param_2->BlendFilter).FilterPerAxis.ArrayNum;
    if (iVar1 < 3) {
      uVar8 = 0;
      uVar9 = 0;
      if (iVar1 < 2) {
        if (iVar1 < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
        }
      }
      else {
        pFVar2 = (param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
        uVar8 = *(undefined4 *)(pFVar2 + 0x38);
        uVar7 = *(undefined4 *)pFVar2;
      }
    }
    else {
      pFVar2 = (param_2->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      uVar9 = *(undefined4 *)(pFVar2 + 0x70);
      uVar8 = *(undefined4 *)(pFVar2 + 0x38);
      uVar7 = *(undefined4 *)pFVar2;
    }
    if (-1 < AnimationChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAnimationBlendSpacePlayerFields>
                ((TLogScope<0> *)&local_58);
      QueryPerformanceCounter(&local_78);
      *local_58 = CONCAT44(local_78.s.HighPart,local_78.s.LowPart);
      uVar6 = FObjectTrace::GetObjectId(param_1->AnimInstanceProxy->AnimInstanceObject);
      local_58[1] = uVar6;
      pUVar5 = (UObject *)(**(code **)(param_2->_padding_ + 0x148))(param_2);
      uVar6 = FObjectTrace::GetObjectId(pUVar5);
      local_58[2] = uVar6;
      *(int *)(local_58 + 3) = param_1->CurrentNodeId;
      *(float *)((longlong)local_58 + 0x1c) = (float)local_70;
      *(float *)(local_58 + 4) = (float)local_68;
      *(float *)((longlong)local_58 + 0x24) = (float)local_60;
      *(undefined4 *)(local_58 + 5) = uVar7;
      *(undefined4 *)((longlong)local_58 + 0x2c) = uVar8;
      *(undefined4 *)(local_58 + 6) = uVar9;
      *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
    }
  }
  return;
}

