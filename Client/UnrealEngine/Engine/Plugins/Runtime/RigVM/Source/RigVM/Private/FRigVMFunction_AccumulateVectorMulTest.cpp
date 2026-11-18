// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a1710b0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetTestFlags(FRigVMFunction_AccumulateVectorMulTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1710c0

bool __thiscall
FRigVMFunction_AccumulateVectorMulTest::IsStressTest(FRigVMFunction_AccumulateVectorMulTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1710d0

uint __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateVectorMulTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a171120

FString * __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateVectorMulTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a171190

int __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateVectorMulTest *this)

{
  return 0xff;
}

// GetTests @ 14a1714d0

/* WARNING: Removing unreachable block (ram,0x00014a1715bd) */
/* WARNING: Removing unreachable block (ram,0x00014a171688) */

void __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetTests
          (FRigVMFunction_AccumulateVectorMulTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorMul");
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

// RunTest @ 14a171780

bool __thiscall
FRigVMFunction_AccumulateVectorMulTest::RunTest
          (FRigVMFunction_AccumulateVectorMulTest *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  (**(code **)(*(longlong *)this + 0x100))();
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Unit).Multiplier.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->Unit).Multiplier.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).InitialValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).InitialValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIsInitialized = false;
  (this->Unit).Result.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).Result.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).Multiplier.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).InitialValue.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).Result.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Z = (double)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014a171805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar4;
}

// RunRigVMStructTest @ 14a171820

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
FRigVMFunction_AccumulateVectorMulTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateVectorMulTest *this,FString *param_1)

{
  TVector<double> *pTVar1;
  bool *pbVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FString local_38 [2];
  
  (this->Unit).Multiplier.field0_0x0._s_0.X = 2.0;
  (this->Unit).Multiplier.field0_0x0._s_0.Y = 2.0;
  (this->Unit).Multiplier.field0_0x0._s_0.Z = 2.0;
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar5 = __real_3e45798ee2308c3a;
  pTVar1 = &(this->Unit).Result;
  dVar6 = (pTVar1->field0_0x0)._s_0.X - __real_4000000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3e45798ee2308c3a,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar6 = (pTVar1->field0_0x0)._s_0.X - __real_4000000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar5,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pbVar2 = &(this->Unit).bIsInitialized;
  pTVar3 = &(this->Unit).AccumulatedValue;
  FRigVMFunction_AccumulateVectorMul::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).Multiplier,
             &(this->Unit).InitialValue,(this->Unit).bIntegrateDeltaTime,pTVar1,pTVar3,pbVar2);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar6 = (pTVar1->field0_0x0)._s_0.X - __real_4010000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar5,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_AccumulateVectorMul::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).Multiplier,
             &(this->Unit).InitialValue,(this->Unit).bIntegrateDeltaTime,pTVar1,pTVar3,pbVar2);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar6 = (pTVar1->field0_0x0)._s_0.X - __real_4020000000000000;
  (*pcVar4)(this,(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar5,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a171c70

FString * __thiscall
FRigVMFunction_AccumulateVectorMulTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateVectorMulTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorMul");
  return __return_storage_ptr__;
}

// InitAndExecute @ 14a1ae120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_AccumulateVectorMulTest::InitAndExecute(FRigVMFunction_AccumulateVectorMulTest *this)

{
  (**(code **)((this->Unit)._padding_ + 0x38))();
  FRigVMFunction_AccumulateVectorMul::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).Multiplier,
             &(this->Unit).InitialValue,(this->Unit).bIntegrateDeltaTime,&(this->Unit).Result,
             &(this->Unit).AccumulatedValue,&(this->Unit).bIsInitialized);
  return;
}

