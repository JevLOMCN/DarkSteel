// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a1743f0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetTestFlags(FRigVMFunction_AccumulateVectorLerpTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a174400

bool __thiscall
FRigVMFunction_AccumulateVectorLerpTest::IsStressTest(FRigVMFunction_AccumulateVectorLerpTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1744a0

uint __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateVectorLerpTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a174510

FString * __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateVectorLerpTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a174540

int __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateVectorLerpTest *this)

{
  return 0x11e;
}

// GetTests @ 14a1747d0

/* WARNING: Removing unreachable block (ram,0x00014a1748bd) */
/* WARNING: Removing unreachable block (ram,0x00014a174988) */

void __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetTests
          (FRigVMFunction_AccumulateVectorLerpTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorLerp");
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

// RunTest @ 14a1749f0

bool __thiscall
FRigVMFunction_AccumulateVectorLerpTest::RunTest
          (FRigVMFunction_AccumulateVectorLerpTest *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  (**(code **)(*(longlong *)this + 0x100))();
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).TargetValue.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).TargetValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).Blend = 0.0;
  (this->Unit).InitialValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).InitialValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).Result.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).Result.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIsInitialized = false;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).TargetValue.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).InitialValue.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).Result.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Z = (double)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014a174a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar4;
}

// RunRigVMStructTest @ 14a174ab0

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
FRigVMFunction_AccumulateVectorLerpTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateVectorLerpTest *this,FString *param_1)

{
  TVector<double> *pTVar1;
  bool *pbVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  FString local_38 [2];
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Unit).InitialValue.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).InitialValue.field0_0x0._s_0.Y = (double)uVar7;
  (this->Unit).InitialValue.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Unit).TargetValue.field0_0x0._s_0.X = 8.0;
  (this->Unit).TargetValue.field0_0x0._s_0.Y = 0.0;
  (this->Unit).TargetValue.field0_0x0._s_0.Z = 0.0;
  (this->Unit).Blend = 0.5;
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar6 = __real_3e45798ee2308c3a;
  pTVar1 = &(this->Unit).Result;
  dVar5 = (pTVar1->field0_0x0)._s_0.X - __real_4010000000000000;
  uVar8 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar4)(this,(double)CONCAT44(uVar9,uVar8) < __real_3e45798ee2308c3a ||
                 (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee2308c3a,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar5 = (pTVar1->field0_0x0)._s_0.X - __real_4010000000000000;
  uVar8 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar4)(this,(double)CONCAT44(uVar9,uVar8) < dVar6 || (double)CONCAT44(uVar9,uVar8) == dVar6,
            local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pbVar2 = &(this->Unit).bIsInitialized;
  pTVar3 = &(this->Unit).AccumulatedValue;
  FRigVMFunction_AccumulateVectorLerp::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).TargetValue,
             &(this->Unit).InitialValue,(this->Unit).Blend,(this->Unit).bIntegrateDeltaTime,pTVar1,
             pTVar3,pbVar2);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar5 = (pTVar1->field0_0x0)._s_0.X - __real_4018000000000000;
  uVar8 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar4)(this,(double)CONCAT44(uVar9,uVar8) < dVar6 || (double)CONCAT44(uVar9,uVar8) == dVar6,
            local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_AccumulateVectorLerp::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).TargetValue,
             &(this->Unit).InitialValue,(this->Unit).Blend,(this->Unit).bIntegrateDeltaTime,pTVar1,
             pTVar3,pbVar2);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar5 = (pTVar1->field0_0x0)._s_0.X - __real_401c000000000000;
  uVar8 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar4)(this,(double)CONCAT44(uVar9,uVar8) < dVar6 || (double)CONCAT44(uVar9,uVar8) == dVar6,
            local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a174d30

FString * __thiscall
FRigVMFunction_AccumulateVectorLerpTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateVectorLerpTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorLerp");
  return __return_storage_ptr__;
}

// InitAndExecute @ 14a1ae0a0

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
FRigVMFunction_AccumulateVectorLerpTest::InitAndExecute
          (FRigVMFunction_AccumulateVectorLerpTest *this)

{
  (**(code **)((this->Unit)._padding_ + 0x38))();
  FRigVMFunction_AccumulateVectorLerp::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).TargetValue,
             &(this->Unit).InitialValue,(this->Unit).Blend,(this->Unit).bIntegrateDeltaTime,
             &(this->Unit).Result,&(this->Unit).AccumulatedValue,&(this->Unit).bIsInitialized);
  return;
}

