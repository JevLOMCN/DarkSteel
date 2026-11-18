// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a177050

EAutomationTestFlags __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetTestFlags
          (FRigVMFunction_AccumulateVectorRangeTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a177060

bool __thiscall
FRigVMFunction_AccumulateVectorRangeTest::IsStressTest
          (FRigVMFunction_AccumulateVectorRangeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a177090

uint __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetRequiredDeviceNum
          (FRigVMFunction_AccumulateVectorRangeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a177120

FString * __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetTestSourceFileName
          (FRigVMFunction_AccumulateVectorRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Accumulate.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a177180

int __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetTestSourceFileLine
          (FRigVMFunction_AccumulateVectorRangeTest *this)

{
  return 0x148;
}

// GetTests @ 14a177190

/* WARNING: Removing unreachable block (ram,0x00014a17727d) */
/* WARNING: Removing unreachable block (ram,0x00014a177348) */

void __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetTests
          (FRigVMFunction_AccumulateVectorRangeTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorRange");
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

// RunTest @ 14a177400

bool __thiscall
FRigVMFunction_AccumulateVectorRangeTest::RunTest
          (FRigVMFunction_AccumulateVectorRangeTest *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  (**(code **)(*(longlong *)this + 0x100))();
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).Value.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Unit).Value.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).bIsInitialized = false;
  (this->Unit).Minimum.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).Minimum.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).Maximum.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).Maximum.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).AccumulatedMinimum.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).AccumulatedMinimum.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).AccumulatedMaximum.field0_0x0._s_0.X = (double)uVar1;
  (this->Unit).AccumulatedMaximum.field0_0x0._s_0.Y = (double)uVar2;
  (this->Unit).Value.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).Minimum.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).Maximum.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).AccumulatedMinimum.field0_0x0._s_0.Z = (double)uVar3;
  (this->Unit).AccumulatedMaximum.field0_0x0._s_0.Z = (double)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014a177497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar4;
}

// RunRigVMStructTest @ 14a1774d0

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
FRigVMFunction_AccumulateVectorRangeTest::RunRigVMStructTest
          (FRigVMFunction_AccumulateVectorRangeTest *this,FString *param_1)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  FRigVMFunction_AccumulateVectorRange *pFVar6;
  bool *pbVar7;
  code *pcVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FString local_c8 [9];
  
  pFVar6 = &this->Unit;
  pTVar1 = &(this->Unit).Value;
  (pTVar1->field0_0x0)._s_0.X = 3.0;
  (this->Unit).Value.field0_0x0._s_0.Y = 4.0;
  (this->Unit).Value.field0_0x0._s_0.Z = 5.0;
  (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  pTVar2 = &(this->Unit).Minimum;
  pTVar3 = &(this->Unit).Maximum;
  pbVar7 = &(this->Unit).bIsInitialized;
  pTVar4 = &(this->Unit).AccumulatedMaximum;
  pTVar5 = &(this->Unit).AccumulatedMinimum;
  FRigVMFunction_AccumulateVectorRange::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,pTVar2,pTVar3,pTVar5,pTVar4,pbVar7)
  ;
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar18 = __real_4008000000000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee2308c3a;
  dVar12 = (this->Unit).Minimum.field0_0x0._s_0.X - __real_4008000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3e45798ee2308c3a,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = __real_4010000000000000;
  dVar13 = (this->Unit).Minimum.field0_0x0._s_0.Y - __real_4010000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar11,
                                  SUB84(dVar13,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar13 = __real_4014000000000000;
  dVar14 = (this->Unit).Minimum.field0_0x0._s_0.Z - __real_4014000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar11,
                                  SUB84(dVar14,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar14 = (this->Unit).Maximum.field0_0x0._s_0.X - dVar18;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar11,
                                  SUB84(dVar14,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = (this->Unit).Maximum.field0_0x0._s_0.Y - dVar12;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar11,
                                  SUB84(dVar12,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = (this->Unit).Maximum.field0_0x0._s_0.Z - dVar13;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar11,
                                  SUB84(dVar12,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value.field0_0x0._s_0.X = 5.0;
  (this->Unit).Value.field0_0x0._s_0.Y = 6.0;
  (this->Unit).Value.field0_0x0._s_0.Z = 7.0;
  (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  FRigVMFunction_AccumulateVectorRange::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,pTVar2,pTVar3,pTVar5,pTVar4,pbVar7)
  ;
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = (this->Unit).Minimum.field0_0x0._s_0.X - dVar13;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar11,
                                  SUB84(dVar12,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = __real_4018000000000000;
  dVar14 = (this->Unit).Minimum.field0_0x0._s_0.Y - __real_4018000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar11,
                                  SUB84(dVar14,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar14 = __real_401c000000000000;
  dVar15 = (this->Unit).Minimum.field0_0x0._s_0.Z - __real_401c000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar11,
                                  SUB84(dVar15,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar15 = (this->Unit).Maximum.field0_0x0._s_0.X - dVar13;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar11,
                                  SUB84(dVar15,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar15 = (this->Unit).Maximum.field0_0x0._s_0.Y - dVar12;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar11,
                                  SUB84(dVar15,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar15 = (this->Unit).Maximum.field0_0x0._s_0.Z - dVar14;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar11,
                                  SUB84(dVar15,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value.field0_0x0._s_0.X = 1.0;
  (this->Unit).Value.field0_0x0._s_0.Y = 2.0;
  (this->Unit).Value.field0_0x0._s_0.Z = 3.0;
  FRigVMFunction_AccumulateVectorRange::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,pTVar2,pTVar3,pTVar5,pTVar4,pbVar7)
  ;
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar15 = __real_3ff0000000000000;
  dVar16 = (this->Unit).Minimum.field0_0x0._s_0.X - __real_3ff0000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar11,
                                  SUB84(dVar16,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar16 = __real_4000000000000000;
  dVar17 = (this->Unit).Minimum.field0_0x0._s_0.Y - __real_4000000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar11,
                                  SUB84(dVar17,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar17 = (this->Unit).Minimum.field0_0x0._s_0.Z - dVar18;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar11,
                                  SUB84(dVar17,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar17 = (this->Unit).Maximum.field0_0x0._s_0.X - dVar13;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar11,
                                  SUB84(dVar17,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar12 = (this->Unit).Maximum.field0_0x0._s_0.Y - dVar12;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar11,
                                  SUB84(dVar12,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar14 = (this->Unit).Maximum.field0_0x0._s_0.Z - dVar14;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar11,
                                  SUB84(dVar14,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value.field0_0x0._s_0.X = 1.0;
  (this->Unit).Value.field0_0x0._s_0.Y = 12.0;
  (this->Unit).Value.field0_0x0._s_0.Z = 13.0;
  FRigVMFunction_AccumulateVectorRange::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,pTVar1,pTVar2,pTVar3,pTVar5,pTVar4,pbVar7)
  ;
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar15 = (this->Unit).Minimum.field0_0x0._s_0.X - dVar15;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar11,
                                  SUB84(dVar15,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar16 = (this->Unit).Minimum.field0_0x0._s_0.Y - dVar16;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar11,
                                  SUB84(dVar16,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar18 = (this->Unit).Minimum.field0_0x0._s_0.Z - dVar18;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar11,
                                  SUB84(dVar18,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar13 = (this->Unit).Maximum.field0_0x0._s_0.X - dVar13;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar11,
                                  SUB84(dVar13,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar18 = (this->Unit).Maximum.field0_0x0._s_0.Y - __real_4028000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar11,
                                  SUB84(dVar18,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  pcVar8 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_c8,L"unexpected accumulate result");
  dVar18 = (this->Unit).Maximum.field0_0x0._s_0.Z - __real_402a000000000000;
  (*pcVar8)(this,(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar11,
                                  SUB84(dVar18,0) & uVar10) <= dVar9,local_c8,0);
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a177eb0

FString * __thiscall
FRigVMFunction_AccumulateVectorRangeTest::GetBeautifiedTestName
          (FRigVMFunction_AccumulateVectorRangeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"RigVM.RigVMFunctions.FRigVMFunction_AccumulateVectorRange");
  return __return_storage_ptr__;
}

