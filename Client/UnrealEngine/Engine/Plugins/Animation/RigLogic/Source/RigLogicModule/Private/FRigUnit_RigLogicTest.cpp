// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 9

// GetTestFlags @ 14a65b8b0

EAutomationTestFlags __thiscall FRigUnit_RigLogicTest::GetTestFlags(FRigUnit_RigLogicTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a65b8c0

bool __thiscall FRigUnit_RigLogicTest::IsStressTest(FRigUnit_RigLogicTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a65b8d0

uint __thiscall FRigUnit_RigLogicTest::GetRequiredDeviceNum(FRigUnit_RigLogicTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a65b8e0

FString * __thiscall
FRigUnit_RigLogicTest::GetTestSourceFileName
          (FRigUnit_RigLogicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigUnit_RigLogic_Test.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a65b910

int __thiscall FRigUnit_RigLogicTest::GetTestSourceFileLine(FRigUnit_RigLogicTest *this)

{
  return 0xfc;
}

// GetTests @ 14a65b920

/* WARNING: Removing unreachable block (ram,0x00014a65ba0d) */
/* WARNING: Removing unreachable block (ram,0x00014a65bad8) */

void __thiscall
FRigUnit_RigLogicTest::GetTests
          (FRigUnit_RigLogicTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_RigLogic");
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

// RunTest @ 14a65bb00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_RigLogicTest::RunTest(FRigUnit_RigLogicTest *this,FString *param_1)

{
  undefined1 uVar1;
  URigHierarchy *this_00;
  FRigUnit_RigLogic_Data local_b8;
  bool local_10;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)&this->_padding_);
  URigHierarchy::Reset(this_00);
  FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data(&local_b8);
  local_10 = false;
  FRigUnit_RigLogic_Data::operator=(&(this->Unit).Data,&local_b8);
  (this->Unit).bIsInitialized = local_10;
  FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data(&local_b8);
                    /* WARNING: Could not recover jumptable at 0x00014a65bb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunControlRigUnitTest @ 14a65bbb0

bool __thiscall
FRigUnit_RigLogicTest::RunControlRigUnitTest(FRigUnit_RigLogicTest *this,FString *param_1)

{
  return true;
}

// GetBeautifiedTestName @ 14a65bbc0

FString * __thiscall
FRigUnit_RigLogicTest::GetBeautifiedTestName
          (FRigUnit_RigLogicTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_RigLogic");
  return __return_storage_ptr__;
}

