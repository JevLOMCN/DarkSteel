// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// GetTestFlags @ 14a175bf0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetTestFlags(FRigVMFunction_AccumulateFloatRangeTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a175c10

bool __thiscall
FRigVMFunction_AccumulateFloatRangeTest::IsStressTest(FRigVMFunction_AccumulateFloatRangeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a175c20

uint __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateFloatRangeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a175c30

FString * __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateFloatRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a175c60

int __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateFloatRangeTest *this)

{
  return 0x12f;
}

// GetTests @ 14a175cd0

/* WARNING: Removing unreachable block (ram,0x00014a175dbd) */
/* WARNING: Removing unreachable block (ram,0x00014a175e88) */

void __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetTests
          (FRigVMFunction_AccumulateFloatRangeTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatRange");
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

// RunTest @ 14a175f90

bool __thiscall
FRigVMFunction_AccumulateFloatRangeTest::RunTest
          (FRigVMFunction_AccumulateFloatRangeTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Value = 0.0;
  (this->Unit).Minimum = 0.0;
  (this->Unit).Maximum = 0.0;
  (this->Unit).AccumulatedMinimum = 0.0;
  (this->Unit).AccumulatedMaximum = 0.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a175fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a175ff0

bool __thiscall
FRigVMFunction_AccumulateFloatRangeTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateFloatRangeTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FString local_48 [4];
  
  (this->Unit).Value = 4.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_40800000;
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)((this->Unit).Minimum - __real_40800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Maximum - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 5.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  fVar3 = __real_40a00000;
  (*pcVar1)(this,(float)((uint)((this->Unit).Minimum - __real_40a00000) & uVar4) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Maximum - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 3.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Minimum - __real_40400000) & uVar4) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Maximum - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 7.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Minimum - __real_40400000) & uVar4) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  fVar3 = __real_40e00000;
  (*pcVar1)(this,(float)((uint)((this->Unit).Maximum - __real_40e00000) & uVar4) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 2.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Minimum - __real_40000000) & uVar4) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Maximum - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a176390

FString * __thiscall
FRigVMFunction_AccumulateFloatRangeTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateFloatRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatRange");
  return __return_storage_ptr__;
}

// Execute @ 14a19da00

void __thiscall
FRigVMFunction_AccumulateFloatRangeTest::Execute(FRigVMFunction_AccumulateFloatRangeTest *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->Unit).Value;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedMaximum = fVar1;
    (this->Unit).AccumulatedMinimum = fVar1;
    (this->Unit).bIsInitialized = true;
  }
  fVar2 = (this->Unit).AccumulatedMinimum;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  (this->Unit).AccumulatedMinimum = fVar2;
  (this->Unit).Minimum = fVar2;
  fVar2 = (this->Unit).AccumulatedMaximum;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (this->Unit).AccumulatedMaximum = fVar2;
  (this->Unit).Maximum = fVar2;
  return;
}

// InitAndExecute @ 14a1adfb0

void __thiscall
FRigVMFunction_AccumulateFloatRangeTest::InitAndExecute
          (FRigVMFunction_AccumulateFloatRangeTest *this)

{
  float fVar1;
  float fVar2;
  
  (**(code **)((this->Unit)._padding_ + 0x38))();
  fVar2 = (this->Unit).Value;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).AccumulatedMaximum = fVar2;
    (this->Unit).AccumulatedMinimum = fVar2;
    (this->Unit).bIsInitialized = true;
  }
  fVar1 = (this->Unit).AccumulatedMinimum;
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  (this->Unit).AccumulatedMinimum = fVar1;
  (this->Unit).Minimum = fVar1;
  fVar1 = (this->Unit).AccumulatedMaximum;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  (this->Unit).AccumulatedMaximum = fVar2;
  (this->Unit).Maximum = fVar2;
  return;
}

