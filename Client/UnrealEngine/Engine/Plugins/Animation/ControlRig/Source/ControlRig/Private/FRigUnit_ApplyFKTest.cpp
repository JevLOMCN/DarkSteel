// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4ea570

EAutomationTestFlags __thiscall FRigUnit_ApplyFKTest::GetTestFlags(FRigUnit_ApplyFKTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4ea590

bool __thiscall FRigUnit_ApplyFKTest::IsStressTest(FRigUnit_ApplyFKTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4ea5a0

uint __thiscall FRigUnit_ApplyFKTest::GetRequiredDeviceNum(FRigUnit_ApplyFKTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4ea5b0

FString * __thiscall
FRigUnit_ApplyFKTest::GetTestSourceFileName
          (FRigUnit_ApplyFKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Deprecated\\RigUnit_ApplyFK.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4ea660

int __thiscall FRigUnit_ApplyFKTest::GetTestSourceFileLine(FRigUnit_ApplyFKTest *this)

{
  return 0x3d;
}

// GetTests @ 14a4ea6d0

/* WARNING: Removing unreachable block (ram,0x00014a4ea7bd) */
/* WARNING: Removing unreachable block (ram,0x00014a4ea888) */

void __thiscall
FRigUnit_ApplyFKTest::GetTests
          (FRigUnit_ApplyFKTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ApplyFK");
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

// RunTest @ 14a4eaa30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_ApplyFKTest::RunTest(FRigUnit_ApplyFKTest *this,FString *param_1)

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
  undefined1 uVar15;
  URigHierarchy *this_00;
  UClass *pUVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar16->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar16->_padding_)) goto LAB_14a4eaa96;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4eaa96:
  URigHierarchy::Reset(this_00);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar18 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = uVar17;
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = uVar18;
  *(undefined1 (*) [16])(this->Unit).Transform.Rotation.XY.m128d_f64 = auVar13;
  (this->Unit).Joint.ComparisonIndex = 0;
  (this->Unit).Joint.Number = 0;
  auVar14._8_4_ = uVar17;
  auVar14._0_8_ = (double)fVar2;
  auVar14._12_4_ = uVar18;
  *(undefined1 (*) [16])(this->Unit).BaseTransform.Rotation.XY.m128d_f64 = auVar14;
  (this->Unit).ApplyTransformSpace = LocalSpace;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).BaseJoint.ComparisonIndex = 0;
  (this->Unit).BaseJoint.Number = 0;
  (this->Unit).BaseTransform.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).BaseTransform.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->Unit).BaseTransform.Translation.XY.m128d_f64[0] = (double)fVar3;
  (this->Unit).BaseTransform.Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = (double)fVar11;
  (this->Unit).BaseTransform.Translation.ZW.m128d_f64[0] = (double)fVar8;
  (this->Unit).BaseTransform.Translation.ZW.m128d_f64[1] = (double)fVar11;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar6;
  (this->Unit).Filter.TranslationFilter.bX = true;
  (this->Unit).Filter.TranslationFilter.bY = true;
  (this->Unit).Filter.TranslationFilter.bZ = true;
  (this->Unit).Filter.RotationFilter.bX = true;
  (this->Unit).Filter.RotationFilter.bY = true;
  (this->Unit).Filter.RotationFilter.bZ = true;
  (this->Unit).Filter.ScaleFilter.bX = true;
  (this->Unit).Filter.ScaleFilter.bY = true;
  (this->Unit).BaseTransform.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  (this->Unit).BaseTransform.Scale3D.XY.m128d_f64[1] = (double)fVar6;
  *(undefined2 *)&(this->Unit).Filter.ScaleFilter.bZ = 1;
  (this->Unit).Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  (this->Unit).Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  (this->Unit).BaseTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  (this->Unit).BaseTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
                    /* WARNING: Could not recover jumptable at 0x00014a4eab9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar15 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar15;
}

// RunControlRigUnitTest @ 14a4eabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ApplyFKTest::RunControlRigUnitTest(FRigUnit_ApplyFKTest *this,FString *param_1)

{
  longlong *this_00;
  TTransform<double> *pTVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  double dVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  URigHierarchy *pUVar19;
  UClass *pUVar20;
  FName *pFVar21;
  undefined8 uVar22;
  URigHierarchy *pUVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_1b8 [32];
  FString local_168;
  FName local_158 [3];
  double local_140;
  FScriptContainerElement *local_138;
  uint local_130;
  FRigElementKey local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar23 = (URigHierarchy *)0x0;
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eac90:
    pUVar19 = pUVar23;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eac90;
  }
  dVar17 = _UNK_150689518;
  dVar16 = ___xmm_00000000000000003ff0000000000000;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_168.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       (((ulonglong)local_168.Data.AllocatorInstance.Data >> 8 & 0xffffff) << 8);
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar21 = ::FName::FName(local_158,L"Root");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_118.Translation.XY.m128d_f64[0] = dVar16;
  local_118.Translation.XY.m128d_f64[1] = dVar17;
  local_118.Translation.ZW.m128d_f64[0] = 0.0;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_168.Data.ArrayNum = 0;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,(FRigElementKey *)&local_138,*pFVar21,
             (FRigElementKey *)&local_168,&local_118,true,User,false,false);
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4ead72:
    pUVar19 = pUVar23;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4ead72;
  }
  dVar18 = _UNK_15076acf8;
  dVar13 = ___xmm_00000000000000004008000000000000;
  dVar17 = _UNK_150744178;
  dVar16 = ___xmm_40000000000000003ff0000000000000;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar21 = ::FName::FName(local_158,L"BoneA");
  local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_118.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar10,0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_118.Translation.XY.m128d_f64[0] = dVar16;
  local_118.Translation.XY.m128d_f64[1] = dVar17;
  local_118.Translation.ZW.m128d_f64[0] = dVar13;
  local_118.Translation.ZW.m128d_f64[1] = dVar18;
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)fVar5;
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_168.Data.AllocatorInstance.Data = local_138;
  local_168.Data.ArrayNum = local_130;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar19,&local_128,*pFVar21,(FRigElementKey *)&local_168,
             &local_118,true,User,false,false);
  ::FName::FName(local_158,L"BoneA");
  dVar17 = _UNK_150925388;
  dVar16 = ___xmm_40140000000000000000000000000000;
  this_00 = &this->_padding_;
  (this->Unit).Joint = local_158[0];
  (this->Unit).ApplyTransformMode = Override;
  (this->Unit).ApplyTransformSpace = GlobalSpace;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Unit).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Unit).Transform.Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  (this->Unit).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  (this->Unit).Transform.Translation.XY.m128d_f64[0] = dVar16;
  (this->Unit).Transform.Translation.XY.m128d_f64[1] = dVar17;
  (this->Unit).Transform.Translation.ZW.m128d_f64[0] = 0.0;
  (this->Unit).Transform.Translation.ZW.m128d_f64[1] = 0.0;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  (this->Unit).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar6;
  auVar12._8_4_ = SUB84((double)fVar10,0);
  auVar12._0_8_ = (double)fVar8;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  *(undefined1 (*) [16])(this->Unit).Transform.Scale3D.ZW.m128d_f64 = auVar12;
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eaece:
    pUVar19 = pUVar23;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eaece;
  }
  URigHierarchy::ResetPoseToInitial(pUVar19,Bone);
  pFVar21 = &(this->Unit).BaseJoint;
  pTVar1 = &(this->Unit).BaseTransform;
  FRigUnit_ApplyFK::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Joint,
             &(this->Unit).Transform,&(this->Unit).Filter,(this->Unit).ApplyTransformMode,
             (this->Unit).ApplyTransformSpace,pTVar1,pFVar21);
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected global transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eaf75:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eaf75;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar19,&local_118,1,false);
  dVar17 = __real_3f1a36e2e0000000;
  dVar16 = __real_4014000000000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_118.Translation.XY.m128d_f64[0] >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_118.Translation.XY.m128d_f64[0],0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - __real_4014000000000000,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar25 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - __real_4014000000000000)
                     >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar25,uVar24) &&
      (double)CONCAT44(uVar25,uVar24) != __real_3f1a36e2e0000000)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_118.Translation.ZW.m128d_f64[0],0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected local transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb04e:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb04e;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar19,&local_118,1,false);
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)
                                         (local_118.Translation.XY.m128d_f64[0] -
                                         __real_bff0000000000000) >> 0x20) & uVar15,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] -
                                        __real_bff0000000000000,0) & uVar14)) ||
      (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar16,0) & uVar14,
      uVar25 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar16) >> 0x20) & uVar15,
      dVar17 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar17)) ||
     (dVar17 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar15,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar14))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  (this->Unit).ApplyTransformMode = Override;
  (this->Unit).ApplyTransformSpace = LocalSpace;
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb107:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb107;
  }
  URigHierarchy::ResetPoseToInitial(pUVar19,Bone);
  FRigUnit_ApplyFK::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Joint,
             &(this->Unit).Transform,&(this->Unit).Filter,(this->Unit).ApplyTransformMode,
             (this->Unit).ApplyTransformSpace,pTVar1,pFVar21);
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected global transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb19f:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb19f;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar19,&local_118,1,false);
  dVar13 = __real_3ff0000000000000;
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)
                                         (local_118.Translation.XY.m128d_f64[0] -
                                         __real_3ff0000000000000) >> 0x20) & uVar15,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] -
                                        __real_3ff0000000000000,0) & uVar14)) ||
      (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar16,0) & uVar14,
      uVar25 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar16) >> 0x20) & uVar15,
      dVar17 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar17)) ||
     (dVar17 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar15,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar14))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected local transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb26d:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb26d;
  }
  URigHierarchy::GetLocalTransformByIndex(pUVar19,&local_118,1,false);
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.XY.m128d_f64[0] >> 0x20) &
                                  uVar15,SUB84(local_118.Translation.XY.m128d_f64[0],0) & uVar14))
      || (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar16,0) & uVar14,
         uVar25 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar16) >> 0x20) &
                  uVar15,
         dVar17 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar17)) ||
     (dVar17 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar15,SUB84(local_118.Translation.ZW.m128d_f64[0],0) & uVar14))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  (this->Unit).ApplyTransformMode = Additive;
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb31c:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb31c;
  }
  URigHierarchy::ResetPoseToInitial(pUVar19,Bone);
  FRigUnit_ApplyFK::StaticExecute
            ((FControlRigExecuteContext *)this->_padding_,&(this->Unit).Joint,
             &(this->Unit).Transform,&(this->Unit).Filter,(this->Unit).ApplyTransformMode,
             (this->Unit).ApplyTransformSpace,pTVar1,pFVar21);
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected global transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 == (URigHierarchy *)0x0) {
LAB_14a4eb3b4:
    pUVar19 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar20->_padding_)) goto LAB_14a4eb3b4;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar19,&local_118,1,false);
  dVar18 = __real_401c000000000000;
  dVar16 = __real_4008000000000000;
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.XY.m128d_f64[0] - dVar13)
                                        >> 0x20) & uVar15,
                                  SUB84(local_118.Translation.XY.m128d_f64[0] - dVar13,0) & uVar14))
      || (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - __real_401c000000000000,0) & uVar14
         , uVar25 = (uint)((ulonglong)
                           (local_118.Translation.XY.m128d_f64[1] - __real_401c000000000000) >> 0x20
                          ) & uVar15,
         dVar17 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar17)) ||
     (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                       (local_118.Translation.ZW.m128d_f64[0] -
                                       __real_4008000000000000) >> 0x20) & uVar15,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] -
                                      __real_4008000000000000,0) & uVar14))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_168,L"unexpected local transform");
  pUVar19 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar19 != (URigHierarchy *)0x0) {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar2 = (int)pUVar20->_padding_;
    if ((iVar2 <= *(int *)(pUVar19->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar20->_padding_)) goto LAB_14a4eb492;
  }
  pUVar19 = (URigHierarchy *)0x0;
LAB_14a4eb492:
  URigHierarchy::GetLocalTransformByIndex(pUVar19,&local_118,1,false);
  local_140 = local_118.Translation.ZW.m128d_f64[0];
  if (((dVar17 < (double)CONCAT44((uint)((ulonglong)local_118.Translation.XY.m128d_f64[0] >> 0x20) &
                                  uVar15,SUB84(local_118.Translation.XY.m128d_f64[0],0) & uVar14))
      || (uVar24 = SUB84(local_118.Translation.XY.m128d_f64[1] - dVar18,0) & uVar14,
         uVar25 = (uint)((ulonglong)(local_118.Translation.XY.m128d_f64[1] - dVar18) >> 0x20) &
                  uVar15,
         dVar17 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar17)) ||
     (dVar17 < (double)CONCAT44((uint)((ulonglong)(local_118.Translation.ZW.m128d_f64[0] - dVar16)
                                      >> 0x20) & uVar15,
                                SUB84(local_118.Translation.ZW.m128d_f64[0] - dVar16,0) & uVar14)))
  {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  (*pcVar3)(this,uVar22,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4eb5f0

FString * __thiscall
FRigUnit_ApplyFKTest::GetBeautifiedTestName
          (FRigUnit_ApplyFKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ApplyFK");
  return __return_storage_ptr__;
}

