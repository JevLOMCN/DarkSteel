// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a15be40

EAutomationTestFlags __thiscall
FRigVMFunction_TimelineTest::GetTestFlags(FRigVMFunction_TimelineTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a15be50

bool __thiscall FRigVMFunction_TimelineTest::IsStressTest(FRigVMFunction_TimelineTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a15be60

uint __thiscall FRigVMFunction_TimelineTest::GetRequiredDeviceNum(FRigVMFunction_TimelineTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a15be70

FString * __thiscall
FRigVMFunction_TimelineTest::GetTestSourceFileName
          (FRigVMFunction_TimelineTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Timeline.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a15bea0

int __thiscall FRigVMFunction_TimelineTest::GetTestSourceFileLine(FRigVMFunction_TimelineTest *this)

{
  return 0x15;
}

// GetTests @ 14a15c090

/* WARNING: Removing unreachable block (ram,0x00014a15c17d) */
/* WARNING: Removing unreachable block (ram,0x00014a15c248) */

void __thiscall
FRigVMFunction_TimelineTest::GetTests
          (FRigVMFunction_TimelineTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_Timeline");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14a15c3a0

bool __thiscall
FRigVMFunction_TimelineTest::RunTest(FRigVMFunction_TimelineTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).Speed = 1.0;
  (this->Unit).Time = 0.0;
  (this->Unit).AccumulatedValue = 0.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a15c3e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a15c410

bool __thiscall
FRigVMFunction_TimelineTest::RunRigVMStructTest(FRigVMFunction_TimelineTest *this,FString *param_1)

{
  bool *pbVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  longlong lVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float *local_res8;
  bool *local_res18;
  float *local_78;
  FString local_70;
  FString local_60 [2];
  
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0x3ff0000000000000;
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_70,L"unexpected time");
  fVar6 = __real_322bcc77;
  pfVar8 = &(this->Unit).Time;
  (*pcVar4)(this,(float)((uint)(*pfVar8 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                 <= __real_322bcc77,&local_70,0);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_70,L"unexpected time");
  (*pcVar4)(this,(float)((uint)(*pfVar8 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                 <= fVar6,&local_70,0);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  lVar5 = *(longlong *)&this->field_0x370;
  pbVar1 = &(this->Unit).bIsInitialized;
  pfVar2 = &(this->Unit).Speed;
  pfVar3 = &(this->Unit).AccumulatedValue;
  if (*pbVar1 == false) {
    *pfVar3 = 0.0;
    *pfVar8 = 0.0;
    *pbVar1 = true;
  }
  local_res18 = &(this->Unit).bIsInitialized;
  local_res8 = &(this->Unit).Speed;
  pfVar7 = &(this->Unit).Time;
  fVar9 = (float)*(double *)(lVar5 + 0x20) * *pfVar2 + *pfVar3;
  *pfVar3 = fVar9;
  *pfVar8 = fVar9;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_60,L"unexpected time");
  (*pcVar4)(this,(float)((uint)(*pfVar7 - __real_40000000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                 <= fVar6,local_60,0);
  local_78 = pfVar2;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)pbVar1;
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    local_78 = local_res8;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
  }
  pfVar8 = &(this->Unit).AccumulatedValue;
  lVar5 = *(longlong *)&this->field_0x370;
  if (*pbVar1 == false) {
    *pfVar3 = 0.0;
    *pfVar7 = 0.0;
    *pbVar1 = true;
  }
  fVar9 = (float)*(double *)(lVar5 + 0x20) * *pfVar2 + *pfVar3;
  *pfVar3 = fVar9;
  *pfVar7 = fVar9;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_60,L"unexpected time");
  (*pcVar4)(this,(float)((uint)(*pfVar7 - __real_40400000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                 <= fVar6,local_60,0);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  lVar5 = *(longlong *)&this->field_0x370;
  *local_78 = 0.5;
  if (*local_70.Data.AllocatorInstance.Data == (FScriptContainerElement)0x0) {
    *pfVar8 = 0.0;
    *pfVar7 = 0.0;
    *local_70.Data.AllocatorInstance.Data = (FScriptContainerElement)0x1;
  }
  fVar9 = (float)*(double *)(lVar5 + 0x20) * __real_3f000000 + *pfVar8;
  *pfVar8 = fVar9;
  *pfVar7 = fVar9;
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_60,L"unexpected time");
  (*pcVar4)(this,(float)((uint)((this->Unit).Time - __real_40600000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar6,local_60,0);
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a15c780

FString * __thiscall
FRigVMFunction_TimelineTest::GetBeautifiedTestName
          (FRigVMFunction_TimelineTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_Timeline");
  return __return_storage_ptr__;
}

// InitAndExecute @ 14a1ae220

void __thiscall FRigVMFunction_TimelineTest::InitAndExecute(FRigVMFunction_TimelineTest *this)

{
  longlong lVar1;
  float fVar2;
  
  (**(code **)((this->Unit)._padding_ + 0x38))();
  lVar1 = *(longlong *)&this->field_0x370;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).Time = 0.0;
    (this->Unit).AccumulatedValue = 0.0;
    (this->Unit).bIsInitialized = true;
  }
  fVar2 = (float)*(double *)(lVar1 + 0x20) * (this->Unit).Speed + (this->Unit).AccumulatedValue;
  (this->Unit).AccumulatedValue = fVar2;
  (this->Unit).Time = fVar2;
  return;
}

