// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4e7ca0

EAutomationTestFlags __thiscall
FRigUnit_MultiFABRIKTest::GetTestFlags(FRigUnit_MultiFABRIKTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4e7ce0

bool __thiscall FRigUnit_MultiFABRIKTest::IsStressTest(FRigUnit_MultiFABRIKTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4e7cf0

uint __thiscall FRigUnit_MultiFABRIKTest::GetRequiredDeviceNum(FRigUnit_MultiFABRIKTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4e7d80

FString * __thiscall
FRigUnit_MultiFABRIKTest::GetTestSourceFileName
          (FRigUnit_MultiFABRIKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_MultiFABRIK.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4e7df0

int __thiscall FRigUnit_MultiFABRIKTest::GetTestSourceFileLine(FRigUnit_MultiFABRIKTest *this)

{
  return 0x1db;
}

// GetTests @ 14a4e7f80

/* WARNING: Removing unreachable block (ram,0x00014a4e806d) */
/* WARNING: Removing unreachable block (ram,0x00014a4e8138) */

void __thiscall
FRigUnit_MultiFABRIKTest::GetTests
          (FRigUnit_MultiFABRIKTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_MultiFABRIK");
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

// RunTest @ 14a4e8270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_MultiFABRIKTest::RunTest(FRigUnit_MultiFABRIKTest *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined1 uVar3;
  URigHierarchy *this_00;
  UClass *pUVar4;
  FRigUnit_MultiFABRIK local_b8;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar4 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a4e82dd;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4e82dd:
  URigHierarchy::Reset(this_00);
  local_b8.RootBone.ComparisonIndex.Value = 0;
  local_b8.RootBone.Number = 0;
  local_b8._padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  local_b8.Effectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8._padding_ = (longlong)&___7FRigUnit_MultiFABRIK__6B_;
  local_b8.Effectors.ArrayNum = 0;
  local_b8.Effectors.ArrayMax = 0;
  local_b8.WorkData.EffectorBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.WorkData.EffectorBoneIndices.ArrayNum = 0;
  local_b8.WorkData.EffectorBoneIndices.ArrayMax = 0;
  local_b8.WorkData.ChainGroup.Chain.Link.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.WorkData.ChainGroup.Chain.Link.ArrayNum = 0;
  local_b8.WorkData.ChainGroup.Chain.Link.ArrayMax = 0;
  local_b8.WorkData.ChainGroup.Chain.EffectorArrayIndex = -1;
  local_b8.WorkData.ChainGroup.Chain.MaxLength = 0.0;
  local_b8.WorkData.ChainGroup.RootBoneTreeIndex = -1;
  local_b8.WorkData.ChainGroup.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.WorkData.ChainGroup.Children.ArrayNum = 0;
  local_b8.WorkData.ChainGroup.Children.ArrayMax = 0;
  local_b8.WorkData.BoneTree.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.WorkData.BoneTree.ArrayNum = 0;
  local_b8.WorkData.BoneTree.ArrayMax = 0;
  local_b8.Precision = 1.0;
  local_b8.MaxIterations = 4;
  local_b8.bPropagateToChildren = true;
  local_b8.bIsInitialized = false;
  FRigUnit_MultiFABRIK::operator=(&this->Unit,&local_b8);
  FVar2.Data = local_b8.WorkData.BoneTree.AllocatorInstance.Data;
  DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>
            ((FRigUnit_MultiFABRIK_BoneWorkingData *)
             local_b8.WorkData.BoneTree.AllocatorInstance.Data,local_b8.WorkData.BoneTree.ArrayNum);
  if ((FRigUnit_MultiFABRIK_BoneWorkingData *)FVar2.Data !=
      (FRigUnit_MultiFABRIK_BoneWorkingData *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.WorkData.ChainGroup.Children.AllocatorInstance.Data;
  DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>
            ((FRigUnit_MultiFABRIK_ChainGroup *)
             local_b8.WorkData.ChainGroup.Children.AllocatorInstance.Data,
             local_b8.WorkData.ChainGroup.Children.ArrayNum);
  if ((FRigUnit_MultiFABRIK_ChainGroup *)FVar2.Data != (FRigUnit_MultiFABRIK_ChainGroup *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.WorkData.ChainGroup.Chain.Link.AllocatorInstance.Data;
  DestructItems<FFABRIKChainLink,int>
            ((FFABRIKChainLink *)local_b8.WorkData.ChainGroup.Chain.Link.AllocatorInstance.Data,
             local_b8.WorkData.ChainGroup.Chain.Link.ArrayNum);
  if ((FFABRIKChainLink *)FVar2.Data != (FFABRIKChainLink *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.WorkData.EffectorBoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_b8.WorkData.EffectorBoneIndices.AllocatorInstance.Data);
  }
  if (local_b8.Effectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Effectors.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4e83f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar3;
}

// RunControlRigUnitTest @ 14a4e8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_MultiFABRIKTest::RunControlRigUnitTest(FRigUnit_MultiFABRIKTest *this,FString *param_1)

{
  int *piVar1;
  FRigUnit_MultiFABRIK *this_00;
  TArray<FRigUnit_MultiFABRIK_EndEffector,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  URigHierarchyController *pUVar19;
  UClass *pUVar20;
  FName *pFVar21;
  URigHierarchy *pUVar22;
  undefined8 uVar23;
  URigHierarchyController *pUVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_888 [32];
  FRigElementKey local_838;
  FRigElementKey local_828;
  FRigElementKey local_818;
  uint local_808;
  FNameEntryId FStack_804;
  undefined4 uStack_800;
  FName local_7fc;
  FName local_7f4;
  FName local_7ec;
  FName local_7e4;
  FRigElementKey local_7d8;
  FName local_7c8 [2];
  FRigElementKey local_7b8;
  FRigElementKey local_7a8;
  FRigElementKey local_798;
  FRigElementKey local_788;
  FRigElementKey local_778;
  FRigElementKey local_768;
  FRigElementKey local_758;
  FRigElementKey local_748;
  FRigElementKey local_738;
  FRigElementKey local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  double local_6d8;
  double dStack_6d0;
  undefined8 local_6c8;
  double local_6c0;
  double dStack_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  FName local_678;
  FName local_670;
  FName local_668;
  FName local_660;
  FName local_658;
  double local_650;
  double dStack_648;
  double local_640;
  double local_638;
  double dStack_630;
  double local_628;
  double local_610;
  double local_5f8;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_888;
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  pUVar24 = (URigHierarchyController *)0x0;
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4e84cb:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e84cb;
  }
  dVar25 = _UNK_150689518;
  dVar14 = ___xmm_00000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_808 = local_808 & 0xffffff00;
  FStack_804.Value = 0;
  uStack_800 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_408._8_4_ = uVar28;
  local_408._0_8_ = (double)fVar5;
  local_408._12_4_ = uVar29;
  local_3e8 = ___xmm_00000000000000003ff0000000000000;
  dStack_3e0 = _UNK_150689518;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3f8 = (double)fVar8;
  dStack_3f0 = (double)fVar10;
  local_3c8 = (double)fVar6;
  dStack_3c0 = (double)fVar7;
  local_3b8 = (double)fVar9;
  dStack_3b0 = (double)fVar11;
  pFVar21 = ::FName::FName(&local_678,L"Root");
  local_778.Name.ComparisonIndex.Value = FStack_804.Value;
  local_778._0_4_ = local_808;
  local_5e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
  local_5e8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_5e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
  local_5e8.Translation.XY.m128d_f64[0] = dVar14;
  local_5e8.Translation.XY.m128d_f64[1] = dVar25;
  local_5e8.Translation.ZW.m128d_f64[0] = 0.0;
  local_5e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_778.Name.Number = 0;
  local_5e8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_5e8.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_5e8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_5e8.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  local_5e8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_5e8.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  URigHierarchyController::AddBone
            (pUVar19,&local_828,*pFVar21,&local_778,&local_5e8,true,User,false,false);
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4e85ed:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e85ed;
  }
  uVar12 = local_828.Name.Number;
  uVar23 = local_828._0_8_;
  dVar25 = _UNK_150744178;
  dVar14 = ___xmm_40000000000000003ff0000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_3a8._8_4_ = uVar30;
  local_3a8._0_8_ = (double)fVar5;
  local_3a8._12_4_ = uVar31;
  local_398._8_4_ = uVar28;
  local_398._0_8_ = (double)fVar8;
  local_398._12_4_ = uVar29;
  local_388 = ___xmm_40000000000000003ff0000000000000;
  dStack_380 = _UNK_150744178;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = (double)fVar6;
  dStack_360 = (double)fVar7;
  local_358 = (double)fVar9;
  dStack_350 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_658,L"Chain1_0");
  uVar15 = local_828._0_8_;
  local_588.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
  local_588.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_588.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_588.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_588.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_588.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_588.Translation.XY.m128d_f64[0] = dVar14;
  local_588.Translation.XY.m128d_f64[1] = dVar25;
  local_588.Translation.ZW.m128d_f64[0] = 0.0;
  local_588.Translation.ZW.m128d_f64[1] = 0.0;
  local_828.Type = (ERigElementType)uVar23;
  local_828._1_3_ = SUB83(uVar23,1);
  local_828.Name.ComparisonIndex.Value = SUB84(uVar23,4);
  local_768.Type = local_828.Type;
  local_768._1_3_ = local_828._1_3_;
  local_768.Name.ComparisonIndex.Value = local_828.Name.ComparisonIndex.Value;
  local_768.Name.Number = uVar12;
  local_828._0_8_ = uVar15;
  local_588.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_588.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  local_588.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_588.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            (pUVar19,&local_758,*pFVar21,&local_768,&local_588,true,User,false,false);
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4e8709:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e8709;
  }
  dVar25 = _UNK_15076b9b8;
  dVar14 = ___xmm_40000000000000004008000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_348._8_4_ = uVar30;
  local_348._0_8_ = (double)fVar5;
  local_348._12_4_ = uVar31;
  local_338._8_4_ = uVar28;
  local_338._0_8_ = (double)fVar8;
  local_338._12_4_ = uVar29;
  local_328 = ___xmm_40000000000000004008000000000000;
  dStack_320 = _UNK_15076b9b8;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = (double)fVar6;
  dStack_300 = (double)fVar7;
  local_2f8 = (double)fVar9;
  dStack_2f0 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_670,L"Chain1_1");
  local_528.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
  local_528.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_528.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_528.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_528.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_528.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_528.Translation.XY.m128d_f64[0] = dVar14;
  local_528.Translation.XY.m128d_f64[1] = dVar25;
  local_528.Translation.ZW.m128d_f64[0] = 0.0;
  local_528.Translation.ZW.m128d_f64[1] = 0.0;
  local_748.Type = local_758.Type;
  local_748._1_3_ = local_758._1_3_;
  local_748.Name.ComparisonIndex.Value = local_758.Name.ComparisonIndex.Value;
  local_748.Name.Number = local_758.Name.Number;
  local_528.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_528.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  local_528.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_528.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            (pUVar19,&local_818,*pFVar21,&local_748,&local_528,true,User,false,false);
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4e8824:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e8824;
  }
  dVar25 = _UNK_15202fd18;
  dVar14 = ___xmm_0000000000000000c000000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_2e8._8_4_ = uVar30;
  local_2e8._0_8_ = (double)fVar5;
  local_2e8._12_4_ = uVar31;
  local_2d8._8_4_ = uVar28;
  local_2d8._0_8_ = (double)fVar8;
  local_2d8._12_4_ = uVar29;
  local_2c8 = ___xmm_0000000000000000c000000000000000;
  dStack_2c0 = _UNK_15202fd18;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = (double)fVar6;
  dStack_2a0 = (double)fVar7;
  local_298 = (double)fVar9;
  dStack_290 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_668,L"Chain2_0");
  local_4c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
  local_4c8.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_4c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_4c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_4c8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_4c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_4c8.Translation.XY.m128d_f64[0] = dVar14;
  local_4c8.Translation.XY.m128d_f64[1] = dVar25;
  local_4c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_4c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_738.Type = local_828.Type;
  local_738._1_3_ = local_828._1_3_;
  local_738.Name.ComparisonIndex.Value = local_828.Name.ComparisonIndex.Value;
  local_738.Name.Number = local_828.Name.Number;
  local_4c8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_4c8.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  local_4c8.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_4c8.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            (pUVar19,&local_728,*pFVar21,&local_738,&local_4c8,true,User,false,false);
  pUVar19 = (URigHierarchyController *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5f8);
  if (pUVar19 == (URigHierarchyController *)0x0) {
LAB_14a4e8940:
    pUVar19 = pUVar24;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e8940;
  }
  dVar25 = _UNK_15219d498;
  dVar14 = ___xmm_4008000000000000c000000000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_288._8_4_ = uVar30;
  local_288._0_8_ = (double)fVar5;
  local_288._12_4_ = uVar31;
  local_278._8_4_ = uVar28;
  local_278._0_8_ = (double)fVar8;
  local_278._12_4_ = uVar29;
  local_268 = ___xmm_4008000000000000c000000000000000;
  dStack_260 = _UNK_15219d498;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = (double)fVar6;
  dStack_240 = (double)fVar7;
  local_238 = (double)fVar9;
  dStack_230 = (double)fVar10;
  pFVar21 = ::FName::FName(&local_660,L"Chain2_1");
  local_468.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
  local_468.Rotation.XY.m128d_f64[0] = (double)fVar5;
  local_468.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
  local_468.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
  local_468.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_468.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
  local_468.Translation.XY.m128d_f64[0] = dVar14;
  local_468.Translation.XY.m128d_f64[1] = dVar25;
  local_468.Translation.ZW.m128d_f64[0] = 0.0;
  local_468.Translation.ZW.m128d_f64[1] = 0.0;
  local_7d8.Type = local_728.Type;
  local_7d8._1_3_ = local_728._1_3_;
  local_7d8.Name.ComparisonIndex.Value = local_728.Name.ComparisonIndex.Value;
  local_7d8.Name.Number = local_728.Name.Number;
  local_468.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_468.Scale3D.XY.m128d_f64[1] = (double)fVar7;
  local_468.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_468.Scale3D.ZW.m128d_f64[1] = (double)fVar10;
  URigHierarchyController::AddBone
            (pUVar19,&local_838,*pFVar21,&local_7d8,&local_468,true,User,false,false);
  this_00 = &this->Unit;
  FRigUnit_MultiFABRIK::Execute(this_00,*(FControlRigExecuteContext **)&this->field_0x370);
  ::FName::FName(local_7c8,L"Root");
  pTVar2 = &(this->Unit).Effectors;
  (this->Unit).RootBone = local_7c8[0];
  piVar1 = &(this->Unit).Effectors.ArrayNum;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,2,&pTVar2->AllocatorInstance,piVar1,&(this->Unit).Effectors.ArrayMax);
  DefaultConstructItems<FRigUnit_MultiFABRIK_EndEffector,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20,2);
  (**(code **)(this_00->_padding_ + 0x38))(this_00);
  FRigUnit_MultiFABRIK::Execute(this_00,*(FControlRigExecuteContext **)&this->field_0x370);
  ::FName::FName(&local_7fc,L"Chain1_1");
  if (*piVar1 < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  dVar25 = _UNK_15076b9b8;
  dVar14 = ___xmm_40000000000000004008000000000000;
  local_6c8 = 0;
  local_6d8 = ___xmm_40000000000000004008000000000000;
  dStack_6d0 = _UNK_15076b9b8;
  *(FName *)(pTVar2->AllocatorInstance).Data = local_7fc;
  if (*piVar1 < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar3 + 8) = dVar14;
  *(double *)(pFVar3 + 0x10) = dVar25;
  *(undefined8 *)(pFVar3 + 0x18) = local_6c8;
  ::FName::FName(&local_7f4,L"Chain2_1");
  if (*piVar1 < 2) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  dVar25 = _UNK_15219d498;
  dVar14 = ___xmm_4008000000000000c000000000000000;
  local_6b0 = 0;
  local_6c0 = ___xmm_4008000000000000c000000000000000;
  dStack_6b8 = _UNK_15219d498;
  *(FName *)((pTVar2->AllocatorInstance).Data + 0x20) = local_7f4;
  if (*piVar1 < 2) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar3 + 0x28) = dVar14;
  *(double *)(pFVar3 + 0x30) = dVar25;
  *(undefined8 *)(pFVar3 + 0x38) = local_6b0;
  (this->Unit).bPropagateToChildren = true;
  (**(code **)(this_00->_padding_ + 0x38))(this_00);
  FRigUnit_MultiFABRIK::Execute(this_00,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_708,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4e8ca7:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e8ca7;
  }
  local_7b8.Type = local_818.Type;
  local_7b8._1_3_ = local_818._1_3_;
  local_7b8.Name.ComparisonIndex.Value = local_818.Name.ComparisonIndex.Value;
  local_7b8.Name.Number = local_818.Name.Number;
  iVar18 = URigHierarchy::GetIndex(pUVar22,&local_7b8,true);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_228,iVar18,false);
  dVar25 = __real_4008000000000000;
  dVar14 = __real_3f1a36e2e0000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_640 = local_228.Translation.ZW.m128d_f64[0];
  local_650 = local_228.Translation.XY.m128d_f64[0];
  dStack_648 = local_228.Translation.XY.m128d_f64[1];
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)
                                (local_228.Translation.XY.m128d_f64[0] - __real_4008000000000000) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_228.Translation.XY.m128d_f64[0] - __real_4008000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar26 = SUB84(local_228.Translation.XY.m128d_f64[1] - __real_4000000000000000,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar27 = (uint)((ulonglong)(local_228.Translation.XY.m128d_f64[1] - __real_4000000000000000)
                     >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar27,uVar26) &&
      (double)CONCAT44(uVar27,uVar26) != __real_3f1a36e2e0000000)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_228.Translation.ZW.m128d_f64[0] >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_228.Translation.ZW.m128d_f64[0],0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_708);
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_6f8,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4e8dc4:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e8dc4;
  }
  local_7a8.Type = local_838.Type;
  local_7a8._1_3_ = local_838._1_3_;
  local_7a8.Name.ComparisonIndex.Value = local_838.Name.ComparisonIndex.Value;
  local_7a8.Name.Number = local_838.Name.Number;
  iVar18 = URigHierarchy::GetIndex(pUVar22,&local_7a8,true);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_1c8,iVar18,false);
  local_628 = local_1c8.Translation.ZW.m128d_f64[0];
  local_638 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_630 = local_1c8.Translation.XY.m128d_f64[1];
  if (((dVar14 < (double)CONCAT44((uint)((ulonglong)
                                         (local_1c8.Translation.XY.m128d_f64[0] -
                                         __real_c000000000000000) >> 0x20) & uVar13,
                                  SUB84(local_1c8.Translation.XY.m128d_f64[0] -
                                        __real_c000000000000000,0) & uVar12)) ||
      (uVar26 = SUB84(local_1c8.Translation.XY.m128d_f64[1] - dVar25,0) & uVar12,
      uVar27 = (uint)((ulonglong)(local_1c8.Translation.XY.m128d_f64[1] - dVar25) >> 0x20) & uVar13,
      dVar14 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar14)) ||
     (dVar14 < (double)CONCAT44((uint)((ulonglong)local_1c8.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar13,SUB84(local_1c8.Translation.ZW.m128d_f64[0],0) & uVar12))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_6f8);
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_7ec,L"Chain1_1");
  if (*piVar1 < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  uVar15 = _UNK_150925008;
  uVar23 = ___xmm_00000000000000004010000000000000;
  local_698 = 0;
  local_6a8 = ___xmm_00000000000000004010000000000000;
  uStack_6a0 = _UNK_150925008;
  *(FName *)(pTVar2->AllocatorInstance).Data = local_7ec;
  if (*piVar1 < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + 8) = uVar23;
  *(undefined8 *)(pFVar3 + 0x10) = uVar15;
  *(undefined8 *)(pFVar3 + 0x18) = local_698;
  ::FName::FName(&local_7e4,L"Chain2_1");
  if (*piVar1 < 2) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  uVar15 = _UNK_15219d538;
  uVar23 = ___xmm_c0140000000000000000000000000000;
  local_680 = 0;
  local_690 = ___xmm_c0140000000000000000000000000000;
  uStack_688 = _UNK_15219d538;
  *(FName *)((pTVar2->AllocatorInstance).Data + 0x20) = local_7e4;
  if (*piVar1 < 2) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      uVar17 = (*pcVar4)();
      return (bool)uVar17;
    }
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + 0x28) = uVar23;
  *(undefined8 *)(pFVar3 + 0x30) = uVar15;
  *(undefined8 *)(pFVar3 + 0x38) = local_680;
  (this->Unit).bPropagateToChildren = true;
  (**(code **)(this_00->_padding_ + 0x38))(this_00);
  FRigUnit_MultiFABRIK::Execute(this_00,*(FControlRigExecuteContext **)&this->field_0x370);
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_6e8,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar22 == (URigHierarchy *)0x0) {
LAB_14a4e9068:
    pUVar22 = (URigHierarchy *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar18) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
        &pUVar20->_padding_)) goto LAB_14a4e9068;
  }
  local_798.Type = local_818.Type;
  local_798._1_3_ = local_818._1_3_;
  local_798.Name.ComparisonIndex.Value = local_818.Name.ComparisonIndex.Value;
  local_798.Name.Number = local_818.Name.Number;
  iVar18 = URigHierarchy::GetIndex(pUVar22,&local_798,true);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_168,iVar18,false);
  dVar14 = __real_3fb99999a0000000;
  local_610 = local_168.Translation.ZW.m128d_f64[0];
  dVar25 = local_168.Translation.XY.m128d_f64[0] - __real_4010000000000000;
  if (((__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar13,SUB84(dVar25,0) & uVar12)) ||
      (uVar26 = local_168.Translation.XY.m128d_f64[1]._0_4_ & uVar12,
      uVar27 = local_168.Translation.XY.m128d_f64[1]._4_4_ & uVar13,
      __real_3fb99999a0000000 <= (double)CONCAT44(uVar27,uVar26) &&
      (double)CONCAT44(uVar27,uVar26) != __real_3fb99999a0000000)) ||
     (__real_3fb99999a0000000 <
      (double)CONCAT44((uint)((ulonglong)local_168.Translation.ZW.m128d_f64[0] >> 0x20) & uVar13,
                       SUB84(local_168.Translation.ZW.m128d_f64[0],0) & uVar12))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_6e8);
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_718,L"unexpected transform");
  pUVar22 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (pUVar22 != (URigHierarchy *)0x0) {
    pUVar20 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar18 = (int)pUVar20->_padding_;
    if ((iVar18 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
        &pUVar20->_padding_)) goto LAB_14a4e9166;
  }
  pUVar22 = (URigHierarchy *)0x0;
LAB_14a4e9166:
  local_788.Type = local_838.Type;
  local_788._1_3_ = local_838._1_3_;
  local_788.Name.ComparisonIndex.Value = local_838.Name.ComparisonIndex.Value;
  local_788.Name.Number = local_838.Name.Number;
  iVar18 = URigHierarchy::GetIndex(pUVar22,&local_788,true);
  URigHierarchy::GetGlobalTransformByIndex(pUVar22,&local_108,iVar18,false);
  local_5f8 = local_108.Translation.ZW.m128d_f64[0];
  if (((dVar14 < (double)CONCAT44(local_108.Translation.XY.m128d_f64[0]._4_4_ & uVar13,
                                  local_108.Translation.XY.m128d_f64[0]._0_4_ & uVar12)) ||
      (dVar25 = local_108.Translation.XY.m128d_f64[1] - __real_c014000000000000,
      uVar26 = SUB84(dVar25,0) & uVar12, uVar27 = (uint)((ulonglong)dVar25 >> 0x20) & uVar13,
      dVar14 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar14)) ||
     (dVar14 < (double)CONCAT44((uint)((ulonglong)local_108.Translation.ZW.m128d_f64[0] >> 0x20) &
                                uVar13,SUB84(local_108.Translation.ZW.m128d_f64[0],0) & uVar12))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_718,0);
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4e9260

FString * __thiscall
FRigUnit_MultiFABRIKTest::GetBeautifiedTestName
          (FRigUnit_MultiFABRIKTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_MultiFABRIK");
  return __return_storage_ptr__;
}

