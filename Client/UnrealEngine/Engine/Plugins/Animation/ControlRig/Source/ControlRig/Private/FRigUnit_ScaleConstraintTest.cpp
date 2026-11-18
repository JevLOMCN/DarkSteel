// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4c2330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_ScaleConstraintTest::GetTestFlags(FRigUnit_ScaleConstraintTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4c2340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_ScaleConstraintTest::IsStressTest(FRigUnit_ScaleConstraintTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4c2350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_ScaleConstraintTest::GetRequiredDeviceNum(FRigUnit_ScaleConstraintTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4c2420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ScaleConstraintTest::GetTestSourceFileName
          (FRigUnit_ScaleConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4c2450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_ScaleConstraintTest::GetTestSourceFileLine(FRigUnit_ScaleConstraintTest *this)

{
  return 0x6ff;
}

// GetTests @ 14a4c2650

/* WARNING: Removing unreachable block (ram,0x00014a4c273d) */
/* WARNING: Removing unreachable block (ram,0x00014a4c2808) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ScaleConstraintTest::GetTests
          (FRigUnit_ScaleConstraintTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ScaleConstraint");
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

// RunTest @ 14a4c2830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ScaleConstraintTest::RunTest(FRigUnit_ScaleConstraintTest *this,FString *param_1)

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
        == &pUVar7->_padding_)) goto LAB_14a4c2890;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4c2890:
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
                    /* WARNING: Could not recover jumptable at 0x00014a4c29ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar5;
}

// RunControlRigUnitTest @ 14a4c2a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ScaleConstraintTest::RunControlRigUnitTest
          (FRigUnit_ScaleConstraintTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  FRigElementKey *pFVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  URigHierarchy *pUVar23;
  UClass *pUVar24;
  FName *pFVar25;
  FScriptContainerElement *pFVar26;
  undefined8 uVar27;
  URigHierarchy *pUVar28;
  undefined1 auStackY_578 [32];
  FRigElementKey local_528;
  undefined4 uStack_51c;
  FRigElementKey local_518;
  undefined4 uStack_50c;
  uint local_508;
  FNameEntryId FStack_504;
  undefined4 uStack_500;
  uint local_4fc;
  FNameEntryId FStack_4f8;
  undefined4 uStack_4f4;
  uint local_4f0;
  FNameEntryId FStack_4ec;
  undefined4 uStack_4e8;
  FRigElementKey local_4d8;
  FRigElementKey local_4c8;
  FRigElementKey local_4b8;
  FRigElementKey local_4a8;
  FRigElementKey local_498;
  FRigElementKey local_488;
  FString local_478;
  FString local_468;
  FName local_458;
  FName local_450;
  FName local_448 [3];
  double local_430;
  double local_418;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar28 = (URigHierarchy *)0x0;
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c2af6:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c2af6;
  }
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  dVar9 = UE::Math::TQuat<double>::Identity.Z;
  dVar8 = UE::Math::TQuat<double>::Identity.Y;
  dVar7 = UE::Math::TQuat<double>::Identity.X;
  uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_508 = local_508 & 0xffffff00;
  FStack_504.Value = 0;
  uStack_500 = 0;
  local_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_248 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_240 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_288 = UE::Math::TQuat<double>::Identity.X;
  dStack_280 = UE::Math::TQuat<double>::Identity.Y;
  local_278 = UE::Math::TQuat<double>::Identity.Z;
  dStack_270 = UE::Math::TQuat<double>::Identity.W;
  local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_250 = 0;
  local_238 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_230 = 0;
  pFVar25 = ::FName::FName(&local_458,L"Child");
  local_4d8.Name.ComparisonIndex.Value = FStack_504.Value;
  local_4d8._0_4_ = local_508;
  local_408.Rotation.XY.m128d_f64[0] = dVar7;
  local_408.Rotation.XY.m128d_f64[1] = dVar8;
  local_408.Rotation.ZW.m128d_f64[0] = dVar9;
  local_408.Rotation.ZW.m128d_f64[1] = dVar10;
  local_408.Translation.XY.m128d_f64[0] = (double)uVar27;
  local_408.Translation.XY.m128d_f64[1] = (double)uVar11;
  local_408.Translation.ZW.m128d_f64[0] = (double)uVar12;
  local_408.Translation.ZW.m128d_f64[1] = 0.0;
  local_408.Scale3D.XY.m128d_f64[0] = (double)uVar13;
  local_408.Scale3D.XY.m128d_f64[1] = (double)uVar14;
  local_408.Scale3D.ZW.m128d_f64[0] = (double)uVar15;
  local_408.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_4d8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar23,&local_4a8,*pFVar25,&local_4d8,&local_408,true,User,
             false,false);
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c2c14:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c2c14;
  }
  dVar19 = UE::Math::TQuat<double>::Identity.W;
  dVar18 = UE::Math::TQuat<double>::Identity.Z;
  dVar17 = UE::Math::TQuat<double>::Identity.Y;
  dVar16 = UE::Math::TQuat<double>::Identity.X;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = _UNK_150925008;
  dVar9 = ___xmm_00000000000000004010000000000000;
  dVar8 = _UNK_15076bb98;
  dVar7 = ___xmm_40100000000000004010000000000000;
  local_4fc = local_4fc & 0xffffff00;
  local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_228 = UE::Math::TQuat<double>::Identity.X;
  dStack_220 = UE::Math::TQuat<double>::Identity.Y;
  local_218 = UE::Math::TQuat<double>::Identity.Z;
  dStack_210 = UE::Math::TQuat<double>::Identity.W;
  local_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_1f0 = 0;
  local_1e8 = ___xmm_40100000000000004010000000000000;
  dStack_1e0 = _UNK_15076bb98;
  local_1d8 = ___xmm_00000000000000004010000000000000;
  dStack_1d0 = _UNK_150925008;
  FStack_4f8.Value = 0;
  uStack_4f4 = 0;
  pFVar25 = ::FName::FName(&local_450,L"Parent1");
  local_4c8.Name.ComparisonIndex.Value = FStack_4f8.Value;
  local_4c8._0_4_ = local_4fc;
  local_3a8.Rotation.XY.m128d_f64[0] = dVar16;
  local_3a8.Rotation.XY.m128d_f64[1] = dVar17;
  local_3a8.Rotation.ZW.m128d_f64[0] = dVar18;
  local_3a8.Rotation.ZW.m128d_f64[1] = dVar19;
  local_3a8.Translation.XY.m128d_f64[0] = (double)uVar27;
  local_3a8.Translation.XY.m128d_f64[1] = (double)uVar11;
  local_3a8.Translation.ZW.m128d_f64[0] = (double)uVar12;
  local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_3a8.Scale3D.XY.m128d_f64[0] = dVar7;
  local_3a8.Scale3D.XY.m128d_f64[1] = dVar8;
  local_3a8.Scale3D.ZW.m128d_f64[0] = dVar9;
  local_3a8.Scale3D.ZW.m128d_f64[1] = dVar10;
  local_4c8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar23,&local_498,*pFVar25,&local_4c8,&local_3a8,true,User,
             false,false);
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c2d37:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c2d37;
  }
  dVar19 = UE::Math::TQuat<double>::Identity.W;
  dVar18 = UE::Math::TQuat<double>::Identity.Z;
  dVar17 = UE::Math::TQuat<double>::Identity.Y;
  dVar16 = UE::Math::TQuat<double>::Identity.X;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689518;
  dVar7 = ___xmm_00000000000000003ff0000000000000;
  local_4f0 = local_4f0 & 0xffffff00;
  local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1c8 = UE::Math::TQuat<double>::Identity.X;
  dStack_1c0 = UE::Math::TQuat<double>::Identity.Y;
  local_1b8 = UE::Math::TQuat<double>::Identity.Z;
  dStack_1b0 = UE::Math::TQuat<double>::Identity.W;
  local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_190 = 0;
  local_188 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_180 = _UNK_150689688;
  local_178 = ___xmm_00000000000000003ff0000000000000;
  dStack_170 = _UNK_150689518;
  FStack_4ec.Value = 0;
  uStack_4e8 = 0;
  pFVar25 = ::FName::FName(local_448,L"Parent2");
  local_4b8.Name.ComparisonIndex.Value = FStack_4ec.Value;
  local_4b8._0_4_ = local_4f0;
  local_348.Rotation.XY.m128d_f64[0] = dVar16;
  local_348.Rotation.XY.m128d_f64[1] = dVar17;
  local_348.Rotation.ZW.m128d_f64[0] = dVar18;
  local_348.Rotation.ZW.m128d_f64[1] = dVar19;
  local_348.Translation.XY.m128d_f64[0] = (double)uVar27;
  local_348.Translation.XY.m128d_f64[1] = (double)uVar11;
  local_348.Translation.ZW.m128d_f64[0] = (double)uVar12;
  local_348.Translation.ZW.m128d_f64[1] = 0.0;
  local_348.Scale3D.XY.m128d_f64[0] = dVar9;
  local_348.Scale3D.XY.m128d_f64[1] = dVar10;
  local_348.Scale3D.ZW.m128d_f64[0] = dVar7;
  local_348.Scale3D.ZW.m128d_f64[1] = dVar8;
  local_4b8.Name.Number = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar23,&local_488,*pFVar25,&local_4b8,&local_348,true,User,
             false,false);
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_4a8.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_4a8._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_4a8.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_4a8.Name.Number;
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_528.Name.Number = local_498.Name.Number;
  local_528.Type = local_498.Type;
  local_528._1_3_ = local_498._1_3_;
  local_528.Name.ComparisonIndex.Value = local_498.Name.ComparisonIndex.Value;
  uStack_51c = 0x3f800000;
  if ((pFVar2 <= &local_528) &&
     (&local_528 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      uVar21 = (*pcVar4)();
      return (bool)uVar21;
    }
  }
  iVar22 = (this->Unit).Parents.ArrayNum;
  if (iVar22 == (this->Unit).Parents.ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_50c = 0x3f800000;
  pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar22 + 1;
  *(undefined8 *)pFVar26 = local_528._0_8_;
  *(ulonglong *)(pFVar26 + 8) = CONCAT44(uStack_51c,local_528.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_518.Name.Number = local_488.Name.Number;
  local_518.Type = local_488.Type;
  local_518._1_3_ = local_488._1_3_;
  local_518.Name.ComparisonIndex.Value = local_488.Name.ComparisonIndex.Value;
  if ((pFVar2 <= &local_518) &&
     (&local_518 <
      (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      uVar21 = (*pcVar4)();
      return (bool)uVar21;
    }
  }
  iVar22 = (this->Unit).Parents.ArrayNum;
  if (iVar22 == (this->Unit).Parents.ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  (this->Unit).Parents.ArrayNum = iVar22 + 1;
  pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
  *(undefined8 *)pFVar26 = local_518._0_8_;
  *(ulonglong *)(pFVar26 + 8) = CONCAT44(uStack_50c,local_518.Name.Number);
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c2feb:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c2feb;
  }
  URigHierarchy::ResetPoseToInitial(pUVar23,Bone);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_ScaleConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_478,L"unexpected scale for maintain offset off");
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c3060:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c3060;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar23,&local_168,0,false);
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_430 = local_168.Scale3D.ZW.m128d_f64[0];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_168.Scale3D.XY.m128d_f64[0] - __real_4000000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_168.Scale3D.XY.m128d_f64[0] - __real_4000000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_168.Scale3D.XY.m128d_f64[1] - __real_4000000000000000) >> 0x20
                              ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_168.Scale3D.XY.m128d_f64[1] - __real_4000000000000000,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_168.Scale3D.ZW.m128d_f64[0] - __real_4000000000000000) >> 0x20)
                       & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_168.Scale3D.ZW.m128d_f64[0] - __real_4000000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar4)(this,uVar27,&local_478);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c312e:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c312e;
  }
  URigHierarchy::ResetPoseToInitial(pUVar23,Bone);
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar23 == (URigHierarchy *)0x0) {
LAB_14a4c3172:
    pUVar23 = pUVar28;
  }
  else {
    pUVar24 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) goto LAB_14a4c3172;
  }
  local_2e8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2e8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2e8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_2e8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_2e8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_2e8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_2e8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_2e8.Scale3D.XY.m128d_f64[0] = ___xmm_3fe00000000000003fe0000000000000;
  local_2e8.Scale3D.XY.m128d_f64[1] = _UNK_150689678;
  local_2e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003fe0000000000000;
  local_2e8.Scale3D.ZW.m128d_f64[1] = _UNK_150978bb8;
  URigHierarchy::SetGlobalTransformByIndex(pUVar23,2,&local_2e8,false,true,false,false);
  pFVar3 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_ScaleConstraint::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_468,L"unexpected scale for maintain offset on");
  pUVar23 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar23 != (URigHierarchy *)0x0) {
    pUVar24 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar22 = (int)pUVar24->_padding_;
    if ((iVar22 <= *(int *)(pUVar23->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar24->_padding_)) goto LAB_14a4c325e;
  }
  pUVar23 = pUVar28;
LAB_14a4c325e:
  URigHierarchy::GetGlobalTransformByIndex(pUVar23,&local_108,0,false);
  local_418 = local_108.Scale3D.ZW.m128d_f64[0];
  if (((__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_108.Scale3D.XY.m128d_f64[0] - __real_3fe69fbe76c8b439) >>
                               0x20) & uVar6,
                         SUB84(local_108.Scale3D.XY.m128d_f64[0] - __real_3fe69fbe76c8b439,0) &
                         uVar5)) ||
      (__real_3f50624de0000000 <
       (double)CONCAT44((uint)((ulonglong)
                               (local_108.Scale3D.XY.m128d_f64[1] - __real_3fe69fbe80000000) >> 0x20
                              ) & uVar6,
                        SUB84(local_108.Scale3D.XY.m128d_f64[1] - __real_3fe69fbe80000000,0) & uVar5
                       ))) ||
     (__real_3f50624de0000000 <
      (double)CONCAT44((uint)((ulonglong)
                              (local_108.Scale3D.ZW.m128d_f64[0] - __real_3fe69fbe80000000) >> 0x20)
                       & uVar6,SUB84(local_108.Scale3D.ZW.m128d_f64[0] - __real_3fe69fbe80000000,0)
                               & uVar5))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar4)(this,uVar27,&local_468,0);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4c3490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ScaleConstraintTest::GetBeautifiedTestName
          (FRigUnit_ScaleConstraintTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ScaleConstraint");
  return __return_storage_ptr__;
}

