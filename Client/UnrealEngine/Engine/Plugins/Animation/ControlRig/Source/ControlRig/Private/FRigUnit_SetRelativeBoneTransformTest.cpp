// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// GetTestFlags @ 14a4fcce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetTestFlags(FRigUnit_SetRelativeBoneTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4fccf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetRelativeBoneTransformTest::IsStressTest(FRigUnit_SetRelativeBoneTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4fcd40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetRequiredDeviceNum
          (FRigUnit_SetRelativeBoneTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4fcd50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetTestSourceFileName
          (FRigUnit_SetRelativeBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_SetRelativeBoneTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4fcdc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetTestSourceFileLine
          (FRigUnit_SetRelativeBoneTransformTest *this)

{
  return 0x3e;
}

// GetTests @ 14a4fcdd0

/* WARNING: Removing unreachable block (ram,0x00014a4fcebd) */
/* WARNING: Removing unreachable block (ram,0x00014a4fcf88) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetTests
          (FRigUnit_SetRelativeBoneTransformTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_SetRelativeBoneTransform");
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

// RunTest @ 14a4fd0f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetRelativeBoneTransformTest::RunTest
          (FRigUnit_SetRelativeBoneTransformTest *this,FString *param_1)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar14;
  undefined1 uVar15;
  URigHierarchy *this_00;
  UClass *pUVar16;
  uint local_70;
  undefined2 uStack_62;
  undefined4 uStack_5c;
  uint local_50;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar16->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar16->_padding_)) goto LAB_14a4fd152;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4fd152:
  URigHierarchy::Reset(this_00);
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_44 = CONCAT22(uStack_44._2_2_,0xffff);
  local_70 = local_70 & 0xffffff00;
  local_50 = local_50 & 0xffffff00;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Rotation.XY.m128d_f64 = auVar13;
  (this->Unit).Bone.ComparisonIndex = 0;
  (this->Unit).Bone.Number = 0;
  (this->Unit).Space.ComparisonIndex = 0;
  (this->Unit).Space.Number = 0;
  (this->Unit).Weight = 1.0;
  (this->Unit).bPropagateToChildren = true;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = (double)fVar2;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = (double)fVar4;
  uVar14 = (ulonglong)local_70;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).CachedBone.Key.Type = (char)uVar14;
  *(int3 *)&(this->Unit).CachedBone.Key.field_0x1 = (int3)(uVar14 >> 8);
  (this->Unit).CachedBone.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar14 >> 0x20);
  *(ulonglong *)&(this->Unit).CachedBone.Key.Name.Number = CONCAT26(uStack_62,0xffff00000000);
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  auVar12._8_4_ = SUB84((double)fVar11,0);
  auVar12._0_8_ = (double)fVar8;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar12;
  *(uint *)&(this->Unit).CachedSpaceIndex.Key = local_50;
  (this->Unit).CachedSpaceIndex.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedSpaceIndex.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedSpaceIndex.Index = uStack_44;
  *(ulonglong *)&(this->Unit).CachedBone.ContainerVersion = CONCAT44(uStack_5c,0xffffffff);
  (this->Unit).CachedBone.Element = (FRigBaseElement *)0x0;
  (this->Unit).CachedSpaceIndex.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedSpaceIndex.field_0x14 = uStack_3c;
  *(undefined4 *)&(this->Unit).CachedSpaceIndex.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedSpaceIndex.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4fd29a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar15 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar15;
}

// RunControlRigUnitTest @ 14a4fd2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_SetRelativeBoneTransformTest::RunControlRigUnitTest
          (FRigUnit_SetRelativeBoneTransformTest *this,FString *param_1)

{
  longlong *this_00;
  FCachedRigElement *pFVar1;
  FCachedRigElement *pFVar2;
  int iVar3;
  FControlRigExecuteContext *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  double dVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FScriptContainerElement *pFVar23;
  URigHierarchy *pUVar24;
  UClass *pUVar25;
  FName *pFVar26;
  undefined8 uVar27;
  URigHierarchy *pUVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_1d8 [32];
  FString local_188 [2];
  double local_168;
  FName local_160;
  FScriptContainerElement *local_158;
  uint local_150;
  FScriptContainerElement *local_148;
  uint local_140;
  FRigElementKey local_138;
  FRigElementKey local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar28 = (URigHierarchy *)0x0;
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd350:
    pUVar24 = pUVar28;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd350;
  }
  dVar19 = _UNK_150689518;
  dVar15 = ___xmm_00000000000000003ff0000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_188[0].Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_188[0].Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar26 = ::FName::FName(&local_160,L"Root");
  local_118.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_118.Translation.XY.m128d_f64[0] = dVar15;
  local_118.Translation.XY.m128d_f64[1] = dVar19;
  local_118.Translation.ZW.m128d_f64[0] = 0.0;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1] = (double)fVar13;
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_188[0].Data.ArrayNum = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,(FRigElementKey *)&local_158,*pFVar26,
             (FRigElementKey *)local_188,&local_118,true,User,false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd432:
    pUVar24 = pUVar28;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd432;
  }
  uVar16 = local_150;
  pFVar23 = local_158;
  dVar18 = _UNK_15076acf8;
  dVar21 = ___xmm_00000000000000004008000000000000;
  dVar19 = _UNK_150744178;
  dVar15 = ___xmm_40000000000000003ff0000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar26 = ::FName::FName(&local_160,L"BoneA");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Translation.XY.m128d_f64[0] = dVar15;
  local_118.Translation.XY.m128d_f64[1] = dVar19;
  local_118.Translation.ZW.m128d_f64[0] = dVar21;
  local_118.Translation.ZW.m128d_f64[1] = dVar18;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_188[0].Data.AllocatorInstance.Data = pFVar23;
  local_188[0].Data.ArrayNum = uVar16;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,(FRigElementKey *)&local_148,*pFVar26,
             (FRigElementKey *)local_188,&local_118,true,User,false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd512:
    pUVar24 = pUVar28;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd512;
  }
  dVar19 = _UNK_15076bbd8;
  dVar15 = ___xmm_40140000000000003ff0000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar26 = ::FName::FName(&local_160,L"BoneB");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Translation.XY.m128d_f64[0] = dVar15;
  local_118.Translation.XY.m128d_f64[1] = dVar19;
  local_118.Translation.ZW.m128d_f64[0] = dVar21;
  local_118.Translation.ZW.m128d_f64[1] = dVar18;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_188[0].Data.AllocatorInstance.Data = local_148;
  local_188[0].Data.ArrayNum = local_140;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_138,*pFVar26,(FRigElementKey *)local_188,
             &local_118,true,User,false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd5e9:
    pUVar24 = pUVar28;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd5e9;
  }
  dVar19 = _UNK_151ba6398;
  dVar15 = ___xmm_0000000000000000c010000000000000;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar26 = ::FName::FName(&local_160,L"BoneC");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar6;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1] = (double)fVar12;
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_118.Translation.XY.m128d_f64[0] = dVar15;
  local_118.Translation.XY.m128d_f64[1] = dVar19;
  local_118.Translation.ZW.m128d_f64[0] = 0.0;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar7;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar11;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_188[0].Data.AllocatorInstance.Data = local_158;
  local_188[0].Data.ArrayNum = local_150;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_128,*pFVar26,(FRigElementKey *)local_188,
             &local_118,true,User,false,false);
  this_00 = &this->_padding_;
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd6c3:
    pUVar24 = pUVar28;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd6c3;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  ::FName::FName(&local_160,L"BoneA");
  (this->Unit).Bone = local_160;
  ::FName::FName(&local_160,L"Root");
  dVar19 = _UNK_150971c18;
  dVar15 = ___xmm_0000000000000000401c000000000000;
  pFVar1 = &(this->Unit).CachedBone;
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = local_160;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Unit).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Unit).Transform.Rotation.XY.m128d_f64[1] = (double)fVar7;
  (this->Unit).bPropagateToChildren = false;
  pFVar2 = &(this->Unit).CachedSpaceIndex;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar9;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar11;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = 0.0;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = 0.0;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = dVar15;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = dVar19;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar8;
  auVar14._8_4_ = SUB84((double)fVar12,0);
  auVar14._0_8_ = (double)fVar10;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar14;
  FRigUnit_SetRelativeBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,
             (this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1,pFVar2);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd801:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd801;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,0,false);
  dVar19 = __real_3f1a36e2e0000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar15 = __real_3ff0000000000000;
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_118.Translation.XY.m128d_f64[0] - __real_3ff0000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_118.Translation.XY.m128d_f64[0] - __real_3ff0000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar30,uVar29) &&
      (double)CONCAT44(uVar30,uVar29) != __real_3f1a36e2e0000000)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_118.Translation.ZW.m128d_f64[0],0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd8d7:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd8d7;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,1,false);
  dVar21 = __real_401c000000000000;
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                       (local_118.Translation.ZW.m128d_f64[0] -
                                       __real_401c000000000000) >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                      __real_401c000000000000,0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fd9a5:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fd9a5;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,2,false);
  dVar20 = __real_4008000000000000;
  dVar18 = __real_4014000000000000;
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1] - __real_4014000000000000,0) & uVar16
         , uVar30 = (uint)((ulonglong)
                           (local_118.Translation.XY.m128d_f64[1] - __real_4014000000000000) >> 0x20
                          ) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)
                                       (local_118.Translation.ZW.m128d_f64[0] -
                                       __real_4008000000000000) >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                      __real_4008000000000000,0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fda81:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fda81;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,3,false);
  dVar22 = __real_c010000000000000;
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)
                                         (local_118.Translation.XY.m128d_f64[0] -
                                         __real_c010000000000000) >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] -
                                        __real_c010000000000000,0) & uVar16)) ||
      (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
      uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
      dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188,0);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fdb32:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fdb32;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).bPropagateToChildren = true;
  FRigUnit_SetRelativeBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,
             (this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1,pFVar2);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fdbd4:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fdbd4;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,0,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fdc91:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fdc91;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,1,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar21)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar21,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fdd56:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fdd56;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,2,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar20,0) & uVar16,
         uVar30 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar20) >> 0x20) &
                  uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar21)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar21,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fde20:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fde20;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,3,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188,0);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4fdec8:
    pUVar24 = (URigHierarchy *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar25->_padding_)) goto LAB_14a4fdec8;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  ::FName::FName(&local_160,L"BoneC");
  pFVar4 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = local_160;
  (this->Unit).bPropagateToChildren = false;
  FRigUnit_SetRelativeBoneTransform::StaticExecute
            (pFVar4,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,
             (this->Unit).Weight,(this->Unit).bPropagateToChildren,pFVar1,pFVar2);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 != (URigHierarchy *)0x0) {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar3 = (int)pUVar25->_padding_;
    if ((iVar3 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar25->_padding_)) goto LAB_14a4fdf89;
  }
  pUVar24 = (URigHierarchy *)0x0;
LAB_14a4fdf89:
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,0,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,1,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar21)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar21,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,2,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar18,0) & uVar16,
         uVar30 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar18) >> 0x20) &
                  uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar20)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar20,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,3,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  (this->Unit).bPropagateToChildren = true;
  Execute(this);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,0,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar15)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar15,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,1,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar21)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar21,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,2,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar20,0) & uVar16,
         uVar30 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar20) >> 0x20) &
                  uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar21)
                                      >> 0x20) & uVar17,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar21,0) & uVar16)))
  {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_188,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_118,3,false);
  local_168 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar19 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar22)
                                        >> 0x20) & uVar17,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar22,0) & uVar16))
      || (uVar29 = SUB84(local_118.Translation.XY.m128d_f64[1],0) & uVar16,
         uVar30 = (uint)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20) & uVar17,
         dVar19 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar19)) ||
     (dVar19 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar17,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar16))) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  (*pcVar5)(this,uVar27,local_188,0);
  if (local_188[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4fe490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_SetRelativeBoneTransformTest::GetBeautifiedTestName
          (FRigUnit_SetRelativeBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_SetRelativeBoneTransform");
  return __return_storage_ptr__;
}

// Execute @ 14a52d0d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRelativeBoneTransformTest::Execute(FRigUnit_SetRelativeBoneTransformTest *this)

{
  FRigUnit_SetRelativeBoneTransform::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Bone,&(this->Unit).Space,
             &(this->Unit).Transform,(this->Unit).Weight,(this->Unit).bPropagateToChildren,
             &(this->Unit).CachedBone,&(this->Unit).CachedSpaceIndex);
  return;
}

