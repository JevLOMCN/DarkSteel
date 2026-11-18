// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// GetTestFlags @ 14a16d660

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetTestFlags(FRigVMFunction_AccumulateFloatAddTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a16d670

bool __thiscall
FRigVMFunction_AccumulateFloatAddTest::IsStressTest(FRigVMFunction_AccumulateFloatAddTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a16d680

uint __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateFloatAddTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a16d690

FString * __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateFloatAddTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a16d6c0

int __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateFloatAddTest *this)

{
  return 0xca;
}

// GetTests @ 14a16d750

/* WARNING: Removing unreachable block (ram,0x00014a16d83d) */
/* WARNING: Removing unreachable block (ram,0x00014a16d908) */

void __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetTests
          (FRigVMFunction_AccumulateFloatAddTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatAdd");
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

// RunTest @ 14a16db30

bool __thiscall
FRigVMFunction_AccumulateFloatAddTest::RunTest
          (FRigVMFunction_AccumulateFloatAddTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Increment = 0.0;
  (this->Unit).InitialValue = 0.0;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).Result = 0.0;
  (this->Unit).AccumulatedValue = 0.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a16db78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a16dbf0

bool __thiscall
FRigVMFunction_AccumulateFloatAddTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateFloatAddTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  FString local_28 [2];
  
  *(undefined8 *)(this->_padding_ + 0x20) = 0x3fe0000000000000;
  (this->Unit).Increment = 1.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3f800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3f800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40000000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40400000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).bIntegrateDeltaTime = true;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40600000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a16de10

FString * __thiscall
FRigVMFunction_AccumulateFloatAddTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateFloatAddTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatAdd");
  return __return_storage_ptr__;
}

// Execute @ 14a19d7d0

void __thiscall
FRigVMFunction_AccumulateFloatAddTest::Execute(FRigVMFunction_AccumulateFloatAddTest *this)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = this->_padding_;
  fVar1 = (this->Unit).InitialValue;
  fVar3 = (this->Unit).Increment;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedValue = fVar1;
    (this->Unit).Result = fVar1;
    (this->Unit).bIsInitialized = true;
  }
  if ((this->Unit).bIntegrateDeltaTime != false) {
    fVar3 = (float)*(double *)(lVar2 + 0x20) * fVar3;
  }
  fVar3 = (this->Unit).AccumulatedValue + fVar3;
  (this->Unit).AccumulatedValue = fVar3;
  (this->Unit).Result = fVar3;
  return;
}

// InitAndExecute @ 14a1ade70

void __thiscall
FRigVMFunction_AccumulateFloatAddTest::InitAndExecute(FRigVMFunction_AccumulateFloatAddTest *this)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  (**(code **)((this->Unit)._padding_ + 0x38))();
  lVar2 = this->_padding_;
  fVar1 = (this->Unit).InitialValue;
  fVar3 = (this->Unit).Increment;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedValue = fVar1;
    (this->Unit).Result = fVar1;
    (this->Unit).bIsInitialized = true;
  }
  if ((this->Unit).bIntegrateDeltaTime != false) {
    fVar3 = (float)*(double *)(lVar2 + 0x20) * fVar3;
  }
  fVar3 = (this->Unit).AccumulatedValue + fVar3;
  (this->Unit).AccumulatedValue = fVar3;
  (this->Unit).Result = fVar3;
  return;
}

