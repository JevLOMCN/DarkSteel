// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// GetTestFlags @ 14a491930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_SetBoneTransformTest::GetTestFlags(FRigUnit_SetBoneTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4919c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_SetBoneTransformTest::IsStressTest(FRigUnit_SetBoneTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a491a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_SetBoneTransformTest::GetRequiredDeviceNum(FRigUnit_SetBoneTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a491a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetBoneTransformTest::GetTestSourceFileName
          (FRigUnit_SetBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetBoneTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a491b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_SetBoneTransformTest::GetTestSourceFileLine(FRigUnit_SetBoneTransformTest *this)

{
  return 0x52;
}

// GetTests @ 14a491c90

/* WARNING: Removing unreachable block (ram,0x00014a491d7d) */
/* WARNING: Removing unreachable block (ram,0x00014a491e48) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoneTransformTest::GetTests
          (FRigUnit_SetBoneTransformTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetBoneTransform");
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

// RunTest @ 14a491e70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetBoneTransformTest::RunTest(FRigUnit_SetBoneTransformTest *this,FString *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uVar17;
  URigHierarchy *this_00;
  UClass *pUVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint local_48;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar18 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar18->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar18->_padding_)) goto LAB_14a491ed2;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a491ed2:
  URigHierarchy::Reset(this_00);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar19 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uStack_3c = CONCAT22(uStack_3c._2_2_,0xffff);
  local_48 = local_48 & 0xffffff00;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = uVar19;
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = uVar20;
  *(undefined1 (*) [16])(this->Unit).Transform.Rotation.XY.m128d_f64 = auVar15;
  (this->Unit).Bone.ComparisonIndex = 0;
  (this->Unit).Bone.Number = 0;
  auVar16._8_4_ = uVar19;
  auVar16._0_8_ = (double)fVar2;
  auVar16._12_4_ = uVar20;
  *(undefined1 (*) [16])(this->Unit).Result.Rotation.XY.m128d_f64 = auVar16;
  (this->Unit).Space = LocalSpace;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).Weight = 1.0;
  (this->Unit).Result.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Result.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).bPropagateToChildren = true;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->Unit).Result.Translation.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Result.Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = (double)fVar11;
  (this->Unit).Result.Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->Unit).Result.Translation.ZW.m128d_f64[1] = (double)fVar11;
  uVar19 = SUB84((double)fVar12,0);
  uVar20 = (undefined4)((ulonglong)(double)fVar12 >> 0x20);
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar6;
  (this->Unit).Result.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  (this->Unit).Result.Scale3D.XY.m128d_f64[1] = (double)fVar6;
  auVar13._8_4_ = uVar19;
  auVar13._0_8_ = (double)fVar9;
  auVar13._12_4_ = uVar20;
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar13;
  auVar14._8_4_ = uVar19;
  auVar14._0_8_ = (double)fVar9;
  auVar14._12_4_ = uVar20;
  *(undefined1 (*) [16])(this->Unit).Result.Scale3D.ZW.m128d_f64 = auVar14;
  *(uint *)&(this->Unit).CachedBone.Key = local_48;
  (this->Unit).CachedBone.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedBone.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedBone.Index = uStack_3c;
  (this->Unit).CachedBone.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedBone.field_0x14 = uStack_34;
  *(undefined4 *)&(this->Unit).CachedBone.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedBone.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a491ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar17 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar17;
}

// RunControlRigUnitTest @ 14a492010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetBoneTransformTest::RunControlRigUnitTest
          (FRigUnit_SetBoneTransformTest *this,FString *param_1)

{
  longlong *this_00;
  FCachedRigElement *pFVar1;
  int iVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  URigHierarchy *pUVar22;
  UClass *pUVar23;
  FName *pFVar24;
  undefined8 uVar25;
  URigHierarchy *pUVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_1c8 [32];
  FString local_178 [2];
  double local_158;
  FName local_150;
  FScriptContainerElement *local_148;
  uint local_140;
  FScriptContainerElement *local_138;
  uint local_130;
  FRigElementKey local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar26 = (URigHierarchy *)0x0;
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4920b0:
    pUVar22 = pUVar26;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a4920b0;
  }
  uVar21 = _UNK_150689518;
  uVar25 = ___xmm_00000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_178[0].Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_178[0].Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar24 = ::FName::FName(&local_150,L"Root");
  local_118.Rotation.XY.m128d_f64[1] = (double)fVar7;
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_118.Translation.XY.m128d_f64[0]._0_4_ = (uint)uVar25;
  local_118.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)uVar25 >> 0x20);
  local_118.Translation.XY.m128d_f64[1]._0_4_ = (uint)uVar21;
  local_118.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)uVar21 >> 0x20);
  local_118.Translation.ZW.m128d_f64[0] = 0.0;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_178[0].Data.ArrayNum = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar22,(FRigElementKey *)&local_148,*pFVar24,
             (FRigElementKey *)local_178,&local_118,true,User,false,false);
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492192:
    pUVar22 = pUVar26;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492192;
  }
  dVar20 = _UNK_15076acf8;
  dVar19 = ___xmm_00000000000000004008000000000000;
  uVar21 = _UNK_150744178;
  uVar25 = ___xmm_40000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar24 = ::FName::FName(&local_150,L"BoneA");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_118.Translation.XY.m128d_f64[0]._0_4_ = (uint)uVar25;
  local_118.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)uVar25 >> 0x20);
  local_118.Translation.XY.m128d_f64[1]._0_4_ = (uint)uVar21;
  local_118.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)uVar21 >> 0x20);
  local_118.Translation.ZW.m128d_f64[0] = dVar19;
  local_118.Translation.ZW.m128d_f64[1] = dVar20;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_178[0].Data.AllocatorInstance.Data = local_148;
  local_178[0].Data.ArrayNum = local_140;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar22,(FRigElementKey *)&local_138,*pFVar24,
             (FRigElementKey *)local_178,&local_118,true,User,false,false);
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492272:
    pUVar22 = pUVar26;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492272;
  }
  uVar21 = _UNK_15076bbd8;
  uVar25 = ___xmm_40140000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar24 = ::FName::FName(&local_150,L"BoneB");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  local_118.Translation.XY.m128d_f64[0]._0_4_ = (uint)uVar25;
  local_118.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)uVar25 >> 0x20);
  local_118.Translation.XY.m128d_f64[1]._0_4_ = (uint)uVar21;
  local_118.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)uVar21 >> 0x20);
  local_118.Translation.ZW.m128d_f64[0] = dVar19;
  local_118.Translation.ZW.m128d_f64[1] = dVar20;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_178[0].Data.AllocatorInstance.Data = local_138;
  local_178[0].Data.ArrayNum = local_130;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar22,&local_128,*pFVar24,(FRigElementKey *)local_178,
             &local_118,true,User,false,false);
  this_00 = &this->_padding_;
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a49234c:
    pUVar22 = pUVar26;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a49234c;
  }
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  ::FName::FName(&local_150,L"Root");
  dVar20 = _UNK_150971c18;
  dVar19 = ___xmm_0000000000000000401c000000000000;
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_150;
  (this->Unit).Space = GlobalSpace;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Unit).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Unit).Transform.Rotation.XY.m128d_f64[1] = (double)fVar6;
  (this->Unit).bPropagateToChildren = false;
  pFVar1 = &(this->Unit).CachedBone;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = 0.0;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = 0.0;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = dVar19;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = dVar20;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  auVar13._8_4_ = SUB84((double)fVar11,0);
  auVar13._0_8_ = (double)fVar9;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar13;
  FRigUnit_SetBoneTransform::StaticExecute
            (pFVar3,&(this->Unit).Bone,&(this->Unit).Transform,&(this->Unit).Result,
             (this->Unit).Space,(this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492473:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492473;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  dVar20 = __real_401c000000000000;
  dVar19 = __real_3f1a36e2e0000000;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_118.Translation.XY.m128d_f64[0]._0_4_ &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <=
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) != __real_3f1a36e2e0000000))
     || (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)
                                 (local_118.Translation.ZW.m128d_f64[0] - __real_401c000000000000)
                                >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_118.Translation.ZW.m128d_f64[0] - __real_401c000000000000,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492549:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492549;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  dVar14 = __real_4008000000000000;
  dVar29 = __real_4000000000000000;
  dVar30 = __real_3ff0000000000000;
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar27 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - __real_3ff0000000000000;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar18,
                                  SUB84(dVar27,0) & uVar17)) ||
      (dVar27 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) -
                __real_4000000000000000, uVar31 = SUB84(dVar27,0) & uVar17,
      uVar32 = (uint)((ulonglong)dVar27 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                       (local_118.Translation.ZW.m128d_f64[0] -
                                       __real_4008000000000000) >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                      __real_4008000000000000,0) & uVar17))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a49262e:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a49262e;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  dVar27 = __real_4014000000000000;
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar18,
                                  SUB84(dVar28,0) & uVar17)) ||
      (dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) -
                __real_4014000000000000, uVar31 = SUB84(dVar28,0) & uVar17,
      uVar32 = (uint)((ulonglong)dVar28 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar14)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar14,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178,0);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4926e9:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a4926e9;
  }
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = LocalSpace;
  FRigUnit_SetBoneTransform::StaticExecute
            (pFVar3,&(this->Unit).Bone,&(this->Unit).Transform,&(this->Unit).Result,
             (this->Unit).Space,(this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492791:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492791;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[0]._0_4_ & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a49284e:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a49284e;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar18,
                                  SUB84(dVar28,0) & uVar17)) ||
      (dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) - dVar29,
      uVar31 = SUB84(dVar28,0) & uVar17, uVar32 = (uint)((ulonglong)dVar28 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar14)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar14,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492918:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492918;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar18,
                                  SUB84(dVar28,0) & uVar17)) ||
      (dVar28 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) - dVar27,
      uVar31 = SUB84(dVar28,0) & uVar17, uVar32 = (uint)((ulonglong)dVar28 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar14)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar14,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178,0);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4929ca:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a4929ca;
  }
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bPropagateToChildren = true;
  FRigUnit_SetBoneTransform::StaticExecute
            (pFVar3,&(this->Unit).Bone,&(this->Unit).Transform,&(this->Unit).Result,
             (this->Unit).Space,(this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492a72:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492a72;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[0]._0_4_ & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a492b2f:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar23->_padding_)) goto LAB_14a492b2f;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  dVar28 = __real_4024000000000000;
  auVar15._4_4_ = local_118.Translation.XY.m128d_f64[0]._4_4_;
  auVar15._0_4_ = local_118.Translation.XY.m128d_f64[0]._0_4_;
  auVar15._8_4_ = local_118.Translation.XY.m128d_f64[1]._0_4_;
  auVar15._12_4_ = local_118.Translation.XY.m128d_f64[1]._4_4_;
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[0]._0_4_ & uVar17)) ||
      (dVar29 = auVar15._8_8_ - dVar29, uVar31 = SUB84(dVar29,0) & uVar17,
      uVar32 = (uint)((ulonglong)dVar29 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                       (local_118.Translation.ZW.m128d_f64[0] -
                                       __real_4024000000000000) >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                      __real_4024000000000000,0) & uVar17))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar22 != (URigHierarchy *)0x0) {
    pUVar23 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar23->_padding_;
    if ((iVar2 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar23->_padding_)) goto LAB_14a492bff;
  }
  pUVar22 = (URigHierarchy *)0x0;
LAB_14a492bff:
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  auVar16._4_4_ = local_118.Translation.XY.m128d_f64[0]._4_4_;
  auVar16._0_4_ = local_118.Translation.XY.m128d_f64[0]._0_4_;
  auVar16._8_4_ = local_118.Translation.XY.m128d_f64[1]._0_4_;
  auVar16._12_4_ = local_118.Translation.XY.m128d_f64[1]._4_4_;
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[0]._0_4_ & uVar17)) ||
      (dVar29 = auVar16._8_8_ - dVar27, uVar31 = SUB84(dVar29,0) & uVar17,
      uVar32 = (uint)((ulonglong)dVar29 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar28)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar28,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  ::FName::FName(&local_150,L"BoneA");
  (this->Unit).Bone = local_150;
  (this->Unit).Space = GlobalSpace;
  (this->Unit).bPropagateToChildren = false;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar18,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar17))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[0]._0_4_ & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) - dVar27,
      uVar31 = SUB84(dVar29,0) & uVar17, uVar32 = (uint)((ulonglong)dVar29 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar14)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar14,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  (this->Unit).Space = LocalSpace;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar18,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar17))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar27 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) - dVar27,
      uVar31 = SUB84(dVar27,0) & uVar17, uVar32 = (uint)((ulonglong)dVar27 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar14)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar14,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar22,Bone);
  (this->Unit).bPropagateToChildren = true;
  Execute(this);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,0,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar18,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar17))) {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,1,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar29 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar18,
                                  SUB84(dVar29,0) & uVar17)) ||
      (dVar19 <= (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                                  local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) &&
       (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_ & uVar18,
                        local_118.Translation.XY.m128d_f64[1]._0_4_ & uVar17) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_178,L"unexpected transform");
  pUVar22 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_118,2,false);
  local_158 = local_118.Translation.ZW.m128d_f64[0];
  dVar30 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[0]._4_4_,
                            local_118.Translation.XY.m128d_f64[0]._0_4_) - dVar30;
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar18,
                                  SUB84(dVar30,0) & uVar17)) ||
      (dVar14 = (double)CONCAT44(local_118.Translation.XY.m128d_f64[1]._4_4_,
                                 local_118.Translation.XY.m128d_f64[1]._0_4_) - dVar14,
      uVar31 = SUB84(dVar14,0) & uVar17, uVar32 = (uint)((ulonglong)dVar14 >> 0x20) & uVar18,
      dVar19 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar18,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar17)))
  {
    uVar25 = 0;
  }
  else {
    uVar25 = 1;
  }
  (*pcVar4)(this,uVar25,local_178,0);
  if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4932c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetBoneTransformTest::GetBeautifiedTestName
          (FRigUnit_SetBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetBoneTransform");
  return __return_storage_ptr__;
}

// Execute @ 14a52c6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetBoneTransformTest::Execute(FRigUnit_SetBoneTransformTest *this)

{
  FRigUnit_SetBoneTransform::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Bone,&(this->Unit).Transform
             ,&(this->Unit).Result,(this->Unit).Space,(this->Unit).Weight,
             (this->Unit).bPropagateToChildren,&(this->Unit).CachedBone);
  return;
}

