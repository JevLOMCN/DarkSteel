// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a13bf50

EAutomationTestFlags __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetTestFlags
          (FRigVMFunction_DeltaFromPreviousFloatTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a13bf60

bool __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::IsStressTest
          (FRigVMFunction_DeltaFromPreviousFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a13bfb0

uint __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetRequiredDeviceNum
          (FRigVMFunction_DeltaFromPreviousFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a13c040

FString * __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetTestSourceFileName
          (FRigVMFunction_DeltaFromPreviousFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_DeltaFromPrevious.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a13c0d0

int __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetTestSourceFileLine
          (FRigVMFunction_DeltaFromPreviousFloatTest *this)

{
  return 0x52;
}

// GetTests @ 14a13c1b0

/* WARNING: Removing unreachable block (ram,0x00014a13c29d) */
/* WARNING: Removing unreachable block (ram,0x00014a13c368) */

void __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetTests
          (FRigVMFunction_DeltaFromPreviousFloatTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_DeltaFromPreviousFloat");
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

// RunTest @ 14a13c3f0

bool __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::RunTest
          (FRigVMFunction_DeltaFromPreviousFloatTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Value = 0.0;
  (this->Unit).Delta = 0.0;
  (this->Unit).PreviousValue = 0.0;
  (this->Unit).Cache = 0.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a13c432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a13c5f0

bool __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::RunRigVMStructTest
          (FRigVMFunction_DeltaFromPreviousFloatTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FString local_48 [4];
  
  *(undefined8 *)(this->_padding_ + 0x20) = 0x3fb99999a0000000;
  (this->Unit).Value = 1.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)(this->Unit).Delta & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 __real_322bcc77,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  fVar3 = __real_3f800000;
  (*pcVar1)(this,(float)((uint)((this->Unit).PreviousValue - __real_3f800000) & uVar4) <= fVar2,
            local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)(this->Unit).Delta & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).PreviousValue - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)(this->Unit).Delta & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).PreviousValue - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 2.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Delta - __real_bf800000) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).PreviousValue - fVar3) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 5.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Delta - __real_c0400000) & uVar4) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_48,L"unexpected average result");
  (*pcVar1)(this,(float)((uint)((this->Unit).PreviousValue - __real_40000000) & uVar4) <= fVar2,
            local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a13c9a0

FString * __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::GetBeautifiedTestName
          (FRigVMFunction_DeltaFromPreviousFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_DeltaFromPreviousFloat");
  return __return_storage_ptr__;
}

// Execute @ 14a19e7b0

void __thiscall
FRigVMFunction_DeltaFromPreviousFloatTest::Execute(FRigVMFunction_DeltaFromPreviousFloatTest *this)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = this->_padding_;
  fVar1 = (this->Unit).Value;
  if ((this->Unit).bIsInitialized == false) {
    (this->Unit).Cache = fVar1;
    (this->Unit).bIsInitialized = true;
  }
  fVar2 = (this->Unit).Cache;
  (this->Unit).PreviousValue = fVar2;
  (this->Unit).Delta = fVar2 - fVar1;
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  if (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    (this->Unit).Cache = fVar1;
  }
  return;
}

