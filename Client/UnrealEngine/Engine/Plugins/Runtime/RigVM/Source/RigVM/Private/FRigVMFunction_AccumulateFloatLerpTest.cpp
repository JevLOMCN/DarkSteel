// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a1736d0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetTestFlags(FRigVMFunction_AccumulateFloatLerpTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1736e0

bool __thiscall
FRigVMFunction_AccumulateFloatLerpTest::IsStressTest(FRigVMFunction_AccumulateFloatLerpTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1736f0

uint __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateFloatLerpTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a173770

FString * __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateFloatLerpTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a1737a0

int __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateFloatLerpTest *this)

{
  return 0x10e;
}

// GetTests @ 14a173840

/* WARNING: Removing unreachable block (ram,0x00014a17392d) */
/* WARNING: Removing unreachable block (ram,0x00014a1739f8) */

void __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetTests
          (FRigVMFunction_AccumulateFloatLerpTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatLerp");
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

// RunTest @ 14a173ac0

bool __thiscall
FRigVMFunction_AccumulateFloatLerpTest::RunTest
          (FRigVMFunction_AccumulateFloatLerpTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).TargetValue = 0.0;
  (this->Unit).InitialValue = 0.0;
  (this->Unit).Blend = 0.0;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).Result = 0.0;
  (this->Unit).AccumulatedValue = 0.0;
  (this->Unit).bIsInitialized = false;
                    /* WARNING: Could not recover jumptable at 0x00014a173b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a173b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRigVMFunction_AccumulateFloatLerpTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateFloatLerpTest *this,FString *param_1)

{
  FRigVMFunction_AccumulateFloatLerp *this_00;
  code *pcVar1;
  float fVar2;
  FString local_28 [2];
  
  this_00 = &this->Unit;
  (this->Unit).TargetValue = 8.0;
  (this->Unit).Blend = 0.5;
  (this->Unit).InitialValue = 0.0;
  (**(code **)(this_00->_padding_ + 0x38))(this_00);
  FRigVMFunction_AccumulateFloatLerp::Execute(this_00,*(FRigVMExecuteContext **)&this->field_0x370);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  (**(code **)(this_00->_padding_ + 0x38))(this_00);
  FRigVMFunction_AccumulateFloatLerp::Execute(this_00,*(FRigVMExecuteContext **)&this->field_0x370);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_AccumulateFloatLerp::Execute(this_00,*(FRigVMExecuteContext **)&this->field_0x370);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40c00000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_AccumulateFloatLerp::Execute(this_00,*(FRigVMExecuteContext **)&this->field_0x370);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_28,L"unexpected accumulate result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40e00000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a173d10

FString * __thiscall
FRigVMFunction_AccumulateFloatLerpTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateFloatLerpTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateFloatLerp");
  return __return_storage_ptr__;
}

