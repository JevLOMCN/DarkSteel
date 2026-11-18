// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a486d90

EAutomationTestFlags __thiscall
FRigUnit_ModifyBoneTransformsTest::GetTestFlags(FRigUnit_ModifyBoneTransformsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a486f70

bool __thiscall
FRigUnit_ModifyBoneTransformsTest::IsStressTest(FRigUnit_ModifyBoneTransformsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a487070

uint __thiscall
FRigUnit_ModifyBoneTransformsTest::GetRequiredDeviceNum(FRigUnit_ModifyBoneTransformsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a487080

FString * __thiscall
FRigUnit_ModifyBoneTransformsTest::GetTestSourceFileName
          (FRigUnit_ModifyBoneTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_ModifyBoneTransforms.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a487130

int __thiscall
FRigUnit_ModifyBoneTransformsTest::GetTestSourceFileLine(FRigUnit_ModifyBoneTransformsTest *this)

{
  return 0x26;
}

// GetTests @ 14a4874e0

/* WARNING: Removing unreachable block (ram,0x00014a4875cd) */
/* WARNING: Removing unreachable block (ram,0x00014a487698) */

void __thiscall
FRigUnit_ModifyBoneTransformsTest::GetTests
          (FRigUnit_ModifyBoneTransformsTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ModifyBoneTransforms");
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

// RunTest @ 14a4877d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ModifyBoneTransformsTest::RunTest(FRigUnit_ModifyBoneTransformsTest *this,FString *param_1)

{
  TArray<FRigUnit_ModifyBoneTransforms_PerBone,TSizedDefaultAllocator<32>_> *pTVar1;
  FRigUnit_ModifyBoneTransforms_WorkData *pFVar2;
  TArray<FRigUnit_ModifyBoneTransforms_PerBone,TSizedDefaultAllocator<32>_> *pTVar3;
  FRigUnit_ModifyBoneTransforms_WorkData *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 uVar7;
  URigHierarchy *this_00;
  UClass *pUVar8;
  FRigUnit_ModifyBoneTransforms *pFVar9;
  undefined1 local_58 [64];
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar8 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar8->_padding_)) goto LAB_14a487834;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a487834:
  URigHierarchy::Reset(this_00);
  pFVar9 = FRigUnit_ModifyBoneTransforms::FRigUnit_ModifyBoneTransforms
                     ((FRigUnit_ModifyBoneTransforms *)local_58);
  pTVar3 = &(this->Unit).BoneToModify;
  pTVar1 = &pFVar9->BoneToModify;
  if (pTVar3 != pTVar1) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).BoneToModify.ArrayNum = (pFVar9->BoneToModify).ArrayNum;
    (this->Unit).BoneToModify.ArrayMax = (pFVar9->BoneToModify).ArrayMax;
    (pFVar9->BoneToModify).ArrayNum = 0;
    (pFVar9->BoneToModify).ArrayMax = 0;
  }
  pFVar2 = &pFVar9->WorkData;
  (this->Unit).Weight = pFVar9->Weight;
  pFVar4 = &(this->Unit).WorkData;
  (this->Unit).WeightMinimum = pFVar9->WeightMinimum;
  (this->Unit).WeightMaximum = pFVar9->WeightMaximum;
  (this->Unit).Mode = pFVar9->Mode;
  if (pFVar4 != pFVar2) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar2;
    *(undefined8 *)pFVar2 = 0;
    *(undefined4 *)&(this->Unit).WorkData.field_0x8 = *(undefined4 *)&(pFVar9->WorkData).field_0x8;
    *(undefined4 *)&(this->Unit).WorkData.field_0xc = *(undefined4 *)&(pFVar9->WorkData).field_0xc;
    *(undefined8 *)&(pFVar9->WorkData).field_0x8 = 0;
  }
  if ((void *)local_58._48_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._48_8_);
  }
  if ((FScriptContainerElement *)local_58._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a48791a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar7;
}

// RunControlRigUnitTest @ 14a487930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ModifyBoneTransformsTest::RunControlRigUnitTest
          (FRigUnit_ModifyBoneTransformsTest *this,FString *param_1)

{
  int *piVar1;
  TArray<FRigUnit_ModifyBoneTransforms_PerBone,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *this_00;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined1 uVar22;
  int iVar23;
  URigHierarchy *pUVar24;
  UClass *pUVar25;
  FName *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined8 uVar28;
  int iVar29;
  URigHierarchy *pUVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_c38 [32];
  FRigElementKey local_be8;
  uint local_bd8;
  FNameEntryId FStack_bd4;
  undefined4 uStack_bd0;
  FName local_bcc;
  FName local_bc4;
  FRigElementKey local_bb8;
  FRigElementKey local_ba8;
  FRigElementKey local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  double local_b48;
  double dStack_b40;
  undefined1 local_b38 [16];
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  double local_b08;
  double dStack_b00;
  undefined1 local_af8 [16];
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FName local_a38;
  FName local_a30;
  FName local_a28;
  FRigElementKey local_a20;
  FRigElementKey local_a10 [2];
  TTransform<double> local_9f8;
  TTransform<double> local_998;
  TTransform<double> local_938;
  undefined1 local_8d8 [16];
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_898 [16];
  double local_888;
  double dStack_880;
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  undefined1 local_7c8 [16];
  TTransform<double> local_648;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_c38;
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar30 = (URigHierarchy *)0x0;
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4879c6:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a4879c6;
  }
  dVar15 = _UNK_150689518;
  dVar32 = ___xmm_00000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_bd8 = local_bd8 & 0xffffff00;
  FStack_bd4.Value = 0;
  uStack_bd0 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar35 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar36 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_8d8._8_4_ = uVar39;
  local_8d8._0_8_ = (double)fVar5;
  local_8d8._12_4_ = uVar40;
  local_8b8 = ___xmm_00000000000000003ff0000000000000;
  dStack_8b0 = _UNK_150689518;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898._8_4_ = uVar35;
  local_898._0_8_ = (double)fVar6;
  local_898._12_4_ = uVar36;
  local_8c8 = (double)fVar7;
  dStack_8c0 = (double)fVar9;
  local_888 = (double)fVar8;
  dStack_880 = (double)fVar10;
  pFVar26 = ::FName::FName(&local_a38,L"Root");
  local_bb8.Name.ComparisonIndex.Value = FStack_bd4.Value;
  local_bb8._0_4_ = local_bd8;
  local_9f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar39;
  local_9f8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_9f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar40;
  local_9f8.Translation.XY.m128d_f64[0] = dVar32;
  local_9f8.Translation.XY.m128d_f64[1] = dVar15;
  local_9f8.Translation.ZW.m128d_f64[0] = 0.0;
  local_9f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_9f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar35;
  local_9f8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_9f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar36;
  local_bb8.Name.Number = 0;
  local_9f8.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_9f8.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_9f8.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_9f8.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_be8,*pFVar26,&local_bb8,&local_9f8,true,User,
             false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a487aeb:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a487aeb;
  }
  uVar16 = local_be8.Name.Number;
  uVar28 = local_be8._0_8_;
  dVar34 = _UNK_15076acf8;
  dVar33 = ___xmm_00000000000000004008000000000000;
  dVar15 = _UNK_150744178;
  dVar32 = ___xmm_40000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar41 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar42 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar35 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar36 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_878._8_4_ = uVar41;
  local_878._0_8_ = (double)fVar5;
  local_878._12_4_ = uVar42;
  local_828._8_4_ = uVar35;
  local_828._0_8_ = (double)fVar9;
  local_828._12_4_ = uVar36;
  local_868._8_4_ = uVar39;
  local_868._0_8_ = (double)fVar8;
  local_868._12_4_ = uVar40;
  local_858 = ___xmm_40000000000000003ff0000000000000;
  dStack_850 = _UNK_150744178;
  local_848 = ___xmm_00000000000000004008000000000000;
  dStack_840 = _UNK_15076acf8;
  local_838 = (double)fVar6;
  dStack_830 = (double)fVar7;
  pFVar26 = ::FName::FName(&local_a30,L"BoneA");
  uVar18 = local_be8._0_8_;
  local_998.Rotation.XY.m128d_f64[1]._0_4_ = uVar41;
  local_998.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_998.Rotation.XY.m128d_f64[1]._4_4_ = uVar42;
  local_998.Rotation.ZW.m128d_f64[1]._0_4_ = uVar39;
  local_998.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_998.Rotation.ZW.m128d_f64[1]._4_4_ = uVar40;
  local_998.Translation.XY.m128d_f64[0] = dVar32;
  local_998.Translation.XY.m128d_f64[1] = dVar15;
  local_998.Translation.ZW.m128d_f64[0] = dVar33;
  local_998.Translation.ZW.m128d_f64[1] = dVar34;
  local_998.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
  local_998.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_998.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar36;
  local_be8.Type = (ERigElementType)uVar28;
  local_be8._1_3_ = SUB83(uVar28,1);
  local_be8.Name.ComparisonIndex.Value = SUB84(uVar28,4);
  local_ba8.Type = local_be8.Type;
  local_ba8._1_3_ = local_be8._1_3_;
  local_ba8.Name.ComparisonIndex.Value = local_be8.Name.ComparisonIndex.Value;
  local_ba8.Name.Number = uVar16;
  local_be8._0_8_ = uVar18;
  local_998.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_998.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,&local_a20,*pFVar26,&local_ba8,&local_998,true,User,
             false,false);
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a487c13:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a487c13;
  }
  dVar34 = _UNK_150971c18;
  dVar33 = ___xmm_0000000000000000401c000000000000;
  dVar15 = _UNK_15076bc38;
  dVar32 = ___xmm_40180000000000004014000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar41 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar42 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar35 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar36 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_818._8_4_ = uVar41;
  local_818._0_8_ = (double)fVar5;
  local_818._12_4_ = uVar42;
  local_7c8._8_4_ = uVar35;
  local_7c8._0_8_ = (double)fVar9;
  local_7c8._12_4_ = uVar36;
  local_808._8_4_ = uVar39;
  local_808._0_8_ = (double)fVar8;
  local_808._12_4_ = uVar40;
  local_7f8 = ___xmm_40180000000000004014000000000000;
  dStack_7f0 = _UNK_15076bc38;
  local_7e8 = ___xmm_0000000000000000401c000000000000;
  dStack_7e0 = _UNK_150971c18;
  local_7d8 = (double)fVar6;
  dStack_7d0 = (double)fVar7;
  pFVar26 = ::FName::FName(&local_a28,L"BoneB");
  local_938.Rotation.XY.m128d_f64[1]._0_4_ = uVar41;
  local_938.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_938.Rotation.XY.m128d_f64[1]._4_4_ = uVar42;
  local_938.Rotation.ZW.m128d_f64[1]._0_4_ = uVar39;
  local_938.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_938.Rotation.ZW.m128d_f64[1]._4_4_ = uVar40;
  local_938.Translation.XY.m128d_f64[0] = dVar32;
  local_938.Translation.XY.m128d_f64[1] = dVar15;
  local_938.Translation.ZW.m128d_f64[0] = dVar33;
  local_938.Translation.ZW.m128d_f64[1] = dVar34;
  local_938.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar35;
  local_938.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_938.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar36;
  local_b98.Type = local_be8.Type;
  local_b98._1_3_ = local_be8._1_3_;
  local_b98.Name.ComparisonIndex.Value = local_be8.Name.ComparisonIndex.Value;
  local_b98.Name.Number = local_be8.Name.Number;
  local_938.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_938.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar24,local_a10,*pFVar26,&local_b98,&local_938,true,User,
             false,false);
  pTVar2 = &(this->Unit).BoneToModify;
  iVar29 = (this->Unit).BoneToModify.ArrayNum;
  piVar1 = &(this->Unit).BoneToModify.ArrayNum;
  if (iVar29 < 2) {
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,2 - iVar29,&pTVar2->AllocatorInstance,piVar1,
                        &(this->Unit).BoneToModify.ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 0x70,0,
           (longlong)(2 - iVar29) * 0x70);
  }
  else if (2 < iVar29) {
    iVar29 = iVar29 + -2;
    if (iVar29 < 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar21) {
        pcVar4 = (code *)swi(3);
        uVar22 = (*pcVar4)();
        return (bool)uVar22;
      }
    }
    else if (iVar29 == 0) goto LAB_14a487df5;
    pFVar27 = (pTVar2->AllocatorInstance).Data + 0xe0;
    iVar23 = (*piVar1 - iVar29) + -2;
    if (iVar23 != 0) {
      memmove(pFVar27,pFVar27 + (longlong)iVar29 * 0x70,(longlong)iVar23 * 0x70);
    }
    *piVar1 = *piVar1 - iVar29;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,&pTVar2->AllocatorInstance,*piVar1,&(this->Unit).BoneToModify.ArrayMax);
  }
LAB_14a487df5:
  ::FName::FName(&local_bcc,L"BoneA");
  if (*piVar1 < 1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      uVar22 = (*pcVar4)();
      return (bool)uVar22;
    }
  }
  *(FName *)(pTVar2->AllocatorInstance).Data = local_bcc;
  ::FName::FName(&local_bc4,L"BoneB");
  if (*piVar1 < 2) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      uVar22 = (*pcVar4)();
      return (bool)uVar22;
    }
  }
  uVar20 = _UNK_15219d4e8;
  uVar19 = ___xmm_40260000000000004024000000000000;
  uVar18 = _UNK_15219d3a8;
  uVar28 = ___xmm_00000000000000004028000000000000;
  local_b28 = ___xmm_40260000000000004024000000000000;
  uStack_b20 = _UNK_15219d4e8;
  *(FName *)((pTVar2->AllocatorInstance).Data + 0x70) = local_bc4;
  local_b18 = uVar28;
  uStack_b10 = uVar18;
  dVar33 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar34 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar32 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  uVar35 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar36 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b38._8_4_ = uVar35;
  local_b38._0_8_ = dVar32;
  local_b38._12_4_ = uVar36;
  dVar37 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar38 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  uVar39 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_af8._8_4_ = uVar39;
  local_af8._0_8_ = dVar15;
  local_af8._12_4_ = uVar40;
  local_b48 = dVar33;
  dStack_b40 = dVar34;
  local_b08 = dVar37;
  dStack_b00 = dVar38;
  if (*piVar1 < 2) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      uVar22 = (*pcVar4)();
      return (bool)uVar22;
    }
  }
  pFVar27 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar27 + 0x80) = dVar33;
  *(double *)(pFVar27 + 0x88) = dVar34;
  auVar11._8_4_ = uVar35;
  auVar11._0_8_ = dVar32;
  auVar11._12_4_ = uVar36;
  *(undefined1 (*) [16])(pFVar27 + 0x90) = auVar11;
  *(undefined8 *)(pFVar27 + 0xa0) = uVar19;
  *(undefined8 *)(pFVar27 + 0xa8) = uVar20;
  *(undefined8 *)(pFVar27 + 0xb0) = uVar28;
  *(undefined8 *)(pFVar27 + 0xb8) = uVar18;
  *(double *)(pFVar27 + 0xc0) = dVar37;
  *(double *)(pFVar27 + 200) = dVar38;
  auVar13._8_4_ = uVar39;
  auVar13._0_8_ = dVar15;
  auVar13._12_4_ = uVar40;
  *(undefined1 (*) [16])(pFVar27 + 0xd0) = auVar13;
  if (*piVar1 < 1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      uVar22 = (*pcVar4)();
      return (bool)uVar22;
    }
  }
  pFVar27 = (pTVar2->AllocatorInstance).Data;
  this_00 = &this->_padding_;
  *(double *)(pFVar27 + 0x10) = dVar33;
  *(double *)(pFVar27 + 0x18) = dVar34;
  auVar12._8_4_ = uVar35;
  auVar12._0_8_ = dVar32;
  auVar12._12_4_ = uVar36;
  *(undefined1 (*) [16])(pFVar27 + 0x20) = auVar12;
  *(undefined8 *)(pFVar27 + 0x30) = uVar19;
  *(undefined8 *)(pFVar27 + 0x38) = uVar20;
  *(undefined8 *)(pFVar27 + 0x40) = uVar28;
  *(undefined8 *)(pFVar27 + 0x48) = uVar18;
  *(double *)(pFVar27 + 0x50) = dVar37;
  *(double *)(pFVar27 + 0x58) = dVar38;
  auVar14._8_4_ = uVar39;
  auVar14._0_8_ = dVar15;
  auVar14._12_4_ = uVar40;
  *(undefined1 (*) [16])(pFVar27 + 0x60) = auVar14;
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488017:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488017;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Mode = AdditiveLocal;
  FRigUnit_ModifyBoneTransforms::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_ae8,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488088:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488088;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_648,0,false);
  dVar15 = __real_3f1a36e2e0000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar32 = __real_3ff0000000000000;
  dVar33 = local_648.Translation.XY.m128d_f64[0] - __real_3ff0000000000000;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44(local_648.Translation.XY.m128d_f64[1]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_648.Translation.XY.m128d_f64[1]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44(local_648.Translation.ZW.m128d_f64[0]._4_4_ &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       local_648.Translation.ZW.m128d_f64[0]._0_4_ &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_ae8);
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_ad8,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488159:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488159;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_5e8,1,false);
  dVar34 = __real_402e000000000000;
  dVar33 = __real_4026000000000000;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)
                                         (local_5e8.Translation.XY.m128d_f64[0] -
                                         __real_4026000000000000) >> 0x20) & uVar17,
                                  SUB84(local_5e8.Translation.XY.m128d_f64[0] -
                                        __real_4026000000000000,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                        (local_5e8.Translation.XY.m128d_f64[1] -
                                        __real_402a000000000000) >> 0x20) & uVar17,
                                 SUB84(local_5e8.Translation.XY.m128d_f64[1] -
                                       __real_402a000000000000,0) & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                       (local_5e8.Translation.ZW.m128d_f64[0] -
                                       __real_402e000000000000) >> 0x20) & uVar17,
                                SUB84(local_5e8.Translation.ZW.m128d_f64[0] -
                                      __real_402e000000000000,0) & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_ad8);
  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_ac8,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488233:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488233;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_588,2,false);
  dVar38 = __real_4033000000000000;
  dVar37 = __real_4031000000000000;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)(local_588.Translation.XY.m128d_f64[0] - dVar34)
                                        >> 0x20) & uVar17,
                                  SUB84(local_588.Translation.XY.m128d_f64[0] - dVar34,0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_588.Translation.XY.m128d_f64[1] -
                                           __real_4031000000000000) >> 0x20) & uVar17,
                                    SUB84(local_588.Translation.XY.m128d_f64[1] -
                                          __real_4031000000000000,0) & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                       (local_588.Translation.ZW.m128d_f64[0] -
                                       __real_4033000000000000) >> 0x20) & uVar17,
                                SUB84(local_588.Translation.ZW.m128d_f64[0] -
                                      __real_4033000000000000,0) & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28);
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4882f3:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a4882f3;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Mode = AdditiveGlobal;
  FRigUnit_ModifyBoneTransforms::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_ab8,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488367:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488367;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_528,0,false);
  dVar31 = local_528.Translation.XY.m128d_f64[0] - dVar32;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar17,
                                  SUB84(dVar31,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44(local_528.Translation.XY.m128d_f64[1]._4_4_ & uVar17,
                                 local_528.Translation.XY.m128d_f64[1]._0_4_ & uVar16))) ||
     (dVar15 < (double)CONCAT44(local_528.Translation.ZW.m128d_f64[0]._4_4_ & uVar17,
                                local_528.Translation.ZW.m128d_f64[0]._0_4_ & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_ab8);
  if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_aa8,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488428:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488428;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_4c8,1,false);
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)(local_4c8.Translation.XY.m128d_f64[0] - dVar33)
                                        >> 0x20) & uVar17,
                                  SUB84(local_4c8.Translation.XY.m128d_f64[0] - dVar33,0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_4c8.Translation.XY.m128d_f64[1] -
                                           __real_402a000000000000) >> 0x20) & uVar17,
                                    SUB84(local_4c8.Translation.XY.m128d_f64[1] -
                                          __real_402a000000000000,0) & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_4c8.Translation.ZW.m128d_f64[0] - dVar34)
                                      >> 0x20) & uVar17,
                                SUB84(local_4c8.Translation.ZW.m128d_f64[0] - dVar34,0) & uVar16)))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_aa8);
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a98,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4884f9:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a4884f9;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_468,2,false);
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)(local_468.Translation.XY.m128d_f64[0] - dVar34)
                                        >> 0x20) & uVar17,
                                  SUB84(local_468.Translation.XY.m128d_f64[0] - dVar34,0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_468.Translation.XY.m128d_f64[1] - dVar37) >> 0x20)
                                    & uVar17,SUB84(local_468.Translation.XY.m128d_f64[1] - dVar37,0)
                                             & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_468.Translation.ZW.m128d_f64[0] - dVar38)
                                      >> 0x20) & uVar17,
                                SUB84(local_468.Translation.ZW.m128d_f64[0] - dVar38,0) & uVar16)))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28);
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a4885ad:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a4885ad;
  }
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Mode = OverrideLocal;
  FRigUnit_ModifyBoneTransforms::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a88,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 == (URigHierarchy *)0x0) {
LAB_14a488621:
    pUVar24 = pUVar30;
  }
  else {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
        &pUVar25->_padding_)) goto LAB_14a488621;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_408,0,false);
  dVar34 = local_408.Translation.XY.m128d_f64[0] - dVar32;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar17,
                                  SUB84(dVar34,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44(local_408.Translation.XY.m128d_f64[1]._4_4_ & uVar17,
                                 local_408.Translation.XY.m128d_f64[1]._0_4_ & uVar16))) ||
     (dVar15 < (double)CONCAT44(local_408.Translation.ZW.m128d_f64[0]._4_4_ & uVar17,
                                local_408.Translation.ZW.m128d_f64[0]._0_4_ & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_a88);
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a78,L"unexpected transform");
  pUVar24 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar24 != (URigHierarchy *)0x0) {
    pUVar25 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar29 = (int)pUVar25->_padding_;
    if ((iVar29 <= *(int *)(pUVar24->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) ==
        &pUVar25->_padding_)) goto LAB_14a4886e5;
  }
  pUVar24 = pUVar30;
LAB_14a4886e5:
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_3a8,1,false);
  dVar34 = __real_4028000000000000;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)(local_3a8.Translation.XY.m128d_f64[0] - dVar33)
                                        >> 0x20) & uVar17,
                                  SUB84(local_3a8.Translation.XY.m128d_f64[0] - dVar33,0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_3a8.Translation.XY.m128d_f64[1] - dVar33) >> 0x20)
                                    & uVar17,SUB84(local_3a8.Translation.XY.m128d_f64[1] - dVar33,0)
                                             & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                       (local_3a8.Translation.ZW.m128d_f64[0] -
                                       __real_4028000000000000) >> 0x20) & uVar17,
                                SUB84(local_3a8.Translation.ZW.m128d_f64[0] -
                                      __real_4028000000000000,0) & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_a78);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a68,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_348,2,false);
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)(local_348.Translation.XY.m128d_f64[0] - dVar33)
                                        >> 0x20) & uVar17,
                                  SUB84(local_348.Translation.XY.m128d_f64[0] - dVar33,0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_348.Translation.XY.m128d_f64[1] - dVar33) >> 0x20)
                                    & uVar17,SUB84(local_348.Translation.XY.m128d_f64[1] - dVar33,0)
                                             & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_348.Translation.ZW.m128d_f64[0] - dVar34)
                                      >> 0x20) & uVar17,
                                SUB84(local_348.Translation.ZW.m128d_f64[0] - dVar34,0) & uVar16)))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Mode = OverrideGlobal;
  FRigUnit_ModifyBoneTransforms::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a58,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_2e8,0,false);
  dVar37 = local_2e8.Translation.XY.m128d_f64[0] - dVar32;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar17,
                                  SUB84(dVar37,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44(local_2e8.Translation.XY.m128d_f64[1]._4_4_ & uVar17,
                                 local_2e8.Translation.XY.m128d_f64[1]._0_4_ & uVar16))) ||
     (dVar15 < (double)CONCAT44(local_2e8.Translation.ZW.m128d_f64[0]._4_4_ & uVar17,
                                local_2e8.Translation.ZW.m128d_f64[0]._0_4_ & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_a58);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_a48,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_288,1,false);
  dVar37 = __real_4024000000000000;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)
                                         (local_288.Translation.XY.m128d_f64[0] -
                                         __real_4024000000000000) >> 0x20) & uVar17,
                                  SUB84(local_288.Translation.XY.m128d_f64[0] -
                                        __real_4024000000000000,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_288.Translation.XY.m128d_f64[1] - dVar33)
                                       >> 0x20) & uVar17,
                                 SUB84(local_288.Translation.XY.m128d_f64[1] - dVar33,0) & uVar16)))
     || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                          (local_288.Translation.ZW.m128d_f64[0] - dVar34) >> 0x20)
                                   & uVar17,SUB84(local_288.Translation.ZW.m128d_f64[0] - dVar34,0)
                                            & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_a48);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_b88,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_228,2,false);
  local_228.Translation.XY.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0] - dVar37;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)local_228.Translation.XY.m128d_f64[0] >> 0x20) &
                                  uVar17,SUB84(local_228.Translation.XY.m128d_f64[0],0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_228.Translation.XY.m128d_f64[1] - dVar33) >> 0x20)
                                    & uVar17,SUB84(local_228.Translation.XY.m128d_f64[1] - dVar33,0)
                                             & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)(local_228.Translation.ZW.m128d_f64[0] - dVar34)
                                      >> 0x20) & uVar17,
                                SUB84(local_228.Translation.ZW.m128d_f64[0] - dVar34,0) & uVar16)))
  {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28);
  if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Data.AllocatorInstance.Data);
  }
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::ResetPoseToInitial(pUVar24,Bone);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).Mode = AdditiveLocal;
  (this->Unit).Weight = 0.5;
  FRigUnit_ModifyBoneTransforms::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_b78,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_1c8,0,false);
  dVar32 = local_1c8.Translation.XY.m128d_f64[0] - dVar32;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar17,
                                  SUB84(dVar32,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44(local_1c8.Translation.XY.m128d_f64[1]._4_4_ & uVar17,
                                 local_1c8.Translation.XY.m128d_f64[1]._0_4_ & uVar16))) ||
     (dVar15 < (double)CONCAT44(local_1c8.Translation.ZW.m128d_f64[0]._4_4_ & uVar17,
                                local_1c8.Translation.ZW.m128d_f64[0]._0_4_ & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_b78);
  if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_b68,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_168,1,false);
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)
                                         (local_168.Translation.XY.m128d_f64[0] -
                                         __real_4018000000000000) >> 0x20) & uVar17,
                                  SUB84(local_168.Translation.XY.m128d_f64[0] -
                                        __real_4018000000000000,0) & uVar16)) ||
      (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                        (local_168.Translation.XY.m128d_f64[1] -
                                        __real_401e000000000000) >> 0x20) & uVar17,
                                 SUB84(local_168.Translation.XY.m128d_f64[1] -
                                       __real_401e000000000000,0) & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                       (local_168.Translation.ZW.m128d_f64[0] -
                                       __real_4022000000000000) >> 0x20) & uVar17,
                                SUB84(local_168.Translation.ZW.m128d_f64[0] -
                                      __real_4022000000000000,0) & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_b68);
  if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_b58,L"unexpected transform");
  pUVar24 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_00);
  URigHierarchy::GetGlobalTransformByIndex(pUVar24,&local_108,2,false);
  local_108.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0] - dVar37;
  if (((dVar15 < (double)CONCAT44((uint)((ulonglong)local_108.Translation.XY.m128d_f64[0] >> 0x20) &
                                  uVar17,SUB84(local_108.Translation.XY.m128d_f64[0],0) & uVar16))
      || (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                           (local_108.Translation.XY.m128d_f64[1] -
                                           __real_4027000000000000) >> 0x20) & uVar17,
                                    SUB84(local_108.Translation.XY.m128d_f64[1] -
                                          __real_4027000000000000,0) & uVar16))) ||
     (dVar15 < (double)CONCAT44((uint)((ulonglong)
                                       (local_108.Translation.ZW.m128d_f64[0] -
                                       __real_402a000000000000) >> 0x20) & uVar17,
                                SUB84(local_108.Translation.ZW.m128d_f64[0] -
                                      __real_402a000000000000,0) & uVar16))) {
    uVar28 = 0;
  }
  else {
    uVar28 = 1;
  }
  (*pcVar4)(this,uVar28,&local_b58,0);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a488c60

FString * __thiscall
FRigUnit_ModifyBoneTransformsTest::GetBeautifiedTestName
          (FRigUnit_ModifyBoneTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ModifyBoneTransforms");
  return __return_storage_ptr__;
}

