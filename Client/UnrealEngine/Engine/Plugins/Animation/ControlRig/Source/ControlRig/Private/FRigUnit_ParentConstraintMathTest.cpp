// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4a17c0

EAutomationTestFlags __thiscall
FRigUnit_ParentConstraintMathTest::GetTestFlags(FRigUnit_ParentConstraintMathTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4a1830

bool __thiscall
FRigUnit_ParentConstraintMathTest::IsStressTest(FRigUnit_ParentConstraintMathTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4a1840

uint __thiscall
FRigUnit_ParentConstraintMathTest::GetRequiredDeviceNum(FRigUnit_ParentConstraintMathTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4a1850

FString * __thiscall
FRigUnit_ParentConstraintMathTest::GetTestSourceFileName
          (FRigUnit_ParentConstraintMathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4a1880

int __thiscall
FRigUnit_ParentConstraintMathTest::GetTestSourceFileLine(FRigUnit_ParentConstraintMathTest *this)

{
  return 0x22d;
}

// GetTests @ 14a4a19b0

/* WARNING: Removing unreachable block (ram,0x00014a4a1a9d) */
/* WARNING: Removing unreachable block (ram,0x00014a4a1b68) */

void __thiscall
FRigUnit_ParentConstraintMathTest::GetTests
          (FRigUnit_ParentConstraintMathTest *this,
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
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ParentConstraintMath");
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

// RunTest @ 14a4a1b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ParentConstraintMathTest::RunTest(FRigUnit_ParentConstraintMathTest *this,FString *param_1)

{
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  undefined1 uVar7;
  URigHierarchy *this_00;
  UClass *pUVar8;
  FRigUnit_ParentConstraintMath *pFVar9;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 auStack_158 [32];
  FRigUnit_ParentConstraintMath local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar8 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar4 = (int)pUVar8->_padding_;
    if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar8->_padding_)) goto LAB_14a4a1c01;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4a1c01:
  URigHierarchy::Reset(this_00);
  pFVar9 = FRigUnit_ParentConstraintMath::FRigUnit_ParentConstraintMath(&local_138);
  pTVar2 = &(this->Unit).Parents;
  dVar6 = (pFVar9->Input).Rotation.XY.m128d_f64[1];
  pTVar1 = &pFVar9->Parents;
  (this->Unit).Input.Rotation.XY.m128d_f64[0] = (pFVar9->Input).Rotation.XY.m128d_f64[0];
  (this->Unit).Input.Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Input).Rotation.ZW.m128d_f64[1];
  (this->Unit).Input.Rotation.ZW.m128d_f64[0] = (pFVar9->Input).Rotation.ZW.m128d_f64[0];
  (this->Unit).Input.Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Input).Translation.XY.m128d_f64[1];
  (this->Unit).Input.Translation.XY.m128d_f64[0] = (pFVar9->Input).Translation.XY.m128d_f64[0];
  (this->Unit).Input.Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Input).Translation.ZW.m128d_f64[1];
  (this->Unit).Input.Translation.ZW.m128d_f64[0] = (pFVar9->Input).Translation.ZW.m128d_f64[0];
  (this->Unit).Input.Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Input).Scale3D.XY.m128d_f64[1];
  (this->Unit).Input.Scale3D.XY.m128d_f64[0] = (pFVar9->Input).Scale3D.XY.m128d_f64[0];
  (this->Unit).Input.Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Input).Scale3D.ZW.m128d_f64[1];
  (this->Unit).Input.Scale3D.ZW.m128d_f64[0] = (pFVar9->Input).Scale3D.ZW.m128d_f64[0];
  (this->Unit).Input.Scale3D.ZW.m128d_f64[1] = dVar6;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Parents.ArrayNum = (pFVar9->Parents).ArrayNum;
    (this->Unit).Parents.ArrayMax = (pFVar9->Parents).ArrayMax;
    (pFVar9->Parents).ArrayNum = 0;
    (pFVar9->Parents).ArrayMax = 0;
  }
  pTVar3 = &(this->Unit).ParentCaches;
  (this->Unit).AdvancedSettings.InterpolationType = (pFVar9->AdvancedSettings).InterpolationType;
  dVar6 = (pFVar9->Output).Rotation.XY.m128d_f64[1];
  (this->Unit).Output.Rotation.XY.m128d_f64[0] = (pFVar9->Output).Rotation.XY.m128d_f64[0];
  (this->Unit).Output.Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Output).Rotation.ZW.m128d_f64[1];
  (this->Unit).Output.Rotation.ZW.m128d_f64[0] = (pFVar9->Output).Rotation.ZW.m128d_f64[0];
  (this->Unit).Output.Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Output).Translation.XY.m128d_f64[1];
  (this->Unit).Output.Translation.XY.m128d_f64[0] = (pFVar9->Output).Translation.XY.m128d_f64[0];
  (this->Unit).Output.Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Output).Translation.ZW.m128d_f64[1];
  (this->Unit).Output.Translation.ZW.m128d_f64[0] = (pFVar9->Output).Translation.ZW.m128d_f64[0];
  (this->Unit).Output.Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Output).Scale3D.XY.m128d_f64[1];
  (this->Unit).Output.Scale3D.XY.m128d_f64[0] = (pFVar9->Output).Scale3D.XY.m128d_f64[0];
  (this->Unit).Output.Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Output).Scale3D.ZW.m128d_f64[1];
  pTVar10 = &pFVar9->ParentCaches;
  (this->Unit).Output.Scale3D.ZW.m128d_f64[0] = (pFVar9->Output).Scale3D.ZW.m128d_f64[0];
  (this->Unit).Output.Scale3D.ZW.m128d_f64[1] = dVar6;
  if (pTVar3 != pTVar10) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).ParentCaches.ArrayNum = (pFVar9->ParentCaches).ArrayNum;
    (this->Unit).ParentCaches.ArrayMax = (pFVar9->ParentCaches).ArrayMax;
    (pFVar9->ParentCaches).ArrayNum = 0;
    (pFVar9->ParentCaches).ArrayMax = 0;
  }
  if (local_138.ParentCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ParentCaches.AllocatorInstance.Data);
  }
  if (local_138.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Parents.AllocatorInstance.Data);
  }
  uVar7 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar7;
}

// RunControlRigUnitTest @ 14a4a1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigUnit_ParentConstraintMathTest::RunControlRigUnitTest
          (FRigUnit_ParentConstraintMathTest *this,FString *param_1)

{
  longlong *this_00;
  TArray<FConstraintParent,TSizedDefaultAllocator<32>_> *pTVar1;
  FRigElementKey *pFVar2;
  FControlRigExecuteContext *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  URigHierarchy *pUVar15;
  UClass *pUVar16;
  TQuat<double> *pTVar17;
  FName *pFVar18;
  FScriptContainerElement *pFVar19;
  FString *pFVar20;
  uint uVar21;
  FString *pFVar22;
  undefined8 uVar23;
  URigHierarchy *pUVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  uint uVar40;
  double dVar41;
  undefined4 uVar44;
  undefined4 uVar46;
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar43 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar54;
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar53 [16];
  double dVar56;
  double dVar57;
  double dVar60;
  undefined1 auVar58 [16];
  double dVar61;
  undefined1 auVar59 [16];
  double dVar62;
  undefined1 auStackY_9a8 [32];
  FRigElementKey local_958;
  undefined4 uStack_94c;
  FRigElementKey local_948;
  undefined4 uStack_93c;
  FRigElementKey local_938;
  undefined4 uStack_92c;
  FRigElementKey local_928;
  undefined4 uStack_91c;
  uint local_918;
  FNameEntryId FStack_914;
  undefined4 uStack_910;
  uint local_90c;
  FNameEntryId FStack_908;
  undefined4 uStack_904;
  uint local_900;
  FNameEntryId FStack_8fc;
  undefined4 uStack_8f8;
  uint local_8f4;
  FNameEntryId FStack_8f0;
  undefined4 uStack_8ec;
  uint local_8e8;
  FNameEntryId FStack_8e4;
  undefined4 uStack_8e0;
  FRigElementKey local_8d8;
  FRigElementKey local_8c8;
  FRigElementKey local_8b8;
  FRigElementKey local_8a8;
  FRigElementKey local_898;
  FRigElementKey local_888;
  FRigElementKey local_878;
  FRigElementKey local_868;
  FRigElementKey local_858;
  FRigElementKey local_848;
  FRigElementKey local_838;
  TQuat<double> local_828;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FName local_7d8;
  FName local_7d0;
  FName local_7c8 [3];
  FName local_7b0;
  TVector<double>_u_0 local_7a8;
  TVector<double>_u_0 local_790;
  TVector<double>_u_0 local_778;
  TVector<double>_u_0 local_760;
  TVector<double>_u_0 local_748;
  TVector<double>_u_0 local_730;
  TVector<double>_u_0 local_718;
  TVector<double>_u_0 local_700;
  TVector<double>_u_0 local_6e8;
  FName local_6d0 [3];
  double local_6b8;
  TTransform<double> local_6a8;
  TTransform<double> local_648;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  TQuat<double> local_228;
  TQuat<double> local_208;
  TQuat<double> local_1e8;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  TQuat<double> local_148;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  pUVar24 = (URigHierarchy *)0x0;
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a1e3d:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a1e3d;
  }
  local_7a8._s_0.X = ___xmm_c024000000000000c024000000000000;
  local_7a8._s_0.Y = _UNK_1520301b8;
  local_7a8._s_0.Z = __real_c024000000000000;
  pTVar17 = AnimationCore::QuatFromEuler(&local_228,(TVector<double> *)&local_7a8._s_0,XZY,false);
  dVar9 = _UNK_150689688;
  dVar8 = ___xmm_3ff00000000000003ff0000000000000;
  dVar61 = _UNK_150689518;
  dVar57 = ___xmm_00000000000000003ff0000000000000;
  local_368 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_360 = _UNK_150689688;
  dVar41 = pTVar17->X;
  dVar45 = pTVar17->Y;
  dVar51 = pTVar17->Z;
  dVar55 = pTVar17->W;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_358 = ___xmm_00000000000000003ff0000000000000;
  dStack_350 = _UNK_150689518;
  local_918 = local_918 & 0xffffff00;
  FStack_914.Value = 0;
  uStack_910 = 0;
  local_3a8 = dVar41;
  dStack_3a0 = dVar45;
  local_398 = dVar51;
  dStack_390 = dVar55;
  pFVar18 = ::FName::FName(&local_7b0,L"Child");
  local_8c8.Name.ComparisonIndex.Value = FStack_914.Value;
  local_8c8._0_4_ = local_918;
  local_6a8.Translation.XY.m128d_f64[0] = 0.0;
  local_6a8.Translation.XY.m128d_f64[1] = 0.0;
  local_6a8.Translation.ZW.m128d_f64[0] = 0.0;
  local_6a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_6a8.Scale3D.XY.m128d_f64[0] = dVar8;
  local_6a8.Scale3D.XY.m128d_f64[1] = dVar9;
  local_6a8.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_6a8.Scale3D.ZW.m128d_f64[1] = dVar61;
  local_8c8.Name.Number = 0;
  local_6a8.Rotation.XY.m128d_f64[0] = dVar41;
  local_6a8.Rotation.XY.m128d_f64[1] = dVar45;
  local_6a8.Rotation.ZW.m128d_f64[0] = dVar51;
  local_6a8.Rotation.ZW.m128d_f64[1] = dVar55;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar15,&local_888,*pFVar18,&local_8c8,&local_6a8,true,User,
             false,false);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a1f82:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a1f82;
  }
  local_790._s_0.X = ___xmm_c03e000000000000403e000000000000;
  local_790._s_0.Y = _UNK_15219d568;
  local_790._s_0.Z = __real_c03e000000000000;
  pTVar17 = AnimationCore::QuatFromEuler(&local_208,(TVector<double> *)&local_790._s_0,XZY,false);
  dVar56 = _UNK_151444f88;
  dVar47 = ___xmm_40340000000000004034000000000000;
  dVar26 = _UNK_151444f48;
  dVar62 = ___xmm_00000000000000004034000000000000;
  local_328 = ___xmm_40340000000000004034000000000000;
  dStack_320 = _UNK_151444f88;
  dVar41 = pTVar17->X;
  dVar45 = pTVar17->Y;
  dVar51 = pTVar17->Z;
  dVar55 = pTVar17->W;
  local_318 = ___xmm_00000000000000004034000000000000;
  dStack_310 = _UNK_151444f48;
  local_308 = dVar8;
  dStack_300 = dVar9;
  local_2f8 = dVar57;
  dStack_2f0 = dVar61;
  local_90c = local_90c & 0xffffff00;
  FStack_908.Value = 0;
  uStack_904 = 0;
  local_348 = dVar41;
  dStack_340 = dVar45;
  local_338 = dVar51;
  dStack_330 = dVar55;
  pFVar18 = ::FName::FName(local_6d0,L"Parent1");
  local_8b8.Name.ComparisonIndex.Value = FStack_908.Value;
  local_8b8._0_4_ = local_90c;
  local_648.Translation.XY.m128d_f64[0] = dVar47;
  local_648.Translation.XY.m128d_f64[1] = dVar56;
  local_648.Translation.ZW.m128d_f64[0] = dVar62;
  local_648.Translation.ZW.m128d_f64[1] = dVar26;
  local_648.Scale3D.XY.m128d_f64[0] = dVar8;
  local_648.Scale3D.XY.m128d_f64[1] = dVar9;
  local_648.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_648.Scale3D.ZW.m128d_f64[1] = dVar61;
  local_8b8.Name.Number = 0;
  local_648.Rotation.XY.m128d_f64[0] = dVar41;
  local_648.Rotation.XY.m128d_f64[1] = dVar45;
  local_648.Rotation.ZW.m128d_f64[0] = dVar51;
  local_648.Rotation.ZW.m128d_f64[1] = dVar55;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar15,&local_868,*pFVar18,&local_8b8,&local_648,true,User,
             false,false);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a20c5:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a20c5;
  }
  local_778._s_0.X = ___xmm_c044000000000000c044000000000000;
  local_778._s_0.Y = _UNK_15219d578;
  local_778._s_0.Z = __real_4044000000000000;
  pTVar17 = AnimationCore::QuatFromEuler(&local_1e8,(TVector<double> *)&local_778._s_0,XZY,false);
  dVar56 = _UNK_151e77bc8;
  dVar47 = ___xmm_00000000000000004044000000000000;
  dVar26 = _UNK_151bce3f8;
  dVar62 = ___xmm_40440000000000004044000000000000;
  local_2c8 = ___xmm_40440000000000004044000000000000;
  dStack_2c0 = _UNK_151bce3f8;
  dVar41 = pTVar17->X;
  dVar45 = pTVar17->Y;
  dVar51 = pTVar17->Z;
  dVar55 = pTVar17->W;
  local_2b8 = ___xmm_00000000000000004044000000000000;
  dStack_2b0 = _UNK_151e77bc8;
  local_2a8 = dVar8;
  dStack_2a0 = dVar9;
  local_298 = dVar57;
  dStack_290 = dVar61;
  local_900 = local_900 & 0xffffff00;
  FStack_8fc.Value = 0;
  uStack_8f8 = 0;
  local_2e8 = dVar41;
  dStack_2e0 = dVar45;
  local_2d8 = dVar51;
  dStack_2d0 = dVar55;
  pFVar18 = ::FName::FName(&local_7d8,L"Parent2");
  local_8d8.Name.ComparisonIndex.Value = FStack_8fc.Value;
  local_8d8._0_4_ = local_900;
  local_5e8.Translation.XY.m128d_f64[0] = dVar62;
  local_5e8.Translation.XY.m128d_f64[1] = dVar26;
  local_5e8.Translation.ZW.m128d_f64[0] = dVar47;
  local_5e8.Translation.ZW.m128d_f64[1] = dVar56;
  local_5e8.Scale3D.XY.m128d_f64[0] = dVar8;
  local_5e8.Scale3D.XY.m128d_f64[1] = dVar9;
  local_5e8.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_5e8.Scale3D.ZW.m128d_f64[1] = dVar61;
  local_8d8.Name.Number = 0;
  local_5e8.Rotation.XY.m128d_f64[0] = dVar41;
  local_5e8.Rotation.XY.m128d_f64[1] = dVar45;
  local_5e8.Rotation.ZW.m128d_f64[0] = dVar51;
  local_5e8.Rotation.ZW.m128d_f64[1] = dVar55;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar15,&local_858,*pFVar18,&local_8d8,&local_5e8,true,User,
             false,false);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2208:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2208;
  }
  local_760._s_0.X = ___xmm_4049000000000000c049000000000000;
  local_760._s_0.Y = _UNK_150b2d2f8;
  local_760._s_0.Z = __real_c049000000000000;
  pTVar17 = AnimationCore::QuatFromEuler(&local_1c8,(TVector<double> *)&local_760._s_0,XZY,false);
  dVar56 = _UNK_15219d3b8;
  dVar47 = ___xmm_0000000000000000404e000000000000;
  dVar26 = _UNK_15076bf58;
  dVar62 = ___xmm_404e000000000000404e000000000000;
  local_268 = ___xmm_404e000000000000404e000000000000;
  dStack_260 = _UNK_15076bf58;
  dVar41 = pTVar17->X;
  dVar45 = pTVar17->Y;
  dVar51 = pTVar17->Z;
  dVar55 = pTVar17->W;
  local_258 = ___xmm_0000000000000000404e000000000000;
  dStack_250 = _UNK_15219d3b8;
  local_248 = dVar8;
  dStack_240 = dVar9;
  local_238 = dVar57;
  dStack_230 = dVar61;
  local_8f4 = local_8f4 & 0xffffff00;
  FStack_8f0.Value = 0;
  uStack_8ec = 0;
  local_288 = dVar41;
  dStack_280 = dVar45;
  local_278 = dVar51;
  dStack_270 = dVar55;
  pFVar18 = ::FName::FName(&local_7d0,L"Parent3");
  local_8a8.Name.ComparisonIndex.Value = FStack_8f0.Value;
  local_8a8._0_4_ = local_8f4;
  local_588.Translation.XY.m128d_f64[0] = dVar62;
  local_588.Translation.XY.m128d_f64[1] = dVar26;
  local_588.Translation.ZW.m128d_f64[0] = dVar47;
  local_588.Translation.ZW.m128d_f64[1] = dVar56;
  local_588.Scale3D.XY.m128d_f64[0] = dVar8;
  local_588.Scale3D.XY.m128d_f64[1] = dVar9;
  local_588.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_588.Scale3D.ZW.m128d_f64[1] = dVar61;
  local_8a8.Name.Number = 0;
  local_588.Rotation.XY.m128d_f64[0] = dVar41;
  local_588.Rotation.XY.m128d_f64[1] = dVar45;
  local_588.Rotation.ZW.m128d_f64[0] = dVar51;
  local_588.Rotation.ZW.m128d_f64[1] = dVar55;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar15,&local_848,*pFVar18,&local_8a8,&local_588,true,User,
             false,false);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  dVar41 = dVar62;
  dVar45 = dVar26;
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2354:
    dVar26 = dVar45;
    dVar62 = dVar41;
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchyController_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    dVar41 = ___xmm_404e000000000000404e000000000000;
    dVar45 = _UNK_15076bf58;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2354;
  }
  local_748._s_0.Z = __real_404e000000000000;
  local_748._s_0.X = dVar62;
  local_748._s_0.Y = dVar26;
  pTVar17 = AnimationCore::QuatFromEuler(&local_1a8,(TVector<double> *)&local_748._s_0,XZY,false);
  dVar56 = _UNK_15219d3c8;
  dVar47 = ___xmm_00000000000000004054000000000000;
  dVar26 = _UNK_1517983a8;
  dVar62 = ___xmm_40540000000000004054000000000000;
  local_3e8 = ___xmm_40540000000000004054000000000000;
  dStack_3e0 = _UNK_1517983a8;
  dVar41 = pTVar17->X;
  dVar45 = pTVar17->Y;
  dVar51 = pTVar17->Z;
  dVar55 = pTVar17->W;
  local_3d8 = ___xmm_00000000000000004054000000000000;
  dStack_3d0 = _UNK_15219d3c8;
  local_3c8 = dVar8;
  dStack_3c0 = dVar9;
  local_3b8 = dVar57;
  dStack_3b0 = dVar61;
  local_8e8 = local_8e8 & 0xffffff00;
  FStack_8e4.Value = 0;
  uStack_8e0 = 0;
  local_408 = dVar41;
  dStack_400 = dVar45;
  local_3f8 = dVar51;
  dStack_3f0 = dVar55;
  pFVar18 = ::FName::FName(local_7c8,L"Parent4");
  local_898.Name.ComparisonIndex.Value = FStack_8e4.Value;
  local_898._0_4_ = local_8e8;
  local_528.Translation.XY.m128d_f64[0] = dVar62;
  local_528.Translation.XY.m128d_f64[1] = dVar26;
  local_528.Translation.ZW.m128d_f64[0] = dVar47;
  local_528.Translation.ZW.m128d_f64[1] = dVar56;
  local_528.Scale3D.XY.m128d_f64[0] = dVar8;
  local_528.Scale3D.XY.m128d_f64[1] = dVar9;
  local_528.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_528.Scale3D.ZW.m128d_f64[1] = dVar61;
  local_898.Name.Number = 0;
  local_528.Rotation.XY.m128d_f64[0] = dVar41;
  local_528.Rotation.XY.m128d_f64[1] = dVar45;
  local_528.Rotation.ZW.m128d_f64[0] = dVar51;
  local_528.Rotation.ZW.m128d_f64[1] = dVar55;
  URigHierarchyController::AddBone
            ((URigHierarchyController *)pUVar15,&local_838,*pFVar18,&local_898,&local_528,true,User,
             false,false);
  this_00 = &this->_padding_;
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2493:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2493;
  }
  *(URigHierarchy **)(this->_padding_ + 0x1c8) = pUVar15;
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a24d7:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a24d7;
  }
  local_878.Type = local_888.Type;
  local_878._1_3_ = local_888._1_3_;
  local_878.Name.ComparisonIndex.Value = local_888.Name.ComparisonIndex.Value;
  local_878.Name.Number = local_888.Name.Number;
  iVar13 = URigHierarchy::GetIndex(pUVar15,&local_878,true);
  URigHierarchy::GetGlobalTransformByIndex(pUVar15,&local_128,iVar13,true);
  pTVar1 = &(this->Unit).Parents;
  (this->Unit).Input.Rotation.XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
  (this->Unit).Input.Rotation.XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
  local_958.Name.Number = local_868.Name.Number;
  (this->Unit).Input.Rotation.ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
  (this->Unit).Input.Rotation.ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
  uStack_94c = 0x3f800000;
  (this->Unit).Input.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
  (this->Unit).Input.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
  (this->Unit).Input.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
  (this->Unit).Input.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1];
  (this->Unit).Input.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
  (this->Unit).Input.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
  (this->Unit).Input.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
  (this->Unit).Input.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_958.Type = local_868.Type;
  local_958._1_3_ = local_868._1_3_;
  local_958.Name.ComparisonIndex.Value = local_868.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_958) &&
      (&local_958 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  iVar13 = (this->Unit).Parents.ArrayNum;
  if (iVar13 == (this->Unit).Parents.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_93c = 0x3f800000;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar13 + 1;
  *(undefined8 *)pFVar19 = local_958._0_8_;
  *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_94c,local_958.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_948.Name.Number = local_858.Name.Number;
  local_948.Type = local_858.Type;
  local_948._1_3_ = local_858._1_3_;
  local_948.Name.ComparisonIndex.Value = local_858.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_948) &&
      (&local_948 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  iVar13 = (this->Unit).Parents.ArrayNum;
  if (iVar13 == (this->Unit).Parents.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_92c = 0x3f800000;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar13 + 1;
  *(undefined8 *)pFVar19 = local_948._0_8_;
  *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_93c,local_948.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_938.Name.Number = local_848.Name.Number;
  local_938.Type = local_848.Type;
  local_938._1_3_ = local_848._1_3_;
  local_938.Name.ComparisonIndex.Value = local_848.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_938) &&
      (&local_938 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  iVar13 = (this->Unit).Parents.ArrayNum;
  if (iVar13 == (this->Unit).Parents.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  uStack_91c = 0x3f800000;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
  (this->Unit).Parents.ArrayNum = iVar13 + 1;
  *(undefined8 *)pFVar19 = local_938._0_8_;
  *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_92c,local_938.Name.Number);
  pFVar2 = (FRigElementKey *)(pTVar1->AllocatorInstance).Data;
  local_928.Name.Number = local_838.Name.Number;
  local_928.Type = local_838.Type;
  local_928._1_3_ = local_838._1_3_;
  local_928.Name.ComparisonIndex.Value = local_838.Name.ComparisonIndex.Value;
  if (((pFVar2 <= &local_928) &&
      (&local_928 <
       (FRigElementKey *)((longlong)pFVar2 + (longlong)(this->Unit).Parents.ArrayMax * 0x10))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  iVar13 = (this->Unit).Parents.ArrayNum;
  if (iVar13 == (this->Unit).Parents.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar1->AllocatorInstance,&(this->Unit).Parents.ArrayMax);
  }
  (this->Unit).Parents.ArrayNum = iVar13 + 1;
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
  *(undefined8 *)pFVar19 = local_928._0_8_;
  *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_91c,local_928.Name.Number);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2891:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2891;
  }
  URigHierarchy::ResetPoseToInitial(pUVar15,Bone);
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a28d8:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a28d8;
  }
  URigHierarchy::ResetPoseToInitial(pUVar15,Bone);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2918:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2918;
  }
  dVar41 = __real_c059000000000000;
  local_730._s_0.Z = __real_c059000000000000;
  local_730._s_0.X = ___xmm_40590000000000004059000000000000;
  local_730._s_0.Y = _UNK_1512468d8;
  pTVar17 = AnimationCore::QuatFromEuler(&local_188,(TVector<double> *)&local_730._s_0,XZY,false);
  dVar62 = _UNK_15219d578;
  dVar55 = ___xmm_c044000000000000c044000000000000;
  dVar51 = _UNK_15219d418;
  dVar45 = ___xmm_0000000000000000c044000000000000;
  local_4c8.Rotation.XY.m128d_f64[0] = pTVar17->X;
  local_4c8.Rotation.XY.m128d_f64[1] = pTVar17->Y;
  local_4c8.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
  local_4c8.Rotation.ZW.m128d_f64[1] = pTVar17->W;
  local_4c8.Translation.XY.m128d_f64[0] = ___xmm_c044000000000000c044000000000000;
  local_4c8.Translation.XY.m128d_f64[1] = _UNK_15219d578;
  local_4c8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000c044000000000000;
  local_4c8.Translation.ZW.m128d_f64[1] = _UNK_15219d418;
  local_4c8.Scale3D.XY.m128d_f64[0] = dVar8;
  local_4c8.Scale3D.XY.m128d_f64[1] = dVar9;
  local_4c8.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_4c8.Scale3D.ZW.m128d_f64[1] = dVar61;
  URigHierarchy::SetGlobalTransformByIndex(pUVar15,2,&local_4c8,false,true,false,false);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).AdvancedSettings.InterpolationType = Average;
  FRigUnit_ParentConstraintMath::Execute(&this->Unit,pFVar3);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_808,L"unexpected translation for average interpolation type");
  local_6b8 = (this->Unit).Output.Translation.ZW.m128d_f64[0];
  dVar26 = (this->Unit).Output.Translation.XY.m128d_f64[0] - ___real_c02151eb80000000;
  if (((__real_3f947ae140000000 <
        (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar26 = (this->Unit).Output.Translation.XY.m128d_f64[1] - ___real_401c0a3d80000000,
      uVar39 = SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar40 = (uint)((ulonglong)dVar26 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f947ae140000000 <= (double)CONCAT44(uVar40,uVar39) &&
      (double)CONCAT44(uVar40,uVar39) != __real_3f947ae140000000)) ||
     (__real_3f947ae140000000 <
      (double)CONCAT44((uint)((ulonglong)(local_6b8 - ___real_c02a000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_6b8 - ___real_c02a000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  (*pcVar4)(this,uVar23,&local_808);
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  dVar26 = (this->Unit).Output.Rotation.XY.m128d_f64[0];
  dVar47 = (this->Unit).Output.Rotation.XY.m128d_f64[1];
  dVar56 = (this->Unit).Output.Rotation.ZW.m128d_f64[0];
  dVar60 = (this->Unit).Output.Rotation.ZW.m128d_f64[1];
  local_718._s_0.X = ___xmm_c016b74bc00000004015a1cac0000000;
  local_718._s_0.Y = _UNK_15219d548;
  local_718._s_0.Z = __real_c0413851e0000000;
  AnimationCore::QuatFromEuler(&local_828,(TVector<double> *)&local_718._s_0,XZY,false);
  pFVar22 = &local_7f8;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar20 = ::FString::FString(pFVar22,L"unexpected rotation for average interpolation type");
  dVar10 = __real_3f50624de0000000;
  uVar7 = _UNK_15061cc8c;
  uVar6 = _UNK_15061cc88;
  uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar50 = dVar26 - local_828.X;
  dVar54 = dVar47 - local_828.Y;
  dVar26 = dVar26 + local_828.X;
  dVar47 = dVar47 + local_828.Y;
  dVar48 = local_828.Z + dVar56;
  dVar49 = local_828.W + dVar60;
  dVar56 = dVar56 - local_828.Z;
  dVar60 = dVar60 - local_828.W;
  auVar52._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar52._8_4_ = SUB84(dVar54,0) & _UNK_15061cc88;
  auVar52._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c;
  uVar44 = SUB84(__real_3f50624de0000000,0);
  auVar27._8_4_ = uVar44;
  auVar27._0_8_ = __real_3f50624de0000000;
  uVar46 = (undefined4)((ulonglong)__real_3f50624de0000000 >> 0x20);
  auVar27._12_4_ = uVar46;
  auVar58._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar56,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar58._8_4_ = SUB84(dVar60,0) & _UNK_15061cc88;
  auVar58._12_4_ = (uint)((ulonglong)dVar60 >> 0x20) & _UNK_15061cc8c;
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar52._8_8_);
  auVar28._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar52._0_8_);
  uVar21 = movmskpd((int)pFVar22,auVar28);
  auVar29._8_4_ = uVar44;
  auVar29._0_8_ = __real_3f50624de0000000;
  auVar29._12_4_ = uVar46;
  auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < auVar58._8_8_);
  auVar30._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar58._0_8_);
  iVar13 = movmskpd((int)pFVar20,auVar30);
  uVar14 = iVar13 * 4 | uVar21;
  if (uVar14 == 0) {
LAB_14a4a2b7c:
    uVar23 = 1;
  }
  else {
    auVar31._8_4_ = uVar44;
    auVar31._0_8_ = __real_3f50624de0000000;
    auVar31._12_4_ = uVar46;
    auVar42._8_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar49,0) & _UNK_15061cc88));
    auVar42._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar14 = movmskpd(uVar14,auVar42);
    auVar32._8_8_ =
         -(ulonglong)
          (auVar31._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar47,0) & _UNK_15061cc88));
    auVar32._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar13 = movmskpd(uVar21,auVar32);
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) goto LAB_14a4a2b7c;
    uVar23 = 0;
  }
  (*pcVar4)(this,uVar23,&local_7f8);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2bd1:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2bd1;
  }
  URigHierarchy::ResetPoseToInitial(pUVar15,Bone);
  pUVar15 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar15 == (URigHierarchy *)0x0) {
LAB_14a4a2c19:
    pUVar15 = pUVar24;
  }
  else {
    pUVar16 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar13 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar16->_padding_)) goto LAB_14a4a2c19;
  }
  local_700._s_0.Z = dVar41;
  local_700._s_0.X = ___xmm_40590000000000004059000000000000;
  local_700._s_0.Y = _UNK_1512468d8;
  pTVar17 = AnimationCore::QuatFromEuler(&local_148,(TVector<double> *)&local_700._s_0,XZY,false);
  local_468.Translation.XY.m128d_f64[0] = dVar55;
  local_468.Translation.XY.m128d_f64[1] = dVar62;
  local_468.Rotation.XY.m128d_f64[0] = pTVar17->X;
  local_468.Rotation.XY.m128d_f64[1] = pTVar17->Y;
  local_468.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
  local_468.Rotation.ZW.m128d_f64[1] = pTVar17->W;
  local_468.Translation.ZW.m128d_f64[0] = dVar45;
  local_468.Translation.ZW.m128d_f64[1] = dVar51;
  local_468.Scale3D.XY.m128d_f64[0] = dVar8;
  local_468.Scale3D.XY.m128d_f64[1] = dVar9;
  local_468.Scale3D.ZW.m128d_f64[0] = dVar57;
  local_468.Scale3D.ZW.m128d_f64[1] = dVar61;
  URigHierarchy::SetGlobalTransformByIndex(pUVar15,2,&local_468,false,true,false,false);
  pFVar3 = (FControlRigExecuteContext *)this->_padding_;
  (this->Unit).AdvancedSettings.InterpolationType = Shortest;
  FRigUnit_ParentConstraintMath::Execute(&this->Unit,pFVar3);
  dVar41 = (this->Unit).Output.Rotation.XY.m128d_f64[0];
  dVar45 = (this->Unit).Output.Rotation.XY.m128d_f64[1];
  dVar51 = (this->Unit).Output.Rotation.ZW.m128d_f64[0];
  dVar55 = (this->Unit).Output.Rotation.ZW.m128d_f64[1];
  local_6e8._s_0.X = ___xmm_c020a9fbe0000000bff3581060000000;
  local_6e8._s_0.Y = _UNK_15219d558;
  local_6e8._s_0.Z = __real_c03905a1c0000000;
  pTVar17 = AnimationCore::QuatFromEuler(&local_168,(TVector<double> *)&local_6e8._s_0,XZY,false);
  pFVar22 = &local_7e8;
  local_828.X = pTVar17->X;
  local_828.Y = pTVar17->Y;
  local_828.Z = pTVar17->Z;
  local_828.W = pTVar17->W;
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  pFVar20 = ::FString::FString(pFVar22,L"unexpected rotation for shortest interpolation type");
  dVar57 = dVar41 - local_828.X;
  dVar61 = dVar45 - local_828.Y;
  dVar41 = dVar41 + local_828.X;
  dVar45 = dVar45 + local_828.Y;
  auVar59._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar40,SUB84(dVar57,0) & uVar39);
  auVar59._8_4_ = SUB84(dVar61,0) & uVar6;
  auVar59._12_4_ = (uint)((ulonglong)dVar61 >> 0x20) & uVar7;
  auVar43._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar40,SUB84(dVar41,0) & uVar39);
  auVar43._8_4_ = SUB84(dVar45,0) & uVar6;
  auVar43._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & uVar7;
  dVar41 = local_828.Z + dVar51;
  dVar45 = local_828.W + dVar55;
  dVar51 = dVar51 - local_828.Z;
  dVar55 = dVar55 - local_828.W;
  auVar53._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar40,SUB84(dVar51,0) & uVar39);
  auVar53._8_4_ = SUB84(dVar55,0) & uVar6;
  auVar53._12_4_ = (uint)((ulonglong)dVar55 >> 0x20) & uVar7;
  auVar33._8_4_ = uVar44;
  auVar33._0_8_ = dVar10;
  auVar33._12_4_ = uVar46;
  auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < auVar53._8_8_);
  auVar34._0_8_ = -(ulonglong)(dVar10 < auVar53._0_8_);
  iVar13 = movmskpd((int)pFVar22,auVar34);
  auVar35._8_4_ = uVar44;
  auVar35._0_8_ = dVar10;
  auVar35._12_4_ = uVar46;
  auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < auVar59._8_8_);
  auVar36._0_8_ = -(ulonglong)(dVar10 < auVar59._0_8_);
  uVar14 = movmskpd((int)pFVar20,auVar36);
  uVar21 = iVar13 << 2 | uVar14;
  if (uVar21 != 0) {
    auVar37._8_4_ = uVar44;
    auVar37._0_8_ = dVar10;
    auVar37._12_4_ = uVar46;
    auVar38._8_8_ =
         -(ulonglong)
          (auVar37._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar7,SUB84(dVar45,0) & uVar6));
    auVar38._0_8_ =
         -(ulonglong)
          (dVar10 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar40,
                                     SUB84(dVar41,0) & uVar39));
    uVar39 = movmskpd(uVar21,auVar38);
    lVar25 = -(ulonglong)(dVar10 < auVar43._8_8_);
    auVar5._8_4_ = (int)lVar25;
    auVar5._0_8_ = -(ulonglong)(dVar10 < auVar43._0_8_);
    auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar13 = movmskpd(uVar14,auVar5);
    if ((uVar39 & 0x3fffffff) != 0 || iVar13 != 0) {
      uVar23 = 0;
      goto LAB_14a4a2e0f;
    }
  }
  uVar23 = 1;
LAB_14a4a2e0f:
  (*pcVar4)(this,uVar23,&local_7e8,0);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4a2ec0

FString * __thiscall
FRigUnit_ParentConstraintMathTest::GetBeautifiedTestName
          (FRigUnit_ParentConstraintMathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ParentConstraintMath");
  return __return_storage_ptr__;
}

