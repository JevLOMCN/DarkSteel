// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4b6080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetTestFlags
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4b6090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::IsStressTest
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4b6110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetRequiredDeviceNum
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4b6120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetTestSourceFileName
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4b6150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetTestSourceFileLine
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this)

{
  return 0x5da;
}

// GetTests @ 14a4b6230

/* WARNING: Removing unreachable block (ram,0x00014a4b631d) */
/* WARNING: Removing unreachable block (ram,0x00014a4b63e8) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetTests
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_RotationConstraintLocalSpaceOffset");
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

// RunTest @ 14a4b6450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::RunTest
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  FRigBaseElement *pFVar8;
  undefined3 uVar9;
  FNameEntryId FVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  URigHierarchy *this_00;
  UClass *pUVar14;
  FRigUnit_RotationConstraintLocalSpaceOffset *pFVar15;
  FRigUnit_RotationConstraintLocalSpaceOffset local_88;
  
  (**(code **)(*(longlong *)this + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x5d0);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar14 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar5 = (int)pUVar14->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar14->_padding_)) goto LAB_14a4b64b7;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4b64b7:
  URigHierarchy::Reset(this_00);
  pFVar15 = FRigUnit_RotationConstraintLocalSpaceOffset::FRigUnit_RotationConstraintLocalSpaceOffset
                      (&local_88);
  pTVar3 = &(this->Unit).Parents;
  uVar9 = *(undefined3 *)&(pFVar15->Child).field_0x1;
  FVar10.Value = (pFVar15->Child).Name.ComparisonIndex.Value;
  pTVar1 = &pFVar15->Parents;
  (this->Unit).Child.Type = (pFVar15->Child).Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = uVar9;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  (this->Unit).Child.Name.Number = (pFVar15->Child).Name.Number;
  (this->Unit).bMaintainOffset = pFVar15->bMaintainOffset;
  bVar11 = (pFVar15->Filter).bY;
  (this->Unit).Filter.bX = (pFVar15->Filter).bX;
  (this->Unit).Filter.bY = bVar11;
  (this->Unit).Filter.bZ = (pFVar15->Filter).bZ;
  if (pTVar3 != pTVar1) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar15->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar15->Parents).ArrayMax;
    (pFVar15->Parents).ArrayNum = 0;
    (pFVar15->Parents).ArrayMax = 0;
  }
  pTVar2 = &pFVar15->ParentCaches;
  (this->Unit).AdvancedSettings = pFVar15->AdvancedSettings;
  (this->Unit).Weight = pFVar15->Weight;
  uVar9 = *(undefined3 *)&(pFVar15->ChildCache).Key.field_0x1;
  FVar10.Value = (pFVar15->ChildCache).Key.Name.ComparisonIndex.Value;
  uVar7 = *(undefined8 *)&(pFVar15->ChildCache).Key.Name.Number;
  (this->Unit).ChildCache.Key.Type = (pFVar15->ChildCache).Key.Type;
  *(undefined3 *)&(this->Unit).ChildCache.Key.field_0x1 = uVar9;
  (this->Unit).ChildCache.Key.Name.ComparisonIndex = (FNameEntryId)FVar10.Value;
  *(undefined8 *)&(this->Unit).ChildCache.Key.Name.Number = uVar7;
  uVar12 = *(undefined4 *)&(pFVar15->ChildCache).field_0x14;
  pFVar8 = (pFVar15->ChildCache).Element;
  pTVar4 = &(this->Unit).ParentCaches;
  (this->Unit).ChildCache.ContainerVersion = (pFVar15->ChildCache).ContainerVersion;
  *(undefined4 *)&(this->Unit).ChildCache.field_0x14 = uVar12;
  (this->Unit).ChildCache.Element = pFVar8;
  if (pTVar4 != pTVar2) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).ParentCaches.ArrayNum = (pFVar15->ParentCaches).ArrayNum;
    (this->Unit).ParentCaches.ArrayMax = (pFVar15->ParentCaches).ArrayMax;
    (pFVar15->ParentCaches).ArrayNum = 0;
    (pFVar15->ParentCaches).ArrayMax = 0;
  }
  if (local_88.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentCaches.AllocatorInstance.Data);
  }
  if (local_88.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parents.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a4b65dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar13 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar13;
}

// RunControlRigUnitTest @ 14a4b6600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::RunControlRigUnitTest
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this,FString *param_1)

{
  int *piVar1;
  undefined1 *this_00;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *this_01;
  FRigUnit_RotationConstraintLocalSpaceOffset *this_02;
  FRigElementKey *pFVar3;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  bool bVar32;
  undefined1 uVar33;
  int iVar34;
  uint uVar35;
  URigHierarchy *pUVar36;
  UClass *pUVar37;
  TQuat<double> *pTVar38;
  FName *pFVar39;
  FScriptContainerElement *pFVar40;
  FString *pFVar41;
  URigHierarchyController *pUVar42;
  uint uVar43;
  FString *pFVar44;
  undefined8 uVar45;
  URigHierarchy *pUVar46;
  longlong lVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  double dVar80;
  undefined1 auStackY_1288 [32];
  TQuat<double> local_1238;
  FRigElementKey local_1218;
  undefined4 uStack_120c;
  FRigElementKey local_1208;
  undefined4 uStack_11fc;
  FRigElementKey local_11f8;
  undefined4 uStack_11ec;
  FRigElementKey local_11e8;
  undefined4 uStack_11dc;
  FRigElementKey local_11d8;
  undefined4 uStack_11cc;
  FRigElementKey local_11c8;
  undefined4 uStack_11bc;
  uint local_11b8;
  FNameEntryId FStack_11b4;
  undefined4 uStack_11b0;
  uint local_11ac;
  FNameEntryId FStack_11a8;
  undefined4 uStack_11a4;
  undefined4 local_11a0;
  FNameEntryId FStack_119c;
  uint uStack_1198;
  uint local_1194;
  FNameEntryId FStack_1190;
  undefined4 uStack_118c;
  uint local_1188;
  FNameEntryId FStack_1184;
  undefined4 uStack_1180;
  uint local_117c;
  FNameEntryId FStack_1178;
  undefined4 uStack_1174;
  uint local_1170;
  FNameEntryId FStack_116c;
  undefined4 uStack_1168;
  undefined4 local_1164;
  FNameEntryId FStack_1160;
  uint uStack_115c;
  undefined4 local_1158;
  FNameEntryId FStack_1154;
  uint uStack_1150;
  FName local_114c;
  FName local_1144;
  FRigElementKey local_1138;
  FRigElementKey local_1128;
  FRigElementKey local_1118;
  FRigElementKey local_1108;
  FRigElementKey local_10f8;
  FName local_10e8 [2];
  FRigElementKey local_10d8;
  FRigElementKey local_10c8;
  FRigElementKey local_10b8;
  FRigElementKey local_10a8;
  FRigElementKey local_1098;
  FRigElementKey local_1088;
  FRigElementKey local_1078;
  FRigElementKey local_1068;
  FRigElementKey local_1058;
  FRigElementKey local_1048;
  FRigElementKey local_1038;
  FRigElementKey local_1028;
  FString local_1018;
  FString local_1008;
  FString local_ff8;
  FString local_fe8;
  FString local_fd8;
  FString local_fc8;
  FString local_fb8;
  TVector<double>_u_0 local_fa8;
  TVector<double>_u_0 local_f90;
  TVector<double> local_f78;
  FName local_f60;
  FName local_f58;
  FName local_f50;
  FName local_f48;
  FName local_f40;
  double local_f38;
  double local_f30;
  double local_f28;
  double local_f20;
  FName local_f18;
  FName local_f10;
  FName local_f08;
  FName local_f00;
  TVector<double>_u_0 local_ef8;
  TVector<double>_u_0 local_ee0;
  TVector<double>_u_0 local_ec8;
  TVector<double>_u_0 local_eb0;
  TVector<double>_u_0 local_e98;
  TVector<double>_u_0 local_e80;
  TVector<double>_u_0 local_e68;
  TVector<double>_u_0 local_e50;
  TVector<double>_u_0 local_e38;
  TVector<double>_u_0 local_e20;
  TVector<double>_u_0 local_e08;
  TVector<double>_u_0 local_df0;
  TVector<double>_u_0 local_dd8;
  TVector<double>_u_0 local_dc0;
  TVector<double>_u_0 local_da8;
  TQuat<double> local_d88;
  TQuat<double> local_d68;
  TQuat<double> local_d48;
  FRigElementKey local_d28;
  TTransform<double> local_d18;
  TTransform<double> local_cb8;
  TTransform<double> local_c58;
  TTransform<double> local_bf8;
  TTransform<double> local_b98;
  TTransform<double> local_b38;
  TTransform<double> local_ad8;
  TTransform<double> local_a78;
  TTransform<double> local_a18;
  TTransform<double> local_9b8;
  TTransform<double> local_958;
  TTransform<double> local_8f8;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  double local_828;
  double dStack_820;
  double local_818;
  double dStack_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  TQuat<double> local_538;
  TQuat<double> local_518;
  TQuat<double> local_4f8;
  TQuat<double> local_4d8;
  TQuat<double> local_4b8;
  TQuat<double> local_498;
  TQuat<double> local_478;
  TQuat<double> local_458;
  TQuat<double> local_438;
  TQuat<double> local_418;
  TQuat<double> local_3f8;
  TQuat<double> local_3d8;
  TQuat<double> local_3b8;
  TQuat<double> local_398;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1288;
  this_00 = &this->field_0x5f8;
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  pUVar46 = (URigHierarchy *)0x0;
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b66d6:
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b66d6;
  }
  local_ef8._s_0.X = ___xmm_c024000000000000c024000000000000;
  local_ef8._s_0.Y = _UNK_1520301b8;
  local_ef8._s_0.Z = __real_c024000000000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_398,(TVector<double> *)&local_ef8._s_0,XZY,false);
  dVar28 = _UNK_150689688;
  dVar27 = ___xmm_3ff00000000000003ff0000000000000;
  dVar26 = _UNK_150689518;
  dVar25 = ___xmm_00000000000000003ff0000000000000;
  local_858 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_850 = _UNK_150689688;
  dVar17 = pTVar38->X;
  dVar18 = pTVar38->Y;
  dVar19 = pTVar38->Z;
  dVar20 = pTVar38->W;
  local_878 = 0;
  uStack_870 = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_848 = ___xmm_00000000000000003ff0000000000000;
  dStack_840 = _UNK_150689518;
  local_11b8 = local_11b8 & 0xffffff00;
  FStack_11b4.Value = 0;
  uStack_11b0 = 0;
  local_898 = dVar17;
  dStack_890 = dVar18;
  local_888 = dVar19;
  dStack_880 = dVar20;
  pFVar39 = ::FName::FName(&local_f60,L"Child");
  local_10d8.Name.ComparisonIndex.Value = FStack_11b4.Value;
  local_10d8._0_4_ = local_11b8;
  local_c58.Translation.XY.m128d_f64[0] = 0.0;
  local_c58.Translation.XY.m128d_f64[1] = 0.0;
  local_c58.Translation.ZW.m128d_f64[0] = 0.0;
  local_c58.Translation.ZW.m128d_f64[1] = 0.0;
  local_c58.Scale3D.XY.m128d_f64[0] = dVar27;
  local_c58.Scale3D.XY.m128d_f64[1] = dVar28;
  local_c58.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_c58.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_10d8.Name.Number = 0;
  local_c58.Rotation.XY.m128d_f64[0] = dVar17;
  local_c58.Rotation.XY.m128d_f64[1] = dVar18;
  local_c58.Rotation.ZW.m128d_f64[0] = dVar19;
  local_c58.Rotation.ZW.m128d_f64[1] = dVar20;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar36,&local_10f8,*pFVar39,&local_10d8,&local_c58,true,
             User,false,false);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b6825:
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b6825;
  }
  local_ee0._s_0.X = ___xmm_c03e000000000000403e000000000000;
  local_ee0._s_0.Y = _UNK_15219d568;
  local_ee0._s_0.Z = __real_c03e000000000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_3b8,(TVector<double> *)&local_ee0._s_0,XZY,false);
  dVar30 = _UNK_151444f88;
  dVar29 = ___xmm_40340000000000004034000000000000;
  dVar80 = _UNK_151444f48;
  dVar79 = ___xmm_00000000000000004034000000000000;
  local_818 = ___xmm_40340000000000004034000000000000;
  dStack_810 = _UNK_151444f88;
  dVar17 = pTVar38->X;
  dVar18 = pTVar38->Y;
  dVar19 = pTVar38->Z;
  dVar20 = pTVar38->W;
  local_808 = ___xmm_00000000000000004034000000000000;
  dStack_800 = _UNK_151444f48;
  local_7f8 = dVar27;
  dStack_7f0 = dVar28;
  local_7e8 = dVar25;
  dStack_7e0 = dVar26;
  local_11ac = local_11ac & 0xffffff00;
  FStack_11a8.Value = 0;
  uStack_11a4 = 0;
  local_838 = dVar17;
  dStack_830 = dVar18;
  local_828 = dVar19;
  dStack_820 = dVar20;
  pFVar39 = ::FName::FName(&local_f58,L"Parent1");
  local_10c8.Name.ComparisonIndex.Value = FStack_11a8.Value;
  local_10c8._0_4_ = local_11ac;
  local_bf8.Translation.XY.m128d_f64[0] = dVar29;
  local_bf8.Translation.XY.m128d_f64[1] = dVar30;
  local_bf8.Translation.ZW.m128d_f64[0] = dVar79;
  local_bf8.Translation.ZW.m128d_f64[1] = dVar80;
  local_bf8.Scale3D.XY.m128d_f64[0] = dVar27;
  local_bf8.Scale3D.XY.m128d_f64[1] = dVar28;
  local_bf8.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_bf8.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_10c8.Name.Number = 0;
  local_bf8.Rotation.XY.m128d_f64[0] = dVar17;
  local_bf8.Rotation.XY.m128d_f64[1] = dVar18;
  local_bf8.Rotation.ZW.m128d_f64[0] = dVar19;
  local_bf8.Rotation.ZW.m128d_f64[1] = dVar20;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar36,&local_1088,*pFVar39,&local_10c8,&local_bf8,true,
             User,false,false);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b6970:
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b6970;
  }
  local_ec8._s_0.X = ___xmm_c044000000000000c044000000000000;
  local_ec8._s_0.Y = _UNK_15219d578;
  local_ec8._s_0.Z = __real_4044000000000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_538,(TVector<double> *)&local_ec8._s_0,XZY,false);
  dVar30 = _UNK_151e77bc8;
  dVar29 = ___xmm_00000000000000004044000000000000;
  dVar80 = _UNK_151bce3f8;
  dVar79 = ___xmm_40440000000000004044000000000000;
  local_7b8 = ___xmm_40440000000000004044000000000000;
  dStack_7b0 = _UNK_151bce3f8;
  dVar17 = pTVar38->X;
  dVar18 = pTVar38->Y;
  dVar19 = pTVar38->Z;
  dVar20 = pTVar38->W;
  local_7a8 = ___xmm_00000000000000004044000000000000;
  dStack_7a0 = _UNK_151e77bc8;
  local_798 = dVar27;
  dStack_790 = dVar28;
  local_788 = dVar25;
  dStack_780 = dVar26;
  local_1194 = local_1194 & 0xffffff00;
  FStack_1190.Value = 0;
  uStack_118c = 0;
  local_7d8 = dVar17;
  dStack_7d0 = dVar18;
  local_7c8 = dVar19;
  dStack_7c0 = dVar20;
  pFVar39 = ::FName::FName(&local_f50,L"Parent2");
  local_10b8.Name.ComparisonIndex.Value = FStack_1190.Value;
  local_10b8._0_4_ = local_1194;
  local_b98.Translation.XY.m128d_f64[0] = dVar79;
  local_b98.Translation.XY.m128d_f64[1] = dVar80;
  local_b98.Translation.ZW.m128d_f64[0] = dVar29;
  local_b98.Translation.ZW.m128d_f64[1] = dVar30;
  local_b98.Scale3D.XY.m128d_f64[0] = dVar27;
  local_b98.Scale3D.XY.m128d_f64[1] = dVar28;
  local_b98.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_b98.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_10b8.Name.Number = 0;
  local_b98.Rotation.XY.m128d_f64[0] = dVar17;
  local_b98.Rotation.XY.m128d_f64[1] = dVar18;
  local_b98.Rotation.ZW.m128d_f64[0] = dVar19;
  local_b98.Rotation.ZW.m128d_f64[1] = dVar20;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar36,&local_1078,*pFVar39,&local_10b8,&local_b98,true,
             User,false,false);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b6abb:
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b6abb;
  }
  local_eb0._s_0.X = ___xmm_4049000000000000c049000000000000;
  local_eb0._s_0.Y = _UNK_150b2d2f8;
  local_eb0._s_0.Z = __real_c049000000000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_518,(TVector<double> *)&local_eb0._s_0,XZY,false);
  dVar30 = _UNK_15219d3b8;
  dVar29 = ___xmm_0000000000000000404e000000000000;
  dVar80 = _UNK_15076bf58;
  dVar79 = ___xmm_404e000000000000404e000000000000;
  local_758 = ___xmm_404e000000000000404e000000000000;
  dStack_750 = _UNK_15076bf58;
  dVar17 = pTVar38->X;
  dVar18 = pTVar38->Y;
  dVar19 = pTVar38->Z;
  dVar20 = pTVar38->W;
  local_748 = ___xmm_0000000000000000404e000000000000;
  dStack_740 = _UNK_15219d3b8;
  local_738 = dVar27;
  dStack_730 = dVar28;
  local_728 = dVar25;
  dStack_720 = dVar26;
  local_1188 = local_1188 & 0xffffff00;
  FStack_1184.Value = 0;
  uStack_1180 = 0;
  local_778 = dVar17;
  dStack_770 = dVar18;
  local_768 = dVar19;
  dStack_760 = dVar20;
  pFVar39 = ::FName::FName(&local_f48,L"Parent3");
  local_10a8.Name.ComparisonIndex.Value = FStack_1184.Value;
  local_10a8._0_4_ = local_1188;
  local_b38.Translation.XY.m128d_f64[0] = dVar79;
  local_b38.Translation.XY.m128d_f64[1] = dVar80;
  local_b38.Translation.ZW.m128d_f64[0] = dVar29;
  local_b38.Translation.ZW.m128d_f64[1] = dVar30;
  local_b38.Scale3D.XY.m128d_f64[0] = dVar27;
  local_b38.Scale3D.XY.m128d_f64[1] = dVar28;
  local_b38.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_b38.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_10a8.Name.Number = 0;
  local_b38.Rotation.XY.m128d_f64[0] = dVar17;
  local_b38.Rotation.XY.m128d_f64[1] = dVar18;
  local_b38.Rotation.ZW.m128d_f64[0] = dVar19;
  local_b38.Rotation.ZW.m128d_f64[1] = dVar20;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar36,&local_1068,*pFVar39,&local_10a8,&local_b38,true,
             User,false,false);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  dVar17 = dVar79;
  dVar18 = dVar80;
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b6c0f:
    dVar80 = dVar18;
    dVar79 = dVar17;
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    dVar17 = ___xmm_404e000000000000404e000000000000;
    dVar18 = _UNK_15076bf58;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b6c0f;
  }
  local_e98._s_0.Z = __real_404e000000000000;
  local_e98._s_0.X = dVar79;
  local_e98._s_0.Y = dVar80;
  pTVar38 = AnimationCore::QuatFromEuler(&local_4f8,(TVector<double> *)&local_e98._s_0,XZY,false);
  dVar30 = _UNK_15219d3c8;
  dVar29 = ___xmm_00000000000000004054000000000000;
  dVar80 = _UNK_1517983a8;
  dVar79 = ___xmm_40540000000000004054000000000000;
  local_6f8 = ___xmm_40540000000000004054000000000000;
  dStack_6f0 = _UNK_1517983a8;
  dVar17 = pTVar38->X;
  dVar18 = pTVar38->Y;
  dVar19 = pTVar38->Z;
  dVar20 = pTVar38->W;
  local_6e8 = ___xmm_00000000000000004054000000000000;
  dStack_6e0 = _UNK_15219d3c8;
  local_6d8 = dVar27;
  dStack_6d0 = dVar28;
  local_6c8 = dVar25;
  dStack_6c0 = dVar26;
  local_117c = local_117c & 0xffffff00;
  FStack_1178.Value = 0;
  uStack_1174 = 0;
  local_718 = dVar17;
  dStack_710 = dVar18;
  local_708 = dVar19;
  dStack_700 = dVar20;
  pFVar39 = ::FName::FName(&local_f40,L"Parent4");
  local_1098.Name.ComparisonIndex.Value = FStack_1178.Value;
  local_1098._0_4_ = local_117c;
  local_d18.Translation.XY.m128d_f64[0] = dVar79;
  local_d18.Translation.XY.m128d_f64[1] = dVar80;
  local_d18.Translation.ZW.m128d_f64[0] = dVar29;
  local_d18.Translation.ZW.m128d_f64[1] = dVar30;
  local_d18.Scale3D.XY.m128d_f64[0] = dVar27;
  local_d18.Scale3D.XY.m128d_f64[1] = dVar28;
  local_d18.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_d18.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_1098.Name.Number = 0;
  local_d18.Rotation.XY.m128d_f64[0] = dVar17;
  local_d18.Rotation.XY.m128d_f64[1] = dVar18;
  local_d18.Rotation.ZW.m128d_f64[0] = dVar19;
  local_d18.Rotation.ZW.m128d_f64[1] = dVar20;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar36,&local_1058,*pFVar39,&local_1098,&local_d18,true,
             User,false,false);
  pTVar2 = &(this->Unit).Parents;
  (this->Unit).Child.Type = local_10f8.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_10f8._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_10f8.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_10f8.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_11d8.Name.Number = local_1088.Name.Number;
  local_11d8.Type = local_1088.Type;
  local_11d8._1_3_ = local_1088._1_3_;
  local_11d8.Name.ComparisonIndex.Value = local_1088.Name.ComparisonIndex.Value;
  uStack_11cc = 0x3f800000;
  if (((pFVar3 <= &local_11d8) &&
      (&local_11d8 <
       (FRigElementKey *)((longlong)pFVar3 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  piVar1 = &(this->Unit).Parents.ArrayMax;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_11dc = 0x3f800000;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  *(undefined8 *)pFVar40 = local_11d8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_11cc,local_11d8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_11e8.Name.Number = local_1078.Name.Number;
  local_11e8.Type = local_1078.Type;
  local_11e8._1_3_ = local_1078._1_3_;
  local_11e8.Name.ComparisonIndex.Value = local_1078.Name.ComparisonIndex.Value;
  if (((pFVar3 <= &local_11e8) &&
      (&local_11e8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_11bc = 0x3f800000;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  *(undefined8 *)pFVar40 = local_11e8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_11dc,local_11e8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_11c8.Name.Number = local_1068.Name.Number;
  local_11c8.Type = local_1068.Type;
  local_11c8._1_3_ = local_1068._1_3_;
  local_11c8.Name.ComparisonIndex.Value = local_1068.Name.ComparisonIndex.Value;
  if (((pFVar3 <= &local_11c8) &&
      (&local_11c8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_11fc = 0x3f800000;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  *(undefined8 *)pFVar40 = local_11c8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_11bc,local_11c8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_1208.Name.Number = local_1058.Name.Number;
  local_1208.Type = local_1058.Type;
  local_1208._1_3_ = local_1058._1_3_;
  local_1208.Name.ComparisonIndex.Value = local_1058.Name.ComparisonIndex.Value;
  if (((pFVar3 <= &local_1208) &&
      (&local_1208 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  this_01 = &this->field_0x5d0;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  *(undefined8 *)pFVar40 = local_1208._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_11fc,local_1208.Name.Number);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b7062:
    pUVar36 = pUVar46;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b7062;
  }
  URigHierarchy::ResetPoseToInitial(pUVar36,Bone);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  this_02 = &this->Unit;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b70c6:
    pUVar36 = (URigHierarchy *)0x0;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b70c6;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar36,&local_378,0,false);
  local_e80._s_0.X = ___xmm_402e60c4a0000000bfeb4bc6a0000000;
  local_e80._s_0.Y = _UNK_15219d508;
  local_e80._s_0.Z = __real_bfe24dd300000000;
  AnimationCore::QuatFromEuler(&local_1238,(TVector<double> *)&local_e80._s_0,XZY,false);
  pFVar44 = &local_1018;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  pFVar41 = ::FString::FString(pFVar44,L"unexpected rotation for average interpolation type");
  dVar17 = __real_3f50624de0000000;
  uVar24 = _UNK_15061cc8c;
  uVar23 = _UNK_15061cc88;
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar73 = SUB84(__real_3f50624de0000000,0);
  uVar74 = (undefined4)((ulonglong)__real_3f50624de0000000 >> 0x20);
  local_f38 = __real_3f50624de0000000;
  auVar49._8_4_ = uVar73;
  auVar49._0_8_ = __real_3f50624de0000000;
  auVar49._12_4_ = uVar74;
  auVar50._8_8_ =
       -(ulonglong)
        (auVar49._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.XY.m128d_f64[1] - local_1238.Y) >>
                               0x20) & _UNK_15061cc8c,
                         SUB84(local_378.Rotation.XY.m128d_f64[1] - local_1238.Y,0) & _UNK_15061cc88
                        ));
  auVar50._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.XY.m128d_f64[0] - local_1238.X) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_378.Rotation.XY.m128d_f64[0] - local_1238.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar43 = movmskpd((int)pFVar44,auVar50);
  auVar51._8_4_ = uVar73;
  auVar51._0_8_ = __real_3f50624de0000000;
  auVar51._12_4_ = uVar74;
  auVar78._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.ZW.m128d_f64[0] + local_1238.Z) >>
                              0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_378.Rotation.ZW.m128d_f64[0] + local_1238.Z,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar78._8_4_ = SUB84(local_378.Rotation.ZW.m128d_f64[1] + local_1238.W,0) & _UNK_15061cc88;
  auVar78._12_4_ =
       (uint)((ulonglong)(local_378.Rotation.ZW.m128d_f64[1] + local_1238.W) >> 0x20) &
       _UNK_15061cc8c;
  auVar52._8_8_ =
       -(ulonglong)
        (auVar51._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.ZW.m128d_f64[1] - local_1238.W) >>
                               0x20) & _UNK_15061cc8c,
                         SUB84(local_378.Rotation.ZW.m128d_f64[1] - local_1238.W,0) & _UNK_15061cc88
                        ));
  auVar52._0_8_ =
       -(ulonglong)
        (__real_3f50624de0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.ZW.m128d_f64[0] - local_1238.Z) >>
                               0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_378.Rotation.ZW.m128d_f64[0] - local_1238.Z,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar34 = movmskpd((int)pFVar41,auVar52);
  uVar35 = iVar34 * 4 | uVar43;
  if (uVar35 == 0) {
LAB_14a4b71d1:
    uVar45 = 1;
  }
  else {
    auVar53._8_4_ = uVar73;
    auVar53._0_8_ = __real_3f50624de0000000;
    auVar53._12_4_ = uVar74;
    lVar47 = -(ulonglong)(__real_3f50624de0000000 < auVar78._8_8_);
    auVar14._8_4_ = (int)lVar47;
    auVar14._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar78._0_8_);
    auVar14._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
    uVar35 = movmskpd(uVar35,auVar14);
    auVar54._8_8_ =
         -(ulonglong)
          (auVar53._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.XY.m128d_f64[1] + local_1238.Y) >>
                                 0x20) & _UNK_15061cc8c,
                           SUB84(local_378.Rotation.XY.m128d_f64[1] + local_1238.Y,0) &
                           _UNK_15061cc88));
    auVar54._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_378.Rotation.XY.m128d_f64[0] + local_1238.X) >>
                                 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_378.Rotation.XY.m128d_f64[0] + local_1238.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar34 = movmskpd(uVar43,auVar54);
    if ((uVar35 & 0x3fffffff) == 0 && iVar34 == 0) goto LAB_14a4b71d1;
    uVar45 = 0;
  }
  (*pcVar5)(this,uVar45);
  if (local_1018.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1018.Data.AllocatorInstance.Data);
  }
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b7226:
    pUVar36 = (URigHierarchy *)0x0;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b7226;
  }
  URigHierarchy::ResetPoseToInitial(pUVar36,Bone);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b7282:
    pUVar36 = (URigHierarchy *)0x0;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b7282;
  }
  URigHierarchy::GetGlobalTransformByIndex(pUVar36,&local_318,0,false);
  local_e68._s_0.X = ___xmm_4021bae1400000004030bd70a0000000;
  local_e68._s_0.Y = _UNK_15219d4b8;
  local_e68._s_0.Z = __real_c0163f7ce0000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_4d8,(TVector<double> *)&local_e68._s_0,XZY,false);
  pFVar44 = &local_1008;
  local_1238.X = pTVar38->X;
  local_1238.Y = pTVar38->Y;
  local_1238.Z = pTVar38->Z;
  local_1238.W = pTVar38->W;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  pFVar41 = ::FString::FString(pFVar44,L"unexpected rotation for shortest interpolation type");
  local_f30 = dVar17;
  auVar55._8_4_ = uVar73;
  auVar55._0_8_ = dVar17;
  auVar55._12_4_ = uVar74;
  auVar56._8_8_ =
       -(ulonglong)
        (auVar55._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_318.Rotation.XY.m128d_f64[1] - local_1238.Y) >>
                               0x20) & uVar24,
                         SUB84(local_318.Rotation.XY.m128d_f64[1] - local_1238.Y,0) & uVar23));
  auVar56._0_8_ =
       -(ulonglong)
        (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                          (local_318.Rotation.XY.m128d_f64[0] - local_1238.X) >>
                                         0x20) & uVar22,
                                   SUB84(local_318.Rotation.XY.m128d_f64[0] - local_1238.X,0) &
                                   uVar21));
  uVar43 = movmskpd((int)pFVar44,auVar56);
  auVar57._8_4_ = uVar73;
  auVar57._0_8_ = dVar17;
  auVar57._12_4_ = uVar74;
  auVar58._8_8_ =
       -(ulonglong)
        (auVar57._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_318.Rotation.ZW.m128d_f64[1] - local_1238.W) >>
                               0x20) & uVar24,
                         SUB84(local_318.Rotation.ZW.m128d_f64[1] - local_1238.W,0) & uVar23));
  auVar58._0_8_ =
       -(ulonglong)
        (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                          (local_318.Rotation.ZW.m128d_f64[0] - local_1238.Z) >>
                                         0x20) & uVar22,
                                   SUB84(local_318.Rotation.ZW.m128d_f64[0] - local_1238.Z,0) &
                                   uVar21));
  iVar34 = movmskpd((int)pFVar41,auVar58);
  uVar35 = iVar34 * 4 | uVar43;
  if (uVar35 == 0) {
LAB_14a4b738c:
    uVar45 = 1;
  }
  else {
    auVar59._8_4_ = uVar73;
    auVar59._0_8_ = dVar17;
    auVar59._12_4_ = uVar74;
    auVar75._8_8_ =
         -(ulonglong)
          (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                            (local_318.Rotation.ZW.m128d_f64[1] + local_1238.W) >>
                                           0x20) & uVar24,
                                     SUB84(local_318.Rotation.ZW.m128d_f64[1] + local_1238.W,0) &
                                     uVar23));
    auVar75._0_8_ =
         -(ulonglong)
          (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                            (local_318.Rotation.ZW.m128d_f64[0] + local_1238.Z) >>
                                           0x20) & uVar22,
                                     SUB84(local_318.Rotation.ZW.m128d_f64[0] + local_1238.Z,0) &
                                     uVar21));
    uVar35 = movmskpd(uVar35,auVar75);
    auVar60._8_8_ =
         -(ulonglong)
          (auVar59._8_8_ <
          (double)CONCAT44((uint)((ulonglong)(local_318.Rotation.XY.m128d_f64[1] + local_1238.Y) >>
                                 0x20) & uVar24,
                           SUB84(local_318.Rotation.XY.m128d_f64[1] + local_1238.Y,0) & uVar23));
    auVar60._0_8_ =
         -(ulonglong)
          (dVar17 < (double)CONCAT44((uint)((ulonglong)
                                            (local_318.Rotation.XY.m128d_f64[0] + local_1238.X) >>
                                           0x20) & uVar22,
                                     SUB84(local_318.Rotation.XY.m128d_f64[0] + local_1238.X,0) &
                                     uVar21));
    iVar34 = movmskpd(uVar43,auVar60);
    if ((uVar35 & 0x3fffffff) == 0 && iVar34 == 0) goto LAB_14a4b738c;
    uVar45 = 0;
  }
  (*pcVar5)(this,uVar45,&local_1008);
  if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1008.Data.AllocatorInstance.Data);
  }
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b73e1:
    pUVar36 = (URigHierarchy *)0x0;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b73e1;
  }
  URigHierarchy::ResetPoseToInitial(pUVar36,Bone);
  pUVar36 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_01);
  if (pUVar36 == (URigHierarchy *)0x0) {
LAB_14a4b7420:
    pUVar36 = (URigHierarchy *)0x0;
  }
  else {
    pUVar37 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar34 = (int)pUVar37->_padding_;
    if ((*(int *)(pUVar36->_padding_ + 0x38) < iVar34) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar36->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
        &pUVar37->_padding_)) goto LAB_14a4b7420;
  }
  dVar17 = __real_c059000000000000;
  local_e50._s_0.Z = __real_c059000000000000;
  local_e50._s_0.X = ___xmm_40590000000000004059000000000000;
  local_e50._s_0.Y = _UNK_1512468d8;
  pTVar38 = AnimationCore::QuatFromEuler(&local_4b8,(TVector<double> *)&local_e50._s_0,XZY,false);
  dVar80 = _UNK_15219d578;
  dVar79 = ___xmm_c044000000000000c044000000000000;
  dVar20 = _UNK_15219d418;
  dVar19 = ___xmm_0000000000000000c044000000000000;
  local_cb8.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_cb8.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_cb8.Rotation.XY.m128d_f64[0] = pTVar38->X;
  local_cb8.Rotation.XY.m128d_f64[1] = pTVar38->Y;
  local_cb8.Rotation.ZW.m128d_f64[0] = pTVar38->Z;
  local_cb8.Rotation.ZW.m128d_f64[1] = pTVar38->W;
  local_cb8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_cb8.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  local_cb8.Scale3D.XY.m128d_f64[0] = dVar27;
  local_cb8.Scale3D.XY.m128d_f64[1] = dVar28;
  local_cb8.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_cb8.Scale3D.ZW.m128d_f64[1] = dVar26;
  URigHierarchy::SetGlobalTransform(pUVar36,2,&local_cb8,true,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetGlobalTransformByIndex(pUVar36,&local_2b8,0,false);
  local_e38._s_0.X = ___xmm_40210c49c0000000bfe3851ec0000000;
  local_e38._s_0.Y = _UNK_15219d4a8;
  local_e38._s_0.Z = __real_c046e0a3e0000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_478,(TVector<double> *)&local_e38._s_0,XZY,false);
  pFVar44 = &local_ff8;
  local_1238.X = pTVar38->X;
  local_1238.Y = pTVar38->Y;
  local_1238.Z = pTVar38->Z;
  local_1238.W = pTVar38->W;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  pFVar41 = ::FString::FString(pFVar44,
                               L"unexpected rotation for maintain offset and average interpolation type"
                              );
  dVar18 = __real_3fb99999a0000000;
  uVar73 = SUB84(__real_3fb99999a0000000,0);
  uVar74 = (undefined4)((ulonglong)__real_3fb99999a0000000 >> 0x20);
  local_f28 = __real_3fb99999a0000000;
  auVar61._8_4_ = uVar73;
  auVar61._0_8_ = __real_3fb99999a0000000;
  auVar61._12_4_ = uVar74;
  auVar62._8_8_ =
       -(ulonglong)
        (auVar61._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.ZW.m128d_f64[1] - local_1238.W) >>
                               0x20) & uVar24,
                         SUB84(local_2b8.Rotation.ZW.m128d_f64[1] - local_1238.W,0) & uVar23));
  auVar62._0_8_ =
       -(ulonglong)
        (__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.ZW.m128d_f64[0] - local_1238.Z) >>
                               0x20) & uVar22,
                         SUB84(local_2b8.Rotation.ZW.m128d_f64[0] - local_1238.Z,0) & uVar21));
  iVar34 = movmskpd((int)pFVar44,auVar62);
  auVar63._8_4_ = uVar73;
  auVar63._0_8_ = __real_3fb99999a0000000;
  auVar63._12_4_ = uVar74;
  auVar76._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.ZW.m128d_f64[0] + local_1238.Z) >>
                              0x20) & uVar22,
                        SUB84(local_2b8.Rotation.ZW.m128d_f64[0] + local_1238.Z,0) & uVar21);
  auVar76._8_4_ = SUB84(local_2b8.Rotation.ZW.m128d_f64[1] + local_1238.W,0) & uVar23;
  auVar76._12_4_ =
       (uint)((ulonglong)(local_2b8.Rotation.ZW.m128d_f64[1] + local_1238.W) >> 0x20) & uVar24;
  auVar64._8_8_ =
       -(ulonglong)
        (auVar63._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.XY.m128d_f64[1] - local_1238.Y) >>
                               0x20) & uVar24,
                         SUB84(local_2b8.Rotation.XY.m128d_f64[1] - local_1238.Y,0) & uVar23));
  auVar64._0_8_ =
       -(ulonglong)
        (__real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.XY.m128d_f64[0] - local_1238.X) >>
                               0x20) & uVar22,
                         SUB84(local_2b8.Rotation.XY.m128d_f64[0] - local_1238.X,0) & uVar21));
  uVar35 = movmskpd((int)pFVar41,auVar64);
  uVar43 = iVar34 << 2 | uVar35;
  if (uVar43 == 0) {
LAB_14a4b75f0:
    uVar45 = 1;
  }
  else {
    auVar65._8_4_ = uVar73;
    auVar65._0_8_ = __real_3fb99999a0000000;
    auVar65._12_4_ = uVar74;
    auVar66._8_8_ = -(ulonglong)(auVar65._8_8_ < auVar76._8_8_);
    auVar66._0_8_ = -(ulonglong)(__real_3fb99999a0000000 < auVar76._0_8_);
    uVar43 = movmskpd(uVar43,auVar66);
    lVar47 = -(ulonglong)
              (__real_3fb99999a0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.XY.m128d_f64[1] + local_1238.Y)
                                     >> 0x20) & uVar24,
                               SUB84(local_2b8.Rotation.XY.m128d_f64[1] + local_1238.Y,0) & uVar23))
    ;
    auVar15._8_4_ = (int)lVar47;
    auVar15._0_8_ =
         -(ulonglong)
          (__real_3fb99999a0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_2b8.Rotation.XY.m128d_f64[0] + local_1238.X) >>
                                 0x20) & uVar22,
                           SUB84(local_2b8.Rotation.XY.m128d_f64[0] + local_1238.X,0) & uVar21));
    auVar15._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
    iVar34 = movmskpd(uVar35,auVar15);
    if ((uVar43 & 0x3fffffff) == 0 && iVar34 == 0) goto LAB_14a4b75f0;
    uVar45 = 0;
  }
  (*pcVar5)(this,uVar45,&local_ff8);
  if (local_ff8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ff8.Data.AllocatorInstance.Data);
  }
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::ResetPoseToInitial(pUVar36,Bone);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  local_e20._s_0.Z = dVar17;
  local_e20._s_0.X = ___xmm_40590000000000004059000000000000;
  local_e20._s_0.Y = _UNK_1512468d8;
  pTVar38 = AnimationCore::QuatFromEuler(&local_458,(TVector<double> *)&local_e20._s_0,XZY,false);
  local_ad8.Translation.XY.m128d_f64[0] = dVar79;
  local_ad8.Translation.XY.m128d_f64[1] = dVar80;
  local_ad8.Translation.ZW.m128d_f64[0] = dVar19;
  local_ad8.Translation.ZW.m128d_f64[1] = dVar20;
  local_ad8.Scale3D.XY.m128d_f64[0] = dVar27;
  local_ad8.Scale3D.XY.m128d_f64[1] = dVar28;
  local_ad8.Rotation.XY.m128d_f64[0] = pTVar38->X;
  local_ad8.Rotation.XY.m128d_f64[1] = pTVar38->Y;
  local_ad8.Rotation.ZW.m128d_f64[0] = pTVar38->Z;
  local_ad8.Rotation.ZW.m128d_f64[1] = pTVar38->W;
  local_ad8.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_ad8.Scale3D.ZW.m128d_f64[1] = dVar26;
  URigHierarchy::SetGlobalTransform(pUVar36,2,&local_ad8,true,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetGlobalTransformByIndex(pUVar36,&local_258,0,false);
  local_e08._s_0.X = ___xmm_c013fceda0000000c02249374bc6a7f0;
  local_e08._s_0.Y = _UNK_15219d528;
  local_e08._s_0.Z = __real_c04313f7c0000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_438,(TVector<double> *)&local_e08._s_0,XZY,false);
  pFVar44 = &local_fe8;
  local_1238.X = pTVar38->X;
  local_1238.Y = pTVar38->Y;
  local_1238.Z = pTVar38->Z;
  local_1238.W = pTVar38->W;
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  pFVar41 = ::FString::FString(pFVar44,
                               L"unexpected rotation for maintain offset and shortest interpolation type"
                              );
  local_f20 = dVar18;
  auVar67._8_4_ = uVar73;
  auVar67._0_8_ = dVar18;
  auVar67._12_4_ = uVar74;
  auVar68._8_8_ =
       -(ulonglong)
        (auVar67._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_258.Rotation.ZW.m128d_f64[1] - local_1238.W) >>
                               0x20) & uVar24,
                         SUB84(local_258.Rotation.ZW.m128d_f64[1] - local_1238.W,0) & uVar23));
  auVar68._0_8_ =
       -(ulonglong)
        (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                          (local_258.Rotation.ZW.m128d_f64[0] - local_1238.Z) >>
                                         0x20) & uVar22,
                                   SUB84(local_258.Rotation.ZW.m128d_f64[0] - local_1238.Z,0) &
                                   uVar21));
  iVar34 = movmskpd((int)pFVar44,auVar68);
  auVar69._8_4_ = uVar73;
  auVar69._0_8_ = dVar18;
  auVar69._12_4_ = uVar74;
  auVar77._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_258.Rotation.ZW.m128d_f64[0] + local_1238.Z) >>
                              0x20) & uVar22,
                        SUB84(local_258.Rotation.ZW.m128d_f64[0] + local_1238.Z,0) & uVar21);
  auVar77._8_4_ = SUB84(local_258.Rotation.ZW.m128d_f64[1] + local_1238.W,0) & uVar23;
  auVar77._12_4_ =
       (uint)((ulonglong)(local_258.Rotation.ZW.m128d_f64[1] + local_1238.W) >> 0x20) & uVar24;
  auVar70._8_8_ =
       -(ulonglong)
        (auVar69._8_8_ <
        (double)CONCAT44((uint)((ulonglong)(local_258.Rotation.XY.m128d_f64[1] - local_1238.Y) >>
                               0x20) & uVar24,
                         SUB84(local_258.Rotation.XY.m128d_f64[1] - local_1238.Y,0) & uVar23));
  auVar70._0_8_ =
       -(ulonglong)
        (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                          (local_258.Rotation.XY.m128d_f64[0] - local_1238.X) >>
                                         0x20) & uVar22,
                                   SUB84(local_258.Rotation.XY.m128d_f64[0] - local_1238.X,0) &
                                   uVar21));
  uVar35 = movmskpd((int)pFVar41,auVar70);
  uVar43 = iVar34 << 2 | uVar35;
  if (uVar43 != 0) {
    auVar71._8_4_ = uVar73;
    auVar71._0_8_ = dVar18;
    auVar71._12_4_ = uVar74;
    auVar72._8_8_ = -(ulonglong)(auVar71._8_8_ < auVar77._8_8_);
    auVar72._0_8_ = -(ulonglong)(dVar18 < auVar77._0_8_);
    uVar43 = movmskpd(uVar43,auVar72);
    lVar47 = -(ulonglong)
              (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                                (local_258.Rotation.XY.m128d_f64[1] + local_1238.Y)
                                               >> 0x20) & uVar24,
                                         SUB84(local_258.Rotation.XY.m128d_f64[1] + local_1238.Y,0)
                                         & uVar23));
    auVar16._8_4_ = (int)lVar47;
    auVar16._0_8_ =
         -(ulonglong)
          (dVar18 < (double)CONCAT44((uint)((ulonglong)
                                            (local_258.Rotation.XY.m128d_f64[0] + local_1238.X) >>
                                           0x20) & uVar22,
                                     SUB84(local_258.Rotation.XY.m128d_f64[0] + local_1238.X,0) &
                                     uVar21));
    auVar16._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
    iVar34 = movmskpd(uVar35,auVar16);
    if ((uVar43 & 0x3fffffff) != 0 || iVar34 != 0) {
      uVar45 = 0;
      goto LAB_14a4b77dc;
    }
  }
  uVar45 = 1;
LAB_14a4b77dc:
  (*pcVar5)(this,uVar45,&local_fe8,0);
  if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
  }
  iVar34 = *piVar1;
  (this->Unit).Parents.ArrayNum = 0;
  if (iVar34 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar42 = TSoftObjectPtr<URigHierarchyController>::Get
                      ((TSoftObjectPtr<URigHierarchyController> *)this_00);
  pUVar36 = URigHierarchyController::GetHierarchy(pUVar42);
  URigHierarchy::Reset(pUVar36);
  pUVar42 = TSoftObjectPtr<URigHierarchyController>::Get
                      ((TSoftObjectPtr<URigHierarchyController> *)this_00);
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  local_1170 = local_1170 & 0xffffff00;
  FStack_116c.Value = 0;
  uStack_1168 = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_698 = 0;
  uStack_690 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_6b8 = (double)fVar12;
  dStack_6b0 = (double)fVar8;
  local_6a8 = (double)fVar6;
  dStack_6a0 = (double)fVar9;
  local_678 = (double)fVar13;
  dStack_670 = (double)fVar10;
  local_668 = (double)fVar7;
  dStack_660 = (double)fVar11;
  pFVar39 = ::FName::FName(&local_f18,L"Root");
  local_1128.Name.ComparisonIndex.Value = FStack_116c.Value;
  local_1128._0_4_ = local_1170;
  local_a78.Translation.XY.m128d_f64[0] = 0.0;
  local_a78.Translation.XY.m128d_f64[1] = 0.0;
  local_a78.Translation.ZW.m128d_f64[0] = 0.0;
  local_a78.Translation.ZW.m128d_f64[1] = 0.0;
  local_1128.Name.Number = 0;
  local_a78.Rotation.XY.m128d_f64[0] = (double)fVar12;
  local_a78.Rotation.XY.m128d_f64[1] = (double)fVar8;
  local_a78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_a78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_a78.Scale3D.XY.m128d_f64[0] = (double)fVar13;
  local_a78.Scale3D.XY.m128d_f64[1] = (double)fVar10;
  local_a78.Scale3D.ZW.m128d_f64[0] = (double)fVar7;
  local_a78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  URigHierarchyController::AddBone
            (pUVar42,&local_d28,*pFVar39,&local_1128,&local_a78,true,User,false,false);
  pUVar42 = TSoftObjectPtr<URigHierarchyController>::Get
                      ((TSoftObjectPtr<URigHierarchyController> *)this_00);
  local_df0._s_0.X = ___xmm_00000000000000004056800000000000;
  local_df0._s_0.Y = _UNK_150b45b78;
  local_df0._s_0.Z = 0.0;
  pTVar38 = AnimationCore::QuatFromEuler(&local_418,(TVector<double> *)&local_df0._s_0,XZY,false);
  dVar31 = _UNK_15149cb08;
  dVar30 = ___xmm_00000000000000004049000000000000;
  local_638 = 0;
  uStack_630 = 0;
  local_628 = ___xmm_00000000000000004049000000000000;
  dStack_620 = _UNK_15149cb08;
  dVar17 = pTVar38->X;
  dVar19 = pTVar38->Y;
  dVar20 = pTVar38->Z;
  dVar79 = pTVar38->W;
  local_618 = dVar27;
  dStack_610 = dVar28;
  local_608 = dVar25;
  dStack_600 = dVar26;
  local_658 = dVar17;
  dStack_650 = dVar19;
  local_648 = dVar20;
  dStack_640 = dVar79;
  ::FName::FName(local_10e8,L"Root");
  FStack_1154 = local_10e8[0].ComparisonIndex.Value;
  uStack_1150 = local_10e8[0].Number;
  local_1158 = CONCAT31(local_1158._1_3_,1);
  pFVar39 = ::FName::FName(&local_f10,L"Parent1");
  local_1048.Name.ComparisonIndex.Value = FStack_1154.Value;
  local_1048._0_4_ = local_1158;
  local_1048.Name.Number = uStack_1150;
  local_a18.Translation.XY.m128d_f64[0] = 0.0;
  local_a18.Translation.XY.m128d_f64[1] = 0.0;
  local_a18.Translation.ZW.m128d_f64[0] = dVar30;
  local_a18.Translation.ZW.m128d_f64[1] = dVar31;
  local_a18.Scale3D.XY.m128d_f64[0] = dVar27;
  local_a18.Scale3D.XY.m128d_f64[1] = dVar28;
  local_a18.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_a18.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_a18.Rotation.XY.m128d_f64[0] = dVar17;
  local_a18.Rotation.XY.m128d_f64[1] = dVar19;
  local_a18.Rotation.ZW.m128d_f64[0] = dVar20;
  local_a18.Rotation.ZW.m128d_f64[1] = dVar79;
  URigHierarchyController::AddBone
            (pUVar42,&local_1108,*pFVar39,&local_1048,&local_a18,false,User,false,false);
  pUVar42 = TSoftObjectPtr<URigHierarchyController>::Get
                      ((TSoftObjectPtr<URigHierarchyController> *)this_00);
  dVar48 = __real_c046800000000000;
  local_dd8._s_0.Z = __real_c046800000000000;
  local_dd8._s_0.X = 0.0;
  local_dd8._s_0.Y = 0.0;
  pTVar38 = AnimationCore::QuatFromEuler(&local_498,(TVector<double> *)&local_dd8._s_0,XZY,false);
  dVar29 = _UNK_150f34e28;
  dVar80 = ___xmm_40590000000000000000000000000000;
  local_5d8 = ___xmm_40590000000000000000000000000000;
  dStack_5d0 = _UNK_150f34e28;
  local_5c8 = 0;
  uStack_5c0 = 0;
  dVar17 = pTVar38->X;
  dVar19 = pTVar38->Y;
  dVar20 = pTVar38->Z;
  dVar79 = pTVar38->W;
  local_5b8 = dVar27;
  dStack_5b0 = dVar28;
  local_5a8 = dVar25;
  dStack_5a0 = dVar26;
  local_5f8 = dVar17;
  dStack_5f0 = dVar19;
  local_5e8 = dVar20;
  dStack_5e0 = dVar79;
  ::FName::FName(&local_114c,L"Root");
  FStack_119c = local_114c.ComparisonIndex.Value;
  uStack_1198 = local_114c.Number;
  local_11a0 = CONCAT31(local_11a0._1_3_,1);
  pFVar39 = ::FName::FName(&local_f08,L"Parent2");
  local_1038.Name.ComparisonIndex.Value = FStack_119c.Value;
  local_1038._0_4_ = local_11a0;
  local_1038.Name.Number = uStack_1198;
  local_9b8.Translation.XY.m128d_f64[0] = dVar80;
  local_9b8.Translation.XY.m128d_f64[1] = dVar29;
  local_9b8.Translation.ZW.m128d_f64[0] = 0.0;
  local_9b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_9b8.Scale3D.XY.m128d_f64[0] = dVar27;
  local_9b8.Scale3D.XY.m128d_f64[1] = dVar28;
  local_9b8.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_9b8.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_9b8.Rotation.XY.m128d_f64[0] = dVar17;
  local_9b8.Rotation.XY.m128d_f64[1] = dVar19;
  local_9b8.Rotation.ZW.m128d_f64[0] = dVar20;
  local_9b8.Rotation.ZW.m128d_f64[1] = dVar79;
  URigHierarchyController::AddBone
            (pUVar42,&local_1118,*pFVar39,&local_1038,&local_9b8,false,User,false,false);
  pUVar42 = TSoftObjectPtr<URigHierarchyController>::Get
                      ((TSoftObjectPtr<URigHierarchyController> *)this_00);
  local_dc0._s_0.Z = dVar48;
  local_dc0._s_0.X = 0.0;
  local_dc0._s_0.Y = 0.0;
  pTVar38 = AnimationCore::QuatFromEuler(&local_3f8,(TVector<double> *)&local_dc0._s_0,XZY,false);
  dVar17 = pTVar38->X;
  dVar19 = pTVar38->Y;
  dVar20 = pTVar38->Z;
  dVar79 = pTVar38->W;
  local_578 = 0;
  uStack_570 = 0;
  local_568 = dVar30;
  dStack_560 = dVar31;
  local_558 = dVar27;
  dStack_550 = dVar28;
  local_548 = dVar25;
  dStack_540 = dVar26;
  local_598 = dVar17;
  dStack_590 = dVar19;
  local_588 = dVar20;
  dStack_580 = dVar79;
  ::FName::FName(&local_1144,L"Parent2");
  FStack_1160 = local_1144.ComparisonIndex.Value;
  uStack_115c = local_1144.Number;
  local_1164 = CONCAT31(local_1164._1_3_,1);
  pFVar39 = ::FName::FName(&local_f00,L"Child");
  local_1028.Name.ComparisonIndex.Value = FStack_1160.Value;
  local_1028._0_4_ = local_1164;
  local_1028.Name.Number = uStack_115c;
  local_958.Translation.XY.m128d_f64[0] = 0.0;
  local_958.Translation.XY.m128d_f64[1] = 0.0;
  local_958.Translation.ZW.m128d_f64[0] = dVar30;
  local_958.Translation.ZW.m128d_f64[1] = dVar31;
  local_958.Scale3D.XY.m128d_f64[0] = dVar27;
  local_958.Scale3D.XY.m128d_f64[1] = dVar28;
  local_958.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_958.Scale3D.ZW.m128d_f64[1] = dVar26;
  local_958.Rotation.XY.m128d_f64[0] = dVar17;
  local_958.Rotation.XY.m128d_f64[1] = dVar19;
  local_958.Rotation.ZW.m128d_f64[0] = dVar20;
  local_958.Rotation.ZW.m128d_f64[1] = dVar79;
  URigHierarchyController::AddBone
            (pUVar42,&local_1138,*pFVar39,&local_1028,&local_958,false,User,false,false);
  (this->Unit).Child.Type = local_1138.Type;
  *(undefined3 *)&(this->Unit).Child.field_0x1 = local_1138._1_3_;
  (this->Unit).Child.Name.ComparisonIndex = (FNameEntryId)local_1138.Name.ComparisonIndex.Value;
  (this->Unit).Child.Name.Number = local_1138.Name.Number;
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_11f8.Name.Number = local_1108.Name.Number;
  local_11f8.Type = local_1108.Type;
  local_11f8._1_3_ = local_1108._1_3_;
  local_11f8.Name.ComparisonIndex.Value = local_1108.Name.ComparisonIndex.Value;
  uStack_11ec = 0x3f800000;
  if (((pFVar3 <= &local_11f8) &&
      (&local_11f8 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_120c = 0x3f800000;
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  *(undefined8 *)pFVar40 = local_11f8._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_11ec,local_11f8.Name.Number);
  pFVar3 = (FRigElementKey *)(pTVar2->AllocatorInstance).Data;
  local_1218.Name.Number = local_1118.Name.Number;
  local_1218.Type = local_1118.Type;
  local_1218._1_3_ = local_1118._1_3_;
  local_1218.Name.ComparisonIndex.Value = local_1118.Name.ComparisonIndex.Value;
  if (((pFVar3 <= &local_1218) &&
      (&local_1218 < (FRigElementKey *)((longlong)pFVar3 + (longlong)*piVar1 * 0x10))) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar32)) {
    pcVar5 = (code *)swi(3);
    uVar33 = (*pcVar5)();
    return (bool)uVar33;
  }
  iVar34 = (this->Unit).Parents.ArrayNum;
  if (iVar34 == *piVar1) {
    iVar34 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Unit).Parents.ArrayNum = iVar34 + 1;
  pFVar40 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x10;
  *(undefined8 *)pFVar40 = local_1218._0_8_;
  *(ulonglong *)(pFVar40 + 8) = CONCAT44(uStack_120c,local_1218.Name.Number);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = false;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetLocalTransformByIndex(pUVar36,&local_1f8,3,false);
  local_d88.X = local_1f8.Rotation.XY.m128d_f64[0];
  local_d88.Y = local_1f8.Rotation.XY.m128d_f64[1];
  local_d88.Z = local_1f8.Rotation.ZW.m128d_f64[0];
  local_d88.W = local_1f8.Rotation.ZW.m128d_f64[1];
  AnimationCore::EulerFromQuat((TVector<double> *)&local_f90._s_0,&local_d88,XZY,false);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_fb8,L"unexpected rotation for local space offset test 1");
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)(local_f90._s_0.X - ___real_40448f5c20000000) >>
                                        0x20) & uVar22,
                                  SUB84(local_f90._s_0.X - ___real_40448f5c20000000,0) & uVar21)) ||
      (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_f90._s_0.Y - ___real_40245c2900000000) >>
                                       0x20) & uVar22,
                                 SUB84(local_f90._s_0.Y - ___real_40245c2900000000,0) & uVar21))) ||
     (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_f90._s_0.Z - ___real_40362e1480000000) >>
                                      0x20) & uVar22,
                                SUB84(local_f90._s_0.Z - ___real_40362e1480000000,0) & uVar21))) {
    uVar45 = 0;
  }
  else {
    uVar45 = 1;
  }
  (*pcVar5)(this,uVar45,&local_fb8);
  if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
  }
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetLocalTransformByIndex(pUVar36,&local_198,3,false);
  local_d68.X = local_198.Rotation.XY.m128d_f64[0];
  local_d68.Y = local_198.Rotation.XY.m128d_f64[1];
  local_d68.Z = local_198.Rotation.ZW.m128d_f64[0];
  local_d68.W = local_198.Rotation.ZW.m128d_f64[1];
  AnimationCore::EulerFromQuat(&local_f78,&local_d68,XZY,false);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_fc8,L"unexpected rotation for local space offset test 2");
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)local_f78.field0_0x0._0_8_ >> 0x20) & uVar22,
                                  SUB84(local_f78.field0_0x0._s_0.X,0) & uVar21)) ||
      (dVar18 < (double)CONCAT44((uint)((ulonglong)local_f78.field0_0x0._8_8_ >> 0x20) & uVar22,
                                 SUB84(local_f78.field0_0x0._s_0.Y,0) & uVar21))) ||
     (dVar48 = local_f78.field0_0x0._s_0.Z - dVar48,
     dVar18 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar22,SUB84(dVar48,0) & uVar21))
     ) {
    uVar45 = 0;
  }
  else {
    uVar45 = 1;
  }
  (*pcVar5)(this,uVar45,&local_fc8);
  if (local_fc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fc8.Data.AllocatorInstance.Data);
  }
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  local_da8._s_0.X = ___xmm_4044000000000000405e000000000000;
  local_da8._s_0.Y = _UNK_15219d518;
  local_da8._s_0.Z = __real_4034000000000000;
  pTVar38 = AnimationCore::QuatFromEuler(&local_3d8,(TVector<double> *)&local_da8._s_0,XZY,false);
  local_8f8.Translation.XY.m128d_f64[0] = 0.0;
  local_8f8.Translation.XY.m128d_f64[1] = 0.0;
  local_8f8.Translation.ZW.m128d_f64[0] = dVar30;
  local_8f8.Translation.ZW.m128d_f64[1] = dVar31;
  local_8f8.Rotation.XY.m128d_f64[0] = pTVar38->X;
  local_8f8.Rotation.XY.m128d_f64[1] = pTVar38->Y;
  local_8f8.Rotation.ZW.m128d_f64[0] = pTVar38->Z;
  local_8f8.Rotation.ZW.m128d_f64[1] = pTVar38->W;
  local_8f8.Scale3D.XY.m128d_f64[0] = dVar27;
  local_8f8.Scale3D.XY.m128d_f64[1] = dVar28;
  local_8f8.Scale3D.ZW.m128d_f64[0] = dVar25;
  local_8f8.Scale3D.ZW.m128d_f64[1] = dVar26;
  URigHierarchy::SetLocalTransform(pUVar36,1,&local_8f8,true,false,false);
  pFVar4 = *(FControlRigExecuteContext **)&this->field_0x370;
  (this->Unit).bMaintainOffset = true;
  FRigUnit_RotationConstraintLocalSpaceOffset::Execute(this_02,pFVar4);
  pUVar36 = TSoftObjectPtr<URigHierarchy>::Get((TSoftObjectPtr<URigHierarchy> *)this_01);
  URigHierarchy::GetLocalTransformByIndex(pUVar36,&local_138,3,false);
  local_d48.X = local_138.Rotation.XY.m128d_f64[0];
  local_d48.Y = local_138.Rotation.XY.m128d_f64[1];
  local_d48.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_d48.W = local_138.Rotation.ZW.m128d_f64[1];
  AnimationCore::EulerFromQuat((TVector<double> *)&local_fa8._s_0,&local_d48,XZY,false);
  pcVar5 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_fd8,L"unexpected rotation for local space offset test 3");
  if (((dVar18 < (double)CONCAT44((uint)((ulonglong)(local_fa8._s_0.X - ___real_3fe2a7efa0000000) >>
                                        0x20) & uVar22,
                                  SUB84(local_fa8._s_0.X - ___real_3fe2a7efa0000000,0) & uVar21)) ||
      (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_fa8._s_0.Y - ___real_403e818940000000) >>
                                       0x20) & uVar22,
                                 SUB84(local_fa8._s_0.Y - ___real_403e818940000000,0) & uVar21))) ||
     (dVar18 < (double)CONCAT44((uint)((ulonglong)(local_fa8._s_0.Z - ___real_c04afac080000000) >>
                                      0x20) & uVar22,
                                SUB84(local_fa8._s_0.Z - ___real_c04afac080000000,0) & uVar21))) {
    uVar45 = 0;
  }
  else {
    uVar45 = 1;
  }
  (*pcVar5)(this,uVar45,&local_fd8,0);
  if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4b8250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_RotationConstraintLocalSpaceOffsetTest::GetBeautifiedTestName
          (FRigUnit_RotationConstraintLocalSpaceOffsetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"ControlRig.Units.FRigUnit_RotationConstraintLocalSpaceOffset");
  return __return_storage_ptr__;
}

