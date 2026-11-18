// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4a6280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_PositionConstraintTest::GetTestFlags(FRigUnit_PositionConstraintTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4a6290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_PositionConstraintTest::IsStressTest(FRigUnit_PositionConstraintTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4a62a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_PositionConstraintTest::GetRequiredDeviceNum(FRigUnit_PositionConstraintTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4a62b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_PositionConstraintTest::GetTestSourceFileName
          (FRigUnit_PositionConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4a62e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_PositionConstraintTest::GetTestSourceFileLine(FRigUnit_PositionConstraintTest *this)

{
  return 0x2e4;
}

// GetTests @ 14a4a6330

/* WARNING: Removing unreachable block (ram,0x00014a4a641d) */
/* WARNING: Removing unreachable block (ram,0x00014a4a64e8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PositionConstraintTest::GetTests
          (FRigUnit_PositionConstraintTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_PositionConstraint");
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

// RunTest @ 14a4a6770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_PositionConstraintTest::RunTest(FRigUnit_PositionConstraintTest *this,FString *param_1)

{
  int iVar1;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  URigHierarchy *this_00;
  UClass *pUVar7;
  uint local_68;
  uint local_48;
  ForAnyElementType local_38;
  undefined8 local_30;
  float local_28;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14a4a67d0;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4a67d0:
  URigHierarchy::Reset(this_00);
  local_48 = CONCAT31(local_48._1_3_,1);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28 = 1.0;
  local_68 = CONCAT31(local_68._1_3_,1);
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x410,&local_38,(int *)((longlong)&local_30 + 4));
  pTVar2 = &(this->Unit).Parents;
  iVar1 = iVar6 + 1;
  *(ulonglong *)(local_38.Data + (longlong)iVar6 * 0x10) = (ulonglong)local_68;
  *(ulonglong *)(local_38.Data + (longlong)iVar6 * 0x10 + 8) = 0x3f80000000000000;
  uVar4 = (ulonglong)local_48;
  (this->Unit).Child.Type = (char)uVar4;
  *(int3 *)&(this->Unit).Child.field_0x1 = (int3)(uVar4 >> 8);
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  (this->Unit).Child.Name.Number = 0;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).Filter.bX = true;
  (this->Unit).Filter.bY = true;
  (this->Unit).Filter.bZ = true;
  local_30._0_4_ = iVar1;
  if (pTVar2 != (TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *)&local_38) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_38.Data;
    (this->Unit).Parents.ArrayNum = (int)local_30;
    (this->Unit).Parents.ArrayMax = local_30._4_4_;
    local_30._0_4_ = 0;
    local_30._4_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  (this->Unit).Weight = local_28;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4a68fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar5;
}

// RunControlRigUnitTest @ 14a4a6950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_PositionConstraintTest::RunControlRigUnitTest
          (FRigUnit_PositionConstraintTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  FRigElementKey *pFVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  URigHierarchy *pUVar18;
  UClass *pUVar19;
  FName *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined8 uVar22;
  URigHierarchy *pUVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_658 [32];
  FRigElementKey local_608;
  undefined4 uStack_5fc;
  FRigElementKey local_5f8;
  undefined4 uStack_5ec;
  FRigElementKey local_5e8;
  undefined4 uStack_5dc;
  uint local_5d8;
  FNameEntryId FStack_5d4;
  undefined4 uStack_5d0;
  uint local_5cc;
  FNameEntryId FStack_5c8;
  undefined4 uStack_5c4;
  uint local_5c0;
  FNameEntryId FStack_5bc;
  undefined4 uStack_5b8;
  uint local_5b4;
  FNameEntryId FStack_5b0;
  undefined4 uStack_5ac;
  FRigElementKey local_5a8;
  FRigElementKey local_598;
  FRigElementKey local_588;
  FRigElementKey local_578;
  FRigElementKey local_568;
  FRigElementKey local_558;
  FRigElementKey local_548;
  FRigElementKey local_538;
  FString local_528;
  FString local_518;
  FName local_508;
  FName local_500;
  FName local_4f8;
  FName local_4f0 [3];
  double local_4d8;
  double local_4c0;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_658;
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar23 = (URigHierarchy *)0x0;
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a69de:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a69de;
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_5d8 = local_5d8 & 0xffffff00;
  FStack_5d4.Value = 0;
  uStack_5d0 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_2d8._8_4_ = uVar30;
  local_2d8._0_8_ = (double)fVar5;
  local_2d8._12_4_ = uVar31;
  local_288._8_4_ = uVar28;
  local_288._0_8_ = (double)fVar9;
  local_288._12_4_ = uVar29;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2c8 = (double)fVar8;
  dStack_2c0 = (double)fVar10;
  local_298 = (double)fVar6;
  dStack_290 = (double)fVar7;
  pFVar20 = ::FName::FName(&local_508,L"Child");
  local_588.Name.ComparisonIndex.Value = FStack_5d4.Value;
  local_588._0_4_ = local_5d8;
  local_4b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
  local_4b8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_4b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_4b8.Translation.XY.m128d_f64[0] = 0.0;
  local_4b8.Translation.XY.m128d_f64[1] = 0.0;
  local_4b8.Translation.ZW.m128d_f64[0] = 0.0;
  local_4b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_4b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_4b8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_4b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_588.Name.Number = 0;
  local_4b8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_4b8.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_4b8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_4b8.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar18,&local_548,*pFVar20,&local_588,&local_4b8,true,User,
             false,false);
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a6af3:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a6af3;
  }
  dVar14 = _UNK_151444f88;
  dVar13 = ___xmm_40340000000000004034000000000000;
  dVar12 = _UNK_151444f48;
  dVar11 = ___xmm_00000000000000004034000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar32 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar33 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_5cc = local_5cc & 0xffffff00;
  FStack_5c8.Value = 0;
  uStack_5c4 = 0;
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_278._8_4_ = uVar32;
  local_278._0_8_ = (double)fVar5;
  local_278._12_4_ = uVar33;
  local_228._8_4_ = uVar28;
  local_228._0_8_ = (double)fVar9;
  local_228._12_4_ = uVar29;
  local_268._8_4_ = uVar30;
  local_268._0_8_ = (double)fVar8;
  local_268._12_4_ = uVar31;
  local_258 = ___xmm_40340000000000004034000000000000;
  dStack_250 = _UNK_151444f88;
  local_248 = ___xmm_00000000000000004034000000000000;
  dStack_240 = _UNK_151444f48;
  local_238 = (double)fVar6;
  dStack_230 = (double)fVar7;
  pFVar20 = ::FName::FName(&local_500,L"Parent1");
  local_578.Name.ComparisonIndex.Value = FStack_5c8.Value;
  local_578._0_4_ = local_5cc;
  local_458.Rotation.XY.m128d_f64[1]._0_4_ = uVar32;
  local_458.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_458.Rotation.XY.m128d_f64[1]._4_4_ = uVar33;
  local_458.Rotation.ZW.m128d_f64[1]._0_4_ = uVar30;
  local_458.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_458.Rotation.ZW.m128d_f64[1]._4_4_ = uVar31;
  local_458.Translation.XY.m128d_f64[0] = dVar13;
  local_458.Translation.XY.m128d_f64[1] = dVar14;
  local_458.Translation.ZW.m128d_f64[0] = dVar11;
  local_458.Translation.ZW.m128d_f64[1] = dVar12;
  local_458.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_458.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_458.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_578.Name.Number = 0;
  local_458.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_458.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar18,&local_538,*pFVar20,&local_578,&local_458,true,User,
             false,false);
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a6c16:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a6c16;
  }
  dVar14 = _UNK_151e77bc8;
  dVar13 = ___xmm_00000000000000004044000000000000;
  dVar12 = _UNK_151bce3f8;
  dVar11 = ___xmm_40440000000000004044000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar32 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar33 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_5c0 = local_5c0 & 0xffffff00;
  FStack_5bc.Value = 0;
  uStack_5b8 = 0;
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_218._8_4_ = uVar32;
  local_218._0_8_ = (double)fVar5;
  local_218._12_4_ = uVar33;
  local_1c8._8_4_ = uVar28;
  local_1c8._0_8_ = (double)fVar9;
  local_1c8._12_4_ = uVar29;
  local_208._8_4_ = uVar30;
  local_208._0_8_ = (double)fVar8;
  local_208._12_4_ = uVar31;
  local_1f8 = ___xmm_40440000000000004044000000000000;
  dStack_1f0 = _UNK_151bce3f8;
  local_1e8 = ___xmm_00000000000000004044000000000000;
  dStack_1e0 = _UNK_151e77bc8;
  local_1d8 = (double)fVar6;
  dStack_1d0 = (double)fVar7;
  pFVar20 = ::FName::FName(&local_4f8,L"Parent2");
  local_568.Name.ComparisonIndex.Value = FStack_5bc.Value;
  local_568._0_4_ = local_5c0;
  local_3f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar32;
  local_3f8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_3f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar33;
  local_3f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar30;
  local_3f8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_3f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar31;
  local_3f8.Translation.XY.m128d_f64[0] = dVar11;
  local_3f8.Translation.XY.m128d_f64[1] = dVar12;
  local_3f8.Translation.ZW.m128d_f64[0] = dVar13;
  local_3f8.Translation.ZW.m128d_f64[1] = dVar14;
  local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_3f8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_568.Name.Number = 0;
  local_3f8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_3f8.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar18,&local_5a8,*pFVar20,&local_568,&local_3f8,true,User,
             false,false);
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a6d39:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a6d39;
  }
  dVar14 = _UNK_15219d3b8;
  dVar13 = ___xmm_0000000000000000404e000000000000;
  dVar12 = _UNK_15076bf58;
  dVar11 = ___xmm_404e000000000000404e000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar32 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar33 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_5b4 = local_5b4 & 0xffffff00;
  FStack_5b0.Value = 0;
  uStack_5ac = 0;
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_1b8._8_4_ = uVar32;
  local_1b8._0_8_ = (double)fVar5;
  local_1b8._12_4_ = uVar33;
  local_168._8_4_ = uVar28;
  local_168._0_8_ = (double)fVar9;
  local_168._12_4_ = uVar29;
  local_1a8._8_4_ = uVar30;
  local_1a8._0_8_ = (double)fVar8;
  local_1a8._12_4_ = uVar31;
  local_198 = ___xmm_404e000000000000404e000000000000;
  dStack_190 = _UNK_15076bf58;
  local_188 = ___xmm_0000000000000000404e000000000000;
  dStack_180 = _UNK_15219d3b8;
  local_178 = (double)fVar6;
  dStack_170 = (double)fVar7;
  pFVar20 = ::FName::FName(local_4f0,L"Parent3");
  local_558.Name.ComparisonIndex.Value = FStack_5b0.Value;
  local_558._0_4_ = local_5b4;
  local_398.Rotation.XY.m128d_f64[1]._0_4_ = uVar32;
  local_398.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_398.Rotation.XY.m128d_f64[1]._4_4_ = uVar33;
  local_398.Rotation.ZW.m128d_f64[1]._0_4_ = uVar30;
  local_398.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_398.Rotation.ZW.m128d_f64[1]._4_4_ = uVar31;
  local_398.Translation.XY.m128d_f64[0] = dVar11;
  local_398.Translation.XY.m128d_f64[1] = dVar12;
  local_398.Translation.ZW.m128d_f64[0] = dVar13;
  local_398.Translation.ZW.m128d_f64[1] = dVar14;
  local_398.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_398.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_398.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_558.Name.Number = 0;
  local_398.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_398.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar18,&local_598,*pFVar20,&local_558,&local_398,true,User,
             false,false);
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_548.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_548._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_548.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_548.Name.Number;
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_5f8.Name.Number = local_538.Name.Number;
  local_5f8.Type = local_538.Type;
  local_5f8._1_3_ = local_538._1_3_;
  local_5f8.Name.ComparisonIndex.Value = local_538.Name.ComparisonIndex.Value;
  uStack_5ec = 0x3f800000;
  if ((pFVar2 <= &local_5f8) &&
     (&local_5f8 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      uVar16 = (*pcVar4)();
      return (bool)uVar16;
    }
  }
  iVar17 = (this->Unit).Parents.ArrayNum;
  if (iVar17 == (this->Unit).Parents.ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_5fc = 0x3f800000;
  pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar17 + 1;
  *(undefined8 *)pFVar21 = local_5f8._0_8_;
  *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_5ec,local_5f8.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_608.Name.Number = local_5a8.Name.Number;
  local_608.Type = local_5a8.Type;
  local_608._1_3_ = local_5a8._1_3_;
  local_608.Name.ComparisonIndex.Value = local_5a8.Name.ComparisonIndex.Value;
  if ((pFVar2 <= &local_608) &&
     (&local_608 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      uVar16 = (*pcVar4)();
      return (bool)uVar16;
    }
  }
  iVar17 = (this->Unit).Parents.ArrayNum;
  if (iVar17 == (this->Unit).Parents.ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_5dc = 0x3f800000;
  pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar17 + 1;
  *(undefined8 *)pFVar21 = local_608._0_8_;
  *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_5fc,local_608.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_5e8.Name.Number = local_598.Name.Number;
  local_5e8.Type = local_598.Type;
  local_5e8._1_3_ = local_598._1_3_;
  local_5e8.Name.ComparisonIndex.Value = local_598.Name.ComparisonIndex.Value;
  if ((pFVar2 <= &local_5e8) &&
     (&local_5e8 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar4 = (code *)swi(3);
      uVar16 = (*pcVar4)();
      return (bool)uVar16;
    }
  }
  iVar17 = (this->Unit).Parents.ArrayNum;
  if (iVar17 == (this->Unit).Parents.ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  (this->Unit).Parents.ArrayNum = iVar17 + 1;
  pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
  *(undefined8 *)pFVar21 = local_5e8._0_8_;
  *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_5dc,local_5e8.Name.Number);
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a70aa:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a70aa;
  }
  URigHierarchy::ResetPoseToInitial(pUVar18,Bone);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_PositionConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_528,L"unexpected translation for maintain offset off");
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a711f:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a711f;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar18,&local_158,0,false);
  uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_4d8 = local_158.Translation.ZW.m128d_f64[0];
  uVar24 = SUB84(local_158.Translation.XY.m128d_f64[0] - __real_4044000000000000,0) &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)(local_158.Translation.XY.m128d_f64[0] - __real_4044000000000000) >>
                 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
        (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000) ||
      (uVar24 = SUB84(local_158.Translation.XY.m128d_f64[1] - __real_4044000000000000,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar26 = (uint)((ulonglong)(local_158.Translation.XY.m128d_f64[1] - __real_4044000000000000)
                     >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
      (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000)) ||
     (uVar24 = SUB84(local_158.Translation.ZW.m128d_f64[0] - __real_4044000000000000,0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar26 = (uint)((ulonglong)(local_158.Translation.ZW.m128d_f64[0] - __real_4044000000000000) >>
                    0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
     (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar4)(this,uVar22,&local_528);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a71f3:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a71f3;
  }
  URigHierarchy::ResetPoseToInitial(pUVar18,Bone);
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar18 == (URigHierarchy *)0x0) {
LAB_14a4a7237:
    pUVar18 = pUVar23;
  }
  else {
    pUVar19 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_14a4a7237;
  }
  local_338.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_338.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_338.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_338.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_338.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_338.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_338.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_338.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_338.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_338.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_338.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  URigHierarchy::SetGlobalTransformByIndex(pUVar18,2,&local_338,false,true,false,false);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_PositionConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_518,L"unexpected translation for maintain offset on");
  pUVar18 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar18 != (URigHierarchy *)0x0) {
    pUVar19 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((iVar17 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar19->_padding_)) goto LAB_14a4a7325;
  }
  pUVar18 = pUVar23;
LAB_14a4a7325:
  URigHierarchy::GetGlobalTransformByIndex(pUVar18,&local_f8,0,false);
  local_4c0 = local_f8.Translation.ZW.m128d_f64[0];
  uVar24 = SUB84(local_f8.Translation.XY.m128d_f64[0] - __real_c03aab8520000000,0) & uVar25;
  uVar26 = (uint)((ulonglong)(local_f8.Translation.XY.m128d_f64[0] - __real_c03aab8520000000) >>
                 0x20) & uVar27;
  if (((__real_3f847ae140000000 <= (double)CONCAT44(uVar26,uVar24) &&
        (double)CONCAT44(uVar26,uVar24) != __real_3f847ae140000000) ||
      (uVar24 = SUB84(local_f8.Translation.XY.m128d_f64[1] - __real_c03aab8520000000,0) & uVar25,
      uVar26 = (uint)((ulonglong)(local_f8.Translation.XY.m128d_f64[1] - __real_c03aab8520000000) >>
                     0x20) & uVar27,
      __real_3f847ae140000000 <= (double)CONCAT44(uVar26,uVar24) &&
      (double)CONCAT44(uVar26,uVar24) != __real_3f847ae140000000)) ||
     (uVar25 = SUB84(local_f8.Translation.ZW.m128d_f64[0] - __real_c03aab8520000000,0) & uVar25,
     uVar27 = (uint)((ulonglong)(local_f8.Translation.ZW.m128d_f64[0] - __real_c03aab8520000000) >>
                    0x20) & uVar27,
     __real_3f847ae140000000 <= (double)CONCAT44(uVar27,uVar25) &&
     (double)CONCAT44(uVar27,uVar25) != __real_3f847ae140000000)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar4)(this,uVar22,&local_518,0);
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4a7410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_PositionConstraintTest::GetBeautifiedTestName
          (FRigUnit_PositionConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_PositionConstraint");
  return __return_storage_ptr__;
}

