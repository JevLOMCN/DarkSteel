// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FState @ 14147e9e0

FState * __thiscall FChaosMode::FState::FState(FState *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FState *pFVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  LARGE_INTEGER local_res8;
  
  (this->Current).Counter = 0;
  this->Enabled = 0;
  QueryPerformanceCounter(&local_res8);
  fVar2 = __real_3f800000;
  lVar6 = 0xb2cb;
  pFVar7 = this;
  do {
    pFVar7 = (FState *)pFVar7->DelayTimes;
    local_res8.s.LowPart = local_res8.s.LowPart * 0xbb38435 + 0x3619636b;
    *(float *)pFVar7 = (float)(local_res8.s.LowPart >> 9 | 0x3f800000) - fVar2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pfVar8 = this->DelayTimes + 1;
  lVar6 = 2;
  lVar10 = 0x3b99;
  do {
    lVar11 = 0x3b99;
    pfVar9 = pfVar8;
    do {
      uVar4 = local_res8.s.LowPart * 0xbb38435 + 0x3619636b;
      uVar5 = uVar4 * 0xbb38435 + 0x3619636b;
      local_res8.s.LowPart = uVar5 * 0xbb38435 + 0x3619636b;
      pfVar9[-1] = ((float)(uVar4 >> 9 | 0x3f800000) - fVar2) * pfVar9[-1];
      *pfVar9 = ((float)(uVar5 >> 9 | 0x3f800000) - fVar2) * *pfVar9;
      pfVar9[1] = ((float)(local_res8.s.LowPart >> 9 | 0x3f800000) - fVar2) * pfVar9[1];
      fVar1 = __real_3727c5ac;
      pfVar9 = pfVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  do {
    pfVar8[-1] = pfVar8[-1] * fVar1;
    *pfVar8 = *pfVar8 * fVar1;
    pfVar8[1] = pfVar8[1] * fVar1;
    fVar3 = __real_4732cb00;
    lVar10 = lVar10 + -1;
    pfVar8 = pfVar8 + 3;
  } while (lVar10 != 0);
  lVar6 = 0x8f0;
  do {
    local_res8.s.LowPart = local_res8.s.LowPart * 0xbb38435 + 0x3619636b;
    this->DelayTimes[(int)(((float)(local_res8.s.LowPart >> 9 | 0x3f800000) - fVar2) * fVar3)] = 0.0
    ;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = 0x1c9;
  do {
    local_res8.s.LowPart = local_res8.s.LowPart * 0xbb38435 + 0x3619636b;
    this->DelayTimes[(int)(((float)(local_res8.s.LowPart >> 9 | 0x3f800000) - fVar2) * fVar3)] =
         5e-05;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return this;
}

// Push @ 1415d9ca0

void __thiscall
ExecutionResourceImpl::FState::Push
          (FState *this,FTask *param_1,TRefCountPtr<IExecutionResource> param_2)

{
  int *piVar1;
  IExecutionResource *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FTask *local_res10 [3];
  
  local_res10[0] = param_1;
  if (((FTask *)this->MainTask == (FTask *)&DAT_00000001) || ((FTask *)this->MainTask == param_1)) {
    this->MainTask = (ulong64)param_1;
    pIVar2 = (IExecutionResource *)(this->MainStack).AllocatorInstance.Data;
    if ((pIVar2 <= param_2.Reference) && (param_2.Reference < pIVar2 + (this->MainStack).ArrayMax))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->MainStack).ArrayNum;
    piVar1 = &(this->MainStack).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->MainStack).AllocatorInstance,piVar1);
    }
    (this->MainStack).ArrayNum = iVar5 + 1;
    pFVar7 = (this->MainStack).AllocatorInstance.Data;
  }
  else {
    uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    pTVar6 = TMapBase<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<LowLevelTasks::FTask_const_*_const_&>
                       ((TMapBase<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->AdditionalStacks,uVar8 >> 0x10 ^ uVar8,local_res10);
    pIVar2 = (IExecutionResource *)(pTVar6->AllocatorInstance).Data;
    if ((pIVar2 <= param_2.Reference) && (param_2.Reference < pIVar2 + pTVar6->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = pTVar6->ArrayNum;
    if (iVar5 == pTVar6->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar5 + 1;
    pFVar7 = (pTVar6->AllocatorInstance).Data;
  }
  *(IExecutionResource *)(pFVar7 + (longlong)iVar5 * 8) = (IExecutionResource)0x0;
  *(IExecutionResource *)(pFVar7 + (longlong)iVar5 * 8) = *param_2.Reference;
  *param_2.Reference = (IExecutionResource)0x0;
  return;
}

