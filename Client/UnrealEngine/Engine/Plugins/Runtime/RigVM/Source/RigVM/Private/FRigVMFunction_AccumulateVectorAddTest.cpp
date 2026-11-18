// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a16eec0

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetTestFlags(FRigVMFunction_AccumulateVectorAddTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a16eed0

bool __thiscall
FRigVMFunction_AccumulateVectorAddTest::IsStressTest(FRigVMFunction_AccumulateVectorAddTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a16eee0

uint __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateVectorAddTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a16ef40

FString * __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateVectorAddTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a16ef70

int __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateVectorAddTest *this)

{
  return 0xdd;
}

// GetTests @ 14a16f1d0

/* WARNING: Removing unreachable block (ram,0x00014a16f2bd) */
/* WARNING: Removing unreachable block (ram,0x00014a16f388) */

void __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetTests
          (FRigVMFunction_AccumulateVectorAddTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorAdd");
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

// RunTest @ 14a16f3b0

bool __thiscall
FRigVMFunction_AccumulateVectorAddTest::RunTest
          (FRigVMFunction_AccumulateVectorAddTest *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  (**(code **)(*(longlong *)this + 0x100))();
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).Increment.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->Unit).Increment.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIntegrateDeltaTime = false;
  (this->Unit).InitialValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).InitialValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIsInitialized = false;
  (this->Unit).Result.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).Result.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).Increment.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).InitialValue.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).Result.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).AccumulatedValue.field0_0x0._s_0.Z = (double)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014a16f435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar4;
}

// RunRigVMStructTest @ 14a16f470

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
FRigVMFunction_AccumulateVectorAddTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateVectorAddTest *this,FString *param_1)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  bool *pbVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  FString local_38 [2];
  
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0x3fe0000000000000;
  pTVar1 = &(this->Unit).Increment;
  (pTVar1->field0_0x0)._s_0.X = 1.0;
  (this->Unit).Increment.field0_0x0._s_0.Y = 0.0;
  (this->Unit).Increment.field0_0x0._s_0.Z = 0.0;
  InitAndExecute(this);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar11 = __real_3e45798ee2308c3a;
  pTVar2 = &(this->Unit).Result;
  dVar7 = (pTVar2->field0_0x0)._s_0.X - __real_3ff0000000000000;
  uVar12 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar5)(this,(double)CONCAT44(uVar13,uVar12) < __real_3e45798ee2308c3a ||
                 (double)CONCAT44(uVar13,uVar12) == __real_3e45798ee2308c3a,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar7 = (pTVar2->field0_0x0)._s_0.X - __real_3ff0000000000000;
  uVar12 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar5)(this,(double)CONCAT44(uVar13,uVar12) < dVar11 ||
                 (double)CONCAT44(uVar13,uVar12) == dVar11,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pbVar3 = &(this->Unit).bIsInitialized;
  pTVar4 = &(this->Unit).AccumulatedValue;
  FRigVMFunction_AccumulateVectorAdd::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,&(this->Unit).InitialValue,
             (this->Unit).bIntegrateDeltaTime,pTVar2,pTVar4,pbVar3);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar7 = (pTVar2->field0_0x0)._s_0.X - __real_4000000000000000;
  uVar12 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar5)(this,(double)CONCAT44(uVar13,uVar12) < dVar11 ||
                 (double)CONCAT44(uVar13,uVar12) == dVar11,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_AccumulateVectorAdd::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,&(this->Unit).InitialValue,
             (this->Unit).bIntegrateDeltaTime,pTVar2,pTVar4,pbVar3);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar7 = (pTVar2->field0_0x0)._s_0.X - __real_4008000000000000;
  uVar12 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar5)(this,(double)CONCAT44(uVar13,uVar12) < dVar11 ||
                 (double)CONCAT44(uVar13,uVar12) == dVar11,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  lVar6 = *(longlong *)&this->field_0x370;
  (this->Unit).bIntegrateDeltaTime = true;
  if (*pbVar3 == false) {
    dVar7 = (this->Unit).InitialValue.field0_0x0._s_0.Y;
    (pTVar4->field0_0x0)._s_0.X = (this->Unit).InitialValue.field0_0x0._s_0.X;
    (this->Unit).AccumulatedValue.field0_0x0._s_0.Y = dVar7;
    (this->Unit).AccumulatedValue.field0_0x0._s_0.Z = (this->Unit).InitialValue.field0_0x0._s_0.Z;
    dVar7 = (this->Unit).AccumulatedValue.field0_0x0._s_0.Y;
    (pTVar2->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (this->Unit).Result.field0_0x0._s_0.Y = dVar7;
    (this->Unit).Result.field0_0x0._s_0.Z = (this->Unit).AccumulatedValue.field0_0x0._s_0.Z;
    *pbVar3 = true;
  }
  dVar7 = *(double *)(lVar6 + 0x20);
  dVar10 = (this->Unit).Increment.field0_0x0._s_0.Y;
  dVar9 = (this->Unit).Increment.field0_0x0._s_0.Z;
  (pTVar4->field0_0x0)._s_0.X = dVar7 * (pTVar1->field0_0x0)._s_0.X + (pTVar4->field0_0x0)._s_0.X;
  dVar9 = dVar7 * dVar9 + (this->Unit).AccumulatedValue.field0_0x0._s_0.Z;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar7 * dVar10 + (this->Unit).AccumulatedValue.field0_0x0._s_0.Y;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Unit).AccumulatedValue.field0_0x0 + 8) = auVar8;
  dVar7 = (this->Unit).AccumulatedValue.field0_0x0._s_0.Y;
  (pTVar2->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->Unit).Result.field0_0x0._s_0.Y = dVar7;
  (this->Unit).Result.field0_0x0._s_0.Z = (this->Unit).AccumulatedValue.field0_0x0._s_0.Z;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_38,L"unexpected accumulate result");
  dVar7 = (pTVar2->field0_0x0)._s_0.X - __real_400c000000000000;
  uVar12 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  (*pcVar5)(this,(double)CONCAT44(uVar13,uVar12) < dVar11 ||
                 (double)CONCAT44(uVar13,uVar12) == dVar11,local_38,0);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a16f790

FString * __thiscall
FRigVMFunction_AccumulateVectorAddTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateVectorAddTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorAdd");
  return __return_storage_ptr__;
}

// InitAndExecute @ 14a1ae030

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
FRigVMFunction_AccumulateVectorAddTest::InitAndExecute(FRigVMFunction_AccumulateVectorAddTest *this)

{
  (**(code **)((this->Unit)._padding_ + 0x38))();
  FRigVMFunction_AccumulateVectorAdd::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,&(this->Unit).Increment,
             &(this->Unit).InitialValue,(this->Unit).bIntegrateDeltaTime,&(this->Unit).Result,
             &(this->Unit).AccumulatedValue,&(this->Unit).bIsInitialized);
  return;
}

