// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 9

// GetTestFlags @ 14df6b660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall FRigUnit_FullbodyIKTest::GetTestFlags(FRigUnit_FullbodyIKTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14df6b670

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_FullbodyIKTest::IsStressTest(FRigUnit_FullbodyIKTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14df6b680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FRigUnit_FullbodyIKTest::GetRequiredDeviceNum(FRigUnit_FullbodyIKTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14df6b690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_FullbodyIKTest::GetTestSourceFileName
          (FRigUnit_FullbodyIKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\RigUnit_FullbodyIK.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14df6b6c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_FullbodyIKTest::GetTestSourceFileLine(FRigUnit_FullbodyIKTest *this)

{
  return 0x22a;
}

// GetTests @ 14df6b6d0

/* WARNING: Removing unreachable block (ram,0x00014df6b7bd) */
/* WARNING: Removing unreachable block (ram,0x00014df6b888) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FullbodyIKTest::GetTests
          (FRigUnit_FullbodyIKTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_FullbodyIK");
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

// RunTest @ 14df6b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_FullbodyIKTest::RunTest(FRigUnit_FullbodyIKTest *this,FString *param_1)

{
  TArray<FFBIKEndEffector,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FFBIKConstraintOption,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFBIKEndEffector,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FFBIKConstraintOption,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  double dVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  URigHierarchy *this_00;
  FRigUnit_FullbodyIK *pFVar22;
  undefined1 auStack_2f8 [32];
  FRigUnit_FullbodyIK local_2d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)&this->_padding_);
  URigHierarchy::Reset(this_00);
  pFVar22 = FRigUnit_FullbodyIK::FRigUnit_FullbodyIK(&local_2d8);
  pTVar3 = &(this->Unit).Effectors;
  uVar8 = *(undefined3 *)&(pFVar22->Root).field_0x1;
  FVar9.Value = (pFVar22->Root).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar22->Effectors;
  (this->Unit).Root.Type = (pFVar22->Root).Type;
  *(undefined3 *)&(this->Unit).Root.field_0x1 = uVar8;
  (this->Unit).Root.Name.ComparisonIndex = (FNameEntryId)FVar9.Value;
  (this->Unit).Root.Name.Number = (pFVar22->Root).Name.Number;
  if (pTVar3 != pTVar1) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Effectors.ArrayNum = (pFVar22->Effectors).ArrayNum;
    (this->Unit).Effectors.ArrayMax = (pFVar22->Effectors).ArrayMax;
    (pFVar22->Effectors).ArrayNum = 0;
    (pFVar22->Effectors).ArrayMax = 0;
  }
  pTVar2 = &pFVar22->Constraints;
  pTVar4 = &(this->Unit).Constraints;
  if (pTVar4 != pTVar2) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Constraints.ArrayNum = (pFVar22->Constraints).ArrayNum;
    (this->Unit).Constraints.ArrayMax = (pFVar22->Constraints).ArrayMax;
    (pFVar22->Constraints).ArrayNum = 0;
    (pFVar22->Constraints).ArrayMax = 0;
  }
  fVar10 = (pFVar22->SolverProperty).MinLinearMotionStrength;
  fVar11 = (pFVar22->SolverProperty).AngularMotionStrength;
  fVar12 = (pFVar22->SolverProperty).MinAngularMotionStrength;
  (this->Unit).SolverProperty.LinearMotionStrength = (pFVar22->SolverProperty).LinearMotionStrength;
  (this->Unit).SolverProperty.MinLinearMotionStrength = fVar10;
  (this->Unit).SolverProperty.AngularMotionStrength = fVar11;
  (this->Unit).SolverProperty.MinAngularMotionStrength = fVar12;
  fVar10 = (pFVar22->SolverProperty).Precision;
  fVar11 = (pFVar22->SolverProperty).Damping;
  iVar13 = (pFVar22->SolverProperty).MaxIterations;
  (this->Unit).SolverProperty.DefaultTargetClamp = (pFVar22->SolverProperty).DefaultTargetClamp;
  (this->Unit).SolverProperty.Precision = fVar10;
  (this->Unit).SolverProperty.Damping = fVar11;
  (this->Unit).SolverProperty.MaxIterations = iVar13;
  uVar8 = *(undefined3 *)&(pFVar22->SolverProperty).field_0x21;
  (this->Unit).SolverProperty.bUseJacobianTranspose =
       (pFVar22->SolverProperty).bUseJacobianTranspose;
  *(undefined3 *)&(this->Unit).SolverProperty.field_0x21 = uVar8;
  (this->Unit).MotionProperty = pFVar22->MotionProperty;
  (this->Unit).bPropagateToChildren = pFVar22->bPropagateToChildren;
  bVar14 = (pFVar22->DebugOption).bColorAngularMotionStrength;
  bVar15 = (pFVar22->DebugOption).bColorLinearMotionStrength;
  bVar16 = (pFVar22->DebugOption).bDrawDebugAxes;
  bVar17 = (pFVar22->DebugOption).bDrawDebugEffector;
  bVar18 = (pFVar22->DebugOption).bDrawDebugConstraints;
  uVar19 = *(undefined2 *)&(pFVar22->DebugOption).field_0x6;
  uVar6 = *(undefined8 *)&(pFVar22->DebugOption).field_0x8;
  (this->Unit).DebugOption.bDrawDebugHierarchy = (pFVar22->DebugOption).bDrawDebugHierarchy;
  (this->Unit).DebugOption.bColorAngularMotionStrength = bVar14;
  (this->Unit).DebugOption.bColorLinearMotionStrength = bVar15;
  (this->Unit).DebugOption.bDrawDebugAxes = bVar16;
  (this->Unit).DebugOption.bDrawDebugEffector = bVar17;
  (this->Unit).DebugOption.bDrawDebugConstraints = bVar18;
  *(undefined2 *)&(this->Unit).DebugOption.field_0x6 = uVar19;
  *(undefined8 *)&(this->Unit).DebugOption.field_0x8 = uVar6;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Rotation.XY.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Rotation.XY.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Rotation.XY.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Rotation.ZW.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Rotation.ZW.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Rotation.ZW.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Translation.XY.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Translation.XY.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Translation.XY.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Translation.ZW.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Translation.ZW.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Translation.ZW.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Scale3D.XY.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Scale3D.XY.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Scale3D.XY.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (pFVar22->DebugOption).DrawWorldOffset.Scale3D.ZW.m128d_f64[1];
  (this->Unit).DebugOption.DrawWorldOffset.Scale3D.ZW.m128d_f64[0] =
       (pFVar22->DebugOption).DrawWorldOffset.Scale3D.ZW.m128d_f64[0];
  (this->Unit).DebugOption.DrawWorldOffset.Scale3D.ZW.m128d_f64[1] = dVar7;
  uVar20 = *(undefined4 *)&(pFVar22->DebugOption).field_0x74;
  uVar6 = *(undefined8 *)&(pFVar22->DebugOption).field_0x78;
  (this->Unit).DebugOption.DrawSize = (pFVar22->DebugOption).DrawSize;
  *(undefined4 *)&(this->Unit).DebugOption.field_0x74 = uVar20;
  *(undefined8 *)&(this->Unit).DebugOption.field_0x78 = uVar6;
  FRigUnit_FullbodyIK_WorkData::operator=(&(this->Unit).WorkData,&pFVar22->WorkData);
  FRigUnit_FullbodyIK_WorkData::~FRigUnit_FullbodyIK_WorkData(&local_2d8.WorkData);
  if (local_2d8.Constraints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Constraints.AllocatorInstance.Data);
  }
  if (local_2d8.Effectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Effectors.AllocatorInstance.Data);
  }
  uVar21 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar21;
}

// RunControlRigUnitTest @ 14df6bab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_FullbodyIKTest::RunControlRigUnitTest(FRigUnit_FullbodyIKTest *this,FString *param_1)

{
  return true;
}

// GetBeautifiedTestName @ 14df6bac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_FullbodyIKTest::GetBeautifiedTestName
          (FRigUnit_FullbodyIKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_FullbodyIK");
  return __return_storage_ptr__;
}

