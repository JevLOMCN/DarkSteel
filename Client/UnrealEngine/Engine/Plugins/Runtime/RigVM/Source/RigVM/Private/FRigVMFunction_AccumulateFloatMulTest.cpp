// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// GetTestFlags @ 14a1701d0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetTestFlags(FRigVMFunction_AccumulateFloatMulTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1701e0

bool __thiscall
FRigVMFunction_AccumulateFloatMulTest::IsStressTest(FRigVMFunction_AccumulateFloatMulTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a170290

uint __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateFloatMulTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a1702b0

FString * __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateFloatMulTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a1702e0

int __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateFloatMulTest *this)

{
  return 0xf1;
}

// GetTests @ 14a170350

/* WARNING: Removing unreachable block (ram,0x00014a17043d) */
/* WARNING: Removing unreachable block (ram,0x00014a170508) */

void __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetTests
          (FRigVMFunction_AccumulateFloatMulTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatMul");
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

// RunTest @ 14a170560

bool __thiscall
FRigVMFunction_AccumulateFloatMulTest::RunTest
          (FRigVMFunction_AccumulateFloatMulTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Multiplier = 1.0;
  (this->Unit).InitialValue = 1.0;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).Result = 1.0;
  (this->Unit).AccumulatedValue = 1.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a1705c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a1705f0

bool __thiscall
FRigVMFunction_AccumulateFloatMulTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateFloatMulTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  FString local_28 [2];
  
  (this->Unit).Multiplier = 2.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40000000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
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
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41000000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a170790

FString * __thiscall
FRigVMFunction_AccumulateFloatMulTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateFloatMulTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatMul");
  return __return_storage_ptr__;
}

// Execute @ 14a19d920

void __thiscall
FRigVMFunction_AccumulateFloatMulTest::Execute(FRigVMFunction_AccumulateFloatMulTest *this)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = this->_padding_;
  fVar3 = (this->Unit).InitialValue;
  fVar2 = (this->Unit).Multiplier;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedValue = fVar3;
    (this->Unit).Result = fVar3;
    (this->Unit).bIsInitialized = true;
  }
  else {
    fVar3 = (this->Unit).AccumulatedValue;
  }
  if ((this->Unit).bIntegrateDeltaTime != false) {
    fVar2 = (float)((double)(fVar2 - __real_3f800000) * *(double *)(lVar1 + 0x20) +
                   __real_3ff0000000000000);
  }
  (this->Unit).AccumulatedValue = fVar3 * fVar2;
  (this->Unit).Result = fVar3 * fVar2;
  return;
}

// InitAndExecute @ 14a1adf10

void __thiscall
FRigVMFunction_AccumulateFloatMulTest::InitAndExecute(FRigVMFunction_AccumulateFloatMulTest *this)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  (**(code **)((this->Unit)._padding_ + 0x38))();
  lVar1 = this->_padding_;
  fVar3 = (this->Unit).InitialValue;
  fVar2 = (this->Unit).Multiplier;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedValue = fVar3;
    (this->Unit).Result = fVar3;
    (this->Unit).bIsInitialized = true;
  }
  else {
    fVar3 = (this->Unit).AccumulatedValue;
  }
  if ((this->Unit).bIntegrateDeltaTime != false) {
    fVar2 = (float)((double)(fVar2 - __real_3f800000) * *(double *)(lVar1 + 0x20) +
                   __real_3ff0000000000000);
  }
  (this->Unit).AccumulatedValue = fVar3 * fVar2;
  (this->Unit).Result = fVar3 * fVar2;
  return;
}

