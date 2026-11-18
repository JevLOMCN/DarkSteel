// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4bf0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetTestFlags(FRigUnit_GetRelativeBoneTransformTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4bf100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetRelativeBoneTransformTest::IsStressTest(FRigUnit_GetRelativeBoneTransformTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4bf110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetRequiredDeviceNum
          (FRigUnit_GetRelativeBoneTransformTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4bf120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetTestSourceFileName
          (FRigUnit_GetRelativeBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_GetRelativeBoneTransform.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4bf180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetTestSourceFileLine
          (FRigUnit_GetRelativeBoneTransformTest *this)

{
  return 0x30;
}

// GetTests @ 14a4bf200

/* WARNING: Removing unreachable block (ram,0x00014a4bf2ed) */
/* WARNING: Removing unreachable block (ram,0x00014a4bf3b8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetTests
          (FRigUnit_GetRelativeBoneTransformTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_GetRelativeBoneTransform");
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

// RunTest @ 14a4bf520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetRelativeBoneTransformTest::RunTest
          (FRigUnit_GetRelativeBoneTransformTest *this,FString *param_1)

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
  uint local_68;
  undefined2 uStack_5a;
  undefined4 uStack_54;
  uint local_48;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar16->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar16->_padding_)) goto LAB_14a4bf582;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4bf582:
  URigHierarchy::Reset(this_00);
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_3c = CONCAT22(uStack_3c._2_2_,0xffff);
  local_68 = local_68 & 0xffffff00;
  local_48 = local_48 & 0xffffff00;
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
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = (double)fVar2;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = (double)fVar4;
  uVar14 = (ulonglong)local_68;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).CachedBone.Key.Type = (char)uVar14;
  *(int3 *)&(this->Unit).CachedBone.Key.field_0x1 = (int3)(uVar14 >> 8);
  (this->Unit).CachedBone.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar14 >> 0x20);
  *(ulonglong *)&(this->Unit).CachedBone.Key.Name.Number = CONCAT26(uStack_5a,0xffff00000000);
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar5;
  auVar12._8_4_ = SUB84((double)fVar11,0);
  auVar12._0_8_ = (double)fVar8;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar12;
  *(ulonglong *)&(this->Unit).CachedBone.ContainerVersion = CONCAT44(uStack_54,0xffffffff);
  (this->Unit).CachedBone.Element = (FRigBaseElement *)0x0;
  *(uint *)&(this->Unit).CachedSpace.Key = local_48;
  (this->Unit).CachedSpace.Key.Name.ComparisonIndex.Value = 0;
  (this->Unit).CachedSpace.Key.Name.Number = 0;
  *(undefined4 *)&(this->Unit).CachedSpace.Index = uStack_3c;
  (this->Unit).CachedSpace.ContainerVersion = -1;
  *(undefined4 *)&(this->Unit).CachedSpace.field_0x14 = uStack_34;
  *(undefined4 *)&(this->Unit).CachedSpace.Element = 0;
  *(undefined4 *)((longlong)&(this->Unit).CachedSpace.Element + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4bf6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar15 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar15;
}

// RunControlRigUnitTest @ 14a4bf6d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_GetRelativeBoneTransformTest::RunControlRigUnitTest
          (FRigUnit_GetRelativeBoneTransformTest *this,FString *param_1)

{
  FCachedRigElement *pFVar1;
  FCachedRigElement *pFVar2;
  undefined1 auVar3 [16];
  int iVar4;
  FControlRigExecuteContext *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  FScriptContainerElement *pFVar19;
  URigHierarchyController *pUVar20;
  UClass *pUVar21;
  FName *pFVar22;
  undefined8 uVar23;
  URigHierarchyController *pUVar24;
  double dVar25;
  double dVar26;
  FName local_res8;
  FString local_168;
  FScriptContainerElement *local_158;
  uint local_150;
  double local_138;
  TTransform<double> local_128;
  FRigElementKey local_c8;
  FRigElementKey local_b8 [12];
  
  pUVar20 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar24 = (URigHierarchyController *)0x0;
  if (pUVar20 == (URigHierarchyController *)0x0) {
LAB_14a4bf762:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar4 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar21->_padding_)) goto LAB_14a4bf762;
  }
  dVar26 = _UNK_150689518;
  dVar17 = ___xmm_00000000000000003ff0000000000000;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_168.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_168.Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar22 = ::FName::FName(&local_res8,L"Root");
  local_128.Rotation.XY.m128d_f64[1] = (double)fVar9;
  local_128.Rotation.XY.m128d_f64[0] = (double)fVar7;
  local_128.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_128.Rotation.ZW.m128d_f64[0] = (double)fVar11;
  local_128.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_128.Translation.XY.m128d_f64[0] = dVar17;
  local_128.Translation.XY.m128d_f64[1] = dVar26;
  local_128.Translation.ZW.m128d_f64[0] = 0.0;
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  local_128.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_128.Scale3D.XY.m128d_f64[0] = (double)fVar8;
  local_128.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_128.Scale3D.ZW.m128d_f64[1] = (double)fVar14;
  local_128.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_168.Data.ArrayNum = 0;
  URigHierarchyController::AddBone
            (pUVar20,(FRigElementKey *)&local_158,*pFVar22,(FRigElementKey *)&local_168,&local_128,
             true,User,false,false);
  pUVar20 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar20 == (URigHierarchyController *)0x0) {
LAB_14a4bf847:
    pUVar20 = pUVar24;
  }
  else {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar4 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar21->_padding_)) goto LAB_14a4bf847;
  }
  uVar15 = local_150;
  pFVar19 = local_158;
  dVar25 = _UNK_15076acf8;
  dVar18 = ___xmm_00000000000000004008000000000000;
  dVar26 = _UNK_150744178;
  dVar17 = ___xmm_40000000000000003ff0000000000000;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar22 = ::FName::FName(&local_res8,L"BoneA");
  local_128.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_128.Rotation.XY.m128d_f64[0] = (double)fVar7;
  local_128.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_128.Rotation.ZW.m128d_f64[1] = (double)fVar13;
  local_128.Rotation.ZW.m128d_f64[0] = (double)fVar11;
  local_128.Translation.XY.m128d_f64[0] = dVar17;
  local_128.Translation.XY.m128d_f64[1] = dVar26;
  local_128.Translation.ZW.m128d_f64[0] = dVar18;
  local_128.Translation.ZW.m128d_f64[1] = dVar25;
  local_128.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_128.Scale3D.XY.m128d_f64[0] = (double)fVar8;
  local_128.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_128.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_168.Data.AllocatorInstance.Data = pFVar19;
  local_168.Data.ArrayNum = uVar15;
  URigHierarchyController::AddBone
            (pUVar20,&local_c8,*pFVar22,(FRigElementKey *)&local_168,&local_128,true,User,false,
             false);
  pUVar20 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar20 != (URigHierarchyController *)0x0) {
    pUVar21 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar4 = (int)pUVar21->_padding_;
    if ((iVar4 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar21->_padding_)) goto LAB_14a4bf92e;
  }
  pUVar20 = pUVar24;
LAB_14a4bf92e:
  dVar26 = _UNK_151ba6398;
  dVar17 = ___xmm_0000000000000000c010000000000000;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar22 = ::FName::FName(&local_res8,L"BoneB");
  local_128.Rotation.XY.m128d_f64[1] = (double)fVar9;
  local_128.Rotation.XY.m128d_f64[0] = (double)fVar7;
  local_128.Rotation.ZW.m128d_f64[1] = (double)fVar13;
  local_128.Rotation.ZW.m128d_f64[0] = (double)fVar11;
  local_128.Translation.XY.m128d_f64[0] = dVar17;
  local_128.Translation.XY.m128d_f64[1] = dVar26;
  local_128.Translation.ZW.m128d_f64[0] = 0.0;
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  local_128.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_128.Scale3D.XY.m128d_f64[0] = (double)fVar8;
  local_128.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_128.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_128.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_128.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_168.Data.AllocatorInstance.Data = local_158;
  local_168.Data.ArrayNum = local_150;
  URigHierarchyController::AddBone
            (pUVar20,local_b8,*pFVar22,(FRigElementKey *)&local_168,&local_128,true,User,false,false
            );
  ::FName::FName(&local_res8,L"Unknown");
  (this->Unit).Bone = local_res8;
  ::FName::FName(&local_res8,L"Root");
  pFVar1 = &(this->Unit).CachedSpace;
  pFVar5 = (FControlRigExecuteContext *)this->_padding_;
  pFVar2 = &(this->Unit).CachedBone;
  (this->Unit).Space = local_res8;
  FRigUnit_GetRelativeBoneTransform::StaticExecute
            (pFVar5,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,pFVar2,pFVar1);
  pcVar6 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected transform");
  dVar17 = __real_3f1a36e2e0000000;
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_138 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar3 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44(auVar3._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         auVar3._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44(auVar3._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar3._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_138 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_138,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar6)(this,uVar23,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res8,L"BoneA");
  pFVar5 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Bone = local_res8;
  FRigUnit_GetRelativeBoneTransform::StaticExecute
            (pFVar5,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,pFVar2,pFVar1);
  pcVar6 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected transform");
  dVar18 = __real_4008000000000000;
  dVar26 = __real_4000000000000000;
  local_138 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  auVar3 = *(undefined1 (*) [16])(this->Unit).Transform.Translation.XY.m128d_f64;
  if (((dVar17 < (double)CONCAT44(auVar3._4_4_ & uVar16,auVar3._0_4_ & uVar15)) ||
      (dVar25 = auVar3._8_8_ - __real_4000000000000000,
      dVar17 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar16,SUB84(dVar25,0) & uVar15)
      )) || (dVar17 < (double)CONCAT44((uint)((ulonglong)(local_138 - __real_4008000000000000) >>
                                             0x20) & uVar16,
                                       SUB84(local_138 - __real_4008000000000000,0) & uVar15))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar6)(this,uVar23,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res8,L"BoneB");
  pFVar5 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Space = local_res8;
  FRigUnit_GetRelativeBoneTransform::StaticExecute
            (pFVar5,&(this->Unit).Bone,&(this->Unit).Space,&(this->Unit).Transform,pFVar2,pFVar1);
  pcVar6 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected transform");
  local_138 = (this->Unit).Transform.Translation.ZW.m128d_f64[0];
  dVar25 = (this->Unit).Transform.Translation.XY.m128d_f64[0] - __real_4014000000000000;
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar16,
                                  SUB84(dVar25,0) & uVar15)) ||
      (dVar26 = (this->Unit).Transform.Translation.XY.m128d_f64[1] - dVar26,
      dVar17 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar16,SUB84(dVar26,0) & uVar15)
      )) || (dVar17 < (double)CONCAT44((uint)((ulonglong)(local_138 - dVar18) >> 0x20) & uVar16,
                                       SUB84(local_138 - dVar18,0) & uVar15))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar6)(this,uVar23,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4bfcd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_GetRelativeBoneTransformTest::GetBeautifiedTestName
          (FRigUnit_GetRelativeBoneTransformTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_GetRelativeBoneTransform");
  return __return_storage_ptr__;
}

